/*
 * XREFs of GreCombineRgn @ 0x1C0084B00
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0010A5C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0013354 (-UpdateUserScreen@@YAJXZ.c)
 *     UserSetDCVisRgn @ 0x1C0013EE0 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C0014070 (UserValidateCopyRgn.c)
 *     NtGdiCombineRgn @ 0x1C0046C80 (NtGdiCombineRgn.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 *     EngCombineRgn @ 0x1C014EF30 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C014EFD0 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C014F2C0 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C014F4C0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C014F560 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C014F600 (EngXorRgn.c)
 * Callees:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00266F0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007B2B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C007B390 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007B770 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007B86C (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0081260 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0081350 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C00814D0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0082264 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0085F30 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00860F0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     PushThreadGuardedObject @ 0x1C0086B80 (PushThreadGuardedObject.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0086FC0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C00AD1F0 (Win32AllocateFromPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0123164 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01426FC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v4; // rdi
  HRGN v7; // rbx
  unsigned __int8 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r14
  void *v12; // rsi
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __m128i *v26; // rsi
  unsigned int v27; // r8d
  struct RGNOBJ *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // ecx
  unsigned int v31; // edi
  unsigned __int8 *v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  struct _KTHREAD *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rsi
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // r12
  __int64 v53; // rax
  _QWORD *v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rcx
  struct _KTHREAD *v57; // rdi
  __int64 v58; // r8
  _QWORD *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 *v64; // rax
  __int64 v65; // rcx
  __int64 *v66; // rax
  struct _KTHREAD *v67; // r12
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 *v72; // rax
  __int64 v73; // rcx
  __int64 *v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rcx
  __int64 v77; // rbx
  void *v78; // rdi
  unsigned __int8 *v79; // rcx
  __int64 v80; // rdi
  int v81; // eax
  int v82; // eax
  __int32 v83; // eax
  unsigned __int32 v84; // r14d
  unsigned int v85; // r14d
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r13
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  GdiHandleManager *v91; // r12
  __int64 v92; // r12
  unsigned int v93; // edx
  unsigned int v94; // ecx
  int v95; // r13d
  __int64 v96; // r12
  __int64 v97; // rbx
  _QWORD *v98; // rax
  __int64 v99; // rcx
  unsigned int v100; // ecx
  char v101; // al
  __int16 v102; // dx
  __int128 v103; // xmm0
  __int16 v104; // r8
  __int64 v105; // rax
  GdiHandleManager *v106; // r12
  unsigned int v107; // ebx
  __int64 v108; // rcx
  unsigned int v109; // r9d
  unsigned int v110; // edx
  __int64 v111; // r8
  unsigned int v112; // ebx
  GdiHandleManager *v113; // r14
  __int64 v114; // rcx
  unsigned int v115; // r8d
  unsigned int v116; // edx
  __int64 v117; // r9
  _DWORD *v118; // rdx
  unsigned int v119; // ebx
  __int64 v120; // rcx
  unsigned int v121; // r8d
  unsigned int v122; // edx
  __int64 v123; // r10
  __int32 v124; // ecx
  __m128i *v125; // r14
  __int64 v126; // rcx
  BOOL v127; // r12d
  __int64 *v128; // rbx
  __int64 v129; // rax
  __m128i **v130; // rcx
  __int64 *v131; // rax
  __int64 **v132; // rcx
  struct _KTHREAD *v133; // rdi
  __int64 v134; // rdx
  __int64 v135; // rcx
  _QWORD *v136; // rax
  _QWORD *v137; // r14
  struct _KTHREAD *v138; // rdi
  __int64 v139; // rsi
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 *v143; // rax
  __int64 v144; // rcx
  _QWORD *v145; // rax
  __int64 *v146; // rbx
  __int64 *v147; // rax
  __int64 **v148; // rcx
  __int64 v149; // rbx
  unsigned __int8 *v150; // rcx
  unsigned int v151; // edi
  __int64 v153; // rbx
  __int64 v154; // rsi
  int v155; // eax
  void *v156; // rsi
  struct RGNOBJ *v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rax
  __m128i v160; // xmm1
  __m128i v161; // xmm0
  unsigned __int64 v162; // rax
  unsigned __int64 v163; // r9
  unsigned __int64 v164; // xmm1_8
  unsigned __int64 v165; // xmm0_8
  LONG v166; // edx
  unsigned __int64 v167; // rax
  unsigned __int64 v168; // r9
  unsigned __int64 v169; // r10
  unsigned int v170; // eax
  __int64 v171; // rax
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rax
  int v175; // ebx
  __int64 v176; // rcx
  __int64 v177; // rax
  bool v178; // zf
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v181; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v183; // rax
  int v184; // edi
  __int64 v185; // rcx
  __int64 v186; // rax
  __int64 v187; // rax
  int v188; // edi
  __int64 v189; // rcx
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rax
  int v193; // edi
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 v196; // rax
  int v197; // ebx
  __int64 v198; // rcx
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  int v202; // ebx
  __int64 v203; // rcx
  __int64 v204; // rax
  struct _ENTRY *Entry; // rax
  int v206; // edx
  GdiHandleManager *v207; // rbx
  unsigned int v208; // eax
  __int64 v209; // r9
  unsigned __int64 v210; // rdx
  unsigned int v211; // r8d
  unsigned int v212; // ecx
  __int64 v213; // r10
  __int64 v214; // rdx
  __int64 v215; // rax
  int v216; // ebx
  __int64 v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rax
  int v220; // ebx
  __int64 v221; // rcx
  __int64 v222; // rax
  __int64 v223; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v224; // [rsp+30h] [rbp-D8h]
  __int64 v225; // [rsp+38h] [rbp-D0h]
  struct _KTHREAD *v226; // [rsp+40h] [rbp-C8h]
  __m128i *v227; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v228; // [rsp+58h] [rbp-B0h]
  __m128i *v229; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v230; // [rsp+70h] [rbp-98h]
  __int64 v231; // [rsp+78h] [rbp-90h] BYREF
  struct _RECTL v232; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v233[2]; // [rsp+90h] [rbp-78h] BYREF
  int v234; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v235; // [rsp+A8h] [rbp-60h]
  __int64 v236; // [rsp+B0h] [rbp-58h]
  _QWORD v237[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v238; // [rsp+C8h] [rbp-40h]
  _QWORD v239[3]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v240; // [rsp+E8h] [rbp-20h]
  __int64 v241; // [rsp+F8h] [rbp-10h]
  _DWORD *v242; // [rsp+100h] [rbp-8h] BYREF
  int v243; // [rsp+108h] [rbp+0h]
  int v244; // [rsp+10Ch] [rbp+4h]
  _QWORD v245[3]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v246[3]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v247; // [rsp+148h] [rbp+40h] BYREF
  int v248; // [rsp+150h] [rbp+48h]
  _QWORD v249[3]; // [rsp+158h] [rbp+50h] BYREF
  __m128i v250; // [rsp+170h] [rbp+68h]
  __m128i v251; // [rsp+180h] [rbp+78h]
  BOOL v253; // [rsp+1F0h] [rbp+E8h]
  unsigned int v254; // [rsp+1F0h] [rbp+E8h]

  v4 = a4;
  v7 = a1;
  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 != 5 )
    {
      if ( a1 != a2 && a1 != a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v246, a2, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v245, a3, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v239, v7, 0);
        v158 = v246[0];
        if ( !v246[0] )
          goto LABEL_289;
        v159 = v245[0];
        if ( v245[0] && v239[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v239, (struct RGNOBJ *)v246, (struct RGNOBJ *)v245, v4) )
          {
            v151 = RGNOBJ::iComplexity((RGNOBJ *)v239);
LABEL_257:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v239);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v245);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v246);
            return v151;
          }
          v158 = v246[0];
          v159 = v245[0];
        }
        if ( !v158 || !v159 || !v239[0] )
LABEL_289:
          EngSetLastError(6u);
        v151 = 0;
        goto LABEL_257;
      }
      if ( a2 == a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v249, a1, 0);
        v172 = v249[0];
        if ( v249[0] )
        {
          if ( (unsigned int)(v4 - 3) <= 1 )
          {
            v173 = *(_QWORD *)(v249[0] + 88LL);
            *(_DWORD *)(v249[0] + 80LL) = 16;
            *(_DWORD *)(v172 + 84) = 1;
            *(_QWORD *)(v172 + 96) = 0LL;
            *(_QWORD *)(v172 + 104) = 0LL;
            *(_DWORD *)v173 = 0;
            *(_DWORD *)(v173 + 4) = 0x80000000;
            *(_QWORD *)(v173 + 8) = 0x7FFFFFFFLL;
            *(_QWORD *)(v172 + 40) = v173 + 16;
          }
          v151 = RGNOBJ::iComplexity((RGNOBJ *)v249);
        }
        else
        {
          EngSetLastError(6u);
          v151 = 0;
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v249);
        return v151;
      }
      LODWORD(v224) = 0;
      v8 = gpTypeIsolation[7];
      if ( v8 )
      {
        v11 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
        if ( !v11 )
          goto LABEL_12;
        v12 = RGNMEMOBJ::s_pSCANLookAsideList;
        if ( qword_1C0252C50 && (int)qword_1C0252C50(v8, v9, v10) >= 0 && qword_1C0252C58 )
          v13 = qword_1C0252C58(v12);
        else
          v13 = 0LL;
        *(_QWORD *)(v11 + 88) = v13;
        if ( v13 )
          goto LABEL_12;
        REGION::vDeleteREGION((REGION *)v11);
      }
      v11 = 0LL;
LABEL_12:
      v223 = v11;
      if ( v11 )
      {
        *(_QWORD *)(v11 + 24) = 112LL;
        *(_DWORD *)(v11 + 80) = 0;
        *(_QWORD *)(v11 + 32) = 0LL;
        *(_QWORD *)(v11 + 56) = v11 + 48;
        *(_QWORD *)(v11 + 48) = v11 + 48;
      }
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v8)
        || (v174 = PsGetCurrentProcess(v16, v15),
            v175 = PsGetProcessSessionIdEx(v174),
            v177 = PsGetCurrentThreadProcess(v176),
            v178 = v175 == (unsigned int)PsGetProcessSessionIdEx(v177),
            v7 = a1,
            v178) )
      {
        ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          if ( *ThreadWin32Thread )
          {
            if ( v11 )
            {
              v18 = (_QWORD *)(v11 + 48);
              if ( v11 != -48 )
              {
                KeEnterCriticalRegion();
                v226 = KeGetCurrentThread();
                if ( (!(unsigned __int8)KeIsAttachedProcess(v19)
                   || (CurrentProcess = PsGetCurrentProcess(v21, v20),
                       ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                       CurrentThreadProcess = PsGetCurrentThreadProcess(v181),
                       v178 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
                       v7 = a1,
                       v178))
                  && (v22 = (__int64 *)PsGetThreadWin32Thread(v226)) != 0LL )
                {
                  v23 = *v22;
                }
                else
                {
                  v23 = 0LL;
                }
                *(_QWORD *)(v11 + 64) = v11;
                *(_QWORD *)(v11 + 72) = CleanUpRegion;
                if ( v23 )
                {
                  v24 = *(_QWORD *)(v23 + 88);
                  v25 = (_QWORD *)(v23 + 88);
                  if ( *(_QWORD **)(v24 + 8) != v25 )
                    goto LABEL_375;
                  *v18 = v24;
                  *(_QWORD *)(v11 + 56) = v25;
                  *(_QWORD *)(v24 + 8) = v18;
                  *v25 = v18;
                }
                else
                {
                  *(_QWORD *)(v11 + 56) = v11 + 48;
                  *v18 = v18;
                }
                KeLeaveCriticalRegion();
              }
            }
          }
        }
      }
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v227, a2, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v229, a3, 0);
      v26 = v227;
      if ( !v11 )
        goto LABEL_317;
      if ( !v227 )
      {
        v80 = v223;
LABEL_320:
        EngSetLastError(6u);
        goto LABEL_321;
      }
      if ( !v229 )
        goto LABEL_317;
      if ( (struct REGION *)v11 != prgnDefault )
      {
        if ( (unsigned int)(v4 - 1) > 1 )
          goto LABEL_261;
        if ( v227[5].m128i_i32[0] == 56
          && v227[6].m128i_i32[0] <= v229[6].m128i_i32[0]
          && v227[6].m128i_i32[2] >= v229[6].m128i_i32[2]
          && v227[6].m128i_i32[1] <= v229[6].m128i_i32[1]
          && v227[6].m128i_i32[3] >= v229[6].m128i_i32[3] )
        {
          v27 = *(_DWORD *)(v11 + 24);
          v28 = (struct RGNOBJ *)&v227;
          if ( (_DWORD)v4 == 1 )
            v28 = (struct RGNOBJ *)&v229;
          v29 = *(_QWORD *)v28;
          v225 = v29;
          v30 = *(_DWORD *)(v29 + 80);
          if ( (v27 >= v30 || *(_DWORD *)(v29 + 24) <= 0x70u) && (v27 <= 0x70 || *(_DWORD *)(v29 + 24) > 0x70u) )
          {
            RGNOBJ::vCopy((RGNOBJ *)&v223, v28);
LABEL_109:
            v80 = v223;
            if ( *(_DWORD *)(v223 + 84) != 1 )
            {
              if ( *(_DWORD *)(v223 + 80) <= 0x38u )
              {
LABEL_111:
                v81 = 2;
                goto LABEL_117;
              }
              goto LABEL_116;
            }
            v81 = 1;
            goto LABEL_117;
          }
          v31 = 112;
          v248 = 0;
          if ( v30 > 0x70 )
            v31 = v30;
          v32 = gpTypeIsolation[7];
          if ( v32 )
          {
            v33 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
            if ( !v33
              || (v31 == 112
                ? (v34 = Win32AllocateFromPagedLookasideList(RGNMEMOBJ::s_pSCANLookAsideList))
                : !qword_1C0252C10 || (int)qword_1C0252C10() < 0 || !qword_1C0252C18
                ? (v34 = 0LL)
                : (v34 = qword_1C0252C18(33LL, v31, 1852011335LL)),
                  (*(_QWORD *)(v33 + 88) = v34) != 0LL) )
            {
LABEL_50:
              v247 = v33;
              if ( v33 )
              {
                v35 = *(_QWORD *)(v33 + 88);
                *(_DWORD *)(v33 + 80) = 16;
                *(_DWORD *)(v33 + 84) = 1;
                *(_QWORD *)(v33 + 96) = 0LL;
                *(_QWORD *)(v33 + 104) = 0LL;
                *(_DWORD *)v35 = 0;
                *(_DWORD *)(v35 + 4) = 0x80000000;
                *(_QWORD *)(v35 + 8) = 0x7FFFFFFFLL;
                *(_QWORD *)(v33 + 40) = v35 + 16;
                *(_DWORD *)(v33 + 24) = v31;
                *(_QWORD *)(v33 + 28) = 0LL;
                *(_DWORD *)(v33 + 36) = 0;
                *(_QWORD *)(v33 + 56) = v33 + 48;
                *(_QWORD *)(v33 + 48) = v33 + 48;
              }
              v36 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v32)
                || (v183 = PsGetCurrentProcess(v38, v37),
                    v184 = PsGetProcessSessionIdEx(v183),
                    v186 = PsGetCurrentThreadProcess(v185),
                    v184 == (unsigned int)PsGetProcessSessionIdEx(v186)) )
              {
                v39 = (_QWORD *)PsGetThreadWin32Thread(v36);
                if ( v39 )
                {
                  if ( *v39 )
                  {
                    if ( !v33 )
                    {
LABEL_316:
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v247);
                      v191 = *(_QWORD *)(v11 + 88);
                      v26 = v227;
                      *(_DWORD *)(v11 + 80) = 16;
                      *(_DWORD *)(v11 + 84) = 1;
                      *(_QWORD *)(v11 + 96) = 0LL;
                      *(_QWORD *)(v11 + 104) = 0LL;
                      *(_DWORD *)v191 = 0;
                      *(_DWORD *)(v191 + 4) = 0x80000000;
                      *(_QWORD *)(v191 + 8) = 0x7FFFFFFFLL;
                      *(_QWORD *)(v11 + 40) = v191 + 16;
LABEL_317:
                      v80 = v223;
LABEL_318:
                      if ( v26 && v229 )
                        goto LABEL_321;
                      goto LABEL_320;
                    }
                    v40 = (_QWORD *)(v33 + 48);
                    if ( v33 != -48 )
                    {
                      KeEnterCriticalRegion();
                      v41 = 0LL;
                      v226 = KeGetCurrentThread();
                      if ( !(unsigned __int8)KeIsAttachedProcess(v42)
                        || (v187 = PsGetCurrentProcess(v44, v43),
                            v188 = PsGetProcessSessionIdEx(v187),
                            v190 = PsGetCurrentThreadProcess(v189),
                            v178 = v188 == (unsigned int)PsGetProcessSessionIdEx(v190),
                            v41 = 0LL,
                            v178) )
                      {
                        v45 = (__int64 *)PsGetThreadWin32Thread(v226);
                        if ( v45 )
                          v41 = *v45;
                      }
                      *(_QWORD *)(v33 + 64) = v33;
                      *(_QWORD *)(v33 + 72) = CleanUpRegion;
                      if ( v41 )
                      {
                        v46 = *(_QWORD *)(v41 + 88);
                        v47 = (_QWORD *)(v41 + 88);
                        if ( *(_QWORD *)(v46 + 8) != v41 + 88 )
                          goto LABEL_375;
                        *v40 = v46;
                        *(_QWORD *)(v33 + 56) = v47;
                        *(_QWORD *)(v46 + 8) = v40;
                        *v47 = v40;
                      }
                      else
                      {
                        *(_QWORD *)(v33 + 56) = v33 + 48;
                        *v40 = v40;
                      }
                      KeLeaveCriticalRegion();
                    }
                  }
                }
              }
              if ( v33 )
              {
                v48 = v225;
                *(_DWORD *)(v33 + 80) = *(_DWORD *)(v225 + 80);
                *(_DWORD *)(v33 + 84) = *(_DWORD *)(v48 + 84);
                *(_OWORD *)(v33 + 96) = *(_OWORD *)(v48 + 96);
                memmove(*(void **)(v33 + 88), *(const void **)(v48 + 88), *(unsigned int *)(v48 + 80));
                v49 = v11 + 48;
                *(_QWORD *)(v33 + 40) = *(_QWORD *)(v33 + 88) + *(_DWORD *)(v48 + 40) - *(_DWORD *)(v48 + 88);
                v50 = *(_DWORD *)(v11 + 32);
                *(_DWORD *)(v11 + 32) = *(_DWORD *)(v33 + 32);
                *(_DWORD *)(v33 + 32) = v50;
                v51 = *(_DWORD *)(v11 + 36);
                *(_DWORD *)(v11 + 36) = *(_DWORD *)(v33 + 36);
                *(_DWORD *)(v33 + 36) = v51;
                v253 = *(_QWORD *)v49 == v49;
                v52 = v33 + 48;
                LODWORD(v225) = *(_QWORD *)v52 == v52;
                if ( v11 != -48 )
                {
                  KeEnterCriticalRegion();
                  v53 = *(_QWORD *)v49;
                  if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) != v49 )
                    goto LABEL_375;
                  v54 = *(_QWORD **)(v11 + 56);
                  if ( *v54 != v49 )
                    goto LABEL_375;
                  *v54 = v53;
                  *(_QWORD *)(v53 + 8) = v54;
                  *(_QWORD *)(v11 + 56) = v11 + 48;
                  *(_QWORD *)v49 = v49;
                  KeLeaveCriticalRegion();
                }
                if ( v33 != -48 )
                {
                  KeEnterCriticalRegion();
                  v55 = *(_QWORD *)v52;
                  if ( *(_QWORD *)(*(_QWORD *)v52 + 8LL) != v52 )
                    goto LABEL_375;
                  v56 = *(_QWORD **)(v33 + 56);
                  if ( *v56 != v52 )
                    goto LABEL_375;
                  *v56 = v55;
                  *(_QWORD *)(v55 + 8) = v56;
                  *(_QWORD *)(v33 + 56) = v33 + 48;
                  *(_QWORD *)v52 = v52;
                  KeLeaveCriticalRegion();
                }
                v57 = KeGetCurrentThread();
                v223 = v33;
                if ( !(unsigned int)IsThreadCrossSessionAttached() )
                {
                  v59 = (_QWORD *)PsGetThreadWin32Thread(v57);
                  if ( v59 )
                  {
                    if ( *v59 )
                    {
                      if ( !v253 && v33 != -48 )
                      {
                        KeEnterCriticalRegion();
                        v60 = 0LL;
                        v226 = KeGetCurrentThread();
                        if ( !(unsigned __int8)KeIsAttachedProcess(v61)
                          || (v192 = PsGetCurrentProcess(v63, v62),
                              v193 = PsGetProcessSessionIdEx(v192),
                              v195 = PsGetCurrentThreadProcess(v194),
                              v178 = v193 == (unsigned int)PsGetProcessSessionIdEx(v195),
                              v60 = 0LL,
                              v178) )
                        {
                          v64 = (__int64 *)PsGetThreadWin32Thread(v226);
                          if ( v64 )
                            v60 = *v64;
                        }
                        *(_QWORD *)(v33 + 64) = v33;
                        *(_QWORD *)(v33 + 72) = CleanUpRegion;
                        if ( v60 )
                        {
                          v65 = *(_QWORD *)(v60 + 88);
                          v66 = (__int64 *)(v60 + 88);
                          if ( *(_QWORD *)(v65 + 8) != v60 + 88 )
                            goto LABEL_375;
                          *(_QWORD *)v52 = v65;
                          *(_QWORD *)(v33 + 56) = v66;
                          *(_QWORD *)(v65 + 8) = v52;
                          *v66 = v52;
                        }
                        else
                        {
                          *(_QWORD *)(v33 + 56) = v33 + 48;
                          *(_QWORD *)v52 = v52;
                        }
                        KeLeaveCriticalRegion();
                      }
                      if ( !(_DWORD)v225 )
                      {
                        if ( v11 == -48 )
                        {
LABEL_98:
                          if ( (struct REGION *)v11 != prgnDefault )
                          {
                            v77 = *(_QWORD *)(v11 + 88);
                            if ( v77 )
                            {
                              if ( *(_DWORD *)(v11 + 24) == 112 )
                              {
                                v78 = RGNMEMOBJ::s_pSCANLookAsideList;
                                if ( qword_1C0252C60 && (int)qword_1C0252C60() >= 0 && qword_1C0252C68 )
                                  qword_1C0252C68(v78, v77);
                              }
                              else if ( *(_DWORD *)(v11 + 24) > 0x70u )
                              {
                                Win32FreePool(*(_QWORD *)(v11 + 88));
                              }
                              *(_QWORD *)(v11 + 88) = 0LL;
                            }
                            v79 = gpTypeIsolation[7];
                            if ( v79 )
                              NSInstrumentation::CTypeIsolation<28672,112>::Free(v79, v11);
                          }
                          v26 = v227;
                          v7 = a1;
                          goto LABEL_109;
                        }
                        KeEnterCriticalRegion();
                        v67 = KeGetCurrentThread();
                        v68 = 0LL;
                        if ( !(unsigned __int8)KeIsAttachedProcess(v69)
                          || (v196 = PsGetCurrentProcess(v71, v70),
                              v197 = PsGetProcessSessionIdEx(v196),
                              v199 = PsGetCurrentThreadProcess(v198),
                              v197 == (unsigned int)PsGetProcessSessionIdEx(v199)) )
                        {
                          v72 = (__int64 *)PsGetThreadWin32Thread(v67);
                          if ( v72 )
                            v68 = *v72;
                        }
                        *(_QWORD *)(v11 + 64) = v11;
                        *(_QWORD *)(v11 + 72) = CleanUpRegion;
                        if ( v68 )
                        {
                          v73 = *(_QWORD *)(v68 + 88);
                          v74 = (__int64 *)(v68 + 88);
                          if ( *(_QWORD *)(v73 + 8) != v68 + 88 )
                            goto LABEL_375;
                          *(_QWORD *)v49 = v73;
                          *(_QWORD *)(v11 + 56) = v74;
                          *(_QWORD *)(v73 + 8) = v49;
                          *v74 = v49;
                        }
                        else
                        {
                          *(_QWORD *)(v11 + 56) = v11 + 48;
                          *(_QWORD *)v49 = v49;
                        }
                        KeLeaveCriticalRegion();
                      }
                    }
                  }
                }
                if ( v11 != -48 )
                {
                  KeEnterCriticalRegion();
                  v75 = *(_QWORD *)v49;
                  if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) != v49 )
                    goto LABEL_375;
                  v76 = *(_QWORD **)(v11 + 56);
                  if ( *v76 != v49 )
                    goto LABEL_375;
                  *v76 = v75;
                  *(_QWORD *)(v75 + 8) = v76;
                  *(_QWORD *)(v11 + 56) = v11 + 48;
                  *(_QWORD *)v49 = v49;
                  KeLeaveCriticalRegion();
                }
                goto LABEL_98;
              }
              goto LABEL_316;
            }
            REGION::vDeleteREGION((REGION *)v33);
          }
          v33 = 0LL;
          goto LABEL_50;
        }
        if ( v229[5].m128i_i32[0] == 56 && RGNOBJ::bContain((RGNOBJ *)&v229, (struct RGNOBJ *)&v227) )
        {
          v157 = (struct RGNOBJ *)&v229;
          if ( (_DWORD)v4 == 1 )
            v157 = (struct RGNOBJ *)&v227;
          if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v223, v157) )
            goto LABEL_250;
          v80 = v223;
        }
        else
        {
LABEL_261:
          if ( (_DWORD)v4 == 1 && v26[5].m128i_i32[0] == 56 && v229[5].m128i_i32[0] == 56 )
          {
            v160 = v26[6];
            v232 = 0LL;
            v161 = v229[6];
            v162 = v160.m128i_i64[0];
            v163 = v229[6].m128i_u64[0];
            v58 = v161.m128i_u32[0];
            v250 = v160;
            if ( v160.m128i_i32[0] > (int)v163 )
              v58 = v160.m128i_u32[0];
            v164 = _mm_srli_si128(v160, 8).m128i_u64[0];
            v232.left = v58;
            v251 = v161;
            v165 = _mm_srli_si128(v161, 8).m128i_u64[0];
            v166 = v165;
            if ( (int)v164 < (int)v165 )
              v166 = v164;
            v167 = HIDWORD(v162);
            v168 = HIDWORD(v163);
            v232.right = v166;
            if ( (int)v167 > (int)v168 )
              LODWORD(v168) = v167;
            v169 = HIDWORD(v165);
            v232.top = v168;
            if ( SHIDWORD(v164) < SHIDWORD(v165) )
              LODWORD(v169) = HIDWORD(v164);
            v232.bottom = v169;
            if ( (int)v168 >= (int)v169 || (int)v58 >= v166 )
            {
              v171 = *(_QWORD *)(v11 + 88);
              v80 = v223;
              *(_DWORD *)(v11 + 80) = 16;
              *(_DWORD *)(v11 + 84) = 1;
              *(_QWORD *)(v11 + 96) = 0LL;
              *(_QWORD *)(v11 + 104) = 0LL;
              *(_DWORD *)v171 = 0;
              *(_DWORD *)(v171 + 4) = 0x80000000;
              *(_QWORD *)(v171 + 8) = 0x7FFFFFFFLL;
              *(_QWORD *)(v11 + 40) = v171 + 16;
            }
            else
            {
              RGNOBJ::vSet((RGNOBJ *)&v223, &v232);
              v80 = v223;
            }
LABEL_118:
            if ( v7 == a2 )
            {
              v83 = v26->m128i_i32[0];
              v84 = v26->m128i_i32[0];
              v231 = 0LL;
              v85 = (unsigned __int16)v83 | (v84 >> 8) & 0xFF0000;
              CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v231);
              if ( (!(unsigned __int8)KeIsAttachedProcess(v87)
                 || (v201 = PsGetCurrentProcess(v89, v88),
                     v202 = PsGetProcessSessionIdEx(v201),
                     v204 = PsGetCurrentThreadProcess(v203),
                     v202 == (unsigned int)PsGetProcessSessionIdEx(v204)))
                && CurrentThreadWin32ThreadAndEnterCriticalRegion
                && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
              {
                v90 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
              }
              else
              {
                v90 = 0LL;
              }
              v243 = 1;
              v91 = gpHandleManager;
              v225 = v90;
              if ( v85 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  Entry = GdiHandleEntryDirectory::GetEntry(
                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                            (unsigned __int16)v85,
                            1);
                  v90 = v225;
                  if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v85) )
                    v85 = (unsigned __int16)v85;
                }
                else
                {
                  v85 = (unsigned __int16)v85;
                }
              }
              v92 = *((_QWORD *)v91 + 2);
              v93 = *(_DWORD *)(v92 + 2056);
              if ( v85 >= v93 + ((*(unsigned __int16 *)(v92 + 2) + 0xFFFF) << 16) )
                goto LABEL_373;
              if ( v85 >= v93 )
                v94 = ((v85 - v93) >> 16) + 1;
              else
                v94 = 0;
              v95 = 1;
              v96 = *(_QWORD *)(v92 + 8LL * v94 + 8);
              if ( v94 )
                v85 += ((1 - v94) << 16) - v93;
              v97 = 0LL;
              if ( v85 < *(_DWORD *)(v96 + 20) )
              {
                v236 = 16LL * (unsigned __int8)v85;
                v98 = *(_QWORD **)(v96 + 24);
                v235 = 8 * ((unsigned __int64)v85 >> 8);
                v226 = (struct _KTHREAD *)(v236 + *(_QWORD *)(*v98 + v235));
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx(v226, 0LL);
                if ( v85 < *(_DWORD *)(v96 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v96 + 24) + v235) + v236 + 8) )
                {
                  v99 = 24LL * v85;
                  *(_DWORD *)(*(_QWORD *)v96 + v99 + 8) |= 1u;
                  v97 = v99 + *(_QWORD *)v96;
                }
                else
                {
                  ExReleasePushLockExclusiveEx(v226, 0LL);
                  KeLeaveCriticalRegion();
                }
                v90 = v225;
              }
              v242 = (_DWORD *)v97;
              if ( v97 )
              {
                _m_prefetchw((const void *)(v97 + 8));
                v244 = *(_DWORD *)(v97 + 8);
                v100 = v244 & 0xFFFFFFFE;
                if ( (v244 & 0xFFFFFFFE) == (v231 & 0xFFFFFFFC) || !v100 || v90 && v100 == *(_DWORD *)(v90 + 8) )
                {
                  v101 = *(_BYTE *)(v97 + 15);
                  if ( (v101 & 0x20) == 0 )
                  {
                    if ( (v101 & 0x40) == 0 )
                      goto LABEL_140;
                    v206 = *(_DWORD *)v97;
                    v207 = gpHandleManager;
                    v208 = GdiHandleManager::DecodeIndex(gpHandleManager, v206 & 0xFFFFFF);
                    v209 = *((_QWORD *)v207 + 2);
                    v210 = v208;
                    v211 = *(_DWORD *)(v209 + 2056);
                    if ( v208 >= v211 + ((*(unsigned __int16 *)(v209 + 2) + 0xFFFF) << 16) )
                      goto LABEL_350;
                    if ( v208 >= v211 )
                      v212 = ((v208 - v211) >> 16) + 1;
                    else
                      v212 = 0;
                    v213 = *(_QWORD *)(v209 + 8LL * v212 + 8);
                    if ( v212 )
                      v210 = ((1 - v212) << 16) - v211 + v208;
                    if ( (unsigned int)v210 >= *(_DWORD *)(v213 + 20) )
LABEL_350:
                      v214 = 0LL;
                    else
                      v214 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v213 + 24) + 8 * (v210 >> 8))
                                       + 16LL * (unsigned __int8)v210
                                       + 8);
                    if ( *(_WORD *)(v214 + 12) )
                    {
                      v80 = v223;
                      v26 = v227;
                      if ( *(struct _KTHREAD **)(v214 + 16) == KeGetCurrentThread() )
                        goto LABEL_140;
                    }
                  }
                }
                HANDLELOCK::vUnlock((HANDLELOCK *)&v242);
                if ( v243 )
                {
LABEL_140:
                  v102 = v26->m128i_i16[7];
                  v103 = *(_OWORD *)v80;
                  v104 = *(_WORD *)(v80 + 14);
                  v241 = *(_QWORD *)(v80 + 16);
                  *(_WORD *)(v80 + 14) = v104 & 0x8000 | v102 & 0x4000;
                  v105 = v26->m128i_i64[0];
                  v26->m128i_i16[7] = v102 & 0x8000 | v104 & 0x4000;
                  *(_QWORD *)v80 = v105;
                  *(_WORD *)(v80 + 12) = v26->m128i_i16[6];
                  *(_DWORD *)(v80 + 8) = v26->m128i_i32[2];
                  *(_QWORD *)(v80 + 16) = v26[1].m128i_i64[0];
                  v106 = gpHandleManager;
                  v107 = (unsigned __int16)v26->m128i_i32[0] | ((unsigned __int32)v26->m128i_i32[0] >> 8) & 0xFF0000;
                  v240 = v103;
                  if ( v107 >= 0x10000 )
                  {
                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                    {
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                  (unsigned __int16)v107,
                                                  1)
                           + 13) == HIWORD(v107) )
                        v107 = (unsigned __int16)v107;
                    }
                    else
                    {
                      v107 = (unsigned __int16)v107;
                    }
                  }
                  v108 = *((_QWORD *)v106 + 2);
                  v109 = *(_DWORD *)(v108 + 2056);
                  if ( v107 < v109 + ((*(unsigned __int16 *)(v108 + 2) + 0xFFFF) << 16) )
                  {
                    if ( v107 >= v109 )
                      v110 = ((v107 - v109) >> 16) + 1;
                    else
                      v110 = 0;
                    v111 = *(_QWORD *)(v108 + 8LL * v110 + 8);
                    if ( v110 )
                      v107 += ((1 - v110) << 16) - v109;
                    if ( v107 < *(_DWORD *)(v111 + 20) )
                      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v111 + 24) + 8 * ((unsigned __int64)v107 >> 8))
                                + 16LL * (unsigned __int8)v107
                                + 8) = v80;
                  }
                  v26->m128i_i64[0] = v240;
                  v26->m128i_i16[6] = WORD6(v240);
                  v26->m128i_i32[2] = DWORD2(v240);
                  v26[1].m128i_i64[0] = v241;
                  v112 = *v242 & 0xFFFFFF;
                  if ( v112 >= 0x10000 )
                  {
                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                    {
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                  *(unsigned __int16 *)v242,
                                                  1)
                           + 13) == HIWORD(v112) )
                        v112 = (unsigned __int16)v112;
                    }
                    else
                    {
                      v112 = *(unsigned __int16 *)v242;
                    }
                  }
                  v113 = gpHandleManager;
                  v114 = *((_QWORD *)gpHandleManager + 2);
                  v115 = *(_DWORD *)(v114 + 2056);
                  if ( v112 >= v115 + ((*(unsigned __int16 *)(v114 + 2) + 0xFFFF) << 16) )
                    goto LABEL_363;
                  if ( v112 >= v115 )
                    v116 = ((v112 - v115) >> 16) + 1;
                  else
                    v116 = 0;
                  v117 = *(_QWORD *)(v114 + 8LL * v116 + 8);
                  if ( v116 )
                    v112 += ((1 - v116) << 16) - v115;
                  if ( v112 >= *(_DWORD *)(v117 + 20) )
LABEL_363:
                    v118 = 0LL;
                  else
                    v118 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v117 + 24) + 8 * ((unsigned __int64)v112 >> 8))
                                      + 16LL * (unsigned __int8)v112
                                      + 8);
                  v119 = (unsigned __int16)*v118 | (*v118 >> 8) & 0xFF0000;
                  if ( v119 >= 0x10000 )
                  {
                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                    {
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                  (unsigned __int16)*v118,
                                                  1)
                           + 13) == HIWORD(v119) )
                        v119 = (unsigned __int16)v119;
                    }
                    else
                    {
                      v119 = (unsigned __int16)*v118;
                    }
                  }
                  v120 = *((_QWORD *)v113 + 2);
                  v121 = *(_DWORD *)(v120 + 2056);
                  if ( v119 < v121 + ((*(unsigned __int16 *)(v120 + 2) + 0xFFFF) << 16) )
                  {
                    if ( v119 >= v121 )
                      v122 = ((v119 - v121) >> 16) + 1;
                    else
                      v122 = 0;
                    v123 = *(_QWORD *)(v120 + 8LL * v122 + 8);
                    if ( v122 )
                      v119 += ((1 - v122) << 16) - v121;
                    *(_DWORD *)(*(_QWORD *)v123 + 24LL * v119 + 8) &= ~1u;
                    ExReleasePushLockExclusiveEx(
                      *(_QWORD *)(**(_QWORD **)(v123 + 24) + 8 * ((unsigned __int64)v119 >> 8))
                    + 16LL * (unsigned __int8)v119,
                      0LL);
                    KeLeaveCriticalRegion();
                  }
                  KeLeaveCriticalRegion();
                  v124 = v26[2].m128i_i32[0];
                  v125 = v26 + 3;
                  v26[2].m128i_i32[0] = *(_DWORD *)(v80 + 32);
                  *(_DWORD *)(v80 + 32) = v124;
                  v126 = v26[2].m128i_u32[1];
                  v26[2].m128i_i32[1] = *(_DWORD *)(v80 + 36);
                  *(_DWORD *)(v80 + 36) = v126;
                  v127 = v125->m128i_i64[0] == (_QWORD)v125;
                  v128 = (__int64 *)(v80 + 48);
                  if ( (__int64 *)*v128 != v128 )
                    v95 = 0;
                  if ( v26 != (__m128i *)-48LL )
                  {
                    KeEnterCriticalRegion();
                    v129 = v125->m128i_i64[0];
                    if ( *(__m128i **)(v125->m128i_i64[0] + 8) != v125 )
                      goto LABEL_375;
                    v130 = (__m128i **)v26[3].m128i_i64[1];
                    if ( *v130 != v125 )
                      goto LABEL_375;
                    *v130 = (__m128i *)v129;
                    *(_QWORD *)(v129 + 8) = v130;
                    v26[3].m128i_i64[1] = (__int64)v26[3].m128i_i64;
                    v125->m128i_i64[0] = (__int64)v125;
                    KeLeaveCriticalRegion();
                  }
                  if ( v80 != -48 )
                  {
                    KeEnterCriticalRegion();
                    v131 = (__int64 *)*v128;
                    if ( *(__int64 **)(*v128 + 8) != v128 )
                      goto LABEL_375;
                    v132 = *(__int64 ***)(v80 + 56);
                    if ( *v132 != v128 )
                      goto LABEL_375;
                    *v132 = v131;
                    v131[1] = (__int64)v132;
                    *(_QWORD *)(v80 + 56) = v80 + 48;
                    *v128 = (__int64)v128;
                    KeLeaveCriticalRegion();
                  }
                  v227 = (__m128i *)v80;
                  v133 = KeGetCurrentThread();
                  v223 = (__int64)v26;
                  if ( (!(unsigned __int8)KeIsAttachedProcess(v126)
                     || (v215 = PsGetCurrentProcess(v135, v134),
                         v216 = PsGetProcessSessionIdEx(v215),
                         v218 = PsGetCurrentThreadProcess(v217),
                         v216 == (unsigned int)PsGetProcessSessionIdEx(v218)))
                    && (v136 = (_QWORD *)PsGetThreadWin32Thread(v133)) != 0LL
                    && *v136 )
                  {
                    v26 = v227;
                    if ( !v127 )
                      PushThreadGuardedObject(&v227[3], v227, CleanUpRegion);
                    v80 = v223;
                    if ( v95 )
                      goto LABEL_194;
                    v137 = (_QWORD *)(v223 + 48);
                    if ( v223 == -48 )
                      goto LABEL_194;
                    KeEnterCriticalRegion();
                    v138 = KeGetCurrentThread();
                    v139 = 0LL;
                    if ( !(unsigned __int8)KeIsAttachedProcess(v140)
                      || (v219 = PsGetCurrentProcess(v142, v141),
                          v220 = PsGetProcessSessionIdEx(v219),
                          v222 = PsGetCurrentThreadProcess(v221),
                          v220 == (unsigned int)PsGetProcessSessionIdEx(v222)) )
                    {
                      v143 = (__int64 *)PsGetThreadWin32Thread(v138);
                      if ( v143 )
                        v139 = *v143;
                    }
                    v80 = v223;
                    v137[2] = v223;
                    v137[3] = CleanUpRegion;
                    if ( v139 )
                    {
                      v144 = *(_QWORD *)(v139 + 88);
                      v145 = (_QWORD *)(v139 + 88);
                      if ( *(_QWORD *)(v144 + 8) != v139 + 88 )
                        goto LABEL_375;
                      *v137 = v144;
                      v137[1] = v145;
                      *(_QWORD *)(v144 + 8) = v137;
                      *v145 = v137;
                    }
                    else
                    {
                      v137[1] = v137;
                      *v137 = v137;
                    }
                    KeLeaveCriticalRegion();
                  }
                  else
                  {
                    v80 = v223;
                  }
                  v26 = v227;
LABEL_194:
                  if ( v26[5].m128i_i32[1] == 1 )
                  {
                    v254 = 1;
                  }
                  else if ( v26[5].m128i_i32[0] <= 0x38u )
                  {
                    v254 = 2;
                  }
                  else
                  {
                    v254 = 3;
                  }
                  goto LABEL_197;
                }
              }
              else
              {
LABEL_373:
                KeLeaveCriticalRegion();
              }
            }
            else
            {
              if ( (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)&v229, (struct RGNOBJ *)&v223, v58) )
              {
                v170 = RGNOBJ::iComplexity((RGNOBJ *)&v229);
                v80 = v223;
                v254 = v170;
LABEL_197:
                if ( !(_DWORD)v230 )
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)&v229);
                if ( v229 )
                {
                  _InterlockedDecrement(&v229->m128i_i32[3]);
                  v80 = v223;
                  v26 = v227;
                }
                if ( !(_DWORD)v228 )
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)&v227);
                if ( v26 )
                {
                  _InterlockedDecrement(&v26->m128i_i32[3]);
                  v80 = v223;
                }
                if ( !v80 )
                  goto LABEL_221;
                v146 = (__int64 *)(v80 + 48);
                if ( v80 == -48 )
                {
LABEL_210:
                  if ( (struct REGION *)v80 != prgnDefault )
                  {
                    v149 = *(_QWORD *)(v80 + 88);
                    if ( v149 )
                    {
                      if ( *(_DWORD *)(v80 + 24) == 112 )
                      {
                        v156 = RGNMEMOBJ::s_pSCANLookAsideList;
                        if ( qword_1C0252C60 && (int)qword_1C0252C60() >= 0 && qword_1C0252C68 )
                          qword_1C0252C68(v156, v149);
                      }
                      else if ( *(_DWORD *)(v80 + 24) > 0x70u
                             && qword_1C0252C00
                             && (int)qword_1C0252C00() >= 0
                             && qword_1C0252C08 )
                      {
                        qword_1C0252C08(v149);
                      }
                      *(_QWORD *)(v80 + 88) = 0LL;
                    }
                    v150 = gpTypeIsolation[7];
                    if ( v150 )
                      NSInstrumentation::CTypeIsolation<28672,112>::Free(v150, v80);
                  }
LABEL_221:
                  if ( (_DWORD)v224 == 1 )
                    REGION::vDeleteREGION(0LL);
                  return v254;
                }
                KeEnterCriticalRegion();
                v147 = (__int64 *)*v146;
                if ( *(__int64 **)(*v146 + 8) == v146 )
                {
                  v148 = *(__int64 ***)(v80 + 56);
                  if ( *v148 == v146 )
                  {
                    *v148 = v147;
                    v147[1] = (__int64)v148;
                    *(_QWORD *)(v80 + 56) = v80 + 48;
                    *v146 = (__int64)v146;
                    KeLeaveCriticalRegion();
                    goto LABEL_210;
                  }
                }
LABEL_375:
                __fastfail(3u);
              }
              v80 = v223;
            }
LABEL_321:
            v254 = 0;
            goto LABEL_197;
          }
          v82 = RGNOBJ::bMerge((RGNOBJ *)&v223, (struct RGNOBJ *)&v227, (struct RGNOBJ *)&v229, byte_1C0213B90[v4]);
          v80 = v223;
          if ( v82 )
          {
            if ( *(_DWORD *)(v223 + 84) != 1 )
            {
              if ( *(_DWORD *)(v223 + 80) <= 0x38u )
                goto LABEL_111;
LABEL_116:
              v81 = 3;
              goto LABEL_117;
            }
            v81 = 1;
LABEL_117:
            if ( v81 )
              goto LABEL_118;
            goto LABEL_318;
          }
        }
        *(_DWORD *)(v80 + 80) = 16;
        *(_DWORD *)(v80 + 84) = 1;
        *(_QWORD *)(v80 + 96) = 0LL;
        *(_QWORD *)(v80 + 104) = 0LL;
        v200 = *(_QWORD *)(v80 + 88);
        *(_DWORD *)v200 = 0;
        *(_DWORD *)(v200 + 4) = 0x80000000;
        *(_QWORD *)(v200 + 8) = 0x7FFFFFFFLL;
        *(_QWORD *)(v80 + 40) = v200 + 16;
        goto LABEL_318;
      }
LABEL_250:
      v81 = RGNOBJ::iComplexity((RGNOBJ *)&v223);
      v80 = v223;
      goto LABEL_117;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v233, a1, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v237, a2, 1);
    v153 = v233[0];
    v154 = v237[0];
    if ( v233[0] )
    {
      if ( !v237[0] )
      {
LABEL_283:
        EngSetLastError(6u);
LABEL_284:
        v151 = 0;
LABEL_230:
        if ( !v238 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v237);
        if ( v154 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v154 + 12));
          v153 = v233[0];
        }
        if ( !v234 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v233);
        if ( v153 )
          _InterlockedDecrement((volatile signed __int32 *)(v153 + 12));
        return v151;
      }
      v155 = RGNOBJAPI::bCopy((RGNOBJAPI *)v233, (struct RGNOBJ *)v237);
      v153 = v233[0];
      if ( v155 )
      {
        if ( *(_DWORD *)(v233[0] + 84LL) == 1 )
          v151 = 1;
        else
          v151 = (*(_DWORD *)(v233[0] + 80LL) > 0x38u) + 2;
        goto LABEL_230;
      }
    }
    if ( v154 && v153 )
      goto LABEL_284;
    goto LABEL_283;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
