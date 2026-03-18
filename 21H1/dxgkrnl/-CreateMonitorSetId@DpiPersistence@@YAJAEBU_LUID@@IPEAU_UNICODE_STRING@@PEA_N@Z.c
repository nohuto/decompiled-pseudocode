/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C013A254
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C0139220 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0009A84 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F32C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0012F34 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0126E28 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0127D0C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0129B6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C013A53C (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
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
  __int64 v59; // rcx
  _QWORD *v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  DpiPersistence *v74; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v75; // [rsp+38h] [rbp-C8h]
  unsigned int v76[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v77; // [rsp+48h] [rbp-B8h]
  __int64 v78; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v79; // [rsp+58h] [rbp-A8h] BYREF
  _WORD *v80; // [rsp+60h] [rbp-A0h]
  _BYTE v81[144]; // [rsp+70h] [rbp-90h] BYREF

  SessionDataForSpecifiedSession = 0LL;
  v80 = (_WORD *)a3;
  LODWORD(v5) = 0;
  v6 = (unsigned int)a2;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 88);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v58 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v58 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v59);
    v60 = (_QWORD *)v58;
    *(_QWORD *)(v58 + 32) = -1073741811LL;
LABEL_42:
    WdLogEvent5_WdError(v60);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v11, v10);
  v17 = Current;
  if ( !Current )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v61[3] = 225LL;
LABEL_41:
    v60 = v61;
    goto LABEL_42;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    v62 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v62 + 24) = v17;
    WdLogEvent5_WdError(v62);
    return 3221225506LL;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, this, v6);
  if ( !SessionViewFromSource )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v20, 0LL);
    v61[3] = v6;
    v61[4] = this->HighPart;
    v61[5] = this->LowPart;
    goto LABEL_41;
  }
  if ( a4 )
    LOBYTE(a4->Length) = 0;
  v22 = *(_WORD *)(a3 + 2);
  if ( (v22 & 1) != 0 )
  {
    v63 = WdLogNewEntry5_WdAssertion(v20, 0LL);
    *(_QWORD *)(v63 + 24) = 262LL;
    WdLogEvent5_WdAssertion(v63);
    v22 = *(_WORD *)(a3 + 2);
  }
  v23 = v22 >> 1;
  v24 = v23;
  v77 = *(unsigned __int16 **)(a3 + 8);
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  v29 = PrimaryDisplaySource;
  if ( PrimaryDisplaySource )
  {
    v30 = *((_QWORD *)PrimaryDisplaySource + 1);
    v31 = *(_QWORD *)(v30 + 16);
    if ( !v31 )
    {
      v64 = WdLogNewEntry5_WdAssertion(v30, v26);
      *(_QWORD *)(v64 + 24) = 277LL;
      WdLogEvent5_WdAssertion(v64);
      v26 = 0LL;
    }
    if ( *(_QWORD *)(v31 + 2672) == v26 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v30, v26);
      *(_QWORD *)(v65 + 24) = 278LL;
      WdLogEvent5_WdAssertion(v65);
    }
    v32 = *(_QWORD *)(v31 + 316);
    *(_QWORD *)v76 = v32;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v81, (struct DXGADAPTER *const)v31, 0LL);
    v33 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v81, 0LL);
    v5 = v33;
    if ( v33 < 0 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
      v66[4] = (int)v76[1];
      v66[5] = (unsigned int)v32;
      v66[3] = v5;
      WdLogEvent5_WdError(v66);
    }
    else
    {
      if ( a4 )
        LOBYTE(a4->Length) = (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(
                                             *(ADAPTER_DISPLAY **)(v31 + 2672),
                                             v34) != 0;
      v36 = *(_QWORD *)(v31 + 2672);
      v37 = 0LL;
      v38 = *((_DWORD *)v29 + 4);
      v75 = v38;
      v39 = *(_QWORD *)(v36 + 88);
      if ( v39 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v79, *(_QWORD *)(v36 + 88));
        v40 = *(_QWORD *)(v39 + 88);
        v78 = 0LL;
        if ( v40 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v40 + 32));
          v41 = *(_QWORD *)(v39 + 88);
          LODWORD(v32) = v76[0];
        }
        else
        {
          v41 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v78, v41);
        if ( v78 )
        {
          v44 = (char **)(v78 + 96);
          while ( 1 )
          {
            HIDWORD(v74) = -1;
            v45 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v44, v38, v37, (unsigned int *)&v74 + 1);
            v5 = v45;
            if ( v45 < 0 )
              break;
            if ( HIDWORD(v74) == -1 )
            {
              auto_rc<DMMVIDPN const>::reset(&v78, 0LL);
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v79 + 40), v54);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81, v55);
              goto LABEL_36;
            }
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v39 + 80) + 72LL));
            v50 = *(_QWORD *)(v39 + 80);
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v50, HIDWORD(v74));
            if ( TargetById && *((_DWORD *)TargetById + 22) )
            {
              if ( v50 )
                ReferenceCounted::Release((ReferenceCounted *)(v50 + 64), v52);
            }
            else
            {
              if ( v50 )
                ReferenceCounted::Release((ReferenceCounted *)(v50 + 64), v52);
              v53 = v77;
              LOWORD(v74) = 0;
              if ( v24 && v24 != v23 )
              {
                LODWORD(v5) = RtlStringCchCopyW(v77, v24, L"^");
                if ( (_DWORD)v5 == -2147483643 )
                  LODWORD(v5) = -1073741789;
                if ( (int)v5 < 0 )
                  goto LABEL_56;
                --v24;
                ++v53;
              }
              LODWORD(v5) = DpiPersistence::AppendMonitorId(
                              (DpiPersistence *)HIDWORD(v74),
                              (unsigned int)v76,
                              (const struct _LUID *)v39,
                              (struct VIDPN_MGR *)v24,
                              (unsigned __int16)&v74,
                              v53,
                              (unsigned __int16 *)v74);
              if ( (int)v5 < 0 )
                goto LABEL_56;
              v24 -= (unsigned __int16)v74;
              v77 = &v53[(unsigned __int16)v74];
            }
            v38 = v75;
            ++v37;
          }
          v70 = (_QWORD *)WdLogNewEntry5_WdTrace(v47, v46, v48, v49);
          v71 = v75;
          v70[3] = v37;
          v70[4] = v71;
          v70[5] = v44;
          v70[6] = v5;
        }
        else
        {
          v69 = WdLogNewEntry5_WdError(v43, v42);
          *(_QWORD *)(v69 + 24) = (int)v76[1];
          *(_QWORD *)(v69 + 32) = (unsigned int)v32;
          WdLogEvent5_WdError(v69);
          LODWORD(v5) = -1071774884;
        }
LABEL_56:
        auto_rc<DMMVIDPN const>::reset(&v78, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v79 + 40), v72);
      }
      else
      {
        v68 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v68 + 24) = (int)v76[1];
        *(_QWORD *)(v68 + 32) = (unsigned int)v32;
        WdLogEvent5_WdError(v68);
        LODWORD(v5) = -1071774923;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81, v67);
  }
  else
  {
LABEL_36:
    v56 = v23 - v24;
    *v80 = 2 * v56;
    if ( !(2 * v56) )
    {
      LODWORD(v5) = -1073741637;
      v73 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v73 + 24) = 416LL;
      WdLogEvent5_WdWarning(v73);
    }
  }
  return (unsigned int)v5;
}
