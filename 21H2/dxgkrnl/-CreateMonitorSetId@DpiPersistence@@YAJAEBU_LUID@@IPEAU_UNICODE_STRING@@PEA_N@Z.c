/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01479F4
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C01472F0 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00056AC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007E24 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0009F18 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A914 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C000C838 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0121638 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0124D74 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130DBC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C0147CDC (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGPROCESS *Current; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGPROCESS *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rbx
  unsigned __int16 v22; // si
  unsigned __int16 v23; // si
  unsigned __int16 v24; // r15
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DISPLAY_SOURCE *v29; // r13
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rbx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned int v38; // edi
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  char **v44; // r13
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v52; // rdx
  unsigned __int16 *v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int16 v56; // si
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rax
  DpiPersistence *v75; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v76; // [rsp+38h] [rbp-C8h]
  unsigned int v77[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v78; // [rsp+48h] [rbp-B8h]
  __int64 v79; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+58h] [rbp-A8h] BYREF
  _WORD *v81; // [rsp+60h] [rbp-A0h]
  _BYTE v82[144]; // [rsp+70h] [rbp-90h] BYREF

  SessionDataForSpecifiedSession = 0LL;
  v81 = (_WORD *)a3;
  LODWORD(v5) = 0;
  v6 = (unsigned int)a2;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v58 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v58 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v60, v59);
    v61 = (_QWORD *)v58;
    *(_QWORD *)(v58 + 32) = -1073741811LL;
LABEL_42:
    WdLogEvent5_WdError(v61);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v11, v10);
  v17 = Current;
  if ( !Current )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v62[3] = 225LL;
LABEL_41:
    v61 = v62;
    goto LABEL_42;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    v63 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v63 + 24) = v17;
    WdLogEvent5_WdError(v63);
    return 3221225506LL;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, this, v6);
  if ( !SessionViewFromSource )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v20, 0LL);
    v62[3] = v6;
    v62[4] = this->HighPart;
    v62[5] = this->LowPart;
    goto LABEL_41;
  }
  if ( a4 )
    LOBYTE(a4->Length) = 0;
  v22 = *(_WORD *)(a3 + 2);
  if ( (v22 & 1) != 0 )
  {
    v64 = WdLogNewEntry5_WdAssertion(v20, 0LL);
    *(_QWORD *)(v64 + 24) = 262LL;
    WdLogEvent5_WdAssertion(v64);
    v22 = *(_WORD *)(a3 + 2);
  }
  v23 = v22 >> 1;
  v24 = v23;
  v78 = *(unsigned __int16 **)(a3 + 8);
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  v29 = PrimaryDisplaySource;
  if ( PrimaryDisplaySource )
  {
    v30 = *((_QWORD *)PrimaryDisplaySource + 1);
    v31 = *(_QWORD *)(v30 + 16);
    if ( !v31 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v30, v26);
      *(_QWORD *)(v65 + 24) = 277LL;
      WdLogEvent5_WdAssertion(v65);
      v26 = 0LL;
    }
    if ( *(_QWORD *)(v31 + 2696) == v26 )
    {
      v66 = WdLogNewEntry5_WdAssertion(v30, v26);
      *(_QWORD *)(v66 + 24) = 278LL;
      WdLogEvent5_WdAssertion(v66);
    }
    v32 = *(_QWORD *)(v31 + 316);
    *(_QWORD *)v77 = v32;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v82, (struct DXGADAPTER *const)v31, 0LL);
    v33 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v82, 0LL);
    v5 = v33;
    if ( v33 < 0 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
      v67[4] = (int)v77[1];
      v67[5] = (unsigned int)v32;
      v67[3] = v5;
      WdLogEvent5_WdError(v67);
    }
    else
    {
      if ( a4 )
        LOBYTE(a4->Length) = (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(
                                             *(ADAPTER_DISPLAY **)(v31 + 2696),
                                             v34) != 0;
      v36 = *(_QWORD *)(v31 + 2696);
      v37 = 0LL;
      v38 = *((_DWORD *)v29 + 4);
      v76 = v38;
      v39 = *(_QWORD *)(v36 + 88);
      if ( v39 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v80, *(_QWORD *)(v36 + 88));
        v40 = *(_QWORD *)(v39 + 88);
        v79 = 0LL;
        if ( v40 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v40 + 32));
          v41 = *(_QWORD *)(v39 + 88);
          LODWORD(v32) = v77[0];
        }
        else
        {
          v41 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v79, v41);
        if ( v79 )
        {
          v44 = (char **)(v79 + 96);
          while ( 1 )
          {
            HIDWORD(v75) = -1;
            v45 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v44, v38, v37, (unsigned int *)&v75 + 1);
            v5 = v45;
            if ( v45 < 0 )
              break;
            if ( HIDWORD(v75) == -1 )
            {
              auto_rc<DMMVIDPN const>::reset(&v79, 0LL);
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v80 + 40), v54);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82, v55);
              goto LABEL_36;
            }
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v39 + 80) + 72LL));
            v50 = *(_QWORD *)(v39 + 80);
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v50, HIDWORD(v75));
            if ( TargetById && *((_DWORD *)TargetById + 22) )
            {
              if ( v50 )
                ReferenceCounted::Release((ReferenceCounted *)(v50 + 64), v52);
            }
            else
            {
              if ( v50 )
                ReferenceCounted::Release((ReferenceCounted *)(v50 + 64), v52);
              v53 = v78;
              LOWORD(v75) = 0;
              if ( v24 && v24 != v23 )
              {
                LODWORD(v5) = RtlStringCchCopyW(v78, v24, L"^");
                if ( (_DWORD)v5 == -2147483643 )
                  LODWORD(v5) = -1073741789;
                if ( (int)v5 < 0 )
                  goto LABEL_56;
                --v24;
                ++v53;
              }
              LODWORD(v5) = DpiPersistence::AppendMonitorId(
                              (DpiPersistence *)HIDWORD(v75),
                              (unsigned int)v77,
                              (const struct _LUID *)v39,
                              (struct VIDPN_MGR *)v24,
                              (unsigned __int16)&v75,
                              v53,
                              (unsigned __int16 *)v75);
              if ( (int)v5 < 0 )
                goto LABEL_56;
              v24 -= (unsigned __int16)v75;
              v78 = &v53[(unsigned __int16)v75];
            }
            v38 = v76;
            ++v37;
          }
          v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v47, v46, v48, v49);
          v72 = v76;
          v71[3] = v37;
          v71[4] = v72;
          v71[5] = v44;
          v71[6] = v5;
        }
        else
        {
          v70 = WdLogNewEntry5_WdError(v43, v42);
          *(_QWORD *)(v70 + 24) = (int)v77[1];
          *(_QWORD *)(v70 + 32) = (unsigned int)v32;
          WdLogEvent5_WdError(v70);
          LODWORD(v5) = -1071774884;
        }
LABEL_56:
        auto_rc<DMMVIDPN const>::reset(&v79, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v80 + 40), v73);
      }
      else
      {
        v69 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v69 + 24) = (int)v77[1];
        *(_QWORD *)(v69 + 32) = (unsigned int)v32;
        WdLogEvent5_WdError(v69);
        LODWORD(v5) = -1071774923;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82, v68);
  }
  else
  {
LABEL_36:
    v56 = v23 - v24;
    *v81 = 2 * v56;
    if ( !(2 * v56) )
    {
      LODWORD(v5) = -1073741637;
      v74 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v74 + 24) = 416LL;
      WdLogEvent5_WdWarning(v74);
    }
  }
  return (unsigned int)v5;
}
