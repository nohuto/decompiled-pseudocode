/*
 * XREFs of ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C01E6AE0
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
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigGetTargetBaseType(struct _LUID *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGADAPTER *v6; // rsi
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v18[144]; // [rsp+30h] [rbp-A8h] BYREF

  if ( a1 && a1->LowPart == 6 && a1->HighPart == 24 )
  {
    a1[2].HighPart = -1;
    Global = DXGGLOBAL_GetGlobal();
    v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1[1], v17);
    v6 = v3;
    if ( v3 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, v3, 0LL);
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18, 0LL);
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
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)v17, v9);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
          v10 = *(_QWORD *)(v9 + 120);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v10, a1[2].LowPart);
          if ( TargetById )
          {
            a1[2].HighPart = *((_DWORD *)TargetById + 21);
          }
          else
          {
            v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
            v7 = -1073741811;
            v16[3] = a1[2].LowPart;
            v16[4] = a1;
            v16[5] = v6;
          }
          if ( v10 )
            ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v17[0] + 40));
        }
        else
        {
          WdLogSingleEntry3(3LL, v6, *((int *)v6 + 102), *((unsigned int *)v6 + 101));
          v7 = -1073741637;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
      return (unsigned int)v7;
    }
    else
    {
      v15 = WdLogNewEntry5_WdTrace(v5, v4);
      *(_QWORD *)(v15 + 24) = a1[1].HighPart;
      *(_QWORD *)(v15 + 32) = a1[1].LowPart;
      return 3223191554LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    return 3221225485LL;
  }
}
