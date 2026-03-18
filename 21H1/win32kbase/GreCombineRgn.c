/*
 * XREFs of GreCombineRgn @ 0x1C007DB50
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0032DA8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiCombineRgn @ 0x1C003A070 (NtGdiCombineRgn.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C00A7F90 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C00A8120 (UserValidateCopyRgn.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C00A9FC8 (-UpdateUserScreen@@YAJXZ.c)
 *     EngCombineRgn @ 0x1C0155280 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C0155320 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C0155610 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C0155810 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C01558B0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0155950 (EngXorRgn.c)
 * Callees:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0016C30 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0074EF0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00751E0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C00752C0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0075C60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0075D5C (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0075DA0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C0075F40 (Win32AllocateFromPagedLookasideList.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C007A650 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007B944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C007EF80 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C007F140 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C007FF20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PushThreadGuardedObject @ 0x1C009ADD0 (PushThreadGuardedObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0129144 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0148A4C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  __m128i *v28; // rsi
  unsigned int v29; // r8d
  struct RGNOBJ *v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // edi
  unsigned __int8 *v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  struct _KTHREAD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  int v52; // ecx
  int v53; // ecx
  __int64 v54; // r12
  __int64 v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rcx
  struct _KTHREAD *v59; // rdi
  _QWORD *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 *v65; // rax
  __int64 v66; // rcx
  __int64 *v67; // rax
  struct _KTHREAD *v68; // r12
  __int64 v69; // rdi
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 *v73; // rax
  __int64 v74; // rcx
  __int64 *v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rcx
  __int64 v78; // rbx
  void *v79; // rdi
  unsigned __int8 *v80; // rcx
  __int64 v81; // rdi
  int v82; // eax
  int v83; // eax
  __int32 v84; // eax
  unsigned __int32 v85; // r14d
  unsigned int v86; // r14d
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r13
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  GdiHandleManager *v92; // r12
  __int64 v93; // r12
  unsigned int v94; // edx
  unsigned int v95; // ecx
  int v96; // r13d
  __int64 v97; // r12
  __int64 v98; // rbx
  _QWORD *v99; // rax
  __int64 v100; // rcx
  unsigned int v101; // ecx
  char v102; // al
  __int16 v103; // dx
  __int128 v104; // xmm0
  __int16 v105; // r8
  __int64 v106; // rax
  GdiHandleManager *v107; // r12
  unsigned int v108; // ebx
  __int64 v109; // rcx
  unsigned int v110; // r9d
  unsigned int v111; // edx
  __int64 v112; // r8
  unsigned int v113; // ebx
  GdiHandleManager *v114; // r14
  __int64 v115; // rcx
  unsigned int v116; // r8d
  unsigned int v117; // edx
  __int64 v118; // r9
  _DWORD *v119; // rdx
  unsigned int v120; // ebx
  __int64 v121; // rcx
  unsigned int v122; // r8d
  unsigned int v123; // edx
  __int64 v124; // r10
  __int32 v125; // ecx
  __m128i *v126; // r14
  __int64 v127; // rcx
  BOOL v128; // r12d
  __int64 *v129; // rbx
  __int64 v130; // rax
  __m128i **v131; // rcx
  __int64 *v132; // rax
  __int64 **v133; // rcx
  struct _KTHREAD *v134; // rdi
  __int64 v135; // rdx
  __int64 v136; // rcx
  _QWORD *v137; // rax
  _QWORD *v138; // r14
  struct _KTHREAD *v139; // rdi
  __int64 v140; // rsi
  __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 *v144; // rax
  __int64 v145; // rcx
  _QWORD *v146; // rax
  __m128i *v147; // rcx
  __int64 *v148; // rbx
  __int64 *v149; // rax
  __int64 **v150; // rcx
  __int64 v151; // rbx
  unsigned __int8 *v152; // rcx
  unsigned int v153; // edi
  __int64 v155; // rbx
  __int64 v156; // rsi
  int v157; // eax
  void *v158; // rsi
  struct RGNOBJ *v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rax
  __m128i v162; // xmm1
  __m128i v163; // xmm0
  unsigned __int64 v164; // rax
  unsigned __int64 v165; // r9
  unsigned __int64 v166; // xmm1_8
  unsigned __int64 v167; // xmm0_8
  LONG v168; // edx
  unsigned __int64 v169; // rax
  unsigned __int64 v170; // r9
  unsigned __int64 v171; // r10
  unsigned int v172; // eax
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rax
  __int64 v176; // rax
  int v177; // ebx
  __int64 v178; // rcx
  __int64 v179; // rax
  bool v180; // zf
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v183; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v185; // rax
  int v186; // edi
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rax
  int v190; // edi
  __int64 v191; // rcx
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  int v195; // edi
  __int64 v196; // rcx
  __int64 v197; // rax
  __int64 v198; // rax
  int v199; // ebx
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  int v204; // ebx
  __int64 v205; // rcx
  __int64 v206; // rax
  struct _ENTRY *Entry; // rax
  int v208; // edx
  GdiHandleManager *v209; // rbx
  unsigned int v210; // eax
  __int64 v211; // r9
  unsigned __int64 v212; // rdx
  unsigned int v213; // r8d
  unsigned int v214; // ecx
  __int64 v215; // r10
  __int64 v216; // rdx
  __int64 v217; // rax
  int v218; // ebx
  __int64 v219; // rcx
  __int64 v220; // rax
  __int64 v221; // rax
  int v222; // ebx
  __int64 v223; // rcx
  __int64 v224; // rax
  __int64 v225; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v226; // [rsp+30h] [rbp-D8h]
  __int64 v227; // [rsp+38h] [rbp-D0h]
  struct _KTHREAD *v228; // [rsp+40h] [rbp-C8h]
  __m128i *v229; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v230; // [rsp+58h] [rbp-B0h]
  __m128i *v231; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v232; // [rsp+70h] [rbp-98h]
  __int64 v233; // [rsp+78h] [rbp-90h] BYREF
  struct _RECTL v234; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v235[2]; // [rsp+90h] [rbp-78h] BYREF
  int v236; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v237; // [rsp+A8h] [rbp-60h]
  __int64 v238; // [rsp+B0h] [rbp-58h]
  _QWORD v239[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v240; // [rsp+C8h] [rbp-40h]
  _QWORD v241[3]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v242; // [rsp+E8h] [rbp-20h]
  __int64 v243; // [rsp+F8h] [rbp-10h]
  _DWORD *v244; // [rsp+100h] [rbp-8h] BYREF
  int v245; // [rsp+108h] [rbp+0h]
  int v246; // [rsp+10Ch] [rbp+4h]
  _QWORD v247[3]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v248[3]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v249; // [rsp+148h] [rbp+40h] BYREF
  int v250; // [rsp+150h] [rbp+48h]
  _QWORD v251[3]; // [rsp+158h] [rbp+50h] BYREF
  __m128i v252; // [rsp+170h] [rbp+68h]
  __m128i v253; // [rsp+180h] [rbp+78h]
  BOOL v255; // [rsp+1F0h] [rbp+E8h]
  unsigned int v256; // [rsp+1F0h] [rbp+E8h]

  v4 = a4;
  v7 = a1;
  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 != 5 )
    {
      if ( a1 != a2 && a1 != a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v248, a2, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v247, a3, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v241, v7, 0);
        v160 = v248[0];
        if ( !v248[0] )
          goto LABEL_289;
        v161 = v247[0];
        if ( v247[0] && v241[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v241, (struct RGNOBJ *)v248, (struct RGNOBJ *)v247, v4) )
          {
            v153 = RGNOBJ::iComplexity((RGNOBJ *)v241);
LABEL_257:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v241);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v247);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v248);
            return v153;
          }
          v160 = v248[0];
          v161 = v247[0];
        }
        if ( !v160 || !v161 || !v241[0] )
LABEL_289:
          EngSetLastError(6u);
        v153 = 0;
        goto LABEL_257;
      }
      if ( a2 == a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v251, a1, 0);
        v174 = v251[0];
        if ( v251[0] )
        {
          if ( (unsigned int)(v4 - 3) <= 1 )
          {
            v175 = *(_QWORD *)(v251[0] + 88LL);
            *(_DWORD *)(v251[0] + 80LL) = 16;
            *(_DWORD *)(v174 + 84) = 1;
            *(_QWORD *)(v174 + 96) = 0LL;
            *(_QWORD *)(v174 + 104) = 0LL;
            *(_DWORD *)v175 = 0;
            *(_DWORD *)(v175 + 4) = 0x80000000;
            *(_QWORD *)(v175 + 8) = 0x7FFFFFFFLL;
            *(_QWORD *)(v174 + 40) = v175 + 16;
          }
          v153 = RGNOBJ::iComplexity((RGNOBJ *)v251);
        }
        else
        {
          EngSetLastError(6u);
          v153 = 0;
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v251);
        return v153;
      }
      LODWORD(v226) = 0;
      v8 = gpTypeIsolation[7];
      if ( v8 )
      {
        v11 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
        if ( !v11 )
          goto LABEL_12;
        v12 = RGNMEMOBJ::s_pSCANLookAsideList;
        if ( qword_1C0258C10 && (int)qword_1C0258C10(v8, v9, v10) >= 0 && qword_1C0258C18 )
          v13 = qword_1C0258C18(v12);
        else
          v13 = 0LL;
        *(_QWORD *)(v11 + 88) = v13;
        if ( v13 )
          goto LABEL_12;
        REGION::vDeleteREGION((REGION *)v11);
      }
      v11 = 0LL;
LABEL_12:
      v225 = v11;
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
        || (v176 = PsGetCurrentProcess(v16, v15),
            v177 = PsGetProcessSessionIdEx(v176),
            v179 = PsGetCurrentThreadProcess(v178),
            v180 = v177 == (unsigned int)PsGetProcessSessionIdEx(v179),
            v7 = a1,
            v180) )
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
                v228 = KeGetCurrentThread();
                if ( (!(unsigned __int8)KeIsAttachedProcess(v19)
                   || (CurrentProcess = PsGetCurrentProcess(v21, v20),
                       ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                       CurrentThreadProcess = PsGetCurrentThreadProcess(v183),
                       v180 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
                       v7 = a1,
                       v180))
                  && (v22 = (__int64 *)PsGetThreadWin32Thread(v228)) != 0LL )
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
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v229, a2, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v231, a3, 0);
      v28 = v229;
      if ( !v11 )
        goto LABEL_317;
      if ( !v229 )
      {
        v81 = v225;
LABEL_320:
        EngSetLastError(6u);
        goto LABEL_321;
      }
      if ( !v231 )
        goto LABEL_317;
      if ( (struct REGION *)v11 != prgnDefault )
      {
        if ( (unsigned int)(v4 - 1) > 1 )
          goto LABEL_261;
        if ( v229[5].m128i_i32[0] == 56
          && v229[6].m128i_i32[0] <= v231[6].m128i_i32[0]
          && v229[6].m128i_i32[2] >= v231[6].m128i_i32[2]
          && v229[6].m128i_i32[1] <= v231[6].m128i_i32[1]
          && v229[6].m128i_i32[3] >= v231[6].m128i_i32[3] )
        {
          v29 = *(_DWORD *)(v11 + 24);
          v30 = (struct RGNOBJ *)&v229;
          if ( (_DWORD)v4 == 1 )
            v30 = (struct RGNOBJ *)&v231;
          v31 = *(_QWORD *)v30;
          v227 = v31;
          v32 = *(_DWORD *)(v31 + 80);
          if ( (v29 >= v32 || *(_DWORD *)(v31 + 24) <= 0x70u) && (v29 <= 0x70 || *(_DWORD *)(v31 + 24) > 0x70u) )
          {
            RGNOBJ::vCopy((RGNOBJ *)&v225, v30);
LABEL_109:
            v81 = v225;
            if ( *(_DWORD *)(v225 + 84) != 1 )
            {
              if ( *(_DWORD *)(v225 + 80) <= 0x38u )
              {
LABEL_111:
                v82 = 2;
                goto LABEL_117;
              }
              goto LABEL_116;
            }
            v82 = 1;
            goto LABEL_117;
          }
          v33 = 112;
          v250 = 0;
          if ( v32 > 0x70 )
            v33 = v32;
          v34 = gpTypeIsolation[7];
          if ( v34 )
          {
            v35 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
            if ( !v35
              || (v33 == 112
                ? (v36 = Win32AllocateFromPagedLookasideList((__int64)RGNMEMOBJ::s_pSCANLookAsideList))
                : !qword_1C0258BD0 || (int)qword_1C0258BD0() < 0 || !qword_1C0258BD8
                ? (v36 = 0LL)
                : (v36 = qword_1C0258BD8(33LL, v33, 1852011335LL)),
                  (*(_QWORD *)(v35 + 88) = v36) != 0LL) )
            {
LABEL_50:
              v249 = v35;
              if ( v35 )
              {
                v37 = *(_QWORD *)(v35 + 88);
                *(_DWORD *)(v35 + 80) = 16;
                *(_DWORD *)(v35 + 84) = 1;
                *(_QWORD *)(v35 + 96) = 0LL;
                *(_QWORD *)(v35 + 104) = 0LL;
                *(_DWORD *)v37 = 0;
                *(_DWORD *)(v37 + 4) = 0x80000000;
                *(_QWORD *)(v37 + 8) = 0x7FFFFFFFLL;
                *(_QWORD *)(v35 + 40) = v37 + 16;
                *(_DWORD *)(v35 + 24) = v33;
                *(_QWORD *)(v35 + 28) = 0LL;
                *(_DWORD *)(v35 + 36) = 0;
                *(_QWORD *)(v35 + 56) = v35 + 48;
                *(_QWORD *)(v35 + 48) = v35 + 48;
              }
              v38 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v34)
                || (v185 = PsGetCurrentProcess(v40, v39),
                    v186 = PsGetProcessSessionIdEx(v185),
                    v188 = PsGetCurrentThreadProcess(v187),
                    v186 == (unsigned int)PsGetProcessSessionIdEx(v188)) )
              {
                v41 = (_QWORD *)PsGetThreadWin32Thread(v38);
                if ( v41 )
                {
                  if ( *v41 )
                  {
                    if ( !v35 )
                    {
LABEL_316:
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v249);
                      v193 = *(_QWORD *)(v11 + 88);
                      v28 = v229;
                      *(_DWORD *)(v11 + 80) = 16;
                      *(_DWORD *)(v11 + 84) = 1;
                      *(_QWORD *)(v11 + 96) = 0LL;
                      *(_QWORD *)(v11 + 104) = 0LL;
                      *(_DWORD *)v193 = 0;
                      *(_DWORD *)(v193 + 4) = 0x80000000;
                      *(_QWORD *)(v193 + 8) = 0x7FFFFFFFLL;
                      *(_QWORD *)(v11 + 40) = v193 + 16;
LABEL_317:
                      v81 = v225;
LABEL_318:
                      if ( v28 && v231 )
                        goto LABEL_321;
                      goto LABEL_320;
                    }
                    v42 = (_QWORD *)(v35 + 48);
                    if ( v35 != -48 )
                    {
                      KeEnterCriticalRegion();
                      v43 = 0LL;
                      v228 = KeGetCurrentThread();
                      if ( !(unsigned __int8)KeIsAttachedProcess(v44)
                        || (v189 = PsGetCurrentProcess(v46, v45),
                            v190 = PsGetProcessSessionIdEx(v189),
                            v192 = PsGetCurrentThreadProcess(v191),
                            v180 = v190 == (unsigned int)PsGetProcessSessionIdEx(v192),
                            v43 = 0LL,
                            v180) )
                      {
                        v47 = (__int64 *)PsGetThreadWin32Thread(v228);
                        if ( v47 )
                          v43 = *v47;
                      }
                      *(_QWORD *)(v35 + 64) = v35;
                      *(_QWORD *)(v35 + 72) = CleanUpRegion;
                      if ( v43 )
                      {
                        v48 = *(_QWORD *)(v43 + 88);
                        v49 = (_QWORD *)(v43 + 88);
                        if ( *(_QWORD *)(v48 + 8) != v43 + 88 )
                          goto LABEL_375;
                        *v42 = v48;
                        *(_QWORD *)(v35 + 56) = v49;
                        *(_QWORD *)(v48 + 8) = v42;
                        *v49 = v42;
                      }
                      else
                      {
                        *(_QWORD *)(v35 + 56) = v35 + 48;
                        *v42 = v42;
                      }
                      KeLeaveCriticalRegion();
                    }
                  }
                }
              }
              if ( v35 )
              {
                v50 = v227;
                *(_DWORD *)(v35 + 80) = *(_DWORD *)(v227 + 80);
                *(_DWORD *)(v35 + 84) = *(_DWORD *)(v50 + 84);
                *(_OWORD *)(v35 + 96) = *(_OWORD *)(v50 + 96);
                memmove(*(void **)(v35 + 88), *(const void **)(v50 + 88), *(unsigned int *)(v50 + 80));
                v51 = v11 + 48;
                *(_QWORD *)(v35 + 40) = *(_QWORD *)(v35 + 88) + *(_DWORD *)(v50 + 40) - *(_DWORD *)(v50 + 88);
                v52 = *(_DWORD *)(v11 + 32);
                *(_DWORD *)(v11 + 32) = *(_DWORD *)(v35 + 32);
                *(_DWORD *)(v35 + 32) = v52;
                v53 = *(_DWORD *)(v11 + 36);
                *(_DWORD *)(v11 + 36) = *(_DWORD *)(v35 + 36);
                *(_DWORD *)(v35 + 36) = v53;
                v255 = *(_QWORD *)v51 == v51;
                v54 = v35 + 48;
                LODWORD(v227) = *(_QWORD *)v54 == v54;
                if ( v11 != -48 )
                {
                  KeEnterCriticalRegion();
                  v55 = *(_QWORD *)v51;
                  if ( *(_QWORD *)(*(_QWORD *)v51 + 8LL) != v51 )
                    goto LABEL_375;
                  v56 = *(_QWORD **)(v11 + 56);
                  if ( *v56 != v51 )
                    goto LABEL_375;
                  *v56 = v55;
                  *(_QWORD *)(v55 + 8) = v56;
                  *(_QWORD *)(v11 + 56) = v11 + 48;
                  *(_QWORD *)v51 = v51;
                  KeLeaveCriticalRegion();
                }
                if ( v35 != -48 )
                {
                  KeEnterCriticalRegion();
                  v57 = *(_QWORD *)v54;
                  if ( *(_QWORD *)(*(_QWORD *)v54 + 8LL) != v54 )
                    goto LABEL_375;
                  v58 = *(_QWORD **)(v35 + 56);
                  if ( *v58 != v54 )
                    goto LABEL_375;
                  *v58 = v57;
                  *(_QWORD *)(v57 + 8) = v58;
                  *(_QWORD *)(v35 + 56) = v35 + 48;
                  *(_QWORD *)v54 = v54;
                  KeLeaveCriticalRegion();
                }
                v59 = KeGetCurrentThread();
                v225 = v35;
                if ( !(unsigned int)IsThreadCrossSessionAttached() )
                {
                  v60 = (_QWORD *)PsGetThreadWin32Thread(v59);
                  if ( v60 )
                  {
                    if ( *v60 )
                    {
                      if ( !v255 && v35 != -48 )
                      {
                        KeEnterCriticalRegion();
                        v61 = 0LL;
                        v228 = KeGetCurrentThread();
                        if ( !(unsigned __int8)KeIsAttachedProcess(v62)
                          || (v194 = PsGetCurrentProcess(v64, v63),
                              v195 = PsGetProcessSessionIdEx(v194),
                              v197 = PsGetCurrentThreadProcess(v196),
                              v180 = v195 == (unsigned int)PsGetProcessSessionIdEx(v197),
                              v61 = 0LL,
                              v180) )
                        {
                          v65 = (__int64 *)PsGetThreadWin32Thread(v228);
                          if ( v65 )
                            v61 = *v65;
                        }
                        *(_QWORD *)(v35 + 64) = v35;
                        *(_QWORD *)(v35 + 72) = CleanUpRegion;
                        if ( v61 )
                        {
                          v66 = *(_QWORD *)(v61 + 88);
                          v67 = (__int64 *)(v61 + 88);
                          if ( *(_QWORD *)(v66 + 8) != v61 + 88 )
                            goto LABEL_375;
                          *(_QWORD *)v54 = v66;
                          *(_QWORD *)(v35 + 56) = v67;
                          *(_QWORD *)(v66 + 8) = v54;
                          *v67 = v54;
                        }
                        else
                        {
                          *(_QWORD *)(v35 + 56) = v35 + 48;
                          *(_QWORD *)v54 = v54;
                        }
                        KeLeaveCriticalRegion();
                      }
                      if ( !(_DWORD)v227 )
                      {
                        if ( v11 == -48 )
                        {
LABEL_98:
                          if ( (struct REGION *)v11 != prgnDefault )
                          {
                            v78 = *(_QWORD *)(v11 + 88);
                            if ( v78 )
                            {
                              if ( *(_DWORD *)(v11 + 24) == 112 )
                              {
                                v79 = RGNMEMOBJ::s_pSCANLookAsideList;
                                if ( qword_1C0258C20 && (int)qword_1C0258C20() >= 0 && qword_1C0258C28 )
                                  qword_1C0258C28(v79, v78);
                              }
                              else if ( *(_DWORD *)(v11 + 24) > 0x70u )
                              {
                                Win32FreePool(*(_QWORD *)(v11 + 88));
                              }
                              *(_QWORD *)(v11 + 88) = 0LL;
                            }
                            v80 = gpTypeIsolation[7];
                            if ( v80 )
                              NSInstrumentation::CTypeIsolation<28672,112>::Free(v80, v11);
                          }
                          v28 = v229;
                          v7 = a1;
                          goto LABEL_109;
                        }
                        KeEnterCriticalRegion();
                        v68 = KeGetCurrentThread();
                        v69 = 0LL;
                        if ( !(unsigned __int8)KeIsAttachedProcess(v70)
                          || (v198 = PsGetCurrentProcess(v72, v71),
                              v199 = PsGetProcessSessionIdEx(v198),
                              v201 = PsGetCurrentThreadProcess(v200),
                              v199 == (unsigned int)PsGetProcessSessionIdEx(v201)) )
                        {
                          v73 = (__int64 *)PsGetThreadWin32Thread(v68);
                          if ( v73 )
                            v69 = *v73;
                        }
                        *(_QWORD *)(v11 + 64) = v11;
                        *(_QWORD *)(v11 + 72) = CleanUpRegion;
                        if ( v69 )
                        {
                          v74 = *(_QWORD *)(v69 + 88);
                          v75 = (__int64 *)(v69 + 88);
                          if ( *(_QWORD *)(v74 + 8) != v69 + 88 )
                            goto LABEL_375;
                          *(_QWORD *)v51 = v74;
                          *(_QWORD *)(v11 + 56) = v75;
                          *(_QWORD *)(v74 + 8) = v51;
                          *v75 = v51;
                        }
                        else
                        {
                          *(_QWORD *)(v11 + 56) = v11 + 48;
                          *(_QWORD *)v51 = v51;
                        }
                        KeLeaveCriticalRegion();
                      }
                    }
                  }
                }
                if ( v11 != -48 )
                {
                  KeEnterCriticalRegion();
                  v76 = *(_QWORD *)v51;
                  if ( *(_QWORD *)(*(_QWORD *)v51 + 8LL) != v51 )
                    goto LABEL_375;
                  v77 = *(_QWORD **)(v11 + 56);
                  if ( *v77 != v51 )
                    goto LABEL_375;
                  *v77 = v76;
                  *(_QWORD *)(v76 + 8) = v77;
                  *(_QWORD *)(v11 + 56) = v11 + 48;
                  *(_QWORD *)v51 = v51;
                  KeLeaveCriticalRegion();
                }
                goto LABEL_98;
              }
              goto LABEL_316;
            }
            REGION::vDeleteREGION((REGION *)v35);
          }
          v35 = 0LL;
          goto LABEL_50;
        }
        if ( v231[5].m128i_i32[0] == 56 && RGNOBJ::bContain((RGNOBJ *)&v231, (struct RGNOBJ *)&v229) )
        {
          v159 = (struct RGNOBJ *)&v231;
          if ( (_DWORD)v4 == 1 )
            v159 = (struct RGNOBJ *)&v229;
          if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v225, v159) )
            goto LABEL_250;
          v81 = v225;
        }
        else
        {
LABEL_261:
          if ( (_DWORD)v4 == 1 && v28[5].m128i_i32[0] == 56 && v231[5].m128i_i32[0] == 56 )
          {
            v162 = v28[6];
            v234 = 0LL;
            v163 = v231[6];
            v164 = v162.m128i_i64[0];
            v165 = v231[6].m128i_u64[0];
            v27 = v163.m128i_u32[0];
            v252 = v162;
            if ( v162.m128i_i32[0] > (int)v165 )
              v27 = v162.m128i_u32[0];
            v166 = _mm_srli_si128(v162, 8).m128i_u64[0];
            v234.left = v27;
            v253 = v163;
            v167 = _mm_srli_si128(v163, 8).m128i_u64[0];
            v168 = v167;
            if ( (int)v166 < (int)v167 )
              v168 = v166;
            v169 = HIDWORD(v164);
            v170 = HIDWORD(v165);
            v234.right = v168;
            if ( (int)v169 > (int)v170 )
              LODWORD(v170) = v169;
            v171 = HIDWORD(v167);
            v234.top = v170;
            if ( SHIDWORD(v166) < SHIDWORD(v167) )
              LODWORD(v171) = HIDWORD(v166);
            v234.bottom = v171;
            if ( (int)v170 >= (int)v171 || (int)v27 >= v168 )
            {
              v173 = *(_QWORD *)(v11 + 88);
              v81 = v225;
              *(_DWORD *)(v11 + 80) = 16;
              *(_DWORD *)(v11 + 84) = 1;
              *(_QWORD *)(v11 + 96) = 0LL;
              *(_QWORD *)(v11 + 104) = 0LL;
              *(_DWORD *)v173 = 0;
              *(_DWORD *)(v173 + 4) = 0x80000000;
              *(_QWORD *)(v173 + 8) = 0x7FFFFFFFLL;
              *(_QWORD *)(v11 + 40) = v173 + 16;
            }
            else
            {
              RGNOBJ::vSet((RGNOBJ *)&v225, &v234);
              v81 = v225;
            }
LABEL_118:
            if ( v7 == a2 )
            {
              v84 = v28->m128i_i32[0];
              v85 = v28->m128i_i32[0];
              v233 = 0LL;
              v86 = (unsigned __int16)v84 | (v85 >> 8) & 0xFF0000;
              CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v233);
              if ( (!(unsigned __int8)KeIsAttachedProcess(v88)
                 || (v203 = PsGetCurrentProcess(v90, v89),
                     v204 = PsGetProcessSessionIdEx(v203),
                     v206 = PsGetCurrentThreadProcess(v205),
                     v204 == (unsigned int)PsGetProcessSessionIdEx(v206)))
                && CurrentThreadWin32ThreadAndEnterCriticalRegion
                && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
              {
                v91 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
              }
              else
              {
                v91 = 0LL;
              }
              v245 = 1;
              v92 = gpHandleManager;
              v227 = v91;
              if ( v86 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  Entry = GdiHandleEntryDirectory::GetEntry(
                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                            (unsigned __int16)v86,
                            1);
                  v91 = v227;
                  if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v86) )
                    v86 = (unsigned __int16)v86;
                }
                else
                {
                  v86 = (unsigned __int16)v86;
                }
              }
              v93 = *((_QWORD *)v92 + 2);
              v94 = *(_DWORD *)(v93 + 2056);
              if ( v86 >= v94 + ((*(unsigned __int16 *)(v93 + 2) + 0xFFFF) << 16) )
                goto LABEL_373;
              if ( v86 >= v94 )
                v95 = ((v86 - v94) >> 16) + 1;
              else
                v95 = 0;
              v96 = 1;
              v97 = *(_QWORD *)(v93 + 8LL * v95 + 8);
              if ( v95 )
                v86 += ((1 - v95) << 16) - v94;
              v98 = 0LL;
              if ( v86 < *(_DWORD *)(v97 + 20) )
              {
                v238 = 16LL * (unsigned __int8)v86;
                v99 = *(_QWORD **)(v97 + 24);
                v237 = 8 * ((unsigned __int64)v86 >> 8);
                v228 = (struct _KTHREAD *)(v238 + *(_QWORD *)(*v99 + v237));
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx(v228, 0LL);
                if ( v86 < *(_DWORD *)(v97 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v97 + 24) + v237) + v238 + 8) )
                {
                  v100 = 24LL * v86;
                  *(_DWORD *)(*(_QWORD *)v97 + v100 + 8) |= 1u;
                  v98 = v100 + *(_QWORD *)v97;
                }
                else
                {
                  ExReleasePushLockExclusiveEx(v228, 0LL);
                  KeLeaveCriticalRegion();
                }
                v91 = v227;
              }
              v244 = (_DWORD *)v98;
              if ( v98 )
              {
                _m_prefetchw((const void *)(v98 + 8));
                v246 = *(_DWORD *)(v98 + 8);
                v101 = v246 & 0xFFFFFFFE;
                if ( (v246 & 0xFFFFFFFE) == (v233 & 0xFFFFFFFC) || !v101 || v91 && v101 == *(_DWORD *)(v91 + 8) )
                {
                  v102 = *(_BYTE *)(v98 + 15);
                  if ( (v102 & 0x20) == 0 )
                  {
                    if ( (v102 & 0x40) == 0 )
                      goto LABEL_140;
                    v208 = *(_DWORD *)v98;
                    v209 = gpHandleManager;
                    v210 = GdiHandleManager::DecodeIndex(gpHandleManager, v208 & 0xFFFFFF);
                    v211 = *((_QWORD *)v209 + 2);
                    v212 = v210;
                    v213 = *(_DWORD *)(v211 + 2056);
                    if ( v210 >= v213 + ((*(unsigned __int16 *)(v211 + 2) + 0xFFFF) << 16) )
                      goto LABEL_350;
                    if ( v210 >= v213 )
                      v214 = ((v210 - v213) >> 16) + 1;
                    else
                      v214 = 0;
                    v215 = *(_QWORD *)(v211 + 8LL * v214 + 8);
                    if ( v214 )
                      v212 = ((1 - v214) << 16) - v213 + v210;
                    if ( (unsigned int)v212 >= *(_DWORD *)(v215 + 20) )
LABEL_350:
                      v216 = 0LL;
                    else
                      v216 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v215 + 24) + 8 * (v212 >> 8))
                                       + 16LL * (unsigned __int8)v212
                                       + 8);
                    if ( *(_WORD *)(v216 + 12) )
                    {
                      v81 = v225;
                      v28 = v229;
                      if ( *(struct _KTHREAD **)(v216 + 16) == KeGetCurrentThread() )
                        goto LABEL_140;
                    }
                  }
                }
                HANDLELOCK::vUnlock((HANDLELOCK *)&v244);
                if ( v245 )
                {
LABEL_140:
                  v103 = v28->m128i_i16[7];
                  v104 = *(_OWORD *)v81;
                  v105 = *(_WORD *)(v81 + 14);
                  v243 = *(_QWORD *)(v81 + 16);
                  *(_WORD *)(v81 + 14) = v105 & 0x8000 | v103 & 0x4000;
                  v106 = v28->m128i_i64[0];
                  v28->m128i_i16[7] = v103 & 0x8000 | v105 & 0x4000;
                  *(_QWORD *)v81 = v106;
                  *(_WORD *)(v81 + 12) = v28->m128i_i16[6];
                  *(_DWORD *)(v81 + 8) = v28->m128i_i32[2];
                  *(_QWORD *)(v81 + 16) = v28[1].m128i_i64[0];
                  v107 = gpHandleManager;
                  v108 = (unsigned __int16)v28->m128i_i32[0] | ((unsigned __int32)v28->m128i_i32[0] >> 8) & 0xFF0000;
                  v242 = v104;
                  if ( v108 >= 0x10000 )
                  {
                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                    {
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                  (unsigned __int16)v108,
                                                  1)
                           + 13) == HIWORD(v108) )
                        v108 = (unsigned __int16)v108;
                    }
                    else
                    {
                      v108 = (unsigned __int16)v108;
                    }
                  }
                  v109 = *((_QWORD *)v107 + 2);
                  v110 = *(_DWORD *)(v109 + 2056);
                  if ( v108 < v110 + ((*(unsigned __int16 *)(v109 + 2) + 0xFFFF) << 16) )
                  {
                    if ( v108 >= v110 )
                      v111 = ((v108 - v110) >> 16) + 1;
                    else
                      v111 = 0;
                    v112 = *(_QWORD *)(v109 + 8LL * v111 + 8);
                    if ( v111 )
                      v108 += ((1 - v111) << 16) - v110;
                    if ( v108 < *(_DWORD *)(v112 + 20) )
                      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v112 + 24) + 8 * ((unsigned __int64)v108 >> 8))
                                + 16LL * (unsigned __int8)v108
                                + 8) = v81;
                  }
                  v28->m128i_i64[0] = v242;
                  v28->m128i_i16[6] = WORD6(v242);
                  v28->m128i_i32[2] = DWORD2(v242);
                  v28[1].m128i_i64[0] = v243;
                  v113 = *v244 & 0xFFFFFF;
                  if ( v113 >= 0x10000 )
                  {
                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                    {
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                  *(unsigned __int16 *)v244,
                                                  1)
                           + 13) == HIWORD(v113) )
                        v113 = (unsigned __int16)v113;
                    }
                    else
                    {
                      v113 = *(unsigned __int16 *)v244;
                    }
                  }
                  v114 = gpHandleManager;
                  v115 = *((_QWORD *)gpHandleManager + 2);
                  v116 = *(_DWORD *)(v115 + 2056);
                  if ( v113 >= v116 + ((*(unsigned __int16 *)(v115 + 2) + 0xFFFF) << 16) )
                    goto LABEL_363;
                  if ( v113 >= v116 )
                    v117 = ((v113 - v116) >> 16) + 1;
                  else
                    v117 = 0;
                  v118 = *(_QWORD *)(v115 + 8LL * v117 + 8);
                  if ( v117 )
                    v113 += ((1 - v117) << 16) - v116;
                  if ( v113 >= *(_DWORD *)(v118 + 20) )
LABEL_363:
                    v119 = 0LL;
                  else
                    v119 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v118 + 24) + 8 * ((unsigned __int64)v113 >> 8))
                                      + 16LL * (unsigned __int8)v113
                                      + 8);
                  v120 = (unsigned __int16)*v119 | (*v119 >> 8) & 0xFF0000;
                  if ( v120 >= 0x10000 )
                  {
                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                    {
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                  (unsigned __int16)*v119,
                                                  1)
                           + 13) == HIWORD(v120) )
                        v120 = (unsigned __int16)v120;
                    }
                    else
                    {
                      v120 = (unsigned __int16)*v119;
                    }
                  }
                  v121 = *((_QWORD *)v114 + 2);
                  v122 = *(_DWORD *)(v121 + 2056);
                  if ( v120 < v122 + ((*(unsigned __int16 *)(v121 + 2) + 0xFFFF) << 16) )
                  {
                    if ( v120 >= v122 )
                      v123 = ((v120 - v122) >> 16) + 1;
                    else
                      v123 = 0;
                    v124 = *(_QWORD *)(v121 + 8LL * v123 + 8);
                    if ( v123 )
                      v120 += ((1 - v123) << 16) - v122;
                    *(_DWORD *)(*(_QWORD *)v124 + 24LL * v120 + 8) &= ~1u;
                    ExReleasePushLockExclusiveEx(
                      *(_QWORD *)(**(_QWORD **)(v124 + 24) + 8 * ((unsigned __int64)v120 >> 8))
                    + 16LL * (unsigned __int8)v120,
                      0LL);
                    KeLeaveCriticalRegion();
                  }
                  KeLeaveCriticalRegion();
                  v125 = v28[2].m128i_i32[0];
                  v126 = v28 + 3;
                  v28[2].m128i_i32[0] = *(_DWORD *)(v81 + 32);
                  *(_DWORD *)(v81 + 32) = v125;
                  v127 = v28[2].m128i_u32[1];
                  v28[2].m128i_i32[1] = *(_DWORD *)(v81 + 36);
                  *(_DWORD *)(v81 + 36) = v127;
                  v128 = v126->m128i_i64[0] == (_QWORD)v126;
                  v129 = (__int64 *)(v81 + 48);
                  if ( (__int64 *)*v129 != v129 )
                    v96 = 0;
                  if ( v28 != (__m128i *)-48LL )
                  {
                    KeEnterCriticalRegion();
                    v130 = v126->m128i_i64[0];
                    if ( *(__m128i **)(v126->m128i_i64[0] + 8) != v126 )
                      goto LABEL_375;
                    v131 = (__m128i **)v28[3].m128i_i64[1];
                    if ( *v131 != v126 )
                      goto LABEL_375;
                    *v131 = (__m128i *)v130;
                    *(_QWORD *)(v130 + 8) = v131;
                    v28[3].m128i_i64[1] = (__int64)v28[3].m128i_i64;
                    v126->m128i_i64[0] = (__int64)v126;
                    KeLeaveCriticalRegion();
                  }
                  if ( v81 != -48 )
                  {
                    KeEnterCriticalRegion();
                    v132 = (__int64 *)*v129;
                    if ( *(__int64 **)(*v129 + 8) != v129 )
                      goto LABEL_375;
                    v133 = *(__int64 ***)(v81 + 56);
                    if ( *v133 != v129 )
                      goto LABEL_375;
                    *v133 = v132;
                    v132[1] = (__int64)v133;
                    *(_QWORD *)(v81 + 56) = v81 + 48;
                    *v129 = (__int64)v129;
                    KeLeaveCriticalRegion();
                  }
                  v229 = (__m128i *)v81;
                  v134 = KeGetCurrentThread();
                  v225 = (__int64)v28;
                  if ( (!(unsigned __int8)KeIsAttachedProcess(v127)
                     || (v217 = PsGetCurrentProcess(v136, v135),
                         v218 = PsGetProcessSessionIdEx(v217),
                         v220 = PsGetCurrentThreadProcess(v219),
                         v218 == (unsigned int)PsGetProcessSessionIdEx(v220)))
                    && (v137 = (_QWORD *)PsGetThreadWin32Thread(v134)) != 0LL
                    && *v137 )
                  {
                    v28 = v229;
                    if ( !v128 )
                      PushThreadGuardedObject(&v229[3], v229, CleanUpRegion);
                    v81 = v225;
                    if ( v96 )
                      goto LABEL_194;
                    v138 = (_QWORD *)(v225 + 48);
                    if ( v225 == -48 )
                      goto LABEL_194;
                    KeEnterCriticalRegion();
                    v139 = KeGetCurrentThread();
                    v140 = 0LL;
                    if ( !(unsigned __int8)KeIsAttachedProcess(v141)
                      || (v221 = PsGetCurrentProcess(v143, v142),
                          v222 = PsGetProcessSessionIdEx(v221),
                          v224 = PsGetCurrentThreadProcess(v223),
                          v222 == (unsigned int)PsGetProcessSessionIdEx(v224)) )
                    {
                      v144 = (__int64 *)PsGetThreadWin32Thread(v139);
                      if ( v144 )
                        v140 = *v144;
                    }
                    v81 = v225;
                    v138[2] = v225;
                    v138[3] = CleanUpRegion;
                    if ( v140 )
                    {
                      v145 = *(_QWORD *)(v140 + 88);
                      v146 = (_QWORD *)(v140 + 88);
                      if ( *(_QWORD *)(v145 + 8) != v140 + 88 )
                        goto LABEL_375;
                      *v138 = v145;
                      v138[1] = v146;
                      *(_QWORD *)(v145 + 8) = v138;
                      *v146 = v138;
                    }
                    else
                    {
                      v138[1] = v138;
                      *v138 = v138;
                    }
                    KeLeaveCriticalRegion();
                  }
                  else
                  {
                    v81 = v225;
                  }
                  v28 = v229;
LABEL_194:
                  if ( v28[5].m128i_i32[1] == 1 )
                  {
                    v256 = 1;
                  }
                  else if ( v28[5].m128i_i32[0] <= 0x38u )
                  {
                    v256 = 2;
                  }
                  else
                  {
                    v256 = 3;
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
              if ( (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)&v231, (struct RGNOBJ *)&v225, v27) )
              {
                v172 = RGNOBJ::iComplexity((RGNOBJ *)&v231);
                v81 = v225;
                v256 = v172;
LABEL_197:
                if ( !(_DWORD)v232 )
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)&v231);
                v147 = v231;
                if ( v231 )
                {
                  _InterlockedDecrement(&v231->m128i_i32[3]);
                  v81 = v225;
                  v28 = v229;
                }
                if ( !(_DWORD)v230 )
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)&v229);
                if ( v28 )
                {
                  _InterlockedDecrement(&v28->m128i_i32[3]);
                  v81 = v225;
                }
                if ( !v81 )
                  goto LABEL_221;
                v148 = (__int64 *)(v81 + 48);
                if ( v81 == -48 )
                {
LABEL_210:
                  if ( (struct REGION *)v81 != prgnDefault )
                  {
                    v151 = *(_QWORD *)(v81 + 88);
                    if ( v151 )
                    {
                      if ( *(_DWORD *)(v81 + 24) == 112 )
                      {
                        v158 = RGNMEMOBJ::s_pSCANLookAsideList;
                        if ( qword_1C0258C20 && (int)qword_1C0258C20() >= 0 && qword_1C0258C28 )
                          qword_1C0258C28(v158, v151);
                      }
                      else if ( *(_DWORD *)(v81 + 24) > 0x70u
                             && qword_1C0258BC0
                             && (int)qword_1C0258BC0(v147, v26, v27) >= 0
                             && qword_1C0258BC8 )
                      {
                        qword_1C0258BC8(v151);
                      }
                      *(_QWORD *)(v81 + 88) = 0LL;
                    }
                    v152 = gpTypeIsolation[7];
                    if ( v152 )
                      NSInstrumentation::CTypeIsolation<28672,112>::Free(v152, v81);
                  }
LABEL_221:
                  if ( (_DWORD)v226 == 1 )
                    REGION::vDeleteREGION(0LL);
                  return v256;
                }
                KeEnterCriticalRegion();
                v149 = (__int64 *)*v148;
                if ( *(__int64 **)(*v148 + 8) == v148 )
                {
                  v150 = *(__int64 ***)(v81 + 56);
                  if ( *v150 == v148 )
                  {
                    *v150 = v149;
                    v149[1] = (__int64)v150;
                    *(_QWORD *)(v81 + 56) = v81 + 48;
                    *v148 = (__int64)v148;
                    KeLeaveCriticalRegion();
                    goto LABEL_210;
                  }
                }
LABEL_375:
                __fastfail(3u);
              }
              v81 = v225;
            }
LABEL_321:
            v256 = 0;
            goto LABEL_197;
          }
          v83 = RGNOBJ::bMerge((RGNOBJ *)&v225, (struct RGNOBJ *)&v229, (struct RGNOBJ *)&v231, byte_1C0219700[v4]);
          v81 = v225;
          if ( v83 )
          {
            if ( *(_DWORD *)(v225 + 84) != 1 )
            {
              if ( *(_DWORD *)(v225 + 80) <= 0x38u )
                goto LABEL_111;
LABEL_116:
              v82 = 3;
              goto LABEL_117;
            }
            v82 = 1;
LABEL_117:
            if ( v82 )
              goto LABEL_118;
            goto LABEL_318;
          }
        }
        *(_DWORD *)(v81 + 80) = 16;
        *(_DWORD *)(v81 + 84) = 1;
        *(_QWORD *)(v81 + 96) = 0LL;
        *(_QWORD *)(v81 + 104) = 0LL;
        v202 = *(_QWORD *)(v81 + 88);
        *(_DWORD *)v202 = 0;
        *(_DWORD *)(v202 + 4) = 0x80000000;
        *(_QWORD *)(v202 + 8) = 0x7FFFFFFFLL;
        *(_QWORD *)(v81 + 40) = v202 + 16;
        goto LABEL_318;
      }
LABEL_250:
      v82 = RGNOBJ::iComplexity((RGNOBJ *)&v225);
      v81 = v225;
      goto LABEL_117;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v235, a1, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v239, a2, 1);
    v155 = v235[0];
    v156 = v239[0];
    if ( v235[0] )
    {
      if ( !v239[0] )
      {
LABEL_283:
        EngSetLastError(6u);
LABEL_284:
        v153 = 0;
LABEL_230:
        if ( !v240 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v239);
        if ( v156 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v156 + 12));
          v155 = v235[0];
        }
        if ( !v236 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v235);
        if ( v155 )
          _InterlockedDecrement((volatile signed __int32 *)(v155 + 12));
        return v153;
      }
      v157 = RGNOBJAPI::bCopy((RGNOBJAPI *)v235, (struct RGNOBJ *)v239);
      v155 = v235[0];
      if ( v157 )
      {
        if ( *(_DWORD *)(v235[0] + 84LL) == 1 )
          v153 = 1;
        else
          v153 = (*(_DWORD *)(v235[0] + 80LL) > 0x38u) + 2;
        goto LABEL_230;
      }
    }
    if ( v156 && v155 )
      goto LABEL_284;
    goto LABEL_283;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
