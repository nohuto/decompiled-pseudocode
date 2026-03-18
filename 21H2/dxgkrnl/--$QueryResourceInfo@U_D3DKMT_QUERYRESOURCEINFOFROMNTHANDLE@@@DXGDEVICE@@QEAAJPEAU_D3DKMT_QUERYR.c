/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C019F668
 * Callers:
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C016A1A0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkWslQueryResourceInfoFromNtHandle @ 0x1C02DA760 (DxgkWslQueryResourceInfoFromNtHandle.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C02DCD00 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C032252C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x1C019F798 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHA.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01CFE2C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rdi
  ADAPTER_RENDER *v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // r8
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdi
  const wchar_t *v19; // r9
  int v20; // eax
  int StandardAllocationDriverData; // eax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v24; // [rsp+50h] [rbp-29h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v25; // [rsp+58h] [rbp-21h] BYREF
  _DWORD v26[2]; // [rsp+88h] [rbp+Fh] BYREF
  DXGPUSHLOCK *v27; // [rsp+90h] [rbp+17h]
  __int64 v28; // [rsp+98h] [rbp+1Fh]

  v4 = 0;
  if ( a4 )
  {
    v7 = *(_QWORD *)(a4 + 16);
    if ( v7 )
    {
      v8 = *(ADAPTER_RENDER **)(a1 + 16);
      v24 = 0LL;
      if ( *(ADAPTER_RENDER **)(v7 + 80) == v8
        && ((v9 = *(_QWORD *)(a1 + 1848)) == 0
         || *(_QWORD *)(v9 + 2800)
         || (v16 = *(_QWORD *)(v7 + 96)) == 0
         || v16 == v9) )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26, (struct _KTHREAD **)(v7 + 32), 0);
        DXGPUSHLOCK::AcquireExclusive(v27);
        a2[7] = 0;
        v10 = *(_QWORD **)(v7 + 136);
        LODWORD(v28) = 2;
        if ( v10 != (_QWORD *)(v7 + 136) )
        {
          v11 = 0;
          while ( 1 )
          {
            v12 = v11;
            v13 = v11 + *((_DWORD *)v10 - 2);
            v11 = -1;
            if ( v13 >= v12 )
              v11 = v13;
            v14 = v13 < v12 ? 0xC0000095 : 0;
            a2[7] = v11;
            v4 = v14;
            if ( v13 < v12 )
              break;
            v10 = (_QWORD *)*v10;
            if ( v10 == (_QWORD *)(v7 + 136) )
              goto LABEL_12;
          }
          WdLogSingleEntry2(3LL, a1, (int)v14);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
          goto LABEL_14;
        }
LABEL_12:
        a2[8] = *(_DWORD *)(v7 + 128);
        a2[9] = *(_DWORD *)(v7 + 132);
        a2[6] = *(_DWORD *)(v7 + 112);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
      }
      else
      {
        if ( (*(_DWORD *)(v7 + 12) & 0x20) == 0 )
        {
          v17 = 1LL;
          v18 = -1073741811LL;
          WdLogSingleEntry3(2LL, a1, -1073741811LL, 1LL);
          v19 = L"Device 0x%I64x: Query resource info is called for a resource, which is created on a different adapter. R"
                 "eturning 0x%I64x";
LABEL_26:
          v14 = -1073741811;
          goto LABEL_27;
        }
        LODWORD(v27) = *(_DWORD *)(v7 + 216);
        v26[0] = *(_DWORD *)(v7 + 208);
        v20 = *(_DWORD *)(v7 + 212);
        *((_DWORD *)&v25.StandardAllocationType + 1) = 0;
        v26[1] = v20;
        v25.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v26;
        v28 = 0LL;
        HIDWORD(v27) = 7;
        memset(&v25.pAllocationPrivateDriverData, 0, 32);
        v25.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
        StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v8, &v25);
        v14 = StandardAllocationDriverData;
        if ( StandardAllocationDriverData < 0 )
        {
          v18 = StandardAllocationDriverData;
          WdLogSingleEntry2(2LL, a1, StandardAllocationDriverData);
          v19 = L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x";
          v17 = 0LL;
LABEL_27:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, a1, v18, v17, 0LL, 0LL);
          goto LABEL_14;
        }
        AllocationPrivateDriverDataSize = v25.AllocationPrivateDriverDataSize;
        ResourcePrivateDriverDataSize = v25.ResourcePrivateDriverDataSize;
        if ( !v25.AllocationPrivateDriverDataSize && !v25.ResourcePrivateDriverDataSize )
        {
          v18 = -1073741811LL;
          WdLogSingleEntry2(2LL, a1, -1073741811LL);
          v19 = L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverDat"
                 "a buffer, returning 0x%I64x";
          v17 = 0LL;
          goto LABEL_26;
        }
        a2[9] = *(_DWORD *)(v7 + 132);
        a2[8] = ResourcePrivateDriverDataSize;
        a2[6] = *(_DWORD *)(v7 + 112);
        a2[7] = AllocationPrivateDriverDataSize;
      }
      v14 = v4;
LABEL_14:
      `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v24);
      return v14;
    }
    WdLogSingleEntry3(3LL, a1, a4, -1073741811LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x",
      a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
