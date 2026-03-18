/*
 * XREFs of ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C02D65FC
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C018DB90 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01CFE2C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::GetStandardAllocationDriverData(
        DXGDEVICE *this,
        enum _D3DKMDT_STANDARDALLOCATION_TYPE a2,
        D3DKMDT_SHAREDPRIMARYSURFACEDATA *a3,
        unsigned int *a4,
        void **a5)
{
  ADAPTER_RENDER *v6; // rcx
  void *v9; // r14
  int StandardAllocationDriverData; // eax
  __int64 v11; // r9
  __int64 v12; // rdi
  void *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 ResourcePrivateDriverDataSize; // rdx
  ADAPTER_RENDER *v18; // rcx
  int v19; // eax
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v20; // [rsp+50h] [rbp-30h] BYREF

  memset(&v20, 0, sizeof(v20));
  v20.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v20.pCreateSharedPrimarySurfaceData = a3;
  v9 = 0LL;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v6, &v20, (__int64)a3);
  v12 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData >= 0 )
  {
    if ( !v20.AllocationPrivateDriverDataSize && !v20.ResourcePrivateDriverDataSize )
    {
      WdLogSingleEntry2(v20.AllocationPrivateDriverDataSize + 2, this, -1073741823LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and                         "
                  "    pResourcePrivateDriverData buffer, returning 0x%I64x",
        (__int64)this,
        -1073741823LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
    v14 = (void *)operator new[](v20.AllocationPrivateDriverDataSize, 0x4B677844u, 256LL, v11);
    *a5 = v14;
    if ( v14 )
    {
      if ( !v20.ResourcePrivateDriverDataSize
        || (v9 = (void *)operator new[](v20.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL, v16)) != 0LL )
      {
        v18 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v20.pAllocationPrivateDriverData = *a5;
        v20.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
        v20.pCreateSharedPrimarySurfaceData = a3;
        v20.pResourcePrivateDriverData = v9;
        v19 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v18, &v20, v15);
        v12 = v19;
        if ( v19 >= 0 )
        {
          *a4 = v20.AllocationPrivateDriverDataSize;
        }
        else
        {
          WdLogSingleEntry2(1LL, this, v19);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Device 0x%I64x: Driver failed to generate pPrivateDriverData buffer, returning 0x%I64x",
            (__int64)this,
            v12,
            0LL,
            0LL,
            0LL);
        }
        goto LABEL_15;
      }
      ResourcePrivateDriverDataSize = v20.ResourcePrivateDriverDataSize;
    }
    else
    {
      ResourcePrivateDriverDataSize = v20.AllocationPrivateDriverDataSize;
    }
    LODWORD(v12) = -1073741801;
    WdLogSingleEntry2(3LL, ResourcePrivateDriverDataSize, -1073741801LL);
LABEL_15:
    operator delete[](v9);
    if ( (int)v12 < 0 )
      operator delete[](*a5);
    return (unsigned int)v12;
  }
  WdLogSingleEntry2(2LL, this, StandardAllocationDriverData);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
    (__int64)this,
    v12,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v12;
}
