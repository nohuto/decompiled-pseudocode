/*
 * XREFs of ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C016ED88
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01277D0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigGetTargetBaseType(struct _LUID *a1, __int64 a2, __int64 a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGADAPTER *v10; // rsi
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v32[144]; // [rsp+30h] [rbp-A8h] BYREF

  if ( a1 && a1->LowPart == 6 && a1->HighPart == 24 )
  {
    a1[2].HighPart = -1;
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1[1], &v31);
    v10 = v5;
    if ( v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v5, 0LL);
      v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL);
      DXGADAPTER::ReleaseReference(v10);
      if ( v11 < 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
        v26[3] = v10;
        v26[4] = *((int *)v10 + 80);
        v26[5] = *((unsigned int *)v10 + 79);
        WdLogEvent5_WdWarning(v26);
        v11 = -1073741811;
      }
      else
      {
        v15 = *((_QWORD *)v10 + 337);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v30, v16);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
          v17 = *(_QWORD *)(v16 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v17, a1[2].LowPart);
          if ( TargetById )
          {
            a1[2].HighPart = *((_DWORD *)TargetById + 21);
          }
          else
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
            v11 = -1073741811;
            v28[3] = a1[2].LowPart;
            v28[4] = a1;
            v28[5] = v10;
          }
          if ( v17 )
            ReferenceCounted::Release((ReferenceCounted *)(v17 + 64), v19);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v30 + 40), v19);
        }
        else
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
          v27[3] = v10;
          v27[4] = *((int *)v10 + 80);
          v27[5] = *((unsigned int *)v10 + 79);
          WdLogEvent5_WdWarning(v27);
          v11 = -1073741637;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32, v23);
      return (unsigned int)v11;
    }
    else
    {
      v25 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      *(_QWORD *)(v25 + 24) = a1[1].HighPart;
      *(_QWORD *)(v25 + 32) = a1[1].LowPart;
      return 3223191554LL;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v29 + 24) = a1;
    WdLogEvent5_WdWarning(v29);
    return 3221225485LL;
  }
}
