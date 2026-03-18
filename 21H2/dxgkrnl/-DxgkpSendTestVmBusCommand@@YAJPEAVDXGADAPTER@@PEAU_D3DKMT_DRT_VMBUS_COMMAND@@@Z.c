/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0362D5C
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009278 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002C1E0 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C004B314 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00562E8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005983C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C03522F8 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0353380 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C0365564 (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C0365648 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall DxgkpSendTestVmBusCommand(
        struct DXGADAPTER *a1,
        struct _D3DKMT_DRT_VMBUS_COMMAND *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  _BYTE *Pool2; // r14
  struct DXG_VMBUS_CHANNEL_BASE *v8; // r12
  char v9; // cl
  __int64 v10; // rbx
  const wchar_t *v11; // r9
  int v12; // eax
  unsigned __int64 v13; // rdx
  size_t v14; // r8
  char *v15; // rdx
  unsigned int v16; // eax
  _BYTE *v17; // rbx
  int v18; // ecx
  __int64 v19; // rcx
  DXGSESSIONMGR *v20; // rbx
  unsigned int v21; // eax
  DXGSESSIONDATA *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // eax
  struct _KPROCESS *v31; // rbx
  struct DXGPROCESS *v32; // rax
  struct DXGPROCESS *v33; // r12
  __int64 v34; // rcx
  DXGSESSIONMGR *v35; // rbx
  unsigned int v36; // eax
  DXGSESSIONDATA *v37; // rbx
  unsigned int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // eax
  size_t v41; // rcx
  __int64 v42; // rcx
  DXGSESSIONMGR *v43; // rbx
  unsigned int v44; // eax
  DXGSESSIONDATA *v45; // rbx
  unsigned int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // eax
  int v49; // eax
  __int64 v50; // rcx
  unsigned int v51; // eax
  __int64 v52; // rcx
  unsigned int v53; // eax
  struct _KPROCESS *v54; // rbx
  struct DXGPROCESS *v55; // rax
  struct DXGPROCESS *v56; // r12
  __int64 v57; // rcx
  DXGSESSIONMGR *v58; // rbx
  unsigned int v59; // eax
  DXGSESSIONDATA *v60; // rbx
  unsigned int v61; // eax
  __int64 v62; // rcx
  unsigned int v63; // eax
  const EVENT_DESCRIPTOR *v64; // rdx
  __int64 v65; // rbx
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // r8
  const EVENT_DESCRIPTOR *v69; // rdx
  PVOID v70; // rbx
  int v71; // eax
  __int64 v72; // rcx
  DXGSESSIONMGR *v73; // rbx
  unsigned int v74; // eax
  DXGSESSIONDATA *v75; // rbx
  unsigned int v76; // eax
  __int64 v77; // rcx
  unsigned int v78; // eax
  int v79; // eax
  __int64 v80; // rcx
  unsigned int v81; // eax
  __int64 v82; // rcx
  unsigned int v83; // eax
  struct _KPROCESS *v84; // rbx
  struct DXGPROCESS *v85; // rax
  struct DXGPROCESS *v86; // r12
  __int64 v87; // rcx
  DXGSESSIONMGR *v88; // rbx
  unsigned int v89; // eax
  DXGSESSIONDATA *v90; // rbx
  unsigned int v91; // eax
  __int64 v92; // rcx
  unsigned int v93; // eax
  __int64 v94; // rcx
  DXGSESSIONMGR *v95; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int v98; // eax
  __int64 v99; // rcx
  unsigned int v100; // eax
  int v101; // eax
  __int64 v102; // rcx
  unsigned int v103; // eax
  __int64 v104; // rcx
  unsigned int v105; // eax
  struct _KPROCESS *v106; // rbx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v108; // r12
  __int64 v109; // rcx
  DXGSESSIONMGR *v110; // rbx
  unsigned int v111; // eax
  DXGSESSIONDATA *v112; // rbx
  unsigned int v113; // eax
  __int64 v114; // rcx
  unsigned int v115; // eax
  void *v116; // rcx
  NTSTATUS v117; // eax
  const EVENT_DESCRIPTOR *v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  const EVENT_DESCRIPTOR *v121; // rdx
  char *v122; // r9
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-420h]
  _BYTE *P; // [rsp+50h] [rbp-3F8h]
  char v126; // [rsp+58h] [rbp-3F0h]
  unsigned int v127; // [rsp+5Ch] [rbp-3ECh] BYREF
  void *Src; // [rsp+60h] [rbp-3E8h]
  PVOID Object; // [rsp+68h] [rbp-3E0h] BYREF
  PVOID v130; // [rsp+70h] [rbp-3D8h] BYREF
  PVOID v131; // [rsp+78h] [rbp-3D0h] BYREF
  PVOID v132; // [rsp+80h] [rbp-3C8h] BYREF
  PVOID v133; // [rsp+88h] [rbp-3C0h] BYREF
  _BYTE v134[16]; // [rsp+90h] [rbp-3B8h] BYREF
  _BYTE v135[16]; // [rsp+A0h] [rbp-3A8h] BYREF
  _BYTE v136[16]; // [rsp+B0h] [rbp-398h] BYREF
  _BYTE v137[16]; // [rsp+C0h] [rbp-388h] BYREF
  _BYTE v138[16]; // [rsp+D0h] [rbp-378h] BYREF
  _BYTE v139[16]; // [rsp+E0h] [rbp-368h] BYREF
  _BYTE v140[16]; // [rsp+F0h] [rbp-358h] BYREF
  _BYTE v141[16]; // [rsp+100h] [rbp-348h] BYREF
  void *v142[2]; // [rsp+110h] [rbp-338h] BYREF
  unsigned int v143; // [rsp+120h] [rbp-328h]
  struct _KAPC_STATE ApcState; // [rsp+230h] [rbp-218h] BYREF
  char v145; // [rsp+260h] [rbp-1E8h]
  struct _KAPC_STATE v146; // [rsp+268h] [rbp-1E0h] BYREF
  char v147; // [rsp+298h] [rbp-1B0h]
  struct _KAPC_STATE v148; // [rsp+2A0h] [rbp-1A8h] BYREF
  char v149; // [rsp+2D0h] [rbp-178h]
  struct _KAPC_STATE v150; // [rsp+2D8h] [rbp-170h] BYREF
  char v151; // [rsp+308h] [rbp-140h]
  _BYTE v152[128]; // [rsp+310h] [rbp-138h] BYREF
  _BYTE v153[128]; // [rsp+390h] [rbp-B8h] BYREF

  LODWORD(v6) = 0;
  Pool2 = 0LL;
  P = 0LL;
  Src = 0LL;
  v127 = 0;
  v8 = 0LL;
  v9 = 0;
  v126 = 0;
  *(_OWORD *)v142 = 0LL;
  v143 = 0;
  if ( !a2 )
  {
    v10 = 15462LL;
    WdLogSingleEntry1(2LL, 15462LL);
    v11 = L"NULL vmbus command";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v6) = -1073741811;
    Pool2 = 0LL;
LABEL_230:
    WdLogSingleEntry1(4LL, (int)v6);
    goto LABEL_231;
  }
  v12 = *((_DWORD *)a2 + 3);
  if ( !v12 )
  {
    v8 = (struct DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 218);
    if ( !v8 )
    {
      v10 = 15474LL;
      WdLogSingleEntry1(2LL, 15474LL);
      goto LABEL_13;
    }
LABEL_16:
    v9 = 1;
    v126 = 1;
    goto LABEL_17;
  }
  if ( v12 == 1 )
  {
    if ( !a1 )
    {
      v10 = 15484LL;
      WdLogSingleEntry1(2LL, 15484LL);
      v11 = L"Adapter is expected";
      goto LABEL_3;
    }
    v8 = (struct DXGADAPTER *)((char *)a1 + 4344);
    if ( a1 == (struct DXGADAPTER *)-4344LL )
    {
      v10 = 15492LL;
      WdLogSingleEntry1((unsigned int)((_DWORD)v8 + 2), 15492LL);
LABEL_13:
      v11 = L"Invalid VM bus channel";
      goto LABEL_3;
    }
    goto LABEL_16;
  }
  if ( v12 <= 1 || v12 > 3 )
  {
    v10 = 15504LL;
    WdLogSingleEntry1(2LL, 15504LL);
    v11 = L"Invalid channel type";
    goto LABEL_3;
  }
