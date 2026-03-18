/*
 * XREFs of xxxDisplayDiagBlackScreenDetected @ 0x1C0124D30
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C004EE78 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@34444AEBU_tlgWrapperBinary@@4@Z @ 0x1C0124A88 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C0124C90 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvDxgkCheckDisplayState @ 0x1C014AC64 (DrvDxgkCheckDisplayState.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C014AD40 (DrvDxgkPollDisplayChildren.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(int a1, char a2, char a3, UUID *a4, int *a5)
{
  int v7; // esi
  UUID *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v16; // rax
  struct tagTHREADINFO *v17; // rbx
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PERESOURCE *v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int *v61; // r15
  UUID *p_Uuid; // rbx
  int ProcessImageFileName; // eax
  PEPROCESS ThreadProcess; // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  LARGE_INTEGER *v67; // rbx
  __int64 v68; // rax
  struct tagTHREADINFO *v69; // rbx
  struct tagTHREADINFO **v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  PVOID v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned int v76; // r8d
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // ebx
  __int64 v82; // rcx
  __int64 v83; // rax
  struct _KTHREAD *v84; // rdi
  __int64 v85; // rbx
  __int64 v86; // rcx
  __int64 *v87; // rax
  __int64 v88; // rax
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rcx
  PERESOURCE *v92; // rbx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 *v103; // rsi
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  PERESOURCE *v107; // rdi
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // r14d
  __int64 v114; // rcx
  __int64 v115; // rcx
  LARGE_INTEGER *v116; // rbx
  __int64 v117; // rax
  struct tagTHREADINFO *v118; // rbx
  struct tagTHREADINFO **v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  PVOID v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  unsigned int v125; // r8d
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  int v130; // ebx
  __int64 v131; // rcx
  __int64 v132; // rax
  struct _KTHREAD *v133; // rdi
  __int64 v134; // rbx
  __int64 v135; // rcx
  __int64 *v136; // rax
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rdx
  __int64 v142; // rcx
  PERESOURCE *v143; // rbx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 *v154; // rsi
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  PERESOURCE *v158; // rdi
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  UUID *v165; // rbx
  int v166; // eax
  PEPROCESS v167; // rax
  int v168; // r14d
  __int64 v169; // rcx
  __int64 v170; // rcx
  LARGE_INTEGER *v171; // rbx
  __int64 v172; // rax
  struct tagTHREADINFO *v173; // rbx
  struct tagTHREADINFO **v174; // rax
  __int64 v175; // rdx
  __int64 v176; // rcx
  PVOID v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  unsigned int v180; // r8d
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rax
  int v185; // ebx
  __int64 v186; // rcx
  __int64 v187; // rax
  struct _KTHREAD *v188; // rdi
  __int64 v189; // rbx
  __int64 v190; // rcx
  __int64 *v191; // rax
  __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rdx
  __int64 v197; // rcx
  PERESOURCE *v198; // rbx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 v209; // rax
  __int64 v210; // rdx
  __int64 v211; // rcx
  PERESOURCE *v212; // rdi
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 *v215; // rsi
  __int64 v216; // rbx
  __int64 v217; // rcx
  int v218; // r8d
  __int64 v219; // r9
  int v221; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int16 v222[2]; // [rsp+80h] [rbp-88h] BYREF
  int v223; // [rsp+84h] [rbp-84h] BYREF
  int v224; // [rsp+88h] [rbp-80h] BYREF
  int v225; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v226; // [rsp+90h] [rbp-78h] BYREF
  int v227; // [rsp+94h] [rbp-74h] BYREF
  int v228; // [rsp+98h] [rbp-70h] BYREF
  int v229; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v230; // [rsp+A0h] [rbp-68h] BYREF
  int v231; // [rsp+A4h] [rbp-64h] BYREF
  int v232; // [rsp+A8h] [rbp-60h] BYREF
  int v233; // [rsp+ACh] [rbp-5Ch] BYREF
  int v234; // [rsp+B0h] [rbp-58h] BYREF
  int v235; // [rsp+B4h] [rbp-54h] BYREF
  int v236; // [rsp+B8h] [rbp-50h] BYREF
  int v237; // [rsp+BCh] [rbp-4Ch] BYREF
  int v238; // [rsp+C0h] [rbp-48h] BYREF
  int v239; // [rsp+C4h] [rbp-44h] BYREF
  int v240; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v241; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v242; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v243; // [rsp+E8h] [rbp-20h]
  UUID *v244; // [rsp+F8h] [rbp-10h]
  __int64 v245; // [rsp+100h] [rbp-8h] BYREF
  __int16 v246; // [rsp+108h] [rbp+0h]
  UUID v247; // [rsp+118h] [rbp+10h] BYREF
  UUID v248; // [rsp+128h] [rbp+20h] BYREF
  __int64 v249; // [rsp+138h] [rbp+30h]
  unsigned __int8 v250; // [rsp+140h] [rbp+38h]
  GUID v251; // [rsp+144h] [rbp+3Ch] BYREF
  __int64 v252; // [rsp+158h] [rbp+50h]
  unsigned __int8 v253; // [rsp+160h] [rbp+58h]
  GUID v254; // [rsp+164h] [rbp+5Ch] BYREF
  __int64 v255; // [rsp+178h] [rbp+70h]
  unsigned __int8 v256; // [rsp+180h] [rbp+78h]
  GUID v257; // [rsp+184h] [rbp+7Ch] BYREF
  __int64 v258; // [rsp+198h] [rbp+90h]
  unsigned __int8 v259; // [rsp+1A0h] [rbp+98h]
  GUID v260; // [rsp+1A4h] [rbp+9Ch] BYREF
  UUID Uuid; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v262[10]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v263; // [rsp+218h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v264; // [rsp+228h] [rbp+120h] BYREF
  int *v265; // [rsp+248h] [rbp+140h]
  __int64 v266; // [rsp+250h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v267; // [rsp+258h] [rbp+150h] BYREF
  int *v268; // [rsp+278h] [rbp+170h]
  __int64 v269; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v270; // [rsp+288h] [rbp+180h] BYREF
  int *v271; // [rsp+2A8h] [rbp+1A0h]
  __int64 v272; // [rsp+2B0h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v273; // [rsp+2B8h] [rbp+1B0h] BYREF
  int *v274; // [rsp+2D8h] [rbp+1D0h]
  __int64 v275; // [rsp+2E0h] [rbp+1D8h]
  struct _EVENT_DATA_DESCRIPTOR v276; // [rsp+2E8h] [rbp+1E0h] BYREF
  int *v277; // [rsp+308h] [rbp+200h]
  __int64 v278; // [rsp+310h] [rbp+208h]
  struct _EVENT_DATA_DESCRIPTOR v279; // [rsp+318h] [rbp+210h] BYREF
  int *v280; // [rsp+338h] [rbp+230h]
  __int64 v281; // [rsp+340h] [rbp+238h]
  struct _EVENT_DATA_DESCRIPTOR v282; // [rsp+348h] [rbp+240h] BYREF
  int *v283; // [rsp+368h] [rbp+260h]
  __int64 v284; // [rsp+370h] [rbp+268h]
  struct _EVENT_DATA_DESCRIPTOR v285; // [rsp+378h] [rbp+270h] BYREF
  int *v286; // [rsp+398h] [rbp+290h]
  __int64 v287; // [rsp+3A0h] [rbp+298h]
  struct _EVENT_DATA_DESCRIPTOR v288; // [rsp+3A8h] [rbp+2A0h] BYREF
  int *v289; // [rsp+3C8h] [rbp+2C0h]
  __int64 v290; // [rsp+3D0h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v291; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *v292; // [rsp+3F8h] [rbp+2F0h]
  __int64 v293; // [rsp+400h] [rbp+2F8h]
  struct _EVENT_DATA_DESCRIPTOR v294; // [rsp+408h] [rbp+300h] BYREF
  int *v295; // [rsp+428h] [rbp+320h]
  __int64 v296; // [rsp+430h] [rbp+328h]
  struct _EVENT_DATA_DESCRIPTOR v297; // [rsp+438h] [rbp+330h] BYREF
  int *v298; // [rsp+458h] [rbp+350h]
  __int64 v299; // [rsp+460h] [rbp+358h]

  v244 = a4;
  v7 = a1;
  v8 = a4;
  memset(v262, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v262[1]);
  v12 = 0;
  v262[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v262[3]) = 15;
  LOBYTE(v262[6]) = -1;
  LODWORD(v262[4]) = v7;
  if ( gfSwitchInProgress )
  {
    do
    {
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v9, v10, v11);
      KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v251 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v250 = 1;
        v16 = PsGetCurrentThreadWin32Thread(v14);
        v249 = v16;
        if ( v16 && (*(int *)(v16 + 24) > 0 || *(_DWORD *)(v249 + 48)) )
        {
          EtwActivityIdControl(3u, &v251);
          if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v223 = v250;
            v266 = 4LL;
            v265 = &v223;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &v251,
              0LL,
              3u,
              &v264);
          }
        }
      }
      else
      {
        v249 = 0LL;
      }
      v17 = 0LL;
      while ( 1 )
      {
        v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v18 )
          v17 = *v18;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v20, v19);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v23, v22) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v17 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v249 )
        {
          v23 = *(unsigned int *)(v249 + 24);
          if ( *(_DWORD *)(v249 + 48) || (int)v23 > 0 )
          {
            *(_DWORD *)(v249 + 44) = 1;
            *(GUID *)(v249 + 28) = v251;
            if ( (unsigned int)dword_1C0246A70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v224 = v250;
                v269 = 4LL;
                v268 = &v224;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E30,
                  &v251,
                  0LL,
                  3u,
                  &v267);
                v24 = dword_1C0246A70;
              }
              if ( v24 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v225 = v250;
                v284 = 4LL;
                v283 = &v225;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E5D,
                  &v251,
                  0LL,
                  3u,
                  &v282);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v23);
      gptiCurrent = v17;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess(v25) )
      {
        v28 = PsGetCurrentProcess(v27, v26);
        ProcessSessionId = PsGetProcessSessionIdEx(v28);
        CurrentThreadProcess = PsGetCurrentThreadProcess(v30);
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          continue;
      }
      CurrentThread = KeGetCurrentThread();
      v33 = 0LL;
      if ( IsThreadCrossSessionAttached(v27) )
      {
        v12 = 0;
      }
      else
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        v12 = 0;
        if ( ThreadWin32Thread )
          v33 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34);
      if ( v33
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v33 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v33 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v9, v10, v11);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v40, v41);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v50 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v50[2];
            v51 = *v50;
            v50[2] = 0LL;
            if ( !*(_DWORD *)(v51 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48, v49);
            v54 = (PERESOURCE *)GetDomainLockRef(12LL, v46, v48, v49);
            if ( v54 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v55, v56);
            ExReleaseResourceAndLeaveCriticalRegion(*v54);
            HMUnlockObject(*v50);
            tagDomLock::LockExclusive(v54);
            v50 = (__int64 *)gpducstulHead;
            v12 = 0;
          }
          while ( gpducstulHead );
          v8 = v244;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    while ( gfSwitchInProgress );
    v7 = a1;
  }
  v242 = 0LL;
  LOWORD(v242) = gProtocolType;
  v243 = 0LL;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    goto LABEL_242;
  v61 = a5;
  if ( a2 )
  {
    UserSessionSwitchLeaveCrit(v58, v57, v59, v60);
    Uuid = 0LL;
    if ( !v8 && ExUuidCreate(&Uuid) < 0 )
      Uuid = 0LL;
    if ( a5 )
      v12 = *a5;
    p_Uuid = &Uuid;
    ProcessImageFileName = 0;
    if ( v8 )
      p_Uuid = v8;
    if ( gptiForeground )
    {
      ThreadProcess = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
      ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
    }
    v247 = *p_Uuid;
    DrvDxgkCheckDisplayState(v7, 1, ProcessImageFileName, (unsigned int)v262, (__int64)&v247, v12);
    xmmword_1C0254610 = *(_OWORD *)&v262[1];
    v12 = 0;
    v67 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v65);
    if ( v67 )
      v67[1] = KeQueryPerformanceCounter(0LL);
    v254 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v253 = 1;
      v68 = PsGetCurrentThreadWin32Thread(v66);
      v252 = v68;
      if ( v68 && (*(int *)(v68 + 24) > 0 || *(_DWORD *)(v252 + 48)) )
      {
        EtwActivityIdControl(3u, &v254);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v226 = v253;
          v272 = 4LL;
          v271 = &v226;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &v254,
            0LL,
            3u,
            &v270);
        }
      }
    }
    else
    {
      v252 = 0LL;
    }
    v69 = 0LL;
    while ( 1 )
    {
      v70 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v70 )
        v69 = *v70;
      v73 = (PVOID)PsGetCurrentProcess(v72, v71);
      if ( v73 )
      {
        if ( v73 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v75, v74) == gpepCSRSS && v69 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v69 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v252 )
      {
        v75 = *(unsigned int *)(v252 + 24);
        if ( *(_DWORD *)(v252 + 48) || (int)v75 > 0 )
        {
          *(_DWORD *)(v252 + 44) = 1;
          *(GUID *)(v252 + 28) = v254;
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v227 = v253;
              v275 = 4LL;
              v274 = &v227;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E30,
                &v254,
                0LL,
                3u,
                &v273);
              v76 = dword_1C0246A70;
            }
            if ( v76 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v228 = v253;
              v278 = 4LL;
              v277 = &v228;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E5D,
                &v254,
                0LL,
                3u,
                &v276);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v75);
    gptiCurrent = v69;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v77)
      || (v80 = PsGetCurrentProcess(v79, v78),
          v81 = PsGetProcessSessionIdEx(v80),
          v83 = PsGetCurrentThreadProcess(v82),
          v81 == (unsigned int)PsGetProcessSessionIdEx(v83)) )
    {
      v84 = KeGetCurrentThread();
      v85 = 0LL;
      if ( IsThreadCrossSessionAttached(v79) )
      {
        v12 = 0;
      }
      else
      {
        v87 = (__int64 *)PsGetThreadWin32Thread(v84);
        v12 = 0;
        if ( v87 )
          v85 = *v87;
      }
      v88 = PsGetCurrentProcessWin32Process(v86);
      if ( v85
        && v88
        && (*(_DWORD *)(v85 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v85 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(v88 + 12) & 0x8000) != 0 )
      {
        v92 = (PERESOURCE *)GetDomainLockRef(12LL, v57, v59, v89);
        if ( v92 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v91, v90, v93, v94);
        if ( ExIsResourceAcquiredExclusiveLite(*v92) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v96, v95, v97, v98);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v92);
        v103 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v103[2];
            v104 = *v103;
            v103[2] = 0LL;
            if ( !*(_DWORD *)(v104 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v100, v99, v101, v102);
            v107 = (PERESOURCE *)GetDomainLockRef(12LL, v99, v101, v102);
            if ( v107 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v106, v105, v108, v109);
            ExReleaseResourceAndLeaveCriticalRegion(*v107);
            HMUnlockObject(*v103);
            tagDomLock::LockExclusive(v107);
            v103 = (__int64 *)gpducstulHead;
            v12 = 0;
          }
          while ( gpducstulHead );
          v61 = a5;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v92);
      }
    }
  }
  if ( gProtocolType || !a3 )
    goto LABEL_242;
  DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v242, v57, v59);
  DWORD1(v242) = 1;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v110, v111, v112);
  v241 = 0x1A00000000LL;
  v113 = DrvDxgkPollDisplayChildren(&v241);
  DWORD2(v242) = v113;
  v116 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v114);
  if ( v116 )
    v116[1] = KeQueryPerformanceCounter(0LL);
  v257 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v256 = 1;
    v117 = PsGetCurrentThreadWin32Thread(v115);
    v255 = v117;
    if ( v117 && (*(int *)(v117 + 24) > 0 || *(_DWORD *)(v255 + 48)) )
    {
      EtwActivityIdControl(3u, &v257);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v229 = v256;
        v281 = 4LL;
        v280 = &v229;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &v257,
          0LL,
          3u,
          &v279);
      }
    }
  }
  else
  {
    v255 = 0LL;
  }
  v118 = 0LL;
  while ( 1 )
  {
    v119 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v119 )
      v118 = *v119;
    v122 = (PVOID)PsGetCurrentProcess(v121, v120);
    if ( v122 )
    {
      if ( v122 == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v124, v123) == gpepCSRSS && v118 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v118 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v255 )
    {
      v124 = *(unsigned int *)(v255 + 24);
      if ( *(_DWORD *)(v255 + 48) || (int)v124 > 0 )
      {
        *(_DWORD *)(v255 + 44) = 1;
        *(GUID *)(v255 + 28) = v257;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v230 = v256;
            v299 = 4LL;
            v298 = &v230;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &v257,
              0LL,
              3u,
              &v297);
            v125 = dword_1C0246A70;
          }
          if ( v125 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v231 = v256;
            v287 = 4LL;
            v286 = &v231;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &v257,
              0LL,
              3u,
              &v285);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v124);
  gptiCurrent = v118;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v126)
    || (v129 = PsGetCurrentProcess(v128, v127),
        v130 = PsGetProcessSessionIdEx(v129),
        v132 = PsGetCurrentThreadProcess(v131),
        v130 == (unsigned int)PsGetProcessSessionIdEx(v132)) )
  {
    v133 = KeGetCurrentThread();
    v134 = 0LL;
    if ( IsThreadCrossSessionAttached(v128) )
    {
      v12 = 0;
    }
    else
    {
      v136 = (__int64 *)PsGetThreadWin32Thread(v133);
      v12 = 0;
      if ( v136 )
        v134 = *v136;
    }
    v137 = PsGetCurrentProcessWin32Process(v135);
    if ( v134
      && v137
      && (*(_DWORD *)(v134 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v134 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(v137 + 12) & 0x8000) != 0 )
    {
      v143 = (PERESOURCE *)GetDomainLockRef(12LL, v138, v139, v140);
      if ( v143 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v142, v141, v144, v145);
      if ( ExIsResourceAcquiredExclusiveLite(*v143) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v147, v146, v148, v149);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v143);
      v154 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v154[2];
          v155 = *v154;
          v154[2] = 0LL;
          if ( !*(_DWORD *)(v155 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v151, v150, v152, v153);
          v158 = (PERESOURCE *)GetDomainLockRef(12LL, v150, v152, v153);
          if ( v158 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v157, v156, v159, v160);
          ExReleaseResourceAndLeaveCriticalRegion(*v158);
          HMUnlockObject(*v154);
          tagDomLock::LockExclusive(v158);
          v154 = (__int64 *)gpducstulHead;
          v12 = 0;
        }
        while ( gpducstulHead );
        v61 = a5;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v143);
    }
  }
  *(_OWORD *)&v262[1] = xmmword_1C0254610;
  if ( v113 >= 0
    && (HIDWORD(v242) = xxxUserSetDisplayConfig(0, 0LL, 391, 0x80u, 0LL, 0, 0LL, (bool *)&v221, 0LL, (__int64)v262),
        v242 >= 0) )
  {
    UserSessionSwitchLeaveCrit(v162, v161, v163, v164);
    v263 = 0LL;
    if ( v61 )
      v12 = *v61;
    v165 = (UUID *)&v263;
    v166 = 0;
    if ( v8 )
      v165 = v8;
    if ( gptiForeground )
    {
      v167 = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
      v166 = PsGetProcessImageFileName(v167);
    }
    v168 = a1;
    v248 = *v165;
    DrvDxgkCheckDisplayState(a1, 0, v166, (unsigned int)v262, (__int64)&v248, v12);
    v171 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v169);
    if ( v171 )
      v171[1] = KeQueryPerformanceCounter(0LL);
    v260 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v259 = 1;
      v172 = PsGetCurrentThreadWin32Thread(v170);
      v258 = v172;
      if ( v172 && (*(int *)(v172 + 24) > 0 || *(_DWORD *)(v258 + 48)) )
      {
        EtwActivityIdControl(3u, &v260);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v232 = v259;
          v290 = 4LL;
          v289 = &v232;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &v260,
            0LL,
            3u,
            &v288);
        }
      }
    }
    else
    {
      v258 = 0LL;
    }
    v173 = 0LL;
    while ( 1 )
    {
      v174 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v174 )
        v173 = *v174;
      v177 = (PVOID)PsGetCurrentProcess(v176, v175);
      if ( v177 )
      {
        if ( v177 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v179, v178) == gpepCSRSS && v173 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v173 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v258 )
      {
        v179 = *(unsigned int *)(v258 + 24);
        if ( *(_DWORD *)(v258 + 48) || (int)v179 > 0 )
        {
          *(_DWORD *)(v258 + 44) = 1;
          *(GUID *)(v258 + 28) = v260;
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v233 = v259;
              v293 = 4LL;
              v292 = &v233;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E30,
                &v260,
                0LL,
                3u,
                &v291);
              v180 = dword_1C0246A70;
            }
            if ( v180 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v234 = v259;
              v296 = 4LL;
              v295 = &v234;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E5D,
                &v260,
                0LL,
                3u,
                &v294);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v179);
    gptiCurrent = v173;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v181)
      || (v184 = PsGetCurrentProcess(v183, v182),
          v185 = PsGetProcessSessionIdEx(v184),
          v187 = PsGetCurrentThreadProcess(v186),
          v185 == (unsigned int)PsGetProcessSessionIdEx(v187)) )
    {
      v188 = KeGetCurrentThread();
      v189 = 0LL;
      if ( !IsThreadCrossSessionAttached(v183) )
      {
        v191 = (__int64 *)PsGetThreadWin32Thread(v188);
        if ( v191 )
          v189 = *v191;
      }
      v192 = PsGetCurrentProcessWin32Process(v190);
      if ( v189
        && v192
        && (*(_DWORD *)(v189 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v189 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(v192 + 12) & 0x8000) != 0 )
      {
        v198 = (PERESOURCE *)GetDomainLockRef(12LL, v193, v194, v195);
        if ( v198 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v197, v196, v199, v200);
        if ( ExIsResourceAcquiredExclusiveLite(*v198) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v202, v201, v203, v204);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v198);
        while ( 1 )
        {
          v215 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v209 = *v215;
          v215[2] = 0LL;
          if ( !*(_DWORD *)(v209 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v206, v205, v207, v208);
          v212 = (PERESOURCE *)GetDomainLockRef(12LL, v205, v207, v208);
          if ( v212 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v211, v210, v213, v214);
          ExReleaseResourceAndLeaveCriticalRegion(*v212);
          HMUnlockObject(*v215);
          tagDomLock::LockExclusive(v212);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v198);
      }
    }
  }
  else
  {
LABEL_242:
    v168 = a1;
  }
  v216 = *((_QWORD *)&v243 + 1);
  if ( !gProtocolType
    && a3
    && (unsigned int)dword_1C0241378 > 5
    && tlgKeywordOn((__int64)&dword_1C0241378, 0x400000000008LL) )
  {
    v237 = HIDWORD(v242);
    v238 = DWORD2(v242);
    v239 = v243;
    HIWORD(v221) = v242;
    v240 = DWORD1(v242);
    v222[0] = 4;
    v236 = v218;
    v235 = v168;
    v245 = v216;
    v246 = v219;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
      v217,
      byte_1C0214456,
      (const GUID *)&v262[1],
      v219,
      (__int64)v222,
      (__int64)&v240,
      (__int64)&v221 + 2,
      (__int64)&v239,
      (__int64)&v238,
      (__int64)&v237,
      (__int64)&v236,
      &v245,
      (__int64)&v235);
  }
  if ( v216 )
    Win32FreePool(v216);
}
