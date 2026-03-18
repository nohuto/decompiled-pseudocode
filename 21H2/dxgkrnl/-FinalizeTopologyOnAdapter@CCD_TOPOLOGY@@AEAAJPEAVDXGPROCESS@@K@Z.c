/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0162FC0
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0162E98 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013788 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C01BEC84 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01E4EE8 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01E96AC (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C03493B4 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03A478C (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(CCD_TOPOLOGY *this, struct DXGPROCESS *a2, unsigned int a3)
{
  __int64 v5; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  unsigned int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned int v12; // esi
  char v13; // bl
  __int64 v14; // r15
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v20; // r11
  int v21; // eax
  int v22; // eax
  _BYTE v23[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v24; // [rsp+50h] [rbp-B0h]
  _BYTE v25[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v26[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v28[88]; // [rsp+B8h] [rbp-48h] BYREF

  v5 = a3;
  while ( 1 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v5),
                                             0);
    v7 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry3(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v5 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v5),
        CddDeviceAndContextForCurrentSession);
      return v7;
    }
    v8 = MEMORY[0x738];
    if ( !MEMORY[0x738] )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v25, 0LL);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGPROCESS *)((char *)a2 + 376), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, 0LL, 1, v9, 0);
    v10 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v26, 2u);
    if ( !DXGDEVICE::IsExecutionStateErrorState(0LL) )
    {
      if ( (int)v10 < 0 )
      {
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v5 + 4),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v5),
          *((_QWORD *)this + 8),
          v10);
      }
      else
      {
        v11 = *(_QWORD *)(v8 + 2792);
        v12 = 0;
        if ( *(_DWORD *)(v11 + 96) )
        {
          v13 = 1;
          v14 = 340 * v5;
          do
          {
            v15 = *((_QWORD *)this + 8);
            v16 = (unsigned int)(1 << v12);
            v17 = v11;
            v18 = *(_QWORD *)(v15 + 48);
            if ( ((unsigned int)v16 & *(_DWORD *)(v14 + v18 + 84)) != 0 )
            {
              v20 = v12 + 85 * v5;
              v21 = *(_DWORD *)(296LL * *(unsigned int *)(v18 + 4 * v20 + 8) + v15 + 248);
              v17 = v11;
              if ( v21 < 0 )
              {
                *(_DWORD *)(v18 + 4 * v20 + 168) = v21;
                v13 = 0;
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v14 + 164) |= v16;
                v22 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(*(ADAPTER_DISPLAY **)(v8 + 2792), v12);
                LODWORD(v10) = v22;
                if ( v22 < 0 )
                  WdLogSingleEntry4(
                    2LL,
                    v12,
                    *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v5 + 4),
                    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v5),
                    v22);
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v14 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                  v12,
                  0);
                v17 = *(_QWORD *)(v8 + 2792);
              }
            }
            ++v12;
            v11 = v17;
          }
          while ( v12 < *(_DWORD *)(v17 + 96) );
          if ( !v13 )
            DmmDisableAllFailurePathsOnAdapter(
              v8,
              *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v14 + 164),
              v16,
              0LL);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v28);
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      if ( v24 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v25);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
      return (unsigned int)v10;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v27);
    if ( v24 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v25);
  }
  WdLogSingleEntry4(
    2LL,
    0LL,
    *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v5 + 4),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v5),
    -1073741811LL);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
  return 3221225485LL;
}