LABEL_17:
  v13 = *((_QWORD *)a2 + 3);
  if ( !v13 )
    goto LABEL_34;
  if ( !*((_QWORD *)a2 + 2) )
  {
    v10 = 15518LL;
    WdLogSingleEntry1(2LL, 15518LL);
    v11 = L"Invalid input buffer";
    goto LABEL_3;
  }
  if ( v9 )
  {
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v142, v8, v13, 0LL, 0LL, 0LL);
    if ( !v142[0] )
    {
      Pool2 = 0LL;
      goto LABEL_229;
    }
    if ( a1 )
      *((_QWORD *)v142[1] + 1) = *(_QWORD *)((char *)a1 + 4452);
    Pool2 = v142[0];
  }
  else
  {
    if ( v13 > 0x80 )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v13, 1265072196LL, a4);
      P = Pool2;
      if ( !Pool2 )
      {
        WdLogSingleEntry1(6LL, 15546LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate pInputBuffer",
          15546LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v6) = -1073741801;
        goto LABEL_230;
      }
      goto LABEL_30;
    }
    Pool2 = v152;
  }
  P = Pool2;
LABEL_30:
  v14 = *((_QWORD *)a2 + 3);
  v15 = (char *)*((_QWORD *)a2 + 2);
  if ( &v15[v14] < v15 || (unsigned __int64)&v15[v14] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Pool2, v15, v14);
