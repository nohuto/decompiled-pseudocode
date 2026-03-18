/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0234F84
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025AFC4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00080DC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011C24 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00251CC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003F07C (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C0236AF8 (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C0236BE8 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C02B26D4 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C02B3554 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 */

__int64 __fastcall DxgkpSendTestVmBusCommand(struct DXGADAPTER *a1, struct _D3DKMT_DRT_VMBUS_COMMAND *a2)
{
  __int64 v3; // rsi
  PVOID PoolWithTag; // r13
  PVOID v5; // r12
  DXG_VMBUS_CHANNEL_BASE *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  SIZE_T v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  size_t v18; // r8
  char *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  DXGSESSIONMGR *v23; // rbx
  unsigned int v24; // eax
  DXGSESSIONDATA *v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rcx
  struct _KPROCESS *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  DXGSESSIONMGR *v40; // rbx
  unsigned int v41; // eax
  DXGSESSIONDATA *v42; // r15
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rdx
  DXGSESSIONMGR *v46; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v49; // rbx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rcx
  struct _KPROCESS *v54; // rbx
  __int64 ProcessDxgProcess; // rax
  __int64 v56; // rdx
  __int64 v57; // r15
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  DXGSESSIONMGR *v63; // rbx
  unsigned int v64; // eax
  DXGSESSIONDATA *v65; // r15
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rdx
  int v69; // eax
  DXGSESSIONMGR *v70; // rbx
  __int64 v71; // r8
  unsigned int v72; // eax
  DXGSESSIONDATA *v73; // r15
  __int64 v74; // rbx
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rbx
  __int64 v78; // rcx
  struct _KPROCESS *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r15
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  DXGSESSIONMGR *v88; // rbx
  unsigned int v89; // eax
  DXGSESSIONDATA *v90; // r15
  __int64 v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // rdx
  DXGSESSIONMGR *v94; // rbx
  unsigned int v95; // eax
  DXGSESSIONDATA *v96; // r15
  __int64 v97; // rbx
  __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // rbx
  __int64 v101; // rcx
  struct _KPROCESS *v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r15
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  DXGSESSIONMGR *v111; // rbx
  unsigned int v112; // eax
  DXGSESSIONDATA *v113; // r15
  __int64 v114; // rbx
  __int64 v115; // rcx
  __int64 v116; // rdx
  void *v117; // rcx
  __int64 v118; // rax
  size_t v119; // r8
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  unsigned int v124; // [rsp+30h] [rbp-1D8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-1D0h] BYREF
  PVOID v126; // [rsp+40h] [rbp-1C8h] BYREF
  PVOID v127; // [rsp+48h] [rbp-1C0h] BYREF
  PVOID v128; // [rsp+50h] [rbp-1B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-1B0h]
  PVOID v130; // [rsp+60h] [rbp-1A8h]
  PVOID v131; // [rsp+68h] [rbp-1A0h] BYREF
  _BYTE v132[16]; // [rsp+70h] [rbp-198h] BYREF
  _BYTE v133[16]; // [rsp+80h] [rbp-188h] BYREF
  _BYTE v134[16]; // [rsp+90h] [rbp-178h] BYREF
  _BYTE v135[16]; // [rsp+A0h] [rbp-168h] BYREF
  _BYTE v136[16]; // [rsp+B0h] [rbp-158h] BYREF
  _BYTE v137[16]; // [rsp+C0h] [rbp-148h] BYREF
  _BYTE v138[16]; // [rsp+D0h] [rbp-138h] BYREF
  _BYTE v139[16]; // [rsp+E0h] [rbp-128h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-118h] BYREF
  char v141; // [rsp+120h] [rbp-E8h]
  struct _KAPC_STATE v142; // [rsp+128h] [rbp-E0h] BYREF
  char v143; // [rsp+158h] [rbp-B0h]
  struct _KAPC_STATE v144; // [rsp+160h] [rbp-A8h] BYREF
  char v145; // [rsp+190h] [rbp-78h]
  struct _KAPC_STATE v146; // [rsp+198h] [rbp-70h] BYREF
  char v147; // [rsp+1C8h] [rbp-40h]

  LODWORD(v3) = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v5 = 0LL;
  v130 = 0LL;
  v124 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    v10 = *((_DWORD *)a2 + 3);
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        if ( !a1 )
        {
          v7 = WdLogNewEntry5_WdError(0LL, a2);
          *(_QWORD *)(v7 + 24) = 13420LL;
          goto LABEL_3;
        }
        v6 = (struct DXGADAPTER *)((char *)a1 + 4208);
        if ( a1 == (struct DXGADAPTER *)-4208LL )
        {
          v7 = WdLogNewEntry5_WdError(-4208LL, a2);
          *(_QWORD *)(v7 + 24) = 13428LL;
          goto LABEL_3;
        }
      }
      else if ( v10 <= 1 || v10 > 3 )
      {
        v7 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v7 + 24) = 13439LL;
        goto LABEL_3;
      }
    }
    else
    {
      v6 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2) + 183);
      if ( !v6 )
      {
        v7 = WdLogNewEntry5_WdError(a1, v11);
        *(_QWORD *)(v7 + 24) = 13411LL;
        goto LABEL_3;
      }
    }
    v12 = *((_QWORD *)a2 + 3);
    if ( v12 )
    {
      if ( !*((_QWORD *)a2 + 2) )
      {
        v7 = WdLogNewEntry5_WdError(a1, v12);
        *(_QWORD *)(v7 + 24) = 13450LL;
        goto LABEL_3;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12, 0x4B677844u);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v17 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
        *(_QWORD *)(v17 + 24) = 13458LL;
LABEL_20:
        WdLogEvent5_WdLowResource(v17);
        LODWORD(v3) = -1073741801;
        goto LABEL_174;
      }
      v18 = *((_QWORD *)a2 + 3);
      v19 = (char *)*((_QWORD *)a2 + 2);
      if ( &v19[v18] < v19 || (unsigned __int64)&v19[v18] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(PoolWithTag, v19, v18);
    }
    if ( *((_QWORD *)a2 + 5) )
    {
      if ( *((_QWORD *)a2 + 4) )
      {
        v124 = (*((_DWORD *)a2 + 10) + 7) & 0xFFFFFFF8;
        v5 = ExAllocatePoolWithTag((POOL_TYPE)512, v124, 0x4B677844u);
        v130 = v5;
        if ( !v5 )
        {
          v17 = WdLogNewEntry5_WdLowResource(a1, v12, v20, v21);
          *(_QWORD *)(v17 + 24) = 13484LL;
          goto LABEL_20;
        }
      }
    }
    if ( !v5 && !*((_QWORD *)a2 + 5) )
    {
      v22 = *((_DWORD *)a2 + 3);
      if ( v22 >= 0 )
      {
        if ( v22 <= 1 )
        {
          LODWORD(v3) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(v6, PoolWithTag, *((_DWORD *)a2 + 6));
LABEL_162:
          if ( (int)v3 < 0 )
            goto LABEL_174;
          v119 = *((_QWORD *)a2 + 5);
          if ( v124 < v119 )
          {
            v120 = WdLogNewEntry5_WdEvent(v9, v8);
            *(_QWORD *)(v120 + 24) = *((_QWORD *)a2 + 5);
            *(_QWORD *)(v120 + 32) = v124;
            WdLogEvent5_WdEvent(v120);
            LODWORD(v3) = -1073741823;
            goto LABEL_174;
          }
          if ( v5 )
          {
            v9 = (char *)*((_QWORD *)a2 + 4);
            if ( v9 )
            {
              if ( v119 )
              {
                if ( (unsigned __int64)&v9[v119] > MmUserProbeAddress || &v9[v119] <= v9 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v9, v5, v119);
              }
            }
          }
LABEL_173:
          if ( (int)v3 >= 0 )
            goto LABEL_175;
          goto LABEL_174;
        }
        if ( v22 == 2 )
        {
          v126 = 0LL;
          v46 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 88);
          if ( v46 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v46,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( !SessionDataForSpecifiedSession )
          {
            v49 = WdLogNewEntry5_WdError(v9, v8);
            *(_QWORD *)(v49 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v50);
            LODWORD(v3) = -1073741790;
            *(_QWORD *)(v49 + 32) = -1073741790LL;
            WdLogEvent5_WdError(v49);
          }
          if ( (int)v3 >= 0 )
          {
            v51 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&v126);
            v3 = v51;
            if ( v51 < 0 )
            {
              v52 = WdLogNewEntry5_WdError(v9, v8);
              *(_QWORD *)(v52 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v53);
              *(_QWORD *)(v52 + 32) = v3;
              WdLogEvent5_WdError(v52);
            }
            if ( (int)v3 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v133);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v133);
              v54 = (struct _KPROCESS *)v126;
              ProcessDxgProcess = PsGetProcessDxgProcess(v126);
              v57 = ProcessDxgProcess;
              if ( ProcessDxgProcess && *(char *)(ProcessDxgProcess + 347) >= 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX(
                  (DXGPROCESSMUTEX *)v137,
                  (struct DXGFASTMUTEX *const *)ProcessDxgProcess);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v137);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v133, v58);
                v143 = 0;
                CPROCESSATTACHHELPER::Attach(&v142, v54);
                KeEnterCriticalRegion();
                if ( *(_DWORD *)(v57 + 424)
                  && (*(_BYTE *)(v57 + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
                {
                  v63 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v60, v59) + 88);
                  if ( v63 )
                  {
                    v64 = PsGetCurrentProcessSessionId(v62);
                    v65 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v63, v64);
                  }
                  else
                  {
                    v65 = 0LL;
                  }
                  if ( !v65 )
                  {
                    LODWORD(v3) = -1073741811;
                    v66 = WdLogNewEntry5_WdError(v62, v61);
                    *(_QWORD *)(v66 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v67);
                    *(_QWORD *)(v66 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v66);
                  }
                  if ( (int)v3 >= 0 )
                    LODWORD(v3) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                    v65,
                                    PoolWithTag,
                                    *((_DWORD *)a2 + 6),
                                    0LL,
                                    0LL,
                                    0);
                }
                KeLeaveCriticalRegion();
                if ( v143 )
                {
                  KeUnstackDetachProcess(&v142);
                  v143 = 0;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(
                  (DXGPROCESSCOPYPROTECTIONMUTEX *)v137,
                  v68);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v133, v56);
            }
          }
          if ( v126 )
          {
            ObfDereferenceObject(v126);
            v126 = 0LL;
          }
          goto LABEL_162;
        }
        if ( v22 == 3 )
        {
          Object = 0LL;
          v23 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 88);
          if ( v23 )
          {
            v24 = PsGetCurrentProcessSessionId(v9);
            v25 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v23, v24);
          }
          else
          {
            v25 = 0LL;
          }
          if ( !v25 )
          {
            v26 = WdLogNewEntry5_WdError(v9, v8);
            *(_QWORD *)(v26 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v27);
            LODWORD(v3) = -1073741790;
            *(_QWORD *)(v26 + 32) = -1073741790LL;
            WdLogEvent5_WdError(v26);
          }
          if ( (int)v3 >= 0 )
          {
            v28 = DXGSESSIONDATA::ReferenceDwmProcess(v25, (struct _EPROCESS **)&Object);
            v3 = v28;
            if ( v28 < 0 )
            {
              v29 = WdLogNewEntry5_WdError(v9, v8);
              *(_QWORD *)(v29 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v30);
              *(_QWORD *)(v29 + 32) = v3;
              WdLogEvent5_WdError(v29);
            }
            if ( (int)v3 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v132);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v132);
              v31 = (struct _KPROCESS *)Object;
              v32 = PsGetProcessDxgProcess(Object);
              v34 = v32;
              if ( v32 && *(char *)(v32 + 347) >= 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v136, (struct DXGFASTMUTEX *const *)v32);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v136);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v132, v35);
                v141 = 0;
                CPROCESSATTACHHELPER::Attach(&ApcState, v31);
                KeEnterCriticalRegion();
                if ( *(_DWORD *)(v34 + 424)
                  && (*(_BYTE *)(v34 + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
                {
                  v40 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v37, v36) + 88);
                  if ( v40 )
                  {
                    v41 = PsGetCurrentProcessSessionId(v39);
                    v42 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v40, v41);
                  }
                  else
                  {
                    v42 = 0LL;
                  }
                  if ( !v42 )
                  {
                    LODWORD(v3) = -1073741811;
                    v43 = WdLogNewEntry5_WdError(v39, v38);
                    *(_QWORD *)(v43 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v44);
                    *(_QWORD *)(v43 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v43);
                  }
                  if ( (int)v3 >= 0 )
                    LODWORD(v3) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                    v42,
                                    PoolWithTag,
                                    *((_DWORD *)a2 + 6),
                                    0LL,
                                    0LL,
                                    0);
                }
                KeLeaveCriticalRegion();
                if ( v141 )
                {
                  KeUnstackDetachProcess(&ApcState);
                  v141 = 0;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(
                  (DXGPROCESSCOPYPROTECTIONMUTEX *)v136,
                  v45);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v132, v33);
            }
          }
          if ( Object )
          {
            ObfDereferenceObject(Object);
            Object = 0LL;
          }
          goto LABEL_162;
        }
      }
      v7 = WdLogNewEntry5_WdError(a1, v12);
      *(_QWORD *)(v7 + 24) = 13537LL;
      goto LABEL_3;
    }
    v69 = *((_DWORD *)a2 + 3);
    if ( v69 < 0 )
      goto LABEL_172;
    if ( v69 > 1 )
    {
      if ( v69 == 2 )
      {
        v128 = 0LL;
        v94 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 88);
        if ( v94 )
        {
          v95 = PsGetCurrentProcessSessionId(v9);
          v96 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v94, v95);
        }
        else
        {
          v96 = 0LL;
        }
        if ( !v96 )
        {
          v97 = WdLogNewEntry5_WdError(v9, v8);
          *(_QWORD *)(v97 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v98);
          LODWORD(v3) = -1073741790;
          *(_QWORD *)(v97 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v97);
        }
        if ( (int)v3 >= 0 )
        {
          v99 = DXGSESSIONDATA::ReferenceDwmProcess(v96, (struct _EPROCESS **)&v128);
          v3 = v99;
          if ( v99 < 0 )
          {
            v100 = WdLogNewEntry5_WdError(v9, v8);
            *(_QWORD *)(v100 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v101);
            *(_QWORD *)(v100 + 32) = v3;
            WdLogEvent5_WdError(v100);
          }
          if ( (int)v3 >= 0 )
          {
            DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v135);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v135);
            v102 = (struct _KPROCESS *)v128;
            v103 = PsGetProcessDxgProcess(v128);
            v105 = v103;
            if ( v103 && *(char *)(v103 + 347) >= 0 )
            {
              DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v139, (struct DXGFASTMUTEX *const *)v103);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v139);
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v135, v106);
              v147 = 0;
              CPROCESSATTACHHELPER::Attach(&v146, v102);
              KeEnterCriticalRegion();
              if ( *(_DWORD *)(v105 + 424)
                && (*(_BYTE *)(v105 + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
              {
                v111 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v108, v107) + 88);
                if ( v111 )
                {
                  v112 = PsGetCurrentProcessSessionId(v110);
                  v113 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v111, v112);
                }
                else
                {
                  v113 = 0LL;
                }
                if ( !v113 )
                {
                  LODWORD(v3) = -1073741811;
                  v114 = WdLogNewEntry5_WdError(v110, v109);
                  *(_QWORD *)(v114 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v115);
                  *(_QWORD *)(v114 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v114);
                }
                if ( (int)v3 >= 0 )
                  LODWORD(v3) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                  v113,
                                  PoolWithTag,
                                  *((_DWORD *)a2 + 6),
                                  v5,
                                  &v124,
                                  1);
              }
              KeLeaveCriticalRegion();
              if ( v147 )
              {
                KeUnstackDetachProcess(&v146);
                v147 = 0;
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v139, v116);
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v135, v104);
          }
        }
        if ( v128 )
        {
          ObfDereferenceObject(v128);
          v128 = 0LL;
        }
        goto LABEL_159;
      }
      if ( v69 == 3 )
      {
        v127 = 0LL;
        v70 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 88);
        if ( v70 )
        {
          v72 = PsGetCurrentProcessSessionId(v9);
          v73 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v70, v72);
        }
        else
        {
          v73 = 0LL;
        }
        if ( !v73 )
        {
          v74 = WdLogNewEntry5_WdError(v9, v8);
          *(_QWORD *)(v74 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v75);
          LODWORD(v3) = -1073741790;
          *(_QWORD *)(v74 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v74);
        }
        if ( (int)v3 >= 0 )
        {
          v76 = DXGSESSIONDATA::ReferenceDwmProcess(v73, (struct _EPROCESS **)&v127);
          v3 = v76;
          if ( v76 < 0 )
          {
            v77 = WdLogNewEntry5_WdError(v9, v8);
            *(_QWORD *)(v77 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v78);
            *(_QWORD *)(v77 + 32) = v3;
            WdLogEvent5_WdError(v77);
          }
          if ( (int)v3 >= 0 )
          {
            DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v134);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v134);
            v79 = (struct _KPROCESS *)v127;
            v80 = PsGetProcessDxgProcess(v127);
            v82 = v80;
            if ( v80 && *(char *)(v80 + 347) >= 0 )
            {
              DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v138, (struct DXGFASTMUTEX *const *)v80);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v138);
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v134, v83);
              v145 = 0;
              CPROCESSATTACHHELPER::Attach(&v144, v79);
              KeEnterCriticalRegion();
              if ( *(_DWORD *)(v82 + 424)
                && (*(_BYTE *)(v82 + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
              {
                v88 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v85, v84) + 88);
                if ( v88 )
                {
                  v89 = PsGetCurrentProcessSessionId(v87);
                  v90 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v88, v89);
                }
                else
                {
                  v90 = 0LL;
                }
                if ( !v90 )
                {
                  LODWORD(v3) = -1073741811;
                  v91 = WdLogNewEntry5_WdError(v87, v86);
                  *(_QWORD *)(v91 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v92);
                  *(_QWORD *)(v91 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v91);
                }
                if ( (int)v3 >= 0 )
                  LODWORD(v3) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                  v90,
                                  PoolWithTag,
                                  *((_DWORD *)a2 + 6),
                                  v5,
                                  &v124,
                                  1);
              }
              KeLeaveCriticalRegion();
              if ( v145 )
              {
                KeUnstackDetachProcess(&v144);
                v145 = 0;
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v138, v93);
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v134, v81);
          }
        }
        if ( v127 )
        {
          ObfDereferenceObject(v127);
          v127 = 0LL;
        }
        goto LABEL_159;
      }
