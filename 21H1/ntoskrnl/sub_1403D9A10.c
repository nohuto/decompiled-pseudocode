/*
 * XREFs of sub_1403D9A10 @ 0x1403D9A10
 * Callers:
 *     <none>
 * Callees:
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     KeAreAllApcsDisabled @ 0x1402A5D40 (KeAreAllApcsDisabled.c)
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     KeAreApcsDisabled @ 0x14035C8A0 (KeAreApcsDisabled.c)
 *     KeVerifyGroupAffinity @ 0x140374F84 (KeVerifyGroupAffinity.c)
 *     KeCheckProcessorGroupAffinity @ 0x1403962E0 (KeCheckProcessorGroupAffinity.c)
 *     sub_1403E604C @ 0x1403E604C (sub_1403E604C.c)
 *     sub_1403E612C @ 0x1403E612C (sub_1403E612C.c)
 *     sub_1403E7098 @ 0x1403E7098 (sub_1403E7098.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     KiGetNtDdiVersion @ 0x14050F098 (KiGetNtDdiVersion.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     sub_140A0B098 @ 0x140A0B098 (sub_140A0B098.c)
 *     sub_140A0BB30 @ 0x140A0BB30 (sub_140A0BB30.c)
 *     $$b8 @ 0x140A0C3CC ($$b8.c)
 *     sub_140A0C5E8 @ 0x140A0C5E8 (sub_140A0C5E8.c)
 *     sub_140A0CC50 @ 0x140A0CC50 (sub_140A0CC50.c)
 *     KiGetGdtIdt @ 0x140A0DF60 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140A0DF70 (KiGetLdtr.c)
 *     KiGetSs @ 0x140A0DF80 (KiGetSs.c)
 *     KiGetTr @ 0x140A0DF90 (KiGetTr.c)
 *     KiErrata361Present @ 0x140A0DFA0 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140A0DFC0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140A0DFD0 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140A0E080 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140A0E330 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140A0E340 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140A0E550 (RtlInitMinimalBarrier.c)
 *     sub_140A18FE4 @ 0x140A18FE4 (sub_140A18FE4.c)
 */

__int64 __fastcall sub_1403D9A10(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r14
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // ebx
  unsigned __int8 v10; // al
  SIZE_T v11; // rbx
  _SLIST_ENTRY *PoolWithTag; // rax
  PSLIST_ENTRY v13; // r13
  PSLIST_ENTRY v14; // r15
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 v17; // rdi
  __int64 Next_low; // rcx
  __int64 v19; // rbx
  int v20; // esi
  __int64 v21; // rbx
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rdx
  int Next_high; // eax
  unsigned __int64 v26; // rax
  unsigned __int128 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int128 v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // ecx
  int v32; // ecx
  unsigned int v33; // r10d
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // r10d
  __int64 v40; // r14
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rax
  unsigned __int128 v43; // rax
  __int64 v44; // rbx
  unsigned int *v45; // rax
  int v46; // ecx
  unsigned __int64 i7; // r14
  unsigned int Next; // ecx
  unsigned __int64 v49; // r12
  unsigned int v50; // r15d
  unsigned __int64 v51; // rbx
  unsigned int v52; // esi
  int v53; // eax
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // r8
  char *v56; // r13
  unsigned int v57; // ecx
  __int64 v58; // r10
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int128 v65; // rax
  unsigned __int64 v66; // rbx
  __int64 v67; // rcx
  int v68; // eax
  unsigned __int64 v69; // rcx
  int v70; // edx
  bool v71; // zf
  __int64 v72; // r8
  __int64 v73; // rcx
  unsigned int *v74; // rdx
  unsigned __int64 v75; // r11
  int v76; // eax
  int v77; // r10d
  unsigned int v78; // ecx
  unsigned __int64 v79; // rbx
  unsigned __int64 v80; // rsi
  __int64 v81; // r8
  __int64 v82; // r9
  const char *v83; // rsi
  __int64 v84; // r8
  const char *v85; // rax
  int v86; // r11d
  unsigned __int64 v87; // rbx
  unsigned int v88; // r10d
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rbx
  unsigned __int128 v92; // rax
  unsigned int v93; // r8d
  unsigned __int64 v94; // rdx
  __int64 v95; // rax
  unsigned __int64 i34; // rax
  unsigned __int64 v97; // rcx
  unsigned int v98; // ebx
  __int64 v99; // rdx
  unsigned __int8 v100; // r15
  unsigned __int64 v101; // rsi
  __int64 v102; // r13
  unsigned __int64 v103; // r12
  int v104; // eax
  unsigned int v105; // ecx
  int v106; // eax
  unsigned __int64 v107; // rcx
  int v108; // ecx
  unsigned __int64 v109; // rbx
  unsigned __int64 v110; // r12
  unsigned __int64 v111; // r13
  __int64 v112; // r8
  _QWORD *v113; // r9
  const char *v114; // rax
  int v115; // r11d
  __int64 v116; // r15
  unsigned __int64 v117; // rsi
  unsigned int v118; // r10d
  __int64 v119; // rdx
  unsigned __int64 v120; // rax
  __int64 v121; // rsi
  unsigned __int64 v122; // rcx
  __int64 v123; // r8
  unsigned __int64 v124; // rdx
  __int64 v125; // rax
  unsigned __int64 i33; // rax
  __int64 v127; // rbx
  unsigned int v128; // ecx
  unsigned int v129; // esi
  unsigned __int8 v130; // r12
  unsigned __int64 v131; // r13
  unsigned __int64 v132; // r15
  int v133; // eax
  int *v134; // rsi
  bool v135; // zf
  __int64 v136; // rax
  __int64 v137; // rbx
  unsigned __int16 v138; // dx
  _QWORD *v139; // rsi
  __int64 v140; // r8
  _QWORD *v141; // r9
  const char *v142; // rax
  int v143; // r10d
  __int64 v144; // r14
  unsigned __int64 v145; // rbx
  unsigned int v146; // r11d
  __int64 v147; // rax
  __int64 v148; // rbx
  unsigned __int128 v149; // rax
  __int64 v150; // r8
  unsigned __int64 v151; // rax
  __int64 v152; // rax
  unsigned __int64 i32; // rax
  unsigned int v154; // ebx
  __int64 v155; // rcx
  __int64 v156; // rdx
  unsigned __int8 v157; // r12
  unsigned __int64 v158; // rsi
  unsigned __int64 v159; // r13
  unsigned __int64 v160; // r14
  int v161; // eax
  __int16 v162; // ax
  __int64 v163; // rcx
  int (__fastcall *v164)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *); // rax
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rcx
  void (*v168)(void); // rax
  int v169; // eax
  __int64 v170; // rcx
  unsigned int i31; // ebx
  __int64 v172; // rcx
  unsigned __int64 v173; // rdx
  __int64 v174; // r9
  __int64 v175; // r8
  unsigned __int64 v176; // rdx
  unsigned __int64 v177; // r9
  unsigned __int64 v178; // r8
  int v179; // eax
  int v180; // ecx
  unsigned __int64 v181; // rax
  unsigned __int128 v182; // rax
  void (*v183)(void); // rax
  int v184; // r14d
  __int64 v185; // rbx
  unsigned int v186; // ecx
  unsigned __int8 v187; // si
  volatile signed __int8 **v188; // r8
  volatile signed __int8 *v189; // rdx
  __int64 v190; // r12
  unsigned __int64 v191; // r13
  __int64 *v192; // rax
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 *v195; // r15
  _BYTE *v196; // rbx
  char v197; // cl
  __int64 v198; // rdx
  int *v199; // rcx
  __int64 v200; // rcx
  __int64 v201; // rax
  bool v202; // zf
  int *v203; // rcx
  void (*v204)(void); // rax
  int v205; // r13d
  __int64 v206; // rbx
  unsigned int v207; // ecx
  unsigned __int8 v208; // si
  __int64 v209; // r8
  __int64 v210; // r9
  _QWORD **v211; // r15
  _QWORD *v212; // r14
  unsigned __int64 v213; // rbx
  int *v214; // rcx
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  unsigned __int64 *v218; // r12
  unsigned __int8 v219; // r15
  int v220; // r13d
  int *v221; // rsi
  unsigned __int8 v222; // r15
  __int64 v223; // rcx
  unsigned __int64 v224; // rbx
  const char *v225; // rsi
  __int64 v226; // r8
  const char *v227; // rax
  int v228; // r11d
  unsigned __int64 v229; // rbx
  unsigned int v230; // r10d
  __int64 v231; // rax
  __int64 v232; // rbx
  unsigned __int128 v233; // rax
  unsigned __int64 v234; // rax
  __int64 v235; // rax
  unsigned __int64 i30; // rax
  unsigned int v237; // ebx
  __int64 v238; // rcx
  __int64 v239; // rdx
  unsigned __int8 v240; // r12
  unsigned __int64 v241; // rsi
  unsigned __int64 v242; // r13
  int v243; // eax
  __int64 v244; // rcx
  unsigned int *v245; // rsi
  _QWORD *v246; // r12
  void (*v247)(void); // rax
  __int64 v248; // rbx
  unsigned int v249; // ecx
  void (__fastcall *v250)(__int64, _QWORD); // rax
  unsigned __int64 *v251; // r9
  __int64 v252; // r13
  unsigned __int64 v253; // r8
  __int64 v254; // rdx
  __int64 v255; // rax
  _QWORD **v256; // r15
  _QWORD *v257; // rsi
  unsigned int v258; // r13d
  unsigned __int8 v259; // r12
  __int64 v260; // r14
  char *v261; // rbx
  __int64 v262; // rcx
  __int64 v263; // r8
  int *v264; // rcx
  _QWORD **v265; // r10
  _QWORD *i15; // r9
  int v267; // r12d
  __int64 v268; // r13
  __int64 v269; // rbx
  void (*v270)(void); // rax
  unsigned int v271; // ecx
  volatile signed __int8 **v272; // r8
  volatile signed __int8 *v273; // rdx
  __int64 v274; // r9
  _QWORD **v275; // r15
  _QWORD *v276; // rsi
  __int64 v277; // rax
  int *v278; // r13
  char *v279; // rcx
  __int64 v280; // r8
  __int64 v281; // rdx
  __int64 v282; // rbx
  _QWORD **v283; // r15
  __int64 (*v284)(void); // rax
  __int64 v285; // rcx
  __int64 v286; // rdx
  unsigned int v287; // r13d
  unsigned int *v288; // rcx
  __int64 v289; // r12
  _QWORD *v290; // rax
  unsigned __int64 v291; // rax
  __int64 v292; // rcx
  int v293; // ebx
  unsigned __int64 v294; // rax
  unsigned __int128 v295; // rax
  __int64 v296; // r8
  unsigned __int64 v297; // rsi
  __int64 v298; // rax
  __int64 v299; // r11
  int v300; // r10d
  _QWORD *v301; // r9
  unsigned __int64 v302; // r8
  unsigned __int64 v303; // rax
  unsigned __int128 v304; // rax
  unsigned __int64 v305; // rax
  unsigned __int128 v306; // rax
  unsigned __int64 v307; // rdx
  unsigned int v308; // ebx
  _QWORD *v309; // r8
  unsigned __int64 v310; // rax
  unsigned __int128 v311; // rax
  unsigned __int64 v312; // rax
  unsigned __int128 v313; // rax
  unsigned __int64 v314; // rdx
  _QWORD *v315; // rbx
  __int64 v316; // rsi
  __int64 v317; // rax
  unsigned __int64 v318; // rsi
  unsigned int *v319; // r15
  unsigned __int64 v320; // rbx
  __int64 v321; // r9
  int v322; // edx
  __int64 v323; // r8
  int v324; // ecx
  int *v325; // rcx
  unsigned __int64 v326; // rax
  unsigned __int128 v327; // rax
  int v328; // ecx
  int v329; // ecx
  int v330; // ecx
  int v331; // ecx
  int v332; // ecx
  char *v333; // rbx
  int i16; // r13d
  unsigned int v335; // esi
  __int64 v336; // r8
  __int64 v337; // r9
  _QWORD *v338; // rcx
  int v339; // edx
  char v340; // al
  __int64 v341; // rax
  __int64 v342; // rcx
  __int64 (__fastcall *v343)(_QWORD); // rax
  char *v344; // r12
  char *v345; // rbx
  int v346; // r15d
  __int64 v347; // rsi
  __int64 v348; // r8
  _QWORD *v349; // rcx
  int v350; // edx
  char v351; // al
  __int64 v352; // rax
  __int64 v353; // rax
  __int64 (__fastcall *v354)(unsigned __int64); // rax
  _BYTE *v355; // rbx
  __int64 *v356; // rax
  __int64 v357; // rsi
  int *v358; // rcx
  __int64 v359; // rax
  __int64 v360; // rax
  __int64 v361; // rax
  __int64 (__fastcall *v362)(__int64, char *); // rax
  __int64 v363; // rax
  ULONG_PTR v364; // r12
  unsigned int v365; // r15d
  unsigned __int64 v366; // r13
  int v367; // ecx
  int v368; // ecx
  int *v369; // rax
  __int64 v370; // rdx
  int v371; // r10d
  unsigned int v372; // r11d
  __int64 v373; // rsi
  int *v374; // r8
  __int64 v375; // r9
  int v376; // ecx
  int v377; // ecx
  int v378; // ecx
  int v379; // ecx
  __int64 v380; // rax
  int v381; // eax
  unsigned __int64 v382; // rcx
  __int64 v383; // r11
  unsigned int v384; // eax
  __int64 v385; // rdx
  int v386; // eax
  __int64 (__fastcall *v387)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  __int64 v388; // rdx
  __int64 (__fastcall *v389)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v390; // rax
  __int64 v391; // rdx
  __int64 (__fastcall *v392)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 (__fastcall *v393)(ULONG_PTR); // rax
  __int64 v394; // rsi
  __int64 v395; // rax
  __int64 v396; // r8
  int v397; // r9d
  unsigned int v398; // eax
  __int64 v399; // rsi
  int v400; // edx
  unsigned int v401; // ecx
  __int64 v402; // r9
  _QWORD *v403; // rax
  int v404; // r8d
  unsigned __int64 v405; // rdx
  int v406; // ebx
  int v407; // ecx
  unsigned __int64 v408; // r15
  ULONG_PTR *v409; // r13
  unsigned int *v410; // rdi
  __int64 v411; // r12
  int v412; // ecx
  _QWORD *v413; // r14
  __int64 v414; // rdx
  _QWORD *v415; // rax
  _QWORD *v416; // r10
  const char *v417; // rax
  int v418; // ebx
  __int64 v419; // r11
  unsigned __int64 v420; // r8
  unsigned int v421; // r9d
  __int64 v422; // rdx
  __int64 v423; // rax
  __int64 v424; // r8
  __int64 v425; // rax
  unsigned int v426; // edx
  unsigned __int64 v427; // r9
  unsigned __int64 i18; // rax
  _DWORD *v429; // rbx
  unsigned int v430; // r13d
  unsigned int v431; // r9d
  _QWORD *v432; // rsi
  unsigned int *v433; // r12
  int v434; // ecx
  _QWORD *v435; // rax
  __int64 v436; // rdx
  _QWORD *v437; // r10
  const char *v438; // rax
  int v439; // r14d
  __int64 v440; // r15
  unsigned __int64 v441; // rcx
  __int64 v442; // r8
  unsigned int v443; // r11d
  __int64 v444; // rax
  __int64 v445; // r8
  unsigned __int128 v446; // rax
  unsigned __int64 v447; // rax
  __int64 v448; // rax
  unsigned __int64 i19; // rax
  _DWORD *v450; // rdx
  __int64 v451; // r15
  unsigned int v452; // eax
  __int64 v453; // rsi
  int v454; // edx
  unsigned int v455; // ecx
  __int64 v456; // r9
  int v457; // r8d
  unsigned __int64 v458; // rax
  int v459; // ebx
  int v460; // ecx
  __int64 v461; // r15
  _QWORD *v462; // rax
  int v463; // ecx
  __int64 v464; // rdx
  const char *v465; // r12
  int v466; // r11d
  __int64 v467; // rbx
  const char *v468; // rax
  unsigned int v469; // r10d
  __int64 v470; // rdx
  __int64 v471; // rax
  __int64 v472; // r8
  unsigned __int64 v473; // rcx
  unsigned int v474; // edx
  unsigned __int64 v475; // r10
  __int64 v476; // rax
  unsigned __int64 i20; // rax
  __int64 v478; // rdx
  _DWORD *v479; // rsi
  ULONG_PTR v480; // r15
  __int64 v481; // rax
  __int64 v482; // rcx
  unsigned __int64 v483; // rcx
  _QWORD *v484; // rax
  _QWORD *v485; // rax
  ULONG_PTR v486; // rsi
  __int64 v487; // rax
  unsigned __int16 v488; // r15
  __int64 v489; // r8
  unsigned int v490; // ecx
  unsigned int v491; // r10d
  unsigned int *v492; // r12
  __int64 v493; // r11
  _DWORD *v494; // rdx
  unsigned int v495; // r13d
  unsigned int v496; // r13d
  unsigned int v497; // eax
  __int64 v498; // rax
  unsigned int v499; // r14d
  unsigned int v500; // r15d
  unsigned int *v501; // rax
  __int64 v502; // r9
  unsigned int *v503; // rsi
  ULONG_PTR v504; // r8
  unsigned int *v505; // rax
  __int64 v506; // r8
  unsigned int v507; // eax
  __int64 v508; // r13
  unsigned int v509; // ecx
  __int64 v510; // rsi
  unsigned int v511; // eax
  _BYTE *v512; // r12
  int v513; // edx
  unsigned int v514; // ecx
  __int64 v515; // r9
  int v516; // r8d
  unsigned __int64 v517; // rax
  int v518; // ebx
  int v519; // ecx
  _BYTE *v520; // rdx
  int v521; // ecx
  _QWORD *v522; // rax
  __int64 v523; // r8
  unsigned __int64 v524; // rax
  unsigned __int64 v525; // rcx
  unsigned __int64 i21; // rax
  unsigned int v527; // r15d
  __int64 v528; // rax
  unsigned __int64 v529; // r8
  __int64 v530; // rcx
  __int64 v531; // rdx
  _DWORD *v532; // rax
  __int64 v533; // rcx
  unsigned __int8 *v534; // rbx
  int v535; // r11d
  int v536; // ecx
  __int16 v537; // ax
  int v538; // r10d
  unsigned __int8 *v539; // r8
  unsigned __int8 *v540; // r9
  __int64 v541; // rdx
  __int64 v542; // rax
  __int64 *v543; // r9
  unsigned int v544; // r8d
  __int64 *v545; // r10
  __int64 v546; // rcx
  __int64 v547; // rax
  __int64 v548; // rdx
  __int64 v549; // rax
  unsigned __int8 *v550; // r8
  int v551; // r10d
  unsigned __int8 *v552; // r9
  __int64 v553; // rdx
  __int64 v554; // rax
  unsigned __int8 *v555; // r8
  int v556; // r10d
  unsigned __int8 *v557; // r9
  __int64 v558; // rdx
  __int64 v559; // rax
  int v560; // ecx
  ULONG_PTR v561; // rdx
  unsigned int v562; // ecx
  unsigned int v563; // esi
  unsigned int *v564; // r8
  unsigned int v565; // ecx
  unsigned int v566; // r10d
  unsigned int v567; // r12d
  unsigned int v568; // r13d
  unsigned __int64 *v569; // r8
  __int64 v570; // rax
  unsigned int v571; // r9d
  unsigned __int64 v572; // rbx
  unsigned __int64 v573; // r11
  unsigned int *v574; // rdx
  __int64 v575; // rax
  _QWORD *v576; // r10
  int v577; // esi
  unsigned __int64 v578; // r14
  const char *v579; // rax
  unsigned int v580; // r11d
  unsigned __int64 v581; // r8
  __int64 v582; // rax
  __int64 v583; // r8
  unsigned __int128 v584; // rax
  unsigned int v585; // r9d
  unsigned __int64 v586; // rax
  __int64 v587; // rax
  unsigned __int64 i22; // rax
  bool v589; // cc
  int v590; // r12d
  unsigned int *v591; // rax
  char v592; // r8
  __int64 v593; // rbx
  __int64 v594; // r14
  __int64 v595; // rcx
  ULONG_PTR v596; // rdx
  ULONG_PTR *v597; // r8
  unsigned int v598; // r9d
  unsigned __int64 v599; // rsi
  unsigned int v600; // r10d
  unsigned int *v601; // rdx
  ULONG_PTR v602; // r11
  _QWORD *v603; // r10
  int v604; // r14d
  __int64 v605; // rbx
  const char *v606; // rax
  unsigned __int64 v607; // r8
  unsigned int v608; // r11d
  __int64 v609; // rdx
  __int64 v610; // rax
  __int64 v611; // r8
  unsigned __int64 v612; // rcx
  unsigned int v613; // r9d
  unsigned __int64 v614; // rdx
  __int64 v615; // rax
  unsigned __int64 i23; // rax
  char *v617; // rax
  unsigned int v618; // r15d
  unsigned int *v619; // r14
  ULONG_PTR v620; // rbx
  unsigned int *v621; // rdx
  unsigned __int64 *v622; // r8
  __int64 v623; // rax
  unsigned int v624; // r9d
  unsigned __int64 v625; // rbx
  unsigned int v626; // r10d
  unsigned __int64 v627; // r11
  _QWORD *v628; // r10
  const char *v629; // rax
  int v630; // r14d
  __int64 v631; // rsi
  unsigned __int64 v632; // r8
  unsigned int v633; // r11d
  __int64 v634; // rdx
  __int64 v635; // rax
  __int64 v636; // r8
  unsigned __int64 v637; // rcx
  unsigned int v638; // r9d
  unsigned __int64 v639; // rdx
  __int64 v640; // rax
  unsigned __int64 i24; // rax
  __int64 v642; // rcx
  char *v643; // rax
  _BYTE *v644; // rax
  char *v645; // rdx
  char *v646; // rbx
  __int64 v647; // r12
  int v648; // eax
  __int64 v649; // rdx
  __int64 v650; // r8
  __int64 v651; // rsi
  __int64 v652; // rax
  __int64 v653; // r8
  _QWORD *v654; // rcx
  int v655; // edx
  char v656; // al
  __int64 v657; // rax
  __int64 v658; // rax
  char *v659; // rbx
  __int64 i17; // rsi
  __int64 v661; // r8
  __int64 v662; // r9
  _QWORD *v663; // rcx
  int v664; // edx
  char v665; // al
  __int64 v666; // rax
  __int64 v667; // rax
  char *v668; // rbx
  __int64 v669; // r8
  __int64 v670; // r9
  _QWORD *v671; // rcx
  int v672; // edx
  char v673; // al
  __int64 v674; // rax
  __int64 v675; // rax
  __int64 v676; // rsi
  int v677; // ebx
  __int64 v678; // rax
  __int64 v679; // rdx
  unsigned __int64 v680; // rbx
  __int64 v681; // rcx
  __int64 v682; // rdx
  __int64 v683; // rsi
  unsigned __int64 v684; // rax
  __int64 v685; // r8
  __int64 v686; // r9
  __int64 v687; // rcx
  unsigned __int64 v688; // rbx
  unsigned __int64 v689; // rcx
  unsigned int v690; // ecx
  _QWORD *v691; // rsi
  __int64 v692; // r8
  _QWORD *v693; // r9
  const char *v694; // rax
  int v695; // r11d
  unsigned __int64 v696; // rbx
  unsigned int v697; // r10d
  __int64 v698; // rdx
  __int64 v699; // rax
  __int64 v700; // rbx
  unsigned __int128 v701; // rax
  __int64 v702; // r8
  unsigned __int64 v703; // rdx
  __int64 v704; // rax
  unsigned __int64 i14; // rax
  unsigned int v706; // ebx
  __int64 v707; // rcx
  __int64 v708; // rdx
  unsigned __int8 v709; // r15
  unsigned __int64 v710; // rsi
  __int64 v711; // r13
  unsigned __int64 v712; // r12
  int v713; // eax
  __int64 v714; // r8
  __int64 v715; // r8
  __int64 *v716; // r9
  unsigned __int8 *v717; // r10
  __int64 v718; // rcx
  __int64 v719; // rax
  __int64 v720; // rdx
  __int64 v721; // rax
  int v722; // eax
  __int64 v723; // rcx
  __int64 v724; // rdx
  __int64 v725; // rcx
  unsigned __int64 v726; // rbx
  __int64 v727; // r12
  unsigned __int64 v728; // r15
  unsigned __int64 v729; // rsi
  int v730; // eax
  __int64 v731; // r8
  __int16 v732; // ax
  __int64 v733; // rcx
  int (__fastcall *v734)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *); // rax
  __int64 (*v735)(void); // rax
  __int64 v736; // rax
  __int64 (*v737)(void); // rax
  __int64 v738; // rax
  unsigned int v739; // r10d
  unsigned __int8 v740; // dl
  __int64 v741; // r15
  _QWORD *v742; // rsi
  __int64 v743; // r9
  _QWORD *v744; // r10
  const char *v745; // rax
  int v746; // ebx
  __int64 v747; // r14
  unsigned __int64 v748; // r8
  unsigned int v749; // r11d
  __int64 v750; // rax
  __int64 v751; // r8
  unsigned __int128 v752; // rax
  unsigned __int64 v753; // rax
  __int64 v754; // rax
  unsigned __int64 i10; // rax
  unsigned int v756; // r10d
  const char *v757; // rsi
  unsigned __int8 v758; // dl
  unsigned __int64 v759; // rcx
  const char *v760; // r9
  int v761; // ebx
  const char *v762; // rax
  const char *v763; // rcx
  unsigned int v764; // r11d
  unsigned __int64 v765; // r8
  __int64 v766; // rdx
  __int64 v767; // rax
  __int64 v768; // r8
  unsigned __int64 v769; // rcx
  unsigned int v770; // r10d
  unsigned __int64 v771; // rdx
  __int64 v772; // rax
  unsigned __int64 i11; // rax
  __int64 v774; // rax
  _QWORD *v775; // rcx
  int v776; // edx
  char v777; // al
  __int64 v778; // rax
  __int64 v779; // rcx
  _QWORD *v780; // rsi
  _QWORD *v781; // r9
  int v782; // r11d
  const char *v783; // rax
  __int64 v784; // r14
  unsigned __int64 v785; // rbx
  unsigned int v786; // r10d
  __int64 v787; // rax
  __int64 v788; // rbx
  unsigned __int64 v789; // rcx
  __int64 v790; // r8
  unsigned __int64 v791; // rax
  __int64 v792; // rax
  unsigned __int64 i12; // rax
  unsigned int v794; // ebx
  __int64 v795; // rcx
  __int64 v796; // rdx
  unsigned __int8 v797; // r12
  unsigned __int64 v798; // rsi
  unsigned __int64 v799; // r13
  unsigned __int64 v800; // r14
  int v801; // eax
  unsigned int v802; // r9d
  _QWORD *v803; // r10
  int v804; // ebx
  const char *v805; // rax
  __int64 v806; // rsi
  unsigned __int64 v807; // rcx
  unsigned int v808; // r11d
  __int64 v809; // rdx
  unsigned __int64 v810; // rax
  __int64 v811; // r8
  unsigned __int64 v812; // rcx
  unsigned __int64 v813; // rdx
  __int64 v814; // rax
  unsigned __int64 i13; // rax
  int v816; // eax
  __int64 v817; // rcx
  unsigned __int64 v818; // rcx
  const char *v819; // rsi
  __int64 v820; // r8
  __int64 v821; // r9
  const char *v822; // rax
  int v823; // r10d
  __int64 j; // r14
  unsigned __int64 v825; // rbx
  unsigned int v826; // r11d
  __int64 v827; // rax
  __int64 v828; // rbx
  unsigned __int128 v829; // rax
  char v830; // r10
  __int64 v831; // r8
  unsigned __int64 v832; // rax
  __int64 v833; // rax
  unsigned __int64 k; // rax
  unsigned int v835; // ebx
  __int64 v836; // rcx
  __int64 v837; // rdx
  unsigned __int8 v838; // r12
  unsigned __int64 v839; // rsi
  unsigned __int64 v840; // r13
  unsigned __int64 v841; // r14
  int v842; // eax
  int v843; // eax
  __int64 v844; // rcx
  __int64 v845; // rcx
  unsigned __int8 v846; // r14
  __int64 v847; // rdx
  unsigned int *v848; // rcx
  unsigned int *v849; // rbx
  char v850; // r15
  unsigned __int64 v851; // r12
  __int64 v852; // r8
  __int64 *v853; // r9
  unsigned int *v854; // r10
  __int64 v855; // rcx
  __int64 v856; // rax
  __int64 v857; // rax
  __int64 v858; // r8
  __int64 v859; // r9
  __int64 v860; // rcx
  unsigned __int64 v861; // rdx
  unsigned int *v862; // rcx
  unsigned int *v863; // rbx
  unsigned __int64 v864; // rsi
  unsigned __int64 v865; // rcx
  unsigned __int64 v866; // rax
  unsigned int v867; // edx
  unsigned int v868; // ecx
  int v869; // edx
  unsigned __int64 v870; // rbx
  unsigned __int64 v871; // rsi
  const char *v872; // rsi
  __int64 v873; // r8
  const char *v874; // rax
  int v875; // r11d
  __int64 m; // r14
  unsigned __int64 v877; // rbx
  unsigned int v878; // r10d
  __int64 v879; // rdx
  __int64 v880; // rax
  __int64 v881; // rbx
  unsigned __int64 v882; // rcx
  unsigned __int64 v883; // rdx
  __int64 v884; // rax
  unsigned __int64 n; // rax
  unsigned int v886; // edx
  unsigned int v887; // ebx
  __int64 v888; // rcx
  unsigned __int8 v889; // r15
  unsigned __int64 v890; // rsi
  __int64 v891; // r13
  unsigned __int64 v892; // r12
  unsigned __int64 v893; // r14
  int v894; // eax
  int v895; // eax
  __int64 v896; // rbx
  __int64 v897; // rcx
  __int64 v898; // rdx
  __int64 v899; // rax
  int v900; // eax
  __int64 v901; // rcx
  __int64 v902; // rcx
  __int64 v903; // rdx
  __int64 v904; // rax
  int v905; // eax
  __int64 v906; // rcx
  int v907; // eax
  __int64 v908; // rcx
  __int64 v909; // rax
  __int64 v910; // rcx
  const char *v911; // rsi
  __int64 v912; // r8
  const char *v913; // rax
  int v914; // r11d
  __int64 ii; // r14
  unsigned __int64 v916; // rbx
  unsigned int v917; // r10d
  __int64 v918; // rax
  __int64 v919; // rbx
  unsigned __int64 v920; // rcx
  unsigned __int64 v921; // rax
  __int64 v922; // rax
  unsigned __int64 jj; // rax
  unsigned int v924; // ebx
  __int64 v925; // rcx
  __int64 v926; // rdx
  unsigned __int8 v927; // r12
  unsigned __int64 v928; // rsi
  unsigned __int64 v929; // r13
  int v930; // eax
  int v931; // eax
  __int64 v932; // rbx
  __int64 (__fastcall *v933)(_QWORD); // rax
  unsigned int v934; // esi
  __int64 v935; // rax
  unsigned __int8 v936; // bl
  __int64 v937; // r8
  __int64 v938; // r9
  char v939; // si
  char v940; // r13
  char *v941; // r12
  __int64 v942; // r12
  unsigned __int64 v943; // rbx
  char *v944; // rsi
  unsigned __int64 *v945; // rsi
  unsigned __int64 v946; // rcx
  unsigned __int64 *v947; // rbx
  unsigned __int8 v948; // si
  __int64 v949; // r13
  __int64 v950; // rdx
  unsigned __int64 v951; // r12
  unsigned __int64 v952; // rcx
  __int64 v953; // r8
  __int64 v954; // r9
  _QWORD *v955; // rcx
  int v956; // edx
  char v957; // al
  unsigned __int8 v958; // bl
  __int64 v959; // r8
  __int64 v960; // r9
  char v961; // si
  char v962; // r13
  char *v963; // r12
  __int64 v964; // r12
  unsigned __int64 v965; // rbx
  char *v966; // rsi
  unsigned __int64 v967; // rcx
  unsigned __int64 *v968; // rbx
  unsigned __int8 v969; // si
  __int64 v970; // r13
  __int64 v971; // rdx
  unsigned __int64 v972; // r12
  unsigned __int64 v973; // rcx
  __int64 v974; // r8
  __int64 v975; // r9
  _QWORD *v976; // rcx
  int v977; // edx
  char v978; // al
  __int64 (__fastcall *v979)(__int64); // rax
  __int64 v980; // r15
  __int64 v981; // r12
  unsigned __int8 v982; // bl
  unsigned __int8 v983; // r13
  __int64 v984; // r8
  __int64 v985; // r9
  int *v986; // r14
  char v987; // si
  unsigned __int64 v988; // rbx
  char v989; // al
  int *v990; // rsi
  char v991; // al
  unsigned __int64 *v992; // rsi
  unsigned __int64 v993; // rcx
  unsigned __int64 *v994; // rbx
  __int64 v995; // r15
  char *v996; // rsi
  __int64 v997; // rdx
  unsigned __int64 v998; // rcx
  __int64 v999; // r8
  _QWORD *v1000; // rcx
  int v1001; // edx
  char v1002; // al
  unsigned int v1003; // esi
  int v1004; // ecx
  __int64 v1005; // r8
  unsigned __int64 v1006; // rcx
  __int64 v1007; // r9
  unsigned int *v1008; // rbx
  unsigned __int64 v1009; // r10
  unsigned int v1010; // r11d
  unsigned __int64 v1011; // rdx
  unsigned int v1012; // eax
  unsigned __int64 v1013; // r12
  __int64 v1014; // r9
  _QWORD *v1015; // r10
  int v1016; // ebx
  const char *v1017; // rax
  unsigned __int64 v1018; // rsi
  __int64 v1019; // r15
  unsigned __int64 v1020; // r8
  unsigned int v1021; // r11d
  __int64 v1022; // rdx
  __int64 v1023; // rax
  __int64 v1024; // r8
  unsigned __int64 v1025; // rcx
  __int64 v1026; // r9
  unsigned __int64 v1027; // rdx
  __int64 v1028; // rax
  unsigned __int64 kk; // rax
  char v1030; // cl
  unsigned int v1031; // r13d
  unsigned __int8 v1032; // r14
  unsigned __int64 v1033; // rbx
  __int64 v1034; // r12
  unsigned __int64 v1035; // r15
  unsigned __int64 v1036; // rsi
  int v1037; // eax
  __int64 v1038; // rcx
  int *v1039; // rdx
  __int64 v1040; // r15
  __int64 v1041; // r8
  _QWORD *v1042; // r9
  int v1043; // r11d
  const char *v1044; // rax
  unsigned __int64 v1045; // rsi
  __int64 v1046; // r12
  unsigned __int64 v1047; // rbx
  unsigned int v1048; // r10d
  __int64 v1049; // rax
  __int64 v1050; // rbx
  unsigned __int128 v1051; // rax
  __int64 v1052; // r8
  unsigned __int64 v1053; // rax
  __int64 v1054; // rax
  unsigned __int64 mm; // rax
  unsigned int v1056; // ecx
  unsigned int v1057; // ebx
  unsigned __int8 v1058; // r15
  unsigned __int64 v1059; // rsi
  __int64 v1060; // r13
  unsigned __int64 v1061; // r12
  int v1062; // eax
  __int64 v1063; // rax
  __int64 v1064; // rcx
  _QWORD *v1065; // rsi
  __int64 v1066; // r8
  _QWORD *v1067; // r9
  const char *v1068; // rax
  int v1069; // r11d
  unsigned __int64 v1070; // rbx
  unsigned int v1071; // r10d
  __int64 v1072; // rdx
  __int64 v1073; // rax
  __int64 v1074; // rbx
  unsigned __int64 v1075; // rcx
  __int64 v1076; // r8
  unsigned __int64 v1077; // rdx
  __int64 v1078; // rax
  unsigned __int64 i; // rax
  unsigned int v1080; // ebx
  __int64 v1081; // rcx
  __int64 v1082; // rdx
  unsigned __int8 v1083; // r12
  unsigned __int64 v1084; // rsi
  unsigned __int64 v1085; // r13
  int v1086; // eax
  int v1087; // r12d
  unsigned __int64 **v1088; // r15
  unsigned int v1089; // eax
  __int64 v1090; // r13
  char *v1091; // rbx
  __int64 v1092; // rsi
  __int64 v1093; // r8
  _QWORD *v1094; // rcx
  int v1095; // edx
  char v1096; // al
  __int64 v1097; // rax
  __int64 v1098; // rax
  int v1099; // eax
  __int64 v1100; // rcx
  volatile signed __int32 *v1101; // rcx
  const char *v1102; // rsi
  __int64 v1103; // r8
  __int64 v1104; // r9
  const char *v1105; // rax
  int v1106; // r10d
  __int64 nn; // r14
  unsigned __int64 v1108; // rbx
  unsigned int v1109; // r11d
  __int64 v1110; // rax
  __int64 v1111; // rbx
  unsigned __int128 v1112; // rax
  __int64 v1113; // r8
  unsigned __int64 v1114; // rax
  __int64 v1115; // rax
  unsigned __int64 i1; // rax
  unsigned int v1117; // ebx
  __int64 v1118; // rcx
  __int64 v1119; // rdx
  unsigned __int8 v1120; // r12
  unsigned __int64 v1121; // rsi
  unsigned __int64 v1122; // r13
  unsigned __int64 v1123; // r14
  int v1124; // eax
  unsigned __int64 v1125; // rcx
  int v1126; // eax
  __int64 v1127; // rcx
  unsigned int v1128; // edx
  int v1129; // ecx
  unsigned __int64 v1130; // rbx
  unsigned __int64 v1131; // rsi
  __int64 v1132; // r8
  __int64 v1133; // r9
  const char *v1134; // rsi
  __int64 v1135; // r8
  const char *v1136; // rax
  int v1137; // r10d
  __int64 i2; // r14
  unsigned __int64 v1139; // rbx
  unsigned int v1140; // r11d
  __int64 v1141; // rax
  __int64 v1142; // rbx
  unsigned __int128 v1143; // rax
  unsigned int v1144; // r8d
  unsigned __int64 v1145; // rax
  __int64 v1146; // rax
  unsigned __int64 i3; // rax
  __int64 v1148; // rdx
  unsigned __int8 v1149; // r15
  unsigned __int64 v1150; // rsi
  __int64 v1151; // r13
  unsigned __int64 v1152; // r12
  int v1153; // eax
  __int64 v1154; // rsi
  __int64 v1155; // rcx
  int v1156; // eax
  __int64 v1157; // rcx
  unsigned int v1158; // ebx
  _QWORD *v1159; // rcx
  int v1160; // edx
  char v1161; // al
  __int64 v1162; // rcx
  int v1163; // esi
  unsigned int v1164; // ecx
  char v1165; // bl
  volatile signed __int8 **v1166; // r8
  volatile signed __int8 *v1167; // rdx
  unsigned __int8 v1168; // bl
  int v1169; // ecx
  unsigned int v1170; // eax
  unsigned int v1171; // ecx
  int v1172; // edx
  unsigned __int64 v1173; // rbx
  unsigned __int64 v1174; // rsi
  __int64 v1175; // r8
  __int64 v1176; // r9
  const char *v1177; // rsi
  __int64 v1178; // r8
  __int64 v1179; // r9
  const char *v1180; // rax
  int v1181; // r11d
  unsigned __int64 v1182; // rbx
  unsigned int v1183; // r10d
  __int64 v1184; // rdx
  __int64 v1185; // rax
  __int64 v1186; // rbx
  unsigned __int64 v1187; // rcx
  unsigned int v1188; // r8d
  unsigned __int64 v1189; // rdx
  __int64 v1190; // rax
  unsigned __int64 i8; // rax
  unsigned int v1192; // edx
  unsigned int v1193; // ebx
  __int64 v1194; // rcx
  __int64 v1195; // r8
  unsigned __int8 v1196; // r15
  unsigned __int64 v1197; // rsi
  __int64 v1198; // r13
  unsigned __int64 v1199; // r12
  int v1200; // eax
  __int64 v1201; // r13
  __int64 v1202; // rax
  unsigned int v1203; // r15d
  int v1204; // eax
  unsigned __int64 v1205; // rcx
  __int64 v1206; // rcx
  const char *v1207; // rsi
  __int64 v1208; // r8
  const char *v1209; // rax
  int v1210; // r11d
  unsigned __int64 v1211; // rbx
  unsigned int v1212; // r10d
  __int64 v1213; // rax
  __int64 v1214; // rbx
  unsigned __int64 v1215; // rcx
  unsigned __int64 v1216; // rax
  __int64 v1217; // rax
  unsigned __int64 i9; // rax
  unsigned int v1219; // ebx
  __int64 v1220; // rcx
  __int64 v1221; // rdx
  unsigned __int8 v1222; // r12
  unsigned __int64 v1223; // rsi
  unsigned __int64 v1224; // r13
  int v1225; // eax
  unsigned int v1226; // ecx
  unsigned int v1227; // r11d
  unsigned int v1228; // r12d
  int v1229; // ecx
  __int16 v1230; // ax
  char *v1231; // r8
  int v1232; // r10d
  unsigned __int8 *v1233; // r9
  __int64 v1234; // rdx
  __int64 v1235; // rax
  __int64 v1236; // r8
  __int64 v1237; // rax
  __int64 *v1238; // r9
  unsigned int v1239; // r8d
  __int64 *v1240; // r10
  __int64 v1241; // rcx
  __int64 v1242; // rax
  __int64 v1243; // rdx
  __int64 v1244; // rax
  unsigned __int8 *v1245; // r8
  int v1246; // r10d
  unsigned __int8 *v1247; // r9
  __int64 v1248; // rdx
  __int64 v1249; // rax
  unsigned __int8 *v1250; // r8
  int v1251; // r10d
  unsigned __int8 *v1252; // r9
  __int64 v1253; // rdx
  __int64 v1254; // rax
  int v1255; // eax
  BOOL v1256; // esi
  __int64 v1257; // rbx
  int v1258; // eax
  __int64 v1259; // r9
  int *v1260; // rcx
  int v1261; // eax
  unsigned __int64 v1262; // rcx
  unsigned __int8 v1263; // bl
  unsigned int v1264; // edx
  int v1265; // ecx
  __int64 v1266; // rbx
  unsigned __int64 v1267; // rsi
  __int64 v1268; // rbx
  unsigned __int64 v1269; // rbx
  __int64 v1270; // r8
  __int64 v1271; // r9
  __int64 v1272; // rcx
  __int64 v1273; // rdx
  unsigned int *v1274; // rcx
  unsigned int *v1275; // rbx
  char v1276; // r15
  unsigned __int64 v1277; // r12
  __int64 v1278; // r8
  __int64 *v1279; // r9
  unsigned int *v1280; // r10
  __int64 v1281; // rcx
  __int64 v1282; // rax
  __int64 v1283; // rax
  int v1284; // ecx
  unsigned __int64 v1285; // rbx
  unsigned __int64 v1286; // rsi
  __int64 v1287; // r8
  __int64 v1288; // r9
  const char *v1289; // r11
  __int64 v1290; // r8
  __int64 v1291; // r9
  const char *v1292; // rax
  int v1293; // esi
  __int64 i25; // r14
  unsigned __int64 v1295; // rbx
  unsigned int v1296; // r10d
  __int64 v1297; // rdx
  __int64 v1298; // rax
  __int64 v1299; // rbx
  __int64 v1300; // rcx
  unsigned int v1301; // r8d
  unsigned __int64 v1302; // rdx
  __int64 v1303; // rax
  unsigned __int64 i26; // rax
  unsigned int v1305; // edx
  unsigned int v1306; // ebx
  __int64 v1307; // rcx
  __int64 v1308; // r8
  unsigned __int8 v1309; // r15
  unsigned __int64 v1310; // rsi
  __int64 v1311; // r13
  unsigned __int64 v1312; // r12
  int v1313; // eax
  __int64 v1314; // r8
  unsigned __int64 v1315; // rcx
  unsigned int *v1316; // rbx
  int *v1317; // r12
  unsigned int *v1318; // rsi
  unsigned __int64 v1319; // r15
  __int64 v1320; // r8
  int v1321; // r10d
  const char *v1322; // rax
  __int64 v1323; // r11
  unsigned __int64 v1324; // rcx
  unsigned __int64 v1325; // r13
  unsigned __int64 v1326; // r9
  __int64 v1327; // rdx
  __int64 v1328; // rax
  __int64 v1329; // r13
  __int64 v1330; // rcx
  unsigned int v1331; // edx
  __int64 v1332; // rax
  unsigned __int64 i29; // rax
  int v1334; // eax
  __int64 v1335; // rcx
  __int64 v1336; // rax
  __int64 v1337; // rcx
  const char *v1338; // rsi
  __int64 v1339; // r8
  const char *v1340; // rax
  int v1341; // r11d
  __int64 i27; // r14
  unsigned __int64 v1343; // rbx
  unsigned int v1344; // r10d
  __int64 v1345; // rdx
  __int64 v1346; // rax
  __int64 v1347; // rbx
  __int64 v1348; // rcx
  unsigned __int64 v1349; // rdx
  __int64 v1350; // rax
  unsigned __int64 i28; // rax
  unsigned int v1352; // ebx
  __int64 v1353; // rcx
  __int64 v1354; // rdx
  unsigned __int8 v1355; // r12
  unsigned __int64 v1356; // rsi
  unsigned __int64 v1357; // r13
  int v1358; // eax
  unsigned int v1359; // r13d
  _BYTE *v1360; // rbx
  char *v1361; // rsi
  char v1362; // cl
  volatile signed __int32 *v1363; // rcx
  struct _KPRCB *v1364; // rdx
  __int64 v1365; // r8
  int v1366; // ecx
  struct _KPRCB *v1367; // rax
  unsigned __int64 v1368; // rcx
  int *v1369; // rcx
  unsigned int v1370; // ecx
  __int64 v1371; // rdx
  unsigned __int64 v1372; // rbx
  __int64 v1373; // r12
  unsigned __int64 v1374; // r15
  unsigned __int64 v1375; // rsi
  int v1376; // eax
  bool v1377; // zf
  __int64 v1378; // rax
  __int64 v1379; // rcx
  __int64 v1380; // rdx
  unsigned int *v1381; // rcx
  unsigned int *v1382; // rbx
  char v1383; // r15
  unsigned __int64 v1384; // r12
  __int64 v1385; // r8
  __int64 *v1386; // r9
  unsigned int *v1387; // r10
  __int64 v1388; // rcx
  __int64 v1389; // rax
  __int64 v1390; // rax
  __int64 v1391; // r8
  __int64 v1392; // r9
  __int64 v1393; // r9
  _QWORD *v1394; // rbx
  int v1395; // r11d
  _QWORD *v1396; // r10
  const char *v1397; // rax
  unsigned int v1398; // esi
  __int64 v1399; // rax
  __int64 v1400; // r8
  unsigned __int128 v1401; // rax
  unsigned __int64 v1402; // rax
  __int64 v1403; // rax
  __int64 v1404; // rcx
  int v1405; // eax
  unsigned __int64 v1406; // rcx
  int v1407; // r10d
  int v1408; // r10d
  __int64 v1409; // r8
  unsigned int v1410; // ebx
  unsigned __int64 v1411; // rax
  unsigned int v1412; // esi
  unsigned __int64 v1413; // rax
  __int64 v1414; // r9
  __int64 v1415; // rdx
  __int64 v1416; // r8
  int v1417; // ecx
  _QWORD *v1418; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v1420; // r8
  unsigned __int64 v1421; // rdx
  __int64 v1422; // r8
  unsigned __int64 v1423; // rdx
  _QWORD *v1424; // r14
  __int64 v1425; // rsi
  __int64 v1426; // rdx
  __int64 v1427; // r8
  int v1428; // ecx
  _QWORD *v1429; // rax
  unsigned __int64 v1430; // rcx
  unsigned __int16 Ldtr; // r15
  unsigned __int16 Tr; // ax
  unsigned __int64 v1433; // rdx
  __int64 v1434; // r9
  unsigned __int16 v1435; // r12
  __int64 v1436; // r11
  _QWORD *v1437; // r8
  const char *v1438; // rcx
  unsigned __int64 v1439; // rbx
  unsigned int v1440; // r10d
  __int64 v1441; // rdx
  __int64 v1442; // rax
  __int64 v1443; // rbx
  unsigned __int64 v1444; // rcx
  unsigned int v1445; // esi
  __int64 v1446; // rax
  unsigned __int64 i4; // rax
  unsigned int v1448; // ebx
  _QWORD *v1449; // rcx
  int v1450; // edx
  char v1451; // al
  __int64 v1452; // rax
  int v1453; // eax
  __int64 v1454; // rcx
  __int64 v1455; // rdx
  void (__fastcall *v1456)(_BYTE *, __int64); // rax
  unsigned int v1457; // r10d
  __int64 v1458; // rcx
  __int64 v1459; // r8
  __int64 v1460; // rsi
  unsigned __int64 v1461; // r13
  __int64 v1462; // r12
  __int64 v1463; // r15
  unsigned __int8 v1464; // r14
  __int16 v1465; // r9
  int v1466; // eax
  __int64 v1467; // rcx
  _SLIST_ENTRY *v1468; // rbx
  _SLIST_ENTRY *v1469; // rdx
  __int64 v1470; // r15
  __int64 v1471; // rax
  __int64 v1472; // rax
  __int64 v1473; // r12
  __int64 v1474; // rax
  unsigned int *v1475; // rax
  __int64 v1476; // rcx
  unsigned __int64 v1477; // rbx
  unsigned __int64 v1478; // rdx
  struct _KPRCB *v1479; // r8
  _QWORD *v1480; // r8
  int v1481; // esi
  const char *v1482; // rax
  int v1483; // r9d
  __int64 v1484; // r11
  unsigned __int64 v1485; // rbx
  int v1486; // r10d
  __int64 v1487; // rax
  __int64 v1488; // rbx
  unsigned __int128 v1489; // rax
  int v1490; // edx
  int v1491; // r15d
  __int64 v1492; // rax
  __int64 v1493; // rax
  unsigned __int64 i5; // rax
  unsigned int *v1495; // rax
  __int64 v1496; // rax
  unsigned int v1497; // ebx
  _QWORD *v1498; // rdx
  int v1499; // r10d
  unsigned __int64 v1500; // rsi
  const char *v1501; // rax
  int v1502; // r8d
  __int64 v1503; // r9
  __int64 v1504; // rax
  unsigned __int64 i6; // rax
  unsigned int v1506; // esi
  __int64 v1507; // r9
  int *v1508; // r8
  __int64 v1509; // rdx
  unsigned __int64 v1510; // rcx
  __int64 v1511; // rcx
  __int64 v1512; // rax
  __int64 v1513; // rdx
  __int64 v1514; // rbx
  __int64 v1515; // rdx
  int v1516; // eax
  __int64 v1517; // rbx
  __int64 v1518; // rbx
  int v1519; // eax
  __int64 v1520; // r13
  unsigned __int64 v1521; // rbx
  unsigned __int64 v1522; // rdi
  _SLIST_ENTRY *v1523; // r14
  struct _KPRCB *v1524; // rdx
  unsigned __int64 v1525; // rsi
  __int64 v1526; // r15
  _SLIST_ENTRY *v1527; // rax
  PSLIST_ENTRY v1528; // r9
  unsigned __int64 v1529; // r12
  unsigned __int64 v1530; // r10
  unsigned __int64 v1531; // r14
  unsigned int v1532; // r8d
  _QWORD *v1533; // rdx
  unsigned __int64 v1534; // rcx
  unsigned __int64 v1535; // rax
  __int64 v1536; // rdi
  _QWORD *v1537; // rcx
  char *v1538; // r8
  int v1539; // r11d
  unsigned __int64 v1540; // rbx
  signed __int64 v1541; // r8
  unsigned int v1542; // ebx
  unsigned int v1543; // ebx
  unsigned __int8 CurrentIrql; // al
  unsigned int v1545; // ebx
  unsigned __int8 v1546; // al
  unsigned int v1547; // ebx
  unsigned __int8 v1548; // al
  int v1549; // ecx
  int v1550; // ecx
  int v1551; // ecx
  int v1552; // ecx
  int v1553; // ecx
  volatile signed __int32 *v1554; // rax
  unsigned int v1555; // ebx
  unsigned __int8 v1556; // al
  signed __int32 v1557[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v1558; // [rsp+28h] [rbp-D8h]
  __int64 *v1559; // [rsp+38h] [rbp-C8h]
  char *v1560; // [rsp+50h] [rbp-B0h]
  _SLIST_ENTRY *v1561; // [rsp+58h] [rbp-A8h]
  __int64 v1562; // [rsp+60h] [rbp-A0h]
  unsigned int v1563; // [rsp+68h] [rbp-98h]
  __int64 v1564; // [rsp+70h] [rbp-90h]
  __int64 v1565; // [rsp+78h] [rbp-88h]
  unsigned __int64 v1566; // [rsp+80h] [rbp-80h]
  unsigned int *v1567; // [rsp+88h] [rbp-78h]
  unsigned __int8 v1568; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 v1569; // [rsp+91h] [rbp-6Fh] BYREF
  char v1570[2]; // [rsp+92h] [rbp-6Eh] BYREF
  unsigned int v1571; // [rsp+94h] [rbp-6Ch]
  __int64 v1572; // [rsp+98h] [rbp-68h]
  char *v1573; // [rsp+A0h] [rbp-60h]
  unsigned int v1574; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v1575; // [rsp+ACh] [rbp-54h]
  __int64 v1576; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h]
  __int64 v1578; // [rsp+C0h] [rbp-40h] BYREF
  int v1579; // [rsp+C8h] [rbp-38h]
  int v1580; // [rsp+CCh] [rbp-34h]
  __int64 v1581; // [rsp+D0h] [rbp-30h]
  PSLIST_ENTRY v1582; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int *v1583; // [rsp+E0h] [rbp-20h]
  _BYTE *v1584; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v1585; // [rsp+F0h] [rbp-10h]
  PSLIST_ENTRY v1586; // [rsp+F8h] [rbp-8h]
  unsigned __int8 v1587; // [rsp+100h] [rbp+0h]
  unsigned __int8 v1588; // [rsp+101h] [rbp+1h]
  unsigned __int64 v1589; // [rsp+108h] [rbp+8h]
  _BYTE *v1590; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v1591; // [rsp+118h] [rbp+18h]
  unsigned __int8 v1592; // [rsp+11Ch] [rbp+1Ch]
  _DWORD *v1593; // [rsp+120h] [rbp+20h]
  unsigned __int64 v1594; // [rsp+128h] [rbp+28h]
  _SLIST_ENTRY *v1595; // [rsp+130h] [rbp+30h]
  __int64 v1596; // [rsp+138h] [rbp+38h] BYREF
  PSLIST_ENTRY v1597; // [rsp+140h] [rbp+40h]
  __int64 v1598; // [rsp+148h] [rbp+48h]
  unsigned int v1599; // [rsp+150h] [rbp+50h] BYREF
  int v1600; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v1601; // [rsp+160h] [rbp+60h] BYREF
  int v1602; // [rsp+168h] [rbp+68h]
  _BYTE *v1603; // [rsp+170h] [rbp+70h]
  unsigned int v1604; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1605; // [rsp+17Ch] [rbp+7Ch] BYREF
  __int64 v1606; // [rsp+180h] [rbp+80h]
  int v1607; // [rsp+188h] [rbp+88h] BYREF
  __int64 v1608; // [rsp+190h] [rbp+90h] BYREF
  __int64 v1609; // [rsp+198h] [rbp+98h]
  _DWORD *v1610; // [rsp+1A0h] [rbp+A0h]
  int v1611; // [rsp+1A8h] [rbp+A8h]
  int v1612; // [rsp+1ACh] [rbp+ACh]
  int v1613; // [rsp+1B0h] [rbp+B0h]
  int v1614; // [rsp+1B4h] [rbp+B4h]
  int v1615; // [rsp+1B8h] [rbp+B8h]
  int v1616; // [rsp+1BCh] [rbp+BCh]
  int v1617; // [rsp+1C0h] [rbp+C0h]
  int v1618; // [rsp+1C4h] [rbp+C4h]
  int v1619; // [rsp+1C8h] [rbp+C8h]
  int v1620; // [rsp+1CCh] [rbp+CCh]
  int v1621; // [rsp+1D0h] [rbp+D0h]
  int v1622; // [rsp+1D4h] [rbp+D4h]
  unsigned int v1623; // [rsp+1D8h] [rbp+D8h]
  int v1624; // [rsp+1DCh] [rbp+DCh]
  int v1625; // [rsp+1E0h] [rbp+E0h]
  int v1626; // [rsp+1E4h] [rbp+E4h] BYREF
  _DWORD v1627[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v1628; // [rsp+1F0h] [rbp+F0h]
  __int64 v1629; // [rsp+1F8h] [rbp+F8h] BYREF
  int v1630; // [rsp+200h] [rbp+100h]
  int v1631; // [rsp+204h] [rbp+104h]
  _DWORD v1632[6]; // [rsp+208h] [rbp+108h] BYREF
  __int16 v1633; // [rsp+220h] [rbp+120h] BYREF
  _QWORD *v1634; // [rsp+222h] [rbp+122h]
  __int64 v1635; // [rsp+230h] [rbp+130h] BYREF
  __int64 v1636; // [rsp+238h] [rbp+138h] BYREF
  __int64 v1637; // [rsp+240h] [rbp+140h] BYREF
  __int64 v1638; // [rsp+248h] [rbp+148h] BYREF
  __int64 v1639; // [rsp+250h] [rbp+150h] BYREF
  __int64 v1640; // [rsp+258h] [rbp+158h] BYREF
  __int64 v1641; // [rsp+260h] [rbp+160h]
  __int64 v1642; // [rsp+268h] [rbp+168h]
  unsigned __int64 v1643; // [rsp+270h] [rbp+170h]
  __int128 v1644; // [rsp+278h] [rbp+178h]
  __int128 v1645; // [rsp+288h] [rbp+188h]
  __int16 v1646; // [rsp+298h] [rbp+198h] BYREF
  struct _KPRCB *v1647; // [rsp+29Ah] [rbp+19Ah]
  __int16 v1648; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v1649; // [rsp+2AAh] [rbp+1AAh]
  __int16 v1650; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v1651; // [rsp+2BAh] [rbp+1BAh]
  __int16 v1652; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v1653; // [rsp+2CAh] [rbp+1CAh]
  _BYTE *v1654; // [rsp+2D8h] [rbp+1D8h]
  __int64 v1655; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int v1656; // [rsp+2E8h] [rbp+1E8h]
  _WORD v1657[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE *v1658; // [rsp+2F8h] [rbp+1F8h]
  __int64 v1659; // [rsp+300h] [rbp+200h] BYREF
  int v1660; // [rsp+308h] [rbp+208h] BYREF
  _DWORD *v1661; // [rsp+310h] [rbp+210h]
  _WORD v1662[4]; // [rsp+318h] [rbp+218h] BYREF
  _BYTE *v1663; // [rsp+320h] [rbp+220h]
  unsigned int v1664; // [rsp+328h] [rbp+228h]
  unsigned __int8 *v1665; // [rsp+330h] [rbp+230h]
  __int64 *v1666; // [rsp+338h] [rbp+238h]
  unsigned __int8 *v1667; // [rsp+340h] [rbp+240h]
  unsigned __int8 *v1668; // [rsp+348h] [rbp+248h]
  ULONG_PTR v1669; // [rsp+350h] [rbp+250h] BYREF
  __int64 v1670; // [rsp+358h] [rbp+258h]
  __int64 v1671; // [rsp+360h] [rbp+260h]
  __int64 v1672; // [rsp+368h] [rbp+268h]
  __int64 v1673; // [rsp+370h] [rbp+270h]
  __int64 v1674; // [rsp+378h] [rbp+278h]
  _BYTE v1675[16]; // [rsp+380h] [rbp+280h] BYREF
  _BYTE v1676[16]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v1677[16]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v1678; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int16 v1679; // [rsp+3B8h] [rbp+2B8h]
  __int16 v1680; // [rsp+3BAh] [rbp+2BAh]
  unsigned __int64 v1681; // [rsp+3D0h] [rbp+2D0h]
  int v1682; // [rsp+3D8h] [rbp+2D8h]
  unsigned int v1683; // [rsp+3DCh] [rbp+2DCh]
  unsigned __int64 v1684; // [rsp+3E0h] [rbp+2E0h]
  _BYTE v1685[16]; // [rsp+3E8h] [rbp+2E8h] BYREF
  char v1686[8]; // [rsp+3F8h] [rbp+2F8h] BYREF
  char v1687[8]; // [rsp+400h] [rbp+300h] BYREF
  __int64 v1688; // [rsp+408h] [rbp+308h]
  __int64 v1689; // [rsp+410h] [rbp+310h]
  __int64 v1690; // [rsp+418h] [rbp+318h]
  unsigned int *v1691; // [rsp+420h] [rbp+320h]
  __int64 v1692; // [rsp+428h] [rbp+328h]
  __int64 v1693; // [rsp+430h] [rbp+330h]
  __int64 v1694; // [rsp+438h] [rbp+338h]
  char v1695[8]; // [rsp+440h] [rbp+340h] BYREF
  char v1696[8]; // [rsp+448h] [rbp+348h] BYREF
  char v1697[8]; // [rsp+450h] [rbp+350h] BYREF
  __int64 v1698; // [rsp+458h] [rbp+358h]
  __int64 v1699; // [rsp+460h] [rbp+360h]
  __int64 v1700; // [rsp+468h] [rbp+368h]
  __int64 v1701; // [rsp+470h] [rbp+370h]
  __int64 v1702; // [rsp+478h] [rbp+378h]
  __int64 v1703; // [rsp+480h] [rbp+380h]
  __int64 v1704; // [rsp+488h] [rbp+388h]
  __int64 v1705; // [rsp+490h] [rbp+390h]
  __int64 v1706; // [rsp+498h] [rbp+398h]
  __int64 v1707; // [rsp+4A0h] [rbp+3A0h]
  __int64 v1708; // [rsp+4A8h] [rbp+3A8h]
  char v1709[8]; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int64 v1710; // [rsp+4B8h] [rbp+3B8h]
  __int64 v1711; // [rsp+4C0h] [rbp+3C0h]
  __int64 v1712; // [rsp+4C8h] [rbp+3C8h]
  __int64 v1713; // [rsp+4D0h] [rbp+3D0h]
  unsigned __int64 v1714; // [rsp+4E0h] [rbp+3E0h]
  __int64 v1715; // [rsp+4E8h] [rbp+3E8h]
  __int64 v1716; // [rsp+4F0h] [rbp+3F0h]
  __int64 v1717; // [rsp+4F8h] [rbp+3F8h]
  unsigned __int64 v1718; // [rsp+500h] [rbp+400h]
  __int64 v1719; // [rsp+508h] [rbp+408h]
  unsigned __int64 v1720; // [rsp+510h] [rbp+410h]
  __int64 v1721; // [rsp+518h] [rbp+418h]
  unsigned __int64 v1722; // [rsp+520h] [rbp+420h]
  __int64 v1723; // [rsp+528h] [rbp+428h]
  __int64 v1724; // [rsp+530h] [rbp+430h]
  __int64 v1725; // [rsp+538h] [rbp+438h]
  __int64 v1726; // [rsp+540h] [rbp+440h]
  __int64 v1727; // [rsp+548h] [rbp+448h]
  unsigned __int64 v1728; // [rsp+550h] [rbp+450h]
  unsigned __int64 v1729; // [rsp+558h] [rbp+458h]
  __int64 v1730; // [rsp+560h] [rbp+460h]
  __int64 v1731; // [rsp+568h] [rbp+468h]
  __int64 v1732; // [rsp+570h] [rbp+470h]
  __int64 v1733; // [rsp+578h] [rbp+478h]
  __int64 v1734; // [rsp+580h] [rbp+480h]
  __int64 v1735; // [rsp+588h] [rbp+488h]
  __int64 v1736; // [rsp+590h] [rbp+490h]
  __int64 v1737; // [rsp+598h] [rbp+498h]
  _BYTE v1738[16]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v1739[16]; // [rsp+5B0h] [rbp+4B0h] BYREF
  _BYTE v1740[16]; // [rsp+5C0h] [rbp+4C0h] BYREF
  unsigned __int64 v1741; // [rsp+5D0h] [rbp+4D0h]
  _BYTE v1742[16]; // [rsp+5D8h] [rbp+4D8h] BYREF
  _BYTE v1743[16]; // [rsp+5E8h] [rbp+4E8h] BYREF
  _BYTE v1744[16]; // [rsp+5F8h] [rbp+4F8h] BYREF
  _BYTE v1745[16]; // [rsp+608h] [rbp+508h] BYREF
  _BYTE v1746[16]; // [rsp+618h] [rbp+518h] BYREF
  _BYTE v1747[16]; // [rsp+628h] [rbp+528h] BYREF
  _BYTE v1748[16]; // [rsp+638h] [rbp+538h] BYREF
  _BYTE v1749[16]; // [rsp+648h] [rbp+548h] BYREF
  _BYTE v1750[16]; // [rsp+658h] [rbp+558h] BYREF
  _BYTE v1751[16]; // [rsp+668h] [rbp+568h] BYREF
  __int64 v1752; // [rsp+678h] [rbp+578h]
  _BYTE v1753[24]; // [rsp+680h] [rbp+580h] BYREF
  char v1754[8]; // [rsp+698h] [rbp+598h] BYREF
  ULONG_PTR v1755; // [rsp+6A0h] [rbp+5A0h]
  unsigned int v1756; // [rsp+6ACh] [rbp+5ACh]
  __int64 v1757; // [rsp+6B0h] [rbp+5B0h]
  __int64 v1758; // [rsp+6B8h] [rbp+5B8h]
  __int64 v1759; // [rsp+6C0h] [rbp+5C0h]
  _BYTE v1760[16]; // [rsp+6C8h] [rbp+5C8h] BYREF
  char v1761[16]; // [rsp+6D8h] [rbp+5D8h] BYREF
  char v1762[16]; // [rsp+6E8h] [rbp+5E8h] BYREF
  char v1763[8]; // [rsp+6F8h] [rbp+5F8h] BYREF
  unsigned __int64 v1764; // [rsp+700h] [rbp+600h]
  _BYTE v1765[24]; // [rsp+710h] [rbp+610h] BYREF
  _BYTE v1766[48]; // [rsp+728h] [rbp+628h] BYREF
  char v1767[8]; // [rsp+758h] [rbp+658h] BYREF
  unsigned __int64 v1768; // [rsp+760h] [rbp+660h]
  _BYTE v1769[96]; // [rsp+770h] [rbp+670h] BYREF
  int v1771; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int64 v1772; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1773; // [rsp+7F0h] [rbp+6F0h]
  BOOL v1774; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int8 v1775; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1776; // [rsp+7F0h] [rbp+6F0h]
  unsigned int v1777; // [rsp+7F0h] [rbp+6F0h]
  int v1778; // [rsp+7F0h] [rbp+6F0h]
  int v1779; // [rsp+7F0h] [rbp+6F0h]
  unsigned int v1780; // [rsp+7F0h] [rbp+6F0h]
  unsigned int v1781; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int16 v1782; // [rsp+7F0h] [rbp+6F0h]
  int v1783; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1784; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1785; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1786; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int8 v1787; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int8 v1788; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1789; // [rsp+7F0h] [rbp+6F0h]
  unsigned int v1790; // [rsp+7F0h] [rbp+6F0h]
  int *v1791; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1792; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int64 **v1793; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1794; // [rsp+7F0h] [rbp+6F0h]
  BOOL v1795; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1796; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int16 v1797; // [rsp+7F0h] [rbp+6F0h]
  __int16 v1798; // [rsp+7F0h] [rbp+6F0h]
  char v1799; // [rsp+7F8h] [rbp+6F8h] BYREF

  v2 = a2;
  if ( !__32 )
    KeBugCheck(0x33u);
  v4 = *(_QWORD *)&MaxDataSize;
  _InterlockedOr(v1557, 0);
  if ( !v4 )
    return 3221225635LL;
  if ( *(_QWORD *)a1 < 0x40uLL
    || *(_QWORD *)(a1 + 8) != (unsigned int)KiGetNtDdiVersion()
    || (*(_DWORD *)(a1 + 20) & 0x7FFFFFFE) != 0
    || *(_QWORD *)(a1 + 24)
    || *(_QWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 40)
    || *(_QWORD *)(v2 + 16)
    || *(_QWORD *)(v2 + 24)
    || *(_QWORD *)(v2 + 32)
    || *(_DWORD *)(v2 + 4) >= *(_DWORD *)(v4 + 2060) )
  {
    return 3221225485LL;
  }
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 20) & 1;
  v8 = *(_DWORD *)(a1 + 52);
  if ( v6 )
  {
    if ( v6 <= 0 )
      return 3221225485LL;
    if ( v6 > 4 )
    {
      if ( v6 == 5 && !v8 )
      {
        if ( ObGetCurrentIrql() || KeAreApcsDisabled() )
        {
          v1543 = KeAreAllApcsDisabled();
          CurrentIrql = ObGetCurrentIrql();
          KeBugCheckEx(0xC8u, ((unsigned __int64)CurrentIrql << 16) | 0xFF, v1543, 0LL, 0LL);
        }
        goto LABEL_34;
      }
      return 3221225485LL;
    }
    if ( v8 != 16 || !KeVerifyGroupAffinity(*(_QWORD *)(a1 + 56), 0) )
      return 3221225485LL;
    v9 = *(_DWORD *)(a1 + 20);
    v10 = ObGetCurrentIrql();
    if ( v9 >= 0 )
    {
      if ( v10 || KeAreApcsDisabled() )
      {
        v1547 = KeAreAllApcsDisabled();
        v1548 = ObGetCurrentIrql();
        KeBugCheckEx(0xC8u, ((unsigned __int64)v1548 << 16) | 0xFF, v1547, 0LL, 0LL);
      }
    }
    else if ( v10 > 1u )
    {
      v1545 = KeAreAllApcsDisabled();
      v1546 = ObGetCurrentIrql();
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1546 << 16) | 0xFF, v1545, 0LL, 0LL);
    }
  }
  else
  {
    if ( v8 != 16 || (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) - 1LL) > 0xFFFFFFFE )
      return 3221225485LL;
    if ( ObGetCurrentIrql() || KeAreApcsDisabled() )
    {
      v1555 = KeAreAllApcsDisabled();
      v1556 = ObGetCurrentIrql();
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1556 << 16) | 0xFF, v1555, 0LL, 0LL);
    }
  }
LABEL_34:
  v1609 = 2800LL;
  if ( !v7 || (v11 = *(_QWORD *)(v4 + 2704) + 2807LL, v1609 = v11, v11 == 2800) )
  {
    ++dword_140C12F14;
    v1586 = RtlpInterlockedPopEntrySList(&Lookaside);
    v13 = v1586;
    if ( v1586 )
      goto LABEL_40;
    ++dword_140C12F18;
    PoolWithTag = (_SLIST_ENTRY *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C12F30)(
                                    (unsigned int)dword_140C12F24,
                                    (unsigned int)dword_140C12F2C,
                                    (unsigned int)dword_140C12F28);
  }
  else
  {
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x746E494Bu);
  }
  v1586 = PoolWithTag;
  v13 = PoolWithTag;
LABEL_40:
  if ( !v13 )
    return 3221225626LL;
  v14 = v13 + 2;
  v1597 = v13 + 2;
  memmove(&v13[2], (const void *)v4, 0xAA0uLL);
  *((_QWORD *)&v13[169].Next + 1) = v4;
  v13[170].Next = v13 + 172;
  LODWORD(v13[132].Next) = *(_DWORD *)v2;
  HIDWORD(v13[132].Next) = *(_DWORD *)(v2 + 4);
  *((_DWORD *)&v13[132].Next + 2) = 0;
  LODWORD(v13[133].Next) = 0;
  HIDWORD(v13[155].Next) |= 0x1000u;
  if ( v7 )
    *((_QWORD *)&v13[170].Next + 1) = ((unsigned __int64)&v13[175].Next + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v16 = *(_DWORD *)(a1 + 16);
  v1561 = v13 + 2;
  if ( v16 > 0x80000 )
    v16 = 0x80000;
  *((_DWORD *)&v13[132].Next + 3) = v16;
  v1579 = 0;
  v1602 = 0;
  if ( !v16 )
    v16 = 1;
  *((_DWORD *)&v13[132].Next + 3) = v16;
  v1641 = a1;
  v17 = (unsigned __int64)&v13[2];
  v1642 = v2;
  Next_low = LODWORD(v13[153].Next);
  if ( (_DWORD)Next_low != -1 )
  {
    v19 = (*((__int64 (__fastcall **)(__int64, __int64, __int64))&v13[41].Next + 1))(Next_low, v15, 6LL);
    if ( v19 || (v19 = ((__int64 (__fastcall *)(_QWORD))v13[42].Next)(0LL)) != 0 )
    {
      v20 = ((__int64 (__fastcall *)(__int64, _BYTE *))v13[43].Next)(v19, v1766);
      if ( v20 >= 0 )
      {
        v13[154].Next = (_SLIST_ENTRY *)v19;
        v21 = (*((__int64 (**)(void))&v13[45].Next + 1))();
        v22 = (*((__int64 (__fastcall **)(__int64))&v13[47].Next + 1))(v21);
        if ( v22 )
        {
          (*((void (__fastcall **)(__int64, __int64))&v13[48].Next + 1))(v21, v22);
          v23 = 0;
        }
        else
        {
          v23 = 4;
        }
        v20 = 0;
        HIDWORD(v13[155].Next) = v23 | HIDWORD(v13[155].Next) & 0xFFFFFFFB;
        *((_DWORD *)&v13[132].Next + 2) += 0x10000;
      }
      else
      {
        (*((void (__fastcall **)(__int64))&v13[42].Next + 1))(v19);
      }
      if ( v20 >= 0 )
      {
        v24 = 1LL;
        v1602 = 1;
        goto LABEL_95;
      }
    }
  }
  Next_high = HIDWORD(v13[155].Next);
  if ( (Next_high & 8) != 0 && (Next_high & 0x1000) == 0 )
  {
    v26 = __rdtsc();
    v27 = (__ROR8__(v26, 3) ^ v26) * (unsigned __int128)0x7010008004002001uLL;
    v1721 = *((_QWORD *)&v27 + 1);
    if ( (((unsigned __int8)v27 ^ BYTE8(v27)) & 3) == 0 )
    {
      v28 = __rdtsc();
      v29 = (__ROR8__(v28, 3) ^ v28) * (unsigned __int128)0x7010008004002001uLL;
      v1724 = *((_QWORD *)&v29 + 1);
      v30 = ((unsigned __int64)v29 ^ *((_QWORD *)&v29 + 1)) % 0xB;
      if ( (unsigned int)v30 > 5 )
      {
        v34 = v30 - 6;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              if ( v36 == 1 )
              {
                v1631 = -1333354875;
                v33 = __ROR4__(-1333354868, 33);
              }
              else
              {
                v37 = __rdtsc();
                v38 = __ROR8__(v37, 3);
                v1725 = ((v38 ^ v37) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v39 = (67117057 * (v38 ^ v37)) ^ v1725;
                v33 = ((((((v39 % 0x1A + 97) << 8) | ((v39 >> 5)
                                                    - 26
                                                    * ((unsigned int)((1321528399 * (unsigned __int64)(v39 >> 5)) >> 32) >> 3)
                                                    + 65)) << 8) | ((v39 >> 10)
                                                                  - 26
                                                                  * ((unsigned int)((1321528399
                                                                                   * (unsigned __int64)(v39 >> 10)) >> 32) >> 3)
                                                                  + 97)) << 8) | ((v39 >> 15) % 0x1A + 65);
              }
            }
            else
            {
              v1630 = 1684422978;
              v33 = __ROR4__(1684422978, 8);
            }
          }
          else
          {
            v1616 = -2100910376;
            v33 = __ROL4__(-2100910376, 7);
          }
        }
        else
        {
          v1627[1] = 1314342514;
          v33 = __ROR4__(1314342516, 24);
        }
      }
      else if ( (_DWORD)v30 == 5 )
      {
        v1615 = 680282605;
        v33 = __ROR4__(680282605, 5);
      }
      else if ( (_DWORD)v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            if ( v32 == 1 )
            {
              v1612 = -1474152136;
              v33 = __ROR4__(-1474152133, 15);
            }
            else
            {
              v1611 = 1728537748;
              v33 = __ROL4__(1728537748, 4);
            }
          }
          else
          {
            v1624 = -2051698419;
            v33 = __ROR4__(-2051698419, 2);
          }
        }
        else
        {
          v1613 = -1297272415;
          v33 = __ROL4__(-1297272415, 1);
        }
      }
      else
      {
        v1614 = -795291432;
        v33 = __ROR4__(-795291432, 6);
      }
      v40 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD))&v13[17].Next + 1))(
              512LL,
              *((_QWORD *)&v13[120].Next + 1),
              v33);
      if ( v40 )
      {
        v41 = *(unsigned int *)(*((_QWORD *)&v13[112].Next + 1) + *((_QWORD *)&v13[83].Next + 1));
        if ( (_DWORD)v41 )
        {
          v42 = __rdtsc();
          v43 = (__ROR8__(v42, 3) ^ v42) * (unsigned __int128)0x7010008004002001uLL;
          v1726 = *((_QWORD *)&v43 + 1);
          v41 = (*((_QWORD *)&v43 + 1) ^ (unsigned __int64)v43) % v41;
        }
        v44 = ((__int64 (__fastcall *)(_QWORD))v13[61].Next)(0LL);
        if ( v44 )
        {
          do
          {
            if ( !(_DWORD)v41 )
              break;
            LODWORD(v41) = v41 - 1;
            v44 = ((__int64 (__fastcall *)(__int64))v13[61].Next)(v44);
          }
          while ( v44 );
          v17 = (unsigned __int64)&v13[2];
          if ( !v44 )
          {
LABEL_93:
            ((void (__fastcall *)(__int64))v13[18].Next)(v40);
            goto LABEL_94;
          }
          if ( ((int (__fastcall *)(__int64))v13[60].Next)(v44) < 0 )
          {
            (*((void (__fastcall **)(__int64))&v13[61].Next + 1))(v44);
            v44 = 0LL;
          }
        }
        if ( v44 )
        {
          (*((void (__fastcall **)(__int64, _BYTE *))&v13[69].Next + 1))(v44, v1766);
          ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v13[30].Next)(v44, v40, 0LL, 0LL);
          v64 = __rdtsc();
          v65 = (__ROR8__(v64, 3) ^ v64) * (unsigned __int128)0x7010008004002001uLL;
          v1727 = *((_QWORD *)&v65 + 1);
          v66 = ((unsigned __int64)v65 ^ *((_QWORD *)&v65 + 1))
              % (*((unsigned int (__fastcall **)(__int64))&v13[29].Next + 1))(v40);
          _disable();
          v67 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)&v13[102].Next + 1));
          _enable();
          (*((void (__fastcall **)(__int64, _BYTE *))&v13[30].Next + 1))(v67, v1685);
          (*((void (__fastcall **)(_BYTE *, __int64))&v13[28].Next + 1))(v1753, v40);
          while ( ((int (__fastcall *)(unsigned int *, _BYTE *))v13[29].Next)(&v1605, v1753) >= 0 )
          {
            if ( !(_DWORD)v66 )
            {
              ((void (__fastcall *)(_BYTE *, _QWORD))v13[28].Next)(v1685, v1605);
              break;
            }
            LODWORD(v66) = v66 - 1;
          }
          ((void (__fastcall *)(_BYTE *, _BYTE *))v13[31].Next)(v1685, v1751);
          ((void (__fastcall *)(__int64))v13[18].Next)(v40);
          v24 = 1LL;
          v1579 = 1;
          goto LABEL_95;
        }
        goto LABEL_93;
      }
    }
  }
LABEL_94:
  v24 = 1LL;
  v1579 = 0;
LABEL_95:
  v1598 = 0LL;
  v45 = &v1599;
  v46 = 4;
  LODWORD(i7) = -1;
  do
  {
    *(_BYTE *)v45 = 0;
    v45 = (unsigned int *)((char *)v45 + 1);
    --v46;
  }
  while ( v46 );
  Next = (unsigned int)v13[132].Next;
  if ( *((_DWORD *)&v13[132].Next + 2) >= *((_DWORD *)&v13[132].Next + 3) )
    goto LABEL_2509;
  v49 = v1728;
  v50 = 0;
  v51 = v1729;
  v52 = v1664;
  v1594 = v1728;
  v1589 = v1729;
  v1591 = v1664;
  v1585 = v1656;
  while ( 1 )
  {
    v53 = *(_DWORD *)(v17 + 2448) & 0x110000;
    v1623 = Next;
    if ( v53 != 1114112 )
      __writedr(7u, 0LL);
    if ( Next == *(_DWORD *)(v17 + 2060) )
      break;
    v54 = v17;
    v55 = 0LL;
    if ( *(_QWORD *)(v17 + 2680) )
      v54 = *(_QWORD *)(v17 + 2680);
    v56 = (char *)(v54 + *(unsigned int *)(v54 + 2056));
    v1560 = v56;
    if ( (_DWORD)v1598 && HIDWORD(v1598) <= Next )
    {
      v55 = HIDWORD(v1598);
      v56 = (char *)(v54 + v1599);
      v1560 = v56;
    }
    if ( (_DWORD)v55 != Next )
    {
      v57 = Next - v55;
      v58 = v57;
      v55 = v57 + (unsigned int)v55;
      while ( 1 )
      {
        v59 = *(_DWORD *)v56;
        if ( *(int *)v56 > 12 )
          break;
        if ( v59 == 12 )
          goto LABEL_130;
        v60 = v59 - 1;
        if ( !v60 )
          goto LABEL_130;
        v61 = v60 - 6;
        if ( v61 )
        {
          v62 = v61 - 1;
          if ( !v62 )
          {
            v68 = *((unsigned __int16 *)v56 + 16);
LABEL_136:
            v63 = (v68 + 55) & 0xFFFFFFF8;
            goto LABEL_137;
          }
          if ( v62 != 2 )
          {
LABEL_133:
            v63 = 48LL;
            goto LABEL_137;
          }
          v63 = (unsigned int)(16 * (*((_DWORD *)v56 + 7) + 3));
        }
        else
        {
          v63 = (unsigned int)(24 * (*((_DWORD *)v56 + 6) + 2));
        }
LABEL_137:
        v56 += v63;
        if ( !--v58 )
        {
          v49 = v1594;
          v51 = v1589;
          v52 = v1591;
          v1560 = v56;
          goto LABEL_139;
        }
      }
      if ( v59 == 28 )
      {
        v68 = *((unsigned __int16 *)v56 + 20);
        goto LABEL_136;
      }
      if ( v59 == 30 )
      {
        v63 = (((*((_DWORD *)v56 + 9) != 0 ? *((_DWORD *)v56 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
            + 24 * (*((unsigned __int16 *)v56 + 20) + 2);
      }
      else
      {
        if ( v59 <= 32 )
          goto LABEL_133;
        if ( v59 <= 34 )
        {
          v63 = 20
              * (unsigned int)(((*((_DWORD *)v56 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v56 + 10) + 4095) >> 12)
              + 48;
        }
        else
        {
          if ( v59 != 43 )
            goto LABEL_133;
LABEL_130:
          v63 = 4 * (*((_DWORD *)v56 + 4) / 0xCu) + 48;
        }
      }
      v24 = 1LL;
      goto LABEL_137;
    }
LABEL_139:
    LODWORD(v1598) = 1;
    HIDWORD(v1598) = v55;
    v1599 = (_DWORD)v56 - v54;
    if ( !*(_DWORD *)(v17 + 2084) )
    {
      v55 = 0LL;
      v69 = *(int *)v56;
      v70 = *(_DWORD *)(v1641 + 48);
      v54 = *(_QWORD *)(v1641 + 56);
      if ( (int)v69 > 21 )
      {
        if ( (_DWORD)v69 != 24 )
        {
          if ( (int)v69 <= 27 )
            goto LABEL_236;
          if ( (int)v69 > 29 )
          {
            if ( (unsigned int)v69 <= 0x23 && (v72 = 0x940000000LL, _bittest64(&v72, v69)) )
            {
              LODWORD(i7) = 1;
            }
            else
            {
              LODWORD(i7) = 1;
              if ( (unsigned int)(v69 - 43) > 1 )
                goto LABEL_236;
            }
            goto LABEL_173;
          }
        }
        goto LABEL_180;
      }
      if ( (_DWORD)v69 == 21 )
      {
        LODWORD(i7) = 1;
      }
      else
      {
        if ( (v69 & 0x80000000) != 0LL )
          goto LABEL_236;
        LODWORD(i7) = 1;
        if ( (int)v69 <= 1 )
          goto LABEL_173;
        if ( (int)v69 > 3 )
        {
          if ( (_DWORD)v69 != 7 )
          {
            if ( (_DWORD)v69 != 8 )
            {
              if ( (_DWORD)v69 != 9 && (unsigned int)(v69 - 11) > 3 )
                goto LABEL_236;
LABEL_173:
              if ( v70 )
                goto LABEL_236;
LABEL_174:
              v73 = *((unsigned int *)v56 + 4);
              if ( !(_DWORD)v73 )
                goto LABEL_236;
              v74 = v1627;
              v75 = *((_QWORD *)v56 + 1);
              v55 = (unsigned __int64)&v1659;
              v1659 = *(_QWORD *)v54;
              v76 = *(_DWORD *)(v54 + 8);
              v54 = 0LL;
              v1627[0] = v76;
              while ( v75 >= *(_QWORD *)v55 + (unsigned __int64)*v74 || v75 + v73 <= *(_QWORD *)v55 )
              {
                v54 = (unsigned int)(v54 + 1);
                v55 += 8LL;
                ++v74;
                if ( (_DWORD)v54 )
                  goto LABEL_236;
              }
LABEL_181:
              v24 = 1LL;
              ++*(_QWORD *)(v1642 + 8);
              goto LABEL_182;
            }
LABEL_180:
            if ( v70 != 5 )
              goto LABEL_236;
            goto LABEL_181;
          }
          LODWORD(v55) = *((_DWORD *)v56 + 7);
          v71 = v70 == 1;
LABEL_154:
          if ( !v71 )
            goto LABEL_236;
          goto LABEL_163;
        }
        if ( !v70 )
          goto LABEL_174;
      }
      if ( (_DWORD)v69 == 21 )
      {
        LODWORD(v55) = *((_DWORD *)v56 + 11);
        v71 = v70 == 4;
        goto LABEL_154;
      }
      if ( (unsigned int)(v69 - 2) <= 1 )
      {
        LODWORD(v55) = *((_DWORD *)v56 + 10);
        if ( (_DWORD)v69 == 3 && v70 != 2 )
          goto LABEL_236;
        if ( (_DWORD)v69 == 2 && v70 != 3 )
          goto LABEL_236;
      }
LABEL_163:
      if ( !(unsigned int)KeCheckProcessorGroupAffinity(*(_QWORD *)(v1641 + 56), v55) )
        goto LABEL_236;
      goto LABEL_181;
    }
LABEL_182:
    v77 = *(_DWORD *)v56;
    v1771 = *(_DWORD *)v56;
    if ( *(int *)v56 > 28 )
    {
      if ( v77 <= 37 )
      {
        if ( v77 == 37 )
        {
          if ( (*(_DWORD *)(v17 + 2452) & 2) != 0
            || !(*(unsigned __int8 (**)(void))(v17 + 1064))()
            || *(_DWORD *)(v17 + 2296) )
          {
            goto LABEL_236;
          }
          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v17 + 2320) = *(int *)v56;
          *(_QWORD *)(v17 + 2328) = 0LL;
          goto LABEL_457;
        }
        if ( v77 == 29 )
        {
          v1065 = (_QWORD *)*((_QWORD *)v56 + 1);
          v1066 = *((unsigned int *)v56 + 4);
          v1067 = v1065;
          *(_DWORD *)(v17 + 2088) += v1066;
          v1068 = (const char *)v1065;
          v1069 = *(_DWORD *)(v17 + 2068);
          i7 = *(_QWORD *)(v17 + 2072);
          if ( v1065 < (_QWORD *)((char *)v1065 + v1066) )
          {
            do
            {
              _mm_prefetch(v1068, 0);
              v1068 += 64;
            }
            while ( v1068 < (const char *)v1065 + v1066 );
          }
          v1070 = *(_QWORD *)(v17 + 2072);
          v1071 = (unsigned int)v1066 >> 7;
          if ( (unsigned int)v1066 >> 7 )
          {
            do
            {
              v1072 = 8LL;
              do
              {
                v1073 = v1070 ^ *v1067;
                v1074 = v1067[1];
                v1067 += 2;
                v1070 = __ROL8__(__ROL8__(v1073, v1069) ^ v1074, v1069);
                --v1072;
              }
              while ( v1072 );
              v1075 = __ROL8__(i7 ^ ((char *)v1067 - (char *)v1065), 17) ^ i7 ^ ((char *)v1067 - (char *)v1065);
              v1708 = (v1075 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1069 = ((unsigned __int8)(v1708 ^ v1075) ^ (unsigned __int8)v1069) & 0x3F;
              if ( !v1069 )
                LOBYTE(v1069) = 1;
              --v1071;
            }
            while ( v1071 );
            v17 = (unsigned __int64)v1561;
          }
          v1076 = v1066 & 0x7F;
          if ( (unsigned int)v1076 >= 8 )
          {
            v1077 = (unsigned __int64)(unsigned int)v1076 >> 3;
            do
            {
              v1070 = __ROL8__(*v1067++ ^ v1070, v1069);
              v1076 = (unsigned int)(v1076 - 8);
              --v1077;
            }
            while ( v1077 );
            v17 = (unsigned __int64)v1561;
          }
          for ( ; (_DWORD)v1076; v1076 = (unsigned int)(v1076 - 1) )
          {
            v1078 = *(unsigned __int8 *)v1067;
            v1067 = (_QWORD *)((char *)v1067 + 1);
            v1070 = __ROL8__(v1078 ^ v1070, v1069);
          }
          for ( i = v1070; ; LODWORD(v1070) = i ^ v1070 )
          {
            i >>= 31;
            if ( !i )
              break;
          }
          v1080 = v1070 & 0x7FFFFFFF;
          if ( v1080 == *((_DWORD *)v56 + 5) )
            goto LABEL_1769;
          if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
            v50 = 1;
          v1081 = *((unsigned int *)v56 + 4);
          v1082 = *((_QWORD *)v56 + 1);
          if ( *((_DWORD *)v56 + 4) )
          {
            v1076 = 64LL;
            if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
            {
              v1083 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1084 = v1082 & 0xFFFFFFFFFFFFF000uLL;
              v1792 = (v1082 + v1081 - 1) | 0xFFF;
              v1085 = (v1082 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                i7 = v1083;
                while ( 1 )
                {
                  v1086 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v17 + 1128))(
                            v1084,
                            0LL,
                            v1076,
                            v1067);
                  if ( v1086 != -1073741267 )
                    break;
                  if ( v50 )
                    goto LABEL_1787;
                  if ( v1083 > 1u )
                    goto LABEL_1767;
                  i7 = v1083;
                  __writecr8(v1083);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1086 < 0 )
                  break;
LABEL_1767:
                v1084 += 4096LL;
                v1085 += 4096LL;
                if ( v1085 == v1792 )
                {
                  __writecr8(i7);
                  v56 = v1560;
                  goto LABEL_1769;
                }
              }
LABEL_1787:
              __writecr8(i7);
              v56 = v1560;
            }
          }
          v1099 = *(_DWORD *)(v17 + 2296);
          if ( !v1099 )
          {
            *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1080 ^ (unsigned __int64)*((unsigned int *)v56 + 5);
            v1099 = *(_DWORD *)(v17 + 2296);
          }
          v1100 = *((_QWORD *)v56 + 1);
          if ( v1099 )
          {
LABEL_1769:
            v1087 = 1;
          }
          else
          {
            v1087 = 1;
            *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v17 + 2320) = *(int *)v56;
            *(_QWORD *)(v17 + 2328) = v1100;
            *(_DWORD *)(v17 + 2296) = 1;
            __b8(v17, 0LL, v1076, v1067);
          }
          v1088 = (unsigned __int64 **)*((_QWORD *)v56 + 1);
          v1089 = *((_DWORD *)v56 + 4) >> 4;
          v1793 = v1088;
          if ( v1089 )
          {
            v1090 = v1089;
            v1562 = v1089;
            do
            {
              v1091 = v1560;
              i7 = **v1088;
              v1637 = 0LL;
              v1092 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, __int64, _QWORD *))(v17 + 784))(
                        i7,
                        &v1637,
                        v1076,
                        v1067);
              if ( v1092 )
              {
                do
                {
                  ++v1087;
                  if ( !(*(__int64 (__fastcall **)(__int64, char *))(v17 + 520))(v1092, v1709) )
                  {
                    if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
                    {
                      v1094 = *(_QWORD **)(v17 + 2688);
                      v1095 = 48;
                      v1093 = 6LL;
                      do
                      {
                        v1095 -= 8;
                        *v1094 = *(_QWORD *)v1091;
                        v1091 += 8;
                        ++v1094;
                        --v1093;
                      }
                      while ( v1093 );
                      if ( v1095 )
                      {
                        do
                        {
                          v1096 = *v1091++;
                          *(_BYTE *)v1094 = v1096;
                          v1094 = (_QWORD *)((char *)v1094 + 1);
                          --v1095;
                        }
                        while ( v1095 );
                        v17 = (unsigned __int64)v1561;
                      }
                      v1091 = *(char **)(v17 + 2688);
                    }
                    *((_QWORD *)v1091 + 3) = v1092;
                    *((_QWORD *)v1091 + 4) = i7;
                    v1097 = *(_QWORD *)(v17 + 1424);
                    *(_QWORD *)v1097 = v1091;
                    *(_DWORD *)(v1097 + 16) = 48;
                    v1098 = *(_QWORD *)(v17 + 1424);
                    *(_QWORD *)(v1098 + 8) = v1092;
                    *(_DWORD *)(v1098 + 20) = 4096;
                    if ( !*(_DWORD *)(v17 + 2296) )
                    {
                      *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v17 + 2312) = v1091 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v17 + 2320) = *(int *)v1091;
                      *(_QWORD *)(v17 + 2328) = 6LL;
                      *(_DWORD *)(v17 + 2296) = 1;
                      __b8(v17, 0LL, v1093, 1LL);
                    }
                  }
                  v1092 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(v17 + 784))(i7, &v1637);
                }
                while ( v1092 );
                v1088 = v1793;
                v1090 = v1562;
              }
              v1087 = 1;
              v1088 += 2;
              --v1090;
              v1793 = v1088;
              v1562 = v1090;
            }
            while ( v1090 );
          }
          goto LABEL_235;
        }
        if ( v77 != 30 )
        {
          if ( v77 != 31 )
          {
            if ( v77 == 32 )
            {
              sub_1403E7098(v17, v56);
              goto LABEL_236;
            }
            if ( v77 == 33 )
            {
              sub_1403E612C(v17, v56);
              goto LABEL_236;
            }
            if ( v77 != 35 )
            {
              if ( v77 == 36 )
              {
                v819 = (const char *)*((_QWORD *)v56 + 1);
                v820 = *((unsigned int *)v56 + 4);
                v821 = (__int64)v819;
                *(_DWORD *)(v17 + 2088) += v820;
                v822 = v819;
                v823 = *(_DWORD *)(v17 + 2068);
                for ( j = *(_QWORD *)(v17 + 2072); v822 < &v819[v820]; v822 += 64 )
                  _mm_prefetch(v822, 0);
                v825 = *(_QWORD *)(v17 + 2072);
                v826 = (unsigned int)v820 >> 7;
                if ( (unsigned int)v820 >> 7 )
                {
                  do
                  {
                    v827 = 8LL;
                    do
                    {
                      v828 = *(_QWORD *)(v821 + 8) ^ __ROL8__(*(_QWORD *)v821 ^ v825, v823);
                      v821 += 16LL;
                      v825 = __ROL8__(v828, v823);
                      --v827;
                    }
                    while ( v827 );
                    v829 = (__ROL8__(j ^ (v821 - (_QWORD)v819), 17) ^ j ^ (unsigned __int64)(v821 - (_QWORD)v819))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v1703 = *((_QWORD *)&v829 + 1);
                    v830 = BYTE8(v829) ^ v829 ^ v823;
                    v24 = 1LL;
                    v823 = v830 & 0x3F;
                    if ( !v823 )
                      LOBYTE(v823) = 1;
                    --v826;
                  }
                  while ( v826 );
                  v17 = (unsigned __int64)v1561;
                }
                v831 = v820 & 0x7F;
                if ( (unsigned int)v831 >= 8 )
                {
                  v832 = (unsigned __int64)(unsigned int)v831 >> 3;
                  do
                  {
                    v825 = __ROL8__(*(_QWORD *)v821 ^ v825, v823);
                    v821 += 8LL;
                    v831 = (unsigned int)(v831 - 8);
                    --v832;
                  }
                  while ( v832 );
                }
                for ( ; (_DWORD)v831; v831 = (unsigned int)(v831 - 1) )
                {
                  v833 = *(unsigned __int8 *)v821++;
                  v825 = __ROL8__(v833 ^ v825, v823);
                }
                for ( k = v825; ; LODWORD(v825) = k ^ v825 )
                {
                  k >>= 31;
                  if ( !k )
                    break;
                }
                v835 = v825 & 0x7FFFFFFF;
                if ( v835 == *((_DWORD *)v56 + 5) )
                  goto LABEL_1369;
                v831 = 0LL;
                if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
                  v50 = 1;
                v836 = *((unsigned int *)v56 + 4);
                v837 = *((_QWORD *)v56 + 1);
                if ( *((_DWORD *)v56 + 4) )
                {
                  v821 = 64LL;
                  if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
                  {
                    v838 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v839 = v837 & 0xFFFFFFFFFFFFF000uLL;
                    v1785 = (v837 + v836 - 1) | 0xFFF;
                    v840 = (v837 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v841 = v838;
                      while ( 1 )
                      {
                        v842 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v17 + 1128))(v839, 0LL);
                        if ( v842 != -1073741267 )
                          break;
                        if ( v50 )
                          goto LABEL_1364;
                        if ( v838 > 1u )
                          goto LABEL_1362;
                        v841 = v838;
                        __writecr8(v838);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v842 < 0 )
                        break;
LABEL_1362:
                      v839 += 4096LL;
                      v840 += 4096LL;
                      if ( v840 == v1785 )
                      {
                        __writecr8(v841);
                        v56 = v1560;
LABEL_1369:
                        v845 = *(_QWORD *)(v17 + 1344);
                        v846 = KeGetCurrentIrql();
                        __writecr8(0xFuLL);
                        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(v17 + 336))(v845, v24, v831, v821);
                        v848 = **(unsigned int ***)(v17 + 1552);
                        v849 = v848 + 4;
                        v850 = *((_BYTE *)v848 + 12);
                        v851 = (unsigned __int64)&v848[6 * *v848 + 4];
                        do
                        {
                          v852 = 24LL;
                          v853 = (__int64 *)(v56 + 24);
                          v854 = v849;
                          do
                          {
                            v855 = *(_QWORD *)v854;
                            v854 += 2;
                            v856 = *v853++;
                            if ( v855 != v856 )
                              goto LABEL_1377;
                            v852 = (unsigned int)(v852 - 8);
                          }
                          while ( (unsigned int)v852 >= 8 );
                          if ( !(_DWORD)v852 )
                            break;
                          while ( 1 )
                          {
                            v847 = *(unsigned __int8 *)v854;
                            v854 = (unsigned int *)((char *)v854 + 1);
                            v857 = *(unsigned __int8 *)v853;
                            v853 = (__int64 *)((char *)v853 + 1);
                            if ( v847 != v857 )
                              break;
                            v71 = (_DWORD)v852 == 1;
                            v852 = (unsigned int)(v852 - 1);
                            if ( v71 )
                              goto LABEL_1378;
                          }
LABEL_1377:
                          v849 += 6;
                        }
                        while ( (unsigned __int64)v849 < v851 );
LABEL_1378:
                        v17 = (unsigned __int64)v1561;
                        ((void (__fastcall *)(_SLIST_ENTRY *, __int64, __int64, __int64 *))v1561[25].Next)(
                          v1561[84].Next,
                          v847,
                          v852,
                          v853);
                        __writecr8(v846);
                        if ( !v850 )
                          goto LABEL_1385;
                        if ( (*(_DWORD *)(v17 + 2452) & 0x10) != 0 && !*(_DWORD *)(v17 + 2296) )
                        {
                          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v17 + 2320) = *(int *)v56;
                          *(_QWORD *)(v17 + 2328) = 1LL;
                          *(_DWORD *)(v17 + 2296) = 1;
                          __b8(v17, 0LL, v858, v859);
                        }
                        if ( *((_QWORD *)v56 + 3) == 1LL )
                        {
                          v50 = 0;
                        }
                        else
                        {
LABEL_1385:
                          v50 = 0;
                          if ( v849 == (unsigned int *)v851 && !*(_DWORD *)(v17 + 2296) )
                          {
                            *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v17 + 2320) = *(int *)v56;
                            *(_QWORD *)(v17 + 2328) = v849;
                            *(_DWORD *)(v17 + 2296) = 1;
                            __b8(v17, 0LL, v858, v859);
                          }
                        }
                        v860 = *(_QWORD *)(v17 + 1344);
                        LODWORD(i7) = KeGetCurrentIrql();
                        __writecr8(0xFuLL);
                        (*(void (__fastcall **)(__int64))(v17 + 336))(v860);
                        v861 = 0LL;
                        v862 = **(unsigned int ***)(v17 + 1552);
                        v863 = v862 + 4;
                        v864 = (unsigned __int64)&v862[6 * *v862 + 4];
                        while ( 1 )
                        {
                          v863 += 6;
                          if ( (unsigned __int64)v863 >= v864 )
                            break;
                          v865 = *((_QWORD *)v863 + 1);
                          if ( v865 < v861 )
                            break;
                          if ( (v865 & 0xFFFFFFFFFFFFF000uLL) != v865 )
                            break;
                          v866 = v865 + v863[4];
                          if ( v866 <= v865 || v866 == v861 )
                            break;
                          v861 = v865 + v863[4];
                        }
                        (*(void (__fastcall **)(_QWORD))(v17 + 400))(*(_QWORD *)(v17 + 1344));
                        __writecr8((unsigned __int8)i7);
                        if ( v863 == (unsigned int *)v864 || *(_DWORD *)(v17 + 2296) )
                          goto LABEL_236;
                        *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v17 + 2320) = *(int *)v56;
                        *(_QWORD *)(v17 + 2328) = v863;
LABEL_457:
                        *(_DWORD *)(v17 + 2296) = 1;
                        goto LABEL_458;
                      }
                    }
LABEL_1364:
                    __writecr8(v841);
                    v56 = v1560;
                  }
                }
                v843 = *(_DWORD *)(v17 + 2296);
                v24 = *((unsigned int *)v56 + 5);
                if ( !v843 )
                {
                  *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v24 ^ v835;
                  v843 = *(_DWORD *)(v17 + 2296);
                }
                v844 = *((_QWORD *)v56 + 1);
                if ( !v843 )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v56;
                  *(_QWORD *)(v17 + 2328) = v844;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v831, v821);
                }
                goto LABEL_1369;
              }
              goto LABEL_2326;
            }
            if ( (*((_DWORD *)v56 + 10) & 1) != 0 && (!*(_QWORD *)(v17 + 2432) || (*(_DWORD *)(v17 + 2452) & 4) != 0) )
              goto LABEL_1735;
            if ( (*((_DWORD *)v56 + 10) & 1) != 0 )
            {
              v867 = *(_DWORD *)(v17 + 2452);
              v868 = v867;
              if ( *(_DWORD *)(v17 + 2084) )
              {
                if ( (((unsigned __int8)v867 ^ (unsigned __int8)(v867 >> 3)) & 4) != 0 )
                  goto LABEL_1735;
              }
              else
              {
                v868 = v867 ^ ((unsigned __int8)v867 ^ (unsigned __int8)(8 * v867)) & 0x20;
                *(_DWORD *)(v17 + 2452) = v868;
              }
              if ( !*(_QWORD *)(v17 + 2432) )
                goto LABEL_1466;
              LOBYTE(v869) = v868;
              if ( !*(_DWORD *)(v17 + 2084) )
              {
                v869 = v868 ^ ((unsigned __int8)v868 ^ (unsigned __int8)(8 * v868)) & 0x20;
                *(_DWORD *)(v17 + 2452) = v869;
                goto LABEL_1408;
              }
              if ( (((unsigned __int8)v868 ^ (unsigned __int8)(v868 >> 3)) & 4) != 0 )
              {
LABEL_1466:
                *(_DWORD *)(v17 + 2084) = 0;
                goto LABEL_1446;
              }
LABEL_1408:
              if ( (v869 & 4) != 0 )
              {
                v870 = *((_QWORD *)v56 + 1) & 0xFFFFFFFFFFFFF000uLL;
                v871 = (*((unsigned int *)v56 + 4) + (unsigned __int64)(*((_DWORD *)v56 + 2) & 0xFFF) + 4095) >> 12;
                while ( v871 )
                {
                  --v871;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v17 + 688))(v870)
                    && !*(_DWORD *)(v17 + 2296) )
                  {
                    *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v17 + 2320) = *(int *)v56;
                    *(_QWORD *)(v17 + 2328) = v870;
                    *(_DWORD *)(v17 + 2296) = 1;
                    __b8(v17, 0LL, v55, v54);
                  }
                  v870 += 4096LL;
                  *(_DWORD *)(v17 + 2088) += 256;
                }
                goto LABEL_1446;
              }
              v872 = (const char *)*((_QWORD *)v56 + 1);
              v873 = *((unsigned int *)v56 + 4);
              v54 = (unsigned __int64)v872;
              *(_DWORD *)(v17 + 2088) += v873;
              v874 = v872;
              v875 = *(_DWORD *)(v17 + 2068);
              for ( m = *(_QWORD *)(v17 + 2072); v874 < &v872[v873]; v874 += 64 )
                _mm_prefetch(v874, 0);
              v877 = *(_QWORD *)(v17 + 2072);
              v878 = (unsigned int)v873 >> 7;
              if ( (unsigned int)v873 >> 7 )
              {
                do
                {
                  v879 = 8LL;
                  do
                  {
                    v880 = v877 ^ *(_QWORD *)v54;
                    v881 = *(_QWORD *)(v54 + 8);
                    v54 += 16LL;
                    v877 = __ROL8__(__ROL8__(v880, v875) ^ v881, v875);
                    --v879;
                  }
                  while ( v879 );
                  v882 = __ROL8__(m ^ (v54 - (_QWORD)v872), 17) ^ m ^ (v54 - (_QWORD)v872);
                  v1704 = (v882 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v875 = ((unsigned __int8)(v1704 ^ v882) ^ (unsigned __int8)v875) & 0x3F;
                  if ( !v875 )
                    LOBYTE(v875) = 1;
                  --v878;
                }
                while ( v878 );
                v17 = (unsigned __int64)v1561;
              }
              v55 = v873 & 0x7F;
              if ( (unsigned int)v55 >= 8 )
              {
                v883 = (unsigned __int64)(unsigned int)v55 >> 3;
                do
                {
                  v877 = __ROL8__(*(_QWORD *)v54 ^ v877, v875);
                  v54 += 8LL;
                  v55 = (unsigned int)(v55 - 8);
                  --v883;
                }
                while ( v883 );
              }
              if ( (_DWORD)v55 )
              {
                do
                {
                  v884 = *(unsigned __int8 *)v54++;
                  v877 = __ROL8__(v884 ^ v877, v875);
                  v55 = (unsigned int)(v55 - 1);
                }
                while ( (_DWORD)v55 );
                v17 = (unsigned __int64)v1561;
              }
              for ( n = v877; ; LODWORD(v877) = n ^ v877 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v886 = *((_DWORD *)v56 + 5);
              v887 = v877 & 0x7FFFFFFF;
              if ( v887 != v886 )
              {
                v888 = *((unsigned int *)v56 + 4);
                v55 = *((_QWORD *)v56 + 1);
                if ( *((_DWORD *)v56 + 4) )
                {
                  v54 = 64LL;
                  if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
                  {
                    v889 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v890 = v55 & 0xFFFFFFFFFFFFF000uLL;
                    v891 = (v55 + v888 - 1) | 0xFFF;
                    v892 = (v55 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v893 = v889;
                      while ( 1 )
                      {
                        v894 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v17 + 1128))(v890, 0LL);
                        if ( v894 != -1073741267 )
                          break;
                        if ( v889 > 1u )
                          goto LABEL_1443;
                        v893 = v889;
                        __writecr8(v889);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v894 < 0 )
                        break;
LABEL_1443:
                      v890 += 4096LL;
                      v892 += 4096LL;
                      if ( v892 == v891 )
                        goto LABEL_1444;
                    }
                    __writecr8(v893);
                    v56 = v1560;
                    v50 = 0;
                    v886 = *((_DWORD *)v1560 + 5);
                  }
                }
                v907 = *(_DWORD *)(v17 + 2296);
                if ( !v907 )
                {
                  v908 = v887;
                  v909 = v886;
                  goto LABEL_1463;
                }
                goto LABEL_1464;
              }
LABEL_1446:
              LODWORD(i7) = -465226731;
            }
            else
            {
              v911 = (const char *)*((_QWORD *)v56 + 1);
              v912 = *((unsigned int *)v56 + 4);
              v54 = (unsigned __int64)v911;
              *(_DWORD *)(v17 + 2088) += v912;
              v913 = v911;
              v914 = *(_DWORD *)(v17 + 2068);
              for ( ii = *(_QWORD *)(v17 + 2072); v913 < &v911[v912]; v913 += 64 )
                _mm_prefetch(v913, 0);
              v916 = *(_QWORD *)(v17 + 2072);
              v917 = (unsigned int)v912 >> 7;
              if ( (unsigned int)v912 >> 7 )
              {
                do
                {
                  v918 = 8LL;
                  do
                  {
                    v919 = *(_QWORD *)(v54 + 8) ^ __ROL8__(*(_QWORD *)v54 ^ v916, v914);
                    v54 += 16LL;
                    v916 = __ROL8__(v919, v914);
                    --v918;
                  }
                  while ( v918 );
                  v920 = __ROL8__(ii ^ (v54 - (_QWORD)v911), 17) ^ ii ^ (v54 - (_QWORD)v911);
                  v1705 = (v920 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v914 = ((unsigned __int8)(v1705 ^ v920) ^ (unsigned __int8)v914) & 0x3F;
                  if ( !v914 )
                    LOBYTE(v914) = 1;
                  --v917;
                }
                while ( v917 );
                v17 = (unsigned __int64)v1561;
              }
              v55 = v912 & 0x7F;
              if ( (unsigned int)v55 >= 8 )
              {
                v921 = (unsigned __int64)(unsigned int)v55 >> 3;
                do
                {
                  v916 = __ROL8__(*(_QWORD *)v54 ^ v916, v914);
                  v54 += 8LL;
                  v55 = (unsigned int)(v55 - 8);
                  --v921;
                }
                while ( v921 );
              }
              for ( ; (_DWORD)v55; v55 = (unsigned int)(v55 - 1) )
              {
                v922 = *(unsigned __int8 *)v54++;
                v916 = __ROL8__(v922 ^ v916, v914);
              }
              for ( jj = v916; ; LODWORD(v916) = jj ^ v916 )
              {
                jj >>= 31;
                if ( !jj )
                  break;
              }
              v924 = v916 & 0x7FFFFFFF;
              if ( v924 == *((_DWORD *)v56 + 5) )
              {
LABEL_1445:
                v50 = 0;
                goto LABEL_1446;
              }
              if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
                v50 = 1;
              v925 = *((unsigned int *)v56 + 4);
              v926 = *((_QWORD *)v56 + 1);
              if ( *((_DWORD *)v56 + 4) )
              {
                v55 = 64LL;
                if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
                {
                  v927 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v928 = v926 & 0xFFFFFFFFFFFFF000uLL;
                  v1786 = (v926 + v925 - 1) | 0xFFF;
                  v929 = (v926 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v893 = v927;
                    while ( 1 )
                    {
                      v930 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v17 + 1128))(
                               v928,
                               0LL,
                               v55,
                               v54);
                      if ( v930 != -1073741267 )
                        break;
                      if ( v50 )
                        goto LABEL_1499;
                      if ( v927 > 1u )
                        goto LABEL_1497;
                      v893 = v927;
                      __writecr8(v927);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v930 < 0 )
                      break;
LABEL_1497:
                    v928 += 4096LL;
                    v929 += 4096LL;
                    if ( v929 == v1786 )
                    {
LABEL_1444:
                      __writecr8(v893);
                      v56 = v1560;
                      goto LABEL_1445;
                    }
                  }
LABEL_1499:
                  __writecr8(v893);
                  v56 = v1560;
                }
              }
              v907 = *(_DWORD *)(v17 + 2296);
              v50 = 0;
              v908 = *((unsigned int *)v56 + 5);
              if ( !v907 )
              {
                v909 = v924;
LABEL_1463:
                *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v909 ^ v908;
                v907 = *(_DWORD *)(v17 + 2296);
              }
LABEL_1464:
              v910 = *((_QWORD *)v56 + 1);
              LODWORD(i7) = -465226731;
              if ( !v907 )
              {
                *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v17 + 2320) = *(int *)v56;
                *(_QWORD *)(v17 + 2328) = v910;
                *(_DWORD *)(v17 + 2296) = 1;
                __b8(v17, 0LL, v55, v54);
              }
            }
            v895 = *((_DWORD *)v56 + 10);
            if ( (v895 & 2) == 0 )
              goto LABEL_236;
            v896 = *((_QWORD *)v56 + 1);
            if ( (v895 & 4) != 0 )
            {
              v897 = *((_QWORD *)v56 + 3);
              v898 = **(_QWORD **)(v896 + 112);
              if ( v898 != v897 )
              {
                v899 = *(_QWORD *)(v17 + 1424);
                *(_QWORD *)v899 = v898;
                *(_DWORD *)(v899 + 16) = 256;
                v900 = *(_DWORD *)(v17 + 2296);
                if ( !v900 )
                {
                  *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v898 ^ v897;
                  v900 = *(_DWORD *)(v17 + 2296);
                }
                v901 = *(_QWORD *)(v896 + 112);
                if ( !v900 )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v56;
                  *(_QWORD *)(v17 + 2328) = v901;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v55, v54);
                }
              }
            }
            if ( (*((_DWORD *)v56 + 10) & 8) == 0 )
              goto LABEL_236;
            v902 = *((_QWORD *)v56 + 4);
            v903 = **(_QWORD **)(v896 + 120);
            if ( v903 == v902 )
              goto LABEL_236;
            v904 = *(_QWORD *)(v17 + 1424);
            *(_QWORD *)v904 = v903;
            *(_DWORD *)(v904 + 16) = 256;
            v905 = *(_DWORD *)(v17 + 2296);
            if ( !v905 )
            {
              *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v903 ^ v902;
              v905 = *(_DWORD *)(v17 + 2296);
            }
            v906 = *(_QWORD *)(v896 + 120);
            if ( v905 )
              goto LABEL_236;
            *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v17 + 2320) = *(int *)v56;
            *(_QWORD *)(v17 + 2328) = v906;
            goto LABEL_1322;
          }
          if ( (*(_DWORD *)(v17 + 2096) & 1) == 0 )
            goto LABEL_236;
          if ( !*(_QWORD *)(v17 + 2432) || (*(_DWORD *)(v17 + 2452) & 4) != 0 )
          {
            v932 = 0LL;
          }
          else
          {
            v931 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(v17 + 976))(26LL, &v1655, 0LL);
            v932 = v1655;
            if ( v931 < 0 )
              v932 = 0LL;
          }
          v933 = *(__int64 (__fastcall **)(_QWORD))(v17 + 944);
          v1562 = v932;
          v934 = 0;
          v1563 = 0;
          v935 = v933(0LL);
          while ( 2 )
          {
            v980 = v935;
            if ( !v935 )
            {
              v981 = *(_QWORD *)(v17 + 1248);
              v50 = 0;
              if ( (*(int (__fastcall **)(__int64))(v17 + 928))(v981) >= 0 )
              {
                v982 = (*(__int64 (__fastcall **)(__int64))(v17 + 992))(v981);
                v1592 = v982;
                v983 = (*(__int64 (__fastcall **)(__int64, char *))(v17 + 1000))(v981, v1570);
                v1789 = (*(__int64 (__fastcall **)(__int64))(v17 + 1008))(v981);
                if ( v982 == 114
                  || *(_DWORD *)(v17 + 2296)
                  || (*(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v982 ^ 0x72LL, *(_DWORD *)(v17 + 2296)) )
                {
                  v986 = (int *)v1560;
                }
                else
                {
                  v986 = (int *)v1560;
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = (char *)v986 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *v986;
                  *(_QWORD *)(v17 + 2328) = v981;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v984, v985);
                }
                v987 = 0;
                if ( (v982 & 7) == 1 )
                {
                  v987 = 48;
                }
                else if ( (v982 & 7) == 2 )
                {
                  v987 = 16;
                  LOBYTE(v50) = 16;
                }
                else if ( (v982 & 7) != 0 && !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = (char *)v986 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *v986;
                  *(_QWORD *)(v17 + 2328) = v981;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v984, v985);
                }
                i7 = *(_QWORD *)(v17 + 1480);
                v988 = (unsigned __int64)v982 >> 4;
                v989 = v987 | *(_BYTE *)(i7 + 2 * v988);
                v990 = (int *)v1560;
                if ( v989 != v983 && !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = (char *)v990 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *v990;
                  *(_QWORD *)(v17 + 2328) = v981;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v984, v985);
                }
                v991 = v50 | *(_BYTE *)(i7 + 2 * v988 + 1);
                v50 = 0;
                if ( v991 != v1570[0] && !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = (char *)v990 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *v990;
                  *(_QWORD *)(v17 + 2328) = v981;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v984, v985);
                }
                if ( v981 == *(_QWORD *)(v17 + 1248) )
                  v992 = 0LL;
                else
                  v992 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v17 + 984))(v981, 1LL);
                v1564 = (__int64)v992;
                if ( v992 )
                {
                  v993 = *v992;
                  v994 = v992;
                  if ( *v992 )
                  {
                    v995 = v1789;
                    v996 = v1560;
                    do
                    {
                      *v994 = v993 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v17 + 480))();
                      v997 = (unsigned __int8)v1570[0];
                      i7 = v994[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( i7 == v995 )
                        v997 = v983;
                      v998 = v994[1] >> 6;
                      LOBYTE(v998) = v998 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v17 + 1016))(v998, v997) )
                      {
                        if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
                        {
                          v1000 = *(_QWORD **)(v17 + 2688);
                          v1001 = 48;
                          v999 = 6LL;
                          do
                          {
                            v1001 -= 8;
                            *v1000 = *(_QWORD *)v996;
                            v996 += 8;
                            ++v1000;
                            --v999;
                          }
                          while ( v999 );
                          if ( v1001 )
                          {
                            do
                            {
                              v1002 = *v996++;
                              *(_BYTE *)v1000 = v1002;
                              v1000 = (_QWORD *)((char *)v1000 + 1);
                              --v1001;
                            }
                            while ( v1001 );
                            v995 = v1789;
                          }
                          v996 = *(char **)(v17 + 2688);
                        }
                        *((_QWORD *)v996 + 3) = i7;
                        *((_QWORD *)v996 + 4) = *v994;
                        v996[40] = ((unsigned __int64)*((unsigned int *)v994 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v17 + 2296) )
                        {
                          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v17 + 2312) = v996 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v17 + 2320) = *(int *)v996;
                          *(_QWORD *)(v17 + 2328) = v981;
                          *(_DWORD *)(v17 + 2296) = 1;
                          __b8(v17, 0LL, v999, 0LL);
                        }
                      }
                      v994 += 6;
                      v993 = *v994;
                    }
                    while ( *v994 );
                    v992 = (unsigned __int64 *)v1564;
                    v50 = 0;
                  }
                  (*(void (__fastcall **)(unsigned __int64 *))(v17 + 256))(v992);
                }
                (*(void (__fastcall **)(__int64))(v17 + 936))(v981);
                v934 = v1563;
                *(_DWORD *)(v17 + 2088) += 0x8000;
              }
              if ( v1562 )
                (*(void (**)(void))(v17 + 480))();
              v1003 = v934 << 8;
              goto LABEL_1638;
            }
            if ( v932 == v935 )
            {
              i7 = (unsigned __int64)v56;
              if ( (*(int (__fastcall **)(__int64))(v17 + 928))(v935) >= 0 )
              {
                v936 = (*(__int64 (__fastcall **)(__int64))(v17 + 992))(v980);
                v1587 = v936;
                v1787 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v17 + 1000))(v980, &v1568);
                v1576 = (*(__int64 (__fastcall **)(__int64))(v17 + 1008))(v980);
                if ( v936 != 97 && !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v936 ^ 0x61LL;
                  if ( !*(_DWORD *)(v17 + 2296) )
                  {
                    *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v17 + 2320) = *(int *)v56;
                    *(_QWORD *)(v17 + 2328) = v980;
                    *(_DWORD *)(v17 + 2296) = 1;
                    __b8(v17, 0LL, v937, v938);
                  }
                }
                v939 = 0;
                v940 = 0;
                if ( (v936 & 7) == 1 )
                {
                  v939 = 48;
                }
                else if ( (v936 & 7) == 2 )
                {
                  v939 = 16;
                  v940 = 16;
                }
                else if ( (v936 & 7) != 0 && !*(_DWORD *)(v17 + 2296) )
                {
                  v941 = v1560;
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = i7 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v941;
                  *(_QWORD *)(v17 + 2328) = v980;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v937, v938);
                }
                v942 = *(_QWORD *)(v17 + 1480);
                v943 = (unsigned __int64)v936 >> 4;
                v71 = (*(_BYTE *)(v942 + 2 * v943) | (unsigned __int8)v939) == v1787;
                v944 = v1560;
                if ( !v71 && !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = i7 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v944;
                  *(_QWORD *)(v17 + 2328) = v980;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v937, v938);
                }
                if ( ((unsigned __int8)v940 | *(_BYTE *)(v942 + 2 * v943 + 1)) != v1568 && !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = i7 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v944;
                  *(_QWORD *)(v17 + 2328) = v980;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v937, v938);
                }
                if ( v980 == *(_QWORD *)(v17 + 1248) )
                  v945 = 0LL;
                else
                  v945 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v17 + 984))(v980, 1LL);
                v1564 = (__int64)v945;
                if ( v945 )
                {
                  v946 = *v945;
                  v947 = v945;
                  if ( *v945 )
                  {
                    v948 = v1787;
                    v949 = v1576;
                    do
                    {
                      *v947 = v946 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v17 + 480))();
                      v950 = v1568;
                      v951 = v947[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v951 == v949 )
                        v950 = v948;
                      v952 = v947[1] >> 6;
                      LOBYTE(v952) = v952 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v17 + 1016))(v952, v950) )
                      {
                        if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
                        {
                          v955 = *(_QWORD **)(v17 + 2688);
                          v956 = 48;
                          v953 = 6LL;
                          do
                          {
                            v956 -= 8;
                            *v955 = *(_QWORD *)i7;
                            i7 += 8LL;
                            ++v955;
                            --v953;
                          }
                          while ( v953 );
                          if ( v956 )
                          {
                            do
                            {
                              v957 = *(_BYTE *)i7++;
                              *(_BYTE *)v955 = v957;
                              v955 = (_QWORD *)((char *)v955 + 1);
                              --v956;
                            }
                            while ( v956 );
                            v948 = v1787;
                          }
                          i7 = *(_QWORD *)(v17 + 2688);
                        }
                        *(_QWORD *)(i7 + 24) = v951;
                        *(_QWORD *)(i7 + 32) = *v947;
                        *(_BYTE *)(i7 + 40) = ((unsigned __int64)*((unsigned int *)v947 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v17 + 2296) )
                        {
                          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v17 + 2312) = i7 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v17 + 2320) = *(int *)i7;
                          *(_QWORD *)(v17 + 2328) = v980;
                          *(_DWORD *)(v17 + 2296) = 1;
                          __b8(v17, 0LL, v953, v954);
                        }
                      }
                      v947 += 6;
                      v946 = *v947;
                    }
                    while ( *v947 );
                    goto LABEL_1589;
                  }
                  goto LABEL_1590;
                }
                goto LABEL_1591;
              }
            }
            else if ( (*(unsigned int (__fastcall **)(__int64))(v17 + 968))(v935) )
            {
              i7 = (unsigned __int64)v56;
              if ( (*(int (__fastcall **)(__int64))(v17 + 928))(v980) >= 0 )
              {
                v958 = (*(__int64 (__fastcall **)(__int64))(v17 + 992))(v980);
                v1588 = v958;
                v1788 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v17 + 1000))(v980, &v1569);
                v1576 = (*(__int64 (__fastcall **)(__int64))(v17 + 1008))(v980);
                if ( v958 != 97 && !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v958 ^ 0x61LL;
                  if ( !*(_DWORD *)(v17 + 2296) )
                  {
                    *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v17 + 2320) = *(int *)v56;
                    *(_QWORD *)(v17 + 2328) = v980;
                    *(_DWORD *)(v17 + 2296) = 1;
                    __b8(v17, 0LL, v959, v960);
                  }
                }
                v961 = 0;
                v962 = 0;
                if ( (v958 & 7) == 1 )
                {
                  v961 = 48;
                }
                else if ( (v958 & 7) == 2 )
                {
                  v961 = 16;
                  v962 = 16;
                }
                else if ( (v958 & 7) != 0 && !*(_DWORD *)(v17 + 2296) )
                {
                  v963 = v1560;
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = i7 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v963;
                  *(_QWORD *)(v17 + 2328) = v980;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v959, v960);
                }
                v964 = *(_QWORD *)(v17 + 1480);
                v965 = (unsigned __int64)v958 >> 4;
                v71 = (*(_BYTE *)(v964 + 2 * v965) | (unsigned __int8)v961) == v1788;
                v966 = v1560;
                if ( !v71 && !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = i7 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v966;
                  *(_QWORD *)(v17 + 2328) = v980;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v959, v960);
                }
                if ( ((unsigned __int8)v962 | *(_BYTE *)(v964 + 2 * v965 + 1)) != v1569 && !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = i7 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v966;
                  *(_QWORD *)(v17 + 2328) = v980;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v959, v960);
                }
                if ( v980 == *(_QWORD *)(v17 + 1248) )
                  v945 = 0LL;
                else
                  v945 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v17 + 984))(v980, 1LL);
                v1564 = (__int64)v945;
                if ( v945 )
                {
                  v967 = *v945;
                  v968 = v945;
                  if ( *v945 )
                  {
                    v969 = v1788;
                    v970 = v1576;
                    do
                    {
                      *v968 = v967 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v17 + 480))();
                      v971 = v1569;
                      v972 = v968[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v972 == v970 )
                        v971 = v969;
                      v973 = v968[1] >> 6;
                      LOBYTE(v973) = v973 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v17 + 1016))(v973, v971) )
                      {
                        if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
                        {
                          v976 = *(_QWORD **)(v17 + 2688);
                          v977 = 48;
                          v974 = 6LL;
                          do
                          {
                            v977 -= 8;
                            *v976 = *(_QWORD *)i7;
                            i7 += 8LL;
                            ++v976;
                            --v974;
                          }
                          while ( v974 );
                          if ( v977 )
                          {
                            do
                            {
                              v978 = *(_BYTE *)i7++;
                              *(_BYTE *)v976 = v978;
                              v976 = (_QWORD *)((char *)v976 + 1);
                              --v977;
                            }
                            while ( v977 );
                            v969 = v1788;
                          }
                          i7 = *(_QWORD *)(v17 + 2688);
                        }
                        *(_QWORD *)(i7 + 24) = v972;
                        *(_QWORD *)(i7 + 32) = *v968;
                        *(_BYTE *)(i7 + 40) = ((unsigned __int64)*((unsigned int *)v968 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v17 + 2296) )
                        {
                          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v17 + 2312) = i7 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v17 + 2320) = *(int *)i7;
                          *(_QWORD *)(v17 + 2328) = v980;
                          *(_DWORD *)(v17 + 2296) = 1;
                          __b8(v17, 0LL, v974, v975);
                        }
                      }
                      v968 += 6;
                      v967 = *v968;
                    }
                    while ( *v968 );
LABEL_1589:
                    v945 = (unsigned __int64 *)v1564;
                  }
LABEL_1590:
                  (*(void (__fastcall **)(unsigned __int64 *))(v17 + 256))(v945);
                }
LABEL_1591:
                (*(void (__fastcall **)(__int64))(v17 + 936))(v980);
                v56 = v1560;
                *(_DWORD *)(v17 + 2088) += 0x8000;
                v934 = v1563;
                v932 = v1562;
              }
            }
            v979 = *(__int64 (__fastcall **)(_QWORD))(v17 + 944);
            v1563 = ++v934;
            v935 = v979(v980);
            continue;
          }
        }
        if ( (v56[42] & 1) != 0 )
        {
          if ( !*(_QWORD *)(v17 + 2432) )
            goto LABEL_1735;
          v1004 = *(_DWORD *)(v17 + 2452);
          if ( (v1004 & 4) != 0 )
            goto LABEL_1735;
          if ( *(_DWORD *)(v17 + 2084) )
          {
            if ( (v1004 & 0x20) != 0 )
              goto LABEL_1735;
          }
          else
          {
            *(_DWORD *)(v17 + 2452) = v1004 ^ ((unsigned __int8)v1004 ^ (unsigned __int8)(8 * v1004)) & 0x20;
          }
        }
        v1005 = *(unsigned int *)(v17 + 2084);
        v1006 = *((unsigned int *)v56 + 9);
        v1581 = *((_QWORD *)v56 + 1);
        v1007 = v1581 + 12 * v1005;
        v1008 = (unsigned int *)(v1007 + 12);
        v1564 = v1007;
        v1567 = (unsigned int *)(v1007 + 12);
        v1009 = v1006 / 0xC;
        v1566 = v1006 / 0xC;
        v1583 = (unsigned int *)(v1581 + 12LL * (unsigned int)(v1006 / 0xC));
        i7 = (unsigned __int64)&v56[v1005 + 48];
        v1562 = i7;
        v1010 = v1006 / 0xC - 1;
        v1790 = v1010;
        if ( (unsigned int)(v1006 / 0xC) )
        {
          v1011 = (unsigned __int64)&v56[((v1010 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
          v1573 = (char *)v1011;
        }
        else
        {
          v1011 = (unsigned __int64)(v56 + 48);
          v1573 = v56 + 48;
          v1790 = v1006 / 0xC - 1;
        }
        BugCheckParameter2 = v1011 + 24LL * *((unsigned __int16 *)v56 + 20);
        if ( !(_DWORD)v1009 || (unsigned int)v1005 >= v1010 )
          goto LABEL_1686;
        while ( 2 )
        {
          if ( *(char *)i7 < 0 )
            goto LABEL_1683;
          v1012 = *(_DWORD *)(v1007 + 4);
          v1013 = *((_QWORD *)v56 + 3) + v1012;
          v1014 = *v1008 - v1012;
          *(_DWORD *)(v17 + 2088) += v1014;
          v1015 = (_QWORD *)v1013;
          v1016 = *(_DWORD *)(v17 + 2068);
          v1017 = (const char *)v1013;
          v1018 = *(_QWORD *)(v17 + 2072);
          v1576 = v1013;
          v1019 = (unsigned int)v1014;
          if ( v1013 < v1014 + v1013 )
          {
            do
            {
              _mm_prefetch(v1017, 0);
              v1017 += 64;
            }
            while ( (unsigned __int64)v1017 < v1014 + v1013 );
          }
          v1020 = v1018;
          v1021 = (unsigned int)v1014 >> 7;
          if ( (unsigned int)v1014 >> 7 )
          {
            do
            {
              v1022 = 8LL;
              do
              {
                v1023 = v1020 ^ *v1015;
                v1024 = v1015[1];
                v1015 += 2;
                v1020 = __ROL8__(__ROL8__(v1023, v1016) ^ v1024, v1016);
                --v1022;
              }
              while ( v1022 );
              v1025 = __ROL8__(v1018 ^ ((unsigned __int64)v1015 - v1013), 17) ^ v1018 ^ ((unsigned __int64)v1015 - v1013);
              v1706 = (v1025 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1016 = ((unsigned __int8)v1706 ^ (unsigned __int8)(v1025 ^ v1016)) & 0x3F;
              if ( !v1016 )
                LOBYTE(v1016) = 1;
              --v1021;
            }
            while ( v1021 );
            v17 = (unsigned __int64)v1561;
          }
          v1026 = v1014 & 0x7F;
          if ( (unsigned int)v1026 >= 8 )
          {
            v1027 = (unsigned __int64)(unsigned int)v1026 >> 3;
            do
            {
              v1020 = __ROL8__(*v1015++ ^ v1020, v1016);
              v1026 = (unsigned int)(v1026 - 8);
              --v1027;
            }
            while ( v1027 );
          }
          if ( (_DWORD)v1026 )
          {
            do
            {
              v1028 = *(unsigned __int8 *)v1015;
              v1015 = (_QWORD *)((char *)v1015 + 1);
              v1020 = __ROL8__(v1028 ^ v1020, v1016);
              v1026 = (unsigned int)(v1026 - 1);
            }
            while ( (_DWORD)v1026 );
            i7 = v1562;
          }
          for ( kk = v1020; ; LOBYTE(v1020) = kk ^ v1020 )
          {
            kk >>= 7;
            if ( !kk )
              break;
          }
          v1030 = *(_BYTE *)i7;
          v1031 = v1020 & 0x7F;
          if ( v1031 == (*(_BYTE *)i7 & 0x7F) )
          {
LABEL_1680:
            v50 = 0;
          }
          else
          {
            if ( v1019 && (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
            {
              v1032 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1033 = v1013 & 0xFFFFFFFFFFFFF000uLL;
              v1034 = (v1019 - 1 + v1013) | 0xFFF;
              v1035 = v1033 - 1;
              while ( 1 )
              {
                v1036 = v1032;
                while ( 1 )
                {
                  v1037 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v17 + 1128))(v1033, 0LL);
                  if ( v1037 != -1073741267 )
                    break;
                  if ( v1032 > 1u )
                    goto LABEL_1678;
                  v1036 = v1032;
                  __writecr8(v1032);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1037 < 0 )
                  break;
LABEL_1678:
                v1033 += 4096LL;
                v1035 += 4096LL;
                if ( v1035 == v1034 )
                {
                  __writecr8(v1036);
                  goto LABEL_1680;
                }
              }
              __writecr8(v1036);
              v1013 = v1576;
              v1030 = *(_BYTE *)v1562;
            }
            v50 = 0;
            if ( !*(_DWORD *)(v17 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1030 & 0x7F ^ (unsigned __int64)v1031;
              if ( !*(_DWORD *)(v17 + 2296) )
              {
                v56 = v1560;
                *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v17 + 2320) = *(int *)v56;
                *(_QWORD *)(v17 + 2328) = v1013;
                *(_DWORD *)(v17 + 2296) = 1;
                __b8(v17, 0LL, v1020, v1026);
LABEL_1682:
                v1007 = v1564;
                *(_DWORD *)(v17 + 2088) += 64;
                i7 = v1562;
                v1008 = v1567;
LABEL_1683:
                ++i7;
                v1007 += 12LL;
                v1562 = i7;
                v1008 += 3;
                v1564 = v1007;
                v1567 = v1008;
                if ( v1008 >= v1583 || *(_DWORD *)(v17 + 2088) >= *(_DWORD *)(v17 + 2092) )
                {
                  LODWORD(v1009) = v1566;
                  LODWORD(v1005) = ((int)v1007 - (int)v1581) / 12;
                  *(_DWORD *)(v17 + 2084) = v1005;
                  v1011 = (unsigned __int64)v1573;
                  if ( (unsigned int)v1005 < v1790 )
                    goto LABEL_236;
LABEL_1686:
                  if ( *(_DWORD *)(v17 + 2088) >= *(_DWORD *)(v17 + 2092) )
                    goto LABEL_236;
                  if ( (_DWORD)v1009 )
                    LODWORD(v1005) = v1005 - v1009 + 1;
                  v1038 = v1011 + 24LL * (unsigned int)v1005;
                  v1564 = v1038;
                  while ( 1 )
                  {
                    v1039 = (int *)(v1038 + 8);
                    v1040 = 2LL;
                    v1562 = 2LL;
                    v1791 = (int *)(v1038 + 8);
                    do
                    {
                      if ( *v1039 < 0 )
                        goto LABEL_1728;
                      i7 = *((_QWORD *)v56 + 3) + (unsigned int)*(v1039 - 2);
                      v1041 = (unsigned int)(*(v1039 - 1) - *(v1039 - 2));
                      *(_DWORD *)(v17 + 2088) += v1041;
                      v1042 = (_QWORD *)i7;
                      v1043 = *(_DWORD *)(v17 + 2068);
                      v1044 = (const char *)i7;
                      v1045 = *(_QWORD *)(v17 + 2072);
                      v1046 = (unsigned int)v1041;
                      v1567 = (unsigned int *)i7;
                      v1576 = (unsigned int)v1041;
                      if ( i7 < v1041 + i7 )
                      {
                        do
                        {
                          _mm_prefetch(v1044, 0);
                          v1044 += 64;
                        }
                        while ( (unsigned __int64)v1044 < v1041 + i7 );
                      }
                      v1047 = v1045;
                      v1048 = (unsigned int)v1041 >> 7;
                      if ( (unsigned int)v1041 >> 7 )
                      {
                        do
                        {
                          v1049 = 8LL;
                          do
                          {
                            v1050 = v1042[1] ^ __ROL8__(*v1042 ^ v1047, v1043);
                            v1042 += 2;
                            v1047 = __ROL8__(v1050, v1043);
                            --v1049;
                          }
                          while ( v1049 );
                          v1051 = (__ROL8__(v1045 ^ ((unsigned __int64)v1042 - i7), 17) ^ v1045 ^ ((unsigned __int64)v1042
                                                                                                 - i7))
                                * (unsigned __int128)0x7010008004002001uLL;
                          v1707 = *((_QWORD *)&v1051 + 1);
                          v1043 = (BYTE8(v1051) ^ (unsigned __int8)(v1051 ^ v1043)) & 0x3F;
                          if ( !v1043 )
                            LOBYTE(v1043) = 1;
                          --v1048;
                        }
                        while ( v1048 );
                        v17 = (unsigned __int64)v1561;
                        v1046 = v1576;
                        v1039 = v1791;
                        v1040 = v1562;
                      }
                      v1052 = v1041 & 0x7F;
                      if ( (unsigned int)v1052 >= 8 )
                      {
                        v1053 = (unsigned __int64)(unsigned int)v1052 >> 3;
                        do
                        {
                          v1047 = __ROL8__(*v1042++ ^ v1047, v1043);
                          v1052 = (unsigned int)(v1052 - 8);
                          --v1053;
                        }
                        while ( v1053 );
                      }
                      if ( (_DWORD)v1052 )
                      {
                        do
                        {
                          v1054 = *(unsigned __int8 *)v1042;
                          v1042 = (_QWORD *)((char *)v1042 + 1);
                          v1047 = __ROL8__(v1054 ^ v1047, v1043);
                          v1052 = (unsigned int)(v1052 - 1);
                        }
                        while ( (_DWORD)v1052 );
                        v17 = (unsigned __int64)v1561;
                      }
                      for ( mm = v1047; ; LODWORD(v1047) = mm ^ v1047 )
                      {
                        mm >>= 31;
                        if ( !mm )
                          break;
                      }
                      v1056 = *v1039;
                      v1057 = v1047 & 0x7FFFFFFF;
                      if ( v1057 == (*v1039 & 0x7FFFFFFF) )
                        goto LABEL_1728;
                      if ( !v1046 )
                        goto LABEL_1724;
                      v1052 = 64LL;
                      if ( (*(_DWORD *)(v17 + 2452) & 0x40) == 0 )
                        goto LABEL_1724;
                      v1058 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v1059 = i7 & 0xFFFFFFFFFFFFF000uLL;
                      v1060 = (i7 + v1046 - 1) | 0xFFF;
                      v1061 = (i7 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      do
                      {
                        i7 = v1058;
                        while ( 1 )
                        {
                          v1062 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v17 + 1128))(
                                    v1059,
                                    0LL,
                                    v1052,
                                    v1042);
                          if ( v1062 != -1073741267 )
                            break;
                          if ( v1058 > 1u )
                            goto LABEL_1732;
                          i7 = v1058;
                          __writecr8(v1058);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v1062 < 0 )
                        {
                          __writecr8(i7);
                          v1039 = v1791;
                          i7 = (unsigned __int64)v1567;
                          v1040 = v1562;
                          v56 = v1560;
                          v1056 = *v1791;
LABEL_1724:
                          v1063 = v1056;
                          if ( !*(_DWORD *)(v17 + 2296) )
                          {
                            LODWORD(v1063) = v1056 & 0x7FFFFFFF;
                            *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1063 ^ v1057;
                            if ( !*(_DWORD *)(v17 + 2296) )
                            {
                              *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v17 + 2320) = *(int *)v56;
                              *(_QWORD *)(v17 + 2328) = i7;
                              *(_DWORD *)(v17 + 2296) = 1;
                              __b8(v17, 0LL, v1052, v1042);
                              goto LABEL_1727;
                            }
                          }
                          goto LABEL_1728;
                        }
LABEL_1732:
                        v1059 += 4096LL;
                        v1061 += 4096LL;
                      }
                      while ( v1061 != v1060 );
                      __writecr8(i7);
                      v1040 = v1562;
LABEL_1727:
                      v1039 = v1791;
LABEL_1728:
                      v56 = v1560;
                      v1039 += 3;
                      --v1040;
                      v1791 = v1039;
                      v1562 = v1040;
                    }
                    while ( v1040 );
                    v1064 = v1564;
                    ++*(_DWORD *)(v17 + 2084);
                    v1038 = v1064 + 24;
                    v1564 = v1038;
                    if ( v1038 == BugCheckParameter2 )
                    {
                      v50 = 0;
                      goto LABEL_1735;
                    }
                    if ( *(_DWORD *)(v17 + 2088) >= *(_DWORD *)(v17 + 2092) )
                      goto LABEL_235;
                  }
                }
                continue;
              }
            }
          }
          break;
        }
        v56 = v1560;
        goto LABEL_1682;
      }
      if ( v77 == 38 )
      {
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v17 + 416))(v1749, *((unsigned int *)v56 + 11));
        v1512 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v17 + 464))(v1749, v1750);
        __asm { xgetbv }
        v1514 = v1512 | (v1513 << 32);
        (*(void (__fastcall **)(_BYTE *))(v17 + 408))(v1750);
        v1515 = *((_QWORD *)v56 + 4);
        v55 = v1514 & *((_QWORD *)v56 + 3);
        if ( v55 == v1515 )
          goto LABEL_236;
        v244 = *((_QWORD *)v56 + 5);
        if ( *(_DWORD *)(v17 + 2296) )
          goto LABEL_236;
        *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v55 ^ v1515;
        v106 = *(_DWORD *)(v17 + 2296);
        goto LABEL_455;
      }
      if ( v77 <= 42 )
      {
        *(_DWORD *)(v17 + 2088) += *((_DWORD *)v56 + 9);
        v1393 = *((unsigned int *)v56 + 9);
        v1394 = (_QWORD *)(v17 + *((unsigned int *)v56 + 8));
        v1395 = *(_DWORD *)(v17 + 2068);
        v1396 = v1394;
        i7 = *(_QWORD *)(v17 + 2072);
        v1397 = (const char *)v1394;
        if ( v1394 < (_QWORD *)((char *)v1394 + v1393) )
        {
          do
          {
            _mm_prefetch(v1397, 0);
            v1397 += 64;
          }
          while ( v1397 < (const char *)v1394 + v1393 );
        }
        v55 = *(_QWORD *)(v17 + 2072);
        v1398 = (unsigned int)v1393 >> 7;
        if ( (unsigned int)v1393 >> 7 )
        {
          do
          {
            v1399 = 8LL;
            do
            {
              v1400 = v1396[1] ^ __ROL8__(*v1396 ^ v55, v1395);
              v1396 += 2;
              v55 = __ROL8__(v1400, v1395);
              --v1399;
            }
            while ( v1399 );
            v1401 = (__ROL8__(i7 ^ ((char *)v1396 - (char *)v1394), 17) ^ i7 ^ ((char *)v1396 - (char *)v1394))
                  * (unsigned __int128)0x7010008004002001uLL;
            v1719 = *((_QWORD *)&v1401 + 1);
            v1395 = (BYTE8(v1401) ^ (unsigned __int8)(v1401 ^ v1395)) & 0x3F;
            if ( !v1395 )
              LOBYTE(v1395) = 1;
            --v1398;
          }
          while ( v1398 );
          v17 = (unsigned __int64)v1561;
        }
        v54 = v1393 & 0x7F;
        if ( (unsigned int)v54 >= 8 )
        {
          v1402 = (unsigned __int64)(unsigned int)v54 >> 3;
          do
          {
            v55 = __ROL8__(*v1396++ ^ v55, v1395);
            v54 = (unsigned int)(v54 - 8);
            --v1402;
          }
          while ( v1402 );
        }
        for ( ; (_DWORD)v54; v54 = (unsigned int)(v54 - 1) )
        {
          v1403 = *(unsigned __int8 *)v1396;
          v1396 = (_QWORD *)((char *)v1396 + 1);
          v55 = __ROL8__(v1403 ^ v55, v1395);
        }
        v1404 = *((_QWORD *)v56 + 3);
        if ( v55 == v1404 )
          goto LABEL_236;
        v1405 = *(_DWORD *)(v17 + 2296);
        if ( !v1405 )
        {
          *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v55 ^ v1404;
          v1405 = *(_DWORD *)(v17 + 2296);
        }
        v1406 = v17 + *((unsigned int *)v56 + 8);
        if ( v1405 )
          goto LABEL_236;
        *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v17 + 2320) = *(int *)v56;
        *(_QWORD *)(v17 + 2328) = v1406;
        goto LABEL_2325;
      }
      if ( v77 == 43 )
        goto LABEL_2130;
      if ( v77 != 44 )
      {
        switch ( v77 )
        {
          case '.':
            if ( (*(_DWORD *)(v17 + 2096) & 1) != 0 )
              goto LABEL_236;
            v1163 = 0;
            i7 = *(_QWORD *)(v17 + 1352);
            (*(void (**)(void))(v17 + 376))();
            if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 || (v1164 = *(_DWORD *)(v17 + 2384), v1164 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 296))(*(_QWORD *)(v17 + 2560), 0LL);
              v1165 = 0x80;
            }
            else
            {
              v1165 = 1 << v1164;
            }
            (*(void (__fastcall **)(unsigned __int64, _QWORD))(v17 + 312))(i7, 0LL);
            if ( v1165 == (char)0x80 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 304))(*(_QWORD *)(v17 + 2560), 0LL);
            }
            else
            {
              v1166 = *(volatile signed __int8 ***)(v17 + 1312);
              v1167 = *v1166;
              if ( *v1166 != (volatile signed __int8 *)v1166 )
              {
                v1168 = ~v1165;
                do
                {
                  _InterlockedAnd8(&v1167[*(_QWORD *)(v17 + 1720) - *(_QWORD *)(v17 + 1744)], v1168);
                  v1167 = *(volatile signed __int8 **)v1167;
                  ++v1163;
                }
                while ( v1167 != (volatile signed __int8 *)v1166 );
              }
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 320))(*(_QWORD *)(v17 + 1352), 0LL);
            (*(void (**)(void))(v17 + 384))();
            v1003 = v1163 << 7;
LABEL_1638:
            *(_DWORD *)(v17 + 2088) += v1003;
            goto LABEL_236;
          case '/':
            v1578 = *(_QWORD *)(*(_QWORD *)(v17 + 1704)
                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v17 + 1608))
                              + *(_QWORD *)(v17 + 1672));
            v1154 = (*(__int64 (**)(void))(v17 + 1168))();
            if ( v1154 == 0xFFFFFFFFLL )
            {
              v1578 = 0LL;
              v1155 = *(_QWORD *)(v17 + 2440);
              if ( !v1155 )
                goto LABEL_1896;
              v1156 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v17 + 1152))(v1155, &v1578);
              v1157 = v1578;
              if ( v1156 < 0 )
                v1157 = 0LL;
              v1578 = v1157;
              if ( !v1157 )
LABEL_1896:
                v1578 = (*(__int64 (__fastcall **)(_QWORD))(v17 + 960))(0LL);
              *(_QWORD *)(v17 + 2440) = 0LL;
              v1158 = 0;
              if ( !v1578 )
                goto LABEL_1905;
              LODWORD(i7) = 1;
              while ( 1 )
              {
                ++v1158;
                if ( (*(int (**)(void))(v17 + 928))() >= 0 )
                {
                  (*(void (__fastcall **)(__int64, _BYTE *))(v17 + 1080))(v1578, v1769);
                  v1154 = (*(__int64 (**)(void))(v17 + 1168))();
                  (*(void (__fastcall **)(_BYTE *))(v17 + 1088))(v1769);
                  (*(void (__fastcall **)(__int64))(v17 + 936))(v1578);
                  if ( v1154 != 0xFFFFFFFFLL || v1158 > 0x100 )
                    break;
                }
                v1578 = (*(__int64 (__fastcall **)(__int64))(v17 + 960))(v1578);
                if ( !v1578 )
                  goto LABEL_1905;
              }
              *(_QWORD *)(v17 + 2440) = (*(__int64 (__fastcall **)(__int64))(v17 + 1160))(v1578);
              (*(void (__fastcall **)(__int64))(v17 + 480))(v1578);
              if ( v1154 == 0xFFFFFFFFLL )
              {
LABEL_1905:
                *(_DWORD *)(v17 + 2088) += v1158 << 12;
                goto LABEL_236;
              }
            }
            else
            {
              LODWORD(i7) = 1;
            }
            if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
            {
              v1159 = *(_QWORD **)(v17 + 2688);
              v1160 = 48;
              v55 = 6LL;
              do
              {
                v1160 -= 8;
                *v1159 = *(_QWORD *)v56;
                v56 += 8;
                ++v1159;
                --v55;
              }
              while ( v55 );
              for ( ; v1160; --v1160 )
              {
                v1161 = *v56++;
                *(_BYTE *)v1159 = v1161;
                v1159 = (_QWORD *)((char *)v1159 + 1);
              }
              v56 = *(char **)(v17 + 2688);
            }
            *((_QWORD *)v56 + 3) = v1154;
            v1162 = v1578;
            if ( *(_DWORD *)(v17 + 2296) )
              goto LABEL_236;
            *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v17 + 2320) = *(int *)v56;
            *(_QWORD *)(v17 + 2328) = v1162;
            *(_DWORD *)(v17 + 2296) = 1;
LABEL_458:
            __b8(v17, 0LL, v55, v54);
            goto LABEL_236;
          case '0':
            if ( !*((_DWORD *)v56 + 4) )
              goto LABEL_236;
            if ( (*(_DWORD *)(v17 + 2452) & 0x4000) != 0 )
            {
              v1101 = *(volatile signed __int32 **)(v17 + 1248);
              while ( 1 )
              {
                _disable();
                if ( !_interlockedbittestandset(v1101, (*(_DWORD *)(v17 + 2448) >> 10) & 0x1F) )
                  break;
                _enable();
                _mm_pause();
              }
            }
            if ( (*((_DWORD *)v56 + 6) & 1) == 0 )
            {
              v1102 = (const char *)*((_QWORD *)v56 + 1);
              v1103 = *((unsigned int *)v56 + 4);
              v1104 = (__int64)v1102;
              *(_DWORD *)(v17 + 2088) += v1103;
              v1105 = v1102;
              v1106 = *(_DWORD *)(v17 + 2068);
              for ( nn = *(_QWORD *)(v17 + 2072); v1105 < &v1102[v1103]; v1105 += 64 )
                _mm_prefetch(v1105, 0);
              v1108 = *(_QWORD *)(v17 + 2072);
              v1109 = (unsigned int)v1103 >> 7;
              if ( (unsigned int)v1103 >> 7 )
              {
                do
                {
                  v1110 = 8LL;
                  do
                  {
                    v1111 = *(_QWORD *)(v1104 + 8) ^ __ROL8__(*(_QWORD *)v1104 ^ v1108, v1106);
                    v1104 += 16LL;
                    v1108 = __ROL8__(v1111, v1106);
                    --v1110;
                  }
                  while ( v1110 );
                  v1112 = (__ROL8__(nn ^ (v1104 - (_QWORD)v1102), 17) ^ nn ^ (unsigned __int64)(v1104 - (_QWORD)v1102))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v1710 = *((_QWORD *)&v1112 + 1);
                  v1106 = (BYTE8(v1112) ^ (unsigned __int8)(v1112 ^ v1106)) & 0x3F;
                  if ( !v1106 )
                    LOBYTE(v1106) = 1;
                  --v1109;
                }
                while ( v1109 );
                v17 = (unsigned __int64)v1561;
              }
              v1113 = v1103 & 0x7F;
              if ( (unsigned int)v1113 >= 8 )
              {
                v1114 = (unsigned __int64)(unsigned int)v1113 >> 3;
                do
                {
                  v1108 = __ROL8__(*(_QWORD *)v1104 ^ v1108, v1106);
                  v1104 += 8LL;
                  v1113 = (unsigned int)(v1113 - 8);
                  --v1114;
                }
                while ( v1114 );
              }
              for ( ; (_DWORD)v1113; v1113 = (unsigned int)(v1113 - 1) )
              {
                v1115 = *(unsigned __int8 *)v1104++;
                v1108 = __ROL8__(v1115 ^ v1108, v1106);
              }
              for ( i1 = v1108; ; LODWORD(v1108) = i1 ^ v1108 )
              {
                i1 >>= 31;
                if ( !i1 )
                  break;
              }
              v1117 = v1108 & 0x7FFFFFFF;
              if ( v1117 != *((_DWORD *)v56 + 5) )
              {
                if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
                  v50 = 1;
                v1118 = *((unsigned int *)v56 + 4);
                v1119 = *((_QWORD *)v56 + 1);
                if ( *((_DWORD *)v56 + 4) )
                {
                  v1113 = 64LL;
                  if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
                  {
                    v1120 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v1121 = v1119 & 0xFFFFFFFFFFFFF000uLL;
                    v1794 = (v1119 + v1118 - 1) | 0xFFF;
                    v1122 = (v1119 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v1123 = v1120;
                      while ( 1 )
                      {
                        v1124 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v17 + 1128))(
                                  v1121,
                                  0LL,
                                  v1113,
                                  v1104);
                        if ( v1124 != -1073741267 )
                          break;
                        if ( v50 )
                          goto LABEL_1841;
                        if ( v1120 > 1u )
                          goto LABEL_1839;
                        v1123 = v1120;
                        __writecr8(v1120);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v1124 < 0 )
                        break;
LABEL_1839:
                      v1121 += 4096LL;
                      v1122 += 4096LL;
                      if ( v1122 == v1794 )
                        goto LABEL_1840;
                    }
LABEL_1841:
                    v56 = v1560;
                    __writecr8(v1123);
                  }
                }
                v1125 = *((unsigned int *)v56 + 5);
LABEL_1843:
                v1126 = *(_DWORD *)(v17 + 2296);
                if ( !v1126 )
                {
                  *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1117 ^ v1125;
                  v1126 = *(_DWORD *)(v17 + 2296);
                }
                v1127 = *((_QWORD *)v56 + 1);
                if ( !v1126 )
                {
                  LODWORD(i7) = 1;
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v56;
                  *(_QWORD *)(v17 + 2328) = v1127;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v1113, v1104);
                  goto LABEL_1889;
                }
              }
LABEL_1888:
              LODWORD(i7) = 1;
LABEL_1889:
              if ( (*(_DWORD *)(v17 + 2452) & 0x4000) != 0 )
              {
                _InterlockedAnd(
                  *(volatile signed __int32 **)(v17 + 1248),
                  ~(1 << ((*(_DWORD *)(v17 + 2448) >> 10) & 0x1F)));
                _enable();
              }
              goto LABEL_235;
            }
            if ( *(_QWORD *)(v17 + 2432) )
            {
              v1128 = *(_DWORD *)(v17 + 2452);
              LOBYTE(v1129) = v1128;
              if ( !*(_DWORD *)(v17 + 2084) )
              {
                v1129 = v1128 ^ ((unsigned __int8)v1128 ^ (unsigned __int8)(8 * v1128)) & 0x20;
                *(_DWORD *)(v17 + 2452) = v1129;
                goto LABEL_1851;
              }
              if ( (((unsigned __int8)v1128 ^ (unsigned __int8)(v1128 >> 3)) & 4) == 0 )
              {
LABEL_1851:
                if ( (v1129 & 4) != 0 )
                {
                  v1130 = *((_QWORD *)v56 + 1) & 0xFFFFFFFFFFFFF000uLL;
                  v1131 = ((*((_DWORD *)v56 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v56 + 4) + 4095) >> 12;
                  if ( v1131 )
                  {
                    LODWORD(i7) = 1;
                    do
                    {
                      --v1131;
                      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v17 + 688))(v1130)
                        && !*(_DWORD *)(v17 + 2296) )
                      {
                        *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v17 + 2320) = *(int *)v56;
                        *(_QWORD *)(v17 + 2328) = v1130;
                        *(_DWORD *)(v17 + 2296) = 1;
                        __b8(v17, 0LL, v1132, v1133);
                      }
                      *(_DWORD *)(v17 + 2088) += 256;
                      v1130 += 4096LL;
                    }
                    while ( v1131 );
                    goto LABEL_1889;
                  }
                }
                else
                {
                  v1134 = (const char *)*((_QWORD *)v56 + 1);
                  v1135 = *((unsigned int *)v56 + 4);
                  v1104 = (__int64)v1134;
                  *(_DWORD *)(v17 + 2088) += v1135;
                  v1136 = v1134;
                  v1137 = *(_DWORD *)(v17 + 2068);
                  for ( i2 = *(_QWORD *)(v17 + 2072); v1136 < &v1134[v1135]; v1136 += 64 )
                    _mm_prefetch(v1136, 0);
                  v1139 = *(_QWORD *)(v17 + 2072);
                  v1140 = (unsigned int)v1135 >> 7;
                  if ( (unsigned int)v1135 >> 7 )
                  {
                    do
                    {
                      v1141 = 8LL;
                      do
                      {
                        v1142 = *(_QWORD *)(v1104 + 8) ^ __ROL8__(*(_QWORD *)v1104 ^ v1139, v1137);
                        v1104 += 16LL;
                        v1139 = __ROL8__(v1142, v1137);
                        --v1141;
                      }
                      while ( v1141 );
                      v1143 = (__ROL8__(i2 ^ (v1104 - (_QWORD)v1134), 17) ^ i2 ^ (unsigned __int64)(v1104 - (_QWORD)v1134))
                            * (unsigned __int128)0x7010008004002001uLL;
                      v1711 = *((_QWORD *)&v1143 + 1);
                      v1137 = (BYTE8(v1143) ^ (unsigned __int8)(v1143 ^ v1137)) & 0x3F;
                      if ( !v1137 )
                        LOBYTE(v1137) = 1;
                      --v1140;
                    }
                    while ( v1140 );
                    v17 = (unsigned __int64)v1561;
                  }
                  v1144 = v1135 & 0x7F;
                  if ( v1144 >= 8 )
                  {
                    v1145 = (unsigned __int64)v1144 >> 3;
                    do
                    {
                      v1139 = __ROL8__(*(_QWORD *)v1104 ^ v1139, v1137);
                      v1104 += 8LL;
                      v1144 -= 8;
                      --v1145;
                    }
                    while ( v1145 );
                  }
                  for ( ; v1144; --v1144 )
                  {
                    v1146 = *(unsigned __int8 *)v1104++;
                    v1139 = __ROL8__(v1146 ^ v1139, v1137);
                  }
                  for ( i3 = v1139; ; LODWORD(v1139) = i3 ^ v1139 )
                  {
                    i3 >>= 31;
                    if ( !i3 )
                      break;
                  }
                  v1125 = *((unsigned int *)v56 + 5);
                  v1117 = v1139 & 0x7FFFFFFF;
                  if ( v1117 != (_DWORD)v1125 )
                  {
                    v1148 = *((unsigned int *)v56 + 4);
                    v1113 = *((_QWORD *)v56 + 1);
                    if ( !*((_DWORD *)v56 + 4) )
                      goto LABEL_1843;
                    v1104 = 64LL;
                    if ( (*(_DWORD *)(v17 + 2452) & 0x40) == 0 )
                      goto LABEL_1843;
                    v1149 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v1150 = v1113 & 0xFFFFFFFFFFFFF000uLL;
                    v1151 = (v1113 + v1148 - 1) | 0xFFF;
                    v1152 = (v1113 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    do
                    {
                      v1123 = v1149;
                      while ( 1 )
                      {
                        v1153 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v17 + 1128))(v1150, 0LL);
                        if ( v1153 != -1073741267 )
                          break;
                        if ( v1149 > 1u )
                          goto LABEL_1885;
                        v1123 = v1149;
                        __writecr8(v1149);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v1153 < 0 )
                        goto LABEL_1841;
LABEL_1885:
                      v1150 += 4096LL;
                      v1152 += 4096LL;
                    }
                    while ( v1152 != v1151 );
LABEL_1840:
                    __writecr8(v1123);
                  }
                }
                goto LABEL_1888;
              }
            }
            *(_DWORD *)(v17 + 2084) = 0;
            goto LABEL_1888;
        }
LABEL_2326:
        v1407 = v77 - 2;
        if ( v1407 )
        {
          v1408 = v1407 - 1;
          if ( v1408 )
          {
            if ( v1408 != 20 )
            {
              if ( *(_DWORD *)(v17 + 2296) )
                goto LABEL_236;
              *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v17 + 2320) = 257LL;
              *(_QWORD *)(v17 + 2328) = 0LL;
LABEL_2325:
              *(_DWORD *)(v17 + 2296) = 1;
              goto LABEL_458;
            }
            (*(void (__fastcall **)(_BYTE *, _QWORD))(v17 + 416))(v1743, *((unsigned int *)v56 + 10));
            (*(void (__fastcall **)(_BYTE *, _BYTE *))(v17 + 464))(v1743, v1744);
            v1409 = *(_QWORD *)(v17 + 2576);
            if ( v1409 )
            {
              v1410 = *(_DWORD *)(v1409 + 800);
              v1409 = *(_QWORD *)(v17 + 2576);
            }
            else
            {
              v1411 = __readmsr(0x832u);
              v1410 = v1411;
            }
            if ( v1409 )
            {
              v1412 = *(_DWORD *)(v1409 + 832);
            }
            else
            {
              v1413 = __readmsr(0x834u);
              v1412 = v1413;
            }
            (*(void (__fastcall **)(_BYTE *))(v17 + 408))(v1744);
            if ( (*(_BYTE *)(v17 + 2171) & 0x10) != 0 )
            {
              _disable();
              v1415 = *(_QWORD *)(v17 + 2272);
              v1416 = 38LL;
              v1417 = 304;
              v1418 = (_QWORD *)v1415;
              LODWORD(i7) = 1;
              do
              {
                *v1418 = 0LL;
                v1417 -= 8;
                ++v1418;
                --v1416;
              }
              while ( v1416 );
              for ( ; v1417; --v1417 )
              {
                *(_BYTE *)v1418 = 0;
                v1418 = (_QWORD *)((char *)v1418 + 1);
              }
              *(_OWORD *)(v1415 + 16) = *(_OWORD *)(v17 + 2120);
              *(_OWORD *)(v1415 + 32) = *(_OWORD *)(v17 + 2136);
              *(_OWORD *)(v1415 + 288) = *(_OWORD *)(v17 + 2152);
              v1648 = 303;
              v1649 = v1415;
              *(_WORD *)(v1415 + 16) = v17 + 2168;
              v1720 = v17 + 2168;
              *(_WORD *)(v1415 + 22) = (unsigned int)(v17 + 2168) >> 16;
              *(_DWORD *)(v1415 + 24) = (v17 + 2168) >> 32;
              __sidt(v1675);
              __lidt(&v1648);
              if ( (*(_DWORD *)(v17 + 2452) & 0x20000) == 0 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                **(_QWORD **)(v17 + 1216) = v17 - 0x5C5FC0A76E374B18LL;
                **(_QWORD **)(v17 + 1224) = CurrentPrcb;
                **(_QWORD **)(v17 + 1232) = 0LL;
                **(_QWORD **)(v17 + 1240) = 277LL;
              }
              KiErrata361Present();
              if ( (*(_DWORD *)(v17 + 2452) & 0x20000) == 0 )
              {
                **(_QWORD **)(v17 + 1216) = 0xA3A03F5891C8B4E8uLL;
                **(_QWORD **)(v17 + 1224) = 0LL;
                **(_QWORD **)(v17 + 1232) = 0LL;
                **(_QWORD **)(v17 + 1240) = 0LL;
              }
              __lidt(v1675);
              _enable();
            }
            else
            {
              LODWORD(i7) = 1;
            }
            v1420 = *((unsigned int *)v56 + 6);
            if ( (v1410 & *((_DWORD *)v56 + 7)) != (_DWORD)v1420
              || (v1410 & 0x10000) == 0 && (_BYTE)v1410 != 0xD1 && (unsigned __int8)(v1410 + 3) > 1u )
            {
              v1421 = v1420 | ((unsigned __int64)*((unsigned int *)v56 + 10) << 48) | 0x32000000000LL;
              if ( !*(_DWORD *)(v17 + 2296) )
              {
                *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1420 ^ v1410;
                if ( !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v56;
                  *(_QWORD *)(v17 + 2328) = v1421;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v1420, v1414);
                }
              }
            }
            v1422 = *((unsigned int *)v56 + 8);
            if ( (v1412 & *((_DWORD *)v56 + 9)) != (_DWORD)v1422
              || (v1412 & 0x10000) == 0 && (_BYTE)v1412 != 0xD1 && (unsigned __int8)(v1412 + 3) > 1u )
            {
              v1423 = v1422 | ((unsigned __int64)*((unsigned int *)v56 + 10) << 48) | 0x34000000000LL;
              if ( !*(_DWORD *)(v17 + 2296) )
              {
                *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1422 ^ v1412;
                if ( !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v56;
                  *(_QWORD *)(v17 + 2328) = v1423;
                  *(_DWORD *)(v17 + 2296) = 1;
                  goto LABEL_2410;
                }
              }
            }
            goto LABEL_2412;
          }
          (*(void (__fastcall **)(_BYTE *, _QWORD))(v17 + 416))(v1745, *((unsigned int *)v56 + 10));
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(v17 + 464))(v1745, v1746);
          KiGetGdtIdt(&v1633, v1762);
          v1424 = v1634;
          v1425 = *((unsigned int *)v56 + 4);
          if ( (*(_BYTE *)(v17 + 2171) & 2) != 0 )
          {
            v1426 = *(_QWORD *)(v17 + 2272);
            v1427 = 38LL;
            v1428 = 304;
            v1429 = (_QWORD *)v1426;
            do
            {
              *v1429 = 0LL;
              v1428 -= 8;
              ++v1429;
              --v1427;
            }
            while ( v1427 );
            if ( v1428 )
            {
              v1427 = 0xFFFFFFFFLL;
              do
              {
                *(_BYTE *)v1429 = 0;
                v1429 = (_QWORD *)((char *)v1429 + 1);
                --v1428;
              }
              while ( v1428 );
            }
            *(_OWORD *)(v1426 + 16) = *(_OWORD *)(v17 + 2120);
            *(_OWORD *)(v1426 + 32) = *(_OWORD *)(v17 + 2136);
            *(_OWORD *)(v1426 + 288) = *(_OWORD *)(v17 + 2152);
            v1650 = 303;
            v1651 = v1426;
            *(_WORD *)(v1426 + 16) = v17 + 2168;
            v1741 = v17 + 2168;
            *(_WORD *)(v1426 + 22) = (unsigned int)(v17 + 2168) >> 16;
            *(_DWORD *)(v1426 + 24) = (v17 + 2168) >> 32;
            _disable();
            __sidt(v1676);
            __lidt(&v1650);
            __writedr(7u, 0LL);
            *(_WORD *)(v1426 + 16) = v17 + 2174;
            v1430 = (v17 + 2174) >> 16;
            *(_WORD *)(v1426 + 22) = v1430;
            *(_DWORD *)(v1426 + 24) = (v17 + 2174) >> 32;
            if ( (*(_BYTE *)(v17 + 2171) & 0x20) != 0 )
            {
              *(_WORD *)(v17 + 2218) = KiGetSs(v1430, v1426, v1427, 1LL);
              __writedr(0, v17 + 2218);
              __writedr(7u, 0x70001uLL);
              *(_QWORD *)(v17 + 2280) = KiErrataSkx55Present(v17 + 2218);
              __writedr(7u, 0LL);
              __writedr(0, 0LL);
            }
            else
            {
              *(_QWORD *)(v17 + 2280) = KiErrata704Present(v1430, v1426, v1427, 1LL);
            }
            *(_DWORD *)(v17 + 2288) = KeGetPcr()->Prcb.Number;
            __lidt(v1676);
            _enable();
          }
          Ldtr = KiGetLdtr();
          Tr = KiGetTr();
          *(_DWORD *)(v17 + 2088) += v1425;
          v1433 = (unsigned __int64)v1424 + v1425;
          v1434 = *(unsigned int *)(v17 + 2068);
          v1435 = Tr;
          v1436 = *(_QWORD *)(v17 + 2072);
          v1437 = v1424;
          v1797 = Tr;
          v1438 = (const char *)v1424;
          if ( v1424 < (_QWORD *)((char *)v1424 + v1425) )
          {
            do
            {
              _mm_prefetch(v1438, 0);
              v1438 += 64;
            }
            while ( (unsigned __int64)v1438 < v1433 );
          }
          v1439 = *(_QWORD *)(v17 + 2072);
          v1440 = (unsigned int)v1425 >> 7;
          if ( (unsigned int)v1425 >> 7 )
          {
            do
            {
              v1441 = 8LL;
              do
              {
                v1442 = v1439 ^ *v1437;
                v1443 = v1437[1];
                v1437 += 2;
                v1439 = __ROL8__(__ROL8__(v1442, v1434) ^ v1443, v1434);
                --v1441;
              }
              while ( v1441 );
              v1444 = __ROL8__(v1436 ^ ((char *)v1437 - (char *)v1424), 17) ^ v1436 ^ ((char *)v1437 - (char *)v1424);
              v1433 = (v1444 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1722 = v1433;
              v1434 = ((unsigned __int8)v1433 ^ (unsigned __int8)(v1444 ^ v1434)) & 0x3F;
              if ( !(_DWORD)v1434 )
                v1434 = 1LL;
              --v1440;
            }
            while ( v1440 );
            v17 = (unsigned __int64)v1561;
            v1435 = v1797;
          }
          v1445 = v1425 & 0x7F;
          if ( v1445 >= 8 )
          {
            v1433 = (unsigned __int64)v1445 >> 3;
            do
            {
              v1439 = __ROL8__(*v1437++ ^ v1439, v1434);
              v1445 -= 8;
              --v1433;
            }
            while ( v1433 );
          }
          LODWORD(i7) = 0;
          if ( v1445 )
          {
            do
            {
              v1446 = *(unsigned __int8 *)v1437;
              v1437 = (_QWORD *)((char *)v1437 + 1);
              v1439 = __ROL8__(v1446 ^ v1439, v1434);
              --v1445;
            }
            while ( v1445 );
            v17 = (unsigned __int64)v1561;
          }
          for ( i4 = v1439; ; LODWORD(v1439) = i4 ^ v1439 )
          {
            i4 >>= 31;
            if ( !i4 )
              break;
          }
          v1448 = v1439 & 0x7FFFFFFF;
          (*(void (__fastcall **)(_BYTE *, unsigned __int64, _QWORD *, __int64))(v17 + 408))(v1746, v1433, v1437, v1434);
          if ( v1448 == *((_DWORD *)v56 + 5) && v1633 == *((_WORD *)v56 + 22) && !Ldtr && v1435 == 64 )
          {
            v50 = 0;
            goto LABEL_2412;
          }
          v1414 = 1LL;
          if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
          {
            v1449 = *(_QWORD **)(v17 + 2688);
            v1450 = 48;
            v1422 = 6LL;
            do
            {
              v1450 -= 8;
              *v1449 = *(_QWORD *)v56;
              v56 += 8;
              ++v1449;
              --v1422;
            }
            while ( v1422 );
            if ( v1450 )
            {
              do
              {
                v1451 = *v56++;
                *(_BYTE *)v1449 = v1451;
                v1449 = (_QWORD *)((char *)v1449 + 1);
                --v1450;
              }
              while ( v1450 );
              v17 = (unsigned __int64)v1561;
            }
            v56 = *(char **)(v17 + 2688);
          }
          *((_QWORD *)v56 + 3) = v1634;
          *((_QWORD *)v56 + 4) = v1448;
          if ( Ldtr )
          {
            v1452 = Ldtr;
            goto LABEL_2405;
          }
          if ( v1435 != 64 )
          {
            v1452 = v1435;
LABEL_2405:
            *((_QWORD *)v56 + 3) = v1452;
          }
          v1453 = *(_DWORD *)(v17 + 2296);
          v50 = 0;
          if ( !v1453 )
          {
            *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1448 ^ (unsigned __int64)*((unsigned int *)v56 + 5);
            v1453 = *(_DWORD *)(v17 + 2296);
          }
          v1454 = *((_QWORD *)v56 + 1);
          if ( !v1453 )
          {
            *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v17 + 2320) = *(int *)v56;
            *(_QWORD *)(v17 + 2328) = v1454;
            *(_DWORD *)(v17 + 2296) = 1;
LABEL_2410:
            __b8(v17, 0LL, v1422, v1414);
          }
LABEL_2412:
          v179 = 0x8000;
          goto LABEL_2413;
        }
        v1455 = *((unsigned int *)v56 + 10);
        v1456 = *(void (__fastcall **)(_QWORD, _QWORD))(v17 + 416);
        LODWORD(v1572) = 0;
        v1456(v1747, v1455);
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v17 + 464))(v1747, v1748);
        KiGetGdtIdt(v1761, &v1652);
        v1457 = 0;
        v1576 = v1653;
        v1458 = v1653 + 4;
        v1562 = v1653 + 4;
        v1563 = 0;
        while ( 2 )
        {
          v1459 = 0LL;
          v1601 = *(_QWORD *)(v17 + 2248);
          v1460 = 0LL;
          v1461 = *(_QWORD *)(v17 + 2256);
          v1462 = *(unsigned int *)(v17 + 2224);
          v1565 = 0LL;
          v1463 = *(unsigned int *)(v17 + 2220);
          v1564 = 0LL;
          v1464 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          v1465 = *(_WORD *)v1458;
          LOWORD(v1595) = *(_WORD *)(v1458 - 4);
          WORD1(v1595) = *(_WORD *)(v1458 + 2);
          v1466 = *(_DWORD *)(v1458 + 4);
          v1467 = *(_QWORD *)(v17 + 1560);
          HIDWORD(v1595) = v1466;
          v1468 = v1595;
          v1798 = v1465;
          v1469 = (_SLIST_ENTRY *)(v1467 + 8LL * v1457);
          if ( v1595 == v1469 )
          {
            if ( (v1465 & 0x6000) != 0 )
            {
              __writecr8(v1464);
              goto LABEL_2422;
            }
            v1460 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _SLIST_ENTRY *, _QWORD))(v17 + 1136))(
                                 v1457,
                                 v1469,
                                 0LL);
            if ( v1460 )
            {
              v1470 = *(_QWORD *)(v1463 + v1460);
              v1565 = v1470;
              if ( v1563 < 0x30 )
              {
                __writecr8(v1464);
LABEL_2421:
                v1459 = v1565;
LABEL_2422:
                v1471 = *(_QWORD *)(v17 + 1424);
                *(_QWORD *)v1471 = v1468;
                *(_DWORD *)(v1471 + 16) = 128;
                if ( v1459 )
                {
                  v1472 = *(_QWORD *)(v17 + 1424);
                  *(_QWORD *)(v1472 + 8) = v1459;
                  *(_DWORD *)(v1472 + 20) = 128;
                }
                LODWORD(v1572) = 1;
                goto LABEL_2441;
              }
              v1473 = *(_QWORD *)(v1462 + v1460);
LABEL_2429:
              __writecr8(v1464);
              if ( !v1460 )
              {
                if ( (unsigned __int64)v1468 < v1601 )
                  goto LABEL_2421;
                if ( (unsigned __int64)v1468 > v1461 )
                  goto LABEL_2421;
                v1474 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v17 + 528))(
                          *(_QWORD *)(v17 + 2264),
                          v1601,
                          (unsigned int)((_DWORD)v1595 - v1601));
                if ( !v1474 || (*(_DWORD *)(v1474 + 36) & 0x2000000) != 0 )
                  goto LABEL_2421;
              }
              if ( *(_WORD *)(v1562 - 2) != 16 || (*(_WORD *)v1562 & 0x1F00) != 0xE00 || *(__int16 *)v1562 >= 0 )
                goto LABEL_2421;
              v1475 = (unsigned int *)(*(__int64 (__fastcall **)(_SLIST_ENTRY *, unsigned __int64 *, _QWORD))(v17 + 608))(
                                        v1468,
                                        &v1601,
                                        0LL);
              if ( v1475 && (_SLIST_ENTRY *)(v1601 + *v1475) == v1468 && v1601 == *(_QWORD *)(v17 + 2248) )
              {
                if ( !v1460 )
                  goto LABEL_2441;
              }
              else if ( !v1460 )
              {
                goto LABEL_2421;
              }
              if ( (v1798 & 0x6000) != 0 )
                goto LABEL_2421;
              if ( v1460 != -1 )
              {
                v1495 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(v17 + 608))(
                                          v1470,
                                          &v1601,
                                          0LL);
                if ( !v1495 )
                  goto LABEL_2421;
                if ( v1601 + *v1495 != v1470 )
                  goto LABEL_2421;
                if ( v1601 != *(_QWORD *)(v17 + 2248) )
                  goto LABEL_2421;
                v1496 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v17 + 528))(
                          *(_QWORD *)(v17 + 2264),
                          v1601,
                          (unsigned int)(v1470 - v1601));
                if ( !v1496
                  || (*(_DWORD *)(v1496 + 36) & 0x2000000) != 0
                  || v1563 == 254 && v1473 != *(_QWORD *)(v17 + 2232) )
                {
                  goto LABEL_2421;
                }
              }
LABEL_2441:
              v1457 = v1563 + 1;
              v1458 = v1562 + 16;
              v1563 = v1457;
              v1562 += 16LL;
              if ( v1457 > 0xFF )
              {
                if ( (*(_BYTE *)(v17 + 2171) & 1) != 0 )
                {
                  _disable();
                  v1476 = 3221225602LL;
                  v1477 = __readmsr(0xC0000082);
                  v1478 = (v17 + 2170) >> 32;
                  __writemsr(0xC0000082, v17 + 2170);
                  if ( (*(_DWORD *)(v17 + 2452) & 0x20000) == 0 )
                  {
                    v1479 = KeGetCurrentPrcb();
                    v1478 = v17 - 0x5C5FC0A76E374B18LL;
                    **(_QWORD **)(v17 + 1216) = v17 - 0x5C5FC0A76E374B18LL;
                    **(_QWORD **)(v17 + 1224) = v1479;
                    **(_QWORD **)(v17 + 1232) = 3221225602LL;
                    v1476 = *(_QWORD *)(v17 + 1240);
                    *(_QWORD *)v1476 = 274LL;
                  }
                  ((void (__fastcall *)(__int64, unsigned __int64))(v17 + 2172))(v1476, v1478);
                  if ( (*(_DWORD *)(v17 + 2452) & 0x20000) == 0 )
                  {
                    **(_QWORD **)(v17 + 1216) = 0xA3A03F5891C8B4E8uLL;
                    **(_QWORD **)(v17 + 1224) = 0LL;
                    **(_QWORD **)(v17 + 1232) = 0LL;
                    **(_QWORD **)(v17 + 1240) = 0LL;
                  }
                  __writemsr(0xC0000082, v1477);
                  _enable();
                }
                i7 = v1576;
                *(_DWORD *)(v17 + 2088) += 848;
                v1480 = (_QWORD *)i7;
                v1481 = *(_DWORD *)(v17 + 2088);
                v1482 = (const char *)i7;
                v1483 = *(_DWORD *)(v17 + 2068);
                v1484 = *(_QWORD *)(v17 + 2072);
                if ( i7 < i7 + 848 )
                {
                  do
                  {
                    _mm_prefetch(v1482, 0);
                    v1482 += 64;
                  }
                  while ( (unsigned __int64)v1482 < i7 + 848 );
                }
                v1485 = *(_QWORD *)(v17 + 2072);
                v1486 = 6;
                do
                {
                  v1487 = 8LL;
                  do
                  {
                    v1488 = v1480[1] ^ __ROL8__(*v1480 ^ v1485, v1483);
                    v1480 += 2;
                    v1485 = __ROL8__(v1488, v1483);
                    --v1487;
                  }
                  while ( v1487 );
                  v1489 = (__ROL8__(v1484 ^ ((unsigned __int64)v1480 - i7), 17) ^ v1484 ^ ((unsigned __int64)v1480 - i7))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v1723 = *((_QWORD *)&v1489 + 1);
                  v1483 = (BYTE8(v1489) ^ (unsigned __int8)(v1489 ^ v1483)) & 0x3F;
                  if ( !v1483 )
                    LOBYTE(v1483) = 1;
                  --v1486;
                }
                while ( v1486 );
                v17 = (unsigned __int64)v1561;
                v1490 = 80;
                v1491 = v1572;
                v1492 = 10LL;
                do
                {
                  v1485 = __ROL8__(*v1480++ ^ v1485, v1483);
                  v1490 -= 8;
                  --v1492;
                }
                while ( v1492 );
                for ( ; v1490; --v1490 )
                {
                  v1493 = *(unsigned __int8 *)v1480;
                  v1480 = (_QWORD *)((char *)v1480 + 1);
                  v1485 = __ROL8__(v1493 ^ v1485, v1483);
                }
                for ( i5 = v1485; ; LODWORD(v1485) = i5 ^ v1485 )
                {
                  i5 >>= 31;
                  if ( !i5 )
                    break;
                }
                v1497 = v1485 & 0x7FFFFFFF;
                *((_DWORD *)&v1561[130].Next + 2) = v1481 + 16;
                v1498 = (_QWORD *)(i7 + 3600);
                v1499 = *(_DWORD *)(v17 + 2068);
                v1500 = *(_QWORD *)(v17 + 2072);
                v1501 = (const char *)(i7 + 3600);
                if ( i7 + 3600 < i7 + 3616 )
                {
                  do
                  {
                    _mm_prefetch(v1501, 0);
                    v1501 += 64;
                  }
                  while ( (unsigned __int64)v1501 < i7 + 3616 );
                }
                v1502 = 16;
                v1503 = 2LL;
                do
                {
                  v1500 = __ROL8__(*v1498++ ^ v1500, v1499);
                  v1502 -= 8;
                  --v1503;
                }
                while ( v1503 );
                for ( ; v1502; --v1502 )
                {
                  v1504 = *(unsigned __int8 *)v1498;
                  v1498 = (_QWORD *)((char *)v1498 + 1);
                  v1500 = __ROL8__(v1504 ^ v1500, v1499);
                }
                for ( i6 = v1500; ; LODWORD(v1500) = i6 ^ v1500 )
                {
                  i6 >>= 31;
                  if ( !i6 )
                    break;
                }
                v1506 = v1500 & 0x7FFFFFFF;
                (*(void (__fastcall **)(_BYTE *, _QWORD *))(v17 + 408))(v1748, v1498);
                v1508 = (int *)v1560;
                v1509 = *((unsigned int *)v1560 + 5);
                if ( v1497 == (_DWORD)v1509
                  && v1506 == *((_QWORD *)v1560 + 3)
                  && v1652 == *((_WORD *)v1560 + 22)
                  && !v1491 )
                {
                  v50 = 0;
                }
                else
                {
                  if ( v1491 )
                  {
                    v50 = 0;
                  }
                  else
                  {
                    v50 = 0;
                    if ( v1506 == *((_QWORD *)v1560 + 3) )
                    {
                      if ( !*(_DWORD *)(v17 + 2296) )
                      {
                        v1510 = v1509 ^ v1497;
                        goto LABEL_2491;
                      }
                    }
                    else if ( !*(_DWORD *)(v17 + 2296) )
                    {
                      v1510 = v1506 ^ (unsigned __int64)*((unsigned int *)v1560 + 6);
LABEL_2491:
                      *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1510;
                    }
                  }
                  v1511 = *((_QWORD *)v1508 + 1);
                  if ( !*(_DWORD *)(v17 + 2296) )
                  {
                    *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v17 + 2312) = (char *)v1508 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v17 + 2320) = *v1508;
                    *(_QWORD *)(v17 + 2328) = v1511;
                    *(_DWORD *)(v17 + 2296) = 1;
                    __b8(v17, 0LL, v1508, v1507);
                  }
                }
                *(_DWORD *)(v17 + 2088) += 0x10000;
                goto LABEL_236;
              }
              continue;
            }
            v1460 = -1LL;
            v1473 = 0LL;
          }
          else
          {
            v1473 = v1564;
          }
          break;
        }
        v1470 = v1565;
        goto LABEL_2429;
      }
      v1169 = *((_DWORD *)v56 + 8);
      v1566 = v17;
      if ( (v1169 & 2) == 0 )
        goto LABEL_1990;
      if ( !*(_QWORD *)(v17 + 2432) )
        goto LABEL_1735;
      v1170 = *(_DWORD *)(v17 + 2452);
      if ( (v1170 & 4) != 0 )
        goto LABEL_1735;
      if ( (v1169 & 2) != 0 )
      {
        v1171 = *(_DWORD *)(v17 + 2452);
        if ( *(_DWORD *)(v17 + 2084) )
        {
          if ( (((unsigned __int8)v1170 ^ (unsigned __int8)(v1170 >> 3)) & 4) != 0 )
            goto LABEL_1735;
        }
        else
        {
          v1171 = v1170 ^ ((unsigned __int8)v1170 ^ (unsigned __int8)(8 * v1170)) & 0x20;
          *(_DWORD *)(v17 + 2452) = v1171;
        }
        if ( !*(_QWORD *)(v17 + 2432) )
          goto LABEL_1989;
        LOBYTE(v1172) = v1171;
        if ( !*(_DWORD *)(v17 + 2084) )
        {
          v1172 = v1171 ^ ((unsigned __int8)v1171 ^ (unsigned __int8)(8 * v1171)) & 0x20;
          *(_DWORD *)(v17 + 2452) = v1172;
          goto LABEL_1938;
        }
        if ( (((unsigned __int8)v1171 ^ (unsigned __int8)(v1171 >> 3)) & 4) != 0 )
        {
LABEL_1989:
          *(_DWORD *)(v17 + 2084) = 0;
          goto LABEL_1976;
        }
LABEL_1938:
        if ( (v1172 & 4) != 0 )
        {
          v1173 = *((_QWORD *)v56 + 1) & 0xFFFFFFFFFFFFF000uLL;
          v1174 = (*((unsigned int *)v56 + 4) + (unsigned __int64)(*((_DWORD *)v56 + 2) & 0xFFF) + 4095) >> 12;
          if ( v1174 )
          {
            LODWORD(i7) = 1;
            do
            {
              --v1174;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v17 + 688))(v1173) && !*(_DWORD *)(v17 + 2296) )
              {
                *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v17 + 2320) = *(int *)v56;
                *(_QWORD *)(v17 + 2328) = v1173;
                *(_DWORD *)(v17 + 2296) = 1;
                __b8(v17, 0LL, v1175, v1176);
              }
              *(_DWORD *)(v17 + 2088) += 256;
              v1173 += 4096LL;
            }
            while ( v1174 );
          }
          goto LABEL_1976;
        }
        v1177 = (const char *)*((_QWORD *)v56 + 1);
        v1178 = *((unsigned int *)v56 + 4);
        v1179 = (__int64)v1177;
        *(_DWORD *)(v17 + 2088) += v1178;
        v1180 = v1177;
        v1181 = *(_DWORD *)(v17 + 2068);
        for ( i7 = *(_QWORD *)(v17 + 2072); v1180 < &v1177[v1178]; v1180 += 64 )
          _mm_prefetch(v1180, 0);
        v1182 = *(_QWORD *)(v17 + 2072);
        v1183 = (unsigned int)v1178 >> 7;
        if ( (unsigned int)v1178 >> 7 )
        {
          do
          {
            v1184 = 8LL;
            do
            {
              v1185 = v1182 ^ *(_QWORD *)v1179;
              v1186 = *(_QWORD *)(v1179 + 8);
              v1179 += 16LL;
              v1182 = __ROL8__(__ROL8__(v1185, v1181) ^ v1186, v1181);
              --v1184;
            }
            while ( v1184 );
            v1187 = __ROL8__(i7 ^ (v1179 - (_QWORD)v1177), 17) ^ i7 ^ (v1179 - (_QWORD)v1177);
            v1712 = (v1187 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v1181 = ((unsigned __int8)(v1712 ^ v1187) ^ (unsigned __int8)v1181) & 0x3F;
            if ( !v1181 )
              LOBYTE(v1181) = 1;
            --v1183;
          }
          while ( v1183 );
          v17 = (unsigned __int64)v1561;
        }
        v1188 = v1178 & 0x7F;
        if ( v1188 >= 8 )
        {
          v1189 = (unsigned __int64)v1188 >> 3;
          do
          {
            v1182 = __ROL8__(*(_QWORD *)v1179 ^ v1182, v1181);
            v1179 += 8LL;
            v1188 -= 8;
            --v1189;
          }
          while ( v1189 );
        }
        if ( v1188 )
        {
          do
          {
            v1190 = *(unsigned __int8 *)v1179++;
            v1182 = __ROL8__(v1190 ^ v1182, v1181);
            --v1188;
          }
          while ( v1188 );
          v17 = (unsigned __int64)v1561;
        }
        for ( i8 = v1182; ; LODWORD(v1182) = i8 ^ v1182 )
        {
          i8 >>= 31;
          if ( !i8 )
            break;
        }
        v1192 = *((_DWORD *)v56 + 5);
        v1193 = v1182 & 0x7FFFFFFF;
        if ( v1193 != v1192 )
        {
          v1194 = *((unsigned int *)v56 + 4);
          v1195 = *((_QWORD *)v56 + 1);
          if ( *((_DWORD *)v56 + 4) )
          {
            v1179 = 64LL;
            if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
            {
              v1196 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1197 = v1195 & 0xFFFFFFFFFFFFF000uLL;
              v1198 = (v1195 + v1194 - 1) | 0xFFF;
              v1199 = (v1195 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                i7 = v1196;
                while ( 1 )
                {
                  v1200 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v17 + 1128))(v1197, 0LL);
                  if ( v1200 != -1073741267 )
                    break;
                  if ( v1196 > 1u )
                    goto LABEL_1973;
                  i7 = v1196;
                  __writecr8(v1196);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1200 < 0 )
                  break;
LABEL_1973:
                v1197 += 4096LL;
                v1199 += 4096LL;
                if ( v1199 == v1198 )
                  goto LABEL_1974;
              }
              __writecr8(i7);
              v56 = v1560;
              v50 = 0;
              v1192 = *((_DWORD *)v1560 + 5);
            }
          }
          v1204 = *(_DWORD *)(v17 + 2296);
          if ( !v1204 )
          {
            v1205 = v1192 ^ (unsigned __int64)v1193;
            goto LABEL_1986;
          }
          goto LABEL_1987;
        }
      }
      else
      {
LABEL_1990:
        v1207 = (const char *)*((_QWORD *)v56 + 1);
        v1208 = *((unsigned int *)v56 + 4);
        v1179 = (__int64)v1207;
        *(_DWORD *)(v17 + 2088) += v1208;
        v1209 = v1207;
        v1210 = *(_DWORD *)(v17 + 2068);
        for ( i7 = *(_QWORD *)(v17 + 2072); v1209 < &v1207[v1208]; v1209 += 64 )
          _mm_prefetch(v1209, 0);
        v1211 = *(_QWORD *)(v17 + 2072);
        v1212 = (unsigned int)v1208 >> 7;
        if ( (unsigned int)v1208 >> 7 )
        {
          do
          {
            v1213 = 8LL;
            do
            {
              v1214 = *(_QWORD *)(v1179 + 8) ^ __ROL8__(*(_QWORD *)v1179 ^ v1211, v1210);
              v1179 += 16LL;
              v1211 = __ROL8__(v1214, v1210);
              --v1213;
            }
            while ( v1213 );
            v1215 = __ROL8__(i7 ^ (v1179 - (_QWORD)v1207), 17) ^ i7 ^ (v1179 - (_QWORD)v1207);
            v1713 = (v1215 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v1210 = ((unsigned __int8)(v1713 ^ v1215) ^ (unsigned __int8)v1210) & 0x3F;
            if ( !v1210 )
              LOBYTE(v1210) = 1;
            --v1212;
          }
          while ( v1212 );
          v17 = (unsigned __int64)v1561;
        }
        v1195 = v1208 & 0x7F;
        if ( (unsigned int)v1195 >= 8 )
        {
          v1216 = (unsigned __int64)(unsigned int)v1195 >> 3;
          do
          {
            v1211 = __ROL8__(*(_QWORD *)v1179 ^ v1211, v1210);
            v1179 += 8LL;
            v1195 = (unsigned int)(v1195 - 8);
            --v1216;
          }
          while ( v1216 );
        }
        for ( ; (_DWORD)v1195; v1195 = (unsigned int)(v1195 - 1) )
        {
          v1217 = *(unsigned __int8 *)v1179++;
          v1211 = __ROL8__(v1217 ^ v1211, v1210);
        }
        for ( i9 = v1211; ; LODWORD(v1211) = i9 ^ v1211 )
        {
          i9 >>= 31;
          if ( !i9 )
            break;
        }
        v1219 = v1211 & 0x7FFFFFFF;
        if ( v1219 == *((_DWORD *)v56 + 5) )
        {
LABEL_1975:
          v50 = 0;
          goto LABEL_1976;
        }
        if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
          v50 = 1;
        v1220 = *((unsigned int *)v56 + 4);
        v1221 = *((_QWORD *)v56 + 1);
        if ( *((_DWORD *)v56 + 4) )
        {
          v1195 = 64LL;
          if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
          {
            v1222 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1223 = v1221 & 0xFFFFFFFFFFFFF000uLL;
            v1796 = (v1221 + v1220 - 1) | 0xFFF;
            v1224 = (v1221 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              i7 = v1222;
              while ( 1 )
              {
                v1225 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v17 + 1128))(
                          v1223,
                          0LL,
                          v1195,
                          v1179);
                if ( v1225 != -1073741267 )
                  break;
                if ( v50 )
                  goto LABEL_2022;
                if ( v1222 > 1u )
                  goto LABEL_2020;
                i7 = v1222;
                __writecr8(v1222);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v1225 < 0 )
                break;
LABEL_2020:
              v1223 += 4096LL;
              v1224 += 4096LL;
              if ( v1224 == v1796 )
              {
LABEL_1974:
                __writecr8(i7);
                v56 = v1560;
                goto LABEL_1975;
              }
            }
LABEL_2022:
            __writecr8(i7);
            v56 = v1560;
          }
        }
        v1204 = *(_DWORD *)(v17 + 2296);
        v50 = 0;
        if ( !v1204 )
        {
          v1205 = *((unsigned int *)v56 + 5) ^ (unsigned __int64)v1219;
LABEL_1986:
          *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1205;
          v1204 = *(_DWORD *)(v17 + 2296);
        }
LABEL_1987:
        v1206 = *((_QWORD *)v56 + 1);
        if ( !v1204 )
        {
          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v17 + 2320) = *(int *)v56;
          *(_QWORD *)(v17 + 2328) = v1206;
          *(_DWORD *)(v17 + 2296) = 1;
          __b8(v17, 0LL, v1195, v1179);
        }
      }
LABEL_1976:
      if ( (*((_DWORD *)v56 + 8) & 1) == 0 )
        goto LABEL_236;
      v1201 = *((_QWORD *)v56 + 3);
      v1202 = (*(__int64 (__fastcall **)(__int64))(v17 + 504))(v1201);
      i7 = v1202 + *(unsigned __int16 *)(v1202 + 20) + 24LL;
      v1562 = i7 + 40LL * *(unsigned __int16 *)(v1202 + 6);
      if ( i7 == v1562 )
        goto LABEL_236;
      v1203 = *(_DWORD *)(v17 + 2084);
      if ( !v1203 )
      {
        *(_DWORD *)(v17 + 2084) = 4096;
        v1203 = 4096;
      }
      v1795 = v1201 == *(_QWORD *)(v17 + 1512) || v1201 == *(_QWORD *)(v17 + 1520);
      while ( 2 )
      {
        v1226 = *(_DWORD *)(i7 + 16);
        v1227 = *(_DWORD *)(i7 + 12);
        if ( v1226 <= *(_DWORD *)(i7 + 8) )
          v1226 = *(_DWORD *)(i7 + 8);
        v1228 = (v1226 + v1227 + 4095) & 0xFFFFF000;
        if ( v1203 >= v1228 )
          goto LABEL_2045;
        if ( (*(_DWORD *)(i7 + 36) & 0x2000000) != 0 )
          goto LABEL_2044;
        v1229 = *(_DWORD *)i7;
        if ( *(_DWORD *)i7 == 1414090313 && *(_DWORD *)(i7 + 4) == 1195525195 )
          goto LABEL_2044;
        if ( v1229 == 1162297680 )
        {
          v1230 = *(_WORD *)(i7 + 4);
          if ( v1230 == 30839 || v1230 == 29303 || v1230 == 30583 )
            goto LABEL_2044;
        }
        if ( v1229 == 1095914053 && *(_WORD *)(i7 + 4) == 16724 )
          goto LABEL_2044;
        if ( v1566 )
        {
          v1231 = *(char **)(v1566 + 2352);
          *((_QWORD *)&v1644 + 1) = *(_QWORD *)(v1566 + 2360);
          v1645 = *(_OWORD *)(v1566 + 2368);
          *(_QWORD *)&v1644 = v1231;
        }
        else
        {
          v1644 = *(_OWORD *)VfExcludeSections;
          v1231 = VfExcludeSections[0];
          v1645 = *(_OWORD *)off_140C0EFE0;
        }
        v1232 = 7;
        v1233 = (unsigned __int8 *)i7;
        while ( 1 )
        {
          v1234 = *v1233++;
          v1235 = (unsigned __int8)*v1231++;
          if ( v1234 != v1235 )
            break;
          if ( !--v1232 )
            goto LABEL_2044;
        }
        v1238 = (__int64 *)*((_QWORD *)&v1644 + 1);
        v1239 = 8;
        v1240 = (__int64 *)i7;
        do
        {
          v1241 = *v1240++;
          v1242 = *v1238++;
          if ( v1241 != v1242 )
            goto LABEL_2055;
          v1239 -= 8;
        }
        while ( v1239 >= 8 );
        if ( !v1239 )
          goto LABEL_2044;
        while ( 1 )
        {
          v1243 = *(unsigned __int8 *)v1240;
          v1240 = (__int64 *)((char *)v1240 + 1);
          v1244 = *(unsigned __int8 *)v1238;
          v1238 = (__int64 *)((char *)v1238 + 1);
          if ( v1243 != v1244 )
            break;
          if ( !--v1239 )
            goto LABEL_2044;
        }
LABEL_2055:
        v1245 = (unsigned __int8 *)v1645;
        v1246 = 4;
        v1247 = (unsigned __int8 *)i7;
        while ( 1 )
        {
          v1248 = *v1247++;
          v1249 = *v1245++;
          if ( v1248 != v1249 )
            break;
          if ( !--v1246 )
            goto LABEL_2044;
        }
        v1250 = (unsigned __int8 *)*((_QWORD *)&v1645 + 1);
        v1251 = 6;
        v1252 = (unsigned __int8 *)i7;
        while ( 1 )
        {
          v1253 = *v1252++;
          v1254 = *v1250++;
          if ( v1253 != v1254 )
            break;
          if ( !--v1251 )
            goto LABEL_2044;
        }
        v1255 = *(_DWORD *)(i7 + 36);
        if ( v1255 < 0 || (v1255 & 0x20000000) == 0 )
        {
LABEL_2044:
          v1203 = v1228;
LABEL_2045:
          v1236 = v1566;
          goto LABEL_2046;
        }
        v1256 = 1;
        if ( v1795 && *(_DWORD *)i7 != 778396769 )
          v1256 = *(_DWORD *)i7 == 1162297680;
        v1236 = v1566;
        if ( v1203 >= v1227 )
          v1227 = v1203;
        v1203 = v1227;
LABEL_2071:
        v1257 = v1201 + v1203;
        if ( (*(_BYTE *)(v1236 + 2171) & 4) != 0 )
        {
          __asm { xbegin  $+6 }
          __asm { xend }
          ++*(_DWORD *)(v1236 + 2108);
          *(_DWORD *)(v1236 + 2088) += 256;
        }
        else
        {
          if ( v1256 )
          {
            v1258 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v1236 + 1104))(&v1678, v1201 + v1203);
            if ( v1258 < 0 )
            {
              if ( v1258 == -1073741819 )
              {
                v1260 = (int *)v1560;
                if ( (*((_DWORD *)v1560 + 8) & 4) == 0 || *(int *)(i7 + 36) < 0 )
                {
                  v1236 = v1566;
                  if ( *(_DWORD *)(v1566 + 2296) )
                    goto LABEL_2081;
                  *(_QWORD *)(v1566 + 2304) = v1566 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v1236 + 2312) = (char *)v1260 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v1236 + 2320) = *v1260;
                  *(_QWORD *)(v1236 + 2328) = v1257;
                  *(_DWORD *)(v1236 + 2296) = 1;
                  __b8(v1236, 0LL, v1236, v1259);
                }
              }
              v1236 = v1566;
              goto LABEL_2081;
            }
          }
          else
          {
            v1678 = 0LL;
            v1680 = 0;
            v1682 = 4096;
            v1679 = 8 * ((((unsigned __int64)(v1257 & 0xFFF) + 0x1FFF) >> 12) + 6);
            v1681 = v1257 & 0xFFFFFFFFFFFFF000uLL;
            v1683 = v1257 & 0xFFF;
            v1714 = (*(__int64 (__fastcall **)(__int64))(v1236 + 1112))(v1201 + v1203);
            v1684 = v1714 >> 12;
          }
          v1262 = v1566;
          ++*(_DWORD *)(v1566 + 2112);
          *(_QWORD *)(v1262 + 2664) = v1681 + v1683;
          *(_QWORD *)(v1262 + 2656) = v1560;
          v1263 = KeGetCurrentIrql();
          __writecr8(2uLL);
          RtlInitMinimalBarrier(v1262 + 2624, **(unsigned int **)(v1262 + 1528), 0LL);
          v1236 = (*(__int64 (__fastcall **)(unsigned __int64))(v1566 + 1096))(v1566 + *(unsigned int *)(v1566 + 2036));
          v1566 = v1236;
          __writecr8(v1263);
          if ( v1256 )
          {
            (*(void (__fastcall **)(__int64 *, _QWORD))(v1236 + 1120))(&v1678, 0LL);
            v1236 = v1566;
          }
          *(_DWORD *)(v1236 + 2088) += 81920;
        }
LABEL_2081:
        v1261 = *(_DWORD *)(v1236 + 2088);
        v1203 += 4096;
        if ( v1203 >= v1228 || v1261 >= *(_DWORD *)(v1236 + 2092) )
        {
          if ( v1261 >= *(_DWORD *)(v1236 + 2092) )
          {
            v1237 = v1562;
            goto LABEL_2085;
          }
LABEL_2046:
          v1237 = v1562;
          i7 += 40LL;
          if ( i7 == v1562 )
          {
LABEL_2085:
            v17 = (unsigned __int64)v1561;
            if ( i7 == v1237 && v1203 >= v1228 )
            {
              v50 = 0;
              *(_DWORD *)(v1236 + 2084) = 0;
              goto LABEL_236;
            }
            *(_DWORD *)(v1236 + 2084) = v1203;
            goto LABEL_235;
          }
          continue;
        }
        goto LABEL_2071;
      }
    }
    if ( v77 == 28 )
    {
      v731 = *((unsigned int *)v56 + 4);
      if ( !(_DWORD)v731 )
      {
        v1663 = v56 + 48;
        v732 = *((_WORD *)v56 + 20);
        v1559 = &v1596;
        v1662[0] = v732;
        v1662[1] = v732;
        v733 = *(_QWORD *)(v17 + 1296);
        v734 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v17 + 488);
        LOBYTE(v1558) = 0;
        if ( v734(v1662, 0LL, 0LL, 0LL, v733, v1558, 0LL, &v1596) < 0 )
          goto LABEL_236;
        if ( (*(_DWORD *)(v1596 + 16) & 0x10) == 0 )
          goto LABEL_339;
        (*(void (__fastcall **)(_QWORD, char *))(v17 + 512))(*(_QWORD *)(v17 + 488), v1767);
        if ( v1768 )
        {
          v735 = *(__int64 (**)(void))(v17 + 504);
          v49 = v1768;
          v1594 = v1768;
          v736 = v735();
          if ( v736 )
          {
            v52 = *(_DWORD *)(v736 + 80);
            v1591 = v52;
          }
        }
        (*(void (__fastcall **)(_QWORD, char *))(v17 + 512))(*((_QWORD *)v56 + 3), v1763);
        if ( v1764 && (v737 = *(__int64 (**)(void))(v17 + 504), v51 = v1764, v1589 = v1764, (v738 = v737()) != 0) )
        {
          v739 = *(_DWORD *)(v738 + 80);
          v1585 = v739;
        }
        else
        {
          v739 = v1585;
        }
        LODWORD(i7) = 0x40000000;
        if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) == 0 )
        {
          *((_QWORD *)v56 + 1) = v1596 + 112;
          *((_DWORD *)v56 + 4) = 224;
        }
        v55 = 0LL;
        v740 = 0;
        v741 = v52;
        do
        {
          v54 = *(_QWORD *)(v1596 + 8LL * v740 + 112);
          if ( !v52 || v54 < v49 || v54 > v52 + v49 - 1 )
          {
            if ( !v739 || (v55 = v51 + v739 - 1LL, v54 < v51) || v54 > v55 )
            {
              if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
              {
                v775 = *(_QWORD **)(v17 + 2688);
                v776 = 48;
                v55 = 6LL;
                do
                {
                  v776 -= 8;
                  *v775 = *(_QWORD *)v56;
                  v56 += 8;
                  ++v775;
                  --v55;
                }
                while ( v55 );
                v50 = 0;
                if ( v776 )
                {
                  do
                  {
                    v777 = *v56++;
                    *(_BYTE *)v775 = v777;
                    v775 = (_QWORD *)((char *)v775 + 1);
                    --v776;
                  }
                  while ( v776 );
                  v17 = (unsigned __int64)v1561;
                }
                v56 = *(char **)(v17 + 2688);
              }
              else
              {
                v50 = 0;
              }
              *((_QWORD *)v56 + 4) = v54;
              v778 = *(_QWORD *)(v17 + 1424);
              *(_QWORD *)v778 = v56;
              *(_DWORD *)(v778 + 16) = 48;
              v779 = *((_QWORD *)v56 + 1);
              if ( *(_DWORD *)(v17 + 2296) )
                goto LABEL_236;
              *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v17 + 2320) = *(int *)v56;
              *(_QWORD *)(v17 + 2328) = v779;
              *(_DWORD *)(v17 + 2296) = 1;
              goto LABEL_458;
            }
            v55 = 0LL;
          }
          ++v740;
        }
        while ( v740 < 0x1Cu );
        if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) == 0 )
        {
          v742 = (_QWORD *)*((_QWORD *)v56 + 1);
          v743 = *((unsigned int *)v56 + 4);
          v744 = v742;
          *(_DWORD *)(v17 + 2088) += v743;
          v745 = (const char *)v742;
          v746 = *(_DWORD *)(v17 + 2068);
          v747 = *(_QWORD *)(v17 + 2072);
          if ( v742 < (_QWORD *)((char *)v742 + v743) )
          {
            do
            {
              _mm_prefetch(v745, 0);
              v745 += 64;
            }
            while ( v745 < (const char *)v742 + v743 );
          }
          v748 = *(_QWORD *)(v17 + 2072);
          v749 = (unsigned int)v743 >> 7;
          if ( (unsigned int)v743 >> 7 )
          {
            do
            {
              v750 = 8LL;
              do
              {
                v751 = v744[1] ^ __ROL8__(*v744 ^ v748, v746);
                v744 += 2;
                v748 = __ROL8__(v751, v746);
                --v750;
              }
              while ( v750 );
              v752 = (__ROL8__(v747 ^ ((char *)v744 - (char *)v742), 17) ^ v747 ^ (unsigned __int64)((char *)v744 - (char *)v742))
                   * (unsigned __int128)0x7010008004002001uLL;
              v1699 = *((_QWORD *)&v752 + 1);
              v746 = ((unsigned __int8)(v752 ^ BYTE8(v752)) ^ (unsigned __int8)v746) & 0x3F;
              if ( !v746 )
                LOBYTE(v746) = 1;
              --v749;
            }
            while ( v749 );
            v17 = (unsigned __int64)v1561;
            v49 = v1594;
          }
          v54 = v743 & 0x7F;
          if ( (unsigned int)v54 >= 8 )
          {
            v753 = (unsigned __int64)(unsigned int)v54 >> 3;
            do
            {
              v748 = __ROL8__(*v744++ ^ v748, v746);
              v54 = (unsigned int)(v54 - 8);
              --v753;
            }
            while ( v753 );
          }
          LODWORD(i7) = 0;
          if ( (_DWORD)v54 )
          {
            do
            {
              v754 = *(unsigned __int8 *)v744;
              v744 = (_QWORD *)((char *)v744 + 1);
              v748 = __ROL8__(v754 ^ v748, v746);
              v54 = (unsigned int)(v54 - 1);
            }
            while ( (_DWORD)v54 );
            v17 = (unsigned __int64)v1561;
          }
          for ( i10 = v748; ; LODWORD(v748) = i10 ^ v748 )
          {
            i10 >>= 31;
            if ( !i10 )
              break;
          }
          v756 = 0;
          *((_DWORD *)v56 + 5) = v748 & 0x7FFFFFFF;
          v757 = *(const char **)(v1596 + 80);
          if ( !v757 || (v756 = *(_DWORD *)v757, v758 = 0, v55 = (unsigned int)(*(_DWORD *)v757 - 8) >> 3, !(_DWORD)v55) )
          {
LABEL_1229:
            *(_DWORD *)(v17 + 2088) += v756;
            v760 = v757;
            v761 = *(_DWORD *)(v17 + 2068);
            v762 = v757;
            i7 = *(_QWORD *)(v17 + 2072);
            v763 = &v757[v756];
            if ( v757 < v763 )
            {
              do
              {
                _mm_prefetch(v762, 0);
                v762 += 64;
              }
              while ( v762 < v763 );
            }
            v50 = 0;
            v764 = v756 >> 7;
            v765 = *(_QWORD *)(v17 + 2072);
            if ( v756 >> 7 )
            {
              do
              {
                v766 = 8LL;
                do
                {
                  v767 = v765 ^ *(_QWORD *)v760;
                  v768 = *((_QWORD *)v760 + 1);
                  v760 += 16;
                  v765 = __ROL8__(__ROL8__(v767, v761) ^ v768, v761);
                  --v766;
                }
                while ( v766 );
                v769 = __ROL8__(i7 ^ (v760 - v757), 17) ^ i7 ^ (v760 - v757);
                v1700 = (v769 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v761 = ((unsigned __int8)(v769 ^ v1700) ^ (unsigned __int8)v761) & 0x3F;
                if ( !v761 )
                  LOBYTE(v761) = 1;
                --v764;
              }
              while ( v764 );
              v17 = (unsigned __int64)v1561;
            }
            v770 = v756 & 0x7F;
            if ( v770 >= 8 )
            {
              v771 = (unsigned __int64)v770 >> 3;
              do
              {
                v765 = __ROL8__(*(_QWORD *)v760 ^ v765, v761);
                v760 += 8;
                v770 -= 8;
                --v771;
              }
              while ( v771 );
            }
            if ( v770 )
            {
              do
              {
                v772 = *(unsigned __int8 *)v760++;
                v765 = __ROL8__(v772 ^ v765, v761);
                --v770;
              }
              while ( v770 );
              v17 = (unsigned __int64)v1561;
            }
            for ( i11 = v765; ; LODWORD(v765) = i11 ^ v765 )
            {
              i11 >>= 31;
              if ( !i11 )
                break;
            }
            *((_DWORD *)v56 + 11) = v765 & 0x7FFFFFFF;
            goto LABEL_236;
          }
          while ( 1 )
          {
            v759 = *(_QWORD *)&v757[8 * v758 + 8];
            if ( v759 && (!v741 || v759 < v49 || v759 > v49 + v741 - 1) )
            {
              if ( !v1585 )
                break;
              v54 = v1585 + v1589 - 1;
              if ( v759 < v1589 || v759 > v54 )
                break;
            }
            if ( ++v758 >= (unsigned int)v55 )
              goto LABEL_1229;
          }
          *((_QWORD *)v56 + 4) = v759;
          v50 = 0;
          v774 = *(_QWORD *)(v17 + 1424);
          *(_QWORD *)v774 = v56;
          *(_DWORD *)(v774 + 16) = 48;
          if ( *(_DWORD *)(v17 + 2296) )
            goto LABEL_236;
          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v17 + 2320) = *(int *)v56;
          *(_QWORD *)(v17 + 2328) = v757;
          goto LABEL_457;
        }
        (*(void (__fastcall **)(__int64))(v17 + 480))(v1596);
LABEL_235:
        v50 = 0;
        goto LABEL_236;
      }
      v780 = (_QWORD *)*((_QWORD *)v56 + 1);
      *(_DWORD *)(v17 + 2088) += v731;
      v781 = v780;
      v782 = *(_DWORD *)(v17 + 2068);
      v783 = (const char *)v780;
      v784 = *(_QWORD *)(v17 + 2072);
      if ( v780 < (_QWORD *)((char *)v780 + v731) )
      {
        do
        {
          _mm_prefetch(v783, 0);
          v783 += 64;
        }
        while ( v783 < (const char *)v780 + v731 );
      }
      v785 = *(_QWORD *)(v17 + 2072);
      v786 = (unsigned int)v731 >> 7;
      if ( (unsigned int)v731 >> 7 )
      {
        do
        {
          v787 = 8LL;
          do
          {
            v788 = v781[1] ^ __ROL8__(*v781 ^ v785, v782);
            v781 += 2;
            v785 = __ROL8__(v788, v782);
            --v787;
          }
          while ( v787 );
          v789 = __ROL8__(v784 ^ ((char *)v781 - (char *)v780), 17) ^ v784 ^ ((char *)v781 - (char *)v780);
          v1701 = (v789 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v782 = ((unsigned __int8)(v1701 ^ v789) ^ (unsigned __int8)v782) & 0x3F;
          if ( !v782 )
            LOBYTE(v782) = 1;
          --v786;
        }
        while ( v786 );
        v17 = (unsigned __int64)v1561;
      }
      v790 = v731 & 0x7F;
      if ( (unsigned int)v790 >= 8 )
      {
        v791 = (unsigned __int64)(unsigned int)v790 >> 3;
        do
        {
          v785 = __ROL8__(*v781++ ^ v785, v782);
          v790 = (unsigned int)(v790 - 8);
          --v791;
        }
        while ( v791 );
      }
      for ( ; (_DWORD)v790; v790 = (unsigned int)(v790 - 1) )
      {
        v792 = *(unsigned __int8 *)v781;
        v781 = (_QWORD *)((char *)v781 + 1);
        v785 = __ROL8__(v792 ^ v785, v782);
      }
      for ( i12 = v785; ; LODWORD(v785) = i12 ^ v785 )
      {
        i12 >>= 31;
        if ( !i12 )
          break;
      }
      v794 = v785 & 0x7FFFFFFF;
      if ( v794 == *((_DWORD *)v56 + 5) )
      {
LABEL_1292:
        v50 = 0;
      }
      else
      {
        if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
          v50 = 1;
        v795 = *((unsigned int *)v56 + 4);
        v796 = *((_QWORD *)v56 + 1);
        if ( *((_DWORD *)v56 + 4) )
        {
          v790 = 64LL;
          if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
          {
            v797 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v798 = v796 & 0xFFFFFFFFFFFFF000uLL;
            v1784 = (v796 + v795 - 1) | 0xFFF;
            v799 = (v796 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v800 = v797;
              while ( 1 )
              {
                v801 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v17 + 1128))(
                         v798,
                         0LL,
                         v790,
                         v781);
                if ( v801 != -1073741267 )
                  break;
                if ( v50 )
                  goto LABEL_1311;
                if ( v797 > 1u )
                  goto LABEL_1290;
                v800 = v797;
                __writecr8(v797);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v801 < 0 )
                break;
LABEL_1290:
              v798 += 4096LL;
              v799 += 4096LL;
              if ( v799 == v1784 )
              {
                __writecr8(v800);
                v56 = v1560;
                goto LABEL_1292;
              }
            }
LABEL_1311:
            __writecr8(v800);
            v56 = v1560;
          }
        }
        v816 = *(_DWORD *)(v17 + 2296);
        v50 = 0;
        if ( !v816 )
        {
          *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v794 ^ (unsigned __int64)*((unsigned int *)v56 + 5);
          v816 = *(_DWORD *)(v17 + 2296);
        }
        v817 = *((_QWORD *)v56 + 1);
        if ( !v816 )
        {
          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v17 + 2320) = *(int *)v56;
          *(_QWORD *)(v17 + 2328) = v817;
          *(_DWORD *)(v17 + 2296) = 1;
          __b8(v17, 0LL, v790, v781);
        }
      }
      v802 = 0;
      v1596 = *((_QWORD *)v56 + 1) - 112LL;
      i7 = *(_QWORD *)(v1596 + 80);
      if ( i7 )
        v802 = *(_DWORD *)i7;
      *(_DWORD *)(v17 + 2088) += v802;
      v803 = (_QWORD *)i7;
      v804 = *(_DWORD *)(v17 + 2068);
      v805 = (const char *)i7;
      v806 = *(_QWORD *)(v17 + 2072);
      v807 = i7 + v802;
      if ( i7 < v807 )
      {
        do
        {
          _mm_prefetch(v805, 0);
          v805 += 64;
        }
        while ( (unsigned __int64)v805 < v807 );
      }
      v55 = *(_QWORD *)(v17 + 2072);
      v808 = v802 >> 7;
      if ( v802 >> 7 )
      {
        do
        {
          v809 = 8LL;
          do
          {
            v810 = v55 ^ *v803;
            v811 = v803[1];
            v803 += 2;
            v55 = __ROL8__(__ROL8__(v810, v804) ^ v811, v804);
            --v809;
          }
          while ( v809 );
          v812 = __ROL8__(v806 ^ ((unsigned __int64)v803 - i7), 17) ^ v806 ^ ((unsigned __int64)v803 - i7);
          v1702 = (v812 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v804 = ((unsigned __int8)(v1702 ^ v812) ^ (unsigned __int8)v804) & 0x3F;
          if ( !v804 )
            LOBYTE(v804) = 1;
          --v808;
        }
        while ( v808 );
        v17 = (unsigned __int64)v1561;
      }
      v54 = v802 & 0x7F;
      if ( (unsigned int)v54 >= 8 )
      {
        v813 = (unsigned __int64)(unsigned int)v54 >> 3;
        do
        {
          v55 = __ROL8__(*v803++ ^ v55, v804);
          v54 = (unsigned int)(v54 - 8);
          --v813;
        }
        while ( v813 );
      }
      if ( (_DWORD)v54 )
      {
        do
        {
          v814 = *(unsigned __int8 *)v803;
          v803 = (_QWORD *)((char *)v803 + 1);
          v55 = __ROL8__(v814 ^ v55, v804);
          v54 = (unsigned int)(v54 - 1);
        }
        while ( (_DWORD)v54 );
        v17 = (unsigned __int64)v1561;
      }
      for ( i13 = v55; ; v55 = (unsigned int)i13 ^ (unsigned int)v55 )
      {
        i13 >>= 31;
        if ( !i13 )
          break;
      }
      v818 = *((unsigned int *)v56 + 11);
      LODWORD(v55) = v55 & 0x7FFFFFFF;
      if ( (_DWORD)v55 == (_DWORD)v818 )
        goto LABEL_236;
      if ( *(_DWORD *)(v17 + 2296) )
        goto LABEL_236;
      *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = (unsigned int)v55 ^ v818;
      if ( *(_DWORD *)(v17 + 2296) )
        goto LABEL_236;
      *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v17 + 2320) = *(int *)v56;
      *(_QWORD *)(v17 + 2328) = i7;
LABEL_1322:
      *(_DWORD *)(v17 + 2296) = 1;
      goto LABEL_458;
    }
    v55 = 12LL;
    if ( v77 > 12 )
    {
      if ( v77 <= 14 )
      {
        if ( v77 == 14 )
        {
          if ( !*(_QWORD *)(v17 + 2432) )
            goto LABEL_1735;
          v690 = *(_DWORD *)(v17 + 2452);
          if ( ((v690 >> 2) & 1) != 0 )
            goto LABEL_1735;
          if ( *(_DWORD *)(v17 + 2084) )
          {
            if ( ((v690 >> 5) & 1) != 0 )
              goto LABEL_1735;
          }
          else
          {
            *(_DWORD *)(v17 + 2452) = v690 ^ ((unsigned __int8)v690 ^ (unsigned __int8)(8 * v690)) & 0x20;
          }
        }
        v691 = (_QWORD *)*((_QWORD *)v56 + 1);
        v692 = *((unsigned int *)v56 + 4);
        v693 = v691;
        *(_DWORD *)(v17 + 2088) += v692;
        v694 = (const char *)v691;
        v695 = *(_DWORD *)(v17 + 2068);
        i7 = *(_QWORD *)(v17 + 2072);
        if ( v691 < (_QWORD *)((char *)v691 + v692) )
        {
          do
          {
            _mm_prefetch(v694, 0);
            v694 += 64;
          }
          while ( v694 < (const char *)v691 + v692 );
        }
        v696 = *(_QWORD *)(v17 + 2072);
        v697 = (unsigned int)v692 >> 7;
        if ( (unsigned int)v692 >> 7 )
        {
          do
          {
            v698 = 8LL;
            do
            {
              v699 = v696 ^ *v693;
              v700 = v693[1];
              v693 += 2;
              v696 = __ROL8__(__ROL8__(v699, v695) ^ v700, v695);
              --v698;
            }
            while ( v698 );
            v701 = (__ROL8__(i7 ^ ((char *)v693 - (char *)v691), 17) ^ i7 ^ ((char *)v693 - (char *)v691))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1698 = *((_QWORD *)&v701 + 1);
            v695 = ((unsigned __int8)(v701 ^ BYTE8(v701)) ^ (unsigned __int8)v695) & 0x3F;
            if ( !v695 )
              LOBYTE(v695) = 1;
            --v697;
          }
          while ( v697 );
          v17 = (unsigned __int64)v1561;
        }
        v702 = v692 & 0x7F;
        if ( (unsigned int)v702 >= 8 )
        {
          v703 = (unsigned __int64)(unsigned int)v702 >> 3;
          do
          {
            v696 = __ROL8__(*v693++ ^ v696, v695);
            v702 = (unsigned int)(v702 - 8);
            --v703;
          }
          while ( v703 );
          v17 = (unsigned __int64)v1561;
        }
        for ( ; (_DWORD)v702; v702 = (unsigned int)(v702 - 1) )
        {
          v704 = *(unsigned __int8 *)v693;
          v693 = (_QWORD *)((char *)v693 + 1);
          v696 = __ROL8__(v704 ^ v696, v695);
        }
        for ( i14 = v696; ; LODWORD(v696) = i14 ^ v696 )
        {
          i14 >>= 31;
          if ( !i14 )
            break;
        }
        v706 = v696 & 0x7FFFFFFF;
        if ( v706 == *((_DWORD *)v56 + 5) )
          goto LABEL_1148;
        _InterlockedOr(v1557, 0);
        if ( (*((_DWORD *)v56 + 6) & 1) != 0 )
        {
          if ( **(_BYTE **)(v17 + 1408) )
            goto LABEL_1148;
        }
        v707 = *((unsigned int *)v56 + 4);
        v708 = *((_QWORD *)v56 + 1);
        if ( *((_DWORD *)v56 + 4) )
        {
          v702 = 64LL;
          if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
          {
            v709 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v710 = v708 & 0xFFFFFFFFFFFFF000uLL;
            v711 = (v708 + v707 - 1) | 0xFFF;
            v712 = (v708 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              i7 = v709;
              while ( 1 )
              {
                v713 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v17 + 1128))(
                         v710,
                         0LL,
                         v702,
                         v693);
                if ( v713 != -1073741267 )
                  break;
                if ( v709 > 1u )
                  goto LABEL_1146;
                i7 = v709;
                __writecr8(v709);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v713 < 0 )
                break;
LABEL_1146:
              v710 += 4096LL;
              v712 += 4096LL;
              if ( v712 == v711 )
              {
                __writecr8(i7);
                v56 = v1560;
                v50 = 0;
LABEL_1148:
                if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) == 0 )
                  goto LABEL_236;
                v714 = *((unsigned int *)v56 + 4);
                if ( !(_DWORD)v714 )
                  goto LABEL_236;
                sub_1403E604C(v17, *((_QWORD *)v56 + 1), v714, v1742);
                v715 = 16LL;
                v716 = (__int64 *)(v56 + 28);
                v717 = v1742;
                do
                {
                  v718 = *(_QWORD *)v717;
                  v717 += 8;
                  v719 = *v716++;
                  if ( v718 != v719 )
                    goto LABEL_1162;
                  v715 = (unsigned int)(v715 - 8);
                }
                while ( (unsigned int)v715 >= 8 );
                if ( !(_DWORD)v715 )
                  goto LABEL_1177;
                while ( 1 )
                {
                  v720 = *v717++;
                  v721 = *(unsigned __int8 *)v716;
                  v716 = (__int64 *)((char *)v716 + 1);
                  if ( v720 != v721 )
                    break;
                  v71 = (_DWORD)v715 == 1;
                  v715 = (unsigned int)(v715 - 1);
                  if ( v71 )
                    goto LABEL_1177;
                }
LABEL_1162:
                _InterlockedOr(v1557, 0);
                if ( (*((_DWORD *)v56 + 6) & 1) == 0 || !**(_BYTE **)(v17 + 1408) )
                {
                  v724 = *((unsigned int *)v56 + 4);
                  v725 = *((_QWORD *)v56 + 1);
                  if ( *((_DWORD *)v56 + 4) )
                  {
                    v715 = 64LL;
                    if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
                    {
                      LODWORD(i7) = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v726 = v725 & 0xFFFFFFFFFFFFF000uLL;
                      v727 = (v725 + v724 - 1) | 0xFFF;
                      v728 = (v725 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v729 = (unsigned __int8)i7;
                        while ( 1 )
                        {
                          v730 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v17 + 1128))(
                                   v726,
                                   0LL,
                                   v715,
                                   v716);
                          if ( v730 != -1073741267 )
                            break;
                          if ( (unsigned __int8)i7 > 1u )
                            goto LABEL_1172;
                          v729 = (unsigned __int8)i7;
                          __writecr8((unsigned __int8)i7);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v730 < 0 )
                          break;
LABEL_1172:
                        v726 += 4096LL;
                        v728 += 4096LL;
                        if ( v728 == v727 )
                        {
                          __writecr8(v729);
                          v50 = 0;
                          goto LABEL_1177;
                        }
                      }
                      __writecr8(v729);
                      v725 = *((_QWORD *)v56 + 1);
                      v50 = 0;
                    }
                  }
                  if ( !*(_DWORD *)(v17 + 2296) )
                  {
                    *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v17 + 2320) = *(int *)v56;
                    *(_QWORD *)(v17 + 2328) = v725;
                    *(_DWORD *)(v17 + 2296) = 1;
                    __b8(v17, 0LL, v715, v716);
                  }
                }
LABEL_1177:
                v179 = 16 * *((_DWORD *)v56 + 4);
LABEL_2413:
                *(_DWORD *)(v17 + 2088) += v179;
                goto LABEL_236;
              }
            }
            __writecr8(i7);
            v56 = v1560;
            v50 = 0;
          }
        }
        v722 = *(_DWORD *)(v17 + 2296);
        if ( !v722 )
        {
          *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v706 ^ (unsigned __int64)*((unsigned int *)v56 + 5);
          v722 = *(_DWORD *)(v17 + 2296);
        }
        v723 = *((_QWORD *)v56 + 1);
        if ( !v722 )
        {
          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v17 + 2320) = *(int *)v56;
          *(_QWORD *)(v17 + 2328) = v723;
          *(_DWORD *)(v17 + 2296) = 1;
          __b8(v17, 0LL, v702, v693);
        }
        goto LABEL_1148;
      }
      if ( v77 == 15 )
      {
        if ( *(_DWORD *)(v17 + 2392) == 11 )
        {
          *(_DWORD *)(v17 + 2088) += 256;
          i7 = *(_QWORD *)(v17 + 1416);
          v683 = (*(__int64 (__fastcall **)(unsigned __int64))(v17 + 728))(i7);
          if ( v683 )
          {
            v684 = (*(__int64 (__fastcall **)(__int64))(v17 + 736))(v683);
            v687 = *((_QWORD *)v56 + 3);
            v688 = v684;
            if ( v687 )
            {
              if ( v687 != v684 && !*(_DWORD *)(v17 + 2296) )
              {
                *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v17 + 2320) = *(int *)v56;
                *(_QWORD *)(v17 + 2328) = v684;
                *(_DWORD *)(v17 + 2296) = 1;
                __b8(v17, 0LL, v685, v686);
              }
            }
            else
            {
              v689 = *(_QWORD *)(v17 + 2424);
              if ( (!*(_DWORD *)(v17 + 2420) || v684 < v689 || v684 > v689 + *(unsigned int *)(v17 + 2420) - 1LL)
                && !*(_DWORD *)(v17 + 2296) )
              {
                *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v17 + 2320) = *(int *)v56;
                *(_QWORD *)(v17 + 2328) = v684;
                *(_DWORD *)(v17 + 2296) = 1;
                __b8(v17, 0LL, v685, v686);
              }
              *((_QWORD *)v56 + 3) = v688;
            }
            (*(void (__fastcall **)(unsigned __int64, __int64))(v17 + 744))(i7, v683);
          }
        }
        goto LABEL_236;
      }
      if ( v77 == 21 )
      {
        v677 = *((_DWORD *)v56 + 10);
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v17 + 416))(v1740, *((unsigned int *)v56 + 11));
        v678 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v17 + 464))(v1740, v1760);
        if ( v1771 == 38 )
        {
          __asm { xgetbv }
          v680 = v678 | (v679 << 32);
        }
        else if ( v677 )
        {
          v680 = __readcr4();
        }
        else
        {
          v680 = __readcr0();
        }
        (*(void (__fastcall **)(_BYTE *))(v17 + 408))(v1760);
        v681 = *((_QWORD *)v56 + 4);
        v55 = v680 & *((_QWORD *)v56 + 3);
        if ( v55 == v681 )
          goto LABEL_236;
        v682 = *((_QWORD *)v56 + 5);
        if ( *(_DWORD *)(v17 + 2296) )
          goto LABEL_236;
        *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v55 ^ v681;
        if ( *(_DWORD *)(v17 + 2296) )
          goto LABEL_236;
        *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v17 + 2320) = *(int *)v56;
        *(_QWORD *)(v17 + 2328) = v682;
        goto LABEL_457;
      }
      if ( v77 != 24 )
      {
        if ( v77 != 25 )
        {
          if ( v77 == 26 )
          {
            if ( (*(_DWORD *)(v17 + 2096) & 1) != 0 )
              goto LABEL_236;
            v267 = 0;
            v268 = *(_QWORD *)(v17 + 1448);
            v269 = *(_QWORD *)(v17 + 1352);
            v1562 = *(_QWORD *)(v17 + 1456);
            v270 = *(void (**)(void))(v17 + 376);
            v1778 = 0;
            v1564 = v268;
            v270();
            if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 || (v271 = *(_DWORD *)(v17 + 2384), v271 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 296))(*(_QWORD *)(v17 + 2560), 0LL);
              LOBYTE(i7) = 0x80;
            }
            else
            {
              LODWORD(i7) = 1;
              LOBYTE(i7) = 1 << v271;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v17 + 312))(v269, 0LL);
            v272 = *(volatile signed __int8 ***)(v17 + 1312);
            v273 = *v272;
            if ( *v272 != (volatile signed __int8 *)v272 )
            {
              do
              {
                _InterlockedOr8(&v273[*(_QWORD *)(v17 + 1720) - *(_QWORD *)(v17 + 1744)], i7);
                v273 = *(volatile signed __int8 **)v273;
                ++v267;
              }
              while ( v273 != (volatile signed __int8 *)v272 );
              v1778 = v267;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v17 + 312))(v268, 0LL);
            v275 = *(_QWORD ***)(v17 + 1440);
            v276 = *v275;
            if ( *v275 != v275 )
            {
              v277 = v1562;
              v278 = (int *)v1560;
              do
              {
                v279 = (char *)v276 - *(_QWORD *)(v17 + 1856);
                if ( v279 != (char *)v277 )
                {
                  v280 = *(_QWORD *)(v17 + 1720);
                  v281 = v280;
                  v282 = *(_QWORD *)&v279[*(_QWORD *)(v17 + 1848)];
                  if ( ((unsigned __int8)i7 & *(_BYTE *)(v282 + v280)) == 0
                    && (*(_DWORD *)(v282 + *(_QWORD *)(v17 + 1728)) & *(_DWORD *)(v17 + 1752)) != 0
                    && !*(_DWORD *)(v17 + 2296) )
                  {
                    *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v17 + 2312) = (char *)v278 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v17 + 2320) = *v278;
                    *(_QWORD *)(v17 + 2328) = v282;
                    *(_DWORD *)(v17 + 2296) = 1;
                    __b8(v17, 0LL, v280, v274);
                    v281 = *(_QWORD *)(v17 + 1720);
                  }
                  _InterlockedAnd8((volatile signed __int8 *)(v282 + v281), ~(_BYTE)i7);
                  v277 = v1562;
                }
                v276 = (_QWORD *)*v276;
              }
              while ( v276 != v275 );
              v267 = v1778;
              v268 = v1564;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v17 + 320))(v268, 0LL);
            if ( (_BYTE)i7 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 304))(*(_QWORD *)(v17 + 2560), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 320))(*(_QWORD *)(v17 + 1352), 0LL);
            (*(void (**)(void))(v17 + 384))();
            *(_DWORD *)(v17 + 2088) += v267 << 8;
            goto LABEL_235;
          }
          if ( v77 == 27 )
          {
            if ( (*(_DWORD *)(v17 + 2096) & 1) == 0 )
              goto LABEL_236;
            v245 = *(unsigned int **)(v17 + 1448);
            v246 = *(_QWORD **)(v17 + 1456);
            v247 = *(void (**)(void))(v17 + 376);
            v248 = *(_QWORD *)(v17 + 1352);
            v1567 = v245;
            v1564 = (__int64)v246;
            v1563 = 0;
            v247();
            if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 || (v249 = *(_DWORD *)(v17 + 2384), v249 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 296))(*(_QWORD *)(v17 + 2560), 0LL);
              LOBYTE(i7) = 0x80;
            }
            else
            {
              LODWORD(i7) = 1;
              LOBYTE(i7) = 1 << v249;
            }
            v250 = *(void (__fastcall **)(_QWORD, _QWORD))(v17 + 312);
            LODWORD(v1565) = i7;
            v250(v248, 0LL);
            (*(void (__fastcall **)(unsigned int *, _QWORD))(v17 + 312))(v245, 0LL);
            v251 = *(unsigned __int64 **)(v17 + 1440);
            v252 = 0LL;
            v1562 = 0LL;
            v253 = *v251;
            if ( (unsigned __int64 *)*v251 != v251 )
            {
              do
              {
                if ( (_QWORD *)(v253 - 24) != v246 )
                {
                  v254 = *(_QWORD *)(v253 - 24 + *(_QWORD *)(v17 + 1848));
                  if ( (*(_DWORD *)(v254 + *(_QWORD *)(v17 + 1728)) & *(_DWORD *)(v17 + 1752)) == 0 )
                  {
                    v255 = *(_QWORD *)(v253 - 24 + *(_QWORD *)(v17 + 1848));
                    if ( v252 )
                      v255 = 1LL;
                    v252 = v255;
                  }
                  _InterlockedOr8((volatile signed __int8 *)(v254 + *(_QWORD *)(v17 + 1720)), i7);
                }
                v253 = *(_QWORD *)v253;
              }
              while ( (unsigned __int64 *)v253 != v251 );
              v1562 = v252;
            }
            v256 = *(_QWORD ***)(v17 + 1312);
            v257 = *v256;
            if ( *v256 != v256 )
            {
              v258 = v1563;
              v253 = (unsigned __int8)i7;
              v259 = ~(_BYTE)i7;
              v260 = v1564;
              v1777 = v253;
              do
              {
                v261 = (char *)v257 - *(_QWORD *)(v17 + 1744);
                v262 = *(_QWORD *)(v17 + 1720);
                if ( (v261[v262] & (unsigned int)v253) == 0 )
                {
                  v263 = *(_QWORD *)&v261[*(_QWORD *)(v17 + 1736)];
                  if ( v263 && v263 != v260 && !*(_DWORD *)(v17 + 2296) )
                  {
                    v264 = (int *)v1560;
                    *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v17 + 2312) = (char *)v264 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v17 + 2320) = *v264;
                    *(_QWORD *)(v17 + 2328) = v261;
                    *(_DWORD *)(v17 + 2296) = 1;
                    __b8(v17, 0LL, v263, v251);
                    v262 = *(_QWORD *)(v17 + 1720);
                  }
                  v253 = v1777;
                }
                _InterlockedAnd8(&v261[v262], v259);
                v257 = (_QWORD *)*v257;
                ++v258;
              }
              while ( v257 != v256 );
              LODWORD(i7) = v1565;
              v246 = (_QWORD *)v1564;
              v1563 = v258;
              v252 = v1562;
            }
            v50 = 0;
            if ( v252 )
            {
              if ( v252 == 1 )
              {
                v265 = *(_QWORD ***)(v17 + 1440);
                for ( i15 = *v265; i15 != v265; i15 = (_QWORD *)*i15 )
                {
                  v253 = (unsigned __int64)(i15 - 3);
                  if ( i15 - 3 != v246 )
                  {
                    v253 = *(_QWORD *)(v253 + *(_QWORD *)(v17 + 1848));
                    _InterlockedAnd8((volatile signed __int8 *)(v253 + *(_QWORD *)(v17 + 1720)), ~(_BYTE)i7);
                  }
                }
              }
              else
              {
                _InterlockedAnd8((volatile signed __int8 *)(*(_QWORD *)(v17 + 1720) + v252), ~(_BYTE)i7);
              }
            }
            (*(void (__fastcall **)(unsigned int *, _QWORD, unsigned __int64))(v17 + 320))(v1567, 0LL, v253);
            if ( (_BYTE)i7 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 304))(*(_QWORD *)(v17 + 2560), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 320))(*(_QWORD *)(v17 + 1352), 0LL);
            (*(void (**)(void))(v17 + 384))();
            v179 = v1563 << 8;
            goto LABEL_2413;
          }
          goto LABEL_2326;
        }
        v283 = *(_QWORD ***)(v17 + 1328);
        v284 = *(__int64 (**)(void))(v17 + 888);
        v1562 = (__int64)v283;
        v1779 = 0;
        v1573 = (char *)v284();
        _disable();
        v285 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v17 + 1608));
        _enable();
        (*(void (__fastcall **)(__int64))(v17 + 360))(v285);
        LOBYTE(v286) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(v17 + 240))(*(_QWORD *)(v17 + 1336), v286);
        v287 = 0;
        v288 = **(unsigned int ***)(v17 + 1552);
        v289 = *v288;
        v1564 = (__int64)(v288 + 4);
        v1567 = &v288[6 * v289 + 4];
        if ( *((_BYTE *)v288 + 12) )
        {
          v290 = *v283;
          LODWORD(v289) = 0;
          while ( v290 != v283 )
          {
            v290 = (_QWORD *)*v290;
            LODWORD(v289) = v289 + 1;
          }
        }
        LODWORD(i7) = 8 * v289;
        v291 = __rdtsc();
        v292 = __ROR8__(v291, 3);
        v1735 = ((v292 ^ v291) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v293 = ((unsigned __int16)(8193 * (v292 ^ v291)) ^ (unsigned __int16)v1735) & 0x7FF;
        v294 = __rdtsc();
        v295 = (__ROR8__(v294, 3) ^ v294) * (unsigned __int128)0x7010008004002001uLL;
        v296 = *(unsigned int *)(v17 + 2064);
        v1736 = *((_QWORD *)&v295 + 1);
        v297 = (*((_QWORD *)&v295 + 1) ^ (unsigned __int64)v295) % (unsigned int)(v293 + 1);
        v298 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v17 + 248))(
                 512LL,
                 (unsigned int)(v293 + 8 * v289),
                 v296);
        v299 = v298;
        if ( !v298 )
        {
          ++*(_DWORD *)(v17 + 2584);
          goto LABEL_542;
        }
        v300 = v297;
        v301 = (_QWORD *)v298;
        if ( (unsigned int)v297 >= 8 )
        {
          v302 = (unsigned __int64)(unsigned int)v297 >> 3;
          do
          {
            v303 = __rdtsc();
            v300 -= 8;
            v304 = (__ROR8__(v303, 3) ^ v303) * (unsigned __int128)0x7010008004002001uLL;
            v1737 = *((_QWORD *)&v304 + 1);
            *v301++ = v304 ^ *((_QWORD *)&v304 + 1);
            --v302;
          }
          while ( v302 );
          v17 = (unsigned __int64)v1561;
          v283 = (_QWORD **)v1562;
        }
        if ( v300 )
        {
          v305 = __rdtsc();
          v306 = (__ROR8__(v305, 3) ^ v305) * (unsigned __int128)0x7010008004002001uLL;
          v1752 = *((_QWORD *)&v306 + 1);
          v307 = v306 ^ *((_QWORD *)&v306 + 1);
          do
          {
            *(_BYTE *)v301 = v307;
            v301 = (_QWORD *)((char *)v301 + 1);
            v307 >>= 8;
            --v300;
          }
          while ( v300 );
        }
        v308 = v293 - v297;
        v309 = (_QWORD *)(v299 + (unsigned int)v297 + (unsigned __int64)(unsigned int)i7);
        if ( v308 >= 8 )
        {
          v301 = (_QWORD *)((unsigned __int64)v308 >> 3);
          do
          {
            v310 = __rdtsc();
            v308 -= 8;
            v311 = (__ROR8__(v310, 3) ^ v310) * (unsigned __int128)0x7010008004002001uLL;
            v1757 = *((_QWORD *)&v311 + 1);
            *v309++ = v311 ^ *((_QWORD *)&v311 + 1);
            v301 = (_QWORD *)((char *)v301 - 1);
          }
          while ( v301 );
        }
        if ( v308 )
        {
          v312 = __rdtsc();
          v313 = (__ROR8__(v312, 3) ^ v312) * (unsigned __int128)0x7010008004002001uLL;
          v1758 = *((_QWORD *)&v313 + 1);
          v314 = v313 ^ *((_QWORD *)&v313 + 1);
          do
          {
            *(_BYTE *)v309 = v314;
            v309 = (_QWORD *)((char *)v309 + 1);
            v314 >>= 8;
            --v308;
          }
          while ( v308 );
        }
        i7 = (unsigned int)v297 + v299;
        v1628 = v299;
        if ( i7 )
        {
          v315 = *v283;
          while ( v315 != v283 )
          {
            v316 = *(_QWORD *)((char *)v315 + *(_QWORD *)(v17 + 1872) - *(_QWORD *)(v17 + 1864));
            if ( !(*(unsigned int (__fastcall **)(__int64))(v17 + 680))(v316) && v287 < (unsigned int)v289 )
            {
              v317 = v287++;
              *(_QWORD *)(i7 + 8 * v317) = v316;
            }
            v315 = (_QWORD *)*v315;
            ++v1779;
          }
          (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, _QWORD *))(v17 + 920))(i7, v287, v309, v301);
          v318 = v1564;
          v319 = v1567;
          do
          {
            v320 = *(_QWORD *)(v318 + 8);
            if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(v17 + 680))(v320) )
            {
              v322 = v287 - 1;
              v323 = 0LL;
              if ( (int)(v287 - 1) < 0 )
                goto LABEL_559;
              do
              {
                v324 = (v322 + (int)v323) >> 1;
                if ( v320 >= *(_QWORD *)(i7 + 8LL * v324) )
                {
                  if ( v320 <= *(_QWORD *)(i7 + 8LL * v324) )
                    break;
                  v323 = (unsigned int)(v324 + 1);
                }
                else
                {
                  if ( !v324 )
                    goto LABEL_559;
                  v322 = v324 - 1;
                }
              }
              while ( v322 >= (int)v323 );
              if ( v322 < (int)v323 )
              {
LABEL_559:
                if ( !*(_DWORD *)(v17 + 2296) )
                {
                  v325 = (int *)v1560;
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = (char *)v325 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *v325;
                  *(_QWORD *)(v17 + 2328) = v320;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v323, v321);
                }
              }
            }
            v318 += 24LL;
          }
          while ( v318 < (unsigned __int64)v319 );
          v50 = 0;
        }
        else
        {
LABEL_542:
          v50 = 0;
          v1628 = 0LL;
        }
        (*(void (__fastcall **)(_QWORD))(v17 + 280))(*(_QWORD *)(v17 + 1336));
        (*(void (**)(void))(v17 + 368))();
        (*(void (__fastcall **)(char *))(v17 + 896))(v1573);
        if ( !v1628 )
          goto LABEL_236;
        *(_DWORD *)(v17 + 2088) += v1779 << 9;
        v168 = *(void (**)(void))(v17 + 256);
LABEL_340:
        v168();
        goto LABEL_236;
      }
      LODWORD(i7) = 0x40000000;
      if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 && (*(_DWORD *)(v17 + 2452) & 0x1000) == 0 )
      {
        v326 = __rdtsc();
        v327 = (__ROR8__(v326, 3) ^ v326) * (unsigned __int128)0x7010008004002001uLL;
        v1759 = *((_QWORD *)&v327 + 1);
        *(_DWORD *)(v17 + 2084) = ((unsigned __int64)v327 ^ *((_QWORD *)&v327 + 1)) % 5;
      }
      while ( 2 )
      {
        v328 = *(_DWORD *)(v17 + 2084);
        if ( !v328 )
        {
          v668 = v56;
          v1636 = 0LL;
          for ( i16 = 0; ; ++i16 )
          {
            v676 = (*(__int64 (__fastcall **)(__int64 *))(v17 + 768))(&v1636);
            if ( !v676 )
              break;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v17 + 520))(v676, v1697) )
            {
              if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
              {
                v671 = *(_QWORD **)(v17 + 2688);
                v672 = 48;
                v669 = 6LL;
                do
                {
                  v672 -= 8;
                  *v671 = *(_QWORD *)v668;
                  v668 += 8;
                  ++v671;
                  --v669;
                }
                while ( v669 );
                if ( v672 )
                {
                  do
                  {
                    v673 = *v668++;
                    *(_BYTE *)v671 = v673;
                    v671 = (_QWORD *)((char *)v671 + 1);
                    --v672;
                  }
                  while ( v672 );
                  v17 = (unsigned __int64)v1561;
                }
                v668 = *(char **)(v17 + 2688);
              }
              *((_QWORD *)v668 + 3) = v676;
              v674 = *(_QWORD *)(v17 + 1424);
              *(_QWORD *)v674 = v668;
              *(_DWORD *)(v674 + 16) = 48;
              v675 = *(_QWORD *)(v17 + 1424);
              *(_QWORD *)(v675 + 8) = v676;
              *(_DWORD *)(v675 + 20) = 4096;
              if ( !*(_DWORD *)(v17 + 2296) )
              {
                *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v17 + 2312) = v668 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v17 + 2320) = *(int *)v668;
                *(_QWORD *)(v17 + 2328) = 3LL;
                *(_DWORD *)(v17 + 2296) = 1;
                __b8(v17, 0LL, v669, v670);
              }
            }
          }
          goto LABEL_1085;
        }
        v329 = v328 - 1;
        if ( !v329 )
        {
          v659 = v56;
          v1635 = 0LL;
          i16 = 0;
          LODWORD(i7) = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          for ( i17 = (*(__int64 (__fastcall **)(__int64 *))(v17 + 776))(&v1635);
                i17;
                i17 = (*(__int64 (__fastcall **)(__int64 *))(v17 + 776))(&v1635) )
          {
            ++i16;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v17 + 520))(i17, v1696) )
            {
              if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
              {
                v663 = *(_QWORD **)(v17 + 2688);
                v664 = 48;
                v661 = 6LL;
                do
                {
                  v664 -= 8;
                  *v663 = *(_QWORD *)v659;
                  v659 += 8;
                  ++v663;
                  --v661;
                }
                while ( v661 );
                if ( v664 )
                {
                  do
                  {
                    v665 = *v659++;
                    *(_BYTE *)v663 = v665;
                    v663 = (_QWORD *)((char *)v663 + 1);
                    --v664;
                  }
                  while ( v664 );
                  v17 = (unsigned __int64)v1561;
                }
                v659 = *(char **)(v17 + 2688);
              }
              *((_QWORD *)v659 + 3) = i17;
              v666 = *(_QWORD *)(v17 + 1424);
              *(_QWORD *)v666 = v659;
              *(_DWORD *)(v666 + 16) = 48;
              v667 = *(_QWORD *)(v17 + 1424);
              *(_QWORD *)(v667 + 8) = i17;
              *(_DWORD *)(v667 + 20) = 4096;
              if ( !*(_DWORD *)(v17 + 2296) )
              {
                *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v17 + 2312) = v659 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v17 + 2320) = *(int *)v659;
                *(_QWORD *)(v17 + 2328) = 4LL;
                *(_DWORD *)(v17 + 2296) = 1;
                __b8(v17, 0LL, v661, v662);
              }
            }
          }
          __writecr8((unsigned __int8)i7);
          goto LABEL_1085;
        }
        v330 = v329 - 1;
        if ( !v330 )
        {
          v646 = v56;
          v647 = 0LL;
          i16 = 0;
          do
          {
            v1600 = 0;
            while ( 1 )
            {
              do
              {
                v648 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64 *))(v17 + 760))(v50, &v1600, &v1629);
                v54 = 0LL;
                if ( !v648 )
                  goto LABEL_1058;
                v651 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(v17 + 728))(
                         v1629,
                         v649,
                         v650,
                         0LL);
              }
              while ( !v651 );
              ++i16;
              i7 = (*(__int64 (__fastcall **)(__int64))(v17 + 736))(v651);
              v652 = (*(__int64 (__fastcall **)(unsigned __int64, char *))(v17 + 520))(i7, v1695);
              v54 = 0LL;
              if ( !v652 )
                break;
              (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v17 + 744))(v1629, v651, v653, 0LL);
            }
            if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
            {
              v654 = *(_QWORD **)(v17 + 2688);
              v655 = 48;
              v653 = 6LL;
              do
              {
                v655 -= 8;
                *v654 = *(_QWORD *)v646;
                v646 += 8;
                ++v654;
                --v653;
              }
              while ( v653 );
              if ( v655 )
              {
                do
                {
                  v656 = *v646++;
                  *(_BYTE *)v654 = v656;
                  v654 = (_QWORD *)((char *)v654 + 1);
                  --v655;
                }
                while ( v655 );
                v17 = (unsigned __int64)v1561;
              }
              v646 = *(char **)(v17 + 2688);
            }
            *((_QWORD *)v646 + 3) = i7;
            v657 = *(_QWORD *)(v17 + 1424);
            *(_QWORD *)v657 = v646;
            *(_DWORD *)(v657 + 16) = 48;
            v658 = *(_QWORD *)(v17 + 1424);
            *(_QWORD *)(v658 + 8) = i7;
            *(_DWORD *)(v658 + 20) = 4096;
            if ( !*(_DWORD *)(v17 + 2296) )
            {
              *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v17 + 2312) = v646 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v17 + 2320) = *(int *)v646;
              *(_QWORD *)(v17 + 2328) = v647;
              *(_DWORD *)(v17 + 2296) = 1;
              __b8(v17, 0LL, v653, 0LL);
              v54 = 0LL;
            }
LABEL_1058:
            ++v50;
            ++v647;
          }
          while ( v50 < 3 );
          goto LABEL_1085;
        }
        v331 = v330 - 1;
        if ( v331 )
        {
          v332 = v331 - 1;
          if ( v332 )
          {
            if ( v332 != 1 )
            {
              *(_DWORD *)(v17 + 2084) = 0;
LABEL_1088:
              v1561 = (_SLIST_ENTRY *)v17;
              goto LABEL_236;
            }
            v333 = v56;
            v1799 = -1;
            i16 = 0;
            v335 = 0;
            i7 = 0LL;
            do
            {
              v1639 = 0LL;
              while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(v17 + 1072))(
                        v335,
                        &v1639,
                        &v1799,
                        &v1608) )
              {
                ++i16;
                if ( !(*(__int64 (__fastcall **)(__int64, char *))(v17 + 520))(v1608, v1686) )
                {
                  if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
                  {
                    v338 = *(_QWORD **)(v17 + 2688);
                    v339 = 48;
                    v336 = 6LL;
                    do
                    {
                      v339 -= 8;
                      *v338 = *(_QWORD *)v333;
                      v333 += 8;
                      ++v338;
                      --v336;
                    }
                    while ( v336 );
                    if ( v339 )
                    {
                      do
                      {
                        v340 = *v333++;
                        *(_BYTE *)v338 = v340;
                        v338 = (_QWORD *)((char *)v338 + 1);
                        --v339;
                      }
                      while ( v339 );
                      v17 = (unsigned __int64)v1561;
                    }
                    v333 = *(char **)(v17 + 2688);
                  }
                  *((_QWORD *)v333 + 3) = v1608;
                  v341 = *(_QWORD *)(v17 + 1424);
                  *(_QWORD *)v341 = v333;
                  *(_DWORD *)(v341 + 16) = 48;
                  v342 = *(_QWORD *)(v17 + 1424);
                  *(_QWORD *)(v342 + 8) = v1608;
                  *(_DWORD *)(v342 + 20) = 4096;
                  if ( !*(_DWORD *)(v17 + 2296) )
                  {
                    *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v17 + 2312) = v333 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v17 + 2320) = *(int *)v333;
                    *(_QWORD *)(v17 + 2328) = i7;
                    *(_DWORD *)(v17 + 2296) = 1;
                    __b8(v17, 0LL, v336, v337);
                  }
                }
              }
              ++v335;
              ++i7;
            }
            while ( v335 < 3 );
          }
          else
          {
            v343 = *(__int64 (__fastcall **)(_QWORD))(v17 + 792);
            i16 = 0;
            v1580 = 0;
            i7 = v343(0LL);
            if ( i7 )
            {
              v344 = v1560;
              do
              {
                v1640 = 0LL;
                v345 = v344;
                v346 = 1;
                v347 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(v17 + 784))(i7, &v1640);
                if ( v347 )
                {
                  do
                  {
                    ++v346;
                    if ( !(*(__int64 (__fastcall **)(__int64, char *))(v17 + 520))(v347, v1687) )
                    {
                      if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
                      {
                        v349 = *(_QWORD **)(v17 + 2688);
                        v350 = 48;
                        v348 = 6LL;
                        do
                        {
                          v350 -= 8;
                          *v349 = *(_QWORD *)v345;
                          v345 += 8;
                          ++v349;
                          --v348;
                        }
                        while ( v348 );
                        if ( v350 )
                        {
                          do
                          {
                            v351 = *v345++;
                            *(_BYTE *)v349 = v351;
                            v349 = (_QWORD *)((char *)v349 + 1);
                            --v350;
                          }
                          while ( v350 );
                          v17 = (unsigned __int64)v1561;
                        }
                        v345 = *(char **)(v17 + 2688);
                      }
                      *((_QWORD *)v345 + 3) = v347;
                      *((_QWORD *)v345 + 4) = i7;
                      v352 = *(_QWORD *)(v17 + 1424);
                      *(_QWORD *)v352 = v345;
                      *(_DWORD *)(v352 + 16) = 48;
                      v353 = *(_QWORD *)(v17 + 1424);
                      *(_QWORD *)(v353 + 8) = v347;
                      *(_DWORD *)(v353 + 20) = 4096;
                      if ( !*(_DWORD *)(v17 + 2296) )
                      {
                        *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v17 + 2312) = v345 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v17 + 2320) = *(int *)v345;
                        *(_QWORD *)(v17 + 2328) = 6LL;
                        *(_DWORD *)(v17 + 2296) = 1;
                        __b8(v17, 0LL, v348, 1LL);
                      }
                    }
                    v347 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(v17 + 784))(i7, &v1640);
                  }
                  while ( v347 );
                  i16 = v1580;
                  v344 = v1560;
                }
                v354 = *(__int64 (__fastcall **)(_QWORD))(v17 + 792);
                i16 += v346;
                v1580 = i16;
                i7 = v354(i7);
              }
              while ( i7 );
            }
          }
          goto LABEL_1085;
        }
        v355 = (_BYTE *)v17;
        v356 = *(__int64 **)(v17 + 1264);
        i16 = 0;
        v1590 = (_BYTE *)v17;
        v357 = *v356;
        v1581 = *v356;
        if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
          goto LABEL_1085;
        v358 = (int *)v1560;
        v359 = *((_QWORD *)v1560 + 5);
        if ( v359 )
        {
          i16 = 1;
          if ( v357 != v359 )
          {
            *((_QWORD *)v1560 + 3) = v357;
            v360 = *(_QWORD *)(v17 + 1424);
            *(_QWORD *)v360 = v358;
            *(_DWORD *)(v360 + 16) = 48;
            v361 = *(_QWORD *)(v17 + 1424);
            *(_QWORD *)(v361 + 8) = v357;
            *(_DWORD *)(v361 + 20) = 4096;
            if ( !*(_DWORD *)(v17 + 2296) )
            {
              *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v17 + 2312) = (char *)v358 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v17 + 2320) = *v358;
              *(_QWORD *)(v17 + 2328) = 5LL;
              *(_DWORD *)(v17 + 2296) = 1;
              __b8(v17, 0LL, 12LL, v54);
            }
          }
          goto LABEL_1085;
        }
        if ( !v357 )
        {
LABEL_1085:
          v50 = 0;
          *(_DWORD *)(v17 + 2088) += i16 << 12;
          ++*(_DWORD *)(v17 + 2084);
          if ( *(_DWORD *)(v17 + 2088) >= *(_DWORD *)(v17 + 2092) )
            goto LABEL_1088;
          v56 = v1560;
          LODWORD(i7) = 0x40000000;
          continue;
        }
        break;
      }
      v362 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v17 + 512);
      v1580 = 1;
      v1584 = (_BYTE *)v17;
      v363 = v362(v357, v1754);
      v364 = v1755;
      v365 = v1756;
      v366 = v363;
      v1566 = v363;
      v1780 = v1756;
      v1574 = v1756;
      BugCheckParameter2 = v1755;
      if ( !v1755 )
      {
        v367 = -1073741701;
        goto LABEL_1038;
      }
      v368 = 4;
      v1606 = 0LL;
      v369 = &v1607;
      v54 = 0xFFFFFFFFLL;
      v370 = 1LL;
      do
      {
        *(_BYTE *)v369 = 0;
        v369 = (int *)((char *)v369 + 1);
        --v368;
      }
      while ( v368 );
      LODWORD(i7) = 0;
      if ( *(_DWORD *)(v17 + 2060) )
      {
        LODWORD(v370) = v1607;
        LODWORD(v54) = HIDWORD(v1606);
        v371 = v1606;
        while ( 1 )
        {
          v372 = 0;
          v373 = v17;
          if ( *(_QWORD *)(v17 + 2680) )
            v373 = *(_QWORD *)(v17 + 2680);
          v1562 = v373;
          v374 = (int *)(v373 + *(unsigned int *)(v373 + 2056));
          if ( v371 && (unsigned int)v54 <= (unsigned int)i7 )
          {
            v372 = v54;
            v374 = (int *)(v373 + (unsigned int)v370);
          }
          if ( v372 != (_DWORD)i7 )
            break;
LABEL_647:
          LODWORD(v1606) = 1;
          v370 = (unsigned int)((_DWORD)v374 - v373);
          HIDWORD(v1606) = v372;
          v1607 = (_DWORD)v374 - v373;
          v371 = 1;
          v382 = *v374;
          v54 = v372;
          if ( (unsigned int)v382 <= 0x2B )
          {
            v383 = 0x80000001002LL;
            if ( _bittest64(&v383, v382) )
            {
              if ( *((_QWORD *)v374 + 1) == v366 && v374[4] == v365 )
                goto LABEL_657;
            }
          }
          if ( (unsigned int)(v382 - 33) <= 1 && *((_QWORD *)v374 + 4) == v364 )
            goto LABEL_657;
          LODWORD(i7) = i7 + 1;
          if ( (unsigned int)i7 >= *(_DWORD *)(v17 + 2060) )
            goto LABEL_656;
        }
        v375 = (unsigned int)i7 - v372;
        v372 = i7;
        while ( 2 )
        {
          v376 = *v374;
          if ( *v374 > 12 )
          {
            if ( v376 == 28 )
            {
              v381 = *((unsigned __int16 *)v374 + 20);
              goto LABEL_644;
            }
            if ( v376 == 30 )
            {
              v380 = (((v374[9] != 0 ? v374[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                   + 24 * (*((unsigned __int16 *)v374 + 20) + 2);
              goto LABEL_645;
            }
            if ( v376 <= 32 )
              goto LABEL_641;
            if ( v376 <= 34 )
            {
              v380 = 20 * (unsigned int)(((v374[8] & 0xFFF) + (unsigned __int64)(unsigned int)v374[10] + 4095) >> 12)
                   + 48;
              goto LABEL_645;
            }
            if ( v376 != 43 )
              goto LABEL_641;
          }
          else if ( v376 != 12 )
          {
            v377 = v376 - 1;
            if ( v377 )
            {
              v378 = v377 - 6;
              if ( !v378 )
              {
                v380 = (unsigned int)(24 * (v374[6] + 2));
                goto LABEL_645;
              }
              v379 = v378 - 1;
              if ( v379 )
              {
                if ( v379 == 2 )
                {
                  v380 = (unsigned int)(16 * (v374[7] + 3));
                  goto LABEL_645;
                }
LABEL_641:
                v380 = 48LL;
LABEL_645:
                v374 = (int *)((char *)v374 + v380);
                if ( !--v375 )
                {
                  v17 = (unsigned __int64)v1561;
                  LODWORD(v373) = v1562;
                  v365 = v1780;
                  v364 = BugCheckParameter2;
                  v366 = v1566;
                  goto LABEL_647;
                }
                continue;
              }
              v381 = *((unsigned __int16 *)v374 + 16);
LABEL_644:
              v380 = (v381 + 55) & 0xFFFFFFF8;
              goto LABEL_645;
            }
          }
          break;
        }
        v380 = 4 * (v374[4] / 0xCu) + 48;
        goto LABEL_645;
      }
LABEL_656:
      v374 = 0LL;
LABEL_657:
      v357 = v1581;
      v1593 = v374;
      if ( v374 )
      {
        v367 = -1073741554;
        goto LABEL_1038;
      }
      v384 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64))(v17 + 680))(v1581, v370, 0LL, v54);
      v71 = (*(_DWORD *)(v17 + 2448) & 0x40000000) == 0;
      LODWORD(i7) = v384;
      v1571 = v384;
      LODWORD(v1565) = v1574;
      if ( !v71 )
      {
        v386 = sub_140A18FE4(&v1590, v364, 9LL);
        v355 = v1590;
        v367 = v386;
LABEL_1038:
        v1561 = (_SLIST_ENTRY *)v355;
        v644 = &v355[-v17];
        v17 = (unsigned __int64)v355;
        v645 = &v1560[(_QWORD)v644];
        v1560 = &v1560[(_QWORD)v644];
        if ( (int)(v367 + 0x80000000) < 0 || v367 == -1073741554 )
          *((_QWORD *)v645 + 5) = v357;
        i16 = v1580;
        goto LABEL_1085;
      }
      v387 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v17 + 496);
      v1673 = 0LL;
      v1632[4] = 0;
      LOBYTE(v385) = 1;
      v1670 = v387(v364, v385, 0LL, &v1574);
      v388 = v1670 != 0 ? v1574 : 0;
      v1574 = v388;
      v389 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v17 + 496);
      v1632[1] = v388;
      LOBYTE(v388) = 1;
      v390 = v389(v364, v388, 12LL, &v1574);
      v391 = v390;
      v1567 = (unsigned int *)v390;
      v1671 = v390;
      LOBYTE(v391) = 1;
      v1574 &= -(v390 != 0);
      v392 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v17 + 496);
      v1575 = v1574;
      v1632[2] = v1574;
      v1672 = v392(v364, v391, 10LL, &v1574);
      v1574 &= -(v1672 != 0);
      v393 = *(__int64 (__fastcall **)(_QWORD))(v17 + 504);
      v1632[3] = v1574;
      v394 = v393(v364);
      if ( !v394 )
        goto LABEL_662;
      v395 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v17 + 1176))(v364, &v1660);
      v396 = *(unsigned int *)(v17 + 2340);
      v1674 = v395;
      v1632[5] = v1660;
      v1632[0] = *(_DWORD *)(v394 + 84);
      LODWORD(v395) = i7;
      i7 = *(unsigned int *)(v17 + 2020);
      v1669 = v364;
      v397 = (_DWORD)v395 != 0 ? 0xB : 0;
      v398 = i7 + 288;
      v1781 = v397;
      if ( (unsigned int)(i7 + 288) <= *(_DWORD *)(v17 + 2588) )
      {
        v399 = v17;
        v1562 = v17;
        *(_DWORD *)(v17 + 2020) = v398;
      }
      else
      {
        v1562 = sub_140A0BB30(v17, v398, v396);
        v399 = v1562;
        if ( !v1562 )
        {
          v1584 = 0LL;
LABEL_681:
          v367 = -1073741670;
          goto LABEL_1037;
        }
        v400 = *(_DWORD *)(v17 + 2448);
        if ( (v400 & 4) == 0 )
        {
          v401 = *(_DWORD *)(v17 + 2020);
          v402 = *(_QWORD *)(v17 + 1992);
          v403 = (_QWORD *)v17;
          v404 = (v400 & 0x20000000) != 0 ? *(_DWORD *)(v17 + 2340) : 0;
          if ( v401 >= 8 )
          {
            v405 = (unsigned __int64)v401 >> 3;
            do
            {
              *v403 = 0LL;
              v401 -= 8;
              ++v403;
              --v405;
            }
            while ( v405 );
          }
          for ( ; v401; --v401 )
          {
            *(_BYTE *)v403 = 0;
            v403 = (_QWORD *)((char *)v403 + 1);
          }
          v406 = *(_DWORD *)(v399 + 2340);
          *(_DWORD *)(v399 + 2340) = v404;
          if ( v404 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v399 + 872))(v402);
          }
          else
          {
            v407 = 0;
            if ( (*(_DWORD *)(v399 + 2448) & 0x10000000) == 0 )
              v407 = v404;
            if ( v407 )
              (*(void (__fastcall **)(__int64, _QWORD))(v399 + 552))(v402 - 8, *(_QWORD *)(v402 - 8));
            else
              (*(void (__fastcall **)(__int64))(v399 + 256))(v402);
          }
          *(_DWORD *)(v399 + 2340) = v406;
        }
        *(_DWORD *)(v399 + 2448) &= ~4u;
        v397 = v1781;
      }
      v408 = v399 + i7;
      *(_DWORD *)(v399 + 2060) += 6;
      v409 = &v1669;
      v1643 = v399 + i7;
      v1593 = (_DWORD *)(v399 + i7);
      v410 = v1632;
      v1564 = 6LL;
      do
      {
        v411 = *v410;
        v412 = 48;
        v413 = (_QWORD *)*v409;
        v414 = 6LL;
        v1563 = *v410;
        v415 = (_QWORD *)v408;
        do
        {
          *v415 = 0LL;
          v412 -= 8;
          ++v415;
          --v414;
        }
        while ( v414 );
        for ( ; v412; --v412 )
        {
          *(_BYTE *)v415 = 0;
          v415 = (_QWORD *)((char *)v415 + 1);
        }
        *(_DWORD *)v408 = v397;
        *(_QWORD *)(v408 + 8) = v413;
        v416 = v413;
        *(_DWORD *)(v408 + 16) = v411;
        v417 = (const char *)v413;
        *(_DWORD *)(v399 + 2088) += v411;
        v418 = *(_DWORD *)(v399 + 2068);
        v419 = *(_QWORD *)(v399 + 2072);
        if ( v413 < (_QWORD *)((char *)v413 + v411) )
        {
          do
          {
            _mm_prefetch(v417, 0);
            v417 += 64;
          }
          while ( v417 < (const char *)v413 + v411 );
        }
        v420 = *(_QWORD *)(v399 + 2072);
        v421 = (unsigned int)v411 >> 7;
        if ( (unsigned int)v411 >> 7 )
        {
          do
          {
            v422 = 8LL;
            do
            {
              v423 = v420 ^ *v416;
              v424 = v416[1];
              v416 += 2;
              v420 = __ROL8__(__ROL8__(v423, v418) ^ v424, v418);
              --v422;
            }
            while ( v422 );
            v425 = __ROL8__(v419 ^ ((char *)v416 - (char *)v413), 17);
            v1688 = ((v425 ^ v419 ^ (unsigned __int64)((char *)v416 - (char *)v413))
                   * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v418 = ((unsigned __int8)(v425 ^ v419 ^ ((_BYTE)v416 - (_BYTE)v413) ^ v1688) ^ (unsigned __int8)v418) & 0x3F;
            if ( !v418 )
              LOBYTE(v418) = 1;
            --v421;
          }
          while ( v421 );
          v399 = v1562;
          LODWORD(v411) = v1563;
        }
        v426 = v411 & 0x7F;
        if ( v426 >= 8 )
        {
          v427 = (unsigned __int64)(v411 & 0x7F) >> 3;
          do
          {
            v420 = __ROL8__(*v416++ ^ v420, v418);
            v426 -= 8;
            --v427;
          }
          while ( v427 );
        }
        if ( v426 )
        {
          do
          {
            v420 = __ROL8__(*(unsigned __int8 *)v416 ^ v420, v418);
            v416 = (_QWORD *)((char *)v416 + 1);
            --v426;
          }
          while ( v426 );
          v399 = v1562;
        }
        for ( i18 = v420; ; v420 = (unsigned int)i18 ^ (unsigned int)v420 )
        {
          i18 >>= 31;
          if ( !i18 )
            break;
        }
        v397 = v1781;
        LODWORD(v420) = v420 & 0x7FFFFFFF;
        *(_DWORD *)(v408 + 20) = v420;
        ++v410;
        *(_DWORD *)(v399 + 2088) += v411;
        ++v409;
        v408 = v1643 + 48;
        v71 = v1564-- == 1;
        v1643 += 48LL;
      }
      while ( !v71 );
      v429 = v1593;
      i7 = BugCheckParameter2;
      v17 = (unsigned __int64)v1561;
      v430 = v1571;
      *v1593 = 44;
      *((_QWORD *)v429 + 3) = i7;
      if ( (*(_DWORD *)(v399 + 2448) & 0x10200000) != 0 )
      {
LABEL_712:
        if ( !v430 )
          goto LABEL_714;
      }
      else if ( !v430 )
      {
        if ( (*(_DWORD *)(v399 + 2452) & 0x8000) != 0 )
        {
          v429[8] |= 1u;
          if ( (unsigned int)sub_140A0CC50(v399, i7, v420, v1781) )
          {
            v429[8] |= 4u;
            goto LABEL_712;
          }
        }
LABEL_714:
        v355 = (_BYTE *)v399;
        v1584 = (_BYTE *)v399;
        v1590 = (_BYTE *)v399;
        v367 = sub_140A0B098((unsigned int)&v1584, v1566, v1565, i7, v430, 9, (__int64)&v1604, (__int64)&v1626);
        if ( v367 < 0 )
          goto LABEL_1037;
        v355 = v1584;
        v431 = v1626 - v1604;
        v1593 = &v1584[(_QWORD)v1593 - v399];
        v432 = (_QWORD *)(i7 + v1604);
        v1590 = v1584;
        v433 = v1593 + 48;
        v434 = 48;
        v435 = v1593 + 48;
        v436 = 6LL;
        do
        {
          *v435 = 0LL;
          v434 -= 8;
          ++v435;
          --v436;
        }
        while ( v436 );
        for ( ; v434; --v434 )
        {
          *(_BYTE *)v435 = 0;
          v435 = (_QWORD *)((char *)v435 + 1);
        }
        v437 = v432;
        *v433 = v1781;
        v438 = (const char *)v432;
        *((_QWORD *)v433 + 1) = v432;
        v433[4] = v431;
        *((_DWORD *)v355 + 522) += v431;
        v439 = *((_DWORD *)v355 + 517);
        v440 = *((_QWORD *)v355 + 259);
        v441 = (unsigned __int64)v432 + v431;
        if ( (unsigned __int64)v432 < v441 )
        {
          do
          {
            _mm_prefetch(v438, 0);
            v438 += 64;
          }
          while ( (unsigned __int64)v438 < v441 );
        }
        v442 = *((_QWORD *)v355 + 259);
        v443 = v431 >> 7;
        if ( v431 >> 7 )
        {
          do
          {
            v444 = 8LL;
            do
            {
              v445 = v437[1] ^ __ROL8__(*v437 ^ v442, v439);
              v437 += 2;
              v442 = __ROL8__(v445, v439);
              --v444;
            }
            while ( v444 );
            v446 = (__ROL8__(v440 ^ ((char *)v437 - (char *)v432), 17) ^ v440 ^ (unsigned __int64)((char *)v437
                                                                                                 - (char *)v432))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1689 = *((_QWORD *)&v446 + 1);
            v439 = ((unsigned __int8)(v446 ^ BYTE8(v446)) ^ (unsigned __int8)v439) & 0x3F;
            if ( !v439 )
              LOBYTE(v439) = 1;
            --v443;
          }
          while ( v443 );
          v17 = (unsigned __int64)v1561;
          v430 = v1571;
        }
        v54 = v431 & 0x7F;
        if ( (unsigned int)v54 >= 8 )
        {
          v447 = (unsigned __int64)(unsigned int)v54 >> 3;
          do
          {
            v442 = __ROL8__(*v437++ ^ v442, v439);
            v54 = (unsigned int)(v54 - 8);
            --v447;
          }
          while ( v447 );
        }
        if ( (_DWORD)v54 )
        {
          do
          {
            v448 = *(unsigned __int8 *)v437;
            v437 = (_QWORD *)((char *)v437 + 1);
            v442 = __ROL8__(v448 ^ v442, v439);
            v54 = (unsigned int)(v54 - 1);
          }
          while ( (_DWORD)v54 );
          v17 = (unsigned __int64)v1561;
        }
        for ( i19 = v442; ; v442 = (unsigned int)i19 ^ (unsigned int)v442 )
        {
          i19 >>= 31;
          if ( !i19 )
            break;
        }
        LODWORD(v442) = v442 & 0x7FFFFFFF;
        v433[5] = v442;
        v450 = v1593;
        v1593[60] = 48;
        if ( v450[64] )
        {
          v442 = 4294967294LL;
          v450[66] = v450[66] & 0xFFFFFFFE | (v430 != 0);
        }
        v1590 = v355;
        v1610 = v1593 + 24;
        LODWORD(i7) = (v430 != 0) + 13;
        if ( v1593 == (_DWORD *)-96LL )
        {
          v451 = *((unsigned int *)v355 + 505);
          v452 = v451 + 48;
          if ( (unsigned int)(v451 + 48) <= *((_DWORD *)v355 + 647) )
          {
            v453 = (__int64)v355;
            *((_DWORD *)v355 + 505) = v452;
          }
          else
          {
            v453 = sub_140A0BB30(v355, v452, *((unsigned int *)v355 + 585));
            if ( !v453 )
            {
              v1584 = 0LL;
              goto LABEL_681;
            }
            v454 = *((_DWORD *)v355 + 612);
            if ( (v454 & 4) == 0 )
            {
              v455 = *((_DWORD *)v355 + 505);
              v456 = *((_QWORD *)v355 + 249);
              v457 = (v454 & 0x20000000) != 0 ? *((_DWORD *)v355 + 585) : 0;
              if ( v455 >= 8 )
              {
                v458 = (unsigned __int64)v455 >> 3;
                do
                {
                  *(_QWORD *)v355 = 0LL;
                  v455 -= 8;
                  v355 += 8;
                  --v458;
                }
                while ( v458 );
              }
              for ( ; v455; --v455 )
                *v355++ = 0;
              v459 = *(_DWORD *)(v453 + 2340);
              *(_DWORD *)(v453 + 2340) = v457;
              if ( v457 == 3 )
              {
                (*(void (__fastcall **)(__int64, __int64))(v453 + 872))(v456, 1LL);
              }
              else
              {
                v460 = 0;
                if ( (*(_DWORD *)(v453 + 2448) & 0x10000000) == 0 )
                  v460 = v457;
                if ( v460 )
                  (*(void (__fastcall **)(__int64, _QWORD))(v453 + 552))(v456 - 8, *(_QWORD *)(v456 - 8));
                else
                  (*(void (__fastcall **)(__int64, __int64))(v453 + 256))(v456, 1LL);
              }
              *(_DWORD *)(v453 + 2340) = v459;
            }
            *(_DWORD *)(v453 + 2448) &= ~4u;
          }
          ++*(_DWORD *)(v453 + 2060);
          v461 = v453 + v451;
          v1661 = (_DWORD *)v461;
          v462 = (_QWORD *)v461;
          v463 = 48;
          v464 = 6LL;
          do
          {
            *v462 = 0LL;
            v463 -= 8;
            ++v462;
            --v464;
          }
          while ( v464 );
          for ( ; v463; --v463 )
          {
            *(_BYTE *)v462 = 0;
            v462 = (_QWORD *)((char *)v462 + 1);
          }
          v465 = (const char *)v1567;
          *(_DWORD *)v461 = i7;
          v54 = (unsigned __int64)v465;
          i7 = v1575;
          *(_QWORD *)(v461 + 8) = v465;
          *(_DWORD *)(v461 + 16) = i7;
          *(_DWORD *)(v453 + 2088) += i7;
          v466 = *(_DWORD *)(v453 + 2068);
          v467 = *(_QWORD *)(v453 + 2072);
          if ( v465 < &v465[i7] )
          {
            v468 = v465;
            do
            {
              _mm_prefetch(v468, 0);
              v468 += 64;
            }
            while ( v468 < &v465[i7] );
          }
          v442 = *(_QWORD *)(v453 + 2072);
          v469 = (unsigned int)i7 >> 7;
          if ( (unsigned int)i7 >> 7 )
          {
            do
            {
              v470 = 8LL;
              do
              {
                v471 = v442 ^ *(_QWORD *)v54;
                v472 = *(_QWORD *)(v54 + 8);
                v54 += 16LL;
                v442 = __ROL8__(__ROL8__(v471, v466) ^ v472, v466);
                --v470;
              }
              while ( v470 );
              v473 = __ROL8__(v467 ^ (v54 - (_QWORD)v465), 17) ^ v467 ^ (v54 - (_QWORD)v465);
              v1690 = (v473 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v466 = ((unsigned __int8)(v473 ^ v1690) ^ (unsigned __int8)v466) & 0x3F;
              if ( !v466 )
                LOBYTE(v466) = 1;
              --v469;
            }
            while ( v469 );
            v17 = (unsigned __int64)v1561;
            v430 = v1571;
          }
          v474 = i7 & 0x7F;
          if ( v474 >= 8 )
          {
            v475 = (i7 & 0x7F) >> 3;
            do
            {
              v442 = __ROL8__(*(_QWORD *)v54 ^ v442, v466);
              v54 += 8LL;
              v474 -= 8;
              --v475;
            }
            while ( v475 );
          }
          if ( v474 )
          {
            do
            {
              v476 = *(unsigned __int8 *)v54++;
              v442 = __ROL8__(v476 ^ v442, v466);
              --v474;
            }
            while ( v474 );
            v17 = (unsigned __int64)v1561;
          }
          for ( i20 = v442; ; v442 = (unsigned int)i20 ^ (unsigned int)v442 )
          {
            i20 >>= 31;
            if ( !i20 )
              break;
          }
          LODWORD(v442) = v442 & 0x7FFFFFFF;
          v355 = (_BYTE *)v453;
          *(_DWORD *)(v461 + 20) = v442;
          v1610 = v1661;
          *(_DWORD *)(v453 + 2088) += i7;
        }
        else
        {
          v465 = (const char *)v1567;
          v1593[24] = i7;
          LODWORD(i7) = v1575;
        }
        if ( (*((_DWORD *)v355 + 612) & 0x40000000) != 0 && (_DWORD)i7 )
          sub_1403E604C(v355, v465, (unsigned int)i7, v1610 + 7);
        v1590 = v355;
        v478 = 4294967294LL;
        v1610[6] = 0;
        v1610[6] |= 1u;
        v479 = v1593;
        v1593[36] = 35;
        v479[46] = v479[46] & 0xFFFFFFFE | (v430 != 0);
        if ( v479[40] >= 0x94u )
        {
          v480 = BugCheckParameter2;
          i7 = *((_QWORD *)v479 + 19);
          v481 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned __int64))v355 + 63))(
                   BugCheckParameter2,
                   4294967294LL,
                   v442,
                   v54);
          if ( !v481 )
          {
            v1584 = 0LL;
            goto LABEL_681;
          }
          v482 = *(unsigned int *)(v481 + 80);
          v479[46] |= 2u;
          v483 = v480 + v482;
          v484 = *(_QWORD **)(i7 + 112);
          if ( (unsigned __int64)v484 >= v480 && (unsigned __int64)v484 < v483 )
          {
            *((_QWORD *)v479 + 21) = *v484;
            v479[46] |= 4u;
          }
          v485 = *(_QWORD **)(i7 + 120);
          if ( (unsigned __int64)v485 >= v480 && (unsigned __int64)v485 < v483 )
          {
            *((_QWORD *)v479 + 22) = *v485;
            v479[46] |= 8u;
          }
        }
        v71 = (*((_DWORD *)v355 + 612) & 0x400000) == 0;
        v1584 = v355;
        if ( v71 )
          goto LABEL_1036;
        v486 = BugCheckParameter2;
        v487 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned __int64))v355 + 63))(
                 BugCheckParameter2,
                 v478,
                 v442,
                 v54);
        v1573 = (char *)v487;
        LODWORD(i7) = v487;
        if ( !v487 )
          goto LABEL_662;
        v488 = *(_WORD *)(v487 + 6);
        v489 = 0LL;
        v1782 = v488;
        v54 = (unsigned int)v1565 / 0xCuLL;
        v1567 = (unsigned int *)v54;
        if ( !v488 )
        {
          if ( (*((_DWORD *)v355 + 612) & 0x200000) == 0 )
          {
            v1622 = -805294751;
            KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v486, 0LL, 0LL);
          }
          if ( !*((_DWORD *)v355 + 574) )
          {
            *((_QWORD *)v355 + 288) = v355 - 0x5C5FC0A76E374B18LL;
            *((_QWORD *)v355 + 289) = 0LL;
            *((_QWORD *)v355 + 290) = 271LL;
            *((_QWORD *)v355 + 291) = v486;
            *((_DWORD *)v355 + 574) = 1;
            goto LABEL_802;
          }
          goto LABEL_662;
        }
        v490 = 0;
        v491 = v488;
        v492 = (unsigned int *)v1566;
        LODWORD(v1572) = 0;
        v1563 = v488;
        v1576 = 12LL * (unsigned int)v54;
        v1583 = (unsigned int *)(v1566 + v1576);
        v1564 = *(unsigned __int16 *)(v487 + 20) + v487 + 24;
        v493 = v1564;
        v494 = (_DWORD *)v1564;
        v1562 = v1564;
        v54 = 1LL;
        do
        {
          v495 = v494[4];
          v489 = (unsigned int)v494[3];
          if ( v495 <= v494[2] )
            v495 = v494[2];
          v1575 = v494[3];
          v496 = v489 + v495;
          if ( v490 )
          {
            if ( v496 < *(_DWORD *)(v493 + 40LL * (v490 - 1) + 12) )
            {
              if ( (*((_DWORD *)v355 + 612) & 0x200000) == 0 )
              {
                v1621 = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v486, 1uLL, 0LL);
              }
              if ( !*((_DWORD *)v355 + 574) )
              {
                *((_QWORD *)v355 + 288) = v355 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v355 + 289) = 0LL;
                *((_QWORD *)v355 + 290) = 271LL;
                *((_QWORD *)v355 + 291) = v486;
                *((_DWORD *)v355 + 574) = 1;
                goto LABEL_802;
              }
LABEL_662:
              v367 = -1073741701;
              goto LABEL_1037;
            }
            v490 = v1572;
          }
          if ( v492 != v1583 )
          {
            do
            {
              v497 = v492[1];
              if ( *v492 >= v496 || v497 <= (unsigned int)v489 )
                break;
              if ( *v492 < (unsigned int)v489 || v497 > v496 )
              {
                if ( (*((_DWORD *)v355 + 612) & 0x200000) == 0 )
                {
                  v1618 = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v486, 2uLL, 0LL);
                }
LABEL_840:
                if ( !*((_DWORD *)v355 + 574) )
                {
                  *((_QWORD *)v355 + 288) = v355 - 0x5C5FC0A76E374B18LL;
                  *((_QWORD *)v355 + 289) = 0LL;
                  *((_QWORD *)v355 + 290) = 271LL;
                  *((_QWORD *)v355 + 291) = v486;
                  *((_DWORD *)v355 + 574) = 1;
LABEL_802:
                  __b8(v355, 0LL, v489, v54);
                }
                goto LABEL_662;
              }
              v498 = v492[2];
              v1691 = v492;
              if ( (v498 & 1) != 0 || (*(_BYTE *)(v498 + v486) & 0x20) != 0 )
              {
                v499 = v494[4];
                v500 = v494[3];
                if ( v499 <= v494[2] )
                  v499 = v494[2];
                LODWORD(i7) = v500 + v499;
                v501 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, __int64, unsigned __int64))v355
                                        + 131))(
                                         v492,
                                         v486,
                                         v489,
                                         v54);
                v503 = v501;
                if ( *v501 < v500 || v501[1] > (unsigned int)i7 )
                {
                  v504 = BugCheckParameter2;
                  if ( (*((_DWORD *)v355 + 612) & 0x200000) == 0 )
                  {
                    v1619 = -805294751;
                    KeBugCheckEx(
                      __ROR4__(-805306349, 92),
                      0xAuLL,
                      BugCheckParameter2,
                      ((_DWORD)v501 - (_DWORD)BugCheckParameter2) | 0x80000000,
                      0LL);
                  }
                  if ( !*((_DWORD *)v355 + 574) )
                  {
                    *((_QWORD *)v355 + 288) = v355 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v355 + 289) = 0LL;
                    *((_QWORD *)v355 + 290) = 271LL;
                    *((_QWORD *)v355 + 291) = v504;
                    *((_DWORD *)v355 + 574) = 1;
                    __b8(v355, 0LL, v504, v502);
                  }
                }
                v505 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v355 + 132))(
                                         v503,
                                         BugCheckParameter2,
                                         BugCheckParameter2 + *v503);
                if ( *v505 >= v500 && v505[1] <= (unsigned int)i7 )
                {
                  v486 = BugCheckParameter2;
                }
                else
                {
                  v486 = BugCheckParameter2;
                  v507 = ((_DWORD)v505 - BugCheckParameter2) | 0x80000000;
                  if ( (*((_DWORD *)v355 + 612) & 0x200000) == 0 )
                  {
                    v1620 = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, v507, 0LL);
                  }
                  if ( !*((_DWORD *)v355 + 574) )
                  {
                    *((_QWORD *)v355 + 288) = v355 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v355 + 289) = 0LL;
                    *((_QWORD *)v355 + 290) = 271LL;
                    *((_QWORD *)v355 + 291) = v486;
                    *((_DWORD *)v355 + 574) = 1;
                    __b8(v355, 0LL, v506, v54);
                  }
                }
                v494 = (_DWORD *)v1562;
                v489 = v1575;
              }
              v492 += 3;
            }
            while ( v492 != v1583 );
            v490 = v1572;
            v54 = 1LL;
            v491 = v1563;
            v493 = v1564;
          }
          ++v490;
          v494 += 10;
          LODWORD(v1572) = v490;
          v1562 = (__int64)v494;
        }
        while ( v490 < v491 );
        v54 = (unsigned __int64)v1567;
        v489 = 0LL;
        i7 = (unsigned __int64)v1573;
        v508 = v1576;
        if ( v492 != v1583 )
        {
          if ( (*((_DWORD *)v355 + 612) & 0x200000) == 0 )
          {
            v1617 = -805294751;
            KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v486, 3uLL, 0LL);
          }
          goto LABEL_840;
        }
        if ( (_DWORD)v1567 )
          v509 = ((_DWORD)v1567 + 6) & 0xFFFFFFF8;
        else
          v509 = 0;
        v510 = *((unsigned int *)v355 + 505);
        v511 = v510 + v509 + 24 * (v491 + 2);
        if ( v511 <= *((_DWORD *)v355 + 647) )
        {
          v512 = v355;
          v1572 = (__int64)v355;
          *((_DWORD *)v355 + 505) = v511;
          goto LABEL_863;
        }
        v1572 = sub_140A0BB30(v355, v511, *((unsigned int *)v355 + 585));
        v512 = (_BYTE *)v1572;
        if ( !v1572 )
          goto LABEL_681;
        v513 = *((_DWORD *)v355 + 612);
        if ( (v513 & 4) == 0 )
        {
          v514 = *((_DWORD *)v355 + 505);
          v515 = *((_QWORD *)v355 + 249);
          v516 = (v513 & 0x20000000) != 0 ? *((_DWORD *)v355 + 585) : 0;
          if ( v514 >= 8 )
          {
            v517 = (unsigned __int64)v514 >> 3;
            do
            {
              *(_QWORD *)v355 = 0LL;
              v514 -= 8;
              v355 += 8;
              --v517;
            }
            while ( v517 );
          }
          for ( ; v514; --v514 )
            *v355++ = 0;
          v518 = *((_DWORD *)v512 + 585);
          *((_DWORD *)v512 + 585) = v516;
          if ( v516 == 3 )
          {
            (*((void (__fastcall **)(__int64, __int64))v512 + 109))(v515, 1LL);
          }
          else
          {
            v519 = 0;
            if ( (*((_DWORD *)v512 + 612) & 0x10000000) == 0 )
              v519 = v516;
            if ( v519 )
              (*((void (__fastcall **)(__int64, _QWORD))v512 + 69))(v515 - 8, *(_QWORD *)(v515 - 8));
            else
              (*((void (__fastcall **)(__int64, __int64))v512 + 32))(v515, 1LL);
          }
          *((_DWORD *)v512 + 585) = v518;
        }
        *((_DWORD *)v512 + 612) &= ~4u;
        LODWORD(v54) = (_DWORD)v1567;
        v491 = v1563;
LABEL_863:
        v520 = &v512[v510];
        ++*((_DWORD *)v512 + 515);
        v1654 = &v512[v510];
        v521 = 48;
        v522 = &v512[v510];
        v523 = 6LL;
        do
        {
          *v522 = 0LL;
          v521 -= 8;
          ++v522;
          --v523;
        }
        while ( v523 );
        for ( ; v521; --v521 )
        {
          *(_BYTE *)v522 = 0;
          v522 = (_QWORD *)((char *)v522 + 1);
        }
        v524 = v1566;
        *(_DWORD *)v520 = 30;
        *((_QWORD *)v520 + 1) = v524;
        *((_DWORD *)v520 + 4) = 0;
        v525 = *((_QWORD *)v512 + 259);
        for ( i21 = v525; ; LODWORD(v525) = i21 ^ v525 )
        {
          i21 >>= 31;
          if ( !i21 )
            break;
        }
        *((_DWORD *)v520 + 5) = v525 & 0x7FFFFFFF;
        v355 = v512;
        v1603 = v1654;
        v1584 = v512;
        *((_QWORD *)v1654 + 3) = BugCheckParameter2;
        *((_DWORD *)v1603 + 8) = *(_DWORD *)(i7 + 80);
        *((_DWORD *)v1603 + 9) = v1565;
        *((_WORD *)v1603 + 20) = v1782;
        v527 = 0;
        *((_WORD *)v1603 + 21) = *((_WORD *)v1603 + 21) & 0xFFFE | (v1571 != 0);
        v1573 = v1603 + 48;
        if ( (_DWORD)v54 )
          i7 = (unsigned __int64)&v1603[(((unsigned int)(v54 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
        else
          i7 = (unsigned __int64)(v1603 + 48);
        v528 = *((unsigned __int16 *)v1603 + 20);
        v71 = (_DWORD)v54 == 0;
        v54 = v1566;
        v1567 = (unsigned int *)i7;
        v529 = i7 + 24 * v528;
        v530 = 12LL;
        if ( v71 )
          v530 = v508;
        v1576 = i7 + 24 * v528;
        v1562 = v1566 + v530;
        if ( v491 )
        {
          v531 = v491;
          v532 = (_DWORD *)(i7 + 8);
          do
          {
            v533 = 2LL;
            do
            {
              *(v532 - 2) = 0;
              *(v532 - 1) = 0;
              *v532 = 0x80000000;
              v532 += 3;
              --v533;
            }
            while ( v533 );
            --v531;
          }
          while ( v531 );
          v17 = (unsigned __int64)v1561;
        }
        if ( i7 != v529 )
        {
          v534 = (unsigned __int8 *)v1564;
          while ( 1 )
          {
            v535 = 0;
            if ( (*((_DWORD *)v534 + 9) & 0x2000000) != 0
              || (v536 = *(_DWORD *)v534, *(_DWORD *)v534 == 1414090313) && *((_DWORD *)v534 + 1) == 1195525195
              || v536 == 1162297680 && ((v537 = *((_WORD *)v534 + 2), v537 == 30839) || v537 == 29303 || v537 == 30583)
              || v536 == 1095914053 && *((_WORD *)v534 + 2) == 16724 )
            {
              v535 = 1;
            }
            else
            {
              v538 = 7;
              v539 = (unsigned __int8 *)*((_QWORD *)v512 + 294);
              v540 = v534;
              v1666 = (__int64 *)*((_QWORD *)v512 + 295);
              v1667 = (unsigned __int8 *)*((_QWORD *)v512 + 296);
              v1668 = (unsigned __int8 *)*((_QWORD *)v512 + 297);
              v1665 = v539;
              while ( 1 )
              {
                v541 = *v540++;
                v542 = *v539++;
                if ( v541 != v542 )
                  break;
                if ( !--v538 )
                  goto LABEL_910;
              }
              v543 = v1666;
              v544 = 8;
              v545 = (__int64 *)v534;
              do
              {
                v546 = *v545++;
                v547 = *v543++;
                if ( v546 != v547 )
                  goto LABEL_903;
                v544 -= 8;
              }
              while ( v544 >= 8 );
              if ( v544 )
              {
                while ( 1 )
                {
                  v548 = *(unsigned __int8 *)v545;
                  v545 = (__int64 *)((char *)v545 + 1);
                  v549 = *(unsigned __int8 *)v543;
                  v543 = (__int64 *)((char *)v543 + 1);
                  if ( v548 != v549 )
                    break;
                  if ( !--v544 )
                    goto LABEL_910;
                }
LABEL_903:
                v550 = v1667;
                v551 = 4;
                v552 = v534;
                while ( 1 )
                {
                  v553 = *v552++;
                  v554 = *v550++;
                  if ( v553 != v554 )
                    break;
                  if ( !--v551 )
                    goto LABEL_910;
                }
                v555 = v1668;
                v556 = 6;
                v557 = v534;
                while ( 1 )
                {
                  v558 = *v557++;
                  v559 = *v555++;
                  if ( v558 != v559 )
                    break;
                  if ( !--v556 )
                    goto LABEL_910;
                }
              }
              else
              {
LABEL_910:
                v535 = 1;
              }
              v54 = v1566;
            }
            v560 = *((_DWORD *)v534 + 9);
            if ( v560 < 0 )
              v535 = 1;
            v1783 = v535;
            if ( v535 && *(_DWORD *)v534 == 1414090313 && *((_DWORD *)v534 + 1) == 1195525195 )
            {
              if ( (*((_DWORD *)v512 + 613) & 0x2000) != 0 )
                v535 = 0;
              v1783 = v535;
            }
            v561 = BugCheckParameter2;
            if ( (*((_DWORD *)v512 + 613) & 0x4000) != 0
              && (v560 & 0x20000000) != 0
              && (BugCheckParameter2 == *((_QWORD *)v512 + 189) || BugCheckParameter2 == *((_QWORD *)v512 + 190)) )
            {
              v535 = 1;
              v1783 = 1;
            }
            v562 = *((_DWORD *)v534 + 4);
            v563 = *((_DWORD *)v534 + 3);
            v564 = v1583;
            if ( v562 <= *((_DWORD *)v534 + 2) )
              v562 = *((_DWORD *)v534 + 2);
            v565 = v563 + v562;
            v1563 = *((_DWORD *)v534 + 3);
            v566 = 0;
            v1571 = v565;
            if ( (unsigned int *)v54 == v1583 )
            {
              v567 = 0;
            }
            else
            {
              v527 = *(_DWORD *)v54;
              v567 = *(_DWORD *)(v54 + 4);
            }
            v1575 = v567;
            v568 = v563;
            LODWORD(v1565) = v527;
            if ( (unsigned int *)v54 != v1583 && v527 > v563 && v567 <= v565 && !v535 )
            {
              *(_DWORD *)i7 = v563;
              v569 = &v1669;
              *(_DWORD *)(i7 + 4) = v527;
              v570 = *(unsigned int *)i7;
              v568 = v527;
              v571 = v527 - v570;
              v572 = v561 + v570;
              v573 = v561 + v570 + v527 - (unsigned int)v570;
              v574 = v1632;
              do
              {
                if ( v572 < *v569 + *v574 && v573 > *v569 )
                {
                  v565 = v1571;
                  v564 = v1583;
                  v54 = v1566;
                  goto LABEL_959;
                }
                ++v566;
                ++v569;
                ++v574;
              }
              while ( v566 < 6 );
              v575 = v1572;
              v576 = (_QWORD *)v572;
              *(_DWORD *)(v1572 + 2088) += v571;
              v577 = *(_DWORD *)(v575 + 2068);
              v578 = *(_QWORD *)(v575 + 2072);
              v579 = (const char *)v572;
              if ( v572 < v573 )
              {
                do
                {
                  _mm_prefetch(v579, 0);
                  v579 += 64;
                }
                while ( (unsigned __int64)v579 < v573 );
              }
              v580 = v571 >> 7;
              v581 = v578;
              if ( v571 >> 7 )
              {
                do
                {
                  v582 = 8LL;
                  do
                  {
                    v583 = v576[1] ^ __ROL8__(*v576 ^ v581, v577);
                    v576 += 2;
                    v581 = __ROL8__(v583, v577);
                    --v582;
                  }
                  while ( v582 );
                  v584 = (__ROL8__(v578 ^ ((unsigned __int64)v576 - v572), 17) ^ v578 ^ ((unsigned __int64)v576 - v572))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v1692 = *((_QWORD *)&v584 + 1);
                  v577 = ((unsigned __int8)v584 ^ (unsigned __int8)(BYTE8(v584) ^ v577)) & 0x3F;
                  if ( !v577 )
                    LOBYTE(v577) = 1;
                  --v580;
                }
                while ( v580 );
                v17 = (unsigned __int64)v1561;
                v527 = v1565;
                v567 = v1575;
              }
              v585 = v571 & 0x7F;
              if ( v585 >= 8 )
              {
                v586 = (unsigned __int64)v585 >> 3;
                do
                {
                  v581 = __ROL8__(*v576++ ^ v581, v577);
                  v585 -= 8;
                  --v586;
                }
                while ( v586 );
              }
              if ( v585 )
              {
                do
                {
                  v587 = *(unsigned __int8 *)v576;
                  v576 = (_QWORD *)((char *)v576 + 1);
                  v581 = __ROL8__(v587 ^ v581, v577);
                  --v585;
                }
                while ( v585 );
                v17 = (unsigned __int64)v1561;
              }
              for ( i22 = v581; ; LODWORD(v581) = i22 ^ v581 )
              {
                i22 >>= 31;
                if ( !i22 )
                  break;
              }
              v565 = v1571;
              v563 = v1563;
              v54 = v1566;
              v1567[2] = v581 & 0x7FFFFFFF;
              v564 = v1583;
            }
LABEL_959:
            if ( v527 < v563 )
            {
              v590 = v1783;
            }
            else
            {
              v589 = v567 <= v565;
              v590 = v1783;
              if ( v589 && (unsigned int *)v54 != v564 )
              {
                v591 = (unsigned int *)v1562;
LABEL_997:
                v618 = v591[1];
                while ( v618 <= v565 && v591 != v564 )
                {
                  if ( v590 )
                  {
                    v592 = 0x80;
                  }
                  else
                  {
                    v593 = *(unsigned int *)(v54 + 4);
                    v568 = *v591;
                    v594 = v1572;
                    if ( *v591 < (unsigned int)v593 )
                    {
                      if ( (*(_DWORD *)(v1572 + 2448) & 0x200000) == 0 )
                      {
                        v1625 = -805294751;
                        KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, 6uLL, 0LL);
                      }
                      if ( !*(_DWORD *)(v1572 + 2296) )
                      {
                        v595 = v1572;
                        *(_QWORD *)(v1572 + 2304) = v1572 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v594 + 2312) = 0LL;
                        v596 = BugCheckParameter2;
                        *(_QWORD *)(v594 + 2320) = 271LL;
                        *(_QWORD *)(v594 + 2328) = v596;
                        *(_DWORD *)(v594 + 2296) = 1;
                        __b8(v595, 0LL, v564, v54);
                      }
                    }
                    v597 = &v1669;
                    v598 = v568 - v593;
                    v599 = BugCheckParameter2 + v593;
                    v600 = 0;
                    v601 = v1632;
                    v602 = BugCheckParameter2 + v593 + v568 - (unsigned int)v593;
                    do
                    {
                      if ( v599 < *v597 + *v601 && v602 > *v597 )
                        goto LABEL_994;
                      ++v600;
                      ++v597;
                      ++v601;
                    }
                    while ( v600 < 6 );
                    if ( v598 < 4 )
                    {
LABEL_994:
                      v592 = 0x80;
                    }
                    else
                    {
                      *(_DWORD *)(v594 + 2088) += v598;
                      v603 = (_QWORD *)v599;
                      v604 = *(_DWORD *)(v594 + 2068);
                      v605 = *(_QWORD *)(v1572 + 2072);
                      v606 = (const char *)v599;
                      if ( v599 < v602 )
                      {
                        do
                        {
                          _mm_prefetch(v606, 0);
                          v606 += 64;
                        }
                        while ( (unsigned __int64)v606 < v602 );
                      }
                      v607 = *(_QWORD *)(v1572 + 2072);
                      v608 = v598 >> 7;
                      if ( v598 >> 7 )
                      {
                        do
                        {
                          v609 = 8LL;
                          do
                          {
                            v610 = v607 ^ *v603;
                            v611 = v603[1];
                            v603 += 2;
                            v607 = __ROL8__(__ROL8__(v610, v604) ^ v611, v604);
                            --v609;
                          }
                          while ( v609 );
                          v612 = __ROL8__(v605 ^ ((unsigned __int64)v603 - v599), 17) ^ v605 ^ ((unsigned __int64)v603
                                                                                              - v599);
                          v1693 = (v612 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v604 = ((unsigned __int8)(v612 ^ v1693) ^ (unsigned __int8)v604) & 0x3F;
                          if ( !v604 )
                            LOBYTE(v604) = 1;
                          --v608;
                        }
                        while ( v608 );
                        v17 = (unsigned __int64)v1561;
                        v590 = v1783;
                      }
                      v613 = v598 & 0x7F;
                      if ( v613 >= 8 )
                      {
                        v614 = (unsigned __int64)v613 >> 3;
                        do
                        {
                          v607 = __ROL8__(*v603++ ^ v607, v604);
                          v613 -= 8;
                          --v614;
                        }
                        while ( v614 );
                      }
                      if ( v613 )
                      {
                        do
                        {
                          v615 = *(unsigned __int8 *)v603;
                          v603 = (_QWORD *)((char *)v603 + 1);
                          v607 = __ROL8__(v615 ^ v607, v604);
                          --v613;
                        }
                        while ( v613 );
                        v590 = v1783;
                      }
                      for ( i23 = v607; ; LOBYTE(v607) = i23 ^ v607 )
                      {
                        i23 >>= 7;
                        if ( !i23 )
                          break;
                      }
                      v592 = v607 & 0x7F;
                    }
                    v54 = v1566;
                    v565 = v1571;
                  }
                  v617 = v1573++;
                  *v617 = v592;
                  v54 += 12LL;
                  v591 = (unsigned int *)(v1562 + 12);
                  v1566 = v54;
                  v564 = v1583;
                  v1562 = (__int64)v591;
                  if ( v591 != v1583 )
                    goto LABEL_997;
                }
              }
            }
            v619 = v1567;
            v527 = 0;
            if ( v590 || v568 == v565 )
              goto LABEL_1027;
            v620 = BugCheckParameter2;
            v621 = v1632;
            v1567[3] = v568;
            v622 = &v1669;
            v619[4] = v565;
            v623 = v619[3];
            v624 = v565 - v623;
            v625 = v623 + v620;
            v626 = 0;
            v627 = v625 + v565 - (unsigned int)v623;
            do
            {
              if ( v625 < *v622 + *v621 && v627 > *v622 )
              {
                v54 = v1566;
LABEL_1027:
                v512 = (_BYTE *)v1572;
                goto LABEL_1028;
              }
              ++v626;
              ++v622;
              ++v621;
            }
            while ( v626 < 6 );
            v512 = (_BYTE *)v1572;
            v628 = (_QWORD *)v625;
            v629 = (const char *)v625;
            *(_DWORD *)(v1572 + 2088) += v624;
            v630 = *((_DWORD *)v512 + 517);
            v631 = *((_QWORD *)v512 + 259);
            if ( v625 < v627 )
            {
              do
              {
                _mm_prefetch(v629, 0);
                v629 += 64;
              }
              while ( (unsigned __int64)v629 < v627 );
            }
            v632 = *((_QWORD *)v512 + 259);
            v633 = v624 >> 7;
            if ( v624 >> 7 )
            {
              do
              {
                v634 = 8LL;
                do
                {
                  v635 = v632 ^ *v628;
                  v636 = v628[1];
                  v628 += 2;
                  v632 = __ROL8__(__ROL8__(v635, v630) ^ v636, v630);
                  --v634;
                }
                while ( v634 );
                v637 = __ROL8__(v631 ^ ((unsigned __int64)v628 - v625), 17) ^ v631 ^ ((unsigned __int64)v628 - v625);
                v1694 = (v637 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v630 = ((unsigned __int8)(v637 ^ v1694) ^ (unsigned __int8)v630) & 0x3F;
                if ( !v630 )
                  LOBYTE(v630) = 1;
                --v633;
              }
              while ( v633 );
              v17 = (unsigned __int64)v1561;
            }
            v638 = v624 & 0x7F;
            if ( v638 >= 8 )
            {
              v639 = (unsigned __int64)v638 >> 3;
              do
              {
                v632 = __ROL8__(*v628++ ^ v632, v630);
                v638 -= 8;
                --v639;
              }
              while ( v639 );
            }
            if ( v638 )
            {
              do
              {
                v640 = *(unsigned __int8 *)v628;
                v628 = (_QWORD *)((char *)v628 + 1);
                v632 = __ROL8__(v640 ^ v632, v630);
                --v638;
              }
              while ( v638 );
              v17 = (unsigned __int64)v1561;
            }
            for ( i24 = v632; ; LODWORD(v632) = i24 ^ v632 )
            {
              i24 >>= 31;
              if ( !i24 )
                break;
            }
            v619 = v1567;
            v54 = v1566;
            v1567[5] = v632 & 0x7FFFFFFF;
LABEL_1028:
            if ( (unsigned int *)v54 != v1583 && *(_DWORD *)v54 >= v1563 && *(_DWORD *)(v54 + 4) <= v1571 )
            {
              v642 = v1562;
              if ( (unsigned int *)v1562 != v1583 )
              {
                v643 = v1573;
                *v1573 = 0x80;
                v1573 = v643 + 1;
                v1562 = v642 + 12;
              }
              v54 += 12LL;
              v1566 = v54;
            }
            i7 = (unsigned __int64)(v619 + 6);
            v534 = (unsigned __int8 *)(v1564 + 40);
            v1567 = (unsigned int *)i7;
            v1564 += 40LL;
            if ( i7 == v1576 )
            {
              v355 = v1584;
              break;
            }
          }
        }
LABEL_1036:
        v1590 = v355;
        v367 = 0;
LABEL_1037:
        v357 = v1581;
        goto LABEL_1038;
      }
      v429[8] |= 2u;
      goto LABEL_714;
    }
    switch ( v77 )
    {
      case 12:
        if ( !*(_QWORD *)(v17 + 2432) )
          goto LABEL_1735;
        v1264 = *(_DWORD *)(v17 + 2452);
        LOBYTE(v1265) = v1264;
        if ( *(_DWORD *)(v17 + 2084) )
        {
          if ( (((unsigned __int8)v1264 ^ (unsigned __int8)(v1264 >> 3)) & 4) != 0 )
            goto LABEL_1735;
        }
        else
        {
          v1265 = v1264 ^ ((unsigned __int8)v1264 ^ (unsigned __int8)(8 * v1264)) & 0x20;
          *(_DWORD *)(v17 + 2452) = v1265;
        }
        if ( (v1265 & 4) != 0 )
        {
          i7 = *((_QWORD *)v56 + 4);
          if ( i7 )
          {
            v1266 = *(unsigned int *)(v17 + 2084);
            v1267 = ((((_WORD)i7 + (_WORD)v1266) & 0xFFF)
                   + (unsigned __int64)(unsigned int)(*((_DWORD *)v56 + 10) - v1266)
                   + 4095) >> 12;
            v1268 = i7 + v1266;
          }
          else
          {
            v1268 = *((_QWORD *)v56 + 1);
            v1267 = (*((unsigned int *)v56 + 4) + (unsigned __int64)(*((_DWORD *)v56 + 2) & 0xFFF) + 4095) >> 12;
          }
          v1269 = v1268 & 0xFFFFFFFFFFFFF000uLL;
          while ( v1267 )
          {
            --v1267;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v17 + 688))(v1269) && !*(_DWORD *)(v17 + 2296) )
            {
              *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v17 + 2320) = *(int *)v56;
              *(_QWORD *)(v17 + 2328) = v1269;
              *(_DWORD *)(v17 + 2296) = 1;
              __b8(v17, 0LL, v1270, v1271);
            }
            *(_DWORD *)(v17 + 2088) += 256;
            v1269 += 4096LL;
            if ( i7 )
            {
              *(_DWORD *)(v17 + 2084) += 4096;
              if ( *(_DWORD *)(v17 + 2088) >= *(_DWORD *)(v17 + 2092) )
                break;
            }
          }
          if ( i7 && !v1267 )
            *(_DWORD *)(v17 + 2084) = 0;
          if ( *(_DWORD *)(v17 + 2084) )
            goto LABEL_236;
          v1272 = *(_QWORD *)(v17 + 1344);
          LODWORD(i7) = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(v17 + 336))(v1272);
          v1274 = **(unsigned int ***)(v17 + 1552);
          v1275 = v1274 + 4;
          v1276 = *((_BYTE *)v1274 + 12);
          v1277 = (unsigned __int64)&v1274[6 * *v1274 + 4];
          do
          {
            v1278 = 24LL;
            v1279 = (__int64 *)(v56 + 24);
            v1280 = v1275;
            do
            {
              v1281 = *(_QWORD *)v1280;
              v1280 += 2;
              v1282 = *v1279++;
              if ( v1281 != v1282 )
                goto LABEL_2121;
              v1278 = (unsigned int)(v1278 - 8);
            }
            while ( (unsigned int)v1278 >= 8 );
            if ( !(_DWORD)v1278 )
              break;
            while ( 1 )
            {
              v1273 = *(unsigned __int8 *)v1280;
              v1280 = (unsigned int *)((char *)v1280 + 1);
              v1283 = *(unsigned __int8 *)v1279;
              v1279 = (__int64 *)((char *)v1279 + 1);
              if ( v1273 != v1283 )
                break;
              v71 = (_DWORD)v1278 == 1;
              v1278 = (unsigned int)(v1278 - 1);
              if ( v71 )
                goto LABEL_2122;
            }
LABEL_2121:
            v1275 += 6;
          }
          while ( (unsigned __int64)v1275 < v1277 );
LABEL_2122:
          v17 = (unsigned __int64)v1561;
          ((void (__fastcall *)(_SLIST_ENTRY *, __int64, __int64, __int64 *))v1561[25].Next)(
            v1561[84].Next,
            v1273,
            v1278,
            v1279);
          __writecr8((unsigned __int8)i7);
          if ( v1276 )
          {
            v50 = 0;
            if ( (*(_DWORD *)(v17 + 2452) & 0x10) != 0 && !*(_DWORD *)(v17 + 2296) )
            {
              *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v17 + 2320) = *(int *)v56;
              *(_QWORD *)(v17 + 2328) = 1LL;
              *(_DWORD *)(v17 + 2296) = 1;
              __b8(v17, 0LL, v55, v54);
            }
            if ( *((_QWORD *)v56 + 3) == 1LL )
              goto LABEL_236;
          }
          if ( v1275 == (unsigned int *)v1277 )
          {
            v50 = 0;
            if ( *(_DWORD *)(v17 + 2296) )
              goto LABEL_236;
            *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v17 + 2320) = *(int *)v56;
            *(_QWORD *)(v17 + 2328) = v1275;
            *(_DWORD *)(v17 + 2296) = 1;
            goto LABEL_458;
          }
          goto LABEL_235;
        }
LABEL_2130:
        if ( !*(_DWORD *)(v17 + 2084) )
        {
          if ( v77 == 12 )
          {
            if ( !*(_QWORD *)(v17 + 2432) )
            {
              *(_DWORD *)(v17 + 2084) = 0;
              goto LABEL_2173;
            }
            v1284 = *(_DWORD *)(v17 + 2452) ^ ((unsigned __int8)*(_DWORD *)(v17 + 2452) ^ (unsigned __int8)(8 * *(_DWORD *)(v17 + 2452))) & 0x20;
            *(_DWORD *)(v17 + 2452) = v1284;
            if ( (v1284 & 4) != 0 )
            {
              v1285 = *((_QWORD *)v56 + 1) & 0xFFFFFFFFFFFFF000uLL;
              v1286 = (*((unsigned int *)v56 + 4) + (unsigned __int64)(*((_DWORD *)v56 + 2) & 0xFFF) + 4095) >> 12;
              if ( !v1286 )
                goto LABEL_2173;
              LODWORD(i7) = 1;
              do
              {
                --v1286;
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v17 + 688))(v1285)
                  && !*(_DWORD *)(v17 + 2296) )
                {
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *(int *)v56;
                  *(_QWORD *)(v17 + 2328) = v1285;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v1287, v1288);
                }
                *(_DWORD *)(v17 + 2088) += 256;
                v1285 += 4096LL;
              }
              while ( v1286 );
LABEL_2172:
              v77 = v1771;
              goto LABEL_2173;
            }
            v1289 = (const char *)*((_QWORD *)v56 + 1);
            v1290 = *((unsigned int *)v56 + 4);
            v1291 = (__int64)v1289;
            *(_DWORD *)(v17 + 2088) += v1290;
            v1292 = v1289;
            v1293 = *(_DWORD *)(v17 + 2068);
            for ( i25 = *(_QWORD *)(v17 + 2072); v1292 < &v1289[v1290]; v1292 += 64 )
              _mm_prefetch(v1292, 0);
            v1295 = *(_QWORD *)(v17 + 2072);
            v1296 = (unsigned int)v1290 >> 7;
            if ( (unsigned int)v1290 >> 7 )
            {
              do
              {
                v1297 = 8LL;
                do
                {
                  v1298 = v1295 ^ *(_QWORD *)v1291;
                  v1299 = *(_QWORD *)(v1291 + 8);
                  v1291 += 16LL;
                  v1295 = __ROL8__(__ROL8__(v1298, v1293) ^ v1299, v1293);
                  --v1297;
                }
                while ( v1297 );
                v1300 = __ROL8__(i25 ^ (v1291 - (_QWORD)v1289), 17) ^ i25 ^ (v1291 - (_QWORD)v1289);
                v1715 = ((unsigned __int64)v1300 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1293 = ((unsigned __int8)(v1715 ^ v1300) ^ (unsigned __int8)v1293) & 0x3F;
                if ( !v1293 )
                  LOBYTE(v1293) = 1;
                --v1296;
              }
              while ( v1296 );
              v17 = (unsigned __int64)v1561;
            }
            v1301 = v1290 & 0x7F;
            LODWORD(i7) = 1;
            if ( v1301 >= 8 )
            {
              v1302 = (unsigned __int64)v1301 >> 3;
              do
              {
                v1295 = __ROL8__(*(_QWORD *)v1291 ^ v1295, v1293);
                v1291 += 8LL;
                v1301 -= 8;
                --v1302;
              }
              while ( v1302 );
            }
            if ( v1301 )
            {
              do
              {
                v1303 = *(unsigned __int8 *)v1291++;
                v1295 = __ROL8__(v1303 ^ v1295, v1293);
                --v1301;
              }
              while ( v1301 );
              v17 = (unsigned __int64)v1561;
            }
            for ( i26 = v1295; ; LODWORD(v1295) = i26 ^ v1295 )
            {
              i26 >>= 31;
              if ( !i26 )
                break;
            }
            v1305 = *((_DWORD *)v56 + 5);
            v1306 = v1295 & 0x7FFFFFFF;
            if ( v1306 == v1305 )
              goto LABEL_2172;
            v1307 = *((unsigned int *)v56 + 4);
            v1308 = *((_QWORD *)v56 + 1);
            if ( *((_DWORD *)v56 + 4) )
            {
              v1291 = 64LL;
              if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
              {
                v1309 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1310 = v1308 & 0xFFFFFFFFFFFFF000uLL;
                v1311 = (v1308 + v1307 - 1) | 0xFFF;
                v1312 = (v1308 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  i7 = v1309;
                  while ( 1 )
                  {
                    v1313 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v17 + 1128))(v1310, 0LL);
                    if ( v1313 != -1073741267 )
                      break;
                    if ( v1309 > 1u )
                      goto LABEL_2169;
                    i7 = v1309;
                    __writecr8(v1309);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1313 < 0 )
                    break;
LABEL_2169:
                  v1310 += 4096LL;
                  v1312 += 4096LL;
                  if ( v1312 == v1311 )
                    goto LABEL_2170;
                }
                __writecr8(i7);
                v56 = v1560;
                v50 = 0;
                v1305 = *((_DWORD *)v1560 + 5);
              }
            }
            v1334 = *(_DWORD *)(v17 + 2296);
            if ( !v1334 )
            {
              v1335 = v1306;
              v1336 = v1305;
              goto LABEL_2196;
            }
          }
          else
          {
            v1338 = (const char *)*((_QWORD *)v56 + 1);
            v1339 = *((unsigned int *)v56 + 4);
            v1291 = (__int64)v1338;
            *(_DWORD *)(v17 + 2088) += v1339;
            v1340 = v1338;
            v1341 = *(_DWORD *)(v17 + 2068);
            for ( i27 = *(_QWORD *)(v17 + 2072); v1340 < &v1338[v1339]; v1340 += 64 )
              _mm_prefetch(v1340, 0);
            v1343 = *(_QWORD *)(v17 + 2072);
            v1344 = (unsigned int)v1339 >> 7;
            if ( (unsigned int)v1339 >> 7 )
            {
              do
              {
                v1345 = 8LL;
                do
                {
                  v1346 = v1343 ^ *(_QWORD *)v1291;
                  v1347 = *(_QWORD *)(v1291 + 8);
                  v1291 += 16LL;
                  v1343 = __ROL8__(__ROL8__(v1346, v1341) ^ v1347, v1341);
                  --v1345;
                }
                while ( v1345 );
                v1348 = __ROL8__(i27 ^ (v1291 - (_QWORD)v1338), 17) ^ i27 ^ (v1291 - (_QWORD)v1338);
                v1716 = ((unsigned __int64)v1348 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1341 = ((unsigned __int8)(v1716 ^ v1348) ^ (unsigned __int8)v1341) & 0x3F;
                if ( !v1341 )
                  LOBYTE(v1341) = 1;
                --v1344;
              }
              while ( v1344 );
              v17 = (unsigned __int64)v1561;
            }
            v1308 = v1339 & 0x7F;
            LODWORD(i7) = 1;
            if ( (unsigned int)v1308 >= 8 )
            {
              v1349 = (unsigned __int64)(unsigned int)v1308 >> 3;
              do
              {
                v1343 = __ROL8__(*(_QWORD *)v1291 ^ v1343, v1341);
                v1291 += 8LL;
                v1308 = (unsigned int)(v1308 - 8);
                --v1349;
              }
              while ( v1349 );
            }
            if ( (_DWORD)v1308 )
            {
              do
              {
                v1350 = *(unsigned __int8 *)v1291++;
                v1343 = __ROL8__(v1350 ^ v1343, v1341);
                v1308 = (unsigned int)(v1308 - 1);
              }
              while ( (_DWORD)v1308 );
              v17 = (unsigned __int64)v1561;
            }
            for ( i28 = v1343; ; LODWORD(v1343) = i28 ^ v1343 )
            {
              i28 >>= 31;
              if ( !i28 )
                break;
            }
            v1352 = v1343 & 0x7FFFFFFF;
            if ( v1352 == *((_DWORD *)v56 + 5) )
            {
LABEL_2171:
              v50 = 0;
              goto LABEL_2172;
            }
            if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
              v50 = 1;
            v1353 = *((unsigned int *)v56 + 4);
            v1354 = *((_QWORD *)v56 + 1);
            if ( *((_DWORD *)v56 + 4) )
            {
              v1308 = 64LL;
              if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
              {
                v1355 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1356 = v1354 & 0xFFFFFFFFFFFFF000uLL;
                v1576 = (v1354 + v1353 - 1) | 0xFFF;
                v1357 = (v1354 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  i7 = v1355;
                  while ( 1 )
                  {
                    v1358 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v17 + 1128))(
                              v1356,
                              0LL,
                              v1308,
                              v1291);
                    if ( v1358 != -1073741267 )
                      break;
                    if ( v50 )
                      goto LABEL_2232;
                    if ( v1355 > 1u )
                      goto LABEL_2230;
                    i7 = v1355;
                    __writecr8(v1355);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1358 < 0 )
                    break;
LABEL_2230:
                  v1356 += 4096LL;
                  v1357 += 4096LL;
                  if ( v1357 == v1576 )
                  {
LABEL_2170:
                    __writecr8(i7);
                    v56 = v1560;
                    goto LABEL_2171;
                  }
                }
LABEL_2232:
                __writecr8(i7);
                v56 = v1560;
              }
            }
            v1334 = *(_DWORD *)(v17 + 2296);
            v50 = 0;
            v1335 = *((unsigned int *)v56 + 5);
            if ( !v1334 )
            {
              v1336 = v1352;
LABEL_2196:
              *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1336 ^ v1335;
              v1334 = *(_DWORD *)(v17 + 2296);
            }
          }
          v1337 = *((_QWORD *)v56 + 1);
          if ( !v1334 )
          {
            *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v17 + 2320) = *(int *)v56;
            *(_QWORD *)(v17 + 2328) = v1337;
            *(_DWORD *)(v17 + 2296) = 1;
            __b8(v17, 0LL, v1308, v1291);
          }
          goto LABEL_2172;
        }
LABEL_2173:
        v1314 = *(unsigned int *)(v17 + 2084);
        v1315 = *((unsigned int *)v56 + 4);
        v1564 = *((_QWORD *)v56 + 1);
        v1316 = (unsigned int *)(v1564 + 12 * v1314);
        v1573 = (char *)v1316;
        v1317 = (int *)&v56[4 * v1314 + 48];
        v1562 = (__int64)v1317;
        v1318 = (unsigned int *)(v1564 + 12 * (v1315 / 0xC));
        v1567 = v1318;
        if ( v1316 == v1318 )
          goto LABEL_2289;
        while ( 2 )
        {
          if ( *v1317 < 0 )
            goto LABEL_2280;
          v1319 = *((_QWORD *)v56 + 4) + *v1316;
          LODWORD(i7) = v1316[1] - *v1316;
          v1576 = v1319;
          if ( v77 == 43 )
          {
            v1359 = sub_140A0C5E8(v17, v1319, (unsigned int)i7);
            *(_DWORD *)(v17 + 2088) += 8 * i7;
            if ( (*(_DWORD *)(v17 + 2452) & 0x800) != 0 )
            {
              v1360 = (_BYTE *)(v1319 - 6);
              v1361 = (char *)(v1319 - 6 + 5);
              v1362 = *v1361;
              if ( *(_BYTE *)(v1319 - 6) != 76
                || v1360[1] != 0x87
                || v1360[2]
                || v1360[3] != 0x98
                || v1360[4] != 0xC3
                || v1362 != -112 && v1362 != -15 )
              {
                goto LABEL_2585;
              }
              v1363 = *(volatile signed __int32 **)(v17 + 1248);
              while ( 1 )
              {
                _disable();
                if ( !_interlockedbittestandset(v1363, (*(_DWORD *)(v17 + 2448) >> 10) & 0x1F) )
                  break;
                _enable();
                _mm_pause();
              }
              v1364 = *(struct _KPRCB **)(v17 + 2272);
              v1365 = 38LL;
              v1366 = 304;
              v1367 = v1364;
              do
              {
                *(_QWORD *)&v1367->MxCsr = 0LL;
                v1366 -= 8;
                v1367 = (struct _KPRCB *)((char *)v1367 + 8);
                --v1365;
              }
              while ( v1365 );
              if ( v1366 )
              {
                v1365 = 0xFFFFFFFFLL;
                do
                {
                  LOBYTE(v1367->MxCsr) = 0;
                  v1367 = (struct _KPRCB *)((char *)v1367 + 1);
                  --v1366;
                }
                while ( v1366 );
              }
              *(_OWORD *)&v1364->NextThread = *(_OWORD *)(v17 + 2120);
              *(_OWORD *)&v1364->NestingLevel = *(_OWORD *)(v17 + 2136);
              *(_OWORD *)&v1364->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(v17 + 2152);
              v1646 = 303;
              v1647 = v1364;
              LOWORD(v1364->NextThread) = v17 + 2188;
              v1368 = (v17 + 2188) >> 16;
              v1718 = v17 + 2188;
              HIWORD(v1364->NextThread) = v1368;
              LODWORD(v1364->IdleThread) = (v17 + 2188) >> 32;
              __sidt(v1677);
              __lidt(&v1646);
              *v1361 = -15;
              if ( *v1361 != -15 )
                goto LABEL_2260;
              if ( (*(_DWORD *)(v17 + 2452) & 0x20000) == 0 )
              {
                v1364 = KeGetCurrentPrcb();
                **(_QWORD **)(v17 + 1216) = v17 - 0x5C5FC0A76E374B18LL;
                v1368 = v1319;
                **(_QWORD **)(v17 + 1224) = v1364;
                **(_QWORD **)(v17 + 1232) = v1319;
                **(_QWORD **)(v17 + 1240) = 275LL;
              }
              ((void (__fastcall *)(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1319 - 6 + 5))(
                v1368,
                v1364,
                v1365,
                1LL);
              if ( (*(_DWORD *)(v17 + 2452) & 0x20000) == 0 )
              {
                **(_QWORD **)(v17 + 1216) = 0xA3A03F5891C8B4E8uLL;
                **(_QWORD **)(v17 + 1224) = 0LL;
                **(_QWORD **)(v17 + 1232) = 0LL;
                **(_QWORD **)(v17 + 1240) = 0LL;
              }
              if ( *v1361 == -15 )
              {
                *v1361 = -112;
                v1326 = *v1361 == -112;
              }
              else
              {
LABEL_2260:
                v1326 = 0LL;
              }
              __lidt(v1677);
              v1320 = *(_QWORD *)(v17 + 1248);
              _InterlockedAnd((volatile signed __int32 *)v1320, ~(1 << ((*(_DWORD *)(v17 + 2448) >> 10) & 0x1F)));
              _enable();
              if ( !(_DWORD)v1326 )
              {
LABEL_2585:
                if ( !*(_DWORD *)(v17 + 2296) )
                {
                  v1369 = (int *)v1560;
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = (char *)v1369 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *v1369;
                  *(_QWORD *)(v17 + 2328) = v1360;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v1320, v1326);
                }
              }
              v1318 = v1567;
              v1316 = (unsigned int *)v1573;
            }
          }
          else
          {
            *(_DWORD *)(v17 + 2088) += i7;
            v1320 = v1319;
            v1321 = *(_DWORD *)(v17 + 2068);
            v1322 = (const char *)v1319;
            v1323 = *(_QWORD *)(v17 + 2072);
            v1324 = v1319 + (unsigned int)i7;
            if ( v1319 < v1324 )
            {
              do
              {
                _mm_prefetch(v1322, 0);
                v1322 += 64;
              }
              while ( (unsigned __int64)v1322 < v1324 );
            }
            v1325 = *(_QWORD *)(v17 + 2072);
            v1326 = (unsigned int)i7 >> 7;
            if ( (_DWORD)v1326 )
            {
              do
              {
                v1327 = 8LL;
                do
                {
                  v1328 = v1325 ^ *(_QWORD *)v1320;
                  v1329 = *(_QWORD *)(v1320 + 8);
                  v1320 += 16LL;
                  v1325 = __ROL8__(__ROL8__(v1328, v1321) ^ v1329, v1321);
                  --v1327;
                }
                while ( v1327 );
                v1330 = __ROL8__(v1323 ^ (v1320 - v1319), 17) ^ v1323 ^ (v1320 - v1319);
                v1717 = ((unsigned __int64)v1330 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1321 = ((unsigned __int8)(v1717 ^ v1330) ^ (unsigned __int8)v1321) & 0x3F;
                if ( !v1321 )
                  LOBYTE(v1321) = 1;
                v71 = (_DWORD)v1326 == 1;
                v1326 = (unsigned int)(v1326 - 1);
              }
              while ( !v71 );
              v17 = (unsigned __int64)v1561;
              v1317 = (int *)v1562;
            }
            v1331 = i7 & 0x7F;
            if ( v1331 >= 8 )
            {
              v1326 = (i7 & 0x7F) >> 3;
              do
              {
                v1325 = __ROL8__(*(_QWORD *)v1320 ^ v1325, v1321);
                v1320 += 8LL;
                v1331 -= 8;
                --v1326;
              }
              while ( v1326 );
              v1318 = v1567;
            }
            if ( v1331 )
            {
              do
              {
                v1332 = *(unsigned __int8 *)v1320++;
                v1325 = __ROL8__(v1332 ^ v1325, v1321);
                --v1331;
              }
              while ( v1331 );
              v17 = (unsigned __int64)v1561;
              v1317 = (int *)v1562;
            }
            for ( i29 = v1325; ; LODWORD(v1325) = i29 ^ v1325 )
            {
              i29 >>= 31;
              if ( !i29 )
                break;
            }
            v1359 = v1325 & 0x7FFFFFFF;
          }
          v1370 = *v1317;
          if ( v1359 != (*v1317 & 0x7FFFFFFF) )
          {
            v1371 = (unsigned int)i7;
            if ( (_DWORD)i7 )
            {
              v1320 = 64LL;
              if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
              {
                LODWORD(i7) = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1372 = v1319 & 0xFFFFFFFFFFFFF000uLL;
                v1373 = (v1371 + v1319 - 1) | 0xFFF;
                v1374 = (v1319 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1375 = (unsigned __int8)i7;
                  while ( 1 )
                  {
                    v1376 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v17 + 1128))(v1372, 0LL);
                    if ( v1376 != -1073741267 )
                      break;
                    if ( (unsigned __int8)i7 > 1u )
                      goto LABEL_2275;
                    v1375 = (unsigned __int8)i7;
                    __writecr8((unsigned __int8)i7);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1376 < 0 )
                    break;
LABEL_2275:
                  v1372 += 4096LL;
                  v1374 += 4096LL;
                  if ( v1374 == v1373 )
                  {
                    __writecr8(v1375);
                    v1317 = (int *)v1562;
                    goto LABEL_2277;
                  }
                }
                __writecr8(v1375);
                v1317 = (int *)v1562;
                v1319 = v1576;
                v1370 = *(_DWORD *)v1562;
              }
            }
            v1378 = v1370;
            if ( !*(_DWORD *)(v17 + 2296) )
            {
              LODWORD(v1378) = v1370 & 0x7FFFFFFF;
              *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v1378 ^ v1359;
              if ( !*(_DWORD *)(v17 + 2296) )
              {
                v56 = v1560;
                *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v17 + 2320) = *(int *)v56;
                *(_QWORD *)(v17 + 2328) = v1319;
                *(_DWORD *)(v17 + 2296) = 1;
                __b8(v17, 0LL, v1320, v1326);
                v1316 = (unsigned int *)v1573;
                v1318 = v1567;
LABEL_2279:
                v50 = 0;
LABEL_2280:
                ++v1317;
                v1316 += 3;
                v1562 = (__int64)v1317;
                v1573 = (char *)v1316;
                v1377 = v1316 == v1318;
                if ( v1316 >= v1318 )
                  goto LABEL_2283;
                v77 = v1771;
                if ( *(_DWORD *)(v17 + 2088) >= *(_DWORD *)(v17 + 2092) )
                {
                  v1377 = v1316 == v1318;
LABEL_2283:
                  if ( !v1377 )
                  {
                    *(_DWORD *)(v17 + 2084) = ((__int64)v1316 - v1564) / 12;
                    goto LABEL_236;
                  }
LABEL_2289:
                  v1379 = *(_QWORD *)(v17 + 1344);
                  LODWORD(i7) = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64))(v17 + 336))(v1379);
                  v1381 = **(unsigned int ***)(v17 + 1552);
                  v1382 = v1381 + 4;
                  v1383 = *((_BYTE *)v1381 + 12);
                  v1384 = (unsigned __int64)&v1381[6 * *v1381 + 4];
                  do
                  {
                    v1385 = 24LL;
                    v1386 = (__int64 *)(v56 + 24);
                    v1387 = v1382;
                    do
                    {
                      v1388 = *(_QWORD *)v1387;
                      v1387 += 2;
                      v1389 = *v1386++;
                      if ( v1388 != v1389 )
                        goto LABEL_2297;
                      v1385 = (unsigned int)(v1385 - 8);
                    }
                    while ( (unsigned int)v1385 >= 8 );
                    if ( !(_DWORD)v1385 )
                      break;
                    while ( 1 )
                    {
                      v1380 = *(unsigned __int8 *)v1387;
                      v1387 = (unsigned int *)((char *)v1387 + 1);
                      v1390 = *(unsigned __int8 *)v1386;
                      v1386 = (__int64 *)((char *)v1386 + 1);
                      if ( v1380 != v1390 )
                        break;
                      v71 = (_DWORD)v1385 == 1;
                      v1385 = (unsigned int)(v1385 - 1);
                      if ( v71 )
                        goto LABEL_2298;
                    }
LABEL_2297:
                    v1382 += 6;
                  }
                  while ( (unsigned __int64)v1382 < v1384 );
LABEL_2298:
                  v17 = (unsigned __int64)v1561;
                  ((void (__fastcall *)(_SLIST_ENTRY *, __int64, __int64, __int64 *))v1561[25].Next)(
                    v1561[84].Next,
                    v1380,
                    v1385,
                    v1386);
                  __writecr8((unsigned __int8)i7);
                  if ( !v1383 )
                    goto LABEL_2303;
                  v50 = 0;
                  if ( (*(_DWORD *)(v17 + 2452) & 0x10) != 0 && !*(_DWORD *)(v17 + 2296) )
                  {
                    *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v17 + 2320) = *(int *)v56;
                    *(_QWORD *)(v17 + 2328) = 1LL;
                    *(_DWORD *)(v17 + 2296) = 1;
                    __b8(v17, 0LL, v1391, v1392);
                  }
                  if ( *((_QWORD *)v56 + 3) != 1LL )
                  {
LABEL_2303:
                    v50 = 0;
                    if ( v1382 == (unsigned int *)v1384 && !*(_DWORD *)(v17 + 2296) )
                    {
                      *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v17 + 2320) = *(int *)v56;
                      *(_QWORD *)(v17 + 2328) = v1382;
                      *(_DWORD *)(v17 + 2296) = 1;
                      __b8(v17, 0LL, v1391, v1392);
                    }
                  }
LABEL_1735:
                  *(_DWORD *)(v17 + 2084) = 0;
                  goto LABEL_236;
                }
                continue;
              }
            }
LABEL_2277:
            v1318 = v1567;
            v1316 = (unsigned int *)v1573;
          }
          break;
        }
        v56 = v1560;
        goto LABEL_2279;
      case 0:
        v225 = (const char *)*((_QWORD *)v56 + 1);
        v226 = *((unsigned int *)v56 + 4);
        v54 = (unsigned __int64)v225;
        *(_DWORD *)(v17 + 2088) += v226;
        v227 = v225;
        v228 = *(_DWORD *)(v17 + 2068);
        for ( i7 = *(_QWORD *)(v17 + 2072); v227 < &v225[v226]; v227 += 64 )
          _mm_prefetch(v227, 0);
        v229 = *(_QWORD *)(v17 + 2072);
        v230 = (unsigned int)v226 >> 7;
        if ( (unsigned int)v226 >> 7 )
        {
          do
          {
            v231 = 8LL;
            do
            {
              v232 = *(_QWORD *)(v54 + 8) ^ __ROL8__(*(_QWORD *)v54 ^ v229, v228);
              v54 += 16LL;
              v229 = __ROL8__(v232, v228);
              --v231;
            }
            while ( v231 );
            v233 = (__ROL8__(i7 ^ (v54 - (_QWORD)v225), 17) ^ i7 ^ (v54 - (_QWORD)v225))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1734 = *((_QWORD *)&v233 + 1);
            v228 = ((unsigned __int8)(v233 ^ BYTE8(v233)) ^ (unsigned __int8)v228) & 0x3F;
            if ( !v228 )
              LOBYTE(v228) = 1;
            --v230;
          }
          while ( v230 );
          v17 = (unsigned __int64)v1561;
        }
        v55 = v226 & 0x7F;
        if ( (unsigned int)v55 >= 8 )
        {
          v234 = (unsigned __int64)(unsigned int)v55 >> 3;
          do
          {
            v229 = __ROL8__(*(_QWORD *)v54 ^ v229, v228);
            v54 += 8LL;
            v55 = (unsigned int)(v55 - 8);
            --v234;
          }
          while ( v234 );
        }
        for ( ; (_DWORD)v55; v55 = (unsigned int)(v55 - 1) )
        {
          v235 = *(unsigned __int8 *)v54++;
          v229 = __ROL8__(v235 ^ v229, v228);
        }
        for ( i30 = v229; ; LODWORD(v229) = i30 ^ v229 )
        {
          i30 >>= 31;
          if ( !i30 )
            break;
        }
        v237 = v229 & 0x7FFFFFFF;
        if ( v237 == *((_DWORD *)v56 + 5) )
          goto LABEL_235;
        if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
          v50 = 1;
        v238 = *((unsigned int *)v56 + 4);
        v239 = *((_QWORD *)v56 + 1);
        if ( *((_DWORD *)v56 + 4) )
        {
          v55 = 64LL;
          if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
          {
            v240 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v241 = v239 & 0xFFFFFFFFFFFFF000uLL;
            v1776 = (v239 + v238 - 1) | 0xFFF;
            v242 = (v239 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              i7 = v240;
              while ( 1 )
              {
                v243 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v17 + 1128))(
                         v241,
                         0LL,
                         v55,
                         v54);
                if ( v243 != -1073741267 )
                  break;
                if ( v50 )
                  goto LABEL_450;
                if ( v240 > 1u )
                  goto LABEL_448;
                i7 = v240;
                __writecr8(v240);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v243 < 0 )
                break;
LABEL_448:
              v241 += 4096LL;
              v242 += 4096LL;
              if ( v242 == v1776 )
                goto LABEL_234;
            }
LABEL_450:
            __writecr8(i7);
            v56 = v1560;
          }
        }
        v106 = *(_DWORD *)(v17 + 2296);
        v50 = 0;
        if ( !v106 )
        {
          v107 = *((unsigned int *)v56 + 5) ^ (unsigned __int64)v237;
LABEL_453:
          *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v107;
          v106 = *(_DWORD *)(v17 + 2296);
        }
LABEL_454:
        v244 = *((_QWORD *)v56 + 1);
LABEL_455:
        if ( v106 )
          goto LABEL_236;
        *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v17 + 2320) = *(int *)v56;
        *(_QWORD *)(v17 + 2328) = v244;
        goto LABEL_457;
      case 1:
        goto LABEL_2130;
      case 4:
        if ( (*(_DWORD *)(v17 + 2096) & 1) != 0 )
          goto LABEL_236;
        v204 = *(void (**)(void))(v17 + 376);
        v205 = 0;
        v206 = *(_QWORD *)(v17 + 1352);
        LODWORD(v1565) = 0;
        v204();
        if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 || (v207 = *(_DWORD *)(v17 + 2384), v207 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 296))(*(_QWORD *)(v17 + 2560), 0LL);
          v208 = 0x80;
        }
        else
        {
          v208 = 1 << v207;
        }
        v1775 = v208;
        (*(void (__fastcall **)(__int64, _QWORD))(v17 + 312))(v206, 0LL);
        v211 = *(_QWORD ***)(v17 + 1312);
        v212 = *v211;
        if ( *v211 != v211 )
        {
          do
          {
            v213 = (unsigned __int64)v212 - *(_QWORD *)(v17 + 1744);
            if ( v208 != 0x80
              && (v208 & *(_BYTE *)(v213 + *(_QWORD *)(v17 + 1720))) != 0
              && (*(_DWORD *)(v213 + *(_QWORD *)(v17 + 1728)) & *(_DWORD *)(v17 + 1752)) != 0
              && !*(_DWORD *)(v17 + 2296) )
            {
              v214 = (int *)v1560;
              *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v17 + 2312) = (char *)v214 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v17 + 2320) = *v214;
              *(_QWORD *)(v17 + 2328) = v213 | 1;
              *(_DWORD *)(v17 + 2296) = 1;
              __b8(v17, 0LL, v209, v210);
            }
            _InterlockedOr8((volatile signed __int8 *)(v213 + *(_QWORD *)(v17 + 1720)), v208);
            v212 = (_QWORD *)*v212;
            ++v205;
          }
          while ( v212 != v211 );
          LODWORD(v1565) = v205;
        }
        v215 = *(_QWORD *)(v17 + 1280);
        v1562 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        (*(void (__fastcall **)(__int64, _BYTE *))(v17 + 328))(v215, v1765);
        v218 = *(unsigned __int64 **)(v17 + 1272);
        i7 = *v218;
        if ( (unsigned __int64 *)*v218 != v218 )
        {
          v219 = v208;
          v220 = v208;
          v221 = (int *)v1560;
          v222 = ~v219;
          do
          {
            v223 = *(_QWORD *)(v17 + 1720);
            v224 = i7 - *(_QWORD *)(v17 + 1712);
            if ( (*(char *)(v224 + v223) & v220) == 0 && !*(_DWORD *)(v17 + 2296) )
            {
              *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v17 + 2312) = (char *)v221 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v17 + 2320) = *v221;
              *(_QWORD *)(v17 + 2328) = v224;
              *(_DWORD *)(v17 + 2296) = 1;
              __b8(v17, 0LL, v216, v217);
              v223 = *(_QWORD *)(v17 + 1720);
            }
            _InterlockedAnd8((volatile signed __int8 *)(v224 + v223), v222);
            i7 = *(_QWORD *)i7;
          }
          while ( (unsigned __int64 *)i7 != v218 );
          v208 = v1775;
          v205 = v1565;
        }
        (*(void (__fastcall **)(_BYTE *))(v17 + 392))(v1765);
        __writecr8((unsigned __int8)v1562);
        if ( v208 == 0x80 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 304))(*(_QWORD *)(v17 + 2560), 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 320))(*(_QWORD *)(v17 + 1352), 0LL);
        (*(void (**)(void))(v17 + 384))();
        *(_DWORD *)(v17 + 2088) += v205 << 8;
        goto LABEL_235;
      case 5:
        v180 = *(_DWORD *)(v17 + 2096);
        if ( (v180 & 1) == 0 )
          goto LABEL_236;
        if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 )
        {
          v181 = __rdtsc();
          v182 = (__ROR8__(v181, 3) ^ v181) * (unsigned __int128)0x7010008004002001uLL;
          v1733 = *((_QWORD *)&v182 + 1);
          v1774 = ((unsigned __int64)v182 ^ *((_QWORD *)&v182 + 1)) == 3
                                                                     * (((unsigned __int64)v182 ^ *((_QWORD *)&v182 + 1))
                                                                      / 3);
        }
        else
        {
          v1774 = (v180 & 3) == 3;
        }
        v183 = *(void (**)(void))(v17 + 376);
        v184 = 0;
        v185 = *(_QWORD *)(v17 + 1352);
        LODWORD(v1565) = 0;
        v183();
        if ( (*(_DWORD *)(v17 + 2448) & 0x40000000) != 0 || (v186 = *(_DWORD *)(v17 + 2384), v186 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 296))(*(_QWORD *)(v17 + 2560), 0LL);
          v187 = 0x80;
        }
        else
        {
          v187 = 1 << v186;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(v17 + 312))(v185, 0LL);
        v188 = *(volatile signed __int8 ***)(v17 + 1312);
        v189 = *v188;
        if ( *v188 != (volatile signed __int8 *)v188 )
        {
          do
          {
            _InterlockedOr8(&v189[*(_QWORD *)(v17 + 1720) - *(_QWORD *)(v17 + 1744)], v187);
            v189 = *(volatile signed __int8 **)v189;
            ++v184;
          }
          while ( v189 != (volatile signed __int8 *)v188 );
          LODWORD(v1565) = v184;
        }
        i7 = 4LL;
        v190 = **(_QWORD **)(v17 + 1360);
        v191 = *(unsigned int *)(*(_QWORD *)(v17 + 1840) + v190);
        while ( 1 )
        {
          v192 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v17 + 264))(v190, i7);
          v194 = 0LL;
          v195 = v192;
          if ( v192 )
            break;
LABEL_391:
          i7 += 4LL;
          if ( i7 >= v191 )
          {
            if ( v187 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v17 + 304))(
                *(_QWORD *)(v17 + 2560),
                0LL,
                v193,
                v194);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v17 + 320))(
              *(_QWORD *)(v17 + 1352),
              0LL,
              v193,
              v194);
            (*(void (**)(void))(v17 + 384))();
            *(_DWORD *)(v17 + 2088) += ((unsigned int)(v191 >> 2) + (_DWORD)v1565) << 8;
            goto LABEL_235;
          }
        }
        v196 = (_BYTE *)((*v192 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        v197 = *v196 & 0x7F;
        if ( v197 == 3 )
        {
          v193 = *(_QWORD *)(v17 + 1720);
          v198 = v193;
          if ( (v187 & v196[v193]) == 0
            && (*(_DWORD *)&v196[*(_QWORD *)(v17 + 1728)] & *(_DWORD *)(v17 + 1752)) != 0
            && !*(_DWORD *)(v17 + 2296) )
          {
            v199 = (int *)v1560;
            *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v17 + 2312) = (char *)v199 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v17 + 2320) = *v199;
            *(_QWORD *)(v17 + 2328) = v196;
            *(_DWORD *)(v17 + 2296) = 1;
            __b8(v17, 0LL, v193, 0LL);
            v198 = *(_QWORD *)(v17 + 1720);
          }
          _InterlockedAnd8(&v196[v198], ~v187);
          goto LABEL_390;
        }
        if ( v197 == 6 )
        {
          if ( v1774 )
          {
            v200 = *(_QWORD *)(v17 + 1664);
            v201 = *(_QWORD *)&v196[v200 + 32];
            if ( (v201 == *(_QWORD *)(v17 + 800) || v201 == *(_QWORD *)(v17 + 808))
              && *(_QWORD *)&v196[v200 + 48] == *(_QWORD *)(v17 + 816) )
            {
              v202 = *(_QWORD *)&v196[v200 + 40] == *(_QWORD *)(v17 + 824);
              goto LABEL_387;
            }
            goto LABEL_388;
          }
        }
        else
        {
          v202 = v197 == 0;
LABEL_387:
          if ( !v202 )
          {
LABEL_388:
            if ( !*(_DWORD *)(v17 + 2296) )
            {
              v203 = (int *)v1560;
              *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v17 + 2312) = (char *)v203 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v17 + 2320) = *v203;
              *(_QWORD *)(v17 + 2328) = v196;
              *(_DWORD *)(v17 + 2296) = 1;
              __b8(v17, 0LL, v193, 0LL);
            }
          }
        }
LABEL_390:
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v17 + 288))(v190, v195, v193, v194);
        goto LABEL_391;
      case 7:
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v17 + 416))(v1738, *((unsigned int *)v56 + 7));
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v17 + 464))(v1738, v1739);
        for ( i31 = 0; i31 < *((_DWORD *)v56 + 6); ++i31 )
        {
          v172 = *(unsigned int *)&v56[24 * i31 + 64];
          if ( (*(_BYTE *)(v17 + 2171) & 2) != 0
            && (_DWORD)v172 == -1073741694
            && KeGetPcr()->Prcb.Number == *(_DWORD *)(v17 + 2288) )
          {
            v173 = *(_QWORD *)(v17 + 2280);
          }
          else
          {
            v173 = __readmsr(v172);
          }
          v174 = *(_QWORD *)&v56[24 * i31 + 48];
          v175 = *(_QWORD *)&v56[24 * i31 + 56];
          v176 = v174 & v173;
          if ( v176 == v175 )
          {
            if ( (*(_DWORD *)(v17 + 2452) & 0x200) != 0 && v174 == -1 )
              __writemsr(v172, v176);
          }
          else
          {
            v177 = v172 | ((unsigned __int64)*((unsigned int *)v56 + 7) << 32);
            if ( !*(_DWORD *)(v17 + 2296) )
            {
              v178 = v176 ^ v175;
              *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v178;
              if ( !*(_DWORD *)(v17 + 2296) )
              {
                *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v17 + 2320) = *(int *)v56;
                *(_QWORD *)(v17 + 2328) = v177;
                *(_DWORD *)(v17 + 2296) = 1;
                __b8(v17, 0LL, v178, v177);
              }
            }
          }
        }
        (*(void (__fastcall **)(_BYTE *))(v17 + 408))(v1739);
        v179 = *((_DWORD *)v56 + 6) << 15;
        goto LABEL_2413;
      case 8:
        v137 = *((_QWORD *)v56 + 3);
        v138 = *((_WORD *)v56 + 17);
        if ( *(_WORD *)(v137 + *(_QWORD *)(v17 + 1776) + *(_QWORD *)(v17 + 1824)) != v138 && !*(_DWORD *)(v17 + 2296) )
        {
          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v17 + 2320) = *(int *)v56;
          *(_QWORD *)(v17 + 2328) = v137;
          *(_DWORD *)(v17 + 2296) = 1;
          __b8(v17, 0LL, 12LL, v54);
          v138 = *((_WORD *)v56 + 17);
        }
        if ( (v138 & *(_WORD *)(v17 + 1832)) == 0
          && *(_QWORD *)(v137 + *(_QWORD *)(v17 + 1784)) != v137 + *(_QWORD *)(v17 + 1784)
          && !*(_DWORD *)(v17 + 2296) )
        {
          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v17 + 2320) = *(int *)v56;
          *(_QWORD *)(v17 + 2328) = v137;
          *(_DWORD *)(v17 + 2296) = 1;
          __b8(v17, 0LL, v55, v54);
        }
        v139 = (_QWORD *)*((_QWORD *)v56 + 1);
        v140 = *((unsigned int *)v56 + 4);
        v141 = v139;
        *(_DWORD *)(v17 + 2088) += v140;
        v142 = (const char *)v139;
        v143 = *(_DWORD *)(v17 + 2068);
        v144 = *(_QWORD *)(v17 + 2072);
        if ( v139 < (_QWORD *)((char *)v139 + v140) )
        {
          do
          {
            _mm_prefetch(v142, 0);
            v142 += 64;
          }
          while ( v142 < (const char *)v139 + v140 );
        }
        v145 = *(_QWORD *)(v17 + 2072);
        v146 = (unsigned int)v140 >> 7;
        if ( (unsigned int)v140 >> 7 )
        {
          do
          {
            v147 = 8LL;
            do
            {
              v148 = v141[1] ^ __ROL8__(*v141 ^ v145, v143);
              v141 += 2;
              v145 = __ROL8__(v148, v143);
              --v147;
            }
            while ( v147 );
            v149 = (__ROL8__(v144 ^ ((char *)v141 - (char *)v139), 17) ^ v144 ^ (unsigned __int64)((char *)v141
                                                                                                 - (char *)v139))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1732 = *((_QWORD *)&v149 + 1);
            v143 = ((unsigned __int8)v149 ^ (unsigned __int8)(BYTE8(v149) ^ v143)) & 0x3F;
            if ( !v143 )
              LOBYTE(v143) = 1;
            --v146;
          }
          while ( v146 );
          v17 = (unsigned __int64)v1561;
        }
        v150 = v140 & 0x7F;
        if ( (unsigned int)v150 >= 8 )
        {
          v151 = (unsigned __int64)(unsigned int)v150 >> 3;
          do
          {
            v145 = __ROL8__(*v141++ ^ v145, v143);
            v150 = (unsigned int)(v150 - 8);
            --v151;
          }
          while ( v151 );
        }
        for ( ; (_DWORD)v150; v150 = (unsigned int)(v150 - 1) )
        {
          v152 = *(unsigned __int8 *)v141;
          v141 = (_QWORD *)((char *)v141 + 1);
          v145 = __ROL8__(v152 ^ v145, v143);
        }
        for ( i32 = v145; ; LODWORD(v145) = i32 ^ v145 )
        {
          i32 >>= 31;
          if ( !i32 )
            break;
        }
        v154 = v145 & 0x7FFFFFFF;
        if ( v154 == *((_DWORD *)v56 + 5) )
        {
LABEL_333:
          v50 = 0;
        }
        else
        {
          if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
            v50 = 1;
          v155 = *((unsigned int *)v56 + 4);
          v156 = *((_QWORD *)v56 + 1);
          if ( *((_DWORD *)v56 + 4) )
          {
            v150 = 64LL;
            if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
            {
              v157 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v158 = v156 & 0xFFFFFFFFFFFFF000uLL;
              v1773 = (v156 + v155 - 1) | 0xFFF;
              v159 = (v156 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v160 = v157;
                while ( 1 )
                {
                  v161 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v17 + 1128))(
                           v158,
                           0LL,
                           v150,
                           v141);
                  if ( v161 != -1073741267 )
                    break;
                  if ( v50 )
                    goto LABEL_341;
                  if ( v157 > 1u )
                    goto LABEL_331;
                  v160 = v157;
                  __writecr8(v157);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v161 < 0 )
                  break;
LABEL_331:
                v158 += 4096LL;
                v159 += 4096LL;
                if ( v159 == v1773 )
                {
                  __writecr8(v160);
                  v56 = v1560;
                  goto LABEL_333;
                }
              }
LABEL_341:
              __writecr8(v160);
              v56 = v1560;
            }
          }
          v169 = *(_DWORD *)(v17 + 2296);
          v50 = 0;
          if ( !v169 )
          {
            *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v154 ^ (unsigned __int64)*((unsigned int *)v56 + 5);
            v169 = *(_DWORD *)(v17 + 2296);
          }
          v170 = *((_QWORD *)v56 + 1);
          if ( !v169 )
          {
            LODWORD(i7) = -465226731;
            *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v17 + 2320) = *(int *)v56;
            *(_QWORD *)(v17 + 2328) = v170;
            *(_DWORD *)(v17 + 2296) = 1;
            __b8(v17, 0LL, v150, v141);
            goto LABEL_335;
          }
        }
        LODWORD(i7) = -465226731;
LABEL_335:
        v1658 = v56 + 48;
        v162 = *((_WORD *)v56 + 16);
        v1559 = &v1638;
        v1657[0] = v162;
        v1657[1] = v162;
        v163 = *(_QWORD *)(v17 + 1288);
        v164 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v17 + 488);
        LOBYTE(v1558) = 0;
        if ( v164(v1657, 0LL, 0LL, 0LL, v163, v1558, 0LL, &v1638) < 0 )
          goto LABEL_236;
        v167 = v1638;
        if ( v1638 != *((_QWORD *)v56 + 3) && !*(_DWORD *)(v17 + 2296) )
        {
          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v17 + 2320) = *(int *)v56;
          *(_QWORD *)(v17 + 2328) = v167;
          *(_DWORD *)(v17 + 2296) = 1;
          __b8(v17, 0LL, v165, v166);
        }
LABEL_339:
        v168 = *(void (**)(void))(v17 + 480);
        goto LABEL_340;
      case 10:
        if ( *((_DWORD *)v56 + 6) )
        {
          if ( !*(_QWORD *)(v17 + 2432) )
            goto LABEL_268;
          v108 = *(_DWORD *)(v17 + 2452);
          if ( (v108 & 4) != 0 )
            goto LABEL_268;
          if ( *(_DWORD *)(v17 + 2084) )
          {
            if ( (v108 & 0x20) != 0 )
              goto LABEL_268;
          }
          else
          {
            *(_DWORD *)(v17 + 2452) = v108 ^ ((unsigned __int8)v108 ^ (unsigned __int8)(8 * v108)) & 0x20;
          }
        }
        v109 = (unsigned __int64)&v56[16 * *(unsigned int *)(v17 + 2084) + 48];
        v110 = (unsigned __int64)&v56[16 * *((unsigned int *)v56 + 7) + 48];
        v1772 = v110;
        while ( 1 )
        {
          if ( *(int *)v109 >= 0 )
          {
            v111 = *(_QWORD *)(v109 + 8);
            v112 = *(unsigned int *)(v109 + 4);
            v113 = (_QWORD *)v111;
            *(_DWORD *)(v17 + 2088) += v112;
            v114 = (const char *)v111;
            v115 = *(_DWORD *)(v17 + 2068);
            v116 = (unsigned int)v112;
            i7 = *(_QWORD *)(v17 + 2072);
            v1564 = v111;
            if ( v111 < v112 + v111 )
            {
              do
              {
                _mm_prefetch(v114, 0);
                v114 += 64;
              }
              while ( (unsigned __int64)v114 < v112 + v111 );
            }
            v117 = i7;
            v118 = (unsigned int)v112 >> 7;
            if ( (unsigned int)v112 >> 7 )
            {
              do
              {
                v119 = 8LL;
                do
                {
                  v120 = v117 ^ *v113;
                  v121 = v113[1];
                  v113 += 2;
                  v117 = __ROL8__(__ROL8__(v120, v115) ^ v121, v115);
                  --v119;
                }
                while ( v119 );
                v122 = __ROL8__(i7 ^ ((unsigned __int64)v113 - v111), 17) ^ i7 ^ ((unsigned __int64)v113 - v111);
                v1731 = (v122 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v115 = ((unsigned __int8)(v122 ^ v1731) ^ (unsigned __int8)v115) & 0x3F;
                if ( !v115 )
                  LOBYTE(v115) = 1;
                --v118;
              }
              while ( v118 );
              v17 = (unsigned __int64)v1561;
              v110 = v1772;
            }
            v123 = v112 & 0x7F;
            if ( (unsigned int)v123 >= 8 )
            {
              v124 = (unsigned __int64)(unsigned int)v123 >> 3;
              do
              {
                v117 = __ROL8__(*v113++ ^ v117, v115);
                v123 = (unsigned int)(v123 - 8);
                --v124;
              }
              while ( v124 );
            }
            if ( (_DWORD)v123 )
            {
              do
              {
                v125 = *(unsigned __int8 *)v113;
                v113 = (_QWORD *)((char *)v113 + 1);
                v117 = __ROL8__(v125 ^ v117, v115);
                v123 = (unsigned int)(v123 - 1);
              }
              while ( (_DWORD)v123 );
              v17 = (unsigned __int64)v1561;
            }
            for ( i33 = v117; ; LODWORD(v117) = i33 ^ v117 )
            {
              i33 >>= 31;
              if ( !i33 )
                break;
            }
            v128 = *(_DWORD *)v109;
            v129 = v117 & 0x7FFFFFFF;
            if ( v129 == (*(_DWORD *)v109 & 0x7FFFFFFF) )
            {
LABEL_282:
              v50 = 0;
            }
            else
            {
              if ( v116 && (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
              {
                v130 = KeGetCurrentIrql();
                __writecr8(2uLL);
                i7 = v111 & 0xFFFFFFFFFFFFF000uLL;
                v1562 = (v116 + v111 - 1) | 0xFFF;
                v131 = (v111 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v132 = v130;
                  while ( 1 )
                  {
                    v133 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v17 + 1128))(
                             i7,
                             0LL,
                             v123,
                             v113);
                    if ( v133 != -1073741267 )
                      break;
                    if ( v130 > 1u )
                      goto LABEL_280;
                    v132 = v130;
                    __writecr8(v130);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v133 < 0 )
                    break;
LABEL_280:
                  i7 += 4096LL;
                  v131 += 4096LL;
                  if ( v131 == v1562 )
                  {
                    __writecr8(v132);
                    v110 = v1772;
                    goto LABEL_282;
                  }
                }
                __writecr8(v132);
                v128 = *(_DWORD *)v109;
                v111 = v1564;
                v110 = v1772;
              }
              v136 = v128;
              v50 = 0;
              if ( !*(_DWORD *)(v17 + 2296) )
              {
                LODWORD(v136) = v128 & 0x7FFFFFFF;
                *(_QWORD *)(*(_QWORD *)(v17 + 1424) + 24LL) = v136 ^ v129;
                if ( !*(_DWORD *)(v17 + 2296) )
                {
                  v134 = (int *)v1560;
                  *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v17 + 2312) = (char *)v134 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v17 + 2320) = *v134;
                  *(_QWORD *)(v17 + 2328) = v111;
                  *(_DWORD *)(v17 + 2296) = 1;
                  __b8(v17, 0LL, v123, v113);
                  goto LABEL_284;
                }
              }
            }
          }
          v134 = (int *)v1560;
LABEL_284:
          v109 += 16LL;
          v135 = v109 == v110;
          if ( v109 >= v110 )
            goto LABEL_287;
          if ( *(_DWORD *)(v17 + 2088) >= *(_DWORD *)(v17 + 2092) )
          {
            v135 = v109 == v110;
LABEL_287:
            if ( !v135 )
            {
              v127 = (__int64)(v109 - (_QWORD)(v134 + 12)) >> 4;
              goto LABEL_289;
            }
LABEL_268:
            LODWORD(v127) = 0;
LABEL_289:
            *(_DWORD *)(v17 + 2084) = v127;
            goto LABEL_236;
          }
        }
    }
    if ( v77 != 11 )
      goto LABEL_2326;
    if ( !*(_QWORD *)(v17 + 2432) )
      goto LABEL_1735;
    if ( *(_DWORD *)(v17 + 2084) )
    {
      v78 = *(_DWORD *)(v17 + 2452);
      if ( (((unsigned __int8)v78 ^ (unsigned __int8)(v78 >> 3)) & 4) != 0 )
        goto LABEL_1735;
    }
    else
    {
      v78 = *(_DWORD *)(v17 + 2452) ^ ((unsigned __int8)*(_DWORD *)(v17 + 2452) ^ (unsigned __int8)(8
                                                                                                  * *(_DWORD *)(v17 + 2452))) & 0x20;
      *(_DWORD *)(v17 + 2452) = v78;
    }
    if ( (v78 & 4) != 0 )
    {
      v79 = *((_QWORD *)v56 + 1) & 0xFFFFFFFFFFFFF000uLL;
      v80 = (*((unsigned int *)v56 + 4) + (unsigned __int64)(*((_DWORD *)v56 + 2) & 0xFFF) + 4095) >> 12;
      while ( v80 )
      {
        --v80;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v17 + 688))(v79) && !*(_DWORD *)(v17 + 2296) )
        {
          *(_QWORD *)(v17 + 2304) = v17 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v17 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v17 + 2320) = *(int *)v56;
          *(_QWORD *)(v17 + 2328) = v79;
          *(_DWORD *)(v17 + 2296) = 1;
          __b8(v17, 0LL, v81, v82);
        }
        v79 += 4096LL;
        *(_DWORD *)(v17 + 2088) += 256;
      }
      goto LABEL_236;
    }
    v83 = (const char *)*((_QWORD *)v56 + 1);
    v84 = *((unsigned int *)v56 + 4);
    v54 = (unsigned __int64)v83;
    *(_DWORD *)(v17 + 2088) += v84;
    v85 = v83;
    v86 = *(_DWORD *)(v17 + 2068);
    for ( i7 = *(_QWORD *)(v17 + 2072); v85 < &v83[v84]; v85 += 64 )
      _mm_prefetch(v85, 0);
    v87 = *(_QWORD *)(v17 + 2072);
    v88 = (unsigned int)v84 >> 7;
    if ( (unsigned int)v84 >> 7 )
    {
      do
      {
        v89 = 8LL;
        do
        {
          v90 = v87 ^ *(_QWORD *)v54;
          v91 = *(_QWORD *)(v54 + 8);
          v54 += 16LL;
          v87 = __ROL8__(__ROL8__(v90, v86) ^ v91, v86);
          --v89;
        }
        while ( v89 );
        v92 = (__ROL8__(i7 ^ (v54 - (_QWORD)v83), 17) ^ i7 ^ (v54 - (_QWORD)v83))
            * (unsigned __int128)0x7010008004002001uLL;
        v1730 = *((_QWORD *)&v92 + 1);
        v86 = ((unsigned __int8)(v92 ^ BYTE8(v92)) ^ (unsigned __int8)v86) & 0x3F;
        if ( !v86 )
          LOBYTE(v86) = 1;
        --v88;
      }
      while ( v88 );
      v17 = (unsigned __int64)v1561;
    }
    v93 = v84 & 0x7F;
    if ( v93 >= 8 )
    {
      v94 = (unsigned __int64)v93 >> 3;
      do
      {
        v87 = __ROL8__(*(_QWORD *)v54 ^ v87, v86);
        v54 += 8LL;
        v93 -= 8;
        --v94;
      }
      while ( v94 );
      v17 = (unsigned __int64)v1561;
    }
    for ( ; v93; --v93 )
    {
      v95 = *(unsigned __int8 *)v54++;
      v87 = __ROL8__(v95 ^ v87, v86);
    }
    for ( i34 = v87; ; LODWORD(v87) = i34 ^ v87 )
    {
      i34 >>= 31;
      if ( !i34 )
        break;
    }
    v97 = *((unsigned int *)v56 + 5);
    v98 = v87 & 0x7FFFFFFF;
    if ( v98 != (_DWORD)v97 )
    {
      v99 = *((unsigned int *)v56 + 4);
      v55 = *((_QWORD *)v56 + 1);
      if ( *((_DWORD *)v56 + 4) )
      {
        v54 = 64LL;
        if ( (*(_DWORD *)(v17 + 2452) & 0x40) != 0 )
        {
          v100 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v101 = v55 & 0xFFFFFFFFFFFFF000uLL;
          v102 = (v55 + v99 - 1) | 0xFFF;
          v103 = (v55 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            i7 = v100;
            while ( 1 )
            {
              v104 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v17 + 1128))(v101, 0LL);
              if ( v104 != -1073741267 )
                break;
              if ( v100 > 1u )
                goto LABEL_233;
              i7 = v100;
              __writecr8(v100);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v104 < 0 )
            {
              __writecr8(i7);
              v56 = v1560;
              v50 = 0;
              v97 = *((unsigned int *)v1560 + 5);
              goto LABEL_242;
            }
LABEL_233:
            v101 += 4096LL;
            v103 += 4096LL;
            if ( v103 != v102 )
              continue;
            break;
          }
LABEL_234:
          __writecr8(i7);
          goto LABEL_235;
        }
      }
LABEL_242:
      v106 = *(_DWORD *)(v17 + 2296);
      if ( !v106 )
      {
        v107 = v98 ^ v97;
        goto LABEL_453;
      }
      goto LABEL_454;
    }
LABEL_236:
    v105 = v1623 - 1;
    if ( !*(_DWORD *)(v17 + 2084) )
      v105 = v1623;
    v24 = 1LL;
    Next = v105 + 1;
    if ( *(_DWORD *)(v17 + 2296) || *(_DWORD *)(v17 + 2088) >= *(_DWORD *)(v17 + 2092) )
      goto LABEL_2507;
    v49 = v1594;
    v51 = v1589;
    v52 = v1591;
  }
  ++*(_DWORD *)(v17 + 2096);
  Next = 0;
  if ( *(_DWORD *)(v17 + 2392) != 11 || (v1516 = *(_DWORD *)(v17 + 2448), (v1516 & 1) != 0) )
  {
LABEL_2507:
    v13 = v1586;
    v2 = a2;
  }
  else
  {
    v2 = a2;
    v13 = v1586;
    if ( *(_DWORD *)(v17 + 2416) == -1 )
      *(_DWORD *)(v17 + 2416) = 0;
    else
      *(_DWORD *)(v17 + 2448) = v1516 | 1;
  }
  v14 = v1597;
LABEL_2509:
  *(_DWORD *)(v17 + 2080) = Next;
  if ( v1579 )
  {
    v1517 = *(_QWORD *)(*(_QWORD *)(v17 + 1704)
                      + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v17 + 1608))
                      + *(_QWORD *)(v17 + 1672));
    (*(void (__fastcall **)(_BYTE *))(v17 + 408))(v1751);
    (*(void (__fastcall **)(_BYTE *))(v17 + 1088))(v1766);
    (*(void (__fastcall **)(__int64))(v17 + 936))(v1517);
    (*(void (__fastcall **)(__int64))(v17 + 952))(v1517);
  }
  if ( v1602 && ((*(_DWORD *)(v17 + 2448) & 0x8000) != 0 || !*(_DWORD *)(v17 + 2296)) )
  {
    v1518 = *(_QWORD *)(v17 + 2432);
    *(_QWORD *)(v17 + 2432) = 0LL;
    (*(void (__fastcall **)(__int64, _BYTE *))(v17 + 664))(v1518, v1766);
    v1519 = *(_DWORD *)(v17 + 2448);
    if ( (v1519 & 1) != 0 )
    {
      *(_DWORD *)(v17 + 2448) = v1519 & 0xFFFFFFFE;
      v1518 = (*(__int64 (__fastcall **)(__int64))(v17 + 640))(v1518);
      if ( v1518 )
        *(_DWORD *)(v17 + 2416) = (*(__int64 (__fastcall **)(__int64))(v17 + 672))(v1518);
      else
        *(_DWORD *)(v17 + 2416) = -1;
    }
    if ( v1518 )
      (*(void (__fastcall **)(__int64))(v17 + 648))(v1518);
  }
  if ( *((_DWORD *)&v14[143].Next + 2) )
  {
    v1520 = (__int64)v14[145].Next;
    v1521 = *((_QWORD *)&v14[145].Next + 1);
    v1522 = *((_QWORD *)&v14[144].Next + 1);
    v1523 = v14[144].Next;
    v1589 = v1521;
    v1594 = v1522;
    v1595 = v1523;
    v1582 = v14;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1524 = KeGetCurrentPrcb();
    v1525 = *(_QWORD *)((char *)&v1524->MxCsr + *((_QWORD *)&v1582[99].Next + 1));
    v1526 = *(_QWORD *)((char *)&v1524->MxCsr + *((_QWORD *)&v1582[100].Next + 1));
    v1527 = v1582[100].Next;
    v1576 = v1526;
    if ( !*((_BYTE *)&v1527->Next + (_QWORD)v1524)
      || (unsigned __int64)&v1582 > v1525
      || (unsigned __int64)&v1582 < v1525 - 24576 )
    {
      v1525 = *(_QWORD *)(v1526 + *((_QWORD *)&v1582[103].Next + 1));
    }
    v1528 = v1582;
    if ( ((__int64)v1582[153].Next & 0x8000000) == 0 )
    {
      v1529 = __readcr0();
      v1609 = v1529;
      __writecr0(v1529 & 0xFFFFFFFFFFFEFFFFuLL);
      v1530 = (unsigned __int64)(&v1582[170].Next + 1);
      v1531 = (unsigned __int64)(&v1582[LODWORD(v1582[170].Next) + 170].Next + 1);
      v1532 = 0;
      v1533 = (_QWORD *)v1531;
      if ( HIDWORD(v1582[170].Next) )
      {
        do
        {
          *(_QWORD *)*v1533 = v1533[1];
          v1534 = __readcr4();
          if ( (v1534 & 0x20080) != 0 )
          {
            __writecr4(v1534 ^ 0x80);
            __writecr4(v1534);
          }
          else
          {
            v1535 = __readcr3();
            __writecr3(v1535);
          }
          v1533 += 2;
          ++v1532;
        }
        while ( v1532 < HIDWORD(v1528[170].Next) );
        LODWORD(v1521) = v1589;
      }
      if ( v1530 < v1531 )
      {
        do
        {
          v1536 = *(unsigned int *)(v1530 + 8);
          v1537 = v1533;
          v1538 = *(char **)v1530;
          v1539 = v1536;
          if ( (unsigned int)v1536 >= 8 )
          {
            v1540 = (unsigned __int64)(unsigned int)v1536 >> 3;
            do
            {
              v1539 -= 8;
              *(_QWORD *)v1538 = *v1537++;
              v1538 += 8;
              --v1540;
            }
            while ( v1540 );
          }
          if ( v1539 )
          {
            v1541 = v1538 - (char *)v1537;
            do
            {
              *((_BYTE *)v1537 + v1541) = *(_BYTE *)v1537;
              v1537 = (_QWORD *)((char *)v1537 + 1);
              --v1539;
            }
            while ( v1539 );
          }
          v1533 = (_QWORD *)((char *)v1533 + v1536);
          v1530 += 16LL;
        }
        while ( v1530 < v1531 );
        v1526 = v1576;
        v1529 = v1609;
        LODWORD(v1521) = v1589;
        LODWORD(v1522) = v1594;
      }
      **((_BYTE **)&v1528[33].Next + 1) = -61;
      __writecr0(v1529);
      LODWORD(v1523) = (_DWORD)v1595;
    }
    v1549 = *((_DWORD *)&v1582[146].Next + 2);
    if ( v1549 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v1549 = *((_DWORD *)&v1582[146].Next + 2);
      }
      if ( v1549 )
      {
        v1550 = v1549 - 1;
        if ( v1550 )
        {
          v1551 = v1550 - 1;
          if ( v1551 )
          {
            v1552 = v1551 - 1;
            if ( v1552 )
            {
              v1553 = v1552 - 1;
              if ( v1553 )
              {
                if ( v1553 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)&v1582[100].Next + 1)),
                    (LODWORD(v1582[153].Next) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*((_QWORD *)&v1582[91].Next + 1) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*((_QWORD *)&v1582[106].Next + 1)
                                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr
                                                          + *((_QWORD *)&v1582[100].Next + 1))
                                              + *((_QWORD *)&v1582[104].Next + 1)),
                  (LODWORD(v1582[153].Next) >> 10) & 0x1F);
              }
              goto LABEL_2581;
            }
            v1554 = (volatile signed __int32 *)v1582[86].Next;
          }
          else
          {
            v1554 = (volatile signed __int32 *)*((_QWORD *)&v1582[85].Next + 1);
          }
        }
        else
        {
          v1554 = (volatile signed __int32 *)*((_QWORD *)&v1582[84].Next + 1);
        }
        _interlockedbittestandset64(v1554, 0LL);
      }
    }
LABEL_2581:
    *(_SLIST_ENTRY **)((char *)&v1582[105].Next->Next + v1526) = 0LL;
    *(_SLIST_ENTRY **)((char *)&v1582[106].Next->Next + v1526) = 0LL;
    SdbpCheckDll(265, (_DWORD)v1523, v1522, v1521, v1520, *((_QWORD *)&v1582[21].Next + 1), v1525);
    __debugbreak();
  }
  if ( HIDWORD(v14[130].Next) || LODWORD(v14[130].Next) )
  {
    v1542 = -1073741802;
    *(_DWORD *)v2 = v14[130].Next;
    *(_DWORD *)(v2 + 4) = HIDWORD(v14[130].Next);
  }
  else
  {
    v1542 = *(_QWORD *)(v2 + 8) == 0LL ? 0xC0000225 : 0;
  }
  if ( v1609 == 2800 )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, v13);
  else
    ExFreePoolWithTag(v13, v24);
  return v1542;
}
