/*
 * XREFs of ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C028D330
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007D38 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F7CD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011F70C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C02B6E60 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C02B74C0 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02B78E0 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct _LUID *a2,
        unsigned __int8 a3,
        unsigned __int64 *a4)
{
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGADAPTER *v15; // rbx
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGADAPTER *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _LUID v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  DXGSESSIONMGR *v41; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int HighPart; // edx
  __int64 i; // r8
  void *v48; // rax
  void *v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  unsigned int v65; // [rsp+44h] [rbp-BCh] BYREF
  struct DXGADAPTER *v66; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v67; // [rsp+50h] [rbp-B0h] BYREF
  char v68; // [rsp+58h] [rbp-A8h]
  _BYTE v69[144]; // [rsp+60h] [rbp-A0h] BYREF
  void *v70[32]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v70, 0, sizeof(v70));
  SessionDataForSpecifiedSession = 0LL;
  v65 = 0;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v9, v8);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[19], (unsigned __int64 *)&v66);
  v15 = v11;
  if ( !v11 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = 1224LL;
LABEL_3:
    WdLogEvent5_WdWarning(v16);
    return 3221225485LL;
  }
  v66 = 0LL;
  DxgkpGetPairingAdapters(v11, 0LL, &v66, &v67, 0LL, 0LL, 0);
  DXGADAPTER::ReleaseReference(v15);
  v21 = v66;
  if ( !v66 )
  {
    v16 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v16 + 24) = 1245LL;
    goto LABEL_3;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v69, v66, 0LL);
  v22 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v69, 0LL);
  DXGADAPTER::ReleaseReference(v21);
  if ( (int)v22 >= 0 )
  {
    v28 = *(struct _LUID *)((char *)v21 + 4324);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v69);
    Current = DXGPROCESS::GetCurrent(v30, v29);
    if ( Current )
    {
      KeEnterCriticalRegion();
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v67, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v67);
      if ( *((_DWORD *)Current + 106)
        && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
      {
        if ( !*((_BYTE *)Current + 488) )
        {
          LODWORD(v22) = -2147483611;
          v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
          *(_QWORD *)(v38 + 24) = -2147483611LL;
          WdLogEvent5_WdWarning(v38);
        }
        if ( (int)v22 >= 0 )
        {
          v41 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v36, v35) + 102);
          if ( v41 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v40, v39);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v41,
                                               CurrentProcessSessionId);
          }
          if ( !SessionDataForSpecifiedSession )
          {
            LODWORD(v22) = -1073741811;
            v43 = WdLogNewEntry5_WdError(v40, v39);
            *(_QWORD *)(v43 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v45, v44);
            *(_QWORD *)(v43 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v43);
          }
          if ( (int)v22 >= 0 )
          {
            if ( *((_DWORD *)this + 5) && *((_BYTE *)this + 24) )
            {
              HighPart = a2[17].HighPart;
              for ( i = 0LL; (unsigned int)i < HighPart; HighPart = a2[17].HighPart )
              {
                v48 = (void *)a2[3 * i + 18];
                a2[3 * i + 18] = 0LL;
                v70[i] = v48;
                a2[3 * i + 19] = v28;
                i = (unsigned int)(i + 1);
              }
              v49 = (void *)a2[113];
              a2[113] = 0LL;
              v70[HighPart] = v49;
              v50 = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
                      SessionDataForSpecifiedSession,
                      HighPart + 1,
                      v70,
                      &v65);
              v22 = v50;
              if ( v50 < 0
                || (v54 = DXGSESSIONDATA::VailSendBindCompositionSurface(
                            SessionDataForSpecifiedSession,
                            *((_DWORD *)this + 5),
                            a3,
                            (struct _CSM_BUFFER_INFO_WRAPPER *)a2,
                            v65,
                            a4),
                    v22 = v54,
                    v54 < 0) )
              {
                v55 = WdLogNewEntry5_WdWarning(v52, v51, v53);
                *(_QWORD *)(v55 + 24) = v22;
                WdLogEvent5_WdWarning(v55);
              }
              if ( v65 )
              {
                v56 = DXGSESSIONDATA::VailSendDestroyBundleObject(SessionDataForSpecifiedSession, v65);
                v59 = v56;
                if ( v56 < 0 )
                {
                  v60 = WdLogNewEntry5_WdError(v58, v57);
                  *(_QWORD *)(v60 + 24) = v59;
                  *(_QWORD *)(v60 + 32) = this;
                  WdLogEvent5_WdError(v60);
                }
              }
              if ( (int)v22 >= 0 )
              {
                *((_BYTE *)this + 25) = 1;
                v61 = *a4;
                ++*((_DWORD *)this + 10);
                *((_QWORD *)this + 4) = v61;
              }
            }
            else
            {
              v62 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
              LODWORD(v22) = -1073741823;
              v62[3] = -1073741823LL;
              v62[4] = *((unsigned int *)this + 5);
              v62[5] = *((unsigned __int8 *)this + 24);
              v62[6] = this;
              WdLogEvent5_WdError(v62);
            }
          }
        }
      }
      KeLeaveCriticalRegion();
      if ( v68 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v67, v63);
      KeLeaveCriticalRegion();
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v32, v31);
      *(_QWORD *)(v34 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v34);
      LODWORD(v22) = -1073741811;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v21;
    *(_QWORD *)(v26 + 32) = v22;
    WdLogEvent5_WdWarning(v26);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v27);
  return (unsigned int)v22;
}
