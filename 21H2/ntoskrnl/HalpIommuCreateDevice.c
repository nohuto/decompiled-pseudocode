/*
 * XREFs of HalpIommuCreateDevice @ 0x140846E20
 * Callers:
 *     HalpIommuUnblockDevice @ 0x14051BA00 (HalpIommuUnblockDevice.c)
 *     IommuDomainAttachDevice @ 0x140527CF0 (IommuDomainAttachDevice.c)
 *     IommuDeviceCreate @ 0x1408459C0 (IommuDeviceCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuCreateDeviceInternal @ 0x1403CD768 (HalpIommuCreateDeviceInternal.c)
 *     HalpIommuCloneDeviceId @ 0x1403CD7E0 (HalpIommuCloneDeviceId.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpIommuCheckDpptException @ 0x14051A654 (HalpIommuCheckDpptException.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x14051B7E4 (HalpIommuQueryAcpiDeviceMapping.c)
 *     IommupHvRegisterDeviceId @ 0x140527B18 (IommupHvRegisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x14064F634 (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuCreateDevice(_DWORD *Src, void *a2, __int64 *a3)
{
  _DWORD *v3; // r14
  __int64 v4; // r15
  __int64 *v5; // r13
  __int64 v6; // r12
  __int64 v8; // rcx
  __int64 i; // r11
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  int AcpiDeviceMapping; // ebx
  void *v14; // rax
  __int64 v15; // rsi
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  __int64 v21; // r11
  __int64 v22; // rax
  int v23; // eax
  PVOID v24; // r12
  PVOID v25; // rcx
  __int64 *v26; // rax
  __int64 *v27; // rax
  __int64 v28; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v29; // [rsp+28h] [rbp-30h] BYREF
  __int64 v30; // [rsp+30h] [rbp-28h] BYREF
  __int128 Srca; // [rsp+38h] [rbp-20h] BYREF
  __int64 v32; // [rsp+48h] [rbp-10h]
  _DWORD *v33; // [rsp+A0h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+50h]
  __int64 *v35; // [rsp+B0h] [rbp+58h]
  __int64 v36; // [rsp+B8h] [rbp+60h] BYREF

  v35 = a3;
  Object = a2;
  v33 = Src;
  v3 = Src;
  v30 = 0LL;
  v32 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v36 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  Srca = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock, 0LL);
  for ( i = HalpIommuDeviceCreatedList; (__int64 *)i != &HalpIommuDeviceCreatedList; i = *(_QWORD *)v21 )
  {
    if ( IidAreIdsStrictlyEqual(*(int **)(i + 16), (__int64)v3) )
    {
      v22 = *(_QWORD *)(v21 + 24);
      ++*(_DWORD *)(v21 + 32);
      *a3 = v22;
      AcpiDeviceMapping = 0;
      goto LABEL_15;
    }
  }
  v10 = HalpMmAllocCtxAlloc(v8, 40LL);
  v11 = v10;
  if ( !v10 )
  {
    AcpiDeviceMapping = -1073741670;
    goto LABEL_15;
  }
  *(_OWORD *)v10 = 0LL;
  *(_OWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 32) = 0LL;
  AcpiDeviceMapping = HalpIommuCloneDeviceId(v3, (__int64 *)(v10 + 16));
  if ( AcpiDeviceMapping < 0 )
    goto LABEL_11;
  v14 = (void *)HalpMmAllocCtxAlloc(v12, 232LL);
  v15 = (__int64)v14;
  if ( !v14 )
  {
    AcpiDeviceMapping = -1073741670;
LABEL_11:
    v17 = *(_QWORD *)(v11 + 16);
    if ( v17 )
      HalpMmAllocCtxFree(v12, v17);
    HalpMmAllocCtxFree(v12, v11);
    if ( v4 )
      HalpMmAllocCtxFree(v18, v4);
    goto LABEL_15;
  }
  *(_QWORD *)(v11 + 24) = v14;
  memset(v14, 0, 0xE8uLL);
  if ( HalpHvIommu )
  {
    if ( *v3 == 2 )
    {
      AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping((__int64)v3, (__int64)&Srca);
      if ( AcpiDeviceMapping < 0 )
        goto LABEL_8;
      AcpiDeviceMapping = HalpIommuCloneDeviceId(&Srca, (__int64 *)&v33);
      if ( AcpiDeviceMapping < 0 )
        goto LABEL_8;
      v3 = v33;
      v4 = (__int64)v33;
      v36 = (__int64)v33;
    }
    AcpiDeviceMapping = IommupHvRegisterDeviceId((__int64)v3, &v28);
    if ( AcpiDeviceMapping < 0 )
    {
LABEL_8:
      v16 = *(void **)(v15 + 8);
      if ( v16 )
        ObfDereferenceObjectWithTag(v16, 0x446C6148u);
      HalpMmAllocCtxFree((__int64)v16, v15);
      goto LABEL_11;
    }
    v6 = v28;
  }
  else
  {
    AcpiDeviceMapping = HalpIommuCreateDeviceInternal((__int64)v3, &v30, &v29);
    if ( AcpiDeviceMapping < 0 )
      goto LABEL_8;
    v5 = v29;
  }
  if ( HalpHvIommu )
  {
    *(_QWORD *)(v15 + 32) = v6;
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v30;
    *(_QWORD *)(v15 + 32) = v5;
  }
  if ( !v4 )
  {
    v23 = HalpIommuCloneDeviceId(v3, &v36);
    v4 = v36;
    AcpiDeviceMapping = v23;
    if ( v23 < 0 )
      goto LABEL_8;
  }
  v24 = Object;
  v25 = Object;
  *(_QWORD *)v15 = v4;
  ObfReferenceObjectWithTag(v25, 0x446C6148u);
  *(_QWORD *)(v15 + 8) = v24;
  *(_BYTE *)(v15 + 56) = HalpIommuCheckDpptException(v3);
  v26 = v35;
  *(_DWORD *)(v11 + 32) = 1;
  *v26 = v15;
  v27 = (__int64 *)qword_140C4BE38;
  if ( *(__int64 **)qword_140C4BE38 != &HalpIommuDeviceCreatedList )
    __fastfail(3u);
  *(_QWORD *)v11 = &HalpIommuDeviceCreatedList;
  *(_QWORD *)(v11 + 8) = v27;
  *v27 = v11;
  qword_140C4BE38 = v11;
  if ( AcpiDeviceMapping < 0 )
    goto LABEL_8;
LABEL_15:
  v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
    ExfTryToWakePushLock(&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  return (unsigned int)AcpiDeviceMapping;
}
