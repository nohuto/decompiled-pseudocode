/*
 * XREFs of GreCombineRgn @ 0x1C003F0E0
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C001E6D0 (-UpdateUserScreen@@YAJXZ.c)
 *     UserSetDCVisRgn @ 0x1C001F800 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C001F990 (UserValidateCopyRgn.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C00A2BEC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiCombineRgn @ 0x1C00A8180 (NtGdiCombineRgn.c)
 *     EngCombineRgn @ 0x1C014CAA0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C014CB40 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C014CE30 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C014D030 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C014D0D0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C014D170 (EngXorRgn.c)
 * Callees:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0037960 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0037A40 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0037E20 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0037F1C (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C003C550 (Win32AllocateFromPagedLookasideList.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003C9D0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003CAC0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003CC40 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003DA14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0040510 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00406D0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0040820 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     PushThreadGuardedObject @ 0x1C0040A70 (PushThreadGuardedObject.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00412F0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0090190 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0120E14 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014021C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v4; // rdi
  HRGN v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  void *v12; // rsi
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __m128i *v25; // rsi
  unsigned int v26; // r8d
  struct RGNOBJ *v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // edi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  struct _KTHREAD *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rsi
  int v47; // ecx
  int v48; // ecx
  __int64 v49; // r12
  __int64 v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rax
  _QWORD *v53; // rcx
  struct _KTHREAD *v54; // rdi
  __int64 v55; // r8
  _QWORD *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rcx
  __int64 *v62; // rax
  struct _KTHREAD *v63; // r12
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rcx
  __int64 *v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rcx
  __int64 v72; // rbx
  void *v73; // rdi
  unsigned __int8 *v74; // rcx
  __int64 v75; // rdi
  int v76; // eax
  int v77; // eax
  __int32 v78; // eax
  unsigned __int32 v79; // r14d
  unsigned int v80; // r14d
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r13
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  GdiHandleManager *v85; // r12
  __int64 v86; // r12
  unsigned int v87; // edx
  unsigned int v88; // ecx
  int v89; // r13d
  __int64 v90; // r12
  __int64 v91; // rbx
  _QWORD *v92; // rax
  __int64 v93; // rcx
  unsigned int v94; // ecx
  char v95; // al
  __int16 v96; // dx
  __int128 v97; // xmm0
  __int16 v98; // r8
  __int64 v99; // rax
  GdiHandleManager *v100; // r12
  unsigned int v101; // ebx
  __int64 v102; // rcx
  unsigned int v103; // r9d
  unsigned int v104; // edx
  __int64 v105; // r8
  unsigned int v106; // ebx
  GdiHandleManager *v107; // r14
  __int64 v108; // rcx
  unsigned int v109; // r8d
  unsigned int v110; // edx
  __int64 v111; // r9
  _DWORD *v112; // rdx
  unsigned int v113; // ebx
  __int64 v114; // rcx
  unsigned int v115; // r8d
  unsigned int v116; // edx
  __int64 v117; // r10
  __int32 v118; // ecx
  __m128i *v119; // r14
  __int32 v120; // ecx
  BOOL v121; // r12d
  __int64 *v122; // rbx
  __int64 v123; // rax
  __m128i **v124; // rcx
  __int64 *v125; // rax
  __int64 **v126; // rcx
  struct _KTHREAD *v127; // rdi
  __int64 v128; // rdx
  __int64 v129; // rcx
  _QWORD *v130; // rax
  _QWORD *v131; // r14
  struct _KTHREAD *v132; // rdi
  __int64 v133; // rsi
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 *v136; // rax
  __int64 v137; // rcx
  _QWORD *v138; // rax
  __int64 *v139; // rbx
  __int64 *v140; // rax
  __int64 **v141; // rcx
  __int64 v142; // rbx
  unsigned __int8 *v143; // rcx
  unsigned int v144; // edi
  __int64 v146; // rbx
  __int64 v147; // rsi
  int v148; // eax
  void *v149; // rsi
  struct RGNOBJ *v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  __m128i v153; // xmm1
  __m128i v154; // xmm0
  unsigned __int64 v155; // rax
  unsigned __int64 v156; // r9
  unsigned __int64 v157; // xmm1_8
  unsigned __int64 v158; // xmm0_8
  LONG v159; // edx
  unsigned __int64 v160; // rax
  unsigned __int64 v161; // r9
  unsigned __int64 v162; // r10
  unsigned int v163; // eax
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rax
  int v168; // ebx
  __int64 v169; // rax
  bool v170; // zf
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v174; // rax
  int v175; // edi
  __int64 v176; // rax
  __int64 v177; // rax
  int v178; // edi
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  int v182; // edi
  __int64 v183; // rax
  __int64 v184; // rax
  int v185; // ebx
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  int v189; // ebx
  __int64 v190; // rax
  struct _ENTRY *Entry; // rax
  int v192; // edx
  GdiHandleManager *v193; // rbx
  unsigned int v194; // eax
  __int64 v195; // r9
  unsigned __int64 v196; // rdx
  unsigned int v197; // r8d
  unsigned int v198; // ecx
  __int64 v199; // r10
  __int64 v200; // rdx
  __int64 v201; // rax
  int v202; // ebx
  __int64 v203; // rax
  __int64 v204; // rax
  int v205; // ebx
  __int64 v206; // rax
  __int64 v207; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v208; // [rsp+30h] [rbp-D8h]
  __int64 v209; // [rsp+38h] [rbp-D0h]
  struct _KTHREAD *v210; // [rsp+40h] [rbp-C8h]
  __m128i *v211; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v212; // [rsp+58h] [rbp-B0h]
  __m128i *v213; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v214; // [rsp+70h] [rbp-98h]
  __int64 v215; // [rsp+78h] [rbp-90h] BYREF
  struct _RECTL v216; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v217[2]; // [rsp+90h] [rbp-78h] BYREF
  int v218; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v219; // [rsp+A8h] [rbp-60h]
  __int64 v220; // [rsp+B0h] [rbp-58h]
  _QWORD v221[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v222; // [rsp+C8h] [rbp-40h]
  _QWORD v223[3]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v224; // [rsp+E8h] [rbp-20h]
  __int64 v225; // [rsp+F8h] [rbp-10h]
  _DWORD *v226; // [rsp+100h] [rbp-8h] BYREF
  int v227; // [rsp+108h] [rbp+0h]
  int v228; // [rsp+10Ch] [rbp+4h]
  _QWORD v229[3]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v230[3]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v231; // [rsp+148h] [rbp+40h] BYREF
  int v232; // [rsp+150h] [rbp+48h]
  _QWORD v233[3]; // [rsp+158h] [rbp+50h] BYREF
  __m128i v234; // [rsp+170h] [rbp+68h]
  __m128i v235; // [rsp+180h] [rbp+78h]
  BOOL v237; // [rsp+1F0h] [rbp+E8h]
  unsigned int v238; // [rsp+1F0h] [rbp+E8h]

  v4 = a4;
  v7 = a1;
  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 != 5 )
    {
      if ( a1 != a2 && a1 != a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v230, a2, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v229, a3, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v223, v7, 0);
        v151 = v230[0];
        if ( !v230[0] )
          goto LABEL_289;
        v152 = v229[0];
        if ( v229[0] && v223[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v223, (struct RGNOBJ *)v230, (struct RGNOBJ *)v229, v4) )
          {
            v144 = RGNOBJ::iComplexity((RGNOBJ *)v223);
LABEL_257:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v223);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v229);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v230);
            return v144;
          }
          v151 = v230[0];
          v152 = v229[0];
        }
        if ( !v151 || !v152 || !v223[0] )
LABEL_289:
          EngSetLastError(6u);
        v144 = 0;
        goto LABEL_257;
      }
      if ( a2 == a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v233, a1, 0);
        v165 = v233[0];
        if ( v233[0] )
        {
          if ( (unsigned int)(v4 - 3) <= 1 )
          {
            v166 = *(_QWORD *)(v233[0] + 88LL);
            *(_DWORD *)(v233[0] + 80LL) = 16;
            *(_DWORD *)(v165 + 84) = 1;
            *(_QWORD *)(v165 + 96) = 0LL;
            *(_QWORD *)(v165 + 104) = 0LL;
            *(_DWORD *)v166 = 0;
            *(_DWORD *)(v166 + 4) = 0x80000000;
            *(_QWORD *)(v166 + 8) = 0x7FFFFFFFLL;
            *(_QWORD *)(v165 + 40) = v166 + 16;
          }
          v144 = RGNOBJ::iComplexity((RGNOBJ *)v233);
        }
        else
        {
          EngSetLastError(6u);
          v144 = 0;
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v233);
        return v144;
      }
      LODWORD(v208) = 0;
      if ( gpTypeIsolation[7] )
      {
        v11 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
        if ( !v11 )
          goto LABEL_12;
        v12 = RGNMEMOBJ::s_pSCANLookAsideList;
        if ( qword_1C0250C50 && (int)qword_1C0250C50(v9, v8, v10) >= 0 && qword_1C0250C58 )
          v13 = qword_1C0250C58(v12);
        else
          v13 = 0LL;
        *(_QWORD *)(v11 + 88) = v13;
        if ( v13 )
          goto LABEL_12;
        REGION::vDeleteREGION((REGION *)v11);
      }
      v11 = 0LL;
LABEL_12:
      v207 = v11;
      if ( v11 )
      {
        *(_QWORD *)(v11 + 24) = 112LL;
        *(_DWORD *)(v11 + 80) = 0;
        *(_QWORD *)(v11 + 32) = 0LL;
        *(_QWORD *)(v11 + 56) = v11 + 48;
        *(_QWORD *)(v11 + 48) = v11 + 48;
      }
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v167 = PsGetCurrentProcess(v16, v15),
            v168 = PsGetProcessSessionIdEx(v167),
            v169 = PsGetCurrentThreadProcess(),
            v170 = v168 == (unsigned int)PsGetProcessSessionIdEx(v169),
            v7 = a1,
            v170) )
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
                v210 = KeGetCurrentThread();
                if ( (!(unsigned __int8)KeIsAttachedProcess()
                   || (CurrentProcess = PsGetCurrentProcess(v20, v19),
                       ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                       CurrentThreadProcess = PsGetCurrentThreadProcess(),
                       v170 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
                       v7 = a1,
                       v170))
                  && (v21 = (__int64 *)PsGetThreadWin32Thread(v210)) != 0LL )
                {
                  v22 = *v21;
                }
                else
                {
                  v22 = 0LL;
                }
                *(_QWORD *)(v11 + 64) = v11;
                *(_QWORD *)(v11 + 72) = CleanUpRegion;
                if ( v22 )
                {
                  v23 = *(_QWORD *)(v22 + 88);
                  v24 = (_QWORD *)(v22 + 88);
                  if ( *(_QWORD **)(v23 + 8) != v24 )
                    goto LABEL_375;
                  *v18 = v23;
                  *(_QWORD *)(v11 + 56) = v24;
                  *(_QWORD *)(v23 + 8) = v18;
                  *v24 = v18;
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
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v211, a2, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v213, a3, 0);
      v25 = v211;
      if ( !v11 )
        goto LABEL_317;
      if ( !v211 )
      {
        v75 = v207;
LABEL_320:
        EngSetLastError(6u);
        goto LABEL_321;
      }
      if ( !v213 )
        goto LABEL_317;
      if ( (struct REGION *)v11 != prgnDefault )
      {
        if ( (unsigned int)(v4 - 1) > 1 )
          goto LABEL_261;
        if ( v211[5].m128i_i32[0] == 56
          && v211[6].m128i_i32[0] <= v213[6].m128i_i32[0]
          && v211[6].m128i_i32[2] >= v213[6].m128i_i32[2]
          && v211[6].m128i_i32[1] <= v213[6].m128i_i32[1]
          && v211[6].m128i_i32[3] >= v213[6].m128i_i32[3] )
        {
          v26 = *(_DWORD *)(v11 + 24);
          v27 = (struct RGNOBJ *)&v211;
          if ( (_DWORD)v4 == 1 )
            v27 = (struct RGNOBJ *)&v213;
          v28 = *(_QWORD *)v27;
          v209 = v28;
          v29 = *(_DWORD *)(v28 + 80);
          if ( (v26 >= v29 || *(_DWORD *)(v28 + 24) <= 0x70u) && (v26 <= 0x70 || *(_DWORD *)(v28 + 24) > 0x70u) )
          {
            RGNOBJ::vCopy((RGNOBJ *)&v207, v27);
LABEL_109:
            v75 = v207;
            if ( *(_DWORD *)(v207 + 84) != 1 )
            {
              if ( *(_DWORD *)(v207 + 80) <= 0x38u )
              {
LABEL_111:
                v76 = 2;
                goto LABEL_117;
              }
              goto LABEL_116;
            }
            v76 = 1;
            goto LABEL_117;
          }
          v30 = 112;
          v232 = 0;
          if ( v29 > 0x70 )
            v30 = v29;
          if ( gpTypeIsolation[7] )
          {
            v31 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
            if ( !v31
              || (v30 == 112
                ? (v32 = Win32AllocateFromPagedLookasideList((__int64)RGNMEMOBJ::s_pSCANLookAsideList))
                : !qword_1C0250C10 || (int)qword_1C0250C10() < 0 || !qword_1C0250C18
                ? (v32 = 0LL)
                : (v32 = qword_1C0250C18(33LL, v30, 1852011335LL)),
                  (*(_QWORD *)(v31 + 88) = v32) != 0LL) )
            {
LABEL_50:
              v231 = v31;
              if ( v31 )
              {
                v33 = *(_QWORD *)(v31 + 88);
                *(_DWORD *)(v31 + 80) = 16;
                *(_DWORD *)(v31 + 84) = 1;
                *(_QWORD *)(v31 + 96) = 0LL;
                *(_QWORD *)(v31 + 104) = 0LL;
                *(_DWORD *)v33 = 0;
                *(_DWORD *)(v33 + 4) = 0x80000000;
                *(_QWORD *)(v33 + 8) = 0x7FFFFFFFLL;
                *(_QWORD *)(v31 + 40) = v33 + 16;
                *(_DWORD *)(v31 + 24) = v30;
                *(_QWORD *)(v31 + 28) = 0LL;
                *(_DWORD *)(v31 + 36) = 0;
                *(_QWORD *)(v31 + 56) = v31 + 48;
                *(_QWORD *)(v31 + 48) = v31 + 48;
              }
              v34 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess()
                || (v174 = PsGetCurrentProcess(v36, v35),
                    v175 = PsGetProcessSessionIdEx(v174),
                    v176 = PsGetCurrentThreadProcess(),
                    v175 == (unsigned int)PsGetProcessSessionIdEx(v176)) )
              {
                v37 = (_QWORD *)PsGetThreadWin32Thread(v34);
                if ( v37 )
                {
                  if ( *v37 )
                  {
                    if ( !v31 )
                    {
LABEL_316:
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v231);
                      v180 = *(_QWORD *)(v11 + 88);
                      v25 = v211;
                      *(_DWORD *)(v11 + 80) = 16;
                      *(_DWORD *)(v11 + 84) = 1;
                      *(_QWORD *)(v11 + 96) = 0LL;
                      *(_QWORD *)(v11 + 104) = 0LL;
                      *(_DWORD *)v180 = 0;
                      *(_DWORD *)(v180 + 4) = 0x80000000;
                      *(_QWORD *)(v180 + 8) = 0x7FFFFFFFLL;
                      *(_QWORD *)(v11 + 40) = v180 + 16;
LABEL_317:
                      v75 = v207;
LABEL_318:
                      if ( v25 && v213 )
                        goto LABEL_321;
                      goto LABEL_320;
                    }
                    v38 = (_QWORD *)(v31 + 48);
                    if ( v31 != -48 )
                    {
                      KeEnterCriticalRegion();
                      v39 = 0LL;
                      v210 = KeGetCurrentThread();
                      if ( !(unsigned __int8)KeIsAttachedProcess()
                        || (v177 = PsGetCurrentProcess(v41, v40),
                            v178 = PsGetProcessSessionIdEx(v177),
                            v179 = PsGetCurrentThreadProcess(),
                            v170 = v178 == (unsigned int)PsGetProcessSessionIdEx(v179),
                            v39 = 0LL,
                            v170) )
                      {
                        v42 = (__int64 *)PsGetThreadWin32Thread(v210);
                        if ( v42 )
                          v39 = *v42;
                      }
                      *(_QWORD *)(v31 + 64) = v31;
                      *(_QWORD *)(v31 + 72) = CleanUpRegion;
                      if ( v39 )
                      {
                        v43 = *(_QWORD *)(v39 + 88);
                        v44 = (_QWORD *)(v39 + 88);
                        if ( *(_QWORD *)(v43 + 8) != v39 + 88 )
                          goto LABEL_375;
                        *v38 = v43;
                        *(_QWORD *)(v31 + 56) = v44;
                        *(_QWORD *)(v43 + 8) = v38;
                        *v44 = v38;
                      }
                      else
                      {
                        *(_QWORD *)(v31 + 56) = v31 + 48;
                        *v38 = v38;
                      }
                      KeLeaveCriticalRegion();
                    }
                  }
                }
              }
              if ( v31 )
              {
                v45 = v209;
                *(_DWORD *)(v31 + 80) = *(_DWORD *)(v209 + 80);
                *(_DWORD *)(v31 + 84) = *(_DWORD *)(v45 + 84);
                *(_OWORD *)(v31 + 96) = *(_OWORD *)(v45 + 96);
                memmove(*(void **)(v31 + 88), *(const void **)(v45 + 88), *(unsigned int *)(v45 + 80));
                v46 = v11 + 48;
                *(_QWORD *)(v31 + 40) = *(_QWORD *)(v31 + 88) + *(_DWORD *)(v45 + 40) - *(_DWORD *)(v45 + 88);
                v47 = *(_DWORD *)(v11 + 32);
                *(_DWORD *)(v11 + 32) = *(_DWORD *)(v31 + 32);
                *(_DWORD *)(v31 + 32) = v47;
                v48 = *(_DWORD *)(v11 + 36);
                *(_DWORD *)(v11 + 36) = *(_DWORD *)(v31 + 36);
                *(_DWORD *)(v31 + 36) = v48;
                v237 = *(_QWORD *)v46 == v46;
                v49 = v31 + 48;
                LODWORD(v209) = *(_QWORD *)v49 == v49;
                if ( v11 != -48 )
                {
                  KeEnterCriticalRegion();
                  v50 = *(_QWORD *)v46;
                  if ( *(_QWORD *)(*(_QWORD *)v46 + 8LL) != v46 )
                    goto LABEL_375;
                  v51 = *(_QWORD **)(v11 + 56);
                  if ( *v51 != v46 )
                    goto LABEL_375;
                  *v51 = v50;
                  *(_QWORD *)(v50 + 8) = v51;
                  *(_QWORD *)(v11 + 56) = v11 + 48;
                  *(_QWORD *)v46 = v46;
                  KeLeaveCriticalRegion();
                }
                if ( v31 != -48 )
                {
                  KeEnterCriticalRegion();
                  v52 = *(_QWORD *)v49;
                  if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) != v49 )
                    goto LABEL_375;
                  v53 = *(_QWORD **)(v31 + 56);
                  if ( *v53 != v49 )
                    goto LABEL_375;
                  *v53 = v52;
                  *(_QWORD *)(v52 + 8) = v53;
                  *(_QWORD *)(v31 + 56) = v31 + 48;
                  *(_QWORD *)v49 = v49;
                  KeLeaveCriticalRegion();
                }
                v54 = KeGetCurrentThread();
                v207 = v31;
                if ( !(unsigned int)IsThreadCrossSessionAttached() )
                {
                  v56 = (_QWORD *)PsGetThreadWin32Thread(v54);
                  if ( v56 )
                  {
                    if ( *v56 )
                    {
                      if ( !v237 && v31 != -48 )
                      {
                        KeEnterCriticalRegion();
                        v57 = 0LL;
                        v210 = KeGetCurrentThread();
                        if ( !(unsigned __int8)KeIsAttachedProcess()
                          || (v181 = PsGetCurrentProcess(v59, v58),
                              v182 = PsGetProcessSessionIdEx(v181),
                              v183 = PsGetCurrentThreadProcess(),
                              v170 = v182 == (unsigned int)PsGetProcessSessionIdEx(v183),
                              v57 = 0LL,
                              v170) )
                        {
                          v60 = (__int64 *)PsGetThreadWin32Thread(v210);
                          if ( v60 )
                            v57 = *v60;
                        }
                        *(_QWORD *)(v31 + 64) = v31;
                        *(_QWORD *)(v31 + 72) = CleanUpRegion;
                        if ( v57 )
                        {
                          v61 = *(_QWORD *)(v57 + 88);
                          v62 = (__int64 *)(v57 + 88);
                          if ( *(_QWORD *)(v61 + 8) != v57 + 88 )
                            goto LABEL_375;
                          *(_QWORD *)v49 = v61;
                          *(_QWORD *)(v31 + 56) = v62;
                          *(_QWORD *)(v61 + 8) = v49;
                          *v62 = v49;
                        }
                        else
                        {
                          *(_QWORD *)(v31 + 56) = v31 + 48;
                          *(_QWORD *)v49 = v49;
                        }
                        KeLeaveCriticalRegion();
                      }
                      if ( !(_DWORD)v209 )
                      {
                        if ( v11 == -48 )
                        {
LABEL_98:
                          if ( (struct REGION *)v11 != prgnDefault )
                          {
                            v72 = *(_QWORD *)(v11 + 88);
                            if ( v72 )
                            {
                              if ( *(_DWORD *)(v11 + 24) == 112 )
                              {
                                v73 = RGNMEMOBJ::s_pSCANLookAsideList;
                                if ( qword_1C0250C60 && (int)qword_1C0250C60() >= 0 && qword_1C0250C68 )
                                  qword_1C0250C68(v73, v72);
                              }
                              else if ( *(_DWORD *)(v11 + 24) > 0x70u )
                              {
                                Win32FreePool(*(_QWORD *)(v11 + 88));
                              }
                              *(_QWORD *)(v11 + 88) = 0LL;
                            }
                            v74 = gpTypeIsolation[7];
                            if ( v74 )
                              NSInstrumentation::CTypeIsolation<28672,112>::Free(v74, v11);
                          }
                          v25 = v211;
                          v7 = a1;
                          goto LABEL_109;
                        }
                        KeEnterCriticalRegion();
                        v63 = KeGetCurrentThread();
                        v64 = 0LL;
                        if ( !(unsigned __int8)KeIsAttachedProcess()
                          || (v184 = PsGetCurrentProcess(v66, v65),
                              v185 = PsGetProcessSessionIdEx(v184),
                              v186 = PsGetCurrentThreadProcess(),
                              v185 == (unsigned int)PsGetProcessSessionIdEx(v186)) )
                        {
                          v67 = (__int64 *)PsGetThreadWin32Thread(v63);
                          if ( v67 )
                            v64 = *v67;
                        }
                        *(_QWORD *)(v11 + 64) = v11;
                        *(_QWORD *)(v11 + 72) = CleanUpRegion;
                        if ( v64 )
                        {
                          v68 = *(_QWORD *)(v64 + 88);
                          v69 = (__int64 *)(v64 + 88);
                          if ( *(_QWORD *)(v68 + 8) != v64 + 88 )
                            goto LABEL_375;
                          *(_QWORD *)v46 = v68;
                          *(_QWORD *)(v11 + 56) = v69;
                          *(_QWORD *)(v68 + 8) = v46;
                          *v69 = v46;
                        }
                        else
                        {
                          *(_QWORD *)(v11 + 56) = v11 + 48;
                          *(_QWORD *)v46 = v46;
                        }
                        KeLeaveCriticalRegion();
                      }
                    }
                  }
                }
                if ( v11 != -48 )
                {
                  KeEnterCriticalRegion();
                  v70 = *(_QWORD *)v46;
                  if ( *(_QWORD *)(*(_QWORD *)v46 + 8LL) != v46 )
                    goto LABEL_375;
                  v71 = *(_QWORD **)(v11 + 56);
                  if ( *v71 != v46 )
                    goto LABEL_375;
                  *v71 = v70;
                  *(_QWORD *)(v70 + 8) = v71;
                  *(_QWORD *)(v11 + 56) = v11 + 48;
                  *(_QWORD *)v46 = v46;
                  KeLeaveCriticalRegion();
                }
                goto LABEL_98;
              }
              goto LABEL_316;
            }
            REGION::vDeleteREGION((REGION *)v31);
          }
          v31 = 0LL;
          goto LABEL_50;
        }
        if ( v213[5].m128i_i32[0] == 56 && RGNOBJ::bContain((RGNOBJ *)&v213, (struct RGNOBJ *)&v211) )
        {
          v150 = (struct RGNOBJ *)&v213;
          if ( (_DWORD)v4 == 1 )
            v150 = (struct RGNOBJ *)&v211;
          if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v207, v150) )
            goto LABEL_250;
          v75 = v207;
        }
        else
        {
LABEL_261:
          if ( (_DWORD)v4 == 1 && v25[5].m128i_i32[0] == 56 && v213[5].m128i_i32[0] == 56 )
          {
            v153 = v25[6];
            v216 = 0LL;
            v154 = v213[6];
            v155 = v153.m128i_i64[0];
            v156 = v213[6].m128i_u64[0];
            v55 = v154.m128i_u32[0];
            v234 = v153;
            if ( v153.m128i_i32[0] > (int)v156 )
              v55 = v153.m128i_u32[0];
            v157 = _mm_srli_si128(v153, 8).m128i_u64[0];
            v216.left = v55;
            v235 = v154;
            v158 = _mm_srli_si128(v154, 8).m128i_u64[0];
            v159 = v158;
            if ( (int)v157 < (int)v158 )
              v159 = v157;
            v160 = HIDWORD(v155);
            v161 = HIDWORD(v156);
            v216.right = v159;
            if ( (int)v160 > (int)v161 )
              LODWORD(v161) = v160;
            v162 = HIDWORD(v158);
            v216.top = v161;
            if ( SHIDWORD(v157) < SHIDWORD(v158) )
              LODWORD(v162) = HIDWORD(v157);
            v216.bottom = v162;
            if ( (int)v161 >= (int)v162 || (int)v55 >= v159 )
            {
              v164 = *(_QWORD *)(v11 + 88);
              v75 = v207;
              *(_DWORD *)(v11 + 80) = 16;
              *(_DWORD *)(v11 + 84) = 1;
              *(_QWORD *)(v11 + 96) = 0LL;
              *(_QWORD *)(v11 + 104) = 0LL;
              *(_DWORD *)v164 = 0;
              *(_DWORD *)(v164 + 4) = 0x80000000;
              *(_QWORD *)(v164 + 8) = 0x7FFFFFFFLL;
              *(_QWORD *)(v11 + 40) = v164 + 16;
            }
            else
            {
              RGNOBJ::vSet((RGNOBJ *)&v207, &v216);
              v75 = v207;
            }
LABEL_118:
            if ( v7 == a2 )
            {
              v78 = v25->m128i_i32[0];
              v79 = v25->m128i_i32[0];
              v215 = 0LL;
              v80 = (unsigned __int16)v78 | (v79 >> 8) & 0xFF0000;
              CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v215);
              if ( (!(unsigned __int8)KeIsAttachedProcess()
                 || (v188 = PsGetCurrentProcess(v83, v82),
                     v189 = PsGetProcessSessionIdEx(v188),
                     v190 = PsGetCurrentThreadProcess(),
                     v189 == (unsigned int)PsGetProcessSessionIdEx(v190)))
                && CurrentThreadWin32ThreadAndEnterCriticalRegion
                && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
              {
                v84 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
              }
              else
              {
                v84 = 0LL;
              }
              v227 = 1;
              v85 = gpHandleManager;
              v209 = v84;
              if ( v80 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  Entry = GdiHandleEntryDirectory::GetEntry(
                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                            (unsigned __int16)v80,
                            1);
                  v84 = v209;
                  if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v80) )
                    v80 = (unsigned __int16)v80;
                }
                else
                {
                  v80 = (unsigned __int16)v80;
                }
              }
              v86 = *((_QWORD *)v85 + 2);
              v87 = *(_DWORD *)(v86 + 2056);
              if ( v80 >= v87 + ((*(unsigned __int16 *)(v86 + 2) + 0xFFFF) << 16) )
                goto LABEL_373;
              if ( v80 >= v87 )
                v88 = ((v80 - v87) >> 16) + 1;
              else
                v88 = 0;
              v89 = 1;
              v90 = *(_QWORD *)(v86 + 8LL * v88 + 8);
              if ( v88 )
                v80 += ((1 - v88) << 16) - v87;
              v91 = 0LL;
              if ( v80 < *(_DWORD *)(v90 + 20) )
              {
                v220 = 16LL * (unsigned __int8)v80;
                v92 = *(_QWORD **)(v90 + 24);
                v219 = 8 * ((unsigned __int64)v80 >> 8);
                v210 = (struct _KTHREAD *)(v220 + *(_QWORD *)(*v92 + v219));
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx(v210, 0LL);
                if ( v80 < *(_DWORD *)(v90 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v90 + 24) + v219) + v220 + 8) )
                {
                  v93 = 24LL * v80;
                  *(_DWORD *)(*(_QWORD *)v90 + v93 + 8) |= 1u;
                  v91 = v93 + *(_QWORD *)v90;
                }
                else
                {
                  ExReleasePushLockExclusiveEx(v210, 0LL);
                  KeLeaveCriticalRegion();
                }
                v84 = v209;
              }
              v226 = (_DWORD *)v91;
              if ( v91 )
              {
                _m_prefetchw((const void *)(v91 + 8));
                v228 = *(_DWORD *)(v91 + 8);
                v94 = v228 & 0xFFFFFFFE;
                if ( (v228 & 0xFFFFFFFE) == (v215 & 0xFFFFFFFC) || !v94 || v84 && v94 == *(_DWORD *)(v84 + 8) )
                {
                  v95 = *(_BYTE *)(v91 + 15);
                  if ( (v95 & 0x20) == 0 )
                  {
                    if ( (v95 & 0x40) == 0 )
                      goto LABEL_140;
                    v192 = *(_DWORD *)v91;
                    v193 = gpHandleManager;
                    v194 = GdiHandleManager::DecodeIndex(gpHandleManager, v192 & 0xFFFFFF);
                    v195 = *((_QWORD *)v193 + 2);
                    v196 = v194;
                    v197 = *(_DWORD *)(v195 + 2056);
                    if ( v194 >= v197 + ((*(unsigned __int16 *)(v195 + 2) + 0xFFFF) << 16) )
                      goto LABEL_350;
                    if ( v194 >= v197 )
                      v198 = ((v194 - v197) >> 16) + 1;
                    else
                      v198 = 0;
                    v199 = *(_QWORD *)(v195 + 8LL * v198 + 8);
                    if ( v198 )
                      v196 = ((1 - v198) << 16) - v197 + v194;
                    if ( (unsigned int)v196 >= *(_DWORD *)(v199 + 20) )
LABEL_350:
                      v200 = 0LL;
                    else
                      v200 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v199 + 24) + 8 * (v196 >> 8))
                                       + 16LL * (unsigned __int8)v196
                                       + 8);
                    if ( *(_WORD *)(v200 + 12) )
                    {
                      v75 = v207;
                      v25 = v211;
                      if ( *(struct _KTHREAD **)(v200 + 16) == KeGetCurrentThread() )
                        goto LABEL_140;
                    }
                  }
                }
                HANDLELOCK::vUnlock((HANDLELOCK *)&v226);
                if ( v227 )
                {
LABEL_140:
                  v96 = v25->m128i_i16[7];
                  v97 = *(_OWORD *)v75;
                  v98 = *(_WORD *)(v75 + 14);
                  v225 = *(_QWORD *)(v75 + 16);
                  *(_WORD *)(v75 + 14) = v98 & 0x8000 | v96 & 0x4000;
                  v99 = v25->m128i_i64[0];
                  v25->m128i_i16[7] = v96 & 0x8000 | v98 & 0x4000;
                  *(_QWORD *)v75 = v99;
                  *(_WORD *)(v75 + 12) = v25->m128i_i16[6];
                  *(_DWORD *)(v75 + 8) = v25->m128i_i32[2];
                  *(_QWORD *)(v75 + 16) = v25[1].m128i_i64[0];
                  v100 = gpHandleManager;
                  v101 = (unsigned __int16)v25->m128i_i32[0] | ((unsigned __int32)v25->m128i_i32[0] >> 8) & 0xFF0000;
                  v224 = v97;
                  if ( v101 >= 0x10000 )
                  {
                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                    {
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                  (unsigned __int16)v101,
                                                  1)
                           + 13) == HIWORD(v101) )
                        v101 = (unsigned __int16)v101;
                    }
                    else
                    {
                      v101 = (unsigned __int16)v101;
                    }
                  }
                  v102 = *((_QWORD *)v100 + 2);
                  v103 = *(_DWORD *)(v102 + 2056);
                  if ( v101 < v103 + ((*(unsigned __int16 *)(v102 + 2) + 0xFFFF) << 16) )
                  {
                    if ( v101 >= v103 )
                      v104 = ((v101 - v103) >> 16) + 1;
                    else
                      v104 = 0;
                    v105 = *(_QWORD *)(v102 + 8LL * v104 + 8);
                    if ( v104 )
                      v101 += ((1 - v104) << 16) - v103;
                    if ( v101 < *(_DWORD *)(v105 + 20) )
                      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v105 + 24) + 8 * ((unsigned __int64)v101 >> 8))
                                + 16LL * (unsigned __int8)v101
                                + 8) = v75;
                  }
                  v25->m128i_i64[0] = v224;
                  v25->m128i_i16[6] = WORD6(v224);
                  v25->m128i_i32[2] = DWORD2(v224);
                  v25[1].m128i_i64[0] = v225;
                  v106 = *v226 & 0xFFFFFF;
                  if ( v106 >= 0x10000 )
                  {
                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                    {
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                  *(unsigned __int16 *)v226,
                                                  1)
                           + 13) == HIWORD(v106) )
                        v106 = (unsigned __int16)v106;
                    }
                    else
                    {
                      v106 = *(unsigned __int16 *)v226;
                    }
                  }
                  v107 = gpHandleManager;
                  v108 = *((_QWORD *)gpHandleManager + 2);
                  v109 = *(_DWORD *)(v108 + 2056);
                  if ( v106 >= v109 + ((*(unsigned __int16 *)(v108 + 2) + 0xFFFF) << 16) )
                    goto LABEL_363;
                  if ( v106 >= v109 )
                    v110 = ((v106 - v109) >> 16) + 1;
                  else
                    v110 = 0;
                  v111 = *(_QWORD *)(v108 + 8LL * v110 + 8);
                  if ( v110 )
                    v106 += ((1 - v110) << 16) - v109;
                  if ( v106 >= *(_DWORD *)(v111 + 20) )
LABEL_363:
                    v112 = 0LL;
                  else
                    v112 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v111 + 24) + 8 * ((unsigned __int64)v106 >> 8))
                                      + 16LL * (unsigned __int8)v106
                                      + 8);
                  v113 = (unsigned __int16)*v112 | (*v112 >> 8) & 0xFF0000;
                  if ( v113 >= 0x10000 )
                  {
                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                    {
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                  (unsigned __int16)*v112,
                                                  1)
                           + 13) == HIWORD(v113) )
                        v113 = (unsigned __int16)v113;
                    }
                    else
                    {
                      v113 = (unsigned __int16)*v112;
                    }
                  }
                  v114 = *((_QWORD *)v107 + 2);
                  v115 = *(_DWORD *)(v114 + 2056);
                  if ( v113 < v115 + ((*(unsigned __int16 *)(v114 + 2) + 0xFFFF) << 16) )
                  {
                    if ( v113 >= v115 )
                      v116 = ((v113 - v115) >> 16) + 1;
                    else
                      v116 = 0;
                    v117 = *(_QWORD *)(v114 + 8LL * v116 + 8);
                    if ( v116 )
                      v113 += ((1 - v116) << 16) - v115;
                    *(_DWORD *)(*(_QWORD *)v117 + 24LL * v113 + 8) &= ~1u;
                    ExReleasePushLockExclusiveEx(
                      *(_QWORD *)(**(_QWORD **)(v117 + 24) + 8 * ((unsigned __int64)v113 >> 8))
                    + 16LL * (unsigned __int8)v113,
                      0LL);
                    KeLeaveCriticalRegion();
                  }
                  KeLeaveCriticalRegion();
                  v118 = v25[2].m128i_i32[0];
                  v119 = v25 + 3;
                  v25[2].m128i_i32[0] = *(_DWORD *)(v75 + 32);
                  *(_DWORD *)(v75 + 32) = v118;
                  v120 = v25[2].m128i_i32[1];
                  v25[2].m128i_i32[1] = *(_DWORD *)(v75 + 36);
                  *(_DWORD *)(v75 + 36) = v120;
                  v121 = v119->m128i_i64[0] == (_QWORD)v119;
                  v122 = (__int64 *)(v75 + 48);
                  if ( (__int64 *)*v122 != v122 )
                    v89 = 0;
                  if ( v25 != (__m128i *)-48LL )
                  {
                    KeEnterCriticalRegion();
                    v123 = v119->m128i_i64[0];
                    if ( *(__m128i **)(v119->m128i_i64[0] + 8) != v119 )
                      goto LABEL_375;
                    v124 = (__m128i **)v25[3].m128i_i64[1];
                    if ( *v124 != v119 )
                      goto LABEL_375;
                    *v124 = (__m128i *)v123;
                    *(_QWORD *)(v123 + 8) = v124;
                    v25[3].m128i_i64[1] = (__int64)v25[3].m128i_i64;
                    v119->m128i_i64[0] = (__int64)v119;
                    KeLeaveCriticalRegion();
                  }
                  if ( v75 != -48 )
                  {
                    KeEnterCriticalRegion();
                    v125 = (__int64 *)*v122;
                    if ( *(__int64 **)(*v122 + 8) != v122 )
                      goto LABEL_375;
                    v126 = *(__int64 ***)(v75 + 56);
                    if ( *v126 != v122 )
                      goto LABEL_375;
                    *v126 = v125;
                    v125[1] = (__int64)v126;
                    *(_QWORD *)(v75 + 56) = v75 + 48;
                    *v122 = (__int64)v122;
                    KeLeaveCriticalRegion();
                  }
                  v211 = (__m128i *)v75;
                  v127 = KeGetCurrentThread();
                  v207 = (__int64)v25;
                  if ( (!(unsigned __int8)KeIsAttachedProcess()
                     || (v201 = PsGetCurrentProcess(v129, v128),
                         v202 = PsGetProcessSessionIdEx(v201),
                         v203 = PsGetCurrentThreadProcess(),
                         v202 == (unsigned int)PsGetProcessSessionIdEx(v203)))
                    && (v130 = (_QWORD *)PsGetThreadWin32Thread(v127)) != 0LL
                    && *v130 )
                  {
                    v25 = v211;
                    if ( !v121 )
                      PushThreadGuardedObject(&v211[3], v211, CleanUpRegion);
                    v75 = v207;
                    if ( v89 )
                      goto LABEL_194;
                    v131 = (_QWORD *)(v207 + 48);
                    if ( v207 == -48 )
                      goto LABEL_194;
                    KeEnterCriticalRegion();
                    v132 = KeGetCurrentThread();
                    v133 = 0LL;
                    if ( !(unsigned __int8)KeIsAttachedProcess()
                      || (v204 = PsGetCurrentProcess(v135, v134),
                          v205 = PsGetProcessSessionIdEx(v204),
                          v206 = PsGetCurrentThreadProcess(),
                          v205 == (unsigned int)PsGetProcessSessionIdEx(v206)) )
                    {
                      v136 = (__int64 *)PsGetThreadWin32Thread(v132);
                      if ( v136 )
                        v133 = *v136;
                    }
                    v75 = v207;
                    v131[2] = v207;
                    v131[3] = CleanUpRegion;
                    if ( v133 )
                    {
                      v137 = *(_QWORD *)(v133 + 88);
                      v138 = (_QWORD *)(v133 + 88);
                      if ( *(_QWORD *)(v137 + 8) != v133 + 88 )
                        goto LABEL_375;
                      *v131 = v137;
                      v131[1] = v138;
                      *(_QWORD *)(v137 + 8) = v131;
                      *v138 = v131;
                    }
                    else
                    {
                      v131[1] = v131;
                      *v131 = v131;
                    }
                    KeLeaveCriticalRegion();
                  }
                  else
                  {
                    v75 = v207;
                  }
                  v25 = v211;
LABEL_194:
                  if ( v25[5].m128i_i32[1] == 1 )
                  {
                    v238 = 1;
                  }
                  else if ( v25[5].m128i_i32[0] <= 0x38u )
                  {
                    v238 = 2;
                  }
                  else
                  {
                    v238 = 3;
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
              if ( (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)&v213, (struct RGNOBJ *)&v207, v55) )
              {
                v163 = RGNOBJ::iComplexity((RGNOBJ *)&v213);
                v75 = v207;
                v238 = v163;
LABEL_197:
                if ( !(_DWORD)v214 )
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)&v213);
                if ( v213 )
                {
                  _InterlockedDecrement(&v213->m128i_i32[3]);
                  v75 = v207;
                  v25 = v211;
                }
                if ( !(_DWORD)v212 )
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)&v211);
                if ( v25 )
                {
                  _InterlockedDecrement(&v25->m128i_i32[3]);
                  v75 = v207;
                }
                if ( !v75 )
                  goto LABEL_221;
                v139 = (__int64 *)(v75 + 48);
                if ( v75 == -48 )
                {
LABEL_210:
                  if ( (struct REGION *)v75 != prgnDefault )
                  {
                    v142 = *(_QWORD *)(v75 + 88);
                    if ( v142 )
                    {
                      if ( *(_DWORD *)(v75 + 24) == 112 )
                      {
                        v149 = RGNMEMOBJ::s_pSCANLookAsideList;
                        if ( qword_1C0250C60 && (int)qword_1C0250C60() >= 0 && qword_1C0250C68 )
                          qword_1C0250C68(v149, v142);
                      }
                      else if ( *(_DWORD *)(v75 + 24) > 0x70u
                             && qword_1C0250C00
                             && (int)qword_1C0250C00() >= 0
                             && qword_1C0250C08 )
                      {
                        qword_1C0250C08(v142);
                      }
                      *(_QWORD *)(v75 + 88) = 0LL;
                    }
                    v143 = gpTypeIsolation[7];
                    if ( v143 )
                      NSInstrumentation::CTypeIsolation<28672,112>::Free(v143, v75);
                  }
LABEL_221:
                  if ( (_DWORD)v208 == 1 )
                    REGION::vDeleteREGION(0LL);
                  return v238;
                }
                KeEnterCriticalRegion();
                v140 = (__int64 *)*v139;
                if ( *(__int64 **)(*v139 + 8) == v139 )
                {
                  v141 = *(__int64 ***)(v75 + 56);
                  if ( *v141 == v139 )
                  {
                    *v141 = v140;
                    v140[1] = (__int64)v141;
                    *(_QWORD *)(v75 + 56) = v75 + 48;
                    *v139 = (__int64)v139;
                    KeLeaveCriticalRegion();
                    goto LABEL_210;
                  }
                }
LABEL_375:
                __fastfail(3u);
              }
              v75 = v207;
            }
LABEL_321:
            v238 = 0;
            goto LABEL_197;
          }
          v77 = RGNOBJ::bMerge((RGNOBJ *)&v207, (struct RGNOBJ *)&v211, (struct RGNOBJ *)&v213, byte_1C0211B90[v4]);
          v75 = v207;
          if ( v77 )
          {
            if ( *(_DWORD *)(v207 + 84) != 1 )
            {
              if ( *(_DWORD *)(v207 + 80) <= 0x38u )
                goto LABEL_111;
LABEL_116:
              v76 = 3;
              goto LABEL_117;
            }
            v76 = 1;
LABEL_117:
            if ( v76 )
              goto LABEL_118;
            goto LABEL_318;
          }
        }
        *(_DWORD *)(v75 + 80) = 16;
        *(_DWORD *)(v75 + 84) = 1;
        *(_QWORD *)(v75 + 96) = 0LL;
        *(_QWORD *)(v75 + 104) = 0LL;
        v187 = *(_QWORD *)(v75 + 88);
        *(_DWORD *)v187 = 0;
        *(_DWORD *)(v187 + 4) = 0x80000000;
        *(_QWORD *)(v187 + 8) = 0x7FFFFFFFLL;
        *(_QWORD *)(v75 + 40) = v187 + 16;
        goto LABEL_318;
      }
LABEL_250:
      v76 = RGNOBJ::iComplexity((RGNOBJ *)&v207);
      v75 = v207;
      goto LABEL_117;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v217, a1, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v221, a2, 1);
    v146 = v217[0];
    v147 = v221[0];
    if ( v217[0] )
    {
      if ( !v221[0] )
      {
LABEL_283:
        EngSetLastError(6u);
LABEL_284:
        v144 = 0;
LABEL_230:
        if ( !v222 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v221);
        if ( v147 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v147 + 12));
          v146 = v217[0];
        }
        if ( !v218 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v217);
        if ( v146 )
          _InterlockedDecrement((volatile signed __int32 *)(v146 + 12));
        return v144;
      }
      v148 = RGNOBJAPI::bCopy((RGNOBJAPI *)v217, (struct RGNOBJ *)v221);
      v146 = v217[0];
      if ( v148 )
      {
        if ( *(_DWORD *)(v217[0] + 84LL) == 1 )
          v144 = 1;
        else
          v144 = (*(_DWORD *)(v217[0] + 80LL) > 0x38u) + 2;
        goto LABEL_230;
      }
    }
    if ( v147 && v146 )
      goto LABEL_284;
    goto LABEL_283;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