LABEL_34:
  if ( *((_QWORD *)a2 + 5) && *((_QWORD *)a2 + 4) )
  {
    v16 = (*((_DWORD *)a2 + 10) + 7) & 0xFFFFFFF8;
    v127 = v16;
    if ( v16 > 0x80 )
    {
      v17 = (_BYTE *)ExAllocatePool2(64LL, v16, 1265072196LL, a4);
      Src = v17;
      if ( !v17 )
      {
        WdLogSingleEntry1(6LL, 15579LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate pOutputBuffer",
          15579LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v6) = -1073741801;
LABEL_40:
        Pool2 = P;
        goto LABEL_230;
      }
    }
    else
    {
      v17 = v153;
      Src = v153;
    }
  }
  else
  {
    v17 = Src;
  }
  if ( v17 || *((_QWORD *)a2 + 5) )
  {
    v70 = 0LL;
    v71 = *((_DWORD *)a2 + 3);
    if ( v71 < 0 )
      goto LABEL_227;
    if ( v71 > 1 )
    {
      if ( v71 == 2 )
      {
        v132 = 0LL;
        v95 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        if ( v95 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v94);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v95,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( !SessionDataForSpecifiedSession )
        {
          v98 = PsGetCurrentProcessSessionId(v94);
          LODWORD(v6) = -1073741790;
          WdLogSingleEntry2(2LL, v98, -1073741790LL);
          v100 = PsGetCurrentProcessSessionId(v99);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v100,
            -1073741790LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v6 < 0 )
          goto LABEL_189;
        v101 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&v132);
        v6 = v101;
        if ( v101 < 0 )
        {
          v103 = PsGetCurrentProcessSessionId(v102);
          WdLogSingleEntry2(2LL, v103, v6);
          v105 = PsGetCurrentProcessSessionId(v104);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v105,
            v6,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v6 < 0 )
        {
LABEL_189:
          Pool2 = P;
        }
        else
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v137);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v137);
          v106 = (struct _KPROCESS *)v132;
          ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(v132);
          v108 = ProcessDxgProcess;
          if ( !ProcessDxgProcess || (*((_DWORD *)ProcessDxgProcess + 106) & 0x800) != 0 )
          {
            Pool2 = P;
          }
          else
          {
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v141, ProcessDxgProcess);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v141);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v137);
            v151 = 0;
            CPROCESSATTACHHELPER::Attach(&v150, v106);
            KeEnterCriticalRegion();
            if ( *((_DWORD *)v108 + 126) && (*((_DWORD *)v108 + 106) & 4) != 0 )
            {
              v110 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
              if ( v110 )
              {
                v111 = PsGetCurrentProcessSessionId(v109);
                v112 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v110, v111);
              }
              else
              {
                v112 = 0LL;
              }
              if ( !v112 )
              {
                LODWORD(v6) = -1073741811;
                v113 = PsGetCurrentProcessSessionId(v109);
                WdLogSingleEntry2(2LL, v113, -1073741811LL);
                v115 = PsGetCurrentProcessSessionId(v114);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                  v115,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              Pool2 = P;
              if ( (int)v6 >= 0 )
                LODWORD(v6) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                v112,
                                P,
                                *((unsigned int *)a2 + 6),
                                Src,
                                &v127,
                                1);
            }
            else
            {
              Pool2 = P;
            }
            KeLeaveCriticalRegion();
            if ( v151 )
            {
              KeUnstackDetachProcess(&v150);
              v151 = 0;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v141);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v137);
        }
        if ( v132 )
        {
          ObfDereferenceObject(v132);
          v132 = 0LL;
        }
        goto LABEL_217;
      }
      if ( v71 == 3 )
      {
        v131 = 0LL;
        v73 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        if ( v73 )
        {
          v74 = PsGetCurrentProcessSessionId(v72);
          v75 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v73, v74);
        }
        else
        {
          v75 = 0LL;
        }
        if ( !v75 )
        {
          v76 = PsGetCurrentProcessSessionId(v72);
          LODWORD(v6) = -1073741790;
          WdLogSingleEntry2(2LL, v76, -1073741790LL);
          v78 = PsGetCurrentProcessSessionId(v77);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v78,
            -1073741790LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v6 < 0 )
          goto LABEL_160;
        v79 = DXGSESSIONDATA::ReferenceDwmProcess(v75, (struct _EPROCESS **)&v131);
        v6 = v79;
        if ( v79 < 0 )
        {
          v81 = PsGetCurrentProcessSessionId(v80);
          WdLogSingleEntry2(2LL, v81, v6);
          v83 = PsGetCurrentProcessSessionId(v82);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v83,
            v6,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v6 < 0 )
        {
LABEL_160:
          Pool2 = P;
        }
        else
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v136);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v136);
          v84 = (struct _KPROCESS *)v131;
          v85 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v131);
          v86 = v85;
          if ( !v85 || (*((_DWORD *)v85 + 106) & 0x800) != 0 )
          {
            Pool2 = P;
          }
          else
          {
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v140, v85);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v140);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v136);
            v149 = 0;
            CPROCESSATTACHHELPER::Attach(&v148, v84);
            KeEnterCriticalRegion();
            if ( *((_DWORD *)v86 + 126) && (*((_DWORD *)v86 + 106) & 4) != 0 )
            {
              v88 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
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
                LODWORD(v6) = -1073741811;
                v91 = PsGetCurrentProcessSessionId(v87);
                WdLogSingleEntry2(2LL, v91, -1073741811LL);
                v93 = PsGetCurrentProcessSessionId(v92);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                  v93,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              Pool2 = P;
              if ( (int)v6 >= 0 )
                LODWORD(v6) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                v90,
                                P,
                                *((unsigned int *)a2 + 6),
                                Src,
                                &v127,
                                1);
            }
            else
            {
              Pool2 = P;
            }
            KeLeaveCriticalRegion();
            if ( v149 )
            {
              KeUnstackDetachProcess(&v148);
              v149 = 0;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v140);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v136);
        }
        if ( v131 )
        {
          ObfDereferenceObject(v131);
          v131 = 0LL;
        }
        goto LABEL_217;
      }
