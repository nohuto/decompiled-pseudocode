/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A8298
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0083518 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0083800 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A4D4C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C00A7C18 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A7EE8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  struct _KTHREAD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbp
  struct _KTHREAD *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbp
  struct _KTHREAD *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbp
  struct _KTHREAD *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rbp
  struct _KTHREAD *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rbp
  struct _KTHREAD *v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rbp
  struct _KTHREAD *v55; // r14
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rbp
  struct _KTHREAD *v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rbp
  struct _KTHREAD *v69; // r14
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rbp
  struct _KTHREAD *v76; // r14
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rbp
  struct _KTHREAD *v83; // r14
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rbp
  struct _KTHREAD *v90; // r14
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 *v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rbp
  struct _KTHREAD *v97; // r14
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 *v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rbp
  struct _KTHREAD *v104; // r14
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 *v108; // rax
  __int64 v109; // rcx
  struct _KTHREAD *v110; // rbp
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 *v114; // rax
  __int64 v115; // rsi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 *v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rsi
  struct _KTHREAD *v123; // rbp
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rsi
  struct _KTHREAD *v130; // rbp
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rsi
  struct _KTHREAD *v137; // rbp
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 *v141; // rax
  __int64 v142; // rax
  __int64 v143; // rsi
  struct _KTHREAD *v144; // rbp
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 *v148; // rax
  __int64 v149; // rax
  __int64 v150; // rsi
  struct _KTHREAD *v151; // rbp
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 *v155; // rax
  __int64 v156; // rax
  __int64 v157; // rsi
  struct _KTHREAD *v158; // rbp
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 *v162; // rax
  __int64 v163; // rax
  __int64 v164; // rsi
  struct _KTHREAD *v165; // rbp
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 *v169; // rax
  __int64 v170; // rax
  __int64 v171; // rsi
  struct _KTHREAD *v172; // rbp
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 *v176; // rax
  __int64 v177; // rax
  __int64 v178; // rsi
  struct _KTHREAD *v179; // rbp
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 *v183; // rax
  __int64 v184; // rax
  __int64 v185; // rsi
  struct _KTHREAD *v186; // rbp
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 *v190; // rax
  __int64 v191; // rax
  __int64 v192; // rsi
  struct _KTHREAD *v193; // rbp
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 *v197; // rax
  __int64 v198; // rax
  __int64 v199; // rsi
  struct _KTHREAD *v200; // rbp
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 *v204; // rax
  __int64 v205; // rax
  __int64 v206; // rsi
  struct _KTHREAD *v207; // rbp
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 *v211; // rax
  __int64 v212; // rax
  __int64 v213; // rsi
  struct _KTHREAD *v214; // rbp
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 *v218; // rax
  struct _KTHREAD *v219; // rsi
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 *v223; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v226; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v228; // rax
  int v229; // ebx
  __int64 v230; // rcx
  __int64 v231; // rax
  __int64 v232; // rax
  int v233; // ebx
  __int64 v234; // rcx
  __int64 v235; // rax
  __int64 v236; // rax
  int v237; // ebx
  __int64 v238; // rcx
  __int64 v239; // rax
  __int64 v240; // rax
  int v241; // ebx
  __int64 v242; // rcx
  __int64 v243; // rax
  __int64 v244; // rax
  int v245; // ebx
  __int64 v246; // rcx
  __int64 v247; // rax
  __int64 v248; // rax
  int v249; // ebx
  __int64 v250; // rcx
  __int64 v251; // rax
  __int64 v252; // rax
  int v253; // ebx
  __int64 v254; // rcx
  __int64 v255; // rax
  __int64 v256; // rax
  int v257; // ebx
  __int64 v258; // rcx
  __int64 v259; // rax
  __int64 v260; // rax
  int v261; // ebx
  __int64 v262; // rcx
  __int64 v263; // rax
  __int64 v264; // rax
  int v265; // ebx
  __int64 v266; // rcx
  __int64 v267; // rax
  __int64 v268; // rax
  int v269; // ebx
  __int64 v270; // rcx
  __int64 v271; // rax
  __int64 v272; // rax
  int v273; // ebx
  __int64 v274; // rcx
  __int64 v275; // rax
  __int64 v276; // rax
  int v277; // ebx
  __int64 v278; // rcx
  __int64 v279; // rax
  __int64 v280; // rax
  int v281; // ebx
  __int64 v282; // rcx
  __int64 v283; // rax
  __int64 v284; // rax
  int v285; // ebx
  __int64 v286; // rcx
  __int64 v287; // rax
  __int64 v288; // rax
  int v289; // ebx
  __int64 v290; // rcx
  __int64 v291; // rax
  __int64 v292; // rax
  int v293; // ebx
  __int64 v294; // rcx
  __int64 v295; // rax
  __int64 v296; // rax
  int v297; // ebx
  __int64 v298; // rcx
  __int64 v299; // rax
  __int64 v300; // rax
  int v301; // ebx
  __int64 v302; // rcx
  __int64 v303; // rax
  __int64 v304; // rax
  int v305; // ebx
  __int64 v306; // rcx
  __int64 v307; // rax
  __int64 v308; // rax
  int v309; // ebx
  __int64 v310; // rcx
  __int64 v311; // rax
  __int64 v312; // rax
  int v313; // ebx
  __int64 v314; // rcx
  __int64 v315; // rax
  __int64 v316; // rax
  int v317; // ebx
  __int64 v318; // rcx
  __int64 v319; // rax
  __int64 v320; // rax
  int v321; // ebx
  __int64 v322; // rcx
  __int64 v323; // rax
  __int64 v324; // rax
  int v325; // ebx
  __int64 v326; // rcx
  __int64 v327; // rax
  __int64 v328; // rax
  int v329; // ebx
  __int64 v330; // rcx
  __int64 v331; // rax
  __int64 v332; // rax
  int v333; // ebx
  __int64 v334; // rcx
  __int64 v335; // rax
  __int64 v336; // rax
  int v337; // ebx
  __int64 v338; // rcx
  __int64 v339; // rax
  __int64 v340; // rax
  int v341; // ebx
  __int64 v342; // rcx
  __int64 v343; // rax
  __int64 v344; // rax
  int v345; // ebx
  __int64 v346; // rcx
  __int64 v347; // rax
  __int64 v348; // rax
  int v349; // ebx
  __int64 v350; // rcx
  __int64 v351; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( a2 )
  {
    v5 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(a1)
      || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v226),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v5 = *ThreadWin32Thread;
    }
    v11 = *(_QWORD *)(v5 + 280);
    v12 = 0LL;
    *(_QWORD *)(v11 + 32) = a1;
    v13 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v10)
      || (v228 = PsGetCurrentProcess(v15, v14, v16),
          v229 = PsGetProcessSessionIdEx(v228),
          v231 = PsGetCurrentThreadProcess(v230),
          v229 == (unsigned int)PsGetProcessSessionIdEx(v231)) )
    {
      v17 = (__int64 *)PsGetThreadWin32Thread(v13);
      if ( v17 )
        v12 = *v17;
    }
    v18 = *(_QWORD *)(v12 + 280);
    v19 = 0LL;
    *(_QWORD *)(v18 + 40) = *((_QWORD *)a1 + 149);
    v20 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v18)
      || (v232 = PsGetCurrentProcess(v22, v21, v23),
          v233 = PsGetProcessSessionIdEx(v232),
          v235 = PsGetCurrentThreadProcess(v234),
          v233 == (unsigned int)PsGetProcessSessionIdEx(v235)) )
    {
      v24 = (__int64 *)PsGetThreadWin32Thread(v20);
      if ( v24 )
        v19 = *v24;
    }
    v25 = *(_QWORD *)(v19 + 280);
    v26 = 0LL;
    *(_QWORD *)(v25 + 48) = *((_QWORD *)a1 + 150);
    v27 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v25)
      || (v236 = PsGetCurrentProcess(v29, v28, v30),
          v237 = PsGetProcessSessionIdEx(v236),
          v239 = PsGetCurrentThreadProcess(v238),
          v237 == (unsigned int)PsGetProcessSessionIdEx(v239)) )
    {
      v31 = (__int64 *)PsGetThreadWin32Thread(v27);
      if ( v31 )
        v26 = *v31;
    }
    v32 = *(_QWORD *)(v26 + 280);
    v33 = 0LL;
    *(_QWORD *)(v32 + 56) = *((_QWORD *)a1 + 151);
    v34 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v32)
      || (v240 = PsGetCurrentProcess(v36, v35, v37),
          v241 = PsGetProcessSessionIdEx(v240),
          v243 = PsGetCurrentThreadProcess(v242),
          v241 == (unsigned int)PsGetProcessSessionIdEx(v243)) )
    {
      v38 = (__int64 *)PsGetThreadWin32Thread(v34);
      if ( v38 )
        v33 = *v38;
    }
    v39 = *(_QWORD *)(v33 + 280);
    v40 = 0LL;
    *(_QWORD *)(v39 + 72) = *((_QWORD *)a1 + 153);
    v41 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v39)
      || (v244 = PsGetCurrentProcess(v43, v42, v44),
          v245 = PsGetProcessSessionIdEx(v244),
          v247 = PsGetCurrentThreadProcess(v246),
          v245 == (unsigned int)PsGetProcessSessionIdEx(v247)) )
    {
      v45 = (__int64 *)PsGetThreadWin32Thread(v41);
      if ( v45 )
        v40 = *v45;
    }
    v46 = *(_QWORD *)(v40 + 280);
    v47 = 0LL;
    *(_QWORD *)(v46 + 80) = *((_QWORD *)a1 + 154);
    v48 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v46)
      || (v248 = PsGetCurrentProcess(v50, v49, v51),
          v249 = PsGetProcessSessionIdEx(v248),
          v251 = PsGetCurrentThreadProcess(v250),
          v249 == (unsigned int)PsGetProcessSessionIdEx(v251)) )
    {
      v52 = (__int64 *)PsGetThreadWin32Thread(v48);
      if ( v52 )
        v47 = *v52;
    }
    v53 = *(_QWORD *)(v47 + 280);
    v54 = 0LL;
    *(_QWORD *)(v53 + 88) = *((_QWORD *)a1 + 155);
    v55 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v53)
      || (v252 = PsGetCurrentProcess(v57, v56, v58),
          v253 = PsGetProcessSessionIdEx(v252),
          v255 = PsGetCurrentThreadProcess(v254),
          v253 == (unsigned int)PsGetProcessSessionIdEx(v255)) )
    {
      v59 = (__int64 *)PsGetThreadWin32Thread(v55);
      if ( v59 )
        v54 = *v59;
    }
    v60 = *(_QWORD *)(v54 + 280);
    v61 = 0LL;
    *(_QWORD *)(v60 + 96) = *((_QWORD *)a1 + 156);
    v62 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v60)
      || (v256 = PsGetCurrentProcess(v64, v63, v65),
          v257 = PsGetProcessSessionIdEx(v256),
          v259 = PsGetCurrentThreadProcess(v258),
          v257 == (unsigned int)PsGetProcessSessionIdEx(v259)) )
    {
      v66 = (__int64 *)PsGetThreadWin32Thread(v62);
      if ( v66 )
        v61 = *v66;
    }
    v67 = *(_QWORD *)(v61 + 280);
    v68 = 0LL;
    *(_QWORD *)(v67 + 104) = *((_QWORD *)a1 + 157);
    v69 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v67)
      || (v260 = PsGetCurrentProcess(v71, v70, v72),
          v261 = PsGetProcessSessionIdEx(v260),
          v263 = PsGetCurrentThreadProcess(v262),
          v261 == (unsigned int)PsGetProcessSessionIdEx(v263)) )
    {
      v73 = (__int64 *)PsGetThreadWin32Thread(v69);
      if ( v73 )
        v68 = *v73;
    }
    v74 = *(_QWORD *)(v68 + 280);
    v75 = 0LL;
    *(_QWORD *)(v74 + 112) = *((_QWORD *)a1 + 158);
    v76 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v74)
      || (v264 = PsGetCurrentProcess(v78, v77, v79),
          v265 = PsGetProcessSessionIdEx(v264),
          v267 = PsGetCurrentThreadProcess(v266),
          v265 == (unsigned int)PsGetProcessSessionIdEx(v267)) )
    {
      v80 = (__int64 *)PsGetThreadWin32Thread(v76);
      if ( v80 )
        v75 = *v80;
    }
    v81 = *(_QWORD *)(v75 + 280);
    v82 = 0LL;
    *(_QWORD *)(v81 + 120) = *((_QWORD *)a1 + 159);
    v83 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v81)
      || (v268 = PsGetCurrentProcess(v85, v84, v86),
          v269 = PsGetProcessSessionIdEx(v268),
          v271 = PsGetCurrentThreadProcess(v270),
          v269 == (unsigned int)PsGetProcessSessionIdEx(v271)) )
    {
      v87 = (__int64 *)PsGetThreadWin32Thread(v83);
      if ( v87 )
        v82 = *v87;
    }
    v88 = *(_QWORD *)(v82 + 280);
    v89 = 0LL;
    *(_QWORD *)(v88 + 128) = *((_QWORD *)a1 + 160);
    v90 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v88)
      || (v272 = PsGetCurrentProcess(v92, v91, v93),
          v273 = PsGetProcessSessionIdEx(v272),
          v275 = PsGetCurrentThreadProcess(v274),
          v273 == (unsigned int)PsGetProcessSessionIdEx(v275)) )
    {
      v94 = (__int64 *)PsGetThreadWin32Thread(v90);
      if ( v94 )
        v89 = *v94;
    }
    v95 = *(_QWORD *)(v89 + 280);
    v96 = 0LL;
    *(_QWORD *)(v95 + 136) = *((_QWORD *)a1 + 161);
    v97 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v95)
      || (v276 = PsGetCurrentProcess(v99, v98, v100),
          v277 = PsGetProcessSessionIdEx(v276),
          v279 = PsGetCurrentThreadProcess(v278),
          v277 == (unsigned int)PsGetProcessSessionIdEx(v279)) )
    {
      v101 = (__int64 *)PsGetThreadWin32Thread(v97);
      if ( v101 )
        v96 = *v101;
    }
    v102 = *(_QWORD *)(v96 + 280);
    v103 = 0LL;
    *(_QWORD *)(v102 + 152) = *((_QWORD *)a1 + 163);
    v104 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v102)
      || (v280 = PsGetCurrentProcess(v106, v105, v107),
          v281 = PsGetProcessSessionIdEx(v280),
          v283 = PsGetCurrentThreadProcess(v282),
          v281 == (unsigned int)PsGetProcessSessionIdEx(v283)) )
    {
      v108 = (__int64 *)PsGetThreadWin32Thread(v104);
      if ( v108 )
        v103 = *v108;
    }
    v109 = *(_QWORD *)(v103 + 280);
    *(_QWORD *)(v109 + 144) = *((_QWORD *)a1 + 162);
    v110 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v109)
      || (v284 = PsGetCurrentProcess(v112, v111, v113),
          v285 = PsGetProcessSessionIdEx(v284),
          v287 = PsGetCurrentThreadProcess(v286),
          v285 == (unsigned int)PsGetProcessSessionIdEx(v287)) )
    {
      v114 = (__int64 *)PsGetThreadWin32Thread(v110);
      if ( v114 )
        v3 = *v114;
    }
    *(_QWORD *)(*(_QWORD *)(v3 + 280) + 160LL) = *((_QWORD *)a1 + 164);
  }
  else
  {
    v115 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(a1)
      || (v288 = PsGetCurrentProcess(v117, v116, v118),
          v289 = PsGetProcessSessionIdEx(v288),
          v291 = PsGetCurrentThreadProcess(v290),
          v289 == (unsigned int)PsGetProcessSessionIdEx(v291)) )
    {
      v119 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v119 )
        v115 = *v119;
    }
    v121 = *(_QWORD *)(v115 + 280);
    v122 = 0LL;
    *(_QWORD *)(v121 + 32) = 0LL;
    v123 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v120)
      || (v292 = PsGetCurrentProcess(v125, v124, v126),
          v293 = PsGetProcessSessionIdEx(v292),
          v295 = PsGetCurrentThreadProcess(v294),
          v293 == (unsigned int)PsGetProcessSessionIdEx(v295)) )
    {
      v127 = (__int64 *)PsGetThreadWin32Thread(v123);
      if ( v127 )
        v122 = *v127;
    }
    v128 = *(_QWORD *)(v122 + 280);
    v129 = 0LL;
    *(_QWORD *)(v128 + 40) = SpStrokeAndFillPath;
    v130 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpStrokeAndFillPath)
      || (v296 = PsGetCurrentProcess(v132, v131, v133),
          v297 = PsGetProcessSessionIdEx(v296),
          v299 = PsGetCurrentThreadProcess(v298),
          v297 == (unsigned int)PsGetProcessSessionIdEx(v299)) )
    {
      v134 = (__int64 *)PsGetThreadWin32Thread(v130);
      if ( v134 )
        v129 = *v134;
    }
    v135 = *(_QWORD *)(v129 + 280);
    v136 = 0LL;
    *(_QWORD *)(v135 + 48) = SpStrokePath;
    v137 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpStrokePath)
      || (v300 = PsGetCurrentProcess(v139, v138, v140),
          v301 = PsGetProcessSessionIdEx(v300),
          v303 = PsGetCurrentThreadProcess(v302),
          v301 == (unsigned int)PsGetProcessSessionIdEx(v303)) )
    {
      v141 = (__int64 *)PsGetThreadWin32Thread(v137);
      if ( v141 )
        v136 = *v141;
    }
    v142 = *(_QWORD *)(v136 + 280);
    v143 = 0LL;
    *(_QWORD *)(v142 + 56) = SpFillPath;
    v144 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpFillPath)
      || (v304 = PsGetCurrentProcess(v146, v145, v147),
          v305 = PsGetProcessSessionIdEx(v304),
          v307 = PsGetCurrentThreadProcess(v306),
          v305 == (unsigned int)PsGetProcessSessionIdEx(v307)) )
    {
      v148 = (__int64 *)PsGetThreadWin32Thread(v144);
      if ( v148 )
        v143 = *v148;
    }
    v149 = *(_QWORD *)(v143 + 280);
    v150 = 0LL;
    *(_QWORD *)(v149 + 72) = SpBitBlt;
    v151 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpBitBlt)
      || (v308 = PsGetCurrentProcess(v153, v152, v154),
          v309 = PsGetProcessSessionIdEx(v308),
          v311 = PsGetCurrentThreadProcess(v310),
          v309 == (unsigned int)PsGetProcessSessionIdEx(v311)) )
    {
      v155 = (__int64 *)PsGetThreadWin32Thread(v151);
      if ( v155 )
        v150 = *v155;
    }
    v156 = *(_QWORD *)(v150 + 280);
    v157 = 0LL;
    *(_QWORD *)(v156 + 80) = SpCopyBits;
    v158 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpCopyBits)
      || (v312 = PsGetCurrentProcess(v160, v159, v161),
          v313 = PsGetProcessSessionIdEx(v312),
          v315 = PsGetCurrentThreadProcess(v314),
          v313 == (unsigned int)PsGetProcessSessionIdEx(v315)) )
    {
      v162 = (__int64 *)PsGetThreadWin32Thread(v158);
      if ( v162 )
        v157 = *v162;
    }
    v163 = *(_QWORD *)(v157 + 280);
    v164 = 0LL;
    *(_QWORD *)(v163 + 88) = SpStretchBlt;
    v165 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpStretchBlt)
      || (v316 = PsGetCurrentProcess(v167, v166, v168),
          v317 = PsGetProcessSessionIdEx(v316),
          v319 = PsGetCurrentThreadProcess(v318),
          v317 == (unsigned int)PsGetProcessSessionIdEx(v319)) )
    {
      v169 = (__int64 *)PsGetThreadWin32Thread(v165);
      if ( v169 )
        v164 = *v169;
    }
    v170 = *(_QWORD *)(v164 + 280);
    v171 = 0LL;
    *(_QWORD *)(v170 + 96) = SpTextOut;
    v172 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpTextOut)
      || (v320 = PsGetCurrentProcess(v174, v173, v175),
          v321 = PsGetProcessSessionIdEx(v320),
          v323 = PsGetCurrentThreadProcess(v322),
          v321 == (unsigned int)PsGetProcessSessionIdEx(v323)) )
    {
      v176 = (__int64 *)PsGetThreadWin32Thread(v172);
      if ( v176 )
        v171 = *v176;
    }
    v177 = *(_QWORD *)(v171 + 280);
    v178 = 0LL;
    *(_QWORD *)(v177 + 104) = SpLineTo;
    v179 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpLineTo)
      || (v324 = PsGetCurrentProcess(v181, v180, v182),
          v325 = PsGetProcessSessionIdEx(v324),
          v327 = PsGetCurrentThreadProcess(v326),
          v325 == (unsigned int)PsGetProcessSessionIdEx(v327)) )
    {
      v183 = (__int64 *)PsGetThreadWin32Thread(v179);
      if ( v183 )
        v178 = *v183;
    }
    v184 = *(_QWORD *)(v178 + 280);
    v185 = 0LL;
    *(_QWORD *)(v184 + 112) = SpTransparentBlt;
    v186 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpTransparentBlt)
      || (v328 = PsGetCurrentProcess(v188, v187, v189),
          v329 = PsGetProcessSessionIdEx(v328),
          v331 = PsGetCurrentThreadProcess(v330),
          v329 == (unsigned int)PsGetProcessSessionIdEx(v331)) )
    {
      v190 = (__int64 *)PsGetThreadWin32Thread(v186);
      if ( v190 )
        v185 = *v190;
    }
    v191 = *(_QWORD *)(v185 + 280);
    v192 = 0LL;
    *(_QWORD *)(v191 + 120) = SpAlphaBlend;
    v193 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpAlphaBlend)
      || (v332 = PsGetCurrentProcess(v195, v194, v196),
          v333 = PsGetProcessSessionIdEx(v332),
          v335 = PsGetCurrentThreadProcess(v334),
          v333 == (unsigned int)PsGetProcessSessionIdEx(v335)) )
    {
      v197 = (__int64 *)PsGetThreadWin32Thread(v193);
      if ( v197 )
        v192 = *v197;
    }
    v198 = *(_QWORD *)(v192 + 280);
    v199 = 0LL;
    *(_QWORD *)(v198 + 128) = SpPlgBlt;
    v200 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpPlgBlt)
      || (v336 = PsGetCurrentProcess(v202, v201, v203),
          v337 = PsGetProcessSessionIdEx(v336),
          v339 = PsGetCurrentThreadProcess(v338),
          v337 == (unsigned int)PsGetProcessSessionIdEx(v339)) )
    {
      v204 = (__int64 *)PsGetThreadWin32Thread(v200);
      if ( v204 )
        v199 = *v204;
    }
    v205 = *(_QWORD *)(v199 + 280);
    v206 = 0LL;
    *(_QWORD *)(v205 + 136) = SpGradientFill;
    v207 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpGradientFill)
      || (v340 = PsGetCurrentProcess(v209, v208, v210),
          v341 = PsGetProcessSessionIdEx(v340),
          v343 = PsGetCurrentThreadProcess(v342),
          v341 == (unsigned int)PsGetProcessSessionIdEx(v343)) )
    {
      v211 = (__int64 *)PsGetThreadWin32Thread(v207);
      if ( v211 )
        v206 = *v211;
    }
    v212 = *(_QWORD *)(v206 + 280);
    v213 = 0LL;
    *(_QWORD *)(v212 + 152) = SpStretchBltROP;
    v214 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpStretchBltROP)
      || (v344 = PsGetCurrentProcess(v216, v215, v217),
          v345 = PsGetProcessSessionIdEx(v344),
          v347 = PsGetCurrentThreadProcess(v346),
          v345 == (unsigned int)PsGetProcessSessionIdEx(v347)) )
    {
      v218 = (__int64 *)PsGetThreadWin32Thread(v214);
      if ( v218 )
        v213 = *v218;
    }
    *(_QWORD *)(*(_QWORD *)(v213 + 280) + 144LL) = SpSaveScreenBits;
    v219 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(SpSaveScreenBits)
      || (v348 = PsGetCurrentProcess(v221, v220, v222),
          v349 = PsGetProcessSessionIdEx(v348),
          v351 = PsGetCurrentThreadProcess(v350),
          v349 == (unsigned int)PsGetProcessSessionIdEx(v351)) )
    {
      v223 = (__int64 *)PsGetThreadWin32Thread(v219);
      if ( v223 )
        v3 = *v223;
    }
    *(_QWORD *)(*(_QWORD *)(v3 + 280) + 160LL) = SpDrawStream;
  }
}
