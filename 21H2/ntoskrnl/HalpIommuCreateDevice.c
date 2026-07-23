/*
 * XREFs of HalpIommuCreateDevice @ 0x140864B24
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404CA0C0 (HalpIommuUnblockDevice.c)
 *     IommuDomainAttachDevice @ 0x1404DA620 (IommuDomainAttachDevice.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3BC8 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuCloneDeviceId @ 0x1403F00C8 (HalpIommuCloneDeviceId.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpIommuCreateDeviceInternal @ 0x1404C56C4 (HalpIommuCreateDeviceInternal.c)
 *     HalpIommuCheckDpptException @ 0x1404C9330 (HalpIommuCheckDpptException.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404C9EA4 (HalpIommuQueryAcpiDeviceMapping.c)
 *     IommupHvRegisterDeviceId @ 0x1404DA528 (IommupHvRegisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x1405C65BC (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuCreateDevice(_DWORD *Src, int a2, __int64 *a3, _BYTE *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r13
  _DWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 i; // r11
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // r14
  int AcpiDeviceMapping; // ebx
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // r15
  __int64 *v18; // rcx
  int v19; // eax
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+38h] [rbp-30h] BYREF
  __int64 v26; // [rsp+40h] [rbp-28h] BYREF
  __int128 Srca; // [rsp+48h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-10h]
  _DWORD *v29; // [rsp+B0h] [rbp+48h] BYREF
  int v30; // [rsp+B8h] [rbp+50h]
  __int64 *v31; // [rsp+C0h] [rbp+58h]
  __int64 v32; // [rsp+C8h] [rbp+60h] BYREF

  v31 = a3;
  v30 = a2;
  v29 = Src;
  v4 = 0LL;
  v26 = 0LL;
  v5 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v32 = 0LL;
  v24 = 0LL;
  v8 = Src;
  Srca = 0LL;
  if ( a4 )
    *a4 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock, 0LL);
  for ( i = HalpIommuDeviceCreatedList; (__int64 *)i != &HalpIommuDeviceCreatedList; i = *(_QWORD *)v11 )
  {
    if ( IidAreIdsStrictlyEqual(*(int **)(i + 16), (__int64)v8) )
    {
      ++*(_DWORD *)(v11 + 32);
      *a3 = *(_QWORD *)(v11 + 24);
      AcpiDeviceMapping = 0;
      goto LABEL_34;
    }
  }
  v12 = HalpMmAllocCtxAlloc(v9, 40LL);
  v13 = v12;
  if ( !v12 )
  {
    AcpiDeviceMapping = -1073741670;
    goto LABEL_34;
  }
  *(_OWORD *)v12 = 0LL;
  *(_OWORD *)(v12 + 16) = 0LL;
  *(_QWORD *)(v12 + 32) = 0LL;
  AcpiDeviceMapping = HalpIommuCloneDeviceId(v8, (__int64 *)(v12 + 16));
  if ( AcpiDeviceMapping < 0 )
    goto LABEL_30;
  v16 = (void *)HalpMmAllocCtxAlloc(v15, 216LL);
  v17 = (__int64)v16;
  if ( !v16 )
  {
    AcpiDeviceMapping = -1073741670;
LABEL_30:
    v21 = *(_QWORD *)(v13 + 16);
    if ( v21 )
      HalpMmAllocCtxFree(v15, v21);
    HalpMmAllocCtxFree(v15, v13);
    if ( v4 )
      HalpMmAllocCtxFree(v22, v4);
    goto LABEL_34;
  }
  *(_QWORD *)(v13 + 24) = v16;
  memset(v16, 0, 0xD8uLL);
  if ( !HalpHvIommu )
  {
    AcpiDeviceMapping = HalpIommuCreateDeviceInternal((__int64)v8, v30, &v25, &v26, a4);
    if ( AcpiDeviceMapping >= 0 )
      goto LABEL_21;
    goto LABEL_29;
  }
  if ( *v8 == 2 )
  {
    AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping((__int64)v8, (__int64)&Srca);
    if ( AcpiDeviceMapping < 0 )
      goto LABEL_29;
    AcpiDeviceMapping = HalpIommuCloneDeviceId(&Srca, (__int64 *)&v29);
    if ( AcpiDeviceMapping < 0 )
      goto LABEL_29;
    v8 = v29;
    v4 = (__int64)v29;
    v32 = (__int64)v29;
  }
  AcpiDeviceMapping = IommupHvRegisterDeviceId((__int64)v8, &v24);
  if ( AcpiDeviceMapping < 0 )
  {
LABEL_29:
    HalpMmAllocCtxFree((__int64)v18, v17);
    goto LABEL_30;
  }
  v5 = v24;
LABEL_21:
  if ( HalpHvIommu )
  {
    *(_QWORD *)(v17 + 24) = v5;
  }
  else
  {
    *(_QWORD *)v17 = v25;
    *(_QWORD *)(v17 + 8) = v26;
  }
  if ( !v4 )
  {
    v19 = HalpIommuCloneDeviceId(v8, &v32);
    v4 = v32;
    AcpiDeviceMapping = v19;
    if ( v19 < 0 )
      goto LABEL_29;
  }
  *(_QWORD *)(v17 + 32) = v4;
  *(_BYTE *)(v17 + 16) = HalpIommuCheckDpptException(v8);
  v18 = &HalpIommuDeviceCreatedList;
  *v31 = v17;
  *(_DWORD *)(v13 + 32) = 1;
  v20 = (__int64 *)qword_140C49E58;
  if ( *(__int64 **)qword_140C49E58 != &HalpIommuDeviceCreatedList )
    __fastfail(3u);
  *(_QWORD *)v13 = &HalpIommuDeviceCreatedList;
  *(_QWORD *)(v13 + 8) = v20;
  *v20 = v13;
  qword_140C49E58 = v13;
  if ( AcpiDeviceMapping < 0 )
    goto LABEL_29;
LABEL_34:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  return (unsigned int)AcpiDeviceMapping;
}
