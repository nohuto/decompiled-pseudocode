/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0238060
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025E2E4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00065E8 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CFF0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002597C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003FEE8 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C0239BD8 (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C0239CC8 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C02B5C34 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C02B6AB4 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
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
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _KPROCESS *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  DXGSESSIONMGR *v42; // rbx
  unsigned int v43; // eax
  DXGSESSIONDATA *v44; // r15
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  DXGSESSIONMGR *v48; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct _KPROCESS *v58; // rbx
  __int64 ProcessDxgProcess; // rax
  __int64 v60; // rdx
  __int64 v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  DXGSESSIONMGR *v67; // rbx
  unsigned int v68; // eax
  DXGSESSIONDATA *v69; // r15
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // eax
  DXGSESSIONMGR *v74; // rbx
  __int64 v75; // r8
  unsigned int v76; // eax
  DXGSESSIONDATA *v77; // r15
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rcx
  struct _KPROCESS *v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r15
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  DXGSESSIONMGR *v94; // rbx
  unsigned int v95; // eax
  DXGSESSIONDATA *v96; // r15
  __int64 v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  DXGSESSIONMGR *v100; // rbx
  unsigned int v101; // eax
  DXGSESSIONDATA *v102; // r15
  __int64 v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // rcx
  int v106; // eax
  __int64 v107; // rbx
  __int64 v108; // rdx
  __int64 v109; // rcx
  struct _KPROCESS *v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // r15
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  DXGSESSIONMGR *v119; // rbx
  unsigned int v120; // eax
  DXGSESSIONDATA *v121; // r15
  __int64 v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // rcx
  void *v125; // rcx
  __int64 v126; // rax
  size_t v127; // r8
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  unsigned int v132; // [rsp+30h] [rbp-1D8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-1D0h] BYREF
  PVOID v134; // [rsp+40h] [rbp-1C8h] BYREF
  PVOID v135; // [rsp+48h] [rbp-1C0h] BYREF
  PVOID v136; // [rsp+50h] [rbp-1B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-1B0h]
  PVOID v138; // [rsp+60h] [rbp-1A8h]
  PVOID v139; // [rsp+68h] [rbp-1A0h] BYREF
  _BYTE v140[16]; // [rsp+70h] [rbp-198h] BYREF
  _BYTE v141[16]; // [rsp+80h] [rbp-188h] BYREF
  _BYTE v142[16]; // [rsp+90h] [rbp-178h] BYREF
  _BYTE v143[16]; // [rsp+A0h] [rbp-168h] BYREF
  _BYTE v144[16]; // [rsp+B0h] [rbp-158h] BYREF
  _BYTE v145[16]; // [rsp+C0h] [rbp-148h] BYREF
  _BYTE v146[16]; // [rsp+D0h] [rbp-138h] BYREF
  _BYTE v147[16]; // [rsp+E0h] [rbp-128h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-118h] BYREF
  char v149; // [rsp+120h] [rbp-E8h]
  struct _KAPC_STATE v150; // [rsp+128h] [rbp-E0h] BYREF
  char v151; // [rsp+158h] [rbp-B0h]
  struct _KAPC_STATE v152; // [rsp+160h] [rbp-A8h] BYREF
  char v153; // [rsp+190h] [rbp-78h]
  struct _KAPC_STATE v154; // [rsp+198h] [rbp-70h] BYREF
  char v155; // [rsp+1C8h] [rbp-40h]

  LODWORD(v3) = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v5 = 0LL;
  v138 = 0LL;
  v132 = 0;
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
          *(_QWORD *)(v7 + 24) = 13555LL;
          goto LABEL_3;
        }
        v6 = (struct DXGADAPTER *)((char *)a1 + 4240);
        if ( a1 == (struct DXGADAPTER *)-4240LL )
        {
          v7 = WdLogNewEntry5_WdError(-4240LL, a2);
          *(_QWORD *)(v7 + 24) = 13563LL;
          goto LABEL_3;
        }
      }
      else if ( v10 <= 1 || v10 > 3 )
      {
        v7 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v7 + 24) = 13574LL;
        goto LABEL_3;
      }
    }
    else
    {
      v6 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2) + 197);
      if ( !v6 )
      {
        v7 = WdLogNewEntry5_WdError(a1, v11);
        *(_QWORD *)(v7 + 24) = 13546LL;
        goto LABEL_3;
      }
    }
    v12 = *((_QWORD *)a2 + 3);
    if ( v12 )
    {
      if ( !*((_QWORD *)a2 + 2) )
      {
        v7 = WdLogNewEntry5_WdError(a1, v12);
        *(_QWORD *)(v7 + 24) = 13585LL;
        goto LABEL_3;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12, 0x4B677844u);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v17 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
        *(_QWORD *)(v17 + 24) = 13593LL;
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
        v132 = (*((_DWORD *)a2 + 10) + 7) & 0xFFFFFFF8;
        v5 = ExAllocatePoolWithTag((POOL_TYPE)512, v132, 0x4B677844u);
        v138 = v5;
        if ( !v5 )
        {
          v17 = WdLogNewEntry5_WdLowResource(a1, v12, v20, v21);
          *(_QWORD *)(v17 + 24) = 13619LL;
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
          v127 = *((_QWORD *)a2 + 5);
          if ( v132 < v127 )
          {
            v128 = WdLogNewEntry5_WdEvent(v9, v8);
            *(_QWORD *)(v128 + 24) = *((_QWORD *)a2 + 5);
            *(_QWORD *)(v128 + 32) = v132;
            WdLogEvent5_WdEvent(v128);
            LODWORD(v3) = -1073741823;
            goto LABEL_174;
          }
          if ( v5 )
          {
            v9 = (char *)*((_QWORD *)a2 + 4);
            if ( v9 )
            {
              if ( v127 )
              {
                if ( (unsigned __int64)&v9[v127] > MmUserProbeAddress || &v9[v127] <= v9 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v9, v5, v127);
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
          v134 = 0LL;
          v48 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 102);
          if ( v48 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v48,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( !SessionDataForSpecifiedSession )
          {
            v51 = WdLogNewEntry5_WdError(v9, v8);
            *(_QWORD *)(v51 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v53, v52);
            LODWORD(v3) = -1073741790;
            *(_QWORD *)(v51 + 32) = -1073741790LL;
            WdLogEvent5_WdError(v51);
          }
          if ( (int)v3 >= 0 )
          {
            v54 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&v134);
            v3 = v54;
            if ( v54 < 0 )
            {
              v55 = WdLogNewEntry5_WdError(v9, v8);
              *(_QWORD *)(v55 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v57, v56);
              *(_QWORD *)(v55 + 32) = v3;
              WdLogEvent5_WdError(v55);
            }
            if ( (int)v3 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v141);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v141);
              v58 = (struct _KPROCESS *)v134;
              ProcessDxgProcess = PsGetProcessDxgProcess(v134);
              v61 = ProcessDxgProcess;
              if ( ProcessDxgProcess && *(char *)(ProcessDxgProcess + 347) >= 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX(
                  (DXGPROCESSMUTEX *)v145,
                  (struct DXGFASTMUTEX *const *)ProcessDxgProcess);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v145);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v141, v62);
                v151 = 0;
                CPROCESSATTACHHELPER::Attach(&v150, v58);
                KeEnterCriticalRegion();
                if ( *(_DWORD *)(v61 + 424)
                  && (*(_BYTE *)(v61 + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
                {
                  v67 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v64, v63) + 102);
                  if ( v67 )
                  {
                    v68 = PsGetCurrentProcessSessionId(v66, v65);
                    v69 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v67, v68);
                  }
                  else
                  {
                    v69 = 0LL;
                  }
                  if ( !v69 )
                  {
                    LODWORD(v3) = -1073741811;
                    v70 = WdLogNewEntry5_WdError(v66, v65);
                    *(_QWORD *)(v70 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v72, v71);
                    *(_QWORD *)(v70 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v70);
                  }
                  if ( (int)v3 >= 0 )
                    LODWORD(v3) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                    v69,
                                    PoolWithTag,
                                    *((_DWORD *)a2 + 6),
                                    0LL,
                                    0LL,
                                    0);
                }
                KeLeaveCriticalRegion();
                if ( v151 )
                {
                  KeUnstackDetachProcess(&v150);
                  v151 = 0;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v145);
              }
              DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v141, v60);
            }
          }
          if ( v134 )
          {
            ObfDereferenceObject(v134);
            v134 = 0LL;
          }
          goto LABEL_162;
        }
        if ( v22 == 3 )
        {
          Object = 0LL;
          v23 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 102);
          if ( v23 )
          {
            v24 = PsGetCurrentProcessSessionId(v9, v8);
            v25 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v23, v24);
          }
          else
          {
            v25 = 0LL;
          }
          if ( !v25 )
          {
            v26 = WdLogNewEntry5_WdError(v9, v8);
            *(_QWORD *)(v26 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v28, v27);
            LODWORD(v3) = -1073741790;
            *(_QWORD *)(v26 + 32) = -1073741790LL;
            WdLogEvent5_WdError(v26);
          }
          if ( (int)v3 >= 0 )
          {
            v29 = DXGSESSIONDATA::ReferenceDwmProcess(v25, (struct _EPROCESS **)&Object);
            v3 = v29;
            if ( v29 < 0 )
            {
              v30 = WdLogNewEntry5_WdError(v9, v8);
              *(_QWORD *)(v30 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v32, v31);
              *(_QWORD *)(v30 + 32) = v3;
              WdLogEvent5_WdError(v30);
            }
            if ( (int)v3 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v140);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v140);
              v33 = (struct _KPROCESS *)Object;
              v34 = PsGetProcessDxgProcess(Object);
              v36 = v34;
              if ( v34 && *(char *)(v34 + 347) >= 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v144, (struct DXGFASTMUTEX *const *)v34);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v144);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v140, v37);
                v149 = 0;
                CPROCESSATTACHHELPER::Attach(&ApcState, v33);
                KeEnterCriticalRegion();
                if ( *(_DWORD *)(v36 + 424)
                  && (*(_BYTE *)(v36 + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
                {
                  v42 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v39, v38) + 102);
                  if ( v42 )
                  {
                    v43 = PsGetCurrentProcessSessionId(v41, v40);
                    v44 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v42, v43);
                  }
                  else
                  {
                    v44 = 0LL;
                  }
                  if ( !v44 )
                  {
                    LODWORD(v3) = -1073741811;
                    v45 = WdLogNewEntry5_WdError(v41, v40);
                    *(_QWORD *)(v45 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v47, v46);
                    *(_QWORD *)(v45 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v45);
                  }
                  if ( (int)v3 >= 0 )
                    LODWORD(v3) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                    v44,
                                    PoolWithTag,
                                    *((_DWORD *)a2 + 6),
                                    0LL,
                                    0LL,
                                    0);
                }
                KeLeaveCriticalRegion();
                if ( v149 )
                {
                  KeUnstackDetachProcess(&ApcState);
                  v149 = 0;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v144);
              }
              DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v140, v35);
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
      *(_QWORD *)(v7 + 24) = 13672LL;
      goto LABEL_3;
    }
    v73 = *((_DWORD *)a2 + 3);
    if ( v73 < 0 )
      goto LABEL_172;
    if ( v73 > 1 )
    {
      if ( v73 == 2 )
      {
        v136 = 0LL;
        v100 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 102);
        if ( v100 )
        {
          v101 = PsGetCurrentProcessSessionId(v9, v8);
          v102 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v100, v101);
        }
        else
        {
          v102 = 0LL;
        }
        if ( !v102 )
        {
          v103 = WdLogNewEntry5_WdError(v9, v8);
          *(_QWORD *)(v103 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v105, v104);
          LODWORD(v3) = -1073741790;
          *(_QWORD *)(v103 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v103);
        }
        if ( (int)v3 >= 0 )
        {
          v106 = DXGSESSIONDATA::ReferenceDwmProcess(v102, (struct _EPROCESS **)&v136);
          v3 = v106;
          if ( v106 < 0 )
          {
            v107 = WdLogNewEntry5_WdError(v9, v8);
            *(_QWORD *)(v107 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v109, v108);
            *(_QWORD *)(v107 + 32) = v3;
            WdLogEvent5_WdError(v107);
          }
          if ( (int)v3 >= 0 )
          {
            DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v143);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v143);
            v110 = (struct _KPROCESS *)v136;
            v111 = PsGetProcessDxgProcess(v136);
            v113 = v111;
            if ( v111 && *(char *)(v111 + 347) >= 0 )
            {
              DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v147, (struct DXGFASTMUTEX *const *)v111);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v147);
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v143, v114);
              v155 = 0;
              CPROCESSATTACHHELPER::Attach(&v154, v110);
              KeEnterCriticalRegion();
              if ( *(_DWORD *)(v113 + 424)
                && (*(_BYTE *)(v113 + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
              {
                v119 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v116, v115) + 102);
                if ( v119 )
                {
                  v120 = PsGetCurrentProcessSessionId(v118, v117);
                  v121 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v119, v120);
                }
                else
                {
                  v121 = 0LL;
                }
                if ( !v121 )
                {
                  LODWORD(v3) = -1073741811;
                  v122 = WdLogNewEntry5_WdError(v118, v117);
                  *(_QWORD *)(v122 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v124, v123);
                  *(_QWORD *)(v122 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v122);
                }
                if ( (int)v3 >= 0 )
                  LODWORD(v3) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                  v121,
                                  PoolWithTag,
                                  *((_DWORD *)a2 + 6),
                                  v5,
                                  &v132,
                                  1);
              }
              KeLeaveCriticalRegion();
              if ( v155 )
              {
                KeUnstackDetachProcess(&v154);
                v155 = 0;
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v147);
            }
            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v143, v112);
          }
        }
        if ( v136 )
        {
          ObfDereferenceObject(v136);
          v136 = 0LL;
        }
        goto LABEL_159;
      }
      if ( v73 == 3 )
      {
        v135 = 0LL;
        v74 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 102);
        if ( v74 )
        {
          v76 = PsGetCurrentProcessSessionId(v9, v8);
          v77 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v74, v76);
        }
        else
        {
          v77 = 0LL;
        }
        if ( !v77 )
        {
          v78 = WdLogNewEntry5_WdError(v9, v8);
          *(_QWORD *)(v78 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v80, v79);
          LODWORD(v3) = -1073741790;
          *(_QWORD *)(v78 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v78);
        }
        if ( (int)v3 >= 0 )
        {
          v81 = DXGSESSIONDATA::ReferenceDwmProcess(v77, (struct _EPROCESS **)&v135);
          v3 = v81;
          if ( v81 < 0 )
          {
            v82 = WdLogNewEntry5_WdError(v9, v8);
            *(_QWORD *)(v82 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v84, v83);
            *(_QWORD *)(v82 + 32) = v3;
            WdLogEvent5_WdError(v82);
          }
          if ( (int)v3 >= 0 )
          {
            DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v142);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v142);
            v85 = (struct _KPROCESS *)v135;
            v86 = PsGetProcessDxgProcess(v135);
            v88 = v86;
            if ( v86 && *(char *)(v86 + 347) >= 0 )
            {
              DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v146, (struct DXGFASTMUTEX *const *)v86);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v146);
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142, v89);
              v153 = 0;
              CPROCESSATTACHHELPER::Attach(&v152, v85);
              KeEnterCriticalRegion();
              if ( *(_DWORD *)(v88 + 424)
                && (*(_BYTE *)(v88 + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
              {
                v94 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v91, v90) + 102);
                if ( v94 )
                {
                  v95 = PsGetCurrentProcessSessionId(v93, v92);
                  v96 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v94, v95);
                }
                else
                {
                  v96 = 0LL;
                }
                if ( !v96 )
                {
                  LODWORD(v3) = -1073741811;
                  v97 = WdLogNewEntry5_WdError(v93, v92);
                  *(_QWORD *)(v97 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v99, v98);
                  *(_QWORD *)(v97 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v97);
                }
                if ( (int)v3 >= 0 )
                  LODWORD(v3) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                  v96,
                                  PoolWithTag,
                                  *((_DWORD *)a2 + 6),
                                  v5,
                                  &v132,
                                  1);
              }
              KeLeaveCriticalRegion();
              if ( v153 )
              {
                KeUnstackDetachProcess(&v152);
                v153 = 0;
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v146);
            }
            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v142, v87);
          }
        }
        if ( v135 )
        {
          ObfDereferenceObject(v135);
          v135 = 0LL;
        }
        goto LABEL_159;
      }
