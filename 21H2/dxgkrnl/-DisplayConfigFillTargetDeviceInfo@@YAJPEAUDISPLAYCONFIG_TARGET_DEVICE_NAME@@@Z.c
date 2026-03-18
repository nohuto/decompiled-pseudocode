/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C01B53E0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C0161AB8 (MonitorFillMonitorDeviceInfo.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGADAPTER *v6; // rbp
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  _QWORD *v14; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rcx
  __int64 v16; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v21[144]; // [rsp+30h] [rbp-B8h] BYREF

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 36, 0, 0x180uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL_GetGlobal();
    v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8), v20);
    v6 = v3;
    if ( v3 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v3, 0LL);
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL);
      DXGADAPTER::ReleaseReference(v6);
      if ( v7 < 0 )
      {
        WdLogSingleEntry3(3LL, v6, *((int *)v6 + 102), *((unsigned int *)v6 + 101));
        v7 = -1073741811;
      }
      else
      {
        v8 = *((_QWORD *)v6 + 349);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 104);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)v20, v9);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
          v10 = *(_QWORD **)(v9 + 120);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v10, *((_DWORD *)a1 + 4));
          if ( !TargetById )
          {
            v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
            v7 = -1073741811;
            v19[3] = *((unsigned int *)a1 + 4);
            v19[4] = a1;
            v19[5] = v6;
            goto LABEL_15;
          }
          v14 = (_QWORD *)v10[3];
          if ( v14 == v10 + 3 )
          {
            NextTarget = 0LL;
          }
          else
          {
            NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v14 - 1);
            if ( NextTarget == TargetById )
            {
LABEL_13:
              *((_DWORD *)a1 + 6) = *((_DWORD *)TargetById + 20);
              v16 = *((_QWORD *)TargetById + 14);
              if ( v16 )
                v7 = MonitorFillMonitorDeviceInfo(v16, (__int64)a1);
              else
                *((_DWORD *)a1 + 5) |= 2u;
LABEL_15:
              if ( v10 )
                ReferenceCounted::Release((ReferenceCounted *)(v10 + 8));
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v20[0] + 40));
              goto LABEL_18;
            }
          }
          do
          {
            if ( *((_DWORD *)NextTarget + 20) == *((_DWORD *)TargetById + 20) )
              ++*((_DWORD *)a1 + 8);
            NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v10, NextTarget);
          }
          while ( NextTarget != TargetById );
          goto LABEL_13;
        }
        WdLogSingleEntry3(3LL, v6, *((int *)v6 + 102), *((unsigned int *)v6 + 101));
        v7 = -1073741637;
      }
LABEL_18:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
      return (unsigned int)v7;
    }
    v18 = WdLogNewEntry5_WdTrace(v5, v4);
    *(_QWORD *)(v18 + 24) = *((int *)a1 + 3);
    *(_QWORD *)(v18 + 32) = *((unsigned int *)a1 + 2);
    return 3223191554LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    return 3221225485LL;
  }
}
