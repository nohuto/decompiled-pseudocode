/*
 * XREFs of ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0288930
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C02B24B0 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C02B2B10 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02B2F30 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
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
  __int64 v44; // rcx
  unsigned int HighPart; // edx
  __int64 i; // r8
  void *v47; // rax
  void *v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // eax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  unsigned int v64; // [rsp+44h] [rbp-BCh] BYREF
  struct DXGADAPTER *v65; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v66; // [rsp+50h] [rbp-B0h] BYREF
  char v67; // [rsp+58h] [rbp-A8h]
  _BYTE v68[144]; // [rsp+60h] [rbp-A0h] BYREF
  void *v69[32]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v69, 0, sizeof(v69));
  SessionDataForSpecifiedSession = 0LL;
  v64 = 0;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v9, v8);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[19], (unsigned __int64 *)&v65);
  v15 = v11;
  if ( !v11 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = 1224LL;
LABEL_3:
    WdLogEvent5_WdWarning(v16);
    return 3221225485LL;
  }
  v65 = 0LL;
  DxgkpGetPairingAdapters(v11, 0LL, &v65, &v66, 0LL, 0LL, 0);
  DXGADAPTER::ReleaseReferenceNoTracking(v15);
  v21 = v65;
  if ( !v65 )
  {
    v16 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v16 + 24) = 1245LL;
    goto LABEL_3;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v68, v65, 0LL);
  v22 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v68, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v21);
  if ( (int)v22 >= 0 )
  {
    v28 = *(struct _LUID *)((char *)v21 + 4292);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v68);
    Current = DXGPROCESS::GetCurrent(v30, v29);
    if ( Current )
    {
      KeEnterCriticalRegion();
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v66, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v66);
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
          v41 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v36, v35) + 88);
          if ( v41 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v40);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v41,
                                               CurrentProcessSessionId);
          }
          if ( !SessionDataForSpecifiedSession )
          {
            LODWORD(v22) = -1073741811;
            v43 = WdLogNewEntry5_WdError(v40, v39);
            *(_QWORD *)(v43 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v44);
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
                v47 = (void *)a2[3 * i + 18];
                a2[3 * i + 18] = 0LL;
                v69[i] = v47;
                a2[3 * i + 19] = v28;
                i = (unsigned int)(i + 1);
              }
              v48 = (void *)a2[113];
              a2[113] = 0LL;
              v69[HighPart] = v48;
              v49 = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
                      SessionDataForSpecifiedSession,
                      HighPart + 1,
                      v69,
                      &v64);
              v22 = v49;
              if ( v49 < 0
                || (v53 = DXGSESSIONDATA::VailSendBindCompositionSurface(
                            SessionDataForSpecifiedSession,
                            *((_DWORD *)this + 5),
                            a3,
                            (struct _CSM_BUFFER_INFO_WRAPPER *)a2,
                            v64,
                            a4),
                    v22 = v53,
                    v53 < 0) )
              {
                v54 = WdLogNewEntry5_WdWarning(v51, v50, v52);
                *(_QWORD *)(v54 + 24) = v22;
                WdLogEvent5_WdWarning(v54);
              }
              if ( v64 )
              {
                v55 = DXGSESSIONDATA::VailSendDestroyBundleObject(SessionDataForSpecifiedSession, v64);
                v58 = v55;
                if ( v55 < 0 )
                {
                  v59 = WdLogNewEntry5_WdError(v57, v56);
                  *(_QWORD *)(v59 + 24) = v58;
                  *(_QWORD *)(v59 + 32) = this;
                  WdLogEvent5_WdError(v59);
                }
              }
              if ( (int)v22 >= 0 )
              {
                *((_BYTE *)this + 25) = 1;
                v60 = *a4;
                ++*((_DWORD *)this + 10);
                *((_QWORD *)this + 4) = v60;
              }
            }
            else
            {
              v61 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
              LODWORD(v22) = -1073741823;
              v61[3] = -1073741823LL;
              v61[4] = *((unsigned int *)this + 5);
              v61[5] = *((unsigned __int8 *)this + 24);
              v61[6] = this;
              WdLogEvent5_WdError(v61);
            }
          }
        }
      }
      KeLeaveCriticalRegion();
      if ( v67 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v66, v62);
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
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68, v27);
  return (unsigned int)v22;
}