LABEL_172:
      v121 = WdLogNewEntry5_WdError(a1, v12);
      *(_QWORD *)(v121 + 24) = 13619LL;
      WdLogEvent5_WdError(v121);
      LODWORD(v3) = -1073741811;
      goto LABEL_173;
    }
    if ( *((_QWORD *)a2 + 3) == 56LL && *((_DWORD *)PoolWithTag + 4) == 1016 )
    {
      v117 = (void *)*((_QWORD *)PoolWithTag + 5);
      if ( v117 )
      {
        v131 = 0LL;
        LODWORD(v3) = ObReferenceObjectByHandle(v117, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v131, 0LL);
        if ( (int)v3 < 0 )
        {
LABEL_159:
          if ( !v5 && v124 )
          {
            v118 = WdLogNewEntry5_WdWarning(v9, v8, v71);
            *(_QWORD *)(v118 + 24) = v124;
            WdLogEvent5_WdWarning(v118);
          }
          goto LABEL_162;
        }
        *((_QWORD *)PoolWithTag + 5) = v131;
      }
    }
    LODWORD(v3) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v6, PoolWithTag, *((_DWORD *)a2 + 6), v5, &v124);
    goto LABEL_159;
  }
  v7 = WdLogNewEntry5_WdError(a1, 0LL);
  *(_QWORD *)(v7 + 24) = 13399LL;
LABEL_3:
  WdLogEvent5_WdError(v7);
  LODWORD(v3) = -1073741811;
LABEL_174:
  v122 = WdLogNewEntry5_WdEvent(v9, v8);
  *(_QWORD *)(v122 + 24) = (int)v3;
  WdLogEvent5_WdEvent(v122);
LABEL_175:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v3;
}
