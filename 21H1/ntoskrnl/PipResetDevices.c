/*
 * XREFs of PipResetDevices @ 0x140A4C1C8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     _PnpCtxRegOpenKey @ 0x1406ADE68 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406B01D0 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1406B1148 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumValue @ 0x1406B2554 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406B268C (_PnpCtxRegQueryInfoKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1406D4250 (_CmGetMatchingFilteredDeviceList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     PipResetDevice @ 0x140A8E4D0 (PipResetDevice.c)
 */

__int64 __fastcall PipResetDevices(__int64 a1)
{
  __int64 v1; // r13
  ULONG v2; // r14d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  void *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  PVOID PoolWithTag; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _WORD *v15; // rbx
  int v16; // r13d
  struct _KTHREAD *v17; // rax
  PVOID v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG v24; // r15d
  int v25; // r12d
  int v26; // eax
  int MatchingFilteredDeviceList; // eax
  int v28; // edi
  PVOID v29; // rax
  _WORD *i; // rdi
  __int64 v31; // rax
  ULONG v32; // r15d
  int v33; // r12d
  int v34; // eax
  int v35; // eax
  _WORD *v36; // rax
  _WORD *v37; // rsi
  __int64 v38; // r15
  __int64 v39; // rax
  ULONG v40; // [rsp+50h] [rbp-39h] BYREF
  int v41; // [rsp+54h] [rbp-35h] BYREF
  int v42; // [rsp+58h] [rbp-31h]
  int v43; // [rsp+5Ch] [rbp-2Dh] BYREF
  void *v44; // [rsp+60h] [rbp-29h] BYREF
  __int64 v45; // [rsp+68h] [rbp-21h]
  void *v46; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v47; // [rsp+78h] [rbp-11h] BYREF
  int v48; // [rsp+7Ch] [rbp-Dh] BYREF
  int v49; // [rsp+80h] [rbp-9h] BYREF
  int v50; // [rsp+84h] [rbp-5h] BYREF
  unsigned int v51; // [rsp+88h] [rbp-1h]
  void *v52; // [rsp+90h] [rbp+7h] BYREF
  __int64 v53; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v54; // [rsp+F8h] [rbp+6Fh] BYREF
  ULONG v55; // [rsp+100h] [rbp+77h] BYREF
  int v56; // [rsp+108h] [rbp+7Fh] BYREF

  v53 = a1;
  v1 = *(_QWORD *)&PiPnpRtlCtx;
  v2 = 0;
  v45 = *(_QWORD *)&PiPnpRtlCtx;
  v52 = 0LL;
  v48 = 0;
  v56 = 0;
  result = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, 2147483650LL, (__int64)L"SYSTEM", 0, 1u, (__int64)&v52);
  if ( (int)result >= 0 )
  {
    v47 = 4;
    v5 = PnpCtxRegQueryValue(v4, v52, L"DevModeEverEnabled", &v48, &v56, &v47);
    v51 = v5;
    PnpCtxRegCloseKey(v6, v52);
    if ( v5 >= 0 && v56 )
    {
      return (unsigned int)v5;
    }
    else
    {
      LODWORD(v53) = 0;
      v44 = 0LL;
      v7 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v9 = 0;
      v42 = 0;
      PoolWithTag = 0LL;
      v41 = 0;
      v40 = 0;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      if ( (int)PnpCtxRegOpenKey(
                  v1,
                  2147483650LL,
                  (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Classes",
                  0,
                  0x20019u,
                  (__int64)&v44) >= 0
        && (int)PnpCtxRegQueryInfoKey(v11, (int)v44, 0, 0, (__int64)&v40, (__int64)&v41, 0LL) >= 0 )
      {
        v24 = v40;
        if ( v40 )
        {
          v25 = v41 + 1;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v41 + 1), 0x6E697050u);
          if ( PoolWithTag )
          {
            v11 = 0LL;
            if ( v24 )
            {
              while ( 1 )
              {
                v49 = v25;
                v26 = PnpCtxRegEnumValue(0LL, v44, v2, PoolWithTag, (__int64)&v49, 0LL, 0LL, 0LL);
                v11 = 0LL;
                if ( v26 >= 0 )
                {
                  DbgPrintEx(0x20u, 0, "Resetting devices in device setup class '%ws'\n", PoolWithTag);
                  MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                                 v1,
                                                 (__int64)PoolWithTag,
                                                 128,
                                                 0LL,
                                                 0LL,
                                                 (__int64)v7,
                                                 v9,
                                                 (__int64)&v53);
                  if ( MatchingFilteredDeviceList == -1073741789 )
                  {
                    if ( v7 )
                      ExFreePoolWithTag(v7, 0);
                    v28 = v53;
                    v42 = v53;
                    v29 = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)v53, 0x6E697050u);
                    v11 = 0LL;
                    v7 = v29;
                    if ( !v29 )
                    {
LABEL_38:
                      v2 = 0;
                      break;
                    }
                    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                                   v1,
                                                   (__int64)PoolWithTag,
                                                   128,
                                                   0LL,
                                                   0LL,
                                                   (__int64)v29,
                                                   v28,
                                                   (__int64)&v53);
                  }
                  v11 = 0LL;
                  if ( MatchingFilteredDeviceList >= 0 )
                  {
                    if ( (_DWORD)v53 )
                    {
                      for ( i = v7; *i; i += v31 + 1 )
                      {
                        PipResetDevice(v1, i);
                        v31 = -1LL;
                        v11 = 0LL;
                        do
                          ++v31;
                        while ( i[v31] );
                      }
                    }
                  }
                }
                v9 = v42;
                if ( ++v2 >= v24 )
                  goto LABEL_38;
              }
            }
          }
        }
      }
      if ( v44 )
        PnpCtxRegCloseKey(v11, v44);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
      v54 = 0;
      v15 = 0LL;
      v46 = 0LL;
      v16 = 0;
      v17 = KeGetCurrentThread();
      v18 = 0LL;
      v43 = 0;
      v55 = 0;
      --v17->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v19 = v45;
      if ( (int)PnpCtxRegOpenKey(
                  v45,
                  2147483650LL,
                  (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Services",
                  0,
                  0x20019u,
                  (__int64)&v46) >= 0
        && (int)PnpCtxRegQueryInfoKey(v20, (int)v46, 0, 0, (__int64)&v55, (__int64)&v43, 0LL) >= 0 )
      {
        v32 = v55;
        if ( v55 )
        {
          v33 = v43 + 1;
          LODWORD(v53) = v43 + 1;
          v18 = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v43 + 1), 0x6E697050u);
          if ( v18 )
          {
            v20 = 0LL;
            if ( v32 )
            {
              do
              {
                v50 = v33;
                v34 = PnpCtxRegEnumValue(0LL, v46, v2, v18, (__int64)&v50, 0LL, 0LL, 0LL);
                v20 = 0LL;
                if ( v34 >= 0 )
                {
                  DbgPrintEx(0x20u, 0, "Resetting devices using service '%ws'\n", v18);
                  v35 = CmGetMatchingFilteredDeviceList(
                          v19,
                          (__int64)v18,
                          2,
                          0LL,
                          0LL,
                          (__int64)v15,
                          v16,
                          (__int64)&v54);
                  if ( v35 == -1073741789 )
                  {
                    if ( v15 )
                      ExFreePoolWithTag(v15, 0);
                    v16 = v54;
                    v36 = ExAllocatePoolWithTag(PagedPool, 2LL * v54, 0x6E697050u);
                    v20 = 0LL;
                    v15 = v36;
                    if ( !v36 )
                      break;
                    v35 = CmGetMatchingFilteredDeviceList(
                            v19,
                            (__int64)v18,
                            2,
                            0LL,
                            0LL,
                            (__int64)v36,
                            v16,
                            (__int64)&v54);
                  }
                  v20 = 0LL;
                  if ( v35 >= 0 && v54 )
                  {
                    v37 = v15;
                    if ( *v15 )
                    {
                      v38 = v45;
                      do
                      {
                        PipResetDevice(v38, v37);
                        v39 = -1LL;
                        v20 = 0LL;
                        do
                          ++v39;
                        while ( v37[v39] );
                        v37 += v39 + 1;
                      }
                      while ( *v37 );
                      v32 = v55;
                      v33 = v53;
                    }
                    v19 = v45;
                  }
                }
                ++v2;
              }
              while ( v2 < v32 );
            }
          }
        }
      }
      if ( v46 )
        PnpCtxRegCloseKey(v20, v46);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
      return v51;
    }
  }
  return result;
}
