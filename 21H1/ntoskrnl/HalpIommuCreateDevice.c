/*
 * XREFs of HalpIommuCreateDevice @ 0x140860044
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404C4AD0 (HalpIommuUnblockDevice.c)
 *     IommuDomainAttachDevice @ 0x1404D4F90 (IommuDomainAttachDevice.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407AE208 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1403764C0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140379D08 (HalpMmAllocCtxAlloc.c)
 *     Feature_Servicing_30140909__private_IsEnabled @ 0x1403EBB18 (Feature_Servicing_30140909__private_IsEnabled.c)
 *     HalpIommuCloneDeviceId @ 0x1403EBB80 (HalpIommuCloneDeviceId.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HalpIommuCreateDeviceInternal @ 0x1404BFE70 (HalpIommuCreateDeviceInternal.c)
 *     HalpIommuCheckDpptException @ 0x1404C3D88 (HalpIommuCheckDpptException.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404C48B8 (HalpIommuQueryAcpiDeviceMapping.c)
 *     IommupHvRegisterDeviceId @ 0x1404D4E98 (IommupHvRegisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x1405C07BC (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuCreateDevice(__int64 Src, int a2, __int64 *a3, _BYTE *a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // rsi
  char v8; // r14
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 i; // r11
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r15
  int AcpiDeviceMapping; // ebx
  __int64 v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // r14
  __int64 *v20; // rcx
  int IsEnabled; // eax
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _DWORD *v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29; // [rsp+38h] [rbp-40h] BYREF
  __int64 v30; // [rsp+40h] [rbp-38h] BYREF
  __int64 v31; // [rsp+48h] [rbp-30h] BYREF
  __int128 Srca; // [rsp+50h] [rbp-28h] BYREF
  __int64 v33; // [rsp+60h] [rbp-18h]
  _DWORD *v34; // [rsp+C0h] [rbp+48h] BYREF
  int v35; // [rsp+C8h] [rbp+50h]
  __int64 *v36; // [rsp+D0h] [rbp+58h]
  char v37; // [rsp+D8h] [rbp+60h]

  v36 = a3;
  v35 = a2;
  v34 = (_DWORD *)Src;
  v33 = 0LL;
  v28 = 0LL;
  v37 = 0;
  v31 = 0LL;
  v6 = (_DWORD *)Src;
  v30 = 0LL;
  v7 = 0LL;
  v29 = 0LL;
  v8 = 0;
  v9 = 0LL;
  Srca = 0LL;
  if ( a4 )
    *a4 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock, 0LL);
  for ( i = HalpIommuDeviceCreatedList; (__int64 *)i != &HalpIommuDeviceCreatedList; i = *(_QWORD *)v12 )
  {
    if ( IidAreIdsStrictlyEqual(*(int **)(i + 16), (__int64)v6) )
    {
      v16 = *(_QWORD *)(v12 + 24);
      ++*(_DWORD *)(v12 + 32);
      *a3 = v16;
      AcpiDeviceMapping = 0;
      goto LABEL_46;
    }
  }
  v13 = HalpMmAllocCtxAlloc(v10, 40LL);
  v14 = v13;
  if ( v13 )
  {
    *(_OWORD *)v13 = 0LL;
    *(_OWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 32) = 0LL;
    AcpiDeviceMapping = HalpIommuCloneDeviceId(v6, (__int64 *)(v13 + 16));
    if ( AcpiDeviceMapping < 0 )
    {
LABEL_36:
      v24 = *(_QWORD *)(v14 + 16);
      if ( v24 )
        HalpMmAllocCtxFree(v17, v24);
      HalpMmAllocCtxFree(v17, v14);
      goto LABEL_39;
    }
    v18 = (void *)HalpMmAllocCtxAlloc(v17, 216LL);
    v19 = (__int64)v18;
    if ( !v18 )
    {
      AcpiDeviceMapping = -1073741670;
      v8 = 0;
      goto LABEL_36;
    }
    *(_QWORD *)(v14 + 24) = v18;
    memset(v18, 0, 0xD8uLL);
    if ( HalpHvIommu )
    {
      if ( *v6 == 2 )
      {
        AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping((__int64)v6, (__int64)&Srca);
        if ( AcpiDeviceMapping < 0 )
          goto LABEL_35;
        AcpiDeviceMapping = HalpIommuCloneDeviceId(&Srca, (__int64 *)&v34);
        if ( AcpiDeviceMapping < 0 )
        {
          v6 = v34;
          goto LABEL_35;
        }
        IsEnabled = Feature_Servicing_30140909__private_IsEnabled();
        v6 = v34;
        if ( IsEnabled )
        {
          v7 = (__int64)v34;
          v28 = v34;
        }
        else
        {
          v37 = 1;
        }
      }
      AcpiDeviceMapping = IommupHvRegisterDeviceId((__int64)v6, &v29);
      if ( AcpiDeviceMapping < 0 )
        goto LABEL_35;
      v9 = v29;
    }
    else
    {
      AcpiDeviceMapping = HalpIommuCreateDeviceInternal((__int64)v6, v35, &v30, &v31, a4);
      if ( AcpiDeviceMapping < 0 )
        goto LABEL_35;
    }
    if ( HalpHvIommu )
    {
      *(_QWORD *)(v19 + 24) = v9;
    }
    else
    {
      *(_QWORD *)v19 = v30;
      *(_QWORD *)(v19 + 8) = v31;
    }
    if ( !(unsigned int)Feature_Servicing_30140909__private_IsEnabled() )
    {
      *(_QWORD *)(v19 + 32) = v6;
LABEL_32:
      *(_BYTE *)(v19 + 16) = HalpIommuCheckDpptException(v6);
      v20 = &HalpIommuDeviceCreatedList;
      *v36 = v19;
      *(_DWORD *)(v14 + 32) = 1;
      v23 = (__int64 *)qword_140C49DD8;
      if ( *(__int64 **)qword_140C49DD8 != &HalpIommuDeviceCreatedList )
        __fastfail(3u);
      *(_QWORD *)v14 = &HalpIommuDeviceCreatedList;
      *(_QWORD *)(v14 + 8) = v23;
      *v23 = v14;
      qword_140C49DD8 = v14;
      if ( AcpiDeviceMapping >= 0 )
        goto LABEL_46;
      goto LABEL_35;
    }
    if ( v7 || (v22 = HalpIommuCloneDeviceId(v6, (__int64 *)&v28), v7 = (__int64)v28, AcpiDeviceMapping = v22, v22 >= 0) )
    {
      *(_QWORD *)(v19 + 32) = v7;
      goto LABEL_32;
    }
LABEL_35:
    HalpMmAllocCtxFree((__int64)v20, v19);
    v8 = v37;
    goto LABEL_36;
  }
  AcpiDeviceMapping = -1073741670;
LABEL_39:
  if ( (unsigned int)Feature_Servicing_30140909__private_IsEnabled() )
  {
    if ( !v7 )
      goto LABEL_46;
    v26 = v7;
    goto LABEL_45;
  }
  if ( v8 && v6 )
  {
    v26 = (__int64)v6;
LABEL_45:
    HalpMmAllocCtxFree(v25, v26);
  }
LABEL_46:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  return (unsigned int)AcpiDeviceMapping;
}
