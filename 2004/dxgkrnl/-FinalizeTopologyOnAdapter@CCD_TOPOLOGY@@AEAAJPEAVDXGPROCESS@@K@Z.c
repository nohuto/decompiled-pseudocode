/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C01498FC
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01497D4 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CEC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000B8EC (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00198DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00DCC74 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00DEFBC (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0140124 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C014021C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C014050C (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C029FA98 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3)
{
  DXGDEVICE *v3; // rbx
  __int64 v6; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // esi
  char v18; // bl
  __int64 v19; // r12
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r9
  bool v24; // zf
  __int64 v25; // rdx
  int v27; // r10d
  __int64 v28; // rdx
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  DXGDEVICE *v36; // [rsp+38h] [rbp-C8h] BYREF
  DXGDEVICE *v37; // [rsp+40h] [rbp-C0h]
  _BYTE v38[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  _BYTE v41[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v42[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v43[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v44[88]; // [rsp+B8h] [rbp-48h] BYREF

  v3 = 0LL;
  v36 = 0LL;
  v6 = a3;
  while ( 1 )
  {
    if ( v3 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v6),
        v3);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
      v36 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v6),
                                             &v36,
                                             0LL,
                                             0LL,
                                             0);
    v10 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v35[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v6 + 4);
      v35[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v6);
      v35[5] = v10;
      WdLogEvent5_WdError(v35);
      return (unsigned int)v10;
    }
    v3 = v36;
    v37 = v36;
    v11 = *((_QWORD *)v36 + 231);
    if ( !v11 )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41, v36);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, a2[42], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v3, 1, v12, 0);
    v13 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v42, 2u);
    if ( !DXGDEVICE::IsExecutionStateErrorState(v3) )
    {
      if ( (int)v13 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
        v29[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v6 + 4);
        v29[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v6);
        v29[5] = *((_QWORD *)this + 8);
        v29[6] = v13;
        WdLogEvent5_WdError(v29);
      }
      else
      {
        v16 = *(_QWORD *)(v11 + 2696);
        v17 = 0;
        if ( *(_DWORD *)(v16 + 80) )
        {
          v18 = 1;
          v19 = 336 * v6;
          do
          {
            v20 = *((_QWORD *)this + 8);
            v21 = (unsigned int)(1 << v17);
            v22 = v16;
            v23 = *(_QWORD *)(v20 + 40);
            if ( ((unsigned int)v21 & *(_DWORD *)(v19 + v23 + 84)) != 0 )
            {
              v40 = 84 * v6;
              v22 = v16;
              v27 = *(_DWORD *)(272LL * *(unsigned int *)(v23 + 4 * (v17 + 84 * v6) + 8) + v20 + 240);
              if ( v27 < 0 )
              {
                v18 = 0;
                *(_DWORD *)(v23 + 4 * (v17 + v40) + 164) = v27;
                *(_DWORD *)(v19 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 160) |= v21;
                v30 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(*(DXGADAPTER ***)(v11 + 2696), v17);
                v13 = v30;
                if ( v30 < 0 )
                {
                  v33 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
                  v33[3] = v17;
                  v33[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v19 + 4);
                  v33[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v6);
                  v33[6] = v13;
                  WdLogEvent5_WdError(v33);
                }
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v19 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v17,
                  0);
                v22 = *(_QWORD *)(v11 + 2696);
              }
            }
            ++v17;
            v16 = v22;
          }
          while ( v17 < *(_DWORD *)(v22 + 80) );
          v24 = v18 == 0;
          v3 = v37;
          if ( v24 )
            DmmDisableAllFailurePathsOnAdapter(
              v11,
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v19 + 160),
              v21,
              (__int64)v37);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v44);
      COREACCESS::~COREACCESS((COREACCESS *)v43);
      if ( v39 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38, v25);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
      return (unsigned int)v13;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v44);
    COREACCESS::~COREACCESS((COREACCESS *)v43);
    if ( v39 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38, v28);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
  v34[3] = v3;
  v34[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v6 + 4);
  v34[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336 * v6);
  v34[6] = -1073741811LL;
  WdLogEvent5_WdError(v34);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
  return 3221225485LL;
}
