/*
 * XREFs of ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02DFE10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1C0352088 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C035259C (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C0352A3C (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct _LUID *a2,
        unsigned __int8 a3,
        unsigned __int64 *a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  DXGADAPTER *v9; // rbx
  struct DXGADAPTER *v11; // rbx
  DXGCOMPOSITIONSURFACEPROXY *v12; // rdi
  DXGCOMPOSITIONSURFACEPROXY *v13; // r8
  struct DXGADAPTER *v14; // rdx
  struct _LUID v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGPROCESS *Current; // r15
  __int64 v21; // rcx
  DXGSESSIONMGR *v22; // rdi
  unsigned int v23; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v25; // rax
  unsigned int HighPart; // edx
  unsigned int i; // r8d
  __int64 v28; // rdx
  __int64 v29; // rcx
  void *v30; // rax
  void *v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned int v44; // [rsp+54h] [rbp-ACh] BYREF
  struct DXGADAPTER *v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  char v47; // [rsp+68h] [rbp-98h]
  _BYTE v48[144]; // [rsp+70h] [rbp-90h] BYREF
  void *v49[32]; // [rsp+100h] [rbp+0h] BYREF

  memset(v49, 0, sizeof(v49));
  v44 = 0;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL_GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[22], (unsigned __int64 *)&v45);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(3LL, 1497LL);
    return -1073741811LL;
  }
  v45 = 0LL;
  DxgkpGetPairingAdapters(v8, 0, &v45, &v46, 0LL, 0LL, 0);
  DXGADAPTER::ReleaseReference(v9);
  v11 = v45;
  if ( !v45 )
  {
    WdLogSingleEntry1(3LL, 1518LL);
    return -1073741811LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v45, 0LL);
  v12 = (DXGCOMPOSITIONSURFACEPROXY *)(int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48, 0LL);
  DXGADAPTER::ReleaseReference(v11);
  if ( (int)v12 < 0 )
  {
    v13 = v12;
    v14 = v11;
LABEL_35:
    WdLogSingleEntry2(3LL, v14, v13);
    goto LABEL_36;
  }
  v15 = *(struct _LUID *)((char *)v11 + 4444);
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v48);
  Current = DXGPROCESS::GetCurrent(v17, v16, v18, v19);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v46, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v46);
    if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 600) )
      {
        v22 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        if ( v22
          && (v23 = PsGetCurrentProcessSessionId(v21),
              (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v22, v23)) != 0LL) )
        {
          v25 = *((unsigned int *)this + 5);
          if ( (_DWORD)v25 && *((_BYTE *)this + 40) )
          {
            HighPart = a2[20].HighPart;
            for ( i = 0; i < HighPart; v49[v29] = v30 )
            {
              v28 = 4LL * i;
              v29 = i++;
              v30 = (void *)a2[v28 + 21];
              a2[v28 + 21] = 0LL;
              a2[v28 + 22] = v15;
              HighPart = a2[20].HighPart;
            }
            v31 = (void *)a2[147];
            a2[147] = 0LL;
            v49[HighPart] = v31;
            v32 = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
                    SessionDataForSpecifiedSession,
                    HighPart + 1,
                    v49,
                    &v44);
            LODWORD(v12) = v32;
            if ( v32 >= 0 )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v33);
              v35[3] = *((unsigned int *)this + 5);
              v35[4] = this;
              v35[5] = a3;
              v35[6] = a2[1];
              v36 = DXGSESSIONDATA::VailSendBindCompositionSurface(
                      SessionDataForSpecifiedSession,
                      *((_DWORD *)this + 5),
                      a3,
                      (const struct CSM_BUFFER_INFO *)a2,
                      v44,
                      a4);
              LODWORD(v12) = v36;
              if ( v36 < 0 )
                WdLogSingleEntry5(3LL, *((unsigned int *)this + 5), this, a3, *(_QWORD *)&a2[1], v36);
            }
            else
            {
              WdLogSingleEntry2(3LL, v32, this);
            }
            if ( v44 )
            {
              v37 = DXGSESSIONDATA::VailSendDestroyBundleObject(SessionDataForSpecifiedSession, v44);
              if ( v37 < 0 )
              {
                v38 = v37;
                WdLogSingleEntry2(2LL, v37, this);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed SendDestroyBundleObject Returning 0x%I64x",
                  v38,
                  (__int64)this,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            if ( (int)v12 >= 0 )
            {
              *((_BYTE *)this + 41) = 1;
              v39 = *a4;
              ++*((_DWORD *)this + 14);
              *((_QWORD *)this + 6) = v39;
            }
          }
          else
          {
            LODWORD(v12) = -1073741823;
            WdLogSingleEntry4(2LL, -1073741823LL, v25, *((unsigned __int8 *)this + 40), this);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"PairedBind is called without promote Returning  0x%I64x",
              -1073741823LL,
              *((unsigned int *)this + 5),
              *((unsigned __int8 *)this + 40),
              (__int64)this,
              0LL);
          }
        }
        else
        {
          LODWORD(v12) = -1073741811;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21);
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          v42 = PsGetCurrentProcessSessionId(v41);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v42,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        LODWORD(v12) = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
      }
    }
    KeLeaveCriticalRegion();
    if ( v47 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v46);
    KeLeaveCriticalRegion();
    if ( (int)v12 >= 0 )
      goto LABEL_36;
    v14 = (struct DXGADAPTER *)(int)v12;
    v13 = this;
    goto LABEL_35;
  }
  WdLogSingleEntry1(2LL, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid process context. Returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v12) = -1073741811;
LABEL_36:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
  return (unsigned int)v12;
}
