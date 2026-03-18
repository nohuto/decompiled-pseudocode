/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0185C5C
 * Callers:
 *     DxgkQueryResourceInfo @ 0x1C0184B60 (DxgkQueryResourceInfo.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C02DCAD0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0330DCC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C0331510 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C019EFEC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01CFE2C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v6; // r12d
  struct DXGPROCESS *Current; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r15
  struct DXGGLOBAL *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // rbx
  unsigned int v15; // edi
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  ADAPTER_RENDER *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // r8
  int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rdi
  const wchar_t *v36; // r9
  int v37; // r9d
  int v38; // eax
  int v39; // eax
  int StandardAllocationDriverData; // eax
  unsigned int v41; // r15d
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  DXGFASTMUTEX *v45; // [rsp+58h] [rbp-61h] BYREF
  char v46; // [rsp+60h] [rbp-59h]
  _BYTE v47[8]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v48; // [rsp+70h] [rbp-49h]
  int v49; // [rsp+78h] [rbp-41h]
  __int64 v50; // [rsp+80h] [rbp-39h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v51; // [rsp+88h] [rbp-31h] BYREF
  _DWORD v52[4]; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v53; // [rsp+C8h] [rbp+Fh]

  v6 = 0;
  if ( !a3 )
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
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent();
  Global = DXGGLOBAL_GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v45, (struct DXGGLOBAL *)((char *)Global + 288), 0);
  if ( v46 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v45, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v45);
  v9 = 1LL;
  v46 = 1;
  if ( (*((_DWORD *)Current + 106) & 0x100) != 0 )
  {
    v30 = *((_QWORD *)Current + 76);
    v50 = v30 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v30 + 248));
    v15 = a3;
    v31 = (a3 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *(_DWORD *)(v30 + 296) )
    {
      v32 = *(_QWORD *)(v30 + 280);
      v33 = *(_DWORD *)(v32 + 16 * v31 + 8);
      if ( ((a3 >> 25) & 0x60) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60) && (v33 & 0x2000) == 0 && (v33 & 0x1F) != 0 )
      {
        if ( (v33 & 0x1F) == 2 )
        {
          v14 = *(_QWORD *)(v32 + 16LL * (unsigned int)v31);
          goto LABEL_46;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v14 = 0LL;
LABEL_46:
    ExReleasePushLockSharedEx(v50, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_14;
  }
  v10 = DXGGLOBAL_GetGlobal();
  if ( *((struct _KTHREAD **)v10 + 39) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1447LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ShareMutex.IsOwner()", 1447LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 < *((_DWORD *)v10 + 88)
    && (v12 = *((_QWORD *)v10 + 42),
        v13 = *(_DWORD *)(v12 + 16 * v11 + 8),
        ((a3 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60))
    && (v13 & 0x2000) == 0
    && (v13 & 0x1F) != 0 )
  {
    if ( (v13 & 0x1F) == 2 )
    {
      v14 = *(_QWORD *)(v12 + 16LL * (unsigned int)v11);
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v14 = 0LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v15 = a3;
LABEL_14:
  if ( !v14 )
  {
    WdLogSingleEntry3(3LL, a1, v15, -1073741811LL);
LABEL_68:
    if ( v46 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v45);
    return 3221225485LL;
  }
  _m_prefetchw((const void *)(v14 + 68));
  v16 = *(_DWORD *)(v14 + 68);
  do
  {
    if ( !v16 )
    {
      WdLogSingleEntry4(3LL, a1, v15, -1073741811LL, 8130LL);
      goto LABEL_68;
    }
    v17 = v16;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 68), v16 + 1, v16);
  }
  while ( v17 != v16 );
  if ( v46 )
  {
    v46 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v45);
  }
  v18 = *(ADAPTER_RENDER **)(a1 + 16);
  if ( *(ADAPTER_RENDER **)(v14 + 80) == v18 )
  {
    v19 = *(_QWORD *)(a1 + 1848);
    if ( !v19 || *(_QWORD *)(v19 + 2800) || (v34 = *(_QWORD *)(v14 + 96)) == 0 || v34 == v19 )
    {
      v48 = v14 + 32;
      if ( v14 != -32 && *(struct _KTHREAD **)(v14 + 40) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1425LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1425LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v20 = v48;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v37 = *(_DWORD *)(v20 + 24);
          if ( v37 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, (const EVENT_DESCRIPTOR *)"g", v22, v37);
        }
        ExAcquirePushLockExclusiveEx(v20, 0LL);
      }
      *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
      a2[5] = 0;
      v23 = *(_QWORD **)(v14 + 136);
      v49 = 2;
      if ( v23 == (_QWORD *)(v14 + 136) )
      {
LABEL_33:
        v27 = *(_DWORD *)(v14 + 128);
        v49 = 0;
        v28 = v48;
        a2[6] = v27;
        a2[7] = *(_DWORD *)(v14 + 132);
        a2[4] = *(_DWORD *)(v14 + 112);
        *(_QWORD *)(v28 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v28, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v24 = 0;
        while ( 1 )
        {
          v25 = v24;
          v26 = v24 + *((_DWORD *)v23 - 2);
          v24 = -1;
          if ( v26 >= v25 )
            v24 = v26;
          v6 = v26 < v25 ? 0xC0000095 : 0;
          a2[5] = v24;
          if ( v26 < v25 )
            break;
          v23 = (_QWORD *)*v23;
          if ( v23 == (_QWORD *)(v14 + 136) )
            goto LABEL_33;
        }
        WdLogSingleEntry2(3LL, a1, (int)v6);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
      }
      goto LABEL_34;
    }
  }
  if ( (*(_DWORD *)(v14 + 12) & 0x20) == 0 )
  {
    v35 = -1073741811LL;
    WdLogSingleEntry3(2LL, a1, -1073741811LL, 1LL);
    v36 = L"Device 0x%I64x: Query resource info is called for a resource, which is created on a different adapter. Returning 0x%I64x";
LABEL_64:
    v6 = -1073741811;
    goto LABEL_65;
  }
  v38 = *(_DWORD *)(v14 + 216);
  v53 = 0LL;
  v52[2] = v38;
  v52[0] = *(_DWORD *)(v14 + 208);
  v39 = *(_DWORD *)(v14 + 212);
  *((_DWORD *)&v51.StandardAllocationType + 1) = 0;
  v52[1] = v39;
  v51.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v52;
  v52[3] = 7;
  memset(&v51.pAllocationPrivateDriverData, 0, 32);
  v51.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v18, &v51);
  v41 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData >= 0 )
  {
    AllocationPrivateDriverDataSize = v51.AllocationPrivateDriverDataSize;
    ResourcePrivateDriverDataSize = v51.ResourcePrivateDriverDataSize;
    if ( v51.AllocationPrivateDriverDataSize || v51.ResourcePrivateDriverDataSize )
    {
      a2[7] = *(_DWORD *)(v14 + 132);
      a2[6] = ResourcePrivateDriverDataSize;
      a2[4] = *(_DWORD *)(v14 + 112);
      a2[5] = AllocationPrivateDriverDataSize;
      goto LABEL_34;
    }
    v35 = -1073741811LL;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    v36 = L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverData buff"
           "er, returning 0x%I64x";
    v9 = 0LL;
    goto LABEL_64;
  }
  v35 = StandardAllocationDriverData;
  WdLogSingleEntry2(2LL, a1, StandardAllocationDriverData);
  v6 = v41;
  v36 = L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x";
  v9 = 0LL;
LABEL_65:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v36, a1, v35, v9, 0LL, 0LL);
LABEL_34:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 68), 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v14, 0LL, 0);
  return v6;
}
