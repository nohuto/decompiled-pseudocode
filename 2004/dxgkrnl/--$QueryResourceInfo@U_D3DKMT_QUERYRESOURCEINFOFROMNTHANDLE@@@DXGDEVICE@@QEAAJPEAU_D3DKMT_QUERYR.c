/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C011B1A0
 * Callers:
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C011A070 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C022DA90 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C029AEB0 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002AB4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0112914 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C011B430 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__--_2_--ENSURE_SHARED_RESOUR.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  ADAPTER_RENDER *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // eax
  int StandardAllocationDriverData; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v24; // rax
  __int64 v26; // [rsp+20h] [rbp-60h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v27; // [rsp+28h] [rbp-58h] BYREF
  DXGPUSHLOCK *v28; // [rsp+58h] [rbp-28h] BYREF
  int v29; // [rsp+60h] [rbp-20h]
  int v30; // [rsp+64h] [rbp-1Ch]
  __int64 v31; // [rsp+68h] [rbp-18h]

  v4 = 0;
  v5 = a4;
  if ( !a4 )
  {
    v24 = WdLogNewEntry5_WdError(a1, a2);
    LODWORD(v5) = -1073741811;
    *(_QWORD *)(v24 + 24) = a1;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v5;
  }
  v8 = *(_QWORD *)(a4 + 16);
  if ( v8 )
  {
    v10 = *(ADAPTER_RENDER **)(a1 + 16);
    v26 = 0LL;
    if ( *(ADAPTER_RENDER **)(v8 + 80) == v10 )
    {
      v11 = *(_QWORD *)(a1 + 1848);
      if ( !v11 || *(_QWORD *)(v11 + 2704) || *(_QWORD *)(v8 + 96) == v11 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v28, (struct _KTHREAD **)(v8 + 32), 0);
        DXGAUTOPUSHLOCK::AcquireExclusive(&v28);
        a2[7] = 0;
        v12 = *(_QWORD **)(v8 + 136);
        if ( v12 != (_QWORD *)(v8 + 136) )
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = v13;
            v15 = v13 + *((_DWORD *)v12 - 2);
            v13 = -1;
            if ( (unsigned int)v15 >= (unsigned int)v14 )
              v13 = v15;
            LODWORD(v5) = (unsigned int)v15 < (unsigned int)v14 ? 0xC0000095 : 0;
            a2[7] = v13;
            v4 = v5;
            if ( (unsigned int)v15 < (unsigned int)v14 )
              break;
            v12 = (_QWORD *)*v12;
            if ( v12 == (_QWORD *)(v8 + 136) )
              goto LABEL_14;
          }
          v16 = WdLogNewEntry5_WdWarning(v15, v14, v12);
          *(_QWORD *)(v16 + 32) = (int)v5;
          *(_QWORD *)(v16 + 24) = a1;
          WdLogEvent5_WdWarning(v16);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v28);
          goto LABEL_27;
        }
LABEL_14:
        a2[8] = *(_DWORD *)(v8 + 128);
        a2[9] = *(_DWORD *)(v8 + 132);
        a2[6] = *(_DWORD *)(v8 + 112);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v28);
        goto LABEL_26;
      }
    }
    if ( (*(_DWORD *)(v8 + 12) & 0x20) != 0 )
    {
      v29 = *(_DWORD *)(v8 + 216);
      LODWORD(v28) = *(_DWORD *)(v8 + 208);
      v18 = *(_DWORD *)(v8 + 212);
      *((_DWORD *)&v27.StandardAllocationType + 1) = 0;
      HIDWORD(v28) = v18;
      v27.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v28;
      v31 = 0LL;
      v30 = 7;
      memset(&v27.pAllocationPrivateDriverData, 0, 32);
      v27.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v10, &v27, a3);
      v5 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
LABEL_24:
        v17[3] = a1;
        v17[4] = v5;
        WdLogEvent5_WdError(v17);
LABEL_27:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v26);
        return (unsigned int)v5;
      }
      AllocationPrivateDriverDataSize = v27.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v27.ResourcePrivateDriverDataSize;
      if ( v27.AllocationPrivateDriverDataSize || v27.ResourcePrivateDriverDataSize )
      {
        a2[9] = *(_DWORD *)(v8 + 132);
        a2[8] = ResourcePrivateDriverDataSize;
        a2[6] = *(_DWORD *)(v8 + 112);
        a2[7] = AllocationPrivateDriverDataSize;
LABEL_26:
        LODWORD(v5) = v4;
        goto LABEL_27;
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v27.ResourcePrivateDriverDataSize, v27.AllocationPrivateDriverDataSize);
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v10, a2);
      v17[5] = 1LL;
    }
    v5 = -1073741811LL;
    goto LABEL_24;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
  v9[4] = v5;
  LODWORD(v5) = -1073741811;
  v9[5] = -1073741811LL;
  v9[3] = a1;
  WdLogEvent5_WdWarning(v9);
  return (unsigned int)v5;
}