LABEL_227:
      WdLogSingleEntry1(2LL, 15782LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid channel type for transmit.",
        15782LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v6) = -1073741811;
      goto LABEL_120;
    }
    if ( !v126 )
    {
      v65 = 15681LL;
      WdLogSingleEntry1(1LL, 15681LL);
      goto LABEL_119;
    }
    if ( *((_QWORD *)a2 + 3) == 56LL && *((_DWORD *)Pool2 + 4) == 1016 )
    {
      v116 = (void *)*((_QWORD *)Pool2 + 5);
      if ( v116 )
      {
        v133 = 0LL;
        v117 = ObReferenceObjectByHandle(v116, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v133, 0LL);
        v70 = v133;
        LODWORD(v6) = v117;
        if ( v117 < 0 )
          goto LABEL_216;
        *((_QWORD *)Pool2 + 5) = v133;
      }
    }
    if ( bTracingEnabled )
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        {
          v118 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
          goto LABEL_205;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v118 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
LABEL_205:
        LODWORD(HandleInformation) = 0;
        McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v118, a3, 0LL, 0LL, HandleInformation);
      }
    }
    LODWORD(v6) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v8, v142[1], v143, Src, &v127);
    if ( (int)v6 < 0 && v70 )
      ObfDereferenceObject(v70);
    if ( !bTracingEnabled )
      goto LABEL_216;
    if ( *((_DWORD *)a2 + 3) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v121 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
        goto LABEL_215;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      v121 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_215:
      LODWORD(HandleInformation) = 0;
      McTemplateK0pxqt_EtwWriteTransfer(v119, v121, v120, 0LL, 0LL, HandleInformation, v6);
    }