LABEL_172:
      v129 = WdLogNewEntry5_WdError(a1, v12);
      *(_QWORD *)(v129 + 24) = 13754LL;
      WdLogEvent5_WdError(v129);
      LODWORD(v3) = -1073741811;
      goto LABEL_173;
    }
    if ( *((_QWORD *)a2 + 3) == 56LL && *((_DWORD *)PoolWithTag + 4) == 1016 )
    {
      v125 = (void *)*((_QWORD *)PoolWithTag + 5);
      if ( v125 )
      {
        v139 = 0LL;
        LODWORD(v3) = ObReferenceObjectByHandle(v125, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v139, 0LL);
        if ( (int)v3 < 0 )
        {
LABEL_159:
          if ( !v5 && v132 )
          {
            v126 = WdLogNewEntry5_WdWarning(v9, v8, v75);
            *(_QWORD *)(v126 + 24) = v132;
            WdLogEvent5_WdWarning(v126);
          }
          goto LABEL_162;
        }
        *((_QWORD *)PoolWithTag + 5) = v139;
      }
    }
    LODWORD(v3) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v6, PoolWithTag, *((_DWORD *)a2 + 6), v5, &v132);
    goto LABEL_159;
  }
  v7 = WdLogNewEntry5_WdError(a1, 0LL);
  *(_QWORD *)(v7 + 24) = 13534LL;
LABEL_3:
  WdLogEvent5_WdError(v7);
  LODWORD(v3) = -1073741811;
LABEL_174:
  v130 = WdLogNewEntry5_WdEvent(v9, v8);
  *(_QWORD *)(v130 + 24) = (int)v3;
  WdLogEvent5_WdEvent(v130);
LABEL_175:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v3;
}
