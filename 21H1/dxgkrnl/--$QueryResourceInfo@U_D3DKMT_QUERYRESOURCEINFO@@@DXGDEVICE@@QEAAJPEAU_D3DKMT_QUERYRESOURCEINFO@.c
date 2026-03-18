/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C011E92C
 * Callers:
 *     DxgkQueryResourceInfo @ 0x1C011FAA0 (DxgkQueryResourceInfo.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C0229670 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C027C118 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C027C6DC (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A760 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000D050 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0118D44 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C011ECC8 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__--_2_--ENSURE_SHARED_RESOURCE_DEREFEREN.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  int v3; // esi
  __int64 v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGGLOBAL *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int64 v26; // rdx
  __int64 v27; // r8
  ADAPTER_RENDER *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  int v36; // eax
  int StandardAllocationDriverData; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v42; // rax
  __int64 v44; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v45[16]; // [rsp+28h] [rbp-51h] BYREF
  DXGPUSHLOCK *v46[3]; // [rsp+38h] [rbp-41h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v47; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v48[4]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v49; // [rsp+90h] [rbp+17h]

  v3 = 0;
  v4 = a3;
  if ( !a3 )
  {
    v42 = WdLogNewEntry5_WdError(a1, a2);
    LODWORD(v4) = -1073741811;
    *(_QWORD *)(v42 + 24) = a1;
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    return (unsigned int)v4;
  }
  Global = DXGGLOBAL::GetGlobal(a1, (__int64)a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v45, (struct DXGGLOBAL *)((char *)Global + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
  v10 = DXGGLOBAL::GetGlobal(v9, v8);
  CurrentThread = KeGetCurrentThread();
  v14 = v10;
  if ( *((struct _KTHREAD **)v10 + 19) != CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(CurrentThread, v11);
    *(_QWORD *)(v15 + 24) = 1102LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *((_DWORD *)v14 + 48) )
    goto LABEL_10;
  v12 = *((_QWORD *)v14 + 22);
  v17 = 2LL * (unsigned int)v16;
  v18 = (unsigned int)v16;
  v16 = ((unsigned int)v4 >> 25) & 0x60;
  v11 = *(unsigned int *)(v12 + 8 * v17 + 8);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v12 + 8 * v17 + 8) & 0x60)
    || (v11 & 0x2000) != 0
    || (v11 & 0x1F) == 0 )
  {
    goto LABEL_10;
  }
  v19 = 2 * v18;
  v11 &= 0x1Fu;
  if ( (_BYTE)v11 != 2 )
  {
    v20 = WdLogNewEntry5_WdError(v16, v11);
    *(_QWORD *)(v20 + 24) = 267LL;
    WdLogEvent5_WdError(v20);
    goto LABEL_10;
  }
  v23 = *(_QWORD *)(v12 + 8 * v19);
  if ( v23 )
  {
    _m_prefetchw((const void *)(v23 + 68));
    v24 = *(_DWORD *)(v23 + 68);
    do
    {
      if ( !v24 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v11, v12);
        v21[6] = 7798LL;
        goto LABEL_11;
      }
      v16 = (unsigned int)(v24 + 1);
      v25 = v24;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 68), v16, v24);
    }
    while ( v25 != v24 );
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v45, v11);
    v28 = *(ADAPTER_RENDER **)(a1 + 16);
    v44 = v23;
    if ( *(ADAPTER_RENDER **)(v23 + 80) == v28 )
    {
      v29 = *(_QWORD *)(a1 + 1848);
      if ( !v29 || *(_QWORD *)(v29 + 2680) || *(_QWORD *)(v23 + 96) == v29 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46, (struct _KTHREAD **)(v23 + 32), 0);
        DXGAUTOPUSHLOCK::AcquireExclusive(v46);
        a2[5] = 0;
        v30 = *(_QWORD **)(v23 + 136);
        if ( v30 != (_QWORD *)(v23 + 136) )
        {
          v31 = 0;
          while ( 1 )
          {
            v32 = v31;
            v33 = v31 + *((_DWORD *)v30 - 2);
            v31 = -1;
            if ( (unsigned int)v33 >= (unsigned int)v32 )
              v31 = v33;
            LODWORD(v4) = (unsigned int)v33 < (unsigned int)v32 ? 0xC0000095 : 0;
            a2[5] = v31;
            v3 = v4;
            if ( (unsigned int)v33 < (unsigned int)v32 )
              break;
            v30 = (_QWORD *)*v30;
            if ( v30 == (_QWORD *)(v23 + 136) )
              goto LABEL_27;
          }
          v34 = WdLogNewEntry5_WdWarning(v33, v32, v30);
          *(_QWORD *)(v34 + 32) = (int)v4;
          *(_QWORD *)(v34 + 24) = a1;
          WdLogEvent5_WdWarning(v34);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
          goto LABEL_40;
        }
LABEL_27:
        a2[6] = *(_DWORD *)(v23 + 128);
        a2[7] = *(_DWORD *)(v23 + 132);
        a2[4] = *(_DWORD *)(v23 + 112);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
        goto LABEL_39;
      }
    }
    if ( (*(_DWORD *)(v23 + 12) & 0x20) != 0 )
    {
      v48[2] = *(_DWORD *)(v23 + 216);
      v48[0] = *(_DWORD *)(v23 + 208);
      v36 = *(_DWORD *)(v23 + 212);
      *((_DWORD *)&v47.StandardAllocationType + 1) = 0;
      v48[1] = v36;
      v47.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v48;
      v49 = 0LL;
      v48[3] = 7;
      memset(&v47.pAllocationPrivateDriverData, 0, 32);
      v47.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v28, &v47, v27);
      v4 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
LABEL_37:
        v35[3] = a1;
        v35[4] = v4;
        WdLogEvent5_WdError(v35);
LABEL_40:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v44);
        return (unsigned int)v4;
      }
      AllocationPrivateDriverDataSize = v47.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v47.ResourcePrivateDriverDataSize;
      if ( v47.AllocationPrivateDriverDataSize || v47.ResourcePrivateDriverDataSize )
      {
        a2[7] = *(_DWORD *)(v23 + 132);
        a2[6] = ResourcePrivateDriverDataSize;
        a2[4] = *(_DWORD *)(v23 + 112);
        a2[5] = AllocationPrivateDriverDataSize;
LABEL_39:
        LODWORD(v4) = v3;
        goto LABEL_40;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v47.ResourcePrivateDriverDataSize, v47.AllocationPrivateDriverDataSize);
    }
    else
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v28, v26);
      v35[5] = 1LL;
    }
    v4 = -1073741811LL;
    goto LABEL_37;
  }
LABEL_10:
  v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v11, v12);
LABEL_11:
  v21[4] = v4;
  v21[3] = a1;
  LODWORD(v4) = -1073741811;
  v21[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v21);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v45, v22);
  return (unsigned int)v4;
}