LABEL_216:
    Pool2 = P;
LABEL_217:
    v17 = Src;
    if ( !Src && v127 )
      WdLogSingleEntry1((unsigned int)((_DWORD)Src + 3), v127);
    goto LABEL_78;
  }
  v18 = *((_DWORD *)a2 + 3);
  if ( v18 < 0 )
  {
LABEL_129:
    WdLogSingleEntry1(2LL, 15660LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid channel type for transmit.",
      15660LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v6) = -1073741811;
    goto LABEL_40;
  }
  if ( v18 <= 1 )
  {
    if ( !bTracingEnabled )
      goto LABEL_117;
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_117;
      v64 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandHostToVmAsync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_117;
      v64 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalAsync;
    }
    LODWORD(HandleInformation) = 0;
    McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v64, a3, 0LL, 0LL, HandleInformation);
LABEL_117:
    if ( !v126 )
    {
      v65 = 15610LL;
      WdLogSingleEntry1(1LL, 15610LL);
LABEL_119:
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", v65, 0LL, 0LL, 0LL, 0LL);
LABEL_120:
      Pool2 = P;
      goto LABEL_229;
    }
    v66 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(v8, v142[1], v143);
    LODWORD(v6) = v66;
    if ( bTracingEnabled )
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        {
          v69 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
          goto LABEL_127;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v69 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_127:
        LODWORD(HandleInformation) = 0;
        McTemplateK0pxqt_EtwWriteTransfer(v67, v69, v68, 0LL, 0LL, HandleInformation, v66);
      }
    }
    Pool2 = P;
    goto LABEL_78;
  }
  if ( v18 == 2 )
  {
    v130 = 0LL;
    v43 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v43 )
    {
      v44 = PsGetCurrentProcessSessionId(v42);
      v45 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v43, v44);
    }
    else
    {
      v45 = 0LL;
    }
    if ( !v45 )
    {
      v46 = PsGetCurrentProcessSessionId(v42);
      LODWORD(v6) = -1073741790;
      WdLogSingleEntry2(2LL, v46, -1073741790LL);
      v48 = PsGetCurrentProcessSessionId(v47);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
        v48,
        -1073741790LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)v6 < 0 )
      goto LABEL_107;
    v49 = DXGSESSIONDATA::ReferenceDwmProcess(v45, (struct _EPROCESS **)&v130);
    v6 = v49;
    if ( v49 < 0 )
    {
      v51 = PsGetCurrentProcessSessionId(v50);
      WdLogSingleEntry2(2LL, v51, v6);
      v53 = PsGetCurrentProcessSessionId(v52);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
        v53,
        v6,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)v6 < 0 )
    {
LABEL_107:
      Pool2 = P;
    }
    else
    {
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v135);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v135);
      v54 = (struct _KPROCESS *)v130;
      v55 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v130);
      v56 = v55;
      if ( !v55 || (*((_DWORD *)v55 + 106) & 0x800) != 0 )
      {
        Pool2 = P;
      }
      else
      {
        DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v139, v55);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v139);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v135);
        v147 = 0;
        CPROCESSATTACHHELPER::Attach(&v146, v54);
        KeEnterCriticalRegion();
        if ( *((_DWORD *)v56 + 126) && (*((_DWORD *)v56 + 106) & 4) != 0 )
        {
          v58 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
          if ( v58 )
          {
            v59 = PsGetCurrentProcessSessionId(v57);
            v60 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v58, v59);
          }
          else
          {
            v60 = 0LL;
          }
          if ( !v60 )
          {
            LODWORD(v6) = -1073741811;
            v61 = PsGetCurrentProcessSessionId(v57);
            WdLogSingleEntry2(2LL, v61, -1073741811LL);
            v63 = PsGetCurrentProcessSessionId(v62);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v63,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
          }
          Pool2 = P;
          if ( (int)v6 >= 0 )
            LODWORD(v6) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                            v60,
                            P,
                            *((unsigned int *)a2 + 6),
                            0LL,
                            0LL,
                            0);
        }
        else
        {
          Pool2 = P;
        }
        KeLeaveCriticalRegion();
        if ( v147 )
        {
          KeUnstackDetachProcess(&v146);
          v147 = 0;
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v139);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v135);
    }
    if ( v130 )
    {
      ObfDereferenceObject(v130);
      v130 = 0LL;
    }
    goto LABEL_77;
  }
  if ( v18 != 3 )
    goto LABEL_129;
  Object = 0LL;
  v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v20 )
  {
    v21 = PsGetCurrentProcessSessionId(v19);
    v22 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v20, v21);
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v23 = PsGetCurrentProcessSessionId(v19);
    LODWORD(v6) = -1073741790;
    WdLogSingleEntry2(2LL, v23, -1073741790LL);
    v25 = PsGetCurrentProcessSessionId(v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v25,
      -1073741790LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (int)v6 < 0 )
    goto LABEL_74;
  v26 = DXGSESSIONDATA::ReferenceDwmProcess(v22, (struct _EPROCESS **)&Object);
  v6 = v26;
  if ( v26 < 0 )
  {
    v28 = PsGetCurrentProcessSessionId(v27);
    WdLogSingleEntry2(2LL, v28, v6);
    v30 = PsGetCurrentProcessSessionId(v29);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
      v30,
      v6,
      0LL,
      0LL,
      0LL);
  }
  if ( (int)v6 < 0 )
  {
LABEL_74:
    Pool2 = P;
  }
  else
  {
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v134);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v134);
    v31 = (struct _KPROCESS *)Object;
    v32 = (struct DXGPROCESS *)PsGetProcessDxgProcess(Object);
    v33 = v32;
    if ( !v32 || (*((_DWORD *)v32 + 106) & 0x800) != 0 )
    {
      Pool2 = P;
    }
    else
    {
      DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v138, v32);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v138);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v134);
      v145 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v31);
      KeEnterCriticalRegion();
      if ( *((_DWORD *)v33 + 126) && (*((_DWORD *)v33 + 106) & 4) != 0 )
      {
        v35 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        if ( v35 )
        {
          v36 = PsGetCurrentProcessSessionId(v34);
          v37 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v35, v36);
        }
        else
        {
          v37 = 0LL;
        }
        if ( !v37 )
        {
          LODWORD(v6) = -1073741811;
          v38 = PsGetCurrentProcessSessionId(v34);
          WdLogSingleEntry2(2LL, v38, -1073741811LL);
          v40 = PsGetCurrentProcessSessionId(v39);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v40,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
        Pool2 = P;
        if ( (int)v6 >= 0 )
          LODWORD(v6) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(v37, P, *((unsigned int *)a2 + 6), 0LL, 0LL, 0);
      }
      else
      {
        Pool2 = P;
      }
      KeLeaveCriticalRegion();
      if ( v145 )
      {
        KeUnstackDetachProcess(&ApcState);
        v145 = 0;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v138);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v134);
  }
  if ( Object )
  {
    ObfDereferenceObject(Object);
    Object = 0LL;
  }
LABEL_77:
  v17 = Src;
LABEL_78:
  if ( (int)v6 < 0 )
    goto LABEL_230;
  v41 = *((_QWORD *)a2 + 5);
  if ( v127 < v41 )
  {
    WdLogSingleEntry2(4LL, *((_QWORD *)a2 + 5), v127);
    LODWORD(v6) = -1073741823;
    goto LABEL_230;
  }
  if ( v17 )
  {
    v122 = (char *)*((_QWORD *)a2 + 4);
    if ( v122 )
    {
      if ( v41 )
      {
        if ( (unsigned __int64)&v122[v41] > MmUserProbeAddress || &v122[v41] <= v122 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v122, v17, v41);
      }
    }
  }
LABEL_229:
  if ( (int)v6 < 0 )
    goto LABEL_230;
LABEL_231:
  if ( Pool2 && Pool2 != v152 && Pool2 != v142[0] )
    ExFreePoolWithTag(Pool2, 0);
  if ( Src && Src != v153 )
    ExFreePoolWithTag(Src, 0);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v142);
  return (unsigned int)v6;
}
