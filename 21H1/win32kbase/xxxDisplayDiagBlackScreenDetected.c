/*
 * XREFs of xxxDisplayDiagBlackScreenDetected @ 0x1C012AD20
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00421B8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxUserSetDisplayConfig @ 0x1C0053340 (xxxUserSetDisplayConfig.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@34444AEBU_tlgWrapperBinary@@4@Z @ 0x1C012AA78 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C012AC80 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvDxgkCheckDisplayState @ 0x1C0150FB4 (DrvDxgkCheckDisplayState.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C0151090 (DrvDxgkPollDisplayChildren.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(int a1, char a2, char a3, UUID *a4, int *a5)
{
  int v7; // esi
  UUID *v8; // r12
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int ProcessSessionId; // ebx
  __int64 v27; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rcx
  PERESOURCE *v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int *v45; // r15
  UUID *p_Uuid; // rbx
  int ProcessImageFileName; // eax
  PEPROCESS ThreadProcess; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  LARGE_INTEGER *v51; // rbx
  __int64 v52; // rax
  struct tagTHREADINFO *v53; // rbx
  struct tagTHREADINFO **v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  PVOID v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rax
  struct _KTHREAD *v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rcx
  __int64 *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  PERESOURCE *v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rcx
  PERESOURCE *v80; // rdi
  int v81; // r14d
  __int64 v82; // rcx
  __int64 v83; // rcx
  LARGE_INTEGER *v84; // rbx
  __int64 v85; // rax
  struct tagTHREADINFO *v86; // rbx
  struct tagTHREADINFO **v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  PVOID v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned int v93; // r8d
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  int v98; // ebx
  __int64 v99; // rcx
  __int64 v100; // rax
  struct _KTHREAD *v101; // rdi
  __int64 v102; // rbx
  __int64 v103; // rcx
  __int64 *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  PERESOURCE *v107; // rbx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 *v110; // rsi
  __int64 v111; // rax
  __int64 v112; // rcx
  PERESOURCE *v113; // rdi
  __int64 v114; // rcx
  UUID *v115; // rbx
  int v116; // eax
  PEPROCESS v117; // rax
  int v118; // r14d
  __int64 v119; // rcx
  __int64 v120; // rcx
  LARGE_INTEGER *v121; // rbx
  __int64 v122; // rax
  struct tagTHREADINFO *v123; // rbx
  struct tagTHREADINFO **v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  PVOID v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  unsigned int v130; // r8d
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  int v135; // ebx
  __int64 v136; // rcx
  __int64 v137; // rax
  struct _KTHREAD *v138; // rdi
  __int64 v139; // rbx
  __int64 v140; // rcx
  __int64 *v141; // rax
  __int64 v142; // rax
  __int64 v143; // rcx
  PERESOURCE *v144; // rbx
  __int64 v145; // rcx
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rcx
  PERESOURCE *v149; // rdi
  __int64 *v150; // rsi
  __int64 v151; // rbx
  __int64 v152; // r8
  __int64 v153; // rcx
  __int64 v154; // r9
  int v156; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int16 v157[2]; // [rsp+80h] [rbp-88h] BYREF
  int v158; // [rsp+84h] [rbp-84h] BYREF
  int v159; // [rsp+88h] [rbp-80h] BYREF
  int v160; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v161; // [rsp+90h] [rbp-78h] BYREF
  int v162; // [rsp+94h] [rbp-74h] BYREF
  int v163; // [rsp+98h] [rbp-70h] BYREF
  int v164; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v165; // [rsp+A0h] [rbp-68h] BYREF
  int v166; // [rsp+A4h] [rbp-64h] BYREF
  int v167; // [rsp+A8h] [rbp-60h] BYREF
  int v168; // [rsp+ACh] [rbp-5Ch] BYREF
  int v169; // [rsp+B0h] [rbp-58h] BYREF
  int v170; // [rsp+B4h] [rbp-54h] BYREF
  int v171; // [rsp+B8h] [rbp-50h] BYREF
  int v172; // [rsp+BCh] [rbp-4Ch] BYREF
  int v173; // [rsp+C0h] [rbp-48h] BYREF
  int v174; // [rsp+C4h] [rbp-44h] BYREF
  int v175; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v176; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v177; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v178; // [rsp+E8h] [rbp-20h]
  UUID *v179; // [rsp+F8h] [rbp-10h]
  __int64 v180; // [rsp+100h] [rbp-8h] BYREF
  __int16 v181; // [rsp+108h] [rbp+0h]
  UUID v182; // [rsp+118h] [rbp+10h] BYREF
  UUID v183; // [rsp+128h] [rbp+20h] BYREF
  __int64 v184; // [rsp+138h] [rbp+30h]
  unsigned __int8 v185; // [rsp+140h] [rbp+38h]
  GUID v186; // [rsp+144h] [rbp+3Ch] BYREF
  __int64 v187; // [rsp+158h] [rbp+50h]
  unsigned __int8 v188; // [rsp+160h] [rbp+58h]
  GUID v189; // [rsp+164h] [rbp+5Ch] BYREF
  __int64 v190; // [rsp+178h] [rbp+70h]
  unsigned __int8 v191; // [rsp+180h] [rbp+78h]
  GUID v192; // [rsp+184h] [rbp+7Ch] BYREF
  __int64 v193; // [rsp+198h] [rbp+90h]
  unsigned __int8 v194; // [rsp+1A0h] [rbp+98h]
  GUID v195; // [rsp+1A4h] [rbp+9Ch] BYREF
  UUID Uuid; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v197[10]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v198; // [rsp+218h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v199; // [rsp+228h] [rbp+120h] BYREF
  int *v200; // [rsp+248h] [rbp+140h]
  __int64 v201; // [rsp+250h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v202; // [rsp+258h] [rbp+150h] BYREF
  int *v203; // [rsp+278h] [rbp+170h]
  __int64 v204; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v205; // [rsp+288h] [rbp+180h] BYREF
  int *v206; // [rsp+2A8h] [rbp+1A0h]
  __int64 v207; // [rsp+2B0h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v208; // [rsp+2B8h] [rbp+1B0h] BYREF
  int *v209; // [rsp+2D8h] [rbp+1D0h]
  __int64 v210; // [rsp+2E0h] [rbp+1D8h]
  struct _EVENT_DATA_DESCRIPTOR v211; // [rsp+2E8h] [rbp+1E0h] BYREF
  int *v212; // [rsp+308h] [rbp+200h]
  __int64 v213; // [rsp+310h] [rbp+208h]
  struct _EVENT_DATA_DESCRIPTOR v214; // [rsp+318h] [rbp+210h] BYREF
  int *v215; // [rsp+338h] [rbp+230h]
  __int64 v216; // [rsp+340h] [rbp+238h]
  struct _EVENT_DATA_DESCRIPTOR v217; // [rsp+348h] [rbp+240h] BYREF
  int *v218; // [rsp+368h] [rbp+260h]
  __int64 v219; // [rsp+370h] [rbp+268h]
  struct _EVENT_DATA_DESCRIPTOR v220; // [rsp+378h] [rbp+270h] BYREF
  int *v221; // [rsp+398h] [rbp+290h]
  __int64 v222; // [rsp+3A0h] [rbp+298h]
  struct _EVENT_DATA_DESCRIPTOR v223; // [rsp+3A8h] [rbp+2A0h] BYREF
  int *v224; // [rsp+3C8h] [rbp+2C0h]
  __int64 v225; // [rsp+3D0h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v226; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *v227; // [rsp+3F8h] [rbp+2F0h]
  __int64 v228; // [rsp+400h] [rbp+2F8h]
  struct _EVENT_DATA_DESCRIPTOR v229; // [rsp+408h] [rbp+300h] BYREF
  int *v230; // [rsp+428h] [rbp+320h]
  __int64 v231; // [rsp+430h] [rbp+328h]
  struct _EVENT_DATA_DESCRIPTOR v232; // [rsp+438h] [rbp+330h] BYREF
  int *v233; // [rsp+458h] [rbp+350h]
  __int64 v234; // [rsp+460h] [rbp+358h]

  v179 = a4;
  v7 = a1;
  v8 = a4;
  memset(v197, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v197[1]);
  v9 = 0;
  v197[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v197[3]) = 15;
  LOBYTE(v197[6]) = -1;
  LODWORD(v197[4]) = v7;
  if ( gfSwitchInProgress )
  {
    do
    {
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
      KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v186 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v185 = 1;
        v13 = PsGetCurrentThreadWin32Thread(v11);
        v184 = v13;
        if ( v13 && (*(int *)(v13 + 24) > 0 || *(_DWORD *)(v184 + 48)) )
        {
          EtwActivityIdControl(3u, &v186);
          if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v158 = v185;
            v201 = 4LL;
            v200 = &v158;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v186,
              0LL,
              3u,
              &v199);
          }
        }
      }
      else
      {
        v184 = 0LL;
      }
      v14 = 0LL;
      while ( 1 )
      {
        v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v15 )
          v14 = *v15;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v14 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v184 )
        {
          v20 = *(unsigned int *)(v184 + 24);
          if ( *(_DWORD *)(v184 + 48) || (int)v20 > 0 )
          {
            *(_DWORD *)(v184 + 44) = 1;
            *(GUID *)(v184 + 28) = v186;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v159 = v185;
                v204 = 4LL;
                v203 = &v159;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199A0,
                  &v186,
                  0LL,
                  3u,
                  &v202);
                v21 = dword_1C024C960;
              }
              if ( v21 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v160 = v185;
                v219 = 4LL;
                v218 = &v160;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199CD,
                  &v186,
                  0LL,
                  3u,
                  &v217);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v20);
      gptiCurrent = v14;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess(v22) )
      {
        v25 = PsGetCurrentProcess(v24, v23);
        ProcessSessionId = PsGetProcessSessionIdEx(v25);
        CurrentThreadProcess = PsGetCurrentThreadProcess(v27);
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          continue;
      }
      CurrentThread = KeGetCurrentThread();
      v30 = 0LL;
      if ( IsThreadCrossSessionAttached(v24) )
      {
        v9 = 0;
      }
      else
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        v9 = 0;
        if ( ThreadWin32Thread )
          v30 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
      if ( v30
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v30 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v30 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v38 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v38[2];
            v39 = *v38;
            v38[2] = 0LL;
            if ( !*(_DWORD *)(v39 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
            v41 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v41 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
            ExReleaseResourceAndLeaveCriticalRegion(*v41);
            HMUnlockObject(*v38);
            tagDomLock::LockExclusive(v41);
            v38 = (__int64 *)gpducstulHead;
            v9 = 0;
          }
          while ( gpducstulHead );
          v8 = v179;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    while ( gfSwitchInProgress );
    v7 = a1;
  }
  v177 = 0LL;
  LOWORD(v177) = gProtocolType;
  v178 = 0LL;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    goto LABEL_242;
  v45 = a5;
  if ( a2 )
  {
    UserSessionSwitchLeaveCrit(v43);
    Uuid = 0LL;
    if ( !v8 && ExUuidCreate(&Uuid) < 0 )
      Uuid = 0LL;
    if ( a5 )
      v9 = *a5;
    p_Uuid = &Uuid;
    ProcessImageFileName = 0;
    if ( v8 )
      p_Uuid = v8;
    if ( gptiForeground )
    {
      ThreadProcess = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
      ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
    }
    v182 = *p_Uuid;
    DrvDxgkCheckDisplayState(v7, 1, ProcessImageFileName, (unsigned int)v197, (__int64)&v182, v9);
    xmmword_1C025A5D8 = *(_OWORD *)&v197[1];
    v9 = 0;
    v51 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v49);
    if ( v51 )
      v51[1] = KeQueryPerformanceCounter(0LL);
    v189 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v188 = 1;
      v52 = PsGetCurrentThreadWin32Thread(v50);
      v187 = v52;
      if ( v52 && (*(int *)(v52 + 24) > 0 || *(_DWORD *)(v187 + 48)) )
      {
        EtwActivityIdControl(3u, &v189);
        if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v161 = v188;
          v207 = 4LL;
          v206 = &v161;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &v189,
            0LL,
            3u,
            &v205);
        }
      }
    }
    else
    {
      v187 = 0LL;
    }
    v53 = 0LL;
    while ( 1 )
    {
      v54 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v54 )
        v53 = *v54;
      v57 = (PVOID)PsGetCurrentProcess(v56, v55);
      if ( v57 )
      {
        if ( v57 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v59, v58) == gpepCSRSS && v53 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v53 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v187 )
      {
        v59 = *(unsigned int *)(v187 + 24);
        if ( *(_DWORD *)(v187 + 48) || (int)v59 > 0 )
        {
          *(_DWORD *)(v187 + 44) = 1;
          *(GUID *)(v187 + 28) = v189;
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v162 = v188;
              v210 = 4LL;
              v209 = &v162;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199A0,
                &v189,
                0LL,
                3u,
                &v208);
              v60 = dword_1C024C960;
            }
            if ( v60 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v163 = v188;
              v213 = 4LL;
              v212 = &v163;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199CD,
                &v189,
                0LL,
                3u,
                &v211);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v59);
    gptiCurrent = v53;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v61)
      || (v64 = PsGetCurrentProcess(v63, v62),
          v65 = PsGetProcessSessionIdEx(v64),
          v67 = PsGetCurrentThreadProcess(v66),
          v65 == (unsigned int)PsGetProcessSessionIdEx(v67)) )
    {
      v68 = KeGetCurrentThread();
      v69 = 0LL;
      if ( IsThreadCrossSessionAttached(v63) )
      {
        v9 = 0;
      }
      else
      {
        v71 = (__int64 *)PsGetThreadWin32Thread(v68);
        v9 = 0;
        if ( v71 )
          v69 = *v71;
      }
      v72 = PsGetCurrentProcessWin32Process(v70);
      if ( v69
        && v72
        && (*(_DWORD *)(v69 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v69 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(v72 + 12) & 0x8000) != 0 )
      {
        v74 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v74 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v73);
        if ( ExIsResourceAcquiredExclusiveLite(*v74) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v75);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v74);
        v77 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v77[2];
            v78 = *v77;
            v77[2] = 0LL;
            if ( !*(_DWORD *)(v78 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v76);
            v80 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v80 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v79);
            ExReleaseResourceAndLeaveCriticalRegion(*v80);
            HMUnlockObject(*v77);
            tagDomLock::LockExclusive(v80);
            v77 = (__int64 *)gpducstulHead;
            v9 = 0;
          }
          while ( gpducstulHead );
          v45 = a5;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v74);
      }
    }
  }
  if ( gProtocolType || !a3 )
    goto LABEL_242;
  DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v177, v42, v44);
  DWORD1(v177) = 1;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
  v176 = 0x1A00000000LL;
  v81 = DrvDxgkPollDisplayChildren(&v176);
  DWORD2(v177) = v81;
  v84 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v82);
  if ( v84 )
    v84[1] = KeQueryPerformanceCounter(0LL);
  v192 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v191 = 1;
    v85 = PsGetCurrentThreadWin32Thread(v83);
    v190 = v85;
    if ( v85 && (*(int *)(v85 + 24) > 0 || *(_DWORD *)(v190 + 48)) )
    {
      EtwActivityIdControl(3u, &v192);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v164 = v191;
        v216 = 4LL;
        v215 = &v164;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &v192,
          0LL,
          3u,
          &v214);
      }
    }
  }
  else
  {
    v190 = 0LL;
  }
  v86 = 0LL;
  while ( 1 )
  {
    v87 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v87 )
      v86 = *v87;
    v90 = (PVOID)PsGetCurrentProcess(v89, v88);
    if ( v90 )
    {
      if ( v90 == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v92, v91) == gpepCSRSS && v86 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v86 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v190 )
    {
      v92 = *(unsigned int *)(v190 + 24);
      if ( *(_DWORD *)(v190 + 48) || (int)v92 > 0 )
      {
        *(_DWORD *)(v190 + 44) = 1;
        *(GUID *)(v190 + 28) = v192;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v165 = v191;
            v234 = 4LL;
            v233 = &v165;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &v192,
              0LL,
              3u,
              &v232);
            v93 = dword_1C024C960;
          }
          if ( v93 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v166 = v191;
            v222 = 4LL;
            v221 = &v166;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &v192,
              0LL,
              3u,
              &v220);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v92);
  gptiCurrent = v86;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v94)
    || (v97 = PsGetCurrentProcess(v96, v95),
        v98 = PsGetProcessSessionIdEx(v97),
        v100 = PsGetCurrentThreadProcess(v99),
        v98 == (unsigned int)PsGetProcessSessionIdEx(v100)) )
  {
    v101 = KeGetCurrentThread();
    v102 = 0LL;
    if ( IsThreadCrossSessionAttached(v96) )
    {
      v9 = 0;
    }
    else
    {
      v104 = (__int64 *)PsGetThreadWin32Thread(v101);
      v9 = 0;
      if ( v104 )
        v102 = *v104;
    }
    v105 = PsGetCurrentProcessWin32Process(v103);
    if ( v102
      && v105
      && (*(_DWORD *)(v102 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v102 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(v105 + 12) & 0x8000) != 0 )
    {
      v107 = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( v107 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v106);
      if ( ExIsResourceAcquiredExclusiveLite(*v107) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v108);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v107);
      v110 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v110[2];
          v111 = *v110;
          v110[2] = 0LL;
          if ( !*(_DWORD *)(v111 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v109);
          v113 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v113 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v112);
          ExReleaseResourceAndLeaveCriticalRegion(*v113);
          HMUnlockObject(*v110);
          tagDomLock::LockExclusive(v113);
          v110 = (__int64 *)gpducstulHead;
          v9 = 0;
        }
        while ( gpducstulHead );
        v45 = a5;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v107);
    }
  }
  *(_OWORD *)&v197[1] = xmmword_1C025A5D8;
  if ( v81 >= 0
    && (HIDWORD(v177) = xxxUserSetDisplayConfig(0, 0LL, 391, 0x80u, 0LL, 0, 0LL, (bool *)&v156, 0LL, (__int64)v197),
        v177 >= 0) )
  {
    UserSessionSwitchLeaveCrit(v114);
    v198 = 0LL;
    if ( v45 )
      v9 = *v45;
    v115 = (UUID *)&v198;
    v116 = 0;
    if ( v8 )
      v115 = v8;
    if ( gptiForeground )
    {
      v117 = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
      v116 = PsGetProcessImageFileName(v117);
    }
    v118 = a1;
    v183 = *v115;
    DrvDxgkCheckDisplayState(a1, 0, v116, (unsigned int)v197, (__int64)&v183, v9);
    v121 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v119);
    if ( v121 )
      v121[1] = KeQueryPerformanceCounter(0LL);
    v195 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v194 = 1;
      v122 = PsGetCurrentThreadWin32Thread(v120);
      v193 = v122;
      if ( v122 && (*(int *)(v122 + 24) > 0 || *(_DWORD *)(v193 + 48)) )
      {
        EtwActivityIdControl(3u, &v195);
        if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v167 = v194;
          v225 = 4LL;
          v224 = &v167;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &v195,
            0LL,
            3u,
            &v223);
        }
      }
    }
    else
    {
      v193 = 0LL;
    }
    v123 = 0LL;
    while ( 1 )
    {
      v124 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v124 )
        v123 = *v124;
      v127 = (PVOID)PsGetCurrentProcess(v126, v125);
      if ( v127 )
      {
        if ( v127 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v129, v128) == gpepCSRSS && v123 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v123 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v193 )
      {
        v129 = *(unsigned int *)(v193 + 24);
        if ( *(_DWORD *)(v193 + 48) || (int)v129 > 0 )
        {
          *(_DWORD *)(v193 + 44) = 1;
          *(GUID *)(v193 + 28) = v195;
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v168 = v194;
              v228 = 4LL;
              v227 = &v168;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199A0,
                &v195,
                0LL,
                3u,
                &v226);
              v130 = dword_1C024C960;
            }
            if ( v130 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v169 = v194;
              v231 = 4LL;
              v230 = &v169;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199CD,
                &v195,
                0LL,
                3u,
                &v229);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v129);
    gptiCurrent = v123;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v131)
      || (v134 = PsGetCurrentProcess(v133, v132),
          v135 = PsGetProcessSessionIdEx(v134),
          v137 = PsGetCurrentThreadProcess(v136),
          v135 == (unsigned int)PsGetProcessSessionIdEx(v137)) )
    {
      v138 = KeGetCurrentThread();
      v139 = 0LL;
      if ( !IsThreadCrossSessionAttached(v133) )
      {
        v141 = (__int64 *)PsGetThreadWin32Thread(v138);
        if ( v141 )
          v139 = *v141;
      }
      v142 = PsGetCurrentProcessWin32Process(v140);
      if ( v139
        && v142
        && (*(_DWORD *)(v139 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v139 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(v142 + 12) & 0x8000) != 0 )
      {
        v144 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v144 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v143);
        if ( ExIsResourceAcquiredExclusiveLite(*v144) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v145);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v144);
        while ( 1 )
        {
          v150 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v147 = *v150;
          v150[2] = 0LL;
          if ( !*(_DWORD *)(v147 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v146);
          v149 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v149 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v148);
          ExReleaseResourceAndLeaveCriticalRegion(*v149);
          HMUnlockObject(*v150);
          tagDomLock::LockExclusive(v149);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v144);
      }
    }
  }
  else
  {
LABEL_242:
    v118 = a1;
  }
  v151 = *((_QWORD *)&v178 + 1);
  v152 = DWORD1(v178);
  if ( !gProtocolType
    && a3
    && (unsigned int)dword_1C0247378 > 5
    && tlgKeywordOn((__int64)&dword_1C0247378, 0x400000000008LL) )
  {
    v172 = HIDWORD(v177);
    v173 = DWORD2(v177);
    v174 = v178;
    HIWORD(v156) = v177;
    v175 = DWORD1(v177);
    v157[0] = 4;
    v171 = v152;
    v170 = v118;
    v180 = v151;
    v181 = v154;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
      v153,
      byte_1C0219FC6,
      (const GUID *)&v197[1],
      v154,
      (__int64)v157,
      (__int64)&v175,
      (__int64)&v156 + 2,
      (__int64)&v174,
      (__int64)&v173,
      (__int64)&v172,
      (__int64)&v171,
      &v180,
      (__int64)&v170);
  }
  if ( v151 )
    Win32FreePool(v151, v42, v152);
}
