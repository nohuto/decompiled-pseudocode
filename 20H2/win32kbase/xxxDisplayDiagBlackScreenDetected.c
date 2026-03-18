/*
 * XREFs of xxxDisplayDiagBlackScreenDetected @ 0x1C01229E0
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00AFE08 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxUserSetDisplayConfig @ 0x1C006FA20 (xxxUserSetDisplayConfig.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@34444AEBU_tlgWrapperBinary@@4@Z @ 0x1C0122738 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C0122940 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvDxgkCheckDisplayState @ 0x1C0148794 (DrvDxgkCheckDisplayState.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C0148870 (DrvDxgkPollDisplayChildren.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  PERESOURCE *v52; // rdi
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int *v59; // r15
  UUID *p_Uuid; // rbx
  int ProcessImageFileName; // eax
  PEPROCESS ThreadProcess; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  LARGE_INTEGER *v65; // rbx
  __int64 v66; // rax
  struct tagTHREADINFO *v67; // rbx
  struct tagTHREADINFO **v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  PVOID v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned int v74; // r8d
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  int v78; // ebx
  __int64 v79; // rax
  struct _KTHREAD *v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // rcx
  __int64 *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  PERESOURCE *v90; // rbx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 *v101; // rsi
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  PERESOURCE *v105; // rdi
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  int v111; // r14d
  __int64 v112; // rcx
  __int64 v113; // rcx
  LARGE_INTEGER *v114; // rbx
  __int64 v115; // rax
  struct tagTHREADINFO *v116; // rbx
  struct tagTHREADINFO **v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  PVOID v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  unsigned int v123; // r8d
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  int v127; // ebx
  __int64 v128; // rax
  struct _KTHREAD *v129; // rdi
  __int64 v130; // rbx
  __int64 v131; // rcx
  __int64 *v132; // rax
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // rcx
  PERESOURCE *v139; // rbx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 *v150; // rsi
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  PERESOURCE *v154; // rdi
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  UUID *v161; // rbx
  int v162; // eax
  PEPROCESS v163; // rax
  int v164; // r14d
  __int64 v165; // rcx
  __int64 v166; // rcx
  LARGE_INTEGER *v167; // rbx
  __int64 v168; // rax
  struct tagTHREADINFO *v169; // rbx
  struct tagTHREADINFO **v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  PVOID v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rcx
  unsigned int v176; // r8d
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // rax
  int v180; // ebx
  __int64 v181; // rax
  struct _KTHREAD *v182; // rdi
  __int64 v183; // rbx
  __int64 v184; // rcx
  __int64 *v185; // rax
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rdx
  __int64 v191; // rcx
  PERESOURCE *v192; // rbx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rax
  __int64 v204; // rdx
  __int64 v205; // rcx
  PERESOURCE *v206; // rdi
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 *v209; // rsi
  __int64 v210; // rbx
  __int64 v211; // rcx
  int v212; // r8d
  __int64 v213; // r9
  int v215; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int16 v216[2]; // [rsp+80h] [rbp-88h] BYREF
  int v217; // [rsp+84h] [rbp-84h] BYREF
  int v218; // [rsp+88h] [rbp-80h] BYREF
  int v219; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v220; // [rsp+90h] [rbp-78h] BYREF
  int v221; // [rsp+94h] [rbp-74h] BYREF
  int v222; // [rsp+98h] [rbp-70h] BYREF
  int v223; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v224; // [rsp+A0h] [rbp-68h] BYREF
  int v225; // [rsp+A4h] [rbp-64h] BYREF
  int v226; // [rsp+A8h] [rbp-60h] BYREF
  int v227; // [rsp+ACh] [rbp-5Ch] BYREF
  int v228; // [rsp+B0h] [rbp-58h] BYREF
  int v229; // [rsp+B4h] [rbp-54h] BYREF
  int v230; // [rsp+B8h] [rbp-50h] BYREF
  int v231; // [rsp+BCh] [rbp-4Ch] BYREF
  int v232; // [rsp+C0h] [rbp-48h] BYREF
  int v233; // [rsp+C4h] [rbp-44h] BYREF
  int v234; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v235; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v236; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v237; // [rsp+E8h] [rbp-20h]
  UUID *v238; // [rsp+F8h] [rbp-10h]
  __int64 v239; // [rsp+100h] [rbp-8h] BYREF
  __int16 v240; // [rsp+108h] [rbp+0h]
  UUID v241; // [rsp+118h] [rbp+10h] BYREF
  UUID v242; // [rsp+128h] [rbp+20h] BYREF
  __int64 v243; // [rsp+138h] [rbp+30h]
  unsigned __int8 v244; // [rsp+140h] [rbp+38h]
  GUID v245; // [rsp+144h] [rbp+3Ch] BYREF
  __int64 v246; // [rsp+158h] [rbp+50h]
  unsigned __int8 v247; // [rsp+160h] [rbp+58h]
  GUID v248; // [rsp+164h] [rbp+5Ch] BYREF
  __int64 v249; // [rsp+178h] [rbp+70h]
  unsigned __int8 v250; // [rsp+180h] [rbp+78h]
  GUID v251; // [rsp+184h] [rbp+7Ch] BYREF
  __int64 v252; // [rsp+198h] [rbp+90h]
  unsigned __int8 v253; // [rsp+1A0h] [rbp+98h]
  GUID v254; // [rsp+1A4h] [rbp+9Ch] BYREF
  UUID Uuid; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v256[10]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v257; // [rsp+218h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v258; // [rsp+228h] [rbp+120h] BYREF
  int *v259; // [rsp+248h] [rbp+140h]
  __int64 v260; // [rsp+250h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v261; // [rsp+258h] [rbp+150h] BYREF
  int *v262; // [rsp+278h] [rbp+170h]
  __int64 v263; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v264; // [rsp+288h] [rbp+180h] BYREF
  int *v265; // [rsp+2A8h] [rbp+1A0h]
  __int64 v266; // [rsp+2B0h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v267; // [rsp+2B8h] [rbp+1B0h] BYREF
  int *v268; // [rsp+2D8h] [rbp+1D0h]
  __int64 v269; // [rsp+2E0h] [rbp+1D8h]
  struct _EVENT_DATA_DESCRIPTOR v270; // [rsp+2E8h] [rbp+1E0h] BYREF
  int *v271; // [rsp+308h] [rbp+200h]
  __int64 v272; // [rsp+310h] [rbp+208h]
  struct _EVENT_DATA_DESCRIPTOR v273; // [rsp+318h] [rbp+210h] BYREF
  int *v274; // [rsp+338h] [rbp+230h]
  __int64 v275; // [rsp+340h] [rbp+238h]
  struct _EVENT_DATA_DESCRIPTOR v276; // [rsp+348h] [rbp+240h] BYREF
  int *v277; // [rsp+368h] [rbp+260h]
  __int64 v278; // [rsp+370h] [rbp+268h]
  struct _EVENT_DATA_DESCRIPTOR v279; // [rsp+378h] [rbp+270h] BYREF
  int *v280; // [rsp+398h] [rbp+290h]
  __int64 v281; // [rsp+3A0h] [rbp+298h]
  struct _EVENT_DATA_DESCRIPTOR v282; // [rsp+3A8h] [rbp+2A0h] BYREF
  int *v283; // [rsp+3C8h] [rbp+2C0h]
  __int64 v284; // [rsp+3D0h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v285; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *v286; // [rsp+3F8h] [rbp+2F0h]
  __int64 v287; // [rsp+400h] [rbp+2F8h]
  struct _EVENT_DATA_DESCRIPTOR v288; // [rsp+408h] [rbp+300h] BYREF
  int *v289; // [rsp+428h] [rbp+320h]
  __int64 v290; // [rsp+430h] [rbp+328h]
  struct _EVENT_DATA_DESCRIPTOR v291; // [rsp+438h] [rbp+330h] BYREF
  int *v292; // [rsp+458h] [rbp+350h]
  __int64 v293; // [rsp+460h] [rbp+358h]

  v238 = a4;
  v7 = a1;
  v8 = a4;
  memset(v256, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v256[1]);
  v12 = 0;
  v256[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v256[3]) = 15;
  LOBYTE(v256[6]) = -1;
  LODWORD(v256[4]) = v7;
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
      v245 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v244 = 1;
        v16 = PsGetCurrentThreadWin32Thread(v14);
        v243 = v16;
        if ( v16 && (*(int *)(v16 + 24) > 0 || *(_DWORD *)(v243 + 48)) )
        {
          EtwActivityIdControl(3u, &v245);
          if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v217 = v244;
            v260 = 4LL;
            v259 = &v217;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E87,
              &v245,
              0LL,
              3u,
              &v258);
          }
        }
      }
      else
      {
        v243 = 0LL;
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
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v243
        && (*(_DWORD *)(v243 + 48) || *(int *)(v243 + 24) > 0) )
      {
        *(_DWORD *)(v243 + 44) = 1;
        *(GUID *)(v243 + 28) = v245;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v218 = v244;
            v263 = 4LL;
            v262 = &v218;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E30,
              &v245,
              0LL,
              3u,
              &v261);
            v24 = dword_1C0244A70;
          }
          if ( v24 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v219 = v244;
            v278 = 4LL;
            v277 = &v219;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E5D,
              &v245,
              0LL,
              3u,
              &v276);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v17;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess() )
      {
        v27 = PsGetCurrentProcess(v26, v25);
        ProcessSessionId = PsGetProcessSessionIdEx(v27);
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          continue;
      }
      CurrentThread = KeGetCurrentThread();
      v31 = 0LL;
      if ( IsThreadCrossSessionAttached() )
      {
        v12 = 0;
      }
      else
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        v12 = 0;
        if ( ThreadWin32Thread )
          v31 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
      if ( v31
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v31 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v31 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v9, v10, v11);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v38, v39);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v48 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v48[2];
            v49 = *v48;
            v48[2] = 0LL;
            if ( !*(_DWORD *)(v49 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46, v47);
            v52 = (PERESOURCE *)GetDomainLockRef(12LL, v44, v46, v47);
            if ( v52 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v50, v53, v54);
            ExReleaseResourceAndLeaveCriticalRegion(*v52);
            HMUnlockObject(*v48);
            tagDomLock::LockExclusive(v52);
            v48 = (__int64 *)gpducstulHead;
            v12 = 0;
          }
          while ( gpducstulHead );
          v8 = v238;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    while ( gfSwitchInProgress );
    v7 = a1;
  }
  v236 = 0LL;
  LOWORD(v236) = gProtocolType;
  v237 = 0LL;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    goto LABEL_242;
  v59 = a5;
  if ( a2 )
  {
    UserSessionSwitchLeaveCrit(v56, v55, v57, v58);
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
    v241 = *p_Uuid;
    DrvDxgkCheckDisplayState(v7, 1, ProcessImageFileName, (unsigned int)v256, (__int64)&v241, v12);
    xmmword_1C0252600 = *(_OWORD *)&v256[1];
    v12 = 0;
    v65 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v63);
    if ( v65 )
      v65[1] = KeQueryPerformanceCounter(0LL);
    v248 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v247 = 1;
      v66 = PsGetCurrentThreadWin32Thread(v64);
      v246 = v66;
      if ( v66 && (*(int *)(v66 + 24) > 0 || *(_DWORD *)(v246 + 48)) )
      {
        EtwActivityIdControl(3u, &v248);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v220 = v247;
          v266 = 4LL;
          v265 = &v220;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &v248,
            0LL,
            3u,
            &v264);
        }
      }
    }
    else
    {
      v246 = 0LL;
    }
    v67 = 0LL;
    while ( 1 )
    {
      v68 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v68 )
        v67 = *v68;
      v71 = (PVOID)PsGetCurrentProcess(v70, v69);
      if ( v71 )
      {
        if ( v71 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v73, v72) == gpepCSRSS && v67 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v67 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v246
      && (*(_DWORD *)(v246 + 48) || *(int *)(v246 + 24) > 0) )
    {
      *(_DWORD *)(v246 + 44) = 1;
      *(GUID *)(v246 + 28) = v248;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v221 = v247;
          v269 = 4LL;
          v268 = &v221;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &v248,
            0LL,
            3u,
            &v267);
          v74 = dword_1C0244A70;
        }
        if ( v74 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v222 = v247;
          v272 = 4LL;
          v271 = &v222;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &v248,
            0LL,
            3u,
            &v270);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v67;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v77 = PsGetCurrentProcess(v76, v75),
          v78 = PsGetProcessSessionIdEx(v77),
          v79 = PsGetCurrentThreadProcess(),
          v78 == (unsigned int)PsGetProcessSessionIdEx(v79)) )
    {
      v80 = KeGetCurrentThread();
      v81 = 0LL;
      if ( IsThreadCrossSessionAttached() )
      {
        v12 = 0;
      }
      else
      {
        v83 = (__int64 *)PsGetThreadWin32Thread(v80);
        v12 = 0;
        if ( v83 )
          v81 = *v83;
      }
      v84 = PsGetCurrentProcessWin32Process(v82);
      if ( v81
        && v84
        && (*(_DWORD *)(v81 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v81 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(v84 + 12) & 0x8000) != 0 )
      {
        v90 = (PERESOURCE *)GetDomainLockRef(12LL, v85, v86, v87);
        if ( v90 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v89, v88, v91, v92);
        if ( ExIsResourceAcquiredExclusiveLite(*v90) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v94, v93, v95, v96);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v90);
        v101 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v101[2];
            v102 = *v101;
            v101[2] = 0LL;
            if ( !*(_DWORD *)(v102 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v98, v97, v99, v100);
            v105 = (PERESOURCE *)GetDomainLockRef(12LL, v97, v99, v100);
            if ( v105 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v104, v103, v106, v107);
            ExReleaseResourceAndLeaveCriticalRegion(*v105);
            HMUnlockObject(*v101);
            tagDomLock::LockExclusive(v105);
            v101 = (__int64 *)gpducstulHead;
            v12 = 0;
          }
          while ( gpducstulHead );
          v59 = a5;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v90);
      }
    }
  }
  if ( gProtocolType || !a3 )
    goto LABEL_242;
  DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v236);
  DWORD1(v236) = 1;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v108, v109, v110);
  v235 = 0x1A00000000LL;
  v111 = DrvDxgkPollDisplayChildren(&v235);
  DWORD2(v236) = v111;
  v114 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v112);
  if ( v114 )
    v114[1] = KeQueryPerformanceCounter(0LL);
  v251 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v250 = 1;
    v115 = PsGetCurrentThreadWin32Thread(v113);
    v249 = v115;
    if ( v115 && (*(int *)(v115 + 24) > 0 || *(_DWORD *)(v249 + 48)) )
    {
      EtwActivityIdControl(3u, &v251);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v223 = v250;
        v275 = 4LL;
        v274 = &v223;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &v251,
          0LL,
          3u,
          &v273);
      }
    }
  }
  else
  {
    v249 = 0LL;
  }
  v116 = 0LL;
  while ( 1 )
  {
    v117 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v117 )
      v116 = *v117;
    v120 = (PVOID)PsGetCurrentProcess(v119, v118);
    if ( v120 )
    {
      if ( v120 == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v122, v121) == gpepCSRSS && v116 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v116 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v249 && (*(_DWORD *)(v249 + 48) || *(int *)(v249 + 24) > 0) )
  {
    *(_DWORD *)(v249 + 44) = 1;
    *(GUID *)(v249 + 28) = v251;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v224 = v250;
        v293 = 4LL;
        v292 = &v224;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &v251,
          0LL,
          3u,
          &v291);
        v123 = dword_1C0244A70;
      }
      if ( v123 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v225 = v250;
        v281 = 4LL;
        v280 = &v225;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &v251,
          0LL,
          3u,
          &v279);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v116;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v126 = PsGetCurrentProcess(v125, v124),
        v127 = PsGetProcessSessionIdEx(v126),
        v128 = PsGetCurrentThreadProcess(),
        v127 == (unsigned int)PsGetProcessSessionIdEx(v128)) )
  {
    v129 = KeGetCurrentThread();
    v130 = 0LL;
    if ( IsThreadCrossSessionAttached() )
    {
      v12 = 0;
    }
    else
    {
      v132 = (__int64 *)PsGetThreadWin32Thread(v129);
      v12 = 0;
      if ( v132 )
        v130 = *v132;
    }
    v133 = PsGetCurrentProcessWin32Process(v131);
    if ( v130
      && v133
      && (*(_DWORD *)(v130 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v130 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(v133 + 12) & 0x8000) != 0 )
    {
      v139 = (PERESOURCE *)GetDomainLockRef(12LL, v134, v135, v136);
      if ( v139 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v138, v137, v140, v141);
      if ( ExIsResourceAcquiredExclusiveLite(*v139) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v143, v142, v144, v145);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v139);
      v150 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v150[2];
          v151 = *v150;
          v150[2] = 0LL;
          if ( !*(_DWORD *)(v151 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v147, v146, v148, v149);
          v154 = (PERESOURCE *)GetDomainLockRef(12LL, v146, v148, v149);
          if ( v154 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v153, v152, v155, v156);
          ExReleaseResourceAndLeaveCriticalRegion(*v154);
          HMUnlockObject(*v150);
          tagDomLock::LockExclusive(v154);
          v150 = (__int64 *)gpducstulHead;
          v12 = 0;
        }
        while ( gpducstulHead );
        v59 = a5;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v139);
    }
  }
  *(_OWORD *)&v256[1] = xmmword_1C0252600;
  if ( v111 >= 0
    && (HIDWORD(v236) = xxxUserSetDisplayConfig(0, 0LL, 0x187u, 0x80u, 0LL, 0, 0LL, (bool *)&v215, 0LL, (__int64)v256),
        v236 >= 0) )
  {
    UserSessionSwitchLeaveCrit(v158, v157, v159, v160);
    v257 = 0LL;
    if ( v59 )
      v12 = *v59;
    v161 = (UUID *)&v257;
    v162 = 0;
    if ( v8 )
      v161 = v8;
    if ( gptiForeground )
    {
      v163 = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
      v162 = PsGetProcessImageFileName(v163);
    }
    v164 = a1;
    v242 = *v161;
    DrvDxgkCheckDisplayState(a1, 0, v162, (unsigned int)v256, (__int64)&v242, v12);
    v167 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v165);
    if ( v167 )
      v167[1] = KeQueryPerformanceCounter(0LL);
    v254 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v253 = 1;
      v168 = PsGetCurrentThreadWin32Thread(v166);
      v252 = v168;
      if ( v168 && (*(int *)(v168 + 24) > 0 || *(_DWORD *)(v252 + 48)) )
      {
        EtwActivityIdControl(3u, &v254);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v226 = v253;
          v284 = 4LL;
          v283 = &v226;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &v254,
            0LL,
            3u,
            &v282);
        }
      }
    }
    else
    {
      v252 = 0LL;
    }
    v169 = 0LL;
    while ( 1 )
    {
      v170 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v170 )
        v169 = *v170;
      v173 = (PVOID)PsGetCurrentProcess(v172, v171);
      if ( v173 )
      {
        if ( v173 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v175, v174) == gpepCSRSS && v169 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v169 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v252
      && (*(_DWORD *)(v252 + 48) || *(int *)(v252 + 24) > 0) )
    {
      *(_DWORD *)(v252 + 44) = 1;
      *(GUID *)(v252 + 28) = v254;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v227 = v253;
          v287 = 4LL;
          v286 = &v227;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &v254,
            0LL,
            3u,
            &v285);
          v176 = dword_1C0244A70;
        }
        if ( v176 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v228 = v253;
          v290 = 4LL;
          v289 = &v228;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &v254,
            0LL,
            3u,
            &v288);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v169;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v179 = PsGetCurrentProcess(v178, v177),
          v180 = PsGetProcessSessionIdEx(v179),
          v181 = PsGetCurrentThreadProcess(),
          v180 == (unsigned int)PsGetProcessSessionIdEx(v181)) )
    {
      v182 = KeGetCurrentThread();
      v183 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v185 = (__int64 *)PsGetThreadWin32Thread(v182);
        if ( v185 )
          v183 = *v185;
      }
      v186 = PsGetCurrentProcessWin32Process(v184);
      if ( v183
        && v186
        && (*(_DWORD *)(v183 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v183 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(v186 + 12) & 0x8000) != 0 )
      {
        v192 = (PERESOURCE *)GetDomainLockRef(12LL, v187, v188, v189);
        if ( v192 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v191, v190, v193, v194);
        if ( ExIsResourceAcquiredExclusiveLite(*v192) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v196, v195, v197, v198);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v192);
        while ( 1 )
        {
          v209 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v203 = *v209;
          v209[2] = 0LL;
          if ( !*(_DWORD *)(v203 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v200, v199, v201, v202);
          v206 = (PERESOURCE *)GetDomainLockRef(12LL, v199, v201, v202);
          if ( v206 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v205, v204, v207, v208);
          ExReleaseResourceAndLeaveCriticalRegion(*v206);
          HMUnlockObject(*v209);
          tagDomLock::LockExclusive(v206);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v192);
      }
    }
  }
  else
  {
LABEL_242:
    v164 = a1;
  }
  v210 = *((_QWORD *)&v237 + 1);
  if ( !gProtocolType
    && a3
    && (unsigned int)dword_1C023F378 > 5
    && tlgKeywordOn((__int64)&dword_1C023F378, 0x400000000008LL) )
  {
    v231 = HIDWORD(v236);
    v232 = DWORD2(v236);
    v233 = v237;
    HIWORD(v215) = v236;
    v234 = DWORD1(v236);
    v216[0] = 4;
    v230 = v212;
    v229 = v164;
    v239 = v210;
    v240 = v213;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
      v211,
      byte_1C0212456,
      (const GUID *)&v256[1],
      v213,
      (__int64)v216,
      (__int64)&v234,
      (__int64)&v215 + 2,
      (__int64)&v233,
      (__int64)&v232,
      (__int64)&v231,
      (__int64)&v230,
      &v239,
      (__int64)&v229);
  }
  if ( v210 )
    Win32FreePool(v210);
}
