/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C0136FB0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00E73D0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000F2C0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F32C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C0137150 (MonitorFillMonitorDeviceInfo.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGADAPTER *v12; // rsi
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  _QWORD *v25; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v37[144]; // [rsp+30h] [rbp-B8h] BYREF

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 36, 0, 0x180uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL::GetGlobal(v5, v4);
    v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8), &v36);
    v12 = v7;
    if ( v7 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v7, 0LL);
      v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v12);
      if ( v13 < 0 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
        v31[3] = v12;
        v31[4] = *((int *)v12 + 80);
        v31[5] = *((unsigned int *)v12 + 79);
        WdLogEvent5_WdWarning(v31);
        v13 = -1073741811;
      }
      else
      {
        v17 = *((_QWORD *)v12 + 334);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v35, v18);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL));
          v19 = *(_QWORD **)(v18 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v19,
                         *((unsigned int *)a1 + 4));
          if ( TargetById )
          {
            v25 = (_QWORD *)v19[3];
            if ( v25 == v19 + 3 )
              NextTarget = 0LL;
            else
              NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v25 - 1);
            for ( ;
                  NextTarget != TargetById;
                  NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v19, NextTarget) )
            {
              if ( *((_DWORD *)NextTarget + 20) == *((_DWORD *)TargetById + 20) )
                ++*((_DWORD *)a1 + 8);
            }
            *((_DWORD *)a1 + 6) = *((_DWORD *)TargetById + 20);
            v27 = *((_QWORD *)TargetById + 14);
            if ( v27 )
              v13 = MonitorFillMonitorDeviceInfo(v27, a1);
            else
              *((_DWORD *)a1 + 5) |= 2u;
          }
          else
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
            v13 = -1073741811;
            v33[3] = *((unsigned int *)a1 + 4);
            v33[4] = a1;
            v33[5] = v12;
          }
          if ( v19 )
            ReferenceCounted::Release((ReferenceCounted *)(v19 + 8), v20);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v35 + 40), v20);
        }
        else
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
          v32[3] = v12;
          v32[4] = *((int *)v12 + 80);
          v32[5] = *((unsigned int *)v12 + 79);
          WdLogEvent5_WdWarning(v32);
          v13 = -1073741637;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37, v28);
      return (unsigned int)v13;
    }
    else
    {
      v30 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
      *(_QWORD *)(v30 + 24) = *((int *)a1 + 3);
      *(_QWORD *)(v30 + 32) = *((unsigned int *)a1 + 2);
      return 3223191554LL;
    }
  }
  else
  {
    v34 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v34 + 24) = a1;
    WdLogEvent5_WdWarning(v34);
    return 3221225485LL;
  }
}
