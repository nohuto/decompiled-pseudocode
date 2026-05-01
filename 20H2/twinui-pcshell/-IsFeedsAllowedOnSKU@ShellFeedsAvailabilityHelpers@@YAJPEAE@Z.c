/*
 * XREFs of ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800E2A48
 * Callers:
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E0C40 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180089730 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ??1SH_HANDLE@@QEAA@XZ @ 0x1800EFFA0 (--1SH_HANDLE@@QEAA@XZ.c)
 *     _alloca_probe @ 0x1800F0360 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1800F03CF (wcscmp_0.c)
 *     memcpy_0 @ 0x1800F03E7 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18013BA10 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1804778D4 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180477908 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x180477938 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     RtlUIntAdd @ 0x180477960 (RtlUIntAdd.c)
 *     RtlULongLongAdd @ 0x180477980 (RtlULongLongAdd.c)
 *     StringCchLengthW @ 0x1804779A4 (StringCchLengthW.c)
 */

__int64 __fastcall ShellFeedsAvailabilityHelpers::IsFeedsAllowedOnSKU(
        ShellFeedsAvailabilityHelpers *this,
        unsigned __int8 *a2)
{
  int v2; // eax
  WCHAR *v3; // r14
  _BYTE *v4; // r15
  int v5; // esi
  unsigned __int8 *v6; // r12
  int v7; // eax
  int v8; // ebx
  int v9; // r11d
  __int64 v10; // r13
  int v11; // r10d
  int v12; // r9d
  int v13; // ecx
  int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  unsigned int v17; // r8d
  int v18; // r11d
  unsigned int v19; // r8d
  int v20; // r11d
  int v21; // r8d
  unsigned int v22; // r11d
  int v23; // r8d
  int v24; // r11d
  int v25; // r8d
  unsigned int v26; // r11d
  int v27; // r8d
  int v28; // r11d
  unsigned int v29; // ebx
  int v30; // r11d
  int v31; // ebx
  int v32; // r11d
  int v33; // ebx
  unsigned int v34; // r11d
  int v35; // ebx
  int v36; // r11d
  int v37; // ebx
  unsigned int v38; // r11d
  int v39; // ebx
  int v40; // edx
  int v41; // ecx
  int v42; // ebx
  int v43; // edx
  int v44; // r11d
  int v45; // r11d
  int v46; // ebx
  int v47; // r11d
  int v48; // ebx
  int v49; // r11d
  int v50; // ebx
  char v51; // al
  unsigned __int64 v52; // rcx
  int v53; // esi
  unsigned int v54; // r13d
  int v55; // edi
  LPCWSTR v56; // rdi
  __int64 v57; // rax
  const WCHAR *v58; // rdx
  const WCHAR *v59; // rdi
  char *v60; // rbx
  __int64 v61; // rcx
  unsigned __int64 v62; // rcx
  unsigned int v63; // r15d
  unsigned int i; // r14d
  __int64 v65; // rax
  const CHAR *v66; // rdx
  void **ProcAddress; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v69; // rbx
  HMODULE *v70; // rdi
  int v71; // esi
  signed int LastError; // edi
  __int64 v73; // r14
  bool v74; // sf
  __int64 v75; // r9
  wchar_t *j; // rbx
  signed int v77; // eax
  unsigned int (__fastcall *v78)(WARBIRD_DELAY_LOAD *__hidden, int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v80; // r14
  bool v81; // sf
  __int64 v82; // r9
  wchar_t *k; // rbx
  signed int v84; // eax
  HANDLE CurrentProcess; // rax
  int v86; // eax
  int v87; // r15d
  int v88; // ebx
  void *v89; // r11
  int v90; // eax
  __int64 v91; // rsi
  HMODULE *v92; // rdi
  int v93; // edi
  unsigned __int16 *v94; // r13
  unsigned __int16 *v95; // r12
  HANDLE v96; // rax
  unsigned __int16 *v97; // rbx
  _OWORD *v98; // rax
  HANDLE v99; // rax
  int v100; // eax
  unsigned int v101; // edi
  int v102; // eax
  unsigned int v103; // r11d
  int v104; // eax
  int v105; // eax
  unsigned int v106; // r11d
  int v107; // r9d
  int v108; // eax
  int v109; // eax
  unsigned int v110; // r11d
  int v111; // r9d
  int v112; // eax
  int v113; // eax
  size_t v114; // rdx
  int v115; // r9d
  unsigned int v116; // r11d
  int v117; // eax
  int v118; // eax
  unsigned int v119; // r11d
  int v120; // eax
  int v121; // eax
  unsigned int v122; // r11d
  int v123; // r9d
  int v124; // eax
  int v125; // eax
  int v126; // r9d
  unsigned int v127; // edi
  HANDLE v128; // rax
  _DWORD *v129; // rdi
  __int64 v130; // r11
  int v131; // eax
  _DWORD *v132; // rax
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // r11
  _DWORD *v136; // rdi
  unsigned int v137; // r9d
  int v138; // r10d
  _OWORD *v139; // rax
  int v140; // eax
  __int64 v141; // rdx
  _DWORD *v142; // rdi
  int v143; // eax
  unsigned int v144; // r9d
  int v145; // r10d
  _QWORD *v146; // rax
  int v147; // eax
  __int64 v148; // rdx
  size_t v149; // rdx
  _DWORD *v150; // rdi
  int v151; // eax
  unsigned int v152; // r9d
  int v153; // r10d
  void *v154; // rdi
  HANDLE v155; // rax
  void *v156; // rdi
  HANDLE v157; // rax
  HANDLE v158; // rax
  HANDLE v159; // rax
  DWORD ModuleFileNameW; // eax
  unsigned __int64 *v161; // rax
  __int64 v162; // r11
  int v163; // eax
  __int64 v164; // rdx
  _DWORD *v165; // rdi
  int v166; // eax
  __int64 v167; // rcx
  unsigned int v168; // r9d
  int v169; // r11d
  __int64 v170; // r10
  void *v171; // rcx
  int v172; // eax
  __int64 v173; // rdx
  __int64 v174; // r11
  _DWORD *v175; // rdi
  unsigned int v176; // r9d
  int v177; // r10d
  int *v178; // rax
  int v179; // eax
  __int64 v180; // rdx
  unsigned int v181; // r11d
  _DWORD *v182; // rdi
  int v183; // eax
  unsigned int v184; // r9d
  int v185; // r10d
  _DWORD *v186; // rax
  int v187; // eax
  __int64 v188; // rcx
  unsigned int v189; // r9d
  int v190; // eax
  unsigned int v191; // r9d
  unsigned int v192; // edi
  unsigned int v193; // r11d
  int v194; // eax
  unsigned int v195; // r11d
  int v196; // eax
  unsigned int v197; // r11d
  int v198; // eax
  unsigned int v199; // r11d
  int v200; // eax
  unsigned int v201; // eax
  unsigned __int16 *v202; // rdi
  unsigned int v203; // r12d
  unsigned int v204; // r13d
  int v205; // r15d
  unsigned int v206; // eax
  unsigned int v207; // edi
  HANDLE v208; // rax
  _DWORD *v209; // rdi
  unsigned int v210; // r11d
  void *v211; // rcx
  HANDLE v212; // rax
  _QWORD *v213; // rbx
  int v214; // r15d
  unsigned __int64 v215; // r15
  _BYTE *v216; // r13
  unsigned __int8 v217; // al
  int v218; // r11d
  unsigned __int64 m; // rcx
  int v220; // r10d
  unsigned __int16 *v221; // r8
  _BYTE *v222; // r12
  unsigned int v223; // r9d
  unsigned int v224; // edx
  int v225; // r10d
  char v226; // r9
  int v227; // edi
  int v228; // ecx
  unsigned int v229; // r10d
  int v230; // r11d
  unsigned int v231; // ecx
  unsigned int v232; // edi
  char v233; // r14
  unsigned __int64 v234; // r11
  unsigned __int8 *v235; // rdx
  int v236; // r14d
  int v237; // ebx
  unsigned int v238; // r13d
  int v239; // r12d
  int v240; // eax
  int v241; // r8d
  int v242; // edi
  int v243; // r10d
  int v244; // r9d
  int v245; // r10d
  int v246; // r9d
  int v247; // r10d
  unsigned int v248; // r9d
  int v249; // r10d
  int v250; // r9d
  int v251; // r10d
  int v252; // r9d
  int v253; // r10d
  int v254; // r9d
  unsigned int v255; // r10d
  unsigned int v256; // r9d
  int v257; // r10d
  int v258; // r9d
  int v259; // r10d
  int v260; // r9d
  int v261; // r10d
  int v262; // r9d
  int v263; // r10d
  int v264; // r9d
  unsigned int v265; // r10d
  int v266; // r9d
  int v267; // r10d
  int v268; // r9d
  int v269; // r10d
  int v270; // r9d
  int v271; // r10d
  int v272; // r9d
  int v273; // r10d
  int v274; // r9d
  int v275; // r10d
  HANDLE v276; // rax
  _QWORD *v277; // rdi
  HANDLE v278; // rax
  void *v279; // rax
  HANDLE v280; // rax
  _OWORD *v281; // rax
  HANDLE v282; // rax
  _QWORD *v283; // rcx
  void *v284; // r12
  HANDLE v285; // rax
  void *v286; // r12
  HANDLE v287; // rax
  void *v288; // r12
  HANDLE v289; // rax
  HANDLE v290; // rax
  void *v291; // rdi
  HANDLE v292; // rax
  void *v293; // rdi
  HANDLE v294; // rax
  void *v295; // rdi
  HANDLE v296; // rax
  void *v297; // rdi
  HANDLE v298; // rax
  HANDLE v299; // rax
  const void **v300; // rbx
  int v301; // r15d
  unsigned int v302; // r12d
  unsigned int v303; // eax
  unsigned int v304; // edi
  HANDLE v305; // rax
  _DWORD *v306; // rdi
  void *v307; // rcx
  void *v308; // rcx
  HANDLE v309; // rax
  int v310; // eax
  unsigned int v311; // ecx
  unsigned int v312; // eax
  unsigned int v313; // edi
  int v314; // eax
  unsigned int *v315; // rcx
  unsigned int v316; // ebx
  int v317; // r9d
  int v318; // r9d
  unsigned int *v319; // rax
  unsigned int *v320; // rcx
  unsigned int v321; // ebx
  int v322; // r9d
  int v323; // r9d
  unsigned int *v324; // rax
  unsigned int v325; // ecx
  unsigned int v326; // r10d
  unsigned int v327; // r11d
  unsigned int v328; // eax
  unsigned int v329; // edi
  HANDLE v330; // rax
  unsigned int *v331; // rax
  unsigned int *v332; // rbx
  signed int v333; // eax
  unsigned int v334; // edi
  FARPROC v335; // rax
  int v336; // eax
  int v337; // r15d
  unsigned int *v338; // rbx
  int *v339; // rdi
  SIZE_T v340; // r13
  unsigned int v341; // r10d
  unsigned int *v342; // rcx
  __int64 v343; // r10
  SIZE_T v344; // rbx
  unsigned int v345; // r10d
  __int64 v346; // r10
  SIZE_T v347; // r12
  int v348; // eax
  unsigned int v349; // r10d
  unsigned int *v350; // r9
  HANDLE v351; // rax
  _QWORD *v352; // rdi
  HANDLE v353; // rax
  void *v354; // rax
  HANDLE v355; // rax
  void *v356; // rax
  void *v357; // rbx
  size_t v358; // r15
  HANDLE v359; // rax
  void *v360; // rax
  void *v361; // rbx
  HANDLE v362; // rax
  void *v363; // rbx
  HANDLE v364; // rax
  void *v365; // rbx
  HANDLE v366; // rax
  HANDLE v367; // rax
  unsigned int *v368; // rdi
  void *v369; // rbx
  HANDLE v370; // rax
  void *v371; // rbx
  HANDLE v372; // rax
  void *v373; // rbx
  HANDLE v374; // rax
  HANDLE v375; // rax
  unsigned __int8 *v376; // r15
  __int64 v377; // rbx
  unsigned __int64 v378; // rbx
  _BYTE *v379; // rax
  unsigned int v380; // r9d
  _BYTE *v381; // r11
  unsigned __int8 v382; // al
  unsigned __int8 *v383; // r8
  _BYTE *v384; // r13
  int v385; // r10d
  unsigned int v386; // edx
  int v387; // r15d
  char v388; // r9
  int v389; // edi
  int v390; // ecx
  unsigned int v391; // r10d
  int v392; // r15d
  int v393; // ecx
  unsigned int v394; // edi
  char v395; // si
  unsigned __int64 v396; // r15
  _BYTE *v397; // r11
  int v398; // esi
  unsigned __int8 *v399; // rbx
  int v400; // r12d
  int v401; // r13d
  unsigned int v402; // eax
  int v403; // r8d
  int v404; // edi
  int v405; // ecx
  int v406; // r8d
  int v407; // r9d
  int v408; // edi
  unsigned int v409; // r10d
  int v410; // r9d
  unsigned int v411; // r10d
  int v412; // r9d
  int v413; // r10d
  unsigned int v414; // r9d
  int v415; // r10d
  int v416; // r9d
  int v417; // r10d
  unsigned int v418; // r9d
  int v419; // r10d
  int v420; // r9d
  unsigned int v421; // r10d
  int v422; // r9d
  int v423; // r10d
  int v424; // r9d
  int v425; // r10d
  int v426; // r9d
  int v427; // r10d
  int v428; // r9d
  int v429; // r10d
  unsigned int v430; // r9d
  int v431; // r10d
  int v432; // edx
  int v433; // ecx
  int v434; // r10d
  int v435; // edx
  int v436; // r9d
  int v437; // r9d
  int v438; // r10d
  int v439; // r9d
  int v440; // r10d
  int v441; // r9d
  int v442; // r10d
  unsigned __int64 n; // rcx
  int v444; // ebx
  int *v445; // r13
  HANDLE v446; // rax
  int v447; // r15d
  unsigned int v448; // r11d
  void *v449; // r9
  __int64 v450; // r11
  void *v451; // rbx
  __int64 v452; // rdx
  SIZE_T v453; // r12
  void *v454; // r13
  int v455; // edi
  unsigned int *v456; // rdi
  unsigned int *v457; // r10
  unsigned __int64 v458; // r10
  int v459; // eax
  unsigned int v460; // r9d
  HANDLE v461; // rax
  HANDLE v462; // rax
  _QWORD *v463; // rbx
  void *v464; // rdi
  HANDLE v465; // rax
  void *v466; // rdi
  HANDLE v467; // rax
  void *v468; // rdi
  HANDLE v469; // rax
  HANDLE v470; // rax
  HANDLE v471; // rax
  HANDLE v472; // rax
  void *v473; // rdi
  HANDLE v474; // rax
  void *v475; // rdi
  HANDLE v476; // rax
  void *v477; // rdi
  HANDLE v478; // rax
  HANDLE v479; // rax
  void *v480; // rdi
  HANDLE v481; // rax
  __int64 v482; // r11
  int v483; // r9d
  int *v484; // rax
  int *v485; // rcx
  int v486; // edi
  unsigned int v487; // r9d
  int v488; // edi
  int *v489; // rax
  int *v490; // rcx
  unsigned int v491; // edi
  unsigned int v492; // r9d
  int v493; // edi
  int *v494; // rax
  LPVOID v495; // rcx
  unsigned int v496; // edi
  unsigned int v497; // r9d
  int v498; // r10d
  void *v499; // rdi
  int *v500; // rcx
  unsigned int v501; // r11d
  int v502; // r9d
  int v503; // r11d
  int v504; // r9d
  int *v505; // rax
  unsigned int *v506; // rcx
  unsigned int v507; // ebx
  unsigned int v508; // r10d
  unsigned int v509; // r11d
  int v510; // r9d
  int v511; // r9d
  unsigned int *v512; // rax
  int v513; // ecx
  __int64 v514; // rax
  unsigned int v515; // edi
  int v516; // eax
  char *v517; // rax
  WCHAR *v518; // r13
  _BYTE *v519; // r14
  int v520; // edi
  int v521; // r12d
  int v522; // r11d
  unsigned __int8 *v523; // rsi
  int v524; // ebx
  __int64 v525; // r15
  int v526; // r10d
  int v527; // r9d
  int v528; // ecx
  int v529; // r10d
  int v530; // ebx
  int v531; // r9d
  unsigned int v532; // r11d
  int v533; // ebx
  unsigned int v534; // r11d
  int v535; // ebx
  int v536; // r11d
  unsigned int v537; // ebx
  int v538; // r11d
  int v539; // ebx
  int v540; // r11d
  unsigned int v541; // ebx
  int v542; // edx
  int v543; // ebx
  unsigned int v544; // r11d
  int v545; // ebx
  int v546; // r11d
  int v547; // ebx
  int v548; // r11d
  unsigned int v549; // ebx
  int v550; // r11d
  int v551; // ebx
  int v552; // r11d
  unsigned int v553; // ebx
  int v554; // r11d
  int v555; // edx
  int v556; // ecx
  int v557; // r11d
  int v558; // edx
  int v559; // ebx
  int v560; // ebx
  int v561; // r11d
  int v562; // ebx
  int v563; // r11d
  int v564; // ebx
  int v565; // r11d
  unsigned __int64 v566; // rcx
  char v567; // al
  int v568; // r12d
  int v569; // ebx
  LPCWSTR v570; // rbx
  const WCHAR *v571; // rdx
  __int64 v572; // rax
  const WCHAR *v573; // rbx
  char *v574; // r13
  __int64 v575; // rcx
  unsigned __int64 v576; // rcx
  unsigned int v577; // eax
  unsigned int v578; // ecx
  const CHAR *v579; // rdx
  __int64 v580; // rax
  void **v581; // rcx
  WCHAR *v582; // rbx
  HANDLE v583; // rax
  HMODULE *v584; // rbx
  __int64 v585; // r12
  int v586; // eax
  char *v587; // rax
  WCHAR *v588; // r13
  _BYTE *v589; // r14
  int v590; // edi
  int v591; // r12d
  int v592; // ebx
  unsigned __int8 *v593; // rsi
  int v594; // r11d
  __int64 v595; // r15
  int v596; // r10d
  int v597; // r9d
  int v598; // ecx
  int v599; // r10d
  int v600; // r11d
  int v601; // r9d
  unsigned int v602; // ebx
  int v603; // r11d
  unsigned int v604; // ebx
  int v605; // r11d
  int v606; // ebx
  unsigned int v607; // r11d
  int v608; // ebx
  int v609; // r11d
  int v610; // ebx
  unsigned int v611; // r11d
  int v612; // edx
  int v613; // r11d
  unsigned int v614; // ebx
  int v615; // r11d
  int v616; // ebx
  int v617; // r11d
  int v618; // ebx
  unsigned int v619; // r11d
  int v620; // ebx
  int v621; // r11d
  int v622; // ebx
  unsigned int v623; // r11d
  int v624; // ebx
  int v625; // edx
  int v626; // ecx
  int v627; // ebx
  int v628; // edx
  int v629; // r11d
  int v630; // r11d
  int v631; // ebx
  int v632; // r11d
  int v633; // ebx
  int v634; // r11d
  int v635; // ebx
  unsigned __int64 v636; // rcx
  int v637; // r12d
  char v638; // al
  int v639; // ebx
  LPCWSTR v640; // rbx
  const WCHAR *v641; // rdx
  __int64 v642; // rax
  const WCHAR *v643; // rbx
  char *v644; // r13
  __int64 v645; // rcx
  unsigned __int64 v646; // rcx
  unsigned int v647; // eax
  unsigned int v648; // ecx
  const CHAR *v649; // rdx
  __int64 v650; // rax
  void **v651; // rcx
  WCHAR *v652; // rbx
  HANDLE v653; // rax
  HMODULE *v654; // rbx
  __int64 v655; // r12
  __int64 v656; // rbx
  int v657; // r13d
  signed int v658; // eax
  signed int v659; // r12d
  _DWORD *v660; // rdi
  signed int v661; // eax
  _DWORD *v662; // r13
  _DWORD *v663; // rdi
  unsigned int i4; // esi
  __int64 v665; // rax
  unsigned int v666; // r10d
  unsigned int v667; // r9d
  __int64 v668; // r8
  unsigned int v669; // ecx
  unsigned int *v670; // rdx
  __int64 v671; // rdi
  const wchar_t *v672; // rcx
  __int64 v673; // r8
  const wchar_t **v674; // rdx
  __int64 v675; // rax
  _BYTE *v676; // r13
  int v677; // ebx
  unsigned __int8 *v678; // r14
  int v679; // r15d
  int v680; // r11d
  int v681; // r10d
  __int64 v682; // rsi
  int v683; // r9d
  int v684; // r8d
  int v685; // eax
  int v686; // r9d
  int v687; // r10d
  int v688; // r8d
  unsigned int v689; // edi
  int v690; // r10d
  unsigned int v691; // edi
  int v692; // r10d
  int v693; // edi
  unsigned int v694; // r10d
  int v695; // edi
  int v696; // r10d
  int v697; // edi
  unsigned int v698; // r10d
  int v699; // edi
  int v700; // r10d
  unsigned int v701; // r11d
  int v702; // r10d
  int v703; // r11d
  int v704; // r10d
  int v705; // r11d
  unsigned int v706; // r10d
  int v707; // r11d
  int v708; // r10d
  int v709; // r11d
  unsigned int v710; // r10d
  int v711; // r11d
  int v712; // ecx
  int v713; // eax
  int v714; // r11d
  int v715; // ecx
  int v716; // r10d
  int v717; // r10d
  int v718; // r11d
  int v719; // r10d
  int v720; // r11d
  int v721; // r10d
  int v722; // r11d
  unsigned __int64 v723; // rax
  void *v724; // rbx
  __m128i v725; // xmm1
  __m128i v726; // xmm0
  __m128i v727; // xmm0
  __m128i v728; // xmm1
  __m128i v729; // xmm1
  __m128i v730; // xmm1
  _BYTE *v731; // rdx
  _QWORD *v732; // rdi
  __int64 v733; // r8
  unsigned int i3; // ecx
  __int64 v735; // rax
  char *v736; // rdi
  __int16 *v737; // rcx
  char *v738; // rdx
  unsigned int v739; // r8d
  __int16 v740; // r9
  _WORD *v741; // rcx
  __int64 v742; // rax
  __int64 v743; // r13
  __int64 v744; // rax
  int v745; // eax
  void *v746; // rcx
  __int64 v747; // rax
  signed int v748; // eax
  __int64 v749; // r13
  _WORD *v750; // rdi
  __int64 v751; // rcx
  int v752; // edi
  signed int v753; // eax
  unsigned int v754; // edi
  const unsigned __int16 *v755; // rbx
  __int64 v756; // r13
  signed int v757; // eax
  int v758; // eax
  __int64 v759; // rax
  signed int v760; // eax
  unsigned __int16 *v761; // rax
  signed int v762; // eax
  int v763; // eax
  __int64 v764; // rax
  signed int v765; // eax
  unsigned int v766; // edx
  int v767; // eax
  int v768; // r13d
  unsigned int v769; // ebx
  void *v770; // rdi
  void *v771; // rdi
  __int64 v772; // rdx
  __int64 v773; // rdi
  bool v774; // sf
  unsigned int v775; // r13d
  int v776; // eax
  __int64 v777; // rax
  bool v778; // sf
  void *v779; // rdi
  __int64 v780; // rbx
  int v781; // eax
  unsigned __int64 v782; // rdx
  int v783; // edx
  int v784; // r12d
  int v785; // ebx
  int v786; // edi
  CToastCenterExperienceManager *v787; // rax
  int v788; // edx
  int v789; // ecx
  CToastCenterExperienceManager *v790; // rax
  int v791; // eax
  HMODULE *v792; // rdi
  unsigned int v793; // edi
  int v794; // ebx
  __int64 v795; // rax
  int v796; // eax
  void *v797; // rdi
  int v798; // r13d
  __int64 v799; // rax
  WARBIRD_DELAY_LOAD *v800; // r12
  bool v801; // sf
  bool v802; // zf
  __int64 v803; // rcx
  __int64 v804; // rax
  unsigned int (__fastcall *v805)(WARBIRD_DELAY_LOAD *__hidden, int); // rdi
  __int64 v806; // rax
  unsigned __int8 *v807; // r9
  int v808; // edi
  __int64 v809; // rdx
  __int64 v810; // r8
  int v811; // ecx
  int v812; // eax
  int v813; // r13d
  int v814; // r11d
  __int64 v815; // r9
  int v816; // eax
  unsigned __int16 *v817; // rax
  __int64 v818; // r14
  __int64 v819; // r10
  int mm; // edi
  int v821; // r8d
  int v822; // edi
  int v823; // edx
  int v824; // edi
  int v825; // edx
  void *v826; // r13
  __int64 v827; // rax
  WARBIRD_DELAY_LOAD *v828; // r12
  bool v829; // sf
  __int64 v830; // rcx
  __int64 v831; // rax
  unsigned int (__fastcall *v832)(WARBIRD_DELAY_LOAD *__hidden, int); // rdi
  __int64 v833; // rax
  int v834; // eax
  int v835; // r8d
  int v836; // edi
  int v837; // edx
  int v838; // ecx
  int v839; // r13d
  int v840; // r11d
  char v841; // r15
  __int64 v842; // rdi
  unsigned __int16 *v843; // rax
  __int64 v844; // r14
  char *v845; // r10
  unsigned __int8 *v846; // r9
  int nn; // r8d
  int v848; // r8d
  int v849; // edi
  int v850; // edx
  int v851; // edi
  int v852; // edx
  int v853; // edi
  int v854; // ecx
  CToastCenterExperienceManager *v855; // rdi
  char v856; // al
  int v857; // edi
  unsigned int v858; // r12d
  int v859; // edx
  int v860; // r13d
  int v861; // edi
  __int64 v862; // rax
  void *v863; // r13
  __int64 v864; // rax
  __int64 v865; // rcx
  __int64 v866; // rcx
  __int64 v867; // rcx
  int v868; // eax
  HMODULE *v869; // rdi
  int v870; // eax
  char *v871; // rax
  WCHAR *v872; // r13
  __int64 v873; // rbx
  int v874; // esi
  _BYTE *v875; // r12
  int v876; // r14d
  int v877; // r11d
  int v878; // r10d
  unsigned __int8 *v879; // r15
  int v880; // r9d
  int v881; // r8d
  int v882; // ecx
  int v883; // r9d
  int v884; // r10d
  int v885; // r8d
  unsigned int v886; // r11d
  int v887; // r10d
  unsigned int v888; // r11d
  int v889; // r10d
  int v890; // r11d
  unsigned int v891; // r10d
  int v892; // r11d
  int v893; // r10d
  int v894; // r11d
  unsigned int v895; // r10d
  int v896; // edx
  int v897; // r10d
  unsigned int v898; // r11d
  int v899; // r10d
  int v900; // r11d
  int v901; // r10d
  int v902; // r11d
  unsigned int v903; // r10d
  int v904; // r11d
  int v905; // r10d
  int v906; // r11d
  unsigned int v907; // r10d
  int v908; // r11d
  int v909; // edx
  int v910; // ecx
  int v911; // r11d
  int v912; // edx
  int v913; // r10d
  int v914; // r10d
  int v915; // r11d
  int v916; // r10d
  int v917; // r11d
  int v918; // r10d
  int v919; // r11d
  int v920; // ebx
  unsigned __int64 v921; // rcx
  char v922; // al
  int v923; // edi
  signed int v924; // r13d
  int v925; // edi
  __int64 v926; // rax
  signed int v927; // eax
  int v928; // eax
  CToastCenterExperienceManager *v929; // rdi
  __int64 v930; // rcx
  __int64 v931; // rax
  unsigned int (__fastcall *v932)(WARBIRD_DELAY_LOAD *__hidden, int); // rdi
  __int64 v933; // rax
  WARBIRD_DELAY_LOAD *v934; // rdi
  int v935; // r8d
  int v936; // r9d
  int v937; // edx
  int v938; // ecx
  int v939; // ebx
  int v940; // r11d
  __int64 v941; // rdi
  char *v942; // rax
  LPVOID v943; // rsi
  char *v944; // r10
  unsigned __int8 *v945; // r9
  int i1; // r8d
  int v947; // r8d
  int v948; // edi
  int v949; // edx
  int v950; // edi
  int v951; // edx
  int v952; // edi
  int v953; // ecx
  void *v954; // rdi
  __int64 v955; // rax
  int v956; // edi
  void *v957; // rax
  bool v958; // sf
  int v959; // eax
  CToastCenterExperienceManager *v960; // rdi
  __int64 v961; // rcx
  __int64 v962; // rax
  unsigned int (__fastcall *v963)(WARBIRD_DELAY_LOAD *__hidden, int); // rdi
  __int64 v964; // rax
  WARBIRD_DELAY_LOAD *v965; // rdi
  int v966; // eax
  int v967; // r8d
  int v968; // r9d
  int v969; // edx
  int v970; // ecx
  __int64 v971; // r10
  int v972; // r13d
  int v973; // r11d
  int v974; // edx
  unsigned __int8 *v975; // rdi
  char *v976; // rax
  __int64 v977; // rsi
  char *v978; // r10
  unsigned __int8 *v979; // r9
  int i2; // r8d
  int v981; // r8d
  int v982; // edi
  int v983; // edx
  int v984; // edi
  int v985; // edx
  int v986; // edi
  int v987; // ecx
  LPCWSTR v988; // rdi
  const WCHAR *v989; // rdx
  __int64 v990; // rax
  const WCHAR *v991; // rdi
  char *v992; // r12
  __int64 v993; // rcx
  unsigned __int64 v994; // rcx
  unsigned int v995; // eax
  unsigned int v996; // r13d
  const CHAR *v997; // rdx
  __int64 v998; // rax
  void **v999; // rcx
  WCHAR *v1000; // rdi
  HANDLE v1001; // rax
  HMODULE *v1002; // rdi
  __int64 v1003; // rbx
  HMODULE *v1004; // rdi
  __int64 v1005; // rbx
  int v1006; // eax
  void *v1007; // r12
  void *v1008; // r13
  HANDLE v1009; // rax
  _OWORD *v1010; // rax
  _OWORD *v1011; // rbx
  _OWORD *v1012; // rax
  HANDLE v1013; // rax
  _QWORD *v1014; // rax
  _QWORD *v1015; // r12
  unsigned int v1016; // r9d
  int v1017; // eax
  unsigned int v1018; // r9d
  int v1019; // r10d
  int v1020; // eax
  unsigned int v1021; // r9d
  int v1022; // r10d
  int v1023; // eax
  int v1024; // r10d
  unsigned int v1025; // edi
  HANDLE v1026; // rax
  unsigned int *v1027; // rax
  unsigned int *v1028; // rdi
  unsigned int v1029; // r9d
  int *v1030; // rax
  int v1031; // r10d
  unsigned int v1032; // r9d
  int v1033; // ebx
  unsigned int v1034; // edi
  _DWORD *v1035; // rdi
  int v1036; // r9d
  unsigned int v1037; // r10d
  int v1038; // r8d
  _OWORD *v1039; // rax
  __int64 v1040; // rcx
  __int128 v1041; // xmm1
  unsigned int v1042; // r9d
  unsigned int v1043; // edi
  unsigned int *v1044; // r9
  __int64 v1045; // r9
  int v1046; // r10d
  int v1047; // r8d
  _DWORD *v1048; // r9
  _QWORD *v1049; // rax
  unsigned int v1050; // r9d
  unsigned int *v1051; // r9
  __int64 v1052; // r9
  int v1053; // r10d
  _DWORD *v1054; // r9
  unsigned __int64 *v1055; // rax
  __int64 v1056; // rcx
  unsigned int v1057; // edi
  _QWORD *v1058; // r12
  int *v1059; // r13
  int v1060; // edi
  unsigned int v1061; // r9d
  unsigned __int64 v1062; // r10
  unsigned int v1063; // eax
  unsigned int v1064; // edi
  HANDLE v1065; // rax
  char *v1066; // rax
  char *v1067; // rbx
  unsigned int v1068; // r9d
  void *v1069; // rcx
  HANDLE v1070; // rax
  int v1071; // edi
  _QWORD *v1072; // r13
  int v1073; // edi
  unsigned __int64 v1074; // rbx
  char *v1075; // rax
  char *v1076; // rdx
  unsigned __int8 *v1077; // r8
  unsigned __int8 v1078; // al
  unsigned __int64 v1079; // rcx
  _BYTE *v1080; // r11
  int v1081; // r9d
  signed int v1082; // r10d
  unsigned int v1083; // edx
  char v1084; // r9
  int v1085; // r14d
  int v1086; // edi
  int v1087; // ecx
  unsigned int v1088; // r9d
  unsigned int v1089; // ecx
  unsigned int v1090; // edi
  int v1091; // r14d
  char v1092; // si
  unsigned __int64 v1093; // rcx
  _BYTE *v1094; // rbx
  int v1095; // r14d
  unsigned __int64 v1096; // r11
  int v1097; // r12d
  int v1098; // r13d
  unsigned __int8 *v1099; // rax
  int v1100; // r8d
  int v1101; // edi
  int v1102; // ecx
  int v1103; // r8d
  int v1104; // edi
  int v1105; // r9d
  int v1106; // r10d
  int v1107; // r9d
  int v1108; // r10d
  int v1109; // r9d
  unsigned int v1110; // r10d
  int v1111; // r9d
  int v1112; // r10d
  int v1113; // r9d
  int v1114; // r10d
  int v1115; // r9d
  int v1116; // r10d
  unsigned int v1117; // r9d
  unsigned int v1118; // r10d
  int v1119; // r9d
  int v1120; // r10d
  int v1121; // r9d
  int v1122; // r10d
  int v1123; // r9d
  int v1124; // r10d
  int v1125; // r9d
  int v1126; // r10d
  unsigned int v1127; // r9d
  int v1128; // r10d
  int v1129; // r9d
  int v1130; // r10d
  unsigned int v1131; // r9d
  int v1132; // r9d
  int v1133; // r10d
  int v1134; // r9d
  int v1135; // r10d
  int v1136; // r9d
  int v1137; // r10d
  int v1138; // r9d
  unsigned int v1139; // esi
  HANDLE v1140; // rax
  _DWORD *v1141; // rax
  _DWORD *v1142; // rbx
  HANDLE v1143; // rax
  void *v1144; // rax
  HANDLE v1145; // rax
  _OWORD *v1146; // rax
  HANDLE v1147; // rax
  _QWORD *v1148; // rax
  void *v1149; // rsi
  HANDLE v1150; // rax
  void *v1151; // rsi
  HANDLE v1152; // rax
  void *v1153; // rsi
  HANDLE v1154; // rax
  HANDLE v1155; // rax
  void *v1156; // rbx
  HANDLE v1157; // rax
  void *v1158; // rbx
  HANDLE v1159; // rax
  void *v1160; // rbx
  HANDLE v1161; // rax
  void *v1162; // rbx
  HANDLE v1163; // rax
  HANDLE v1164; // rax
  const void **v1165; // rbx
  unsigned int v1166; // ecx
  int v1167; // edi
  unsigned int v1168; // eax
  unsigned int v1169; // edi
  HANDLE v1170; // rax
  _DWORD *v1171; // rax
  void *v1172; // rsi
  int v1173; // eax
  void *v1174; // rcx
  int v1175; // eax
  void *v1176; // rcx
  int v1177; // eax
  HANDLE v1178; // rax
  int v1179; // eax
  unsigned int v1180; // ecx
  unsigned int v1181; // eax
  int v1182; // eax
  unsigned int v1183; // r9d
  unsigned int *v1184; // rcx
  int v1185; // ebx
  unsigned int v1186; // esi
  unsigned int v1187; // ebx
  unsigned int *v1188; // rax
  unsigned int *v1189; // rcx
  int v1190; // ebx
  unsigned int v1191; // esi
  unsigned int v1192; // r9d
  unsigned int v1193; // ebx
  unsigned int *v1194; // rax
  unsigned int v1195; // r9d
  unsigned int v1196; // r10d
  unsigned int v1197; // r9d
  unsigned int v1198; // r11d
  unsigned int v1199; // eax
  void *v1200; // rbx
  HANDLE v1201; // rax
  _QWORD *v1202; // rbx
  void *v1203; // rsi
  HANDLE v1204; // rax
  void *v1205; // rsi
  HANDLE v1206; // rax
  void *v1207; // rsi
  HANDLE v1208; // rax
  HANDLE v1209; // rax
  void *v1210; // rbx
  HANDLE v1211; // rax
  void *v1212; // rbx
  HANDLE v1213; // rax
  void *v1214; // rbx
  HANDLE v1215; // rax
  void *v1216; // rbx
  HANDLE v1217; // rax
  void *v1218; // rbx
  HANDLE v1219; // rax
  HANDLE v1220; // rax
  HANDLE v1221; // rax
  unsigned int *v1222; // rdi
  unsigned int v1223; // r9d
  int v1224; // r10d
  int *v1225; // rax
  int v1226; // r9d
  unsigned int v1227; // edi
  HANDLE v1228; // rax
  int *v1229; // rax
  int *v1230; // rbx
  signed int v1231; // eax
  unsigned int v1232; // r9d
  FARPROC v1233; // rax
  int v1234; // eax
  int v1235; // edi
  int v1236; // r9d
  SIZE_T v1237; // r10
  unsigned int v1238; // r10d
  int v1239; // r9d
  SIZE_T v1240; // rsi
  int v1241; // r9d
  int v1242; // r9d
  SIZE_T v1243; // r13
  int v1244; // r9d
  int v1245; // r9d
  int v1246; // r10d
  HANDLE v1247; // rax
  _QWORD *v1248; // rax
  _QWORD *v1249; // rbx
  HANDLE v1250; // rax
  void *v1251; // rax
  void *v1252; // rdi
  HANDLE v1253; // rax
  void *v1254; // rax
  void *v1255; // rdi
  HANDLE v1256; // rax
  void *v1257; // rax
  void *v1258; // rsi
  HANDLE v1259; // rax
  void *v1260; // rsi
  HANDLE v1261; // rax
  void *v1262; // rsi
  HANDLE v1263; // rax
  HANDLE v1264; // rax
  _QWORD *v1265; // rbx
  void *v1266; // rsi
  HANDLE v1267; // rax
  void *v1268; // rsi
  HANDLE v1269; // rax
  void *v1270; // rsi
  HANDLE v1271; // rax
  HANDLE v1272; // rax
  int *v1273; // rbx
  unsigned int v1274; // esi
  unsigned __int64 v1275; // r13
  void *v1276; // rax
  _BYTE *v1277; // rdi
  unsigned __int8 *v1278; // r9
  unsigned __int8 v1279; // al
  _BYTE *v1280; // rbx
  unsigned int v1281; // edx
  int v1282; // r10d
  char v1283; // r14
  int v1284; // r8d
  int v1285; // ecx
  unsigned int v1286; // r10d
  unsigned int v1287; // r11d
  unsigned int v1288; // ecx
  unsigned int v1289; // r8d
  int v1290; // r14d
  char v1291; // r15
  _BYTE *v1292; // r13
  unsigned __int8 *v1293; // r12
  int v1294; // esi
  unsigned int v1295; // r15d
  int v1296; // ebx
  int v1297; // edx
  char *v1298; // rax
  int v1299; // r9d
  int v1300; // r8d
  int v1301; // ecx
  int v1302; // r9d
  int v1303; // r10d
  int v1304; // r8d
  unsigned int v1305; // edi
  int v1306; // r10d
  unsigned int v1307; // edi
  int v1308; // r10d
  int v1309; // edi
  unsigned int v1310; // r10d
  int v1311; // edi
  int v1312; // r10d
  int v1313; // edi
  unsigned int v1314; // r10d
  int v1315; // edi
  int v1316; // r10d
  unsigned int v1317; // r11d
  int v1318; // r10d
  int v1319; // r11d
  int v1320; // r10d
  int v1321; // r11d
  unsigned int v1322; // r10d
  int v1323; // r11d
  int v1324; // r10d
  int v1325; // r11d
  unsigned int v1326; // r10d
  int v1327; // ecx
  int v1328; // r11d
  int v1329; // edx
  int v1330; // r10d
  int v1331; // r10d
  int v1332; // r11d
  int v1333; // r10d
  int v1334; // r11d
  int v1335; // r10d
  int v1336; // r11d
  unsigned __int64 i5; // rcx
  int v1338; // r14d
  HANDLE v1339; // rax
  int v1340; // edi
  unsigned int v1341; // r9d
  __int64 v1342; // r9
  SIZE_T v1343; // r13
  unsigned int v1344; // r9d
  void *v1345; // rbx
  void *v1346; // rsi
  unsigned __int64 v1347; // r9
  unsigned __int64 v1348; // r11
  unsigned int *v1349; // r9
  unsigned __int64 v1350; // r11
  int v1351; // eax
  __int64 v1352; // r9
  unsigned int v1353; // r10d
  HANDLE v1354; // rax
  LPVOID v1355; // rax
  int v1356; // edi
  _QWORD *v1357; // rax
  void *v1358; // rdi
  HANDLE v1359; // rax
  void *v1360; // rdi
  HANDLE v1361; // rax
  HANDLE v1362; // rax
  HANDLE v1363; // rax
  unsigned __int8 v1365; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1366; // [rsp+60h] [rbp-A0h]
  unsigned int v1367; // [rsp+64h] [rbp-9Ch]
  int v1368; // [rsp+64h] [rbp-9Ch]
  unsigned int v1369; // [rsp+64h] [rbp-9Ch]
  __int64 v1370; // [rsp+64h] [rbp-9Ch]
  int v1371; // [rsp+64h] [rbp-9Ch]
  int v1372; // [rsp+64h] [rbp-9Ch]
  __int64 v1373; // [rsp+64h] [rbp-9Ch]
  unsigned int ii; // [rsp+68h] [rbp-98h]
  unsigned int v1375; // [rsp+68h] [rbp-98h]
  int v1376; // [rsp+68h] [rbp-98h]
  int v1377; // [rsp+68h] [rbp-98h]
  int v1378; // [rsp+68h] [rbp-98h]
  int v1379; // [rsp+6Ch] [rbp-94h]
  int v1380; // [rsp+6Ch] [rbp-94h]
  unsigned int v1381; // [rsp+6Ch] [rbp-94h]
  unsigned int v1382; // [rsp+6Ch] [rbp-94h]
  int v1383; // [rsp+6Ch] [rbp-94h]
  int v1384; // [rsp+6Ch] [rbp-94h]
  int v1385; // [rsp+6Ch] [rbp-94h]
  int v1386; // [rsp+6Ch] [rbp-94h]
  int v1387; // [rsp+6Ch] [rbp-94h]
  unsigned __int16 *v1388; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1389; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1390; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1391; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1392; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1393; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1394; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1395; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1396; // [rsp+70h] [rbp-90h]
  int v1397; // [rsp+70h] [rbp-90h]
  int v1398; // [rsp+70h] [rbp-90h]
  int v1399; // [rsp+70h] [rbp-90h]
  unsigned int v1400; // [rsp+70h] [rbp-90h]
  int v1401; // [rsp+70h] [rbp-90h]
  int v1402; // [rsp+70h] [rbp-90h]
  int v1403; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1404; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1405; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1406; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1407; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1408; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1409; // [rsp+78h] [rbp-88h]
  int v1410; // [rsp+78h] [rbp-88h]
  int v1411; // [rsp+78h] [rbp-88h]
  int v1412; // [rsp+78h] [rbp-88h]
  int v1413; // [rsp+78h] [rbp-88h]
  int v1414; // [rsp+78h] [rbp-88h]
  unsigned int v1415; // [rsp+78h] [rbp-88h]
  int v1416; // [rsp+78h] [rbp-88h]
  int v1417; // [rsp+78h] [rbp-88h]
  int v1418; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1419; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1420; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1421; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1422; // [rsp+80h] [rbp-80h]
  int v1423; // [rsp+80h] [rbp-80h]
  int v1424; // [rsp+80h] [rbp-80h]
  int v1425; // [rsp+80h] [rbp-80h]
  int v1426; // [rsp+80h] [rbp-80h]
  int v1427; // [rsp+80h] [rbp-80h]
  unsigned int kk; // [rsp+80h] [rbp-80h]
  unsigned int v1429; // [rsp+80h] [rbp-80h]
  int v1430; // [rsp+80h] [rbp-80h]
  __int64 v1431; // [rsp+88h] [rbp-78h]
  int v1432; // [rsp+88h] [rbp-78h]
  int v1433; // [rsp+88h] [rbp-78h]
  int v1434; // [rsp+90h] [rbp-70h]
  int v1435; // [rsp+90h] [rbp-70h]
  unsigned int v1436; // [rsp+90h] [rbp-70h]
  unsigned int v1437; // [rsp+90h] [rbp-70h]
  int v1438; // [rsp+90h] [rbp-70h]
  int v1439; // [rsp+90h] [rbp-70h]
  HLOCAL v1440; // [rsp+98h] [rbp-68h]
  unsigned int v1441; // [rsp+98h] [rbp-68h]
  unsigned int v1442; // [rsp+98h] [rbp-68h]
  void *v1443; // [rsp+A0h] [rbp-60h]
  WARBIRD_DELAY_LOAD *v1444; // [rsp+A0h] [rbp-60h]
  LPVOID v1445; // [rsp+A0h] [rbp-60h]
  LPVOID v1446; // [rsp+A0h] [rbp-60h]
  int v1447; // [rsp+A0h] [rbp-60h]
  unsigned int v1448; // [rsp+A0h] [rbp-60h]
  int v1449; // [rsp+A0h] [rbp-60h]
  int v1450; // [rsp+A0h] [rbp-60h]
  int v1451; // [rsp+A0h] [rbp-60h]
  int v1452; // [rsp+A8h] [rbp-58h]
  int v1453; // [rsp+A8h] [rbp-58h]
  int v1454; // [rsp+A8h] [rbp-58h]
  unsigned int v1455; // [rsp+A8h] [rbp-58h]
  signed int v1456; // [rsp+A8h] [rbp-58h]
  int v1457; // [rsp+A8h] [rbp-58h]
  __int64 v1458; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v1459; // [rsp+B0h] [rbp-50h]
  int v1460; // [rsp+B0h] [rbp-50h]
  unsigned int v1461; // [rsp+B0h] [rbp-50h]
  unsigned int jj; // [rsp+B0h] [rbp-50h]
  char v1463; // [rsp+B0h] [rbp-50h]
  int v1464; // [rsp+B0h] [rbp-50h]
  int v1465; // [rsp+B8h] [rbp-48h]
  int v1466; // [rsp+B8h] [rbp-48h]
  int v1467; // [rsp+B8h] [rbp-48h]
  const void *v1468; // [rsp+C0h] [rbp-40h]
  _BYTE *v1469; // [rsp+C0h] [rbp-40h]
  unsigned int v1470; // [rsp+C0h] [rbp-40h]
  int v1471; // [rsp+C0h] [rbp-40h]
  int v1472; // [rsp+C0h] [rbp-40h]
  unsigned int *v1473; // [rsp+C8h] [rbp-38h]
  _WORD *v1474; // [rsp+C8h] [rbp-38h]
  __int64 v1475; // [rsp+C8h] [rbp-38h]
  int v1476; // [rsp+C8h] [rbp-38h]
  int v1477; // [rsp+C8h] [rbp-38h]
  char *v1478; // [rsp+C8h] [rbp-38h]
  SIZE_T v1479; // [rsp+D0h] [rbp-30h]
  SIZE_T v1480; // [rsp+D0h] [rbp-30h]
  SIZE_T v1481; // [rsp+D0h] [rbp-30h]
  char *v1482; // [rsp+D0h] [rbp-30h]
  SIZE_T v1483; // [rsp+D0h] [rbp-30h]
  SIZE_T v1484; // [rsp+D0h] [rbp-30h]
  _BYTE *Src; // [rsp+D8h] [rbp-28h]
  const void *Srca; // [rsp+D8h] [rbp-28h]
  char *Srcb; // [rsp+D8h] [rbp-28h]
  WARBIRD_DELAY_LOAD *Srcc; // [rsp+D8h] [rbp-28h]
  unsigned __int64 Srcd; // [rsp+D8h] [rbp-28h]
  const void *Srce; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *Srcf; // [rsp+D8h] [rbp-28h]
  CToastCenterExperienceManager *v1492; // [rsp+E0h] [rbp-20h]
  _BYTE *v1493; // [rsp+E0h] [rbp-20h]
  unsigned int *v1494; // [rsp+E0h] [rbp-20h]
  _QWORD *v1495; // [rsp+E0h] [rbp-20h]
  _QWORD *v1496; // [rsp+E0h] [rbp-20h]
  unsigned int v1497; // [rsp+E0h] [rbp-20h]
  int v1498; // [rsp+E8h] [rbp-18h]
  __int64 v1499; // [rsp+E8h] [rbp-18h]
  __int64 v1500; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v1501; // [rsp+E8h] [rbp-18h]
  __int64 v1502; // [rsp+E8h] [rbp-18h]
  _OWORD *v1503; // [rsp+E8h] [rbp-18h]
  void *v1504; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v1505; // [rsp+F8h] [rbp-8h]
  unsigned int v1506; // [rsp+100h] [rbp+0h] BYREF
  int v1507; // [rsp+104h] [rbp+4h] BYREF
  int v1508; // [rsp+108h] [rbp+8h]
  LPVOID v1509; // [rsp+110h] [rbp+10h]
  LPVOID v1510; // [rsp+118h] [rbp+18h]
  LPVOID v1511; // [rsp+120h] [rbp+20h]
  LPVOID v1512; // [rsp+128h] [rbp+28h]
  char *v1513; // [rsp+130h] [rbp+30h]
  int v1514; // [rsp+138h] [rbp+38h]
  unsigned int v1515; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v1516; // [rsp+144h] [rbp+44h]
  unsigned int v1517; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v1518; // [rsp+14Ch] [rbp+4Ch] BYREF
  unsigned int v1519; // [rsp+150h] [rbp+50h]
  unsigned int v1520; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1521; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v1522; // [rsp+15Ch] [rbp+5Ch]
  unsigned int v1523; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1524; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1525; // [rsp+168h] [rbp+68h]
  unsigned int v1526; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v1527; // [rsp+170h] [rbp+70h]
  unsigned int v1528; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1529; // [rsp+17Ch] [rbp+7Ch]
  unsigned int v1530; // [rsp+180h] [rbp+80h] BYREF
  int v1531; // [rsp+188h] [rbp+88h]
  unsigned int v1532; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1533; // [rsp+194h] [rbp+94h]
  unsigned int v1534; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1535; // [rsp+19Ch] [rbp+9Ch] BYREF
  unsigned int v1536; // [rsp+1A0h] [rbp+A0h]
  unsigned int v1537; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1538; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1539; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1540; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1541; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1542; // [rsp+1B8h] [rbp+B8h]
  unsigned int v1543; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1544; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1545; // [rsp+1C4h] [rbp+C4h]
  int v1546; // [rsp+1C8h] [rbp+C8h]
  int v1547; // [rsp+1CCh] [rbp+CCh]
  unsigned int v1548; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1549; // [rsp+1D4h] [rbp+D4h]
  unsigned int v1550; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1551; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1552; // [rsp+1E0h] [rbp+E0h]
  unsigned int v1553; // [rsp+1E4h] [rbp+E4h] BYREF
  _DWORD v1554[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1555; // [rsp+1F0h] [rbp+F0h]
  int v1556; // [rsp+1F4h] [rbp+F4h]
  int v1557; // [rsp+1F8h] [rbp+F8h]
  int v1558; // [rsp+1FCh] [rbp+FCh]
  int v1559; // [rsp+200h] [rbp+100h]
  int v1560; // [rsp+204h] [rbp+104h]
  int v1561; // [rsp+208h] [rbp+108h]
  int v1562; // [rsp+20Ch] [rbp+10Ch]
  int v1563; // [rsp+210h] [rbp+110h]
  int v1564; // [rsp+214h] [rbp+114h]
  int v1565; // [rsp+218h] [rbp+118h]
  unsigned int v1566; // [rsp+21Ch] [rbp+11Ch] BYREF
  unsigned int v1567; // [rsp+220h] [rbp+120h] BYREF
  int v1568; // [rsp+228h] [rbp+128h]
  unsigned int v1569; // [rsp+22Ch] [rbp+12Ch]
  int v1570; // [rsp+230h] [rbp+130h]
  unsigned int v1571; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1572; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1573; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1574; // [rsp+240h] [rbp+140h]
  unsigned int v1575; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1576; // [rsp+248h] [rbp+148h] BYREF
  unsigned int v1577; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1578; // [rsp+250h] [rbp+150h] BYREF
  _DWORD v1579[3]; // [rsp+254h] [rbp+154h] BYREF
  int v1580; // [rsp+260h] [rbp+160h]
  unsigned int v1581; // [rsp+268h] [rbp+168h] BYREF
  unsigned int v1582; // [rsp+26Ch] [rbp+16Ch]
  unsigned int v1583; // [rsp+270h] [rbp+170h] BYREF
  unsigned int v1584; // [rsp+274h] [rbp+174h] BYREF
  unsigned int v1585; // [rsp+278h] [rbp+178h]
  unsigned int v1586; // [rsp+27Ch] [rbp+17Ch] BYREF
  unsigned int v1587; // [rsp+280h] [rbp+180h] BYREF
  int v1588; // [rsp+284h] [rbp+184h]
  unsigned int v1589; // [rsp+288h] [rbp+188h] BYREF
  unsigned int v1590; // [rsp+28Ch] [rbp+18Ch] BYREF
  unsigned int v1591; // [rsp+290h] [rbp+190h] BYREF
  _DWORD v1592[2]; // [rsp+294h] [rbp+194h] BYREF
  unsigned int v1593; // [rsp+29Ch] [rbp+19Ch]
  unsigned int v1594; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v1595; // [rsp+2A4h] [rbp+1A4h] BYREF
  unsigned int v1596; // [rsp+2A8h] [rbp+1A8h] BYREF
  unsigned int v1597; // [rsp+2ACh] [rbp+1ACh]
  unsigned int v1598; // [rsp+2B0h] [rbp+1B0h]
  unsigned int v1599; // [rsp+2B4h] [rbp+1B4h]
  unsigned int v1600; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v1601; // [rsp+2BCh] [rbp+1BCh]
  unsigned int v1602; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v1603; // [rsp+2C4h] [rbp+1C4h] BYREF
  unsigned int v1604; // [rsp+2C8h] [rbp+1C8h]
  unsigned int v1605; // [rsp+2CCh] [rbp+1CCh]
  _DWORD v1606[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _DWORD v1607[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  int v1608; // [rsp+2E0h] [rbp+1E0h]
  int v1609; // [rsp+2E4h] [rbp+1E4h]
  unsigned int v1610; // [rsp+2E8h] [rbp+1E8h]
  unsigned int dwBytes; // [rsp+2ECh] [rbp+1ECh] BYREF
  unsigned int dwBytes_4; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned int v1613; // [rsp+2F4h] [rbp+1F4h]
  unsigned int v1614; // [rsp+2F8h] [rbp+1F8h] BYREF
  __int64 v1615; // [rsp+300h] [rbp+200h]
  unsigned int v1616; // [rsp+308h] [rbp+208h] BYREF
  unsigned int v1617; // [rsp+30Ch] [rbp+20Ch] BYREF
  unsigned int v1618; // [rsp+310h] [rbp+210h] BYREF
  unsigned int v1619; // [rsp+314h] [rbp+214h] BYREF
  unsigned int v1620; // [rsp+318h] [rbp+218h] BYREF
  unsigned int v1621; // [rsp+31Ch] [rbp+21Ch] BYREF
  _QWORD *v1622; // [rsp+320h] [rbp+220h]
  unsigned __int64 v1623; // [rsp+328h] [rbp+228h]
  size_t pcchLength; // [rsp+330h] [rbp+230h] BYREF
  _DWORD *v1625; // [rsp+338h] [rbp+238h] BYREF
  _DWORD *v1626; // [rsp+340h] [rbp+240h] BYREF
  unsigned __int64 v1627; // [rsp+348h] [rbp+248h]
  _DWORD *v1628; // [rsp+350h] [rbp+250h] BYREF
  size_t v1629; // [rsp+358h] [rbp+258h] BYREF
  _DWORD *v1630; // [rsp+360h] [rbp+260h] BYREF
  _DWORD *v1631; // [rsp+368h] [rbp+268h] BYREF
  _DWORD *v1632; // [rsp+370h] [rbp+270h] BYREF
  LPVOID v1633; // [rsp+378h] [rbp+278h]
  unsigned __int64 v1634; // [rsp+380h] [rbp+280h]
  void *v1635; // [rsp+388h] [rbp+288h] BYREF
  LPVOID v1636; // [rsp+390h] [rbp+290h]
  ShellFeedsAvailabilityHelpers *v1637; // [rsp+398h] [rbp+298h]
  _QWORD v1638[6]; // [rsp+3A0h] [rbp+2A0h] BYREF
  void *v1639; // [rsp+3D0h] [rbp+2D0h] BYREF
  unsigned int *v1640; // [rsp+3D8h] [rbp+2D8h]
  unsigned int *v1641; // [rsp+3E0h] [rbp+2E0h]
  unsigned int *v1642; // [rsp+3E8h] [rbp+2E8h] BYREF
  unsigned int *v1643; // [rsp+3F0h] [rbp+2F0h] BYREF
  HMODULE phModule; // [rsp+3F8h] [rbp+2F8h] BYREF
  void *v1645; // [rsp+400h] [rbp+300h] BYREF
  int *v1646; // [rsp+408h] [rbp+308h]
  void *v1647; // [rsp+410h] [rbp+310h] BYREF
  unsigned __int64 v1648; // [rsp+418h] [rbp+318h] BYREF
  unsigned __int64 v1649; // [rsp+420h] [rbp+320h] BYREF
  unsigned int *v1650; // [rsp+428h] [rbp+328h] BYREF
  int *v1651; // [rsp+430h] [rbp+330h] BYREF
  int *v1652; // [rsp+438h] [rbp+338h]
  int *v1653; // [rsp+440h] [rbp+340h] BYREF
  int *v1654; // [rsp+448h] [rbp+348h]
  __int64 v1655; // [rsp+450h] [rbp+350h]
  int *v1656; // [rsp+458h] [rbp+358h] BYREF
  int *v1657; // [rsp+460h] [rbp+360h]
  LPVOID v1658; // [rsp+468h] [rbp+368h] BYREF
  void *v1659; // [rsp+470h] [rbp+370h]
  int *v1660; // [rsp+478h] [rbp+378h] BYREF
  int *v1661; // [rsp+480h] [rbp+380h]
  unsigned int *v1662; // [rsp+488h] [rbp+388h] BYREF
  unsigned int *v1663; // [rsp+490h] [rbp+390h]
  __int64 v1664; // [rsp+498h] [rbp+398h] BYREF
  LPCWSTR lpModuleName; // [rsp+4A0h] [rbp+3A0h]
  LPCWSTR v1666; // [rsp+4A8h] [rbp+3A8h]
  unsigned __int64 v1667; // [rsp+4B0h] [rbp+3B0h]
  void **v1668; // [rsp+4B8h] [rbp+3B8h] BYREF
  LPCWSTR v1669; // [rsp+4C0h] [rbp+3C0h]
  unsigned __int64 v1670; // [rsp+4C8h] [rbp+3C8h]
  _DWORD *v1671; // [rsp+4D0h] [rbp+3D0h] BYREF
  _BYTE *v1672; // [rsp+4D8h] [rbp+3D8h] BYREF
  unsigned __int64 v1673; // [rsp+4E0h] [rbp+3E0h]
  char *v1674; // [rsp+4E8h] [rbp+3E8h] BYREF
  __int64 v1675; // [rsp+4F0h] [rbp+3F0h] BYREF
  _DWORD *v1676; // [rsp+4F8h] [rbp+3F8h] BYREF
  __int64 v1677; // [rsp+500h] [rbp+400h]
  __int64 v1678; // [rsp+508h] [rbp+408h] BYREF
  __int64 v1679; // [rsp+510h] [rbp+410h] BYREF
  __int64 v1680; // [rsp+518h] [rbp+418h] BYREF
  unsigned __int64 v1681; // [rsp+520h] [rbp+420h]
  wchar_t *String1; // [rsp+528h] [rbp+428h] BYREF
  wchar_t *v1683; // [rsp+530h] [rbp+430h] BYREF
  wchar_t *v1684; // [rsp+538h] [rbp+438h] BYREF
  __int64 v1685; // [rsp+540h] [rbp+440h] BYREF
  wchar_t *v1686; // [rsp+548h] [rbp+448h] BYREF
  _OWORD *v1687; // [rsp+550h] [rbp+450h]
  __int64 v1688; // [rsp+558h] [rbp+458h] BYREF
  LPCWSTR v1689; // [rsp+560h] [rbp+460h]
  unsigned __int64 v1690; // [rsp+568h] [rbp+468h]
  _OWORD *v1691; // [rsp+570h] [rbp+470h]
  _QWORD *v1692; // [rsp+578h] [rbp+478h]
  unsigned __int64 v1693; // [rsp+580h] [rbp+480h]
  _DWORD *v1694; // [rsp+588h] [rbp+488h] BYREF
  unsigned int *v1695; // [rsp+590h] [rbp+490h] BYREF
  unsigned __int64 v1696; // [rsp+598h] [rbp+498h]
  unsigned int *v1697; // [rsp+5A0h] [rbp+4A0h] BYREF
  LPVOID v1698; // [rsp+5A8h] [rbp+4A8h]
  unsigned __int64 v1699; // [rsp+5B0h] [rbp+4B0h]
  void *v1700; // [rsp+5B8h] [rbp+4B8h] BYREF
  LPVOID v1701; // [rsp+5C0h] [rbp+4C0h]
  unsigned __int64 v1702; // [rsp+5C8h] [rbp+4C8h]
  __int64 *v1703; // [rsp+5D0h] [rbp+4D0h]
  __int64 v1704; // [rsp+5D8h] [rbp+4D8h]
  _OWORD *v1705; // [rsp+5E0h] [rbp+4E0h]
  __int64 v1706; // [rsp+5E8h] [rbp+4E8h]
  void *v1707; // [rsp+5F0h] [rbp+4F0h] BYREF
  unsigned int *v1708; // [rsp+5F8h] [rbp+4F8h]
  unsigned int *v1709; // [rsp+600h] [rbp+500h]
  unsigned int *v1710; // [rsp+608h] [rbp+508h] BYREF
  unsigned int *v1711; // [rsp+610h] [rbp+510h] BYREF
  HMODULE hModule; // [rsp+618h] [rbp+518h] BYREF
  void *v1713; // [rsp+620h] [rbp+520h] BYREF
  int *v1714; // [rsp+628h] [rbp+528h]
  void *v1715; // [rsp+630h] [rbp+530h] BYREF
  unsigned __int64 v1716; // [rsp+638h] [rbp+538h] BYREF
  unsigned __int64 v1717; // [rsp+640h] [rbp+540h] BYREF
  unsigned __int64 v1718; // [rsp+648h] [rbp+548h] BYREF
  _QWORD v1719[2]; // [rsp+650h] [rbp+550h] BYREF
  _QWORD v1720[4]; // [rsp+660h] [rbp+560h] BYREF
  _DWORD *v1721; // [rsp+680h] [rbp+580h] BYREF
  __int128 v1722; // [rsp+688h] [rbp+588h]
  __int128 v1723; // [rsp+698h] [rbp+598h]
  _OWORD *v1724; // [rsp+6B0h] [rbp+5B0h] BYREF
  unsigned __int64 *v1725; // [rsp+6C0h] [rbp+5C0h] BYREF
  size_t Size; // [rsp+6C8h] [rbp+5C8h] BYREF
  LPVOID lpMem; // [rsp+6D0h] [rbp+5D0h]
  LPVOID v1728[3]; // [rsp+6D8h] [rbp+5D8h]
  _QWORD *v1729; // [rsp+6F0h] [rbp+5F0h] BYREF
  _OWORD *v1730; // [rsp+700h] [rbp+600h] BYREF
  _QWORD *v1731; // [rsp+710h] [rbp+610h] BYREF
  unsigned __int64 *v1732; // [rsp+720h] [rbp+620h] BYREF
  void *v1733; // [rsp+730h] [rbp+630h] BYREF
  int *v1734; // [rsp+740h] [rbp+640h] BYREF
  _DWORD *v1735; // [rsp+750h] [rbp+650h] BYREF
  size_t v1736; // [rsp+758h] [rbp+658h] BYREF
  void *v1737; // [rsp+760h] [rbp+660h]
  __int128 v1738; // [rsp+768h] [rbp+668h]
  __int128 v1739; // [rsp+778h] [rbp+678h] BYREF
  LPVOID v1740[3]; // [rsp+788h] [rbp+688h]
  int *v1741; // [rsp+7A0h] [rbp+6A0h] BYREF
  _QWORD v1742[2]; // [rsp+7A8h] [rbp+6A8h] BYREF
  unsigned int v1743; // [rsp+7B8h] [rbp+6B8h]
  unsigned int v1744; // [rsp+7BCh] [rbp+6BCh]
  int v1745; // [rsp+7C0h] [rbp+6C0h]
  _QWORD v1746[2]; // [rsp+7C8h] [rbp+6C8h] BYREF
  unsigned int v1747; // [rsp+7D8h] [rbp+6D8h]
  unsigned int v1748; // [rsp+7DCh] [rbp+6DCh]
  int v1749; // [rsp+7E0h] [rbp+6E0h]
  _BYTE v1750[24]; // [rsp+7F0h] [rbp+6F0h] BYREF
  __int64 v1751; // [rsp+808h] [rbp+708h]
  _BYTE v1752[4]; // [rsp+860h] [rbp+760h] BYREF
  int v1753; // [rsp+864h] [rbp+764h]
  int v1754; // [rsp+868h] [rbp+768h]
  __int16 v1755; // [rsp+872h] [rbp+772h]
  __int64 v1756; // [rsp+878h] [rbp+778h]
  _BYTE v1757[4]; // [rsp+8D0h] [rbp+7D0h] BYREF
  __int64 v1758; // [rsp+8D4h] [rbp+7D4h]
  unsigned __int16 *v1759; // [rsp+8E8h] [rbp+7E8h]
  _BYTE v1760[24]; // [rsp+940h] [rbp+840h] BYREF
  __int64 v1761; // [rsp+958h] [rbp+858h]
  _BYTE v1762[4]; // [rsp+9B0h] [rbp+8B0h] BYREF
  int v1763; // [rsp+9B4h] [rbp+8B4h]
  int v1764; // [rsp+9B8h] [rbp+8B8h]
  unsigned __int16 *v1765; // [rsp+9C8h] [rbp+8C8h]
  _BYTE v1766[24]; // [rsp+A20h] [rbp+920h] BYREF
  __int64 v1767; // [rsp+A38h] [rbp+938h]
  _BYTE v1768[4]; // [rsp+A90h] [rbp+990h] BYREF
  int v1769; // [rsp+A94h] [rbp+994h]
  int v1770; // [rsp+A98h] [rbp+998h]
  void *v1771; // [rsp+AA8h] [rbp+9A8h]
  _BYTE v1772[4]; // [rsp+B00h] [rbp+A00h] BYREF
  int v1773; // [rsp+B04h] [rbp+A04h]
  int v1774; // [rsp+B08h] [rbp+A08h]
  void *v1775; // [rsp+B18h] [rbp+A18h]
  _BYTE v1776[24]; // [rsp+B70h] [rbp+A70h] BYREF
  __int64 v1777; // [rsp+B88h] [rbp+A88h]
  int v1778; // [rsp+BE0h] [rbp+AE0h] BYREF
  int v1779; // [rsp+BE4h] [rbp+AE4h]
  void *v1780; // [rsp+BE8h] [rbp+AE8h]
  void *v1781; // [rsp+BF0h] [rbp+AF0h]
  void *v1782; // [rsp+BF8h] [rbp+AF8h]
  unsigned __int16 *v1783; // [rsp+C00h] [rbp+B00h]
  unsigned __int16 *v1784; // [rsp+C08h] [rbp+B08h]
  __int64 v1785; // [rsp+C10h] [rbp+B10h]
  int v1786; // [rsp+C18h] [rbp+B18h]
  __int128 v1787; // [rsp+C1Ch] [rbp+B1Ch] BYREF
  __int128 v1788; // [rsp+C2Ch] [rbp+B2Ch] BYREF
  unsigned int v1789; // [rsp+C3Ch] [rbp+B3Ch] BYREF
  unsigned int v1790; // [rsp+C40h] [rbp+B40h]
  unsigned int v1791; // [rsp+C44h] [rbp+B44h]
  unsigned int v1792; // [rsp+C48h] [rbp+B48h]
  __int64 v1793; // [rsp+C50h] [rbp+B50h]
  unsigned __int64 v1794; // [rsp+C58h] [rbp+B58h]
  unsigned __int64 v1795; // [rsp+C60h] [rbp+B60h]
  __int64 v1796; // [rsp+C68h] [rbp+B68h]
  __int128 v1797; // [rsp+C70h] [rbp+B70h] BYREF
  __int128 v1798; // [rsp+C80h] [rbp+B80h]
  __int128 v1799; // [rsp+C90h] [rbp+B90h] BYREF
  __int128 v1800; // [rsp+CA0h] [rbp+BA0h] BYREF
  __int64 v1801; // [rsp+CB0h] [rbp+BB0h] BYREF
  unsigned int v1802; // [rsp+CB8h] [rbp+BB8h]
  int v1803; // [rsp+CBCh] [rbp+BBCh]
  __int128 v1804; // [rsp+CC0h] [rbp+BC0h] BYREF
  char v1805[12]; // [rsp+CD0h] [rbp+BD0h] BYREF
  unsigned int v1806; // [rsp+CDCh] [rbp+BDCh]
  __int128 v1807; // [rsp+CF0h] [rbp+BF0h] BYREF
  __int128 v1808; // [rsp+D00h] [rbp+C00h] BYREF
  __int64 v1809; // [rsp+D10h] [rbp+C10h]
  __int128 v1810; // [rsp+D18h] [rbp+C18h] BYREF
  __int128 v1811; // [rsp+D28h] [rbp+C28h] BYREF
  __int64 v1812; // [rsp+D38h] [rbp+C38h]
  __int128 v1813; // [rsp+D40h] [rbp+C40h] BYREF
  __int128 v1814; // [rsp+D50h] [rbp+C50h]
  __int64 v1815; // [rsp+D60h] [rbp+C60h]
  int v1816; // [rsp+D68h] [rbp+C68h]
  __int128 v1817; // [rsp+D70h] [rbp+C70h] BYREF
  __int128 v1818; // [rsp+D80h] [rbp+C80h]
  __int64 v1819; // [rsp+D90h] [rbp+C90h]
  int v1820; // [rsp+D98h] [rbp+C98h]
  __int128 v1821; // [rsp+DA0h] [rbp+CA0h] BYREF
  __int128 v1822; // [rsp+DB0h] [rbp+CB0h]
  __int64 v1823; // [rsp+DC0h] [rbp+CC0h]
  int v1824; // [rsp+DC8h] [rbp+CC8h]
  __int128 v1825; // [rsp+DD0h] [rbp+CD0h] BYREF
  __int128 v1826; // [rsp+DE0h] [rbp+CE0h]
  __int64 v1827; // [rsp+DF0h] [rbp+CF0h]
  int v1828; // [rsp+DF8h] [rbp+CF8h]
  __int128 v1829; // [rsp+E00h] [rbp+D00h] BYREF
  __int128 v1830; // [rsp+E10h] [rbp+D10h]
  __int64 v1831; // [rsp+E20h] [rbp+D20h]
  int v1832; // [rsp+E28h] [rbp+D28h]
  _DWORD v1833[6]; // [rsp+E30h] [rbp+D30h] BYREF
  char v1834; // [rsp+E4Ah] [rbp+D4Ah]
  unsigned __int16 v1835[34]; // [rsp+E4Ch] [rbp+D4Ch] BYREF
  _DWORD v1836[6]; // [rsp+E90h] [rbp+D90h] BYREF
  char v1837; // [rsp+EAAh] [rbp+DAAh]
  unsigned __int16 v1838[34]; // [rsp+EACh] [rbp+DACh] BYREF
  _DWORD v1839[6]; // [rsp+EF0h] [rbp+DF0h] BYREF
  char v1840; // [rsp+F0Ah] [rbp+E0Ah]
  unsigned __int16 v1841[34]; // [rsp+F0Ch] [rbp+E0Ch] BYREF
  _BYTE v1842[68]; // [rsp+F50h] [rbp+E50h] BYREF
  __int16 v1843; // [rsp+F94h] [rbp+E94h]
  unsigned __int16 v1844; // [rsp+FF6h] [rbp+EF6h]
  __int64 v1845; // [rsp+FFCh] [rbp+EFCh]
  _QWORD v1846[6]; // [rsp+1030h] [rbp+F30h] BYREF
  int v1847; // [rsp+1060h] [rbp+F60h] BYREF
  __int128 v1848; // [rsp+1068h] [rbp+F68h]
  __int128 v1849; // [rsp+1078h] [rbp+F78h]
  __int128 v1850; // [rsp+1088h] [rbp+F88h]
  __int64 v1851; // [rsp+1098h] [rbp+F98h]
  _QWORD v1852[20]; // [rsp+10A0h] [rbp+FA0h] BYREF
  _WORD v1853[8]; // [rsp+1140h] [rbp+1040h] BYREF
  _BYTE v1854[176]; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR Filename[264]; // [rsp+1200h] [rbp+1100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1448h] [rbp+1348h]

  v1637 = this;
  v1638[0] = 0LL;
  v1565 = 1;
  v1568 = 0;
  v1569 = 0;
  v1504 = 0LL;
  v1570 = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v2 = g_WarbirdSecureFunctionsRefCount;
  v1508 = -1;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_46;
  v1452 = 0;
  lpModuleName = 0LL;
  v1681 = 0LL;
  v3 = (WCHAR *)MemoryAlloc(0x338uLL);
  if ( v3 )
  {
    v4 = (char *)v3 + 7;
    v5 = 0;
    v6 = (unsigned __int8 *)&unk_1804F1AC2;
    v7 = -1;
    v8 = 0;
    v9 = 0;
    v10 = 103LL;
    do
    {
      v11 = *(v6 - 1) | (*(v6 - 2) << 8);
      v12 = v6[2] << 8;
      v13 = *v6;
      v6 += 8;
      v14 = *(v6 - 7) | ((v13 | (v11 << 8)) << 8);
      v15 = v14 ^ v9;
      v16 = *(v6 - 3) | ((*(v6 - 4) | ((*(v6 - 5) | v12) << 8)) << 8);
      v17 = v15 ^ v16 ^ v8 ^ 0xAC987321;
      v18 = (__ROL4__(v17, 10) + 4991 * __ROL4__(v17 + 1419157410, 5)) ^ v15;
      v19 = (43881 * __ROR4__(v18 + 133239679, 9) - __ROL4__(v18, 2)) ^ v17;
      v20 = (24670 * v19 - (v19 >> 13) - 123127970) ^ v18;
      v21 = (2033 * __ROL4__(v20 ^ 0xAB69, 6) - __ROL4__(v20, 2)) ^ v19;
      v22 = (133239679 - (v21 ^ 0xAB69605E)) ^ v20;
      v23 = (43881 * (v22 ^ 0x137F)) ^ __ROR4__(v22, 6) ^ v21;
      v24 = (__ROL4__(v23, 2) + 24670 * __ROR4__(v23 + 133239679, 15)) ^ v22;
      v25 = (2033 * __ROR4__(v24 + 1419157410, 14) - __ROL4__(v24, 8)) ^ v23;
      v26 = __ROR4__(v25, 10) ^ (4991 * __ROR4__(v25 ^ 0xAB69605E, 12)) ^ v24;
      v27 = (v26 >> 10) ^ (43881 * (v26 ^ 0x7F1)) ^ v25;
      v28 = (2033 * (__ROR4__(~v27, 5) + 24670)) ^ v26;
      v29 = v27 ^ (v28 - 2033) ^ 0xAB69605E;
      v30 = ((v29 >> 2) + 4991 * __ROL4__(v27 ^ (v28 - 2033) ^ 0xAB6967AF, 2)) ^ v28;
      v31 = (__ROL4__(v30, 7) + 43881 * __ROR4__(v30 - 133239679, 6)) ^ v29;
      v32 = (24670 * (v31 ^ 0x137F) + __ROR4__(v31, 9)) ^ v30;
      v33 = (__ROL4__(v32, 7) + 2033 * __ROL4__(v32 ^ 0xAB69, 5)) ^ v31;
      v34 = v33 ^ v32 ^ 0xAC987321;
      v35 = (4991 * __ROR4__(v34, 3) - 219010071) ^ v33;
      v36 = (24670 * __ROR4__(v35 - 133239679, 1) - __ROR4__(v35, 6)) ^ v34;
      v37 = (__ROL4__(v36, 14) + 2033 * __ROL4__(v36 - 1419157410, 3)) ^ v35;
      v38 = (4991 * __ROL4__(v37 - 1419157410, 15) - __ROR4__(v37, 14)) ^ v36;
      v39 = (v38 >> 3) ^ (43881 * (v38 ^ 0x605E)) ^ v37;
      v40 = 24670 * __ROL4__(v39 ^ 0x7F1137F, 4);
      v41 = v39;
      v42 = v7 ^ v39;
      v7 = v16;
      v43 = v5 ^ __ROL4__(v41, 2) ^ v40;
      v5 = v14;
      v44 = v43 ^ v38;
      *(v4 - 4) = v44;
      *v4 = v42;
      v4 += 8;
      v45 = __ROR4__(v44, 8);
      *(v4 - 13) = v45;
      v46 = __ROR4__(v42, 8);
      *(v4 - 9) = v46;
      v47 = __ROR4__(v45, 8);
      *(v4 - 14) = v47;
      v48 = __ROR4__(v46, 8);
      *(v4 - 10) = v48;
      v49 = __ROR4__(v47, 8);
      v50 = __ROR4__(v48, 8);
      *(v4 - 15) = v49;
      *(v4 - 11) = v50;
      v8 = __ROR4__(v50, 8);
      v9 = __ROR4__(v49, 8);
      --v10;
    }
    while ( v10 );
    v51 = 0;
    v52 = 0LL;
    v53 = 0;
    v54 = 0;
    do
      v51 ^= *((_BYTE *)v3 + v52++);
    while ( v52 < 0x338 );
    if ( v51 == 64LL )
    {
      lpModuleName = v3;
      v3 = 0LL;
      v1681 = 824LL;
      v55 = 0;
    }
    else
    {
      v55 = -1073425151;
    }
    if ( v3 )
      MemoryFree(v3);
    if ( v55 >= 0 )
    {
      v56 = lpModuleName;
      HIBYTE(lpModuleName[v1681 / 2 - 1]) = 0;
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      if ( !*(_BYTE *)v56 )
        goto LABEL_37;
      while ( 1 )
      {
        v57 = -1LL;
        v58 = v56;
        v53 = 0;
        do
          ++v57;
        while ( v56[v57] );
        v59 = &v56[v57];
        v60 = (char *)&WARBIRD::g_arModuleInfo + 24 * v54;
        if ( !GetModuleHandleExW(0, v58, (HMODULE *)v60) )
          break;
        if ( **(_WORD **)v60 == 23117
          && (v61 = *(int *)(*(_QWORD *)v60 + 60LL), (unsigned int)v61 < 0x10000000)
          && (v62 = *(_QWORD *)v60 + v61, v62 >= *(_QWORD *)v60)
          && *(_DWORD *)v62 == 17744 )
        {
          if ( ((*(_WORD *)(v62 + 24) - 267) & 0xFEFF) != 0 )
          {
            v53 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v60 + 12) = *(_QWORD *)(v62 + 136);
            *((_DWORD *)v60 + 2) = *(_DWORD *)(v62 + 80);
          }
        }
        else
        {
          v53 = -1073741701;
        }
        v63 = *(_DWORD *)(v59 + 1);
        v56 = v59 + 3;
        for ( i = 0; i < v63; ++i )
        {
          v65 = -1LL;
          v66 = (const CHAR *)v56;
          do
            ++v65;
          while ( *((_BYTE *)v56 + v65) );
          v56 = (LPCWSTR)((char *)v56 + v65 + 1);
          if ( v53 >= 0 )
          {
            ProcAddress = (void **)GetProcAddress(*(HMODULE *)v60, v66);
            if ( !ProcAddress )
              goto LABEL_37;
            (&WARBIRD::g_FuncAddress)[v1452] = ProcAddress;
          }
          ++v1452;
        }
        ++v54;
        if ( !*(_BYTE *)v56 )
          goto LABEL_37;
      }
    }
  }
  v53 = -1073741702;
LABEL_37:
  if ( lpModuleName )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)lpModuleName);
  }
  if ( v53 >= 0 )
  {
    v2 = g_WarbirdSecureFunctionsRefCount;
LABEL_46:
    g_WarbirdSecureFunctionsRefCount = v2 + 1;
    goto LABEL_47;
  }
  v69 = 4LL;
  v70 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  do
  {
    if ( *v70 )
      FreeLibrary(*v70);
    v70 += 3;
    --v69;
  }
  while ( v69 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, off_180498000, 0x170uLL);
LABEL_47:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  String1 = 0LL;
  v71 = 0;
  v1683 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_95;
  v73 = ((__int64 (*)(void))off_1805C2210[0])();
  if ( !v73 )
  {
LABEL_49:
    LastError = GetLastError();
    v74 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v74 = LastError < 0;
    }
    if ( !v74 )
      LastError = -2147467259;
    goto LABEL_96;
  }
  v1684 = 0LL;
  v75 = 0LL;
  for ( j = 0LL; ; v1684 = j )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1805C2230[0])(
           v73,
           2LL,
           j,
           v75,
           &v1571) )
    {
      String1 = j;
      goto LABEL_66;
    }
    v77 = GetLastError();
    if ( v77 != 122 )
      break;
    if ( j )
      goto LABEL_60;
    j = (wchar_t *)MemoryAlloc(v1571);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1684);
    if ( !j )
    {
      LastError = -2147024882;
LABEL_66:
      v1684 = 0LL;
      goto LABEL_67;
    }
    v75 = v1571;
  }
  if ( !v77 )
  {
LABEL_60:
    LastError = -2147467259;
    goto LABEL_67;
  }
  if ( v77 > 0 )
    LastError = (unsigned __int16)v77 | 0x80070000;
  else
    LastError = v77;
LABEL_67:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1684);
  if ( LastError >= 0 )
  {
    v78 = off_1805C2228[0];
    CurrentThreadId = GetCurrentThreadId();
    v80 = ((__int64 (__fastcall *)(_QWORD))v78)(CurrentThreadId);
    if ( !v80 )
    {
      LastError = GetLastError();
      v81 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v81 = LastError < 0;
      }
      if ( !v81 )
        LastError = -2147467259;
      goto LABEL_96;
    }
    v1686 = 0LL;
    LastError = 0;
    v82 = 0LL;
    for ( k = 0LL; ; v1686 = k )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1805C2230[0])(
             v80,
             2LL,
             k,
             v82,
             &v1573) )
      {
        v1683 = k;
        goto LABEL_86;
      }
      v84 = GetLastError();
      if ( v84 != 122 )
        break;
      if ( k )
        goto LABEL_80;
      k = (wchar_t *)MemoryAlloc(v1573);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1686);
      if ( !k )
      {
        LastError = -2147024882;
LABEL_86:
        v1686 = 0LL;
        goto LABEL_87;
      }
      v82 = v1573;
    }
    if ( !v84 )
    {
LABEL_80:
      LastError = -2147467259;
      goto LABEL_87;
    }
    LastError = v84 > 0 ? (unsigned __int16)v84 | 0x80070000 : v84;
LABEL_87:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1686);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1683 && !wcscmp_0(v1683, L"Default") )
      {
        v1507 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1507) )
          goto LABEL_49;
        if ( (v1507 & 0xF) == 0 )
          v71 = 1;
      }
LABEL_95:
      v1570 = v71;
    }
  }
LABEL_96:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1683);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&String1);
  v86 = v1570;
  if ( LastError < 0 )
    v86 = 0;
  v1570 = v86;
  v1440 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1504);
  if ( !v1440 )
  {
    v1504 = 0LL;
    v87 = -2147024882;
LABEL_100:
    v88 = v1507;
    LODWORD(v89) = 0;
    goto LABEL_101;
  }
  v94 = 0LL;
  lpMem = 0LL;
  v95 = 0LL;
  v1574 = 0;
  v1588 = 0;
  v1504 = v1440;
  v1687 = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
  *(_OWORD *)v1728 = 0LL;
  v96 = GetProcessHeap();
  v97 = (unsigned __int16 *)HeapAlloc(v96, 8u, 0xA0uLL);
  v87 = -1073741801;
  if ( !v97 )
  {
LABEL_114:
    v1465 = v87;
    goto LABEL_201;
  }
  v98 = v1687;
  v94 = v97;
  v1404 = v97;
  *(_OWORD *)v97 = *v1687;
  *((_OWORD *)v97 + 1) = v98[1];
  *((_OWORD *)v97 + 2) = v98[2];
  *((_OWORD *)v97 + 3) = v98[3];
  *((_OWORD *)v97 + 4) = v98[4];
  *((_OWORD *)v97 + 5) = v98[5];
  *((_OWORD *)v97 + 6) = v98[6];
  *((_OWORD *)v97 + 7) = v98[7];
  *((_OWORD *)v97 + 8) = v98[8];
  *((_OWORD *)v97 + 9) = v98[9];
  v1622 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v99 = GetProcessHeap();
  v95 = (unsigned __int16 *)HeapAlloc(v99, 8u, 8uLL);
  if ( !v95 )
  {
    v1465 = -1073741801;
    v95 = 0LL;
    goto LABEL_201;
  }
  v1388 = v95;
  *(_QWORD *)v95 = *v1622;
  v1623 = __rdtsc();
  dwBytes = 0;
  v100 = RtlUIntAdd(4LL, 4LL, &dwBytes_4);
  v101 = v1613;
  v87 = v100;
  v1465 = v100;
  if ( v100 >= 0 )
    v101 = dwBytes_4;
  v1613 = v101;
  if ( v100 >= 0 )
  {
    v102 = RtlUIntAdd(0LL, v101, &dwBytes);
    v87 = v102 | 0x10000000;
    v1465 = v102 | 0x10000000;
    if ( v102 >= 0 )
    {
      v104 = RtlUIntAdd(v103, 160LL, &v1614);
      v1465 = v104;
      v87 = v104;
      if ( v104 >= 0 )
        v101 = v1614;
      v1613 = v101;
      if ( v104 >= 0 )
      {
        v105 = RtlUIntAdd(dwBytes, v101, &dwBytes);
        v87 = v107 | v105;
        v1465 = v107 | v105;
        if ( (v107 | v105) >= 0 )
        {
          v108 = RtlUIntAdd(v106, v106 + 4, &v1616);
          v1465 = v108;
          v87 = v108;
          if ( v108 >= 0 )
            v101 = v1616;
          v1613 = v101;
          if ( v108 >= 0 )
          {
            v109 = RtlUIntAdd(dwBytes, v101, &dwBytes);
            v87 = v111 | v109;
            v1465 = v111 | v109;
            if ( (v111 | v109) >= 0 )
            {
              v112 = RtlUIntAdd(v110, v110 + 4, &v1617);
              v1465 = v112;
              v87 = v112;
              if ( v112 >= 0 )
                v101 = v1617;
              v1613 = v101;
              if ( v112 >= 0 )
              {
                v113 = RtlUIntAdd(dwBytes, v101, &dwBytes);
                v87 = v115 | v113;
                v1465 = v115 | v113;
                if ( (v115 | v113) >= 0 )
                {
                  if ( StringCchLengthW(L"Feeds-AllowFeeds-Enabled", v114, &pcchLength) < 0 )
                  {
                    v87 = -1073741762;
                    goto LABEL_114;
                  }
                  v117 = RtlUIntAdd(v116, (unsigned int)(2 * ++pcchLength), &v1618);
                  v1465 = v117;
                  v87 = v117;
                  if ( v117 >= 0 )
                    v101 = v1618;
                  v1613 = v101;
                  if ( v117 < 0 )
                    goto LABEL_201;
                  v118 = RtlUIntAdd(dwBytes, v101, &dwBytes);
                  v87 = v118 | 0x10000000;
                  v1465 = v118 | 0x10000000;
                  if ( v118 < 0 )
                    goto LABEL_201;
                  v120 = RtlUIntAdd(v119, v119, &v1619);
                  v1465 = v120;
                  v87 = v120;
                  if ( v120 >= 0 )
                    v101 = v1619;
                  v1613 = v101;
                  if ( v120 < 0 )
                    goto LABEL_201;
                  v121 = RtlUIntAdd(dwBytes, v101, &dwBytes);
                  v87 = v123 | v121;
                  v1465 = v123 | v121;
                  if ( (v123 | v121) < 0 )
                    goto LABEL_201;
                  v124 = RtlUIntAdd(v122, v122, &v1620);
                  v1465 = v124;
                  v87 = v124;
                  if ( v124 >= 0 )
                    v101 = v1620;
                  v1613 = v101;
                  if ( v124 < 0 )
                    goto LABEL_201;
                  v125 = RtlUIntAdd(dwBytes, v101, &dwBytes);
                  v87 = v126 | v125;
                  v1465 = v126 | v125;
                  if ( (v126 | v125) < 0 )
                    goto LABEL_201;
                  HIDWORD(Size) = dwBytes;
                  v127 = dwBytes;
                  v128 = GetProcessHeap();
                  v129 = HeapAlloc(v128, 8u, v127);
                  if ( !v129 )
                  {
                    v87 = -1073741801;
                    goto LABEL_114;
                  }
                  lpMem = v129;
                  LODWORD(Size) = 0;
                  v1514 = 0;
                  v87 = RtlULongLongAdd(v129, 4LL, &v1721);
                  v1465 = v87;
                  v131 = 0;
                  if ( v87 >= 0 )
                  {
                    if ( v129 + 2 > (_DWORD *)((char *)v129 + HIDWORD(Size)) )
                    {
LABEL_151:
                      v87 = -1073741789;
                      goto LABEL_114;
                    }
                    v132 = v1721;
                    *v129 = v130;
                    *v132 = v1514;
                    v131 = Size + 1;
                    LODWORD(Size) = Size + 1;
                  }
                  if ( v87 < 0 )
                    goto LABEL_201;
                  if ( lpMem )
                  {
                    v136 = lpMem;
                    v1625 = lpMem;
                    if ( v131 )
                    {
                      do
                      {
                        v87 = RtlUIntAdd((unsigned int)v130, (unsigned int)*v136, &v1517);
                        v1465 = v87;
                        if ( v87 >= 0 )
                          v137 = v1517;
                        v1516 = v137;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v87 = RtlULongLongAdd(v136, v137, &v1625);
                        v1465 = v87;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v136 = v1625;
                      }
                      while ( v138 + 1 < (unsigned int)Size );
                    }
                    v87 = RtlULongLongAdd(v136, v130, &v1730);
                    v1465 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    if ( v136 + 41 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                      goto LABEL_151;
                    v139 = v1730;
                    *v136 = 160;
                    *v139 = *(_OWORD *)v97;
                    v139[1] = *((_OWORD *)v97 + 1);
                    v139[2] = *((_OWORD *)v97 + 2);
                    v139[3] = *((_OWORD *)v97 + 3);
                    v139[4] = *((_OWORD *)v97 + 4);
                    v139[5] = *((_OWORD *)v97 + 5);
                    v139[6] = *((_OWORD *)v97 + 6);
                    v139[7] = *((_OWORD *)v97 + 7);
                    v139[8] = *((_OWORD *)v97 + 8);
                    v139[9] = *((_OWORD *)v97 + 9);
                    LODWORD(Size) = Size + 1;
                  }
                  else
                  {
                    v133 = RtlUIntAdd((unsigned int)v130, 160LL, &v1515);
                    v134 = v1516;
                    v87 = v133;
                    v1465 = v133;
                    if ( v133 >= 0 )
                      v134 = v1515;
                    v1516 = v134;
                    if ( v133 < 0 )
                      goto LABEL_201;
                    v87 = RtlUIntAdd(HIDWORD(Size), v134, (char *)&Size + 4);
                    v1465 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    LODWORD(Size) = Size + 1;
                  }
                  if ( lpMem )
                  {
                    v142 = lpMem;
                    v1626 = lpMem;
                    if ( (_DWORD)Size )
                    {
                      while ( 1 )
                      {
                        v143 = RtlUIntAdd((unsigned int)v135, (unsigned int)*v142, &v1520);
                        v1465 = v143;
                        v87 = v143;
                        if ( v143 >= 0 )
                          v144 = v1520;
                        v1519 = v144;
                        if ( v143 < 0 )
                          break;
                        v1465 = RtlULongLongAdd(v142, v144, &v1626);
                        v87 = v1465;
                        if ( v1465 < 0 )
                          break;
                        v142 = v1626;
                        if ( v145 + 1 >= (unsigned int)Size )
                          goto LABEL_181;
                      }
                    }
                    else
                    {
LABEL_181:
                      v1465 = RtlULongLongAdd(v142, v135, &v1731);
                      v87 = v1465;
                      if ( v1465 >= 0 )
                      {
                        if ( v142 + 3 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                          goto LABEL_151;
                        v146 = v1731;
                        *v142 = 8;
                        *v146 = *(_QWORD *)v95;
                        LODWORD(Size) = Size + 1;
                      }
                    }
                  }
                  else
                  {
                    v140 = RtlUIntAdd((unsigned int)v135, 8LL, &v1518);
                    v141 = v1519;
                    v87 = v140;
                    v1465 = v140;
                    if ( v140 >= 0 )
                      v141 = v1518;
                    v1519 = v141;
                    if ( v140 >= 0 )
                    {
                      v1465 = RtlUIntAdd(HIDWORD(Size), v141, (char *)&Size + 4);
                      v87 = v1465;
                      if ( v1465 < 0 )
                        goto LABEL_201;
                      LODWORD(Size) = Size + 1;
                      goto LABEL_185;
                    }
                  }
                  if ( v87 < 0 )
                    goto LABEL_201;
LABEL_185:
                  v1627 = v1623;
                  if ( lpMem )
                  {
                    v150 = lpMem;
                    v1628 = lpMem;
                    if ( (_DWORD)Size )
                    {
                      do
                      {
                        v151 = RtlUIntAdd((unsigned int)v135, (unsigned int)*v150, &v1523);
                        v1465 = v151;
                        v87 = v151;
                        if ( v151 >= 0 )
                          v152 = v1523;
                        v1522 = v152;
                        if ( v151 < 0 )
                          goto LABEL_201;
                        v1465 = RtlULongLongAdd(v150, v152, &v1628);
                        v87 = v1465;
                        if ( v1465 < 0 )
                          goto LABEL_201;
                        v150 = v1628;
                      }
                      while ( v153 + 1 < (unsigned int)Size );
                    }
                    v1465 = RtlULongLongAdd(v150, v135, &v1732);
                    v87 = v1465;
                    if ( v1465 < 0 )
                      goto LABEL_201;
                    if ( v150 + 3 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                    {
                      v87 = -1073741789;
LABEL_200:
                      v1465 = v87;
                      goto LABEL_201;
                    }
                    v161 = v1732;
                    *v150 = 8;
                    *v161 = v1627;
                    LODWORD(Size) = Size + 1;
                  }
                  else
                  {
                    v147 = RtlUIntAdd((unsigned int)v135, 8LL, &v1521);
                    v148 = v1522;
                    v87 = v147;
                    v1465 = v147;
                    if ( v147 >= 0 )
                      v148 = v1521;
                    v1522 = v148;
                    if ( v147 < 0 )
                      goto LABEL_201;
                    v1465 = RtlUIntAdd(HIDWORD(Size), v148, (char *)&Size + 4);
                    v87 = v1465;
                    if ( v1465 < 0 )
                      goto LABEL_201;
                    LODWORD(Size) = Size + 1;
                  }
                  if ( StringCchLengthW(L"Feeds-AllowFeeds-Enabled", v149, &v1629) < 0 )
                  {
                    v87 = -1073741762;
                    goto LABEL_200;
                  }
                  v1465 = RtlULongLongAdd(v1629, 1LL, &v1629);
                  v87 = v1465;
                  if ( v1465 < 0 )
                    goto LABEL_201;
                  if ( 2 * (_DWORD)v1629 )
                  {
                    if ( lpMem )
                    {
                      v165 = lpMem;
                      v1630 = lpMem;
                      if ( (_DWORD)Size )
                      {
                        while ( 1 )
                        {
                          v166 = RtlUIntAdd(4LL, (unsigned int)*v165, &v1526);
                          v1465 = v166;
                          v87 = v166;
                          if ( v166 >= 0 )
                            v168 = v1526;
                          v1525 = v168;
                          if ( v166 < 0 )
                            break;
                          v1465 = RtlULongLongAdd(v165, v168, &v1630);
                          v87 = v1465;
                          if ( v1465 < 0 )
                            goto LABEL_237;
                          v165 = v1630;
                          if ( v169 + 1 >= (unsigned int)Size )
                            goto LABEL_233;
                        }
                        v162 = v167;
                      }
                      else
                      {
LABEL_233:
                        v1465 = RtlULongLongAdd(v165, 4LL, &v1733);
                        v87 = v1465;
                        if ( v1465 < 0 )
                          goto LABEL_201;
                        if ( (char *)v165 + v170 + 4 <= (char *)lpMem + HIDWORD(Size) )
                        {
                          v171 = v1733;
                          *v165 = v170;
                          memcpy_0(v171, L"Feeds-AllowFeeds-Enabled", (unsigned int)v170);
                          LODWORD(Size) = Size + 1;
LABEL_237:
                          v162 = 4LL;
                        }
                        else
                        {
                          v87 = -1073741789;
                          v1465 = -1073741789;
                        }
                      }
                    }
                    else
                    {
                      v163 = RtlUIntAdd((unsigned int)v162, (unsigned int)(2 * v1629), &v1524);
                      v164 = v1525;
                      v87 = v163;
                      v1465 = v163;
                      if ( v163 >= 0 )
                        v164 = v1524;
                      v1525 = v164;
                      if ( v163 < 0 )
                        goto LABEL_201;
                      v87 = RtlUIntAdd(HIDWORD(Size), v164, (char *)&Size + 4);
                      v1465 = v87;
                      if ( v87 < 0 )
                        goto LABEL_201;
                      LODWORD(Size) = Size + 1;
                      v87 = 0;
                      v1465 = 0;
                    }
                  }
                  else
                  {
                    v87 = -1073741811;
                    v1465 = -1073741811;
                  }
                  if ( v87 < 0 )
                    goto LABEL_201;
                  v1527 = v1570;
                  if ( lpMem )
                  {
                    v175 = lpMem;
                    v1631 = lpMem;
                    if ( (_DWORD)Size )
                    {
                      do
                      {
                        v87 = RtlUIntAdd((unsigned int)v162, (unsigned int)*v175, &v1530);
                        v1465 = v87;
                        if ( v87 >= 0 )
                          v176 = v1530;
                        v1529 = v176;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v87 = RtlULongLongAdd(v175, v176, &v1631);
                        v1465 = v87;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v175 = v1631;
                      }
                      while ( v177 + 1 < (unsigned int)Size );
                    }
                    v87 = RtlULongLongAdd(v175, v162, &v1734);
                    v1465 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    if ( v175 + 2 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                      goto LABEL_255;
                    v178 = v1734;
                    *v175 = v174;
                    *v178 = v1527;
                    LODWORD(Size) = Size + 1;
                  }
                  else
                  {
                    v172 = RtlUIntAdd((unsigned int)v162, (unsigned int)v162, &v1528);
                    v173 = v1529;
                    v87 = v172;
                    v1465 = v172;
                    if ( v172 >= 0 )
                      v173 = v1528;
                    v1529 = v173;
                    if ( v172 < 0 )
                      goto LABEL_201;
                    v87 = RtlUIntAdd(HIDWORD(Size), v173, (char *)&Size + 4);
                    v1465 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    LODWORD(Size) = Size + 1;
                  }
                  v1531 = v174;
                  if ( !lpMem )
                  {
                    v179 = RtlUIntAdd((unsigned int)v174, (unsigned int)v174, &v1532);
                    v180 = v1533;
                    v87 = v179;
                    v1465 = v179;
                    if ( v179 >= 0 )
                      v180 = v1532;
                    v1533 = v180;
                    if ( v179 < 0 )
                      goto LABEL_699;
                    v1465 = RtlUIntAdd(HIDWORD(Size), v180, (char *)&Size + 4);
                    v87 = v1465;
                    if ( v1465 < 0 )
                      goto LABEL_699;
                    LODWORD(Size) = Size + 1;
LABEL_272:
                    v187 = RtlUIntAdd(v181, v181, &v1535);
                    v189 = v1536;
                    v87 = v187;
                    v1465 = v187;
                    if ( v187 >= 0 )
                      v189 = v1535;
                    v1536 = v189;
                    if ( v187 < 0 )
                      goto LABEL_297;
                    v1537 = v189;
                    v190 = RtlUIntAdd(v188, 8LL, &v1538);
                    v1465 = v190;
                    v192 = v191;
                    v87 = v190;
                    if ( v190 >= 0 )
                      v192 = v1538;
                    v1536 = v192;
                    if ( v190 < 0 )
                      goto LABEL_297;
                    v1465 = RtlUIntAdd(v191, v192, &v1537);
                    v87 = v1465;
                    if ( v1465 < 0 )
                      goto LABEL_297;
                    v194 = RtlUIntAdd(v193, v193, &v1539);
                    v1465 = v194;
                    v87 = v194;
                    if ( v194 >= 0 )
                      v192 = v1539;
                    v1536 = v192;
                    if ( v194 < 0 )
                      goto LABEL_297;
                    v1465 = RtlUIntAdd(v1537, v192, &v1537);
                    v87 = v1465;
                    if ( v1465 < 0 )
                      goto LABEL_297;
                    v196 = RtlUIntAdd(v195, v195, &v1540);
                    v1465 = v196;
                    v87 = v196;
                    if ( v196 >= 0 )
                      v192 = v1540;
                    v1536 = v192;
                    if ( v196 < 0 )
                      goto LABEL_297;
                    v1465 = RtlUIntAdd(v1537, v192, &v1537);
                    v87 = v1465;
                    if ( v1465 < 0 )
                      goto LABEL_297;
                    v198 = RtlUIntAdd(v197, v197, &v1541);
                    v1465 = v198;
                    v87 = v198;
                    if ( v198 >= 0 )
                      v192 = v1541;
                    v1536 = v192;
                    if ( v198 < 0 )
                      goto LABEL_297;
                    v1465 = RtlUIntAdd(v1537, v192, &v1537);
                    v87 = v1465;
                    if ( v1465 < 0 )
                      goto LABEL_297;
                    v200 = RtlUIntAdd(v199, v199, &v1506);
                    v1465 = v200;
                    v87 = v200;
                    if ( v200 >= 0 )
                      v192 = v1506;
                    v1536 = v192;
                    if ( v200 < 0 )
                    {
LABEL_297:
                      v201 = v1506;
                    }
                    else
                    {
                      v87 = RtlUIntAdd(v1537, v192, &v1537);
                      v1465 = v87;
                      v201 = v1506;
                      if ( v87 >= 0 )
                        v201 = v1537;
                    }
                    v1367 = v201;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    v202 = 0LL;
                    v1419 = 0LL;
                    v203 = 0;
                    v1633 = 0LL;
                    v1443 = 0LL;
                    v204 = 0;
                    v1431 = 0LL;
                    v1555 = 0;
                    v1473 = 0LL;
                    v1509 = 0LL;
                    v1542 = 0;
                    v1634 = __rdtsc();
                    v1543 = 8;
                    v205 = RtlUIntAdd(8LL, HIDWORD(Size), &v1543);
                    if ( v205 >= 0 )
                    {
                      v206 = (v1543 + 7) & 0xFFFFFFF8;
                      if ( v206 >= v1543 )
                      {
                        v1543 = (v1543 + 7) & 0xFFFFFFF8;
                        v207 = v206;
                        v208 = GetProcessHeap();
                        v209 = HeapAlloc(v208, 8u, v207);
                        if ( v209 )
                        {
                          v1635 = v209;
                          *v209 = Size;
                          v205 = RtlULongLongAdd(v209, 4LL, &v1635);
                          if ( v205 >= 0 )
                          {
                            v211 = v1635;
                            *(_DWORD *)v1635 = HIDWORD(Size);
                            v205 = RtlULongLongAdd(v211, v210, &v1635);
                            if ( v205 >= 0 )
                            {
                              *(_QWORD *)((char *)v209 + v1543 - 8) = v1634;
                              memcpy_0(v1635, lpMem, HIDWORD(Size));
                              v203 = v1543;
                              v1419 = (unsigned __int16 *)v209;
                              v209 = 0LL;
                            }
                          }
                          if ( v209 )
                          {
                            v212 = GetProcessHeap();
                            HeapFree(v212, 0, v209);
                          }
                          v202 = v1419;
                        }
                        else
                        {
                          v205 = -1073741801;
                          v202 = 0LL;
                        }
                      }
                      else
                      {
                        v205 = -1073741675;
                      }
                    }
                    v87 = v205 | 0x10000000;
                    v1465 = v87;
                    if ( v87 < 0 )
                      goto LABEL_587;
                    v1636 = 0LL;
                    v213 = 0LL;
                    if ( v202 )
                    {
                      v215 = v203;
                      v1459 = v203;
                      if ( v203 && (v1479 = v203 + 8LL, v216 = MemoryAlloc(v1479), Src = v216, v217 = 0, v216) )
                      {
                        v218 = 0;
                        for ( m = 0LL; m < v203; v217 ^= *((_BYTE *)v202 + m++) )
                          ;
                        v1365 = v217;
                        v220 = -1;
                        v1795 = 0xC81ECB17B1B54A58uLL;
                        v1466 = 0;
                        v1453 = 0;
                        v221 = v202;
                        v222 = v216;
                        v223 = 0;
                        v224 = v215 & 7;
                        if ( (v215 & 7) != 0 )
                        {
                          v225 = 0;
                          v1453 = 0;
                          v226 = 56;
                          do
                          {
                            v227 = *(unsigned __int8 *)v221;
                            v221 = (unsigned __int16 *)((char *)v221 + 1);
                            if ( v225 >= 4 )
                            {
                              v228 = v1453;
                              v218 |= v227 << v226;
                            }
                            else
                            {
                              v228 = (v227 << (v226 - 32)) | v1453;
                              v1453 = v228;
                            }
                            ++v225;
                            v226 -= 8;
                          }
                          while ( v225 < (int)v224 );
                          v1466 = v218;
                          v223 = v228 ^ 0xB17A307A;
                          v229 = v218 ^ 0x42F6B18D;
                          v230 = 0;
                          v231 = v228 ^ 0xB17A307A;
                          v232 = v229;
                          if ( (v215 & 7) != 0 )
                          {
                            do
                            {
                              if ( v230 >= 4 )
                              {
                                v232 = __ROL4__(v232, 8);
                                v233 = v232;
                              }
                              else
                              {
                                v231 = __ROL4__(v231, 8);
                                v233 = v231;
                              }
                              *v222 = v233;
                              ++v230;
                              ++v222;
                            }
                            while ( v230 < (int)v224 );
                          }
                          if ( v224 <= 4 )
                          {
                            v220 = 0;
                            if ( v224 < 4 )
                              v223 = v223 >> (8 * (4 - v224)) << (8 * (4 - v224));
                          }
                          else
                          {
                            v220 = v229 >> (8 * (8 - v224)) << (8 * (8 - v224));
                          }
                        }
                        v234 = v215 >> 3;
                        if ( v215 >> 3 )
                        {
                          v235 = (unsigned __int8 *)(v221 + 1);
                          v236 = v1466;
                          v237 = v1453;
                          v1493 = v222 + 7;
                          v238 = HIDWORD(v1795) ^ 0xB1B54A58;
                          v239 = WORD1(v1795);
                          v1379 = WORD1(v1795);
                          v240 = WORD2(v1795);
                          do
                          {
                            v241 = v235[1] | ((*v235 | ((*(v235 - 1) | (*(v235 - 2) << 8)) << 8)) << 8);
                            v242 = v235[5] | ((v235[4] | ((v235[3] | (v235[2] << 8)) << 8)) << 8);
                            v243 = v242 ^ v220;
                            v244 = v241 ^ HIDWORD(v1795) ^ (v243 - 19032) ^ v223;
                            v245 = (__ROR4__(v244, 7) + v239 * __ROR4__(v244 ^ HIDWORD(v1795), 15)) ^ v243;
                            v246 = (v240 * __ROR4__(v245 - 1313519016, 9) - __ROR4__(v245, 10)) ^ v244;
                            v247 = (__ROL4__(v246, 5) + HIWORD(v1795) * __ROL4__(v246 ^ v240, 4)) ^ v245;
                            v248 = (HIDWORD(v1795) - (v247 ^ 0xB1B54A58)) ^ v246;
                            v249 = (WORD1(v1795) * (v248 - 19032) - (v248 >> 6)) ^ v247;
                            v250 = (19032 * (v240 ^ __ROR4__(v249, 15))) ^ v248;
                            v251 = (v240 * (HIWORD(v1795) + __ROR4__(~v250, 3))) ^ v249;
                            v252 = (v251 - HIDWORD(v1795) - 19032) ^ v250;
                            v253 = (v1379 * (v252 ^ HIWORD(v1795))) ^ __ROR4__(v252, 10) ^ v251;
                            v254 = __ROR4__(v253, 3) ^ (v240 * __ROL4__(v253 ^ 0x4A58, 6)) ^ v252;
                            v255 = (19032 * (__ROR4__(v254, 15) - HIWORD(v1795))) ^ v253;
                            v256 = (v255 >> 15) ^ (19032 * __ROL4__(v255 - v240, 3)) ^ (v255 >> 1) ^ (19032 * (v255 ^ HIWORD(v1795))) ^ v254;
                            v257 = (WORD1(v1795) * (v256 - v240) - (v256 >> 13)) ^ v255;
                            v258 = __ROR4__(v257, 11) ^ (v240 * __ROR4__(-1313519016 - v257, 9)) ^ v256;
                            v259 = (v258 - HIWORD(v1795) + 1313519016) ^ v257;
                            v260 = (19032 * (v259 ^ WORD1(v1795)) - __ROR4__(v259, 7)) ^ v258;
                            v261 = (WORD1(v1795) * __ROL4__(v260 ^ HIWORD(v1795), 4) - __ROR4__(v260, 16)) ^ v259;
                            v262 = (__ROR4__(v261, 4) + v240 * __ROR4__(-1313519016 - v261, 10)) ^ v260;
                            v263 = __ROR4__(v262, 9) ^ (HIWORD(v1795) * __ROR4__(v262 + 1313519016, 4)) ^ v261;
                            v264 = (19032 * __ROL4__(v263 ^ HIDWORD(v1795), 8) - __ROL4__(v263, 2)) ^ v262;
                            v239 = WORD1(v1795);
                            v265 = (WORD1(v1795) * __ROR4__(HIDWORD(v1795) - v264, 11) - __ROR4__(v264, 12)) ^ v263;
                            v266 = (v265 >> 8) ^ (v240 * (v265 ^ WORD1(v1795))) ^ v264;
                            v235 += 8;
                            v267 = v266 ^ v238 ^ v265;
                            v268 = v237 ^ v266;
                            v269 = v236 ^ v267;
                            v237 = v241;
                            *(v1493 - 4) = v268;
                            v236 = v242;
                            *v1493 = v269;
                            v270 = __ROR4__(v268, 8);
                            *(v1493 - 5) = v270;
                            v271 = __ROR4__(v269, 8);
                            *(v1493 - 1) = v271;
                            v272 = __ROR4__(v270, 8);
                            *(v1493 - 6) = v272;
                            v273 = __ROR4__(v271, 8);
                            *(v1493 - 2) = v273;
                            v274 = __ROR4__(v272, 8);
                            v275 = __ROR4__(v273, 8);
                            *(v1493 - 7) = v274;
                            *(v1493 - 3) = v275;
                            v220 = __ROR4__(v275, 8);
                            v223 = __ROR4__(v274, 8);
                            v1493 += 8;
                            --v234;
                          }
                          while ( v234 );
                          v217 = v1365;
                          v213 = 0LL;
                          v215 = v1459;
                          v216 = Src;
                        }
                        *(_QWORD *)&v216[v215] = v217;
                        v1638[1] = v1479;
                        v1636 = v216;
                        v1638[3] = 8LL;
                        v1638[2] = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                        v1638[5] = 160LL;
                        v1638[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
                        v276 = GetProcessHeap();
                        v277 = HeapAlloc(v276, 8u, 0x30uLL);
                        if ( v277 )
                        {
                          *(_DWORD *)v277 = v1479;
                          v278 = GetProcessHeap();
                          v279 = HeapAlloc(v278, 8u, (unsigned int)v1479);
                          if ( !v279 )
                            goto LABEL_339;
                          v277[1] = v279;
                          memcpy_0(v279, v216, (unsigned int)v1479);
                          *((_DWORD *)v277 + 4) = 160;
                          v280 = GetProcessHeap();
                          v281 = HeapAlloc(v280, 8u, 0xA0uLL);
                          if ( !v281 )
                            goto LABEL_339;
                          v277[3] = v281;
                          *v281 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                          v281[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                          v281[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                          v281[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                          v281[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                          v281[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                          v281[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                          v281[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                          v281[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                          v281[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                          *((_DWORD *)v277 + 8) = 8;
                          v282 = GetProcessHeap();
                          v283 = HeapAlloc(v282, 8u, 8uLL);
                          if ( v283 )
                          {
                            v277[5] = v283;
                            v214 = 0;
                            v213 = v277;
                            *v283 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                            v277 = 0LL;
                          }
                          else
                          {
LABEL_339:
                            v214 = -1073741801;
                          }
                          if ( v277 )
                          {
                            v284 = (void *)v277[1];
                            if ( v284 )
                            {
                              v285 = GetProcessHeap();
                              HeapFree(v285, 0, v284);
                              v277[1] = 0LL;
                            }
                            v286 = (void *)v277[3];
                            if ( v286 )
                            {
                              v287 = GetProcessHeap();
                              HeapFree(v287, 0, v286);
                              v277[3] = 0LL;
                            }
                            v288 = (void *)v277[5];
                            if ( v288 )
                            {
                              v289 = GetProcessHeap();
                              HeapFree(v289, 0, v288);
                              v277[5] = 0LL;
                            }
                            v290 = GetProcessHeap();
                            HeapFree(v290, 0, v277);
                          }
                        }
                        else
                        {
                          v214 = -1073741801;
                        }
                        if ( v214 >= 0 )
                        {
                          v1633 = v213;
                          v213 = 0LL;
                        }
                      }
                      else
                      {
                        v214 = -1073741823;
                      }
                      v291 = v1636;
                      if ( v1636 )
                      {
                        v292 = GetProcessHeap();
                        HeapFree(v292, 0, v291);
                        v1636 = 0LL;
                      }
                      if ( v213 )
                      {
                        v293 = (void *)v213[1];
                        if ( v293 )
                        {
                          v294 = GetProcessHeap();
                          HeapFree(v294, 0, v293);
                          v213[1] = 0LL;
                        }
                        v295 = (void *)v213[3];
                        if ( v295 )
                        {
                          v296 = GetProcessHeap();
                          HeapFree(v296, 0, v295);
                          v213[3] = 0LL;
                        }
                        v297 = (void *)v213[5];
                        if ( v297 )
                        {
                          v298 = GetProcessHeap();
                          HeapFree(v298, 0, v297);
                          v213[5] = 0LL;
                        }
                        v299 = GetProcessHeap();
                        HeapFree(v299, 0, v213);
                      }
                      v204 = 0;
                    }
                    else
                    {
                      v214 = -1073741811;
                    }
                    v87 = v214 | 0x10000000;
                    v1465 = v87;
                    if ( v87 < 0 )
                      goto LABEL_587;
                    v300 = (const void **)v1633;
                    v1544 = 4;
                    v301 = RtlUIntAdd(4LL, *(unsigned int *)v1633, &v1544);
                    if ( v301 < 0
                      || (v301 = RtlUIntAdd(v1544, 4LL, &v1544), v301 < 0)
                      || (v301 = RtlUIntAdd(v1544, *((unsigned int *)v300 + 4), &v1544), v301 < 0) )
                    {
                      v302 = 0;
                    }
                    else
                    {
                      v302 = 0;
                      v301 = RtlUIntAdd(v1544, 4LL, &v1544);
                      if ( v301 >= 0 )
                      {
                        v301 = RtlUIntAdd(v1544, *((unsigned int *)v300 + 8), &v1544);
                        v303 = v1545;
                        if ( v301 >= 0 )
                          v303 = v1544;
                        v1545 = v303;
LABEL_375:
                        if ( v301 >= 0 )
                        {
                          v304 = v303;
                          v305 = GetProcessHeap();
                          v306 = HeapAlloc(v305, 8u, v304);
                          if ( v306 )
                          {
                            *v306 = *(_DWORD *)v300;
                            v1639 = v306;
                            v301 = RtlULongLongAdd(v306, 4LL, &v1639);
                            if ( v301 >= 0 )
                            {
                              memcpy_0(v1639, v300[1], *(unsigned int *)v300);
                              v301 = RtlULongLongAdd(v1639, *(unsigned int *)v300, &v1639);
                              if ( v301 >= 0 )
                              {
                                v307 = v1639;
                                *(_DWORD *)v1639 = *((_DWORD *)v300 + 4);
                                v301 = RtlULongLongAdd(v307, 4LL, &v1639);
                                if ( v301 >= 0 )
                                {
                                  memcpy_0(v1639, v300[3], *((unsigned int *)v300 + 4));
                                  v301 = RtlULongLongAdd(v1639, *((unsigned int *)v300 + 4), &v1639);
                                  if ( v301 >= 0 )
                                  {
                                    v308 = v1639;
                                    *(_DWORD *)v1639 = *((_DWORD *)v300 + 8);
                                    v301 = RtlULongLongAdd(v308, 4LL, &v1639);
                                    if ( v301 >= 0 )
                                    {
                                      memcpy_0(v1639, v300[5], *((unsigned int *)v300 + 8));
                                      v301 = RtlULongLongAdd(v1639, *((unsigned int *)v300 + 8), &v1639);
                                      if ( v301 >= 0 )
                                      {
                                        v204 = v1545;
                                        v1443 = v306;
                                        v306 = 0LL;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            if ( v306 )
                            {
                              v309 = GetProcessHeap();
                              HeapFree(v309, 0, v306);
                            }
                          }
                          else
                          {
                            v301 = -1073741801;
                          }
                        }
                        v87 = v301 | 0x10000000;
                        v1465 = v87;
                        if ( v87 < 0 )
                          goto LABEL_587;
                        v1640 = 0LL;
                        v1546 = 0;
                        v1641 = 0LL;
                        v1547 = 0;
                        v1548 = 8;
                        v310 = RtlUIntAdd(8LL, v1367, &v1548);
                        v87 = v310 | 0x10000000;
                        v1465 = v310 | 0x10000000;
                        if ( v310 >= 0 )
                        {
                          v312 = (v1548 + 7) & 0xFFFFFFF8;
                          if ( v312 >= v1548 )
                          {
                            v1550 = (v1548 + 7) & 0xFFFFFFF8;
                            v314 = RtlUIntAdd(v312, v311, &v1550);
                            v313 = v1549;
                            v87 = v314;
                            v1465 = v314;
                            if ( v314 >= 0 )
                              v313 = v1550;
                            v1549 = v313;
                          }
                          else
                          {
                            v313 = v1549;
                            v87 = -1073741675;
                            v1465 = -1073741675;
                          }
                          if ( v87 < 0 )
                            goto LABEL_587;
                          if ( !lpMem || (unsigned int)Size <= 1 )
                            goto LABEL_396;
                          v315 = (unsigned int *)lpMem;
                          v1642 = (unsigned int *)lpMem;
                          do
                          {
                            v316 = *v315;
                            v1465 = RtlULongLongAdd(v315, 4LL, &v1642);
                            v87 = v1465;
                            if ( v1465 < 0 )
                              goto LABEL_406;
                            v1465 = RtlULongLongAdd(v1642, v316, &v1642);
                            v87 = v1465;
                            if ( v1465 < 0 )
                              goto LABEL_406;
                            v315 = v1642;
                          }
                          while ( v317 == -1 );
                          v1465 = RtlULongLongAdd(v1642, 4LL, &v1642);
                          v87 = v1465;
                          if ( v1465 >= 0 )
                          {
                            v319 = v1642;
                            v1546 = v318;
                            if ( !v318 )
                              v319 = 0LL;
                            v1642 = v319;
                            v1640 = v319;
                          }
LABEL_406:
                          if ( v87 < 0 )
                            goto LABEL_587;
                          if ( (unsigned int)Size > 2 )
                          {
                            v320 = (unsigned int *)lpMem;
                            v1643 = (unsigned int *)lpMem;
                            do
                            {
                              v321 = *v320;
                              v1465 = RtlULongLongAdd(v320, 4LL, &v1643);
                              v87 = v1465;
                              if ( v1465 < 0 )
                                goto LABEL_416;
                              v1465 = RtlULongLongAdd(v1643, v321, &v1643);
                              v87 = v1465;
                              if ( v1465 < 0 )
                                goto LABEL_416;
                              v320 = v1643;
                            }
                            while ( (unsigned int)(v322 + 1) < 2 );
                            v1465 = RtlULongLongAdd(v1643, 4LL, &v1643);
                            v87 = v1465;
                            if ( v1465 >= 0 )
                            {
                              v324 = v1643;
                              v1547 = v323;
                              if ( !v323 )
                                v324 = 0LL;
                              v1643 = v324;
                              v1641 = v324;
                            }
LABEL_416:
                            if ( v87 < 0 )
                              goto LABEL_587;
                            v1551 = 4;
                            v1465 = RtlUIntAdd(4LL, v313, &v1551);
                            v87 = v1465;
                            if ( v1465 < 0
                              || (v1465 = RtlUIntAdd(v1551, v325, &v1551), v87 = v1465, v1465 < 0)
                              || (v1465 = RtlUIntAdd(v1551, v326, &v1551), v87 = v1465, v1465 < 0)
                              || (v1465 = RtlUIntAdd(v1551, 4LL, &v1551), v87 = v1465, v1465 < 0) )
                            {
                              v328 = v1552;
                            }
                            else
                            {
                              v87 = RtlUIntAdd(v1551, v327, &v1551);
                              v1465 = v87;
                              v328 = v1552;
                              if ( v87 >= 0 )
                                v328 = v1551;
                              v1552 = v328;
                            }
                            if ( v87 < 0 )
                              goto LABEL_587;
                            if ( v328 > 0x400000 )
                            {
                              v87 = -2147418113;
LABEL_586:
                              v1465 = v87;
                              goto LABEL_587;
                            }
                            v1555 = v328;
                          }
                          else
                          {
LABEL_396:
                            v87 = -1073741811;
                            v1465 = -1073741811;
                          }
                        }
                        if ( v87 < 0 )
                          goto LABEL_587;
                        v329 = v1555;
                        v330 = GetProcessHeap();
                        v331 = (unsigned int *)HeapAlloc(v330, 8u, v329);
                        if ( v331 )
                        {
                          v332 = v331;
                          v1431 = (__int64)v331;
                          v87 = 0x10000000;
                        }
                        else
                        {
                          v332 = 0LL;
                          v87 = -805306345;
                        }
                        v1465 = v87;
                        if ( v87 < 0 )
                          goto LABEL_587;
                        if ( !v1443 || !v332 )
                        {
                          v87 = -2147024809;
                          goto LABEL_586;
                        }
                        v1742[0] = v1443;
                        v1744 = v1555;
                        v1743 = v204;
                        v1742[1] = v332;
                        v1745 = 0;
                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                          && (v335 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                        {
                          v336 = ((__int64 (__fastcall *)(__int64, _QWORD *))v335)(134LL, v1742);
                          v334 = v1555;
                          v87 = v336 | 0x10000000;
                          if ( v336 >= 0 )
                            v334 = v1744;
                          v1555 = v334;
                        }
                        else
                        {
                          v333 = GetLastError();
                          v1465 = v333;
                          v87 = v333;
                          if ( v333 > 0 )
                          {
                            v87 = (unsigned __int16)v333 | 0x80070000;
                            v1465 = v87;
                          }
                          v334 = v1555;
                          if ( v87 < 0 )
                            goto LABEL_447;
                          v87 = -2147467259;
                        }
                        v1465 = v87;
LABEL_447:
                        if ( v87 == -805306333 )
                        {
                          v87 = -2147024774;
                          v1465 = -2147024774;
                          goto LABEL_587;
                        }
                        if ( v87 < 0 )
                          goto LABEL_587;
                        v1494 = 0LL;
                        v1553 = 0;
                        v1645 = v332;
                        if ( v334 < 4 )
                        {
LABEL_451:
                          v337 = -1073741762;
LABEL_452:
                          v338 = 0LL;
                          goto LABEL_453;
                        }
                        v340 = *v332;
                        v337 = RtlULongLongAdd(v332, 4LL, &v1645);
                        if ( v337 < 0 )
                          goto LABEL_452;
                        v337 = RtlUIntAdd(0LL, v341, &v1553);
                        if ( v337 < 0 )
                          goto LABEL_460;
                        if ( v334 - v1553 < (unsigned int)v340 )
                        {
                          v337 = -1073741762;
LABEL_460:
                          v338 = v342;
                          goto LABEL_453;
                        }
                        Srca = v1645;
                        v337 = RtlULongLongAdd(v1645, v340, &v1645);
                        if ( v337 < 0 )
                          goto LABEL_452;
                        v337 = RtlUIntAdd(v1553, (unsigned int)v340, &v1553);
                        if ( v337 < 0 )
                          goto LABEL_452;
                        if ( v334 - v1553 < (unsigned int)v343 )
                          goto LABEL_451;
                        v344 = *(unsigned int *)v1645;
                        v337 = RtlULongLongAdd(v1645, v343, &v1645);
                        if ( v337 < 0 )
                          goto LABEL_452;
                        v337 = RtlUIntAdd(v1553, v345, &v1553);
                        if ( v337 < 0 )
                          goto LABEL_452;
                        if ( v334 - v1553 < (unsigned int)v344 )
                          goto LABEL_451;
                        v1468 = v1645;
                        v337 = RtlULongLongAdd(v1645, (unsigned int)v344, &v1645);
                        if ( v337 < 0 )
                          goto LABEL_452;
                        v337 = RtlUIntAdd(v1553, (unsigned int)v344, &v1553);
                        if ( v337 < 0 )
                          goto LABEL_452;
                        if ( v334 - v1553 < (unsigned int)v346 )
                          goto LABEL_451;
                        v347 = *(unsigned int *)v1645;
                        v348 = RtlULongLongAdd(v1645, v346, &v1645);
                        v350 = 0LL;
                        v337 = v348;
                        if ( v348 < 0 )
                          goto LABEL_474;
                        v337 = RtlUIntAdd(v1553, v349, &v1553);
                        if ( v337 < 0 )
                          goto LABEL_474;
                        if ( v334 - v1553 < (unsigned int)v347 )
                          goto LABEL_473;
                        v337 = RtlUIntAdd(v1553, (unsigned int)v347, &v1553);
                        if ( v337 < 0 )
                          goto LABEL_474;
                        if ( v334 != v1553 || (unsigned int)(v347 + v344 + v340) + 12LL != v334 )
                        {
LABEL_473:
                          v337 = -1073741762;
LABEL_474:
                          v338 = v350;
                          v302 = 0;
                          goto LABEL_453;
                        }
                        v351 = GetProcessHeap();
                        v352 = HeapAlloc(v351, 8u, 0x30uLL);
                        if ( !v352 )
                        {
                          v337 = -1073741801;
                          v302 = 0;
LABEL_503:
                          v338 = v1494;
                          v368 = 0LL;
                          if ( v337 < 0 )
                          {
                            v368 = v1494;
                            v338 = 0LL;
                          }
                          v1473 = v338;
                          if ( v368 )
                          {
                            v369 = (void *)*((_QWORD *)v368 + 1);
                            if ( v369 )
                            {
                              v370 = GetProcessHeap();
                              HeapFree(v370, 0, v369);
                              *((_QWORD *)v368 + 1) = 0LL;
                            }
                            v371 = (void *)*((_QWORD *)v368 + 3);
                            if ( v371 )
                            {
                              v372 = GetProcessHeap();
                              HeapFree(v372, 0, v371);
                              *((_QWORD *)v368 + 3) = 0LL;
                            }
                            v373 = (void *)*((_QWORD *)v368 + 5);
                            if ( v373 )
                            {
                              v374 = GetProcessHeap();
                              HeapFree(v374, 0, v373);
                              *((_QWORD *)v368 + 5) = 0LL;
                            }
                            v375 = GetProcessHeap();
                            HeapFree(v375, 0, v368);
                            v338 = v1473;
                          }
LABEL_453:
                          v87 = v337 | 0x10000000;
                          v1465 = v87;
                          if ( v87 < 0 )
                            goto LABEL_587;
                          v1646 = 0LL;
                          v339 = 0LL;
                          if ( !v338
                            || (v376 = (unsigned __int8 *)*((_QWORD *)v338 + 1), (Srcb = (char *)v376) == 0LL)
                            || !*v338 )
                          {
                            v87 = -805306355;
                            goto LABEL_586;
                          }
                          v377 = *v338;
                          if ( v377 )
                          {
                            v378 = v377 - 8;
                            v1480 = v378;
                            v379 = MemoryAlloc(v378);
                            v380 = 0;
                            v1469 = v379;
                            v381 = v379;
                            if ( v379 )
                            {
                              v1793 = 0x7F1137FAB69605ELL;
                              v382 = 0;
                              v383 = v376;
                              v384 = v381;
                              v385 = 0;
                              v386 = v378 & 7;
                              if ( (v378 & 7) != 0 )
                              {
                                v1467 = 0;
                                v387 = 0;
                                v388 = 56;
                                do
                                {
                                  v389 = *v383++;
                                  if ( v385 >= 4 )
                                  {
                                    v390 = v1467;
                                    v387 |= v389 << v388;
                                  }
                                  else
                                  {
                                    v390 = (v389 << (v388 - 32)) | v1467;
                                    v1467 = v390;
                                  }
                                  ++v385;
                                  v388 -= 8;
                                }
                                while ( v385 < (int)v386 );
                                v1380 = v387;
                                v380 = v390 ^ 0x92F65A5;
                                v391 = v387 ^ 0x699A899C;
                                v392 = 0;
                                v393 = v390 ^ 0x92F65A5;
                                v394 = v391;
                                if ( (v378 & 7) != 0 )
                                {
                                  do
                                  {
                                    if ( v392 >= 4 )
                                    {
                                      v394 = __ROL4__(v394, 8);
                                      v395 = v394;
                                    }
                                    else
                                    {
                                      v393 = __ROL4__(v393, 8);
                                      v395 = v393;
                                    }
                                    *v384 = v395;
                                    ++v392;
                                    ++v384;
                                  }
                                  while ( v392 < (int)v386 );
                                }
                                if ( v386 <= 4 )
                                {
                                  v385 = 0;
                                  if ( v386 < 4 )
                                    v380 = v380 >> (8 * (4 - v386)) << (8 * (4 - v386));
                                }
                                else
                                {
                                  v385 = v391 >> (8 * (8 - v386)) << (8 * (8 - v386));
                                }
                              }
                              else
                              {
                                v1380 = -1;
                                v1467 = 0;
                              }
                              v396 = v378 >> 3;
                              if ( v378 >> 3 )
                              {
                                v397 = v384 + 7;
                                v398 = v1380;
                                v399 = v383 + 2;
                                v400 = v1467;
                                v401 = HIDWORD(v1793);
                                v1367 = WORD2(v1793);
                                v1454 = WORD1(v1793);
                                v402 = HIDWORD(v1793) ^ 0xAB69605E;
                                do
                                {
                                  v403 = *(v399 - 1) | (*(v399 - 2) << 8);
                                  v404 = v399[2] << 8;
                                  v405 = *v399;
                                  v399 += 8;
                                  v406 = *(v399 - 7) | ((v405 | (v403 << 8)) << 8);
                                  v407 = v406 ^ v380;
                                  v408 = *(v399 - 3) | ((*(v399 - 4) | ((*(v399 - 5) | v404) << 8)) << 8);
                                  v409 = v407 ^ v401 ^ 0xAB69605E ^ v408 ^ v385;
                                  v410 = (__ROL4__(v409, 10) + v1367 * __ROL4__(v409 + 1419157410, 5)) ^ v407;
                                  v411 = (WORD1(v1793) * __ROR4__(v410 + v401, 9) - __ROL4__(v410, 2)) ^ v409;
                                  v412 = (24670 * (v411 - v1367) - (v411 >> 13)) ^ v410;
                                  v413 = (HIWORD(v1793) * __ROL4__(v412 ^ WORD1(v1793), 6) - __ROL4__(v412, 2)) ^ v411;
                                  v414 = (v401 - (v413 ^ 0xAB69605E)) ^ v412;
                                  v415 = (v1454 * (v414 ^ v1367)) ^ __ROR4__(v414, 6) ^ v413;
                                  v416 = (__ROL4__(v415, 2) + 24670 * __ROR4__(v415 + v401, 15)) ^ v414;
                                  v417 = (HIWORD(v1793) * __ROR4__(v416 + 1419157410, 14) - __ROL4__(v416, 8)) ^ v415;
                                  v418 = __ROR4__(v417, 10) ^ (v1367 * __ROR4__(v417 ^ 0xAB69605E, 12)) ^ v416;
                                  v419 = (v418 >> 10) ^ (WORD1(v1793) * (v418 ^ HIWORD(v1793))) ^ v417;
                                  v420 = (HIWORD(v1793) * (__ROR4__(~v419, 5) + 24670)) ^ v418;
                                  v421 = (v420 - HIWORD(v1793)) ^ 0xAB69605E ^ v419;
                                  v422 = ((v421 >> 2) + v1367 * __ROL4__(v421 ^ HIWORD(v1793), 2)) ^ v420;
                                  v423 = (__ROL4__(v422, 7) + WORD1(v1793) * __ROR4__(v422 - v401, 6)) ^ v421;
                                  v424 = (24670 * (v423 ^ v1367) + __ROR4__(v423, 9)) ^ v422;
                                  v425 = (__ROL4__(v424, 7) + HIWORD(v1793) * __ROL4__(v424 ^ WORD1(v1793), 5)) ^ v423;
                                  v426 = v425 ^ v402 ^ v424;
                                  v427 = (v1367 * (__ROR4__(v426, 3) - WORD1(v1793))) ^ v425;
                                  v428 = (24670 * __ROR4__(v427 - v401, 1) - __ROR4__(v427, 6)) ^ v426;
                                  v429 = (__ROL4__(v428, 14) + HIWORD(v1793) * __ROL4__(v428 - 1419157410, 3)) ^ v427;
                                  v430 = (v1367 * __ROL4__(v429 - 1419157410, 15) - __ROR4__(v429, 14)) ^ v428;
                                  v431 = (v430 >> 3) ^ (WORD1(v1793) * (v430 ^ 0x605E)) ^ v429;
                                  v432 = v431 ^ v401;
                                  v433 = v431;
                                  v434 = v398 ^ v431;
                                  v398 = v408;
                                  v435 = v400 ^ __ROL4__(v433, 2) ^ (24670 * __ROL4__(v432, 4));
                                  v400 = v406;
                                  v436 = v435 ^ v430;
                                  *(v397 - 4) = v436;
                                  *v397 = v434;
                                  v397 += 8;
                                  v437 = __ROR4__(v436, 8);
                                  *(v397 - 13) = v437;
                                  v438 = __ROR4__(v434, 8);
                                  *(v397 - 9) = v438;
                                  v439 = __ROR4__(v437, 8);
                                  *(v397 - 14) = v439;
                                  v440 = __ROR4__(v438, 8);
                                  *(v397 - 10) = v440;
                                  v441 = __ROR4__(v439, 8);
                                  v442 = __ROR4__(v440, 8);
                                  *(v397 - 15) = v441;
                                  *(v397 - 11) = v442;
                                  v385 = __ROR4__(v442, 8);
                                  v380 = __ROR4__(v441, 8);
                                  --v396;
                                }
                                while ( v396 );
                                v382 = 0;
                                v378 = v1480;
                                v302 = 0;
                                v381 = v1469;
                              }
                              for ( n = 0LL; n < v378; ++n )
                                v382 ^= v381[n];
                              if ( v382 == *(_QWORD *)&Srcb[v378] )
                              {
                                v339 = (int *)v381;
                                v1646 = (int *)v381;
                                v302 = v378;
                                v381 = 0LL;
                                v444 = 0;
                              }
                              else
                              {
                                v339 = v1646;
                                v444 = -1073425151;
                              }
                              if ( v381 )
                              {
                                MemoryFree(v381);
                                v339 = v1646;
                              }
                              if ( v444 >= 0 )
                              {
                                v445 = v339;
                                v1509 = v339;
                                v339 = 0LL;
                                v1646 = 0LL;
                                v1542 = v302;
                                v87 = 0x10000000;
                                goto LABEL_548;
                              }
                            }
                            else
                            {
                              v339 = v1646;
                            }
                          }
                          v302 = v1542;
                          v87 = -805306367;
                          v445 = (int *)v1509;
LABEL_548:
                          v1465 = v87;
                          if ( v339 )
                          {
                            v446 = GetProcessHeap();
                            HeapFree(v446, 0, v339);
                            v302 = v1542;
                            v1646 = 0LL;
                          }
                          if ( v87 >= 0 )
                          {
                            v1554[0] = 0;
                            v1647 = v445;
                            if ( v302 >= 4 )
                            {
                              v1460 = *v445;
                              v447 = RtlULongLongAdd(v445, 4LL, &v1647);
                              if ( v447 < 0 )
                                goto LABEL_585;
                              v447 = RtlUIntAdd(0LL, 4LL, v1554);
                              if ( v447 < 0 )
                                goto LABEL_585;
                              if ( v302 - v1554[0] >= 4 )
                              {
                                v447 = RtlULongLongAdd(v1647, 4LL, &v1647);
                                if ( v447 < 0 )
                                  goto LABEL_585;
                                v447 = RtlUIntAdd(v1554[0], 4LL, v1554);
                                if ( v447 < 0 )
                                  goto LABEL_585;
                                if ( v302 - v1554[0] >= v448 )
                                {
                                  v447 = RtlUIntAdd(v1554[0], v448, v1554);
                                  if ( v447 < 0 )
                                    goto LABEL_585;
                                  v451 = v1647;
                                  v452 = v302;
                                  v453 = (unsigned int)v450;
                                  if ( (char *)v445 + v452 >= (char *)v1647 + v450
                                    && (unsigned __int64)(v452 + (char *)v445 - (_BYTE *)v1647 - v450) < 8 )
                                  {
                                    v1434 = (int)v449;
                                    v454 = v449;
                                    v447 = (int)v449;
                                    v455 = (int)v449;
                                    if ( !v1647 )
                                    {
LABEL_574:
                                      if ( (_DWORD)v450 )
                                      {
                                        v461 = GetProcessHeap();
                                        v454 = HeapAlloc(v461, 8u, v453);
                                        if ( !v454 )
                                        {
                                          v447 = -1073741801;
                                          goto LABEL_582;
                                        }
                                        v447 = 0;
                                      }
                                      if ( v451 )
                                        memcpy_0(v454, v451, v453);
                                      v1728[1] = v454;
                                      LODWORD(v1728[0]) = v455;
LABEL_582:
                                      if ( v447 < 0 || v1460 == LODWORD(v1728[0]) )
                                        goto LABEL_585;
                                      goto LABEL_584;
                                    }
                                    v456 = (unsigned int *)v1647;
                                    v447 = RtlULongLongAdd(v1647, (unsigned int)v450, &v1648);
                                    if ( v447 < 0 )
                                      goto LABEL_582;
                                    v457 = (unsigned int *)v1648;
                                    if ( (unsigned __int64)v451 < v1648 )
                                    {
                                      do
                                      {
                                        v447 = RtlULongLongAdd(v456, 4LL, &v1649);
                                        if ( v447 < 0 )
                                          goto LABEL_585;
                                        if ( v1649 > v458 )
                                          goto LABEL_577;
                                        v459 = RtlUIntAdd(4LL, *v456, &v1572);
                                        v447 = v459;
                                        if ( v459 >= 0 )
                                          v460 = v1572;
                                        v1554[1] = v460;
                                        if ( v459 < 0 )
                                          goto LABEL_585;
                                        v447 = RtlULongLongAdd(v456, v460, &v1650);
                                        if ( v447 < 0 )
                                          goto LABEL_585;
                                        v456 = v1650;
                                        if ( v1650 > v457 )
                                          goto LABEL_577;
                                        ++v1434;
                                      }
                                      while ( v1650 < v457 );
                                    }
                                    if ( v456 == v457 )
                                    {
                                      v455 = v1434;
                                      goto LABEL_574;
                                    }
LABEL_577:
                                    v447 = -1073741811;
LABEL_585:
                                    v87 = v447 | 0x10000000;
                                    goto LABEL_586;
                                  }
                                }
                              }
                            }
LABEL_584:
                            v447 = -1073741762;
                            goto LABEL_585;
                          }
LABEL_587:
                          if ( v1419 )
                          {
                            v462 = GetProcessHeap();
                            HeapFree(v462, 0, v1419);
                          }
                          v463 = v1633;
                          if ( v1633 )
                          {
                            v464 = (void *)*((_QWORD *)v1633 + 1);
                            if ( v464 )
                            {
                              v465 = GetProcessHeap();
                              HeapFree(v465, 0, v464);
                              v463[1] = 0LL;
                            }
                            v466 = (void *)v463[3];
                            if ( v466 )
                            {
                              v467 = GetProcessHeap();
                              HeapFree(v467, 0, v466);
                              v463[3] = 0LL;
                            }
                            v468 = (void *)v463[5];
                            if ( v468 )
                            {
                              v469 = GetProcessHeap();
                              HeapFree(v469, 0, v468);
                              v463[5] = 0LL;
                            }
                            v470 = GetProcessHeap();
                            HeapFree(v470, 0, v463);
                            v1633 = 0LL;
                          }
                          if ( v1443 )
                          {
                            v471 = GetProcessHeap();
                            HeapFree(v471, 0, v1443);
                          }
                          if ( v1431 )
                          {
                            v472 = GetProcessHeap();
                            HeapFree(v472, 0, (LPVOID)v1431);
                          }
                          if ( v1473 )
                          {
                            v473 = (void *)*((_QWORD *)v1473 + 1);
                            if ( v473 )
                            {
                              v474 = GetProcessHeap();
                              HeapFree(v474, 0, v473);
                              *((_QWORD *)v1473 + 1) = 0LL;
                            }
                            v475 = (void *)*((_QWORD *)v1473 + 3);
                            if ( v475 )
                            {
                              v476 = GetProcessHeap();
                              HeapFree(v476, 0, v475);
                              *((_QWORD *)v1473 + 3) = 0LL;
                            }
                            v477 = (void *)*((_QWORD *)v1473 + 5);
                            if ( v477 )
                            {
                              v478 = GetProcessHeap();
                              HeapFree(v478, 0, v477);
                              *((_QWORD *)v1473 + 5) = 0LL;
                            }
                            v479 = GetProcessHeap();
                            HeapFree(v479, 0, v1473);
                          }
                          v480 = v1509;
                          if ( v1509 )
                          {
                            v481 = GetProcessHeap();
                            HeapFree(v481, 0, v480);
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          if ( !LODWORD(v1728[0]) )
                            goto LABEL_704;
                          v482 = 4LL;
                          if ( v1728[1] )
                          {
                            v1651 = (int *)v1728[1];
                            v1465 = RtlULongLongAdd(v1728[1], 4LL, &v1651);
                            v87 = v1465;
                            if ( v1465 < 0 )
                            {
                              v483 = v1556;
                              v484 = v1652;
                            }
                            else
                            {
                              v484 = v1651;
                              v1556 = v483;
                              if ( !v483 )
                                v484 = 0LL;
                              v1651 = v484;
                              v1652 = v484;
                            }
                            if ( v1465 < 0 )
                              goto LABEL_698;
                            if ( v483 != (_DWORD)v482 )
                              goto LABEL_696;
                            v1588 = *v484;
                          }
                          else
                          {
                            v87 = -1073741811;
                            v1465 = -1073741811;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          v87 = v1588;
                          if ( v1588 == -805306333 )
                            v87 = -2147024774;
                          v1465 = v87;
                          v1588 = v87;
                          if ( v87 != -2147024774 && v87 < 0 )
                            goto LABEL_698;
                          if ( LODWORD(v1728[0]) != 6 )
                            goto LABEL_704;
                          if ( v1728[1] )
                          {
                            v485 = (int *)v1728[1];
                            v486 = 0;
                            v1653 = (int *)v1728[1];
                            do
                            {
                              v1465 = RtlULongLongAdd(v485, v482, &v1653);
                              v87 = v1465;
                              if ( v1465 < 0 )
                                goto LABEL_639;
                              v1465 = RtlULongLongAdd(v1653, v487, &v1653);
                              v87 = v1465;
                              if ( v1465 < 0 )
                                goto LABEL_639;
                              v485 = v1653;
                              ++v486;
                            }
                            while ( !v486 );
                            v488 = *v1653;
                            v1465 = RtlULongLongAdd(v1653, v482, &v1653);
                            v87 = v1465;
                            if ( v1465 < 0 )
                            {
LABEL_639:
                              v488 = v1557;
                              v489 = v1654;
                            }
                            else
                            {
                              v489 = v1653;
                              v1557 = v488;
                              if ( !v488 )
                                v489 = 0LL;
                              v1653 = v489;
                              v1654 = v489;
                            }
                            if ( v87 < 0 )
                              goto LABEL_698;
                            if ( v488 != 8 )
                              goto LABEL_696;
                            v1655 = *(_QWORD *)v489;
                          }
                          else
                          {
                            v87 = -1073741811;
                            v1465 = -1073741811;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          if ( v1728[1] )
                          {
                            v490 = (int *)v1728[1];
                            v491 = 0;
                            v1656 = (int *)v1728[1];
                            do
                            {
                              v1465 = RtlULongLongAdd(v490, v482, &v1656);
                              v87 = v1465;
                              if ( v1465 < 0 )
                                goto LABEL_654;
                              v1465 = RtlULongLongAdd(v1656, v492, &v1656);
                              v87 = v1465;
                              if ( v1465 < 0 )
                                goto LABEL_654;
                              v490 = v1656;
                              ++v491;
                            }
                            while ( v491 < 2 );
                            v493 = *v1656;
                            v1465 = RtlULongLongAdd(v1656, v482, &v1656);
                            v87 = v1465;
                            if ( v1465 < 0 )
                            {
LABEL_654:
                              v493 = v1558;
                              v494 = v1657;
                            }
                            else
                            {
                              v494 = v1656;
                              v1558 = v493;
                              if ( !v493 )
                                v494 = 0LL;
                              v1656 = v494;
                              v1657 = v494;
                            }
                            if ( v87 < 0 )
                              goto LABEL_698;
                            if ( v493 != (_DWORD)v482 )
                              goto LABEL_696;
                            v1559 = *v494;
                          }
                          else
                          {
                            v87 = -1073741811;
                            v1465 = -1073741811;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          if ( !v1728[1] )
                          {
                            v87 = -1073741811;
                            goto LABEL_697;
                          }
                          v495 = v1728[1];
                          v496 = 0;
                          v1658 = v1728[1];
                          do
                          {
                            v1465 = RtlULongLongAdd(v495, v482, &v1658);
                            v87 = v1465;
                            if ( v1465 < 0 )
                              goto LABEL_669;
                            v1465 = RtlULongLongAdd(v1658, v497, &v1658);
                            v87 = v1465;
                            if ( v1465 < 0 )
                              goto LABEL_669;
                            v495 = v1658;
                            ++v496;
                          }
                          while ( v496 < 3 );
                          v1465 = RtlULongLongAdd(v1658, v482, &v1658);
                          v87 = v1465;
                          if ( v1465 < 0 )
                          {
LABEL_669:
                            v499 = v1659;
                          }
                          else
                          {
                            v499 = v1658;
                            v1560 = v498;
                            if ( !v498 )
                              v499 = 0LL;
                            v1658 = v499;
                            v1659 = v499;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          v500 = (int *)v1728[1];
                          v1660 = (int *)v1728[1];
                          while ( 1 )
                          {
                            v1465 = RtlULongLongAdd(v500, 4LL, &v1660);
                            v87 = v1465;
                            if ( v1465 < 0 )
                              break;
                            v1465 = RtlULongLongAdd(v1660, v501, &v1660);
                            v87 = v1465;
                            v503 = 4;
                            if ( v1465 < 0 )
                              goto LABEL_680;
                            v500 = v1660;
                            if ( (unsigned int)(v502 + 1) >= 4 )
                            {
                              v1465 = RtlULongLongAdd(v1660, 4LL, &v1660);
                              v87 = v1465;
                              if ( v1465 >= 0 )
                              {
                                v505 = v1660;
                                v1561 = v504;
                                if ( !v504 )
                                  v505 = 0LL;
                                v1660 = v505;
                                v1661 = v505;
LABEL_681:
                                if ( v87 >= 0 )
                                {
                                  if ( v504 == v503 )
                                  {
                                    v1562 = *v505;
                                    goto LABEL_684;
                                  }
LABEL_696:
                                  v87 = -1073741789;
LABEL_697:
                                  v1465 = v87;
LABEL_698:
                                  v94 = v1404;
LABEL_699:
                                  v95 = v1388;
                                  goto LABEL_201;
                                }
LABEL_684:
                                if ( v87 < 0 )
                                  goto LABEL_698;
                                v506 = (unsigned int *)v1728[1];
                                v1662 = (unsigned int *)v1728[1];
                                do
                                {
                                  v507 = *v506;
                                  v1465 = RtlULongLongAdd(v506, 4LL, &v1662);
                                  v87 = v1465;
                                  if ( v1465 < 0 )
                                    goto LABEL_693;
                                  v1465 = RtlULongLongAdd(v1662, v507, &v1662);
                                  v87 = v1465;
                                  if ( v1465 < 0 )
                                    goto LABEL_693;
                                  v506 = v1662;
                                }
                                while ( (unsigned int)(v510 + 1) < 5 );
                                v1465 = RtlULongLongAdd(v1662, 4LL, &v1662);
                                v87 = v1465;
                                if ( v1465 < 0 )
                                {
LABEL_693:
                                  v511 = v1563;
                                  v512 = v1663;
                                  goto LABEL_694;
                                }
                                v512 = v1662;
                                v1563 = v511;
                                if ( !v511 )
                                  v512 = 0LL;
                                v1662 = v512;
                                v1663 = v512;
LABEL_694:
                                if ( v87 < 0 )
                                {
                                  v513 = v1574;
                                }
                                else
                                {
                                  if ( v511 != 4 )
                                    goto LABEL_696;
                                  v513 = *v512;
                                  v1574 = *v512;
                                }
                                if ( v87 < 0 )
                                  goto LABEL_698;
                                if ( v1623 == v1655 )
                                {
                                  v1568 = v1559;
                                  v1569 = v509;
                                  v1570 = v513;
                                  if ( v509 <= 4 && v508 <= 4 )
                                  {
                                    memcpy_0(v1440, v499, v508);
                                    if ( v1588 )
                                      v87 = v1588;
                                  }
                                  else
                                  {
                                    v87 = -2147024774;
                                  }
                                  goto LABEL_697;
                                }
LABEL_704:
                                v87 = -1073425151;
                                goto LABEL_697;
                              }
LABEL_680:
                              v504 = v1561;
                              v505 = v1661;
                              goto LABEL_681;
                            }
                          }
                          v503 = 4;
                          goto LABEL_680;
                        }
                        if ( Srca )
                        {
                          *(_DWORD *)v352 = v340;
                          v353 = GetProcessHeap();
                          v354 = HeapAlloc(v353, 8u, v340);
                          if ( !v354 )
                          {
LABEL_482:
                            v337 = -1073741801;
                            v302 = 0;
                            goto LABEL_495;
                          }
                          v352[1] = v354;
                          memcpy_0(v354, Srca, v340);
                        }
                        else
                        {
                          *(_DWORD *)v352 = 0;
                          v352[1] = 0LL;
                        }
                        if ( v1468 )
                        {
                          *((_DWORD *)v352 + 4) = v344;
                          v355 = GetProcessHeap();
                          v356 = HeapAlloc(v355, 8u, v344);
                          if ( !v356 )
                            goto LABEL_482;
                          v352[3] = v356;
                          memcpy_0(v356, v1468, v344);
                        }
                        else
                        {
                          *((_DWORD *)v352 + 4) = 0;
                          v352[3] = 0LL;
                        }
                        v357 = v1645;
                        if ( v1645 )
                        {
                          *((_DWORD *)v352 + 8) = v347;
                          v358 = v347;
                          v359 = GetProcessHeap();
                          v360 = HeapAlloc(v359, 8u, v347);
                          v302 = 0;
                          if ( !v360 )
                          {
                            v337 = -1073741801;
                            goto LABEL_495;
                          }
                          v352[5] = v360;
                          memcpy_0(v360, v357, v358);
                        }
                        else
                        {
                          v302 = 0;
                          *((_DWORD *)v352 + 8) = 0;
                          v352[5] = 0LL;
                        }
                        v1494 = (unsigned int *)v352;
                        v337 = 0;
                        v352 = 0LL;
LABEL_495:
                        if ( v352 )
                        {
                          v361 = (void *)v352[1];
                          if ( v361 )
                          {
                            v362 = GetProcessHeap();
                            HeapFree(v362, 0, v361);
                            v352[1] = 0LL;
                          }
                          v363 = (void *)v352[3];
                          if ( v363 )
                          {
                            v364 = GetProcessHeap();
                            HeapFree(v364, 0, v363);
                            v352[3] = 0LL;
                          }
                          v365 = (void *)v352[5];
                          if ( v365 )
                          {
                            v366 = GetProcessHeap();
                            HeapFree(v366, 0, v365);
                            v352[5] = 0LL;
                          }
                          v367 = GetProcessHeap();
                          HeapFree(v367, 0, v352);
                        }
                        goto LABEL_503;
                      }
                    }
                    v303 = v1545;
                    goto LABEL_375;
                  }
                  v182 = lpMem;
                  v1632 = lpMem;
                  if ( (_DWORD)Size )
                  {
                    do
                    {
                      v183 = RtlUIntAdd((unsigned int)v174, (unsigned int)*v182, &v1534);
                      v1465 = v183;
                      v87 = v183;
                      if ( v183 >= 0 )
                        v184 = v1534;
                      v1533 = v184;
                      if ( v183 < 0 )
                        goto LABEL_699;
                      v1465 = RtlULongLongAdd(v182, v184, &v1632);
                      v87 = v1465;
                      if ( v1465 < 0 )
                        goto LABEL_699;
                      v182 = v1632;
                    }
                    while ( v185 + 1 < (unsigned int)Size );
                  }
                  v1465 = RtlULongLongAdd(v182, v174, &v1735);
                  v87 = v1465;
                  if ( v1465 < 0 )
                    goto LABEL_699;
                  if ( v182 + 2 <= (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                  {
                    v186 = v1735;
                    *v182 = v181;
                    *v186 = v1531;
                    LODWORD(Size) = Size + 1;
                    goto LABEL_272;
                  }
LABEL_255:
                  v87 = -1073741789;
                  v1465 = -1073741789;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_201:
  Size = 0LL;
  v154 = lpMem;
  if ( lpMem )
  {
    v155 = GetProcessHeap();
    HeapFree(v155, 0, v154);
    lpMem = 0LL;
  }
  v1728[0] = 0LL;
  v156 = v1728[1];
  if ( v1728[1] )
  {
    v157 = GetProcessHeap();
    HeapFree(v157, 0, v156);
    v1728[1] = 0LL;
  }
  if ( v94 )
  {
    v158 = GetProcessHeap();
    HeapFree(v158, 0, v94);
  }
  if ( v95 )
  {
    v159 = GetProcessHeap();
    HeapFree(v159, 0, v95);
  }
  if ( v87 < 0 )
    goto LABEL_100;
  v89 = 0LL;
  if ( !v1570 )
    goto LABEL_1703;
  v1664 = 0LL;
  g_WarbirdNotificationInformation = v1570;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  if ( ModuleFileNameW && (ModuleFileNameW != 260 || GetLastError() != 122) )
  {
    v1492 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21F8[0])(
                                               0LL,
                                               0LL,
                                               1027LL);
    if ( !v1492 )
    {
      GetLastError();
      goto LABEL_1307;
    }
    v514 = ((__int64 (*)(void))off_1805C2198[0])();
    v515 = g_WarbirdNotificationInformation;
    g_WarbirdPaintInitTime = v514;
    v1461 = g_WarbirdNotificationInformation;
    memset_0(&v1778, 0, 0x70uLL);
    v1564 = 1;
    Srcc = 0LL;
    v1798 = 0LL;
    v1815 = 0LL;
    v1813 = 0LL;
    v1816 = 0;
    v1814 = 0LL;
    v1481 = 0LL;
    v1615 = 0LL;
    while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
      ;
    v516 = g_WarbirdSecureFunctionsRefCount;
    if ( !g_WarbirdSecureFunctionsRefCount )
    {
      v1435 = 0;
      v1367 = 0;
      v1666 = 0LL;
      v1667 = 0LL;
      v517 = (char *)MemoryAlloc(0x338uLL);
      v518 = (WCHAR *)v517;
      if ( !v517 )
        goto LABEL_748;
      v519 = v517 + 7;
      v520 = 0;
      v521 = -1;
      v522 = 0;
      v523 = (unsigned __int8 *)&unk_1804F1AC2;
      v524 = 0;
      v525 = 103LL;
      do
      {
        v526 = *(v523 - 1) | (*(v523 - 2) << 8);
        v527 = v523[2] << 8;
        v528 = *v523;
        v523 += 8;
        v529 = *(v523 - 7) | ((v528 | (v526 << 8)) << 8);
        v530 = v529 ^ v524;
        v531 = *(v523 - 3) | ((*(v523 - 4) | ((*(v523 - 5) | v527) << 8)) << 8);
        v532 = v530 ^ v531 ^ v522 ^ 0xAC987321;
        v533 = (__ROL4__(v532, 10) + 4991 * __ROL4__(v532 + 1419157410, 5)) ^ v530;
        v534 = (43881 * __ROR4__(v533 + 133239679, 9) - __ROL4__(v533, 2)) ^ v532;
        v535 = (24670 * v534 - (v534 >> 13) - 123127970) ^ v533;
        v536 = (2033 * __ROL4__(v535 ^ 0xAB69, 6) - __ROL4__(v535, 2)) ^ v534;
        v537 = (133239679 - (v536 ^ 0xAB69605E)) ^ v535;
        v538 = (43881 * (v537 ^ 0x137F)) ^ __ROR4__(v537, 6) ^ v536;
        v539 = (__ROL4__(v538, 2) + 24670 * __ROR4__(v538 + 133239679, 15)) ^ v537;
        v540 = (2033 * __ROR4__(v539 + 1419157410, 14) - __ROL4__(v539, 8)) ^ v538;
        v541 = __ROR4__(v540, 10) ^ (4991 * __ROR4__(v540 ^ 0xAB69605E, 12)) ^ v539;
        v542 = v540 ^ (v541 >> 10) ^ (43881 * (v541 ^ 0x7F1));
        v543 = (2033 * (__ROR4__(~v542, 5) + 24670)) ^ v541;
        v544 = v542 ^ (v543 - 2033) ^ 0xAB69605E;
        v545 = ((v544 >> 2) + 4991 * __ROL4__(v542 ^ (v543 - 2033) ^ 0xAB6967AF, 2)) ^ v543;
        v546 = (__ROL4__(v545, 7) + 43881 * __ROR4__(v545 - 133239679, 6)) ^ v544;
        v547 = (24670 * (v546 ^ 0x137F) + __ROR4__(v546, 9)) ^ v545;
        v548 = (__ROL4__(v547, 7) + 2033 * __ROL4__(v547 ^ 0xAB69, 5)) ^ v546;
        v549 = v548 ^ v547 ^ 0xAC987321;
        v550 = (4991 * __ROR4__(v549, 3) - 219010071) ^ v548;
        v551 = (24670 * __ROR4__(v550 - 133239679, 1) - __ROR4__(v550, 6)) ^ v549;
        v552 = (__ROL4__(v551, 14) + 2033 * __ROL4__(v551 - 1419157410, 3)) ^ v550;
        v553 = (4991 * __ROL4__(v552 - 1419157410, 15) - __ROR4__(v552, 14)) ^ v551;
        v554 = (v553 >> 3) ^ (43881 * (v553 ^ 0x605E)) ^ v552;
        v555 = 24670 * __ROL4__(v554 ^ 0x7F1137F, 4);
        v556 = v554;
        v557 = v521 ^ v554;
        v521 = v531;
        v558 = v520 ^ __ROL4__(v556, 2) ^ v555;
        v520 = v529;
        v559 = v558 ^ v553;
        *(v519 - 4) = v559;
        *v519 = v557;
        v519 += 8;
        v560 = __ROR4__(v559, 8);
        *(v519 - 13) = v560;
        v561 = __ROR4__(v557, 8);
        *(v519 - 9) = v561;
        v562 = __ROR4__(v560, 8);
        *(v519 - 14) = v562;
        v563 = __ROR4__(v561, 8);
        *(v519 - 10) = v563;
        v564 = __ROR4__(v562, 8);
        v565 = __ROR4__(v563, 8);
        *(v519 - 15) = v564;
        *(v519 - 11) = v565;
        v522 = __ROR4__(v565, 8);
        v524 = __ROR4__(v564, 8);
        --v525;
      }
      while ( v525 );
      v515 = v1461;
      v87 = v1465;
      v566 = 0LL;
      v567 = 0;
      v568 = 0;
      do
        v567 ^= *((_BYTE *)v518 + v566++);
      while ( v566 < 0x338 );
      if ( v567 == 64LL )
      {
        v1666 = v518;
        v569 = 0;
        v518 = 0LL;
        v1667 = 824LL;
      }
      else
      {
        v569 = -1073425151;
      }
      if ( v518 )
        MemoryFree(v518);
      if ( v569 >= 0 )
      {
        v570 = v1666;
        HIBYTE(v1666[v1667 / 2 - 1]) = 0;
        memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
        while ( *(_BYTE *)v570 )
        {
          v571 = v570;
          v572 = -1LL;
          do
            ++v572;
          while ( v570[v572] );
          v573 = &v570[v572];
          v574 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1367;
          if ( !GetModuleHandleExW(0, v571, (HMODULE *)v574) )
            goto LABEL_748;
          v568 = 0;
          if ( **(_WORD **)v574 == 23117
            && (v575 = *(int *)(*(_QWORD *)v574 + 60LL), (unsigned int)v575 < 0x10000000)
            && (v576 = *(_QWORD *)v574 + v575, v576 >= *(_QWORD *)v574)
            && *(_DWORD *)v576 == 17744 )
          {
            if ( ((*(_WORD *)(v576 + 24) - 267) & 0xFEFF) != 0 )
            {
              v568 = -1073741811;
            }
            else
            {
              *(_QWORD *)(v574 + 12) = *(_QWORD *)(v576 + 136);
              *((_DWORD *)v574 + 2) = *(_DWORD *)(v576 + 80);
            }
          }
          else
          {
            v568 = -1073741701;
          }
          v577 = *(_DWORD *)(v573 + 1);
          v578 = 0;
          v570 = v573 + 3;
          v1381 = v577;
          for ( ii = 0; v578 < v1381; ii = v578 )
          {
            v579 = (const CHAR *)v570;
            v580 = -1LL;
            do
              ++v580;
            while ( *((_BYTE *)v570 + v580) );
            v570 = (LPCWSTR)((char *)v570 + v580 + 1);
            if ( v568 >= 0 )
            {
              v581 = (void **)GetProcAddress(*(HMODULE *)v574, v579);
              if ( !v581 )
                goto LABEL_749;
              (&WARBIRD::g_FuncAddress)[v1435] = v581;
              v578 = ii;
            }
            ++v1435;
            ++v578;
          }
          ++v1367;
        }
      }
      else
      {
LABEL_748:
        v568 = -1073741702;
      }
LABEL_749:
      v582 = (WCHAR *)v1666;
      if ( v1666 )
      {
        v583 = GetProcessHeap();
        HeapFree(v583, 0, v582);
      }
      if ( v568 < 0 )
      {
        v584 = (HMODULE *)&WARBIRD::g_arModuleInfo;
        v585 = 4LL;
        do
        {
          if ( *v584 )
            FreeLibrary(*v584);
          v584 += 3;
          --v585;
        }
        while ( v585 );
        memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
        memcpy_0(&WARBIRD::g_FuncAddress, off_180498000, 0x170uLL);
LABEL_759:
        v1436 = 0;
        _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
        v1668 = 0LL;
        v1738 = 0LL;
        v1382 = 0;
        v1389 = 0LL;
        v1405 = 0LL;
        v1420 = 0LL;
        while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
          ;
        v586 = g_WarbirdSecureFunctionsRefCount;
        if ( !g_WarbirdSecureFunctionsRefCount )
        {
          v1367 = 0;
          v1455 = 0;
          v1669 = 0LL;
          v1670 = 0LL;
          v587 = (char *)MemoryAlloc(0x338uLL);
          v588 = (WCHAR *)v587;
          if ( !v587 )
            goto LABEL_795;
          v589 = v587 + 7;
          v590 = 0;
          v591 = -1;
          v592 = 0;
          v593 = (unsigned __int8 *)&unk_1804F1AC2;
          v594 = 0;
          v595 = 103LL;
          do
          {
            v596 = *(v593 - 1) | (*(v593 - 2) << 8);
            v597 = v593[2] << 8;
            v598 = *v593;
            v593 += 8;
            v599 = *(v593 - 7) | ((v598 | (v596 << 8)) << 8);
            v600 = v599 ^ v594;
            v601 = *(v593 - 3) | ((*(v593 - 4) | ((*(v593 - 5) | v597) << 8)) << 8);
            v602 = v600 ^ v601 ^ v592 ^ 0xAC987321;
            v603 = (__ROL4__(v602, 10) + 4991 * __ROL4__(v602 + 1419157410, 5)) ^ v600;
            v604 = (43881 * __ROR4__(v603 + 133239679, 9) - __ROL4__(v603, 2)) ^ v602;
            v605 = (24670 * v604 - (v604 >> 13) - 123127970) ^ v603;
            v606 = (2033 * __ROL4__(v605 ^ 0xAB69, 6) - __ROL4__(v605, 2)) ^ v604;
            v607 = (133239679 - (v606 ^ 0xAB69605E)) ^ v605;
            v608 = (43881 * (v607 ^ 0x137F)) ^ __ROR4__(v607, 6) ^ v606;
            v609 = (__ROL4__(v608, 2) + 24670 * __ROR4__(v608 + 133239679, 15)) ^ v607;
            v610 = (2033 * __ROR4__(v609 + 1419157410, 14) - __ROL4__(v609, 8)) ^ v608;
            v611 = __ROR4__(v610, 10) ^ (4991 * __ROR4__(v610 ^ 0xAB69605E, 12)) ^ v609;
            v612 = v610 ^ (v611 >> 10) ^ (43881 * (v611 ^ 0x7F1));
            v613 = (2033 * (__ROR4__(~v612, 5) + 24670)) ^ v611;
            v614 = v612 ^ (v613 - 2033) ^ 0xAB69605E;
            v615 = ((v614 >> 2) + 4991 * __ROL4__(v612 ^ (v613 - 2033) ^ 0xAB6967AF, 2)) ^ v613;
            v616 = (__ROL4__(v615, 7) + 43881 * __ROR4__(v615 - 133239679, 6)) ^ v614;
            v617 = (24670 * (v616 ^ 0x137F) + __ROR4__(v616, 9)) ^ v615;
            v618 = (__ROL4__(v617, 7) + 2033 * __ROL4__(v617 ^ 0xAB69, 5)) ^ v616;
            v619 = v618 ^ v617 ^ 0xAC987321;
            v620 = (4991 * __ROR4__(v619, 3) - 219010071) ^ v618;
            v621 = (24670 * __ROR4__(v620 - 133239679, 1) - __ROR4__(v620, 6)) ^ v619;
            v622 = (__ROL4__(v621, 14) + 2033 * __ROL4__(v621 - 1419157410, 3)) ^ v620;
            v623 = (4991 * __ROL4__(v622 - 1419157410, 15) - __ROR4__(v622, 14)) ^ v621;
            v624 = (v623 >> 3) ^ (43881 * (v623 ^ 0x605E)) ^ v622;
            v625 = 24670 * __ROL4__(v624 ^ 0x7F1137F, 4);
            v626 = v624;
            v627 = v591 ^ v624;
            v591 = v601;
            v628 = v590 ^ __ROL4__(v626, 2) ^ v625;
            v590 = v599;
            v629 = v628 ^ v623;
            *(v589 - 4) = v629;
            *v589 = v627;
            v589 += 8;
            v630 = __ROR4__(v629, 8);
            *(v589 - 13) = v630;
            v631 = __ROR4__(v627, 8);
            *(v589 - 9) = v631;
            v632 = __ROR4__(v630, 8);
            *(v589 - 14) = v632;
            v633 = __ROR4__(v631, 8);
            *(v589 - 10) = v633;
            v634 = __ROR4__(v632, 8);
            v635 = __ROR4__(v633, 8);
            *(v589 - 15) = v634;
            *(v589 - 11) = v635;
            v592 = __ROR4__(v635, 8);
            v594 = __ROR4__(v634, 8);
            --v595;
          }
          while ( v595 );
          v515 = v1461;
          v87 = v1465;
          v636 = 0LL;
          v637 = 0;
          v638 = 0;
          do
            v638 ^= *((_BYTE *)v588 + v636++);
          while ( v636 < 0x338 );
          if ( v638 == 64LL )
          {
            v1669 = v588;
            v639 = 0;
            v588 = 0LL;
            v1670 = 824LL;
          }
          else
          {
            v639 = -1073425151;
          }
          if ( v588 )
            MemoryFree(v588);
          if ( v639 >= 0 )
          {
            v640 = v1669;
            HIBYTE(v1669[v1670 / 2 - 1]) = 0;
            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
            while ( *(_BYTE *)v640 )
            {
              v641 = v640;
              v642 = -1LL;
              do
                ++v642;
              while ( v640[v642] );
              v643 = &v640[v642];
              v644 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1455;
              if ( !GetModuleHandleExW(0, v641, (HMODULE *)v644) )
                goto LABEL_795;
              v637 = 0;
              if ( **(_WORD **)v644 == 23117
                && (v645 = *(int *)(*(_QWORD *)v644 + 60LL), (unsigned int)v645 < 0x10000000)
                && (v646 = *(_QWORD *)v644 + v645, v646 >= *(_QWORD *)v644)
                && *(_DWORD *)v646 == 17744 )
              {
                if ( ((*(_WORD *)(v646 + 24) - 267) & 0xFEFF) != 0 )
                {
                  v637 = -1073741811;
                }
                else
                {
                  *(_QWORD *)(v644 + 12) = *(_QWORD *)(v646 + 136);
                  *((_DWORD *)v644 + 2) = *(_DWORD *)(v646 + 80);
                }
              }
              else
              {
                v637 = -1073741701;
              }
              v647 = *(_DWORD *)(v643 + 1);
              v648 = 0;
              v640 = v643 + 3;
              v1470 = v647;
              for ( jj = 0; v648 < v1470; jj = v648 )
              {
                v649 = (const CHAR *)v640;
                v650 = -1LL;
                do
                  ++v650;
                while ( *((_BYTE *)v640 + v650) );
                v640 = (LPCWSTR)((char *)v640 + v650 + 1);
                if ( v637 >= 0 )
                {
                  v651 = (void **)GetProcAddress(*(HMODULE *)v644, v649);
                  if ( !v651 )
                    goto LABEL_796;
                  (&WARBIRD::g_FuncAddress)[v1367] = v651;
                  v648 = jj;
                }
                ++v1367;
                ++v648;
              }
              ++v1455;
            }
          }
          else
          {
LABEL_795:
            v637 = -1073741702;
          }
LABEL_796:
          v652 = (WCHAR *)v1669;
          if ( v1669 )
          {
            v653 = GetProcessHeap();
            HeapFree(v653, 0, v652);
          }
          if ( v637 < 0 )
          {
            v654 = (HMODULE *)&WARBIRD::g_arModuleInfo;
            v655 = 4LL;
            do
            {
              if ( *v654 )
                FreeLibrary(*v654);
              v654 += 3;
              --v655;
            }
            while ( v655 );
            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
            memcpy_0(&WARBIRD::g_FuncAddress, off_180498000, 0x170uLL);
LABEL_806:
            v656 = 0LL;
            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
            v657 = v515 & 0xF;
            v1853[0] = (v515 >> 4) & 0xF;
            v1471 = (unsigned __int8)v657;
            v1853[1] = (v515 >> 8) & 0xF;
            v1798 = 0LL;
            v1853[2] = (v515 >> 12) & 0xF;
            v1444 = (WARBIRD_DELAY_LOAD *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21F8[0])(
                                            0LL,
                                            0LL,
                                            1027LL);
            v1463 = -1;
            if ( !v1444 )
            {
              v658 = GetLastError();
              v659 = v658;
              if ( v658 > 0 )
                v659 = (unsigned __int16)v658 | 0x80070000;
              if ( v659 >= 0 )
                v659 = -2147467259;
LABEL_1020:
              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                ;
              v791 = g_WarbirdSecureFunctionsRefCount;
              if ( g_WarbirdSecureFunctionsRefCount > 0 )
              {
                --g_WarbirdSecureFunctionsRefCount;
                if ( v791 == 1 )
                {
                  v792 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                  v656 = 4LL;
                  do
                  {
                    if ( *v792 )
                      FreeLibrary(*v792);
                    v792 += 3;
                    --v656;
                  }
                  while ( v656 );
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  memcpy_0(&WARBIRD::g_FuncAddress, off_180498000, 0x170uLL);
                }
              }
              _InterlockedExchange(&g_WarbirdSecureFunctionsLock, v656);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1668);
              if ( v659 < 0 )
              {
LABEL_1147:
                if ( v1780 )
                {
                  v865 = -1LL;
                  do
                    ++v865;
                  while ( *((_WORD *)v1780 + v865) != (_WORD)v656 );
                  memset(v1780, 0, 2 * v865 + 2);
                  MemoryFree(v1780);
                  v1780 = (void *)v656;
                }
                if ( v1781 )
                {
                  v866 = -1LL;
                  do
                    ++v866;
                  while ( *((_WORD *)v1781 + v866) != (_WORD)v656 );
                  memset(v1781, 0, 2 * v866 + 2);
                  MemoryFree(v1781);
                  v1781 = (void *)v656;
                }
                if ( v1782 )
                {
                  v867 = -1LL;
                  do
                    ++v867;
                  while ( *((_WORD *)v1782 + v867) != (_WORD)v656 );
                  memset(v1782, 0, 2 * v867 + 2);
                  MemoryFree(v1782);
                  v1782 = (void *)v656;
                }
                if ( v1783 )
                {
                  ((void (*)(void))off_1805C2138)();
                  v1783 = (unsigned __int16 *)v656;
                }
                if ( v1784 )
                {
                  ((void (*)(void))off_1805C2138)();
                  v1784 = (unsigned __int16 *)v656;
                }
                if ( v1785 )
                {
                  ((void (*)(void))off_1805C2138)();
                  v1785 = v656;
                }
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v868 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount > 0 )
                {
                  --g_WarbirdSecureFunctionsRefCount;
                  if ( v868 == 1 )
                  {
                    v656 = 4LL;
                    v869 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    do
                    {
                      if ( *v869 )
                        FreeLibrary(*v869);
                      v869 += 3;
                      --v656;
                    }
                    while ( v656 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, off_180498000, 0x170uLL);
                  }
                }
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, v656);
                v1397 = g_WarbirdNotificationInformation;
                v1498 = ((__int64 (*)(void))off_1805C2198[0])() - g_WarbirdPaintInitTime;
                v1851 = 0LL;
                v1848 = 0LL;
                v1849 = 0LL;
                v1850 = 0LL;
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v870 = g_WarbirdSecureFunctionsRefCount;
                if ( !g_WarbirdSecureFunctionsRefCount )
                {
                  v1411 = v656;
                  v1448 = 0;
                  v1689 = 0LL;
                  v1690 = 0LL;
                  v1424 = v656;
                  v871 = (char *)MemoryAlloc(0x338uLL);
                  v872 = (WCHAR *)v871;
                  if ( !v871 )
                    goto LABEL_1287;
                  v873 = 103LL;
                  v874 = 0;
                  v875 = v871 + 7;
                  v876 = -1;
                  v877 = 0;
                  v878 = 0;
                  v879 = (unsigned __int8 *)&unk_1804F1AC2;
                  do
                  {
                    v880 = *(v879 - 1) | (*(v879 - 2) << 8);
                    v881 = v879[2] << 8;
                    v882 = *v879;
                    v879 += 8;
                    v883 = *(v879 - 7) | ((v882 | (v880 << 8)) << 8);
                    v884 = v883 ^ v878;
                    v885 = *(v879 - 3) | ((*(v879 - 4) | ((*(v879 - 5) | v881) << 8)) << 8);
                    v886 = v884 ^ v885 ^ v877 ^ 0xAC987321;
                    v887 = (__ROL4__(v886, 10) + 4991 * __ROL4__(v886 + 1419157410, 5)) ^ v884;
                    v888 = (43881 * __ROR4__(v887 + 133239679, 9) - __ROL4__(v887, 2)) ^ v886;
                    v889 = (24670 * v888 - (v888 >> 13) - 123127970) ^ v887;
                    v890 = (2033 * __ROL4__(v889 ^ 0xAB69, 6) - __ROL4__(v889, 2)) ^ v888;
                    v891 = (133239679 - (v890 ^ 0xAB69605E)) ^ v889;
                    v892 = (43881 * (v891 ^ 0x137F)) ^ __ROR4__(v891, 6) ^ v890;
                    v893 = (__ROL4__(v892, 2) + 24670 * __ROR4__(v892 + 133239679, 15)) ^ v891;
                    v894 = (2033 * __ROR4__(v893 + 1419157410, 14) - __ROL4__(v893, 8)) ^ v892;
                    v895 = __ROR4__(v894, 10) ^ (4991 * __ROR4__(v894 ^ 0xAB69605E, 12)) ^ v893;
                    v896 = v894 ^ (v895 >> 10) ^ (43881 * (v895 ^ 0x7F1));
                    v897 = (2033 * (__ROR4__(~v896, 5) + 24670)) ^ v895;
                    v898 = v896 ^ (v897 - 2033) ^ 0xAB69605E;
                    v899 = ((v898 >> 2) + 4991 * __ROL4__(v896 ^ (v897 - 2033) ^ 0xAB6967AF, 2)) ^ v897;
                    v900 = (__ROL4__(v899, 7) + 43881 * __ROR4__(v899 - 133239679, 6)) ^ v898;
                    v901 = (24670 * (v900 ^ 0x137F) + __ROR4__(v900, 9)) ^ v899;
                    v902 = (__ROL4__(v901, 7) + 2033 * __ROL4__(v901 ^ 0xAB69, 5)) ^ v900;
                    v903 = v901 ^ v902 ^ 0xAC987321;
                    v904 = (4991 * __ROR4__(v903, 3) - 219010071) ^ v902;
                    v905 = (24670 * __ROR4__(v904 - 133239679, 1) - __ROR4__(v904, 6)) ^ v903;
                    v906 = (__ROL4__(v905, 14) + 2033 * __ROL4__(v905 - 1419157410, 3)) ^ v904;
                    v907 = (4991 * __ROL4__(v906 - 1419157410, 15) - __ROR4__(v906, 14)) ^ v905;
                    v908 = (v907 >> 3) ^ (43881 * (v907 ^ 0x605E)) ^ v906;
                    v909 = 24670 * __ROL4__(v908 ^ 0x7F1137F, 4);
                    v910 = v908;
                    v911 = v876 ^ v908;
                    v876 = v885;
                    v912 = v874 ^ __ROL4__(v910, 2) ^ v909;
                    v874 = v883;
                    v913 = v912 ^ v907;
                    *(v875 - 4) = v913;
                    *v875 = v911;
                    v875 += 8;
                    v914 = __ROR4__(v913, 8);
                    *(v875 - 13) = v914;
                    v915 = __ROR4__(v911, 8);
                    *(v875 - 9) = v915;
                    v916 = __ROR4__(v914, 8);
                    *(v875 - 14) = v916;
                    v917 = __ROR4__(v915, 8);
                    *(v875 - 10) = v917;
                    v918 = __ROR4__(v916, 8);
                    v919 = __ROR4__(v917, 8);
                    *(v875 - 15) = v918;
                    *(v875 - 11) = v919;
                    v877 = __ROR4__(v919, 8);
                    v878 = __ROR4__(v918, 8);
                    --v873;
                  }
                  while ( v873 );
                  v87 = v1465;
                  v920 = v1424;
                  v921 = 0LL;
                  v922 = 0;
                  do
                    v922 ^= *((_BYTE *)v872 + v921++);
                  while ( v921 < 0x338 );
                  if ( v922 == 64LL )
                  {
                    v1689 = v872;
                    v872 = 0LL;
                    v1690 = 824LL;
                    v923 = 0;
                  }
                  else
                  {
                    v923 = -1073425151;
                  }
                  if ( v872 )
                    MemoryFree(v872);
                  if ( v923 >= 0 )
                  {
                    v988 = v1689;
                    HIBYTE(v1689[v1690 / 2 - 1]) = 0;
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    while ( *(_BYTE *)v988 )
                    {
                      v989 = v988;
                      v990 = -1LL;
                      do
                        ++v990;
                      while ( v988[v990] );
                      v991 = &v988[v990];
                      v992 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1448;
                      if ( !GetModuleHandleExW(0, v989, (HMODULE *)v992) )
                        goto LABEL_1287;
                      v920 = 0;
                      if ( **(_WORD **)v992 == 23117
                        && (v993 = *(int *)(*(_QWORD *)v992 + 60LL), (unsigned int)v993 < 0x10000000)
                        && (v994 = *(_QWORD *)v992 + v993, v994 >= *(_QWORD *)v992)
                        && *(_DWORD *)v994 == 17744 )
                      {
                        if ( ((*(_WORD *)(v994 + 24) - 267) & 0xFEFF) != 0 )
                        {
                          v920 = -1073741811;
                        }
                        else
                        {
                          *(_QWORD *)(v992 + 12) = *(_QWORD *)(v994 + 136);
                          *((_DWORD *)v992 + 2) = *(_DWORD *)(v994 + 80);
                        }
                      }
                      else
                      {
                        v920 = -1073741701;
                      }
                      v995 = *(_DWORD *)(v991 + 1);
                      v996 = 0;
                      v988 = v991 + 3;
                      for ( kk = v995; v996 < kk; ++v996 )
                      {
                        v997 = (const CHAR *)v988;
                        v998 = -1LL;
                        do
                          ++v998;
                        while ( *((_BYTE *)v988 + v998) );
                        v988 = (LPCWSTR)((char *)v988 + v998 + 1);
                        if ( v920 >= 0 )
                        {
                          v999 = (void **)GetProcAddress(*(HMODULE *)v992, v997);
                          if ( !v999 )
                            goto LABEL_1288;
                          (&WARBIRD::g_FuncAddress)[v1411] = v999;
                        }
                        ++v1411;
                      }
                      ++v1448;
                    }
                  }
                  else
                  {
LABEL_1287:
                    v920 = -1073741702;
                  }
LABEL_1288:
                  v1000 = (WCHAR *)v1689;
                  if ( v1689 )
                  {
                    v1001 = GetProcessHeap();
                    HeapFree(v1001, 0, v1000);
                  }
                  if ( v920 < 0 )
                  {
                    v1002 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    v1003 = 4LL;
                    do
                    {
                      if ( *v1002 )
                        FreeLibrary(*v1002);
                      v1002 += 3;
                      --v1003;
                    }
                    while ( v1003 );
                    v1004 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, off_180498000, 0x170uLL);
                    goto LABEL_1298;
                  }
                  v870 = g_WarbirdSecureFunctionsRefCount;
                }
                v1004 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                g_WarbirdSecureFunctionsRefCount = v870 + 1;
LABEL_1298:
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                LODWORD(v1851) = v1397;
                v1005 = 4LL;
                LODWORD(v1848) = v1498;
                v1847 = 1;
                LODWORD(v1849) = -1721306479;
                DWORD2(v1848) = 1;
                LODWORD(v1850) = 1;
                DWORD2(v1849) = 1;
                DWORD2(v1850) = 1;
                ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1805C21D0)(0LL, 8225LL, 4LL, &v1847);
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v1006 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount > 0 )
                {
                  --g_WarbirdSecureFunctionsRefCount;
                  if ( v1006 == 1 )
                  {
                    do
                    {
                      if ( *v1004 )
                        FreeLibrary(*v1004);
                      v1004 += 3;
                      --v1005;
                    }
                    while ( v1005 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, off_180498000, 0x170uLL);
                  }
                }
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                off_1805C2260[0](0LL, (int)v1492);
                v1440 = v1504;
                goto LABEL_1307;
              }
              v793 = v1798;
              v1677 = v1798;
              memset_0(v1752, 0, 0x68uLL);
              v794 = 1;
              v795 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1805C2150[0])(v1492, 7LL);
              if ( !v795
                || !((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1805C2168[0])(v795, 104LL, v1752)
                || v1755 != 32
                || !v1756
                || v1753 <= 0
                || v1754 <= 0 )
              {
                v794 = 0;
              }
              v1564 = v794;
              if ( v794 || v657 == 1 )
              {
                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1805C2250)(&v1787, v793, HIDWORD(v1677));
                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1805C2250)(&v1788, v793, HIDWORD(v1677));
                if ( v657 == 1 )
                  v1615 = ((__int64 (__fastcall *)(_QWORD))off_1805C2128[0])(v1779 == 0 ? 0xB26720 : 0);
              }
              v656 = 0LL;
              v1442 = off_1805C2180(v1492, (struct CSingleViewShellExperience *)1);
              v796 = 2064;
              if ( v1778 )
                v796 = 133138;
              v1438 = v796;
              if ( v1564 )
              {
                v797 = v1780;
                v1384 = v1779;
                v1393 = v1783;
                v1406 = (unsigned __int16 *)v1780;
                memset_0(v1757, 0, 0x68uLL);
                memset_0(v1760, 0, 0x68uLL);
                v1421 = 0LL;
                v1370 = 0LL;
                v798 = 0;
                v1819 = 0LL;
                v1820 = 0;
                v1817 = 0LL;
                v1818 = 0LL;
                v1799 = 0LL;
                if ( !v797 )
                  goto LABEL_1145;
                v799 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1805C2150[0])(v1492, 7LL);
                if ( v799 )
                {
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1805C2168[0])(v799, 104LL, v1757) )
                  {
                    v798 = v1758;
                    v1421 = v1759;
                    v1370 = v1758;
                  }
                  v800 = (WARBIRD_DELAY_LOAD *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1805C2110[0])(v1492);
                  if ( v800 )
                  {
                    DWORD1(v1817) = DWORD2(v1787) - v1787;
                    DWORD2(v1817) = DWORD1(v1787) - HIDWORD(v1787);
                    v1819 = 0LL;
                    v1820 = 0;
                    v1678 = 0LL;
                    v1818 = 0LL;
                    LODWORD(v1817) = 40;
                    HIDWORD(v1817) = 2097153;
                    v1445 = (LPVOID)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1805C2118[0])(
                                      v800,
                                      &v1817,
                                      0LL,
                                      &v1678,
                                      0LL,
                                      0);
                    if ( v1445 )
                    {
                      v802 = ((unsigned int (__fastcall *)(LPVOID, __int64, _BYTE *))off_1805C2168[0])(
                               v1445,
                               104LL,
                               v1760) == 0;
                      v803 = 0LL;
                      if ( !v802 )
                        v803 = v1761;
                      DWORD2(v1799) = DWORD2(v1787) - v1787;
                      HIDWORD(v1799) = HIDWORD(v1787) - DWORD1(v1787);
                      v1431 = v803;
                      off_1805C2178(v800, (int)v1445);
                      off_1805C2180(v800, (struct CSingleViewShellExperience *)1);
                      v804 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_1805C2178)(
                               v800,
                               v1393);
                      v805 = off_1805C21E8[0];
                      v1394 = (unsigned __int16 *)v804;
                      v806 = ((__int64 (__fastcall *)(_QWORD))off_1805C2170[0])(0LL);
                      ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, __int128 *, __int64))v805)(v800, &v1799, v806);
                      ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_1805C21D8)(
                        v800,
                        v1406,
                        0xFFFFFFFFLL,
                        &v1799,
                        v1438,
                        0LL);
                      v807 = 0LL;
                      if ( v1471 == 1 )
                      {
                        if ( v1384 )
                        {
                          v1385 = ((__int64 (__fastcall *)(__int64))off_1805C2218[0])(8LL);
                          v807 = 0LL;
                        }
                        else
                        {
                          v1385 = 0xFFFFFF;
                        }
                      }
                      else
                      {
                        v1385 = -5723992;
                      }
                      v808 = 0;
                      v809 = (unsigned int)-(int)v1787;
                      v810 = 0LL;
                      if ( (int)v1787 >= 0 )
                      {
                        v808 = v1787;
                        v809 = 0LL;
                      }
                      v811 = -DWORD1(v1787);
                      if ( (SDWORD1(v1787) & 0x80000000) == 0 )
                      {
                        v810 = DWORD1(v1787);
                        v811 = 0;
                      }
                      v812 = v798 - v808;
                      v813 = DWORD2(v1799) - v809;
                      if ( DWORD2(v1799) - (int)v809 >= v812 )
                        v813 = v812;
                      v814 = HIDWORD(v1799) - v811;
                      if ( HIDWORD(v1799) - v811 >= HIDWORD(v1370) - (int)v810 )
                        v814 = HIDWORD(v1370) - v810;
                      if ( v813 > 0 && v814 > 0 )
                      {
                        v815 = (int)v1370;
                        v809 = v1431 + 4 * ((int)v809 + (__int64)(v811 * DWORD2(v1799)));
                        v816 = v810 * v1370;
                        v810 = 0LL;
                        v1407 = (unsigned __int16 *)v809;
                        v1371 = 0;
                        v817 = &v1421[2 * v808 + 2 * (__int64)v816];
                        LODWORD(v1431) = 4 * DWORD2(v1799);
                        v818 = 2LL * SDWORD2(v1799);
                        v1475 = 2 * v815;
                        v1422 = v817;
                        do
                        {
                          v1377 = 0;
                          v819 = (__int64)v817 - v809;
                          v807 = (unsigned __int8 *)(v809 + 2);
                          for ( mm = 0; mm < v813; v1377 = mm )
                          {
                            if ( (unsigned __int8)((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2) != 0xFF )
                            {
                              v821 = (unsigned __int8)~((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2);
                              v807[v819] -= ~((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2)
                                          * (v1385 - v807[v819]);
                              v822 = v807[v819 - 1];
                              v823 = (unsigned __int64)(2155905153LL * v821 * (BYTE1(v1385) - v822)) >> 32;
                              v807[v819 - 1] = v822 + (v823 >> 7 < 0) + (v823 >> 7);
                              v824 = v807[v819 - 2];
                              v825 = (unsigned __int64)(2155905153LL * v821 * (BYTE2(v1385) - v824)) >> 32;
                              v807[v819 - 2] = v824 + (v825 >> 7 < 0) + (v825 >> 7);
                              mm = v1377;
                              v807[v819 + 1] += v821 * (255 - v807[v819 + 1]) / 255;
                              v810 = 0LL;
                            }
                            ++mm;
                            v807 += 4;
                          }
                          v809 = (__int64)&v1407[v818];
                          v817 = &v1422[v1475];
                          v1407 = (unsigned __int16 *)((char *)v1407 + v818 * 2);
                          v1422 = (unsigned __int16 *)((char *)v1422 + v1475 * 2);
                          ++v1371;
                        }
                        while ( v1371 < v814 );
                        v87 = v1465;
                        LODWORD(v656) = 0;
                      }
                      ((void (__fastcall *)(LPVOID, __int64, __int64, unsigned __int8 *))off_1805C2138)(
                        v1445,
                        v809,
                        v810,
                        v807);
                      if ( v1394 )
                        off_1805C2178(v800, (int)v1394);
                    }
                    else
                    {
                      LODWORD(v656) = GetLastError();
                      v801 = (int)v656 < 0;
                      if ( (int)v656 > 0 )
                      {
                        LODWORD(v656) = (unsigned __int16)v656 | 0x80070000;
                        v801 = (int)v656 < 0;
                      }
                      if ( !v801 )
                        LODWORD(v656) = -2147467259;
                    }
                    ((void (__fastcall *)(WARBIRD_DELAY_LOAD *))off_1805C2130[0])(v800);
                    if ( (int)v656 < 0 )
                    {
LABEL_1119:
                      v656 = 0LL;
                      goto LABEL_1145;
                    }
                    v826 = v1781;
                    v1386 = v1779;
                    v1395 = v1784;
                    memset_0(v1762, 0, 0x68uLL);
                    memset_0(v1766, 0, 0x68uLL);
                    v656 = 0LL;
                    v1408 = 0LL;
                    v1372 = 0;
                    v1378 = 0;
                    v1823 = 0LL;
                    v1824 = 0;
                    v1821 = 0LL;
                    v1822 = 0LL;
                    v1800 = 0LL;
                    if ( !v826 )
                      goto LABEL_1145;
                    v827 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1805C2150[0])(
                             v1492,
                             7LL);
                    if ( v827 )
                    {
                      if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1805C2168[0])(
                             v827,
                             104LL,
                             v1762) )
                      {
                        v1408 = v1765;
                        v1372 = v1763;
                        v1378 = v1764;
                      }
                      v828 = (WARBIRD_DELAY_LOAD *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1805C2110[0])(v1492);
                      if ( v828 )
                      {
                        DWORD1(v1821) = DWORD2(v1788) - v1788;
                        DWORD2(v1821) = DWORD1(v1788) - HIDWORD(v1788);
                        v1823 = 0LL;
                        v1824 = 0;
                        v1679 = 0LL;
                        v1822 = 0LL;
                        LODWORD(v1821) = 40;
                        HIDWORD(v1821) = 2097153;
                        v1446 = (LPVOID)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1805C2118[0])(
                                          v828,
                                          &v1821,
                                          0LL,
                                          &v1679,
                                          0LL,
                                          0);
                        if ( !v1446 )
                        {
                          LODWORD(v656) = GetLastError();
                          v829 = (int)v656 < 0;
                          if ( (int)v656 > 0 )
                          {
                            LODWORD(v656) = (unsigned __int16)v656 | 0x80070000;
                            v829 = (int)v656 < 0;
                          }
                          if ( !v829 )
                            LODWORD(v656) = -2147467259;
                          goto LABEL_1117;
                        }
                        v802 = ((unsigned int (__fastcall *)(LPVOID, __int64, _BYTE *))off_1805C2168[0])(
                                 v1446,
                                 104LL,
                                 v1766) == 0;
                        v830 = 0LL;
                        if ( !v802 )
                          v830 = v1767;
                        DWORD2(v1800) = DWORD2(v1788) - v1788;
                        HIDWORD(v1800) = HIDWORD(v1788) - DWORD1(v1788);
                        v1431 = v830;
                        off_1805C2178(v828, (int)v1446);
                        off_1805C2180(v828, (struct CSingleViewShellExperience *)1);
                        v831 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_1805C2178)(
                                 v828,
                                 v1395);
                        v832 = off_1805C21E8[0];
                        v1396 = (unsigned __int16 *)v831;
                        v833 = ((__int64 (__fastcall *)(_QWORD))off_1805C2170[0])(0LL);
                        ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, __int128 *, __int64))v832)(v828, &v1800, v833);
                        ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1805C21D8)(
                          v828,
                          v826,
                          0xFFFFFFFFLL,
                          &v1800,
                          v1438,
                          0LL);
                        if ( v1471 == 1 )
                        {
                          if ( !v1386 )
                          {
                            v1472 = 0xFFFFFF;
LABEL_1098:
                            v835 = 0;
                            v836 = -(int)v1788;
                            v837 = 0;
                            if ( (int)v1788 >= 0 )
                            {
                              v835 = v1788;
                              v836 = 0;
                            }
                            v838 = -DWORD1(v1788);
                            if ( (SDWORD1(v1788) & 0x80000000) == 0 )
                            {
                              v838 = 0;
                              v837 = DWORD1(v1788);
                            }
                            v839 = DWORD2(v1800) - v836;
                            if ( DWORD2(v1800) - v836 >= v1372 - v835 )
                              v839 = v1372 - v835;
                            v840 = HIDWORD(v1800) - v838;
                            if ( HIDWORD(v1800) - v838 >= v1378 - v837 )
                              v840 = v1378 - v837;
                            if ( v839 > 0 && v840 > 0 )
                            {
                              v841 = v1463;
                              v1439 = 0;
                              v842 = v1431 + 4 * (v836 + (__int64)(DWORD2(v1800) * v838));
                              v1431 = v842;
                              v843 = &v1408[2 * v835 + 2 * (__int64)(v1372 * v837)];
                              v844 = 4LL * SDWORD2(v1800);
                              v1509 = (LPVOID)(4LL * v1372);
                              v1409 = v843;
                              do
                              {
                                v1464 = 0;
                                v845 = (char *)v843 - v842;
                                v846 = (unsigned __int8 *)(v842 + 2);
                                for ( nn = 0; nn < v839; v1464 = nn )
                                {
                                  if ( (unsigned __int8)((*v846 + *(v846 - 2) + 2 * (unsigned int)*(v846 - 1)) >> 2) != 0xFF )
                                  {
                                    v848 = (unsigned __int8)~((*v846 + *(v846 - 2) + 2 * (unsigned int)*(v846 - 1)) >> 2);
                                    v846[(_QWORD)v845] -= ~((*v846 + *(v846 - 2) + 2 * (unsigned int)*(v846 - 1)) >> 2)
                                                        * (v841 - v846[(_QWORD)v845]);
                                    v849 = v846[(_QWORD)v845 - 1];
                                    v850 = (unsigned __int64)(2155905153LL * v848 * (BYTE1(v1472) - v849)) >> 32;
                                    v846[(_QWORD)v845 - 1] = v849 + (v850 >> 7 < 0) + (v850 >> 7);
                                    v851 = v846[(_QWORD)v845 - 2];
                                    v852 = (unsigned __int64)(2155905153LL * v848 * (BYTE2(v1472) - v851)) >> 32;
                                    v846[(_QWORD)v845 - 2] = v851 + (v852 >> 7 < 0) + (v852 >> 7);
                                    v853 = v846[(_QWORD)v845 + 1];
                                    v854 = v848 * (255 - v853);
                                    nn = v1464;
                                    v846[(_QWORD)v845 + 1] = v853 + v854 / 255;
                                  }
                                  ++nn;
                                  v846 += 4;
                                }
                                v842 = v844 + v1431;
                                v843 = (unsigned __int16 *)((char *)v1409 + (_QWORD)v1509);
                                v1431 += v844;
                                v1409 = (unsigned __int16 *)((char *)v1409 + (_QWORD)v1509);
                                ++v1439;
                              }
                              while ( v1439 < v840 );
                              v87 = v1465;
                              LODWORD(v656) = 0;
                            }
                            ((void (__fastcall *)(LPVOID))off_1805C2138)(v1446);
                            if ( v1396 )
                              off_1805C2178(v828, (int)v1396);
LABEL_1117:
                            ((void (__fastcall *)(WARBIRD_DELAY_LOAD *))off_1805C2130[0])(v828);
                            if ( (int)v656 >= 0 )
                            {
                              v855 = v1492;
                              v656 = 0LL;
LABEL_1260:
                              off_1805C2180(v855, (struct CSingleViewShellExperience *)v1442);
LABEL_1141:
                              if ( v1481 )
                                ((void (__fastcall *)(SIZE_T))off_1805C2138)(v1481);
                              goto LABEL_1143;
                            }
                            goto LABEL_1119;
                          }
                          v834 = ((__int64 (__fastcall *)(__int64))off_1805C2218[0])(8LL);
                        }
                        else
                        {
                          v834 = -5723992;
                        }
                        v1472 = v834;
                        v1463 = v834;
                        goto LABEL_1098;
                      }
                    }
                  }
                }
LABEL_1124:
                GetLastError();
LABEL_1145:
                if ( v1615 )
                  ((void (__fastcall *)(__int64))off_1805C2138)(v1615);
                goto LABEL_1147;
              }
              if ( v1779 || (v856 = -64, v657 == 1) )
                v856 = -1;
              BYTE2(v1387) = v856;
              HIBYTE(v1387) = 1;
              v857 = 0;
              LODWORD(v1723) = 0;
              LOWORD(v1387) = 0;
              *(_QWORD *)&v1722 = 0LL;
              Srcc = (WARBIRD_DELAY_LOAD *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1805C2110[0])(v1492);
              if ( !Srcc )
                goto LABEL_1124;
              if ( v657 == 1 )
              {
                v858 = DWORD2(v1788) - v1788;
                if ( DWORD2(v1788) - (int)v1788 <= DWORD2(v1787) - (int)v1787 )
                  v858 = DWORD2(v1787) - v1787;
                v859 = HIDWORD(v1788) - DWORD1(v1787);
                LODWORD(v1373) = v858;
                v860 = 0;
                HIDWORD(v1373) = HIDWORD(v1788) - DWORD1(v1787);
                if ( v1778 )
                {
                  LODWORD(v656) = v1787 + v858 - DWORD2(v1787);
                  LODWORD(v1722) = v656;
                  LODWORD(v1723) = v1788 + v858 - DWORD2(v1788);
                  v860 = v1723;
                  v857 = v656;
                }
                LODWORD(v1509) = DWORD2(v1788) + v860 - v1788;
                DWORD2(v1723) = (_DWORD)v1509;
                v861 = DWORD2(v1787) + v857 - v1787;
                DWORD2(v1722) = v861;
                v1476 = DWORD1(v1788) - DWORD1(v1787);
                DWORD1(v1723) = DWORD1(v1788) - DWORD1(v1787);
                LODWORD(v1431) = HIDWORD(v1788) - DWORD1(v1787);
                HIDWORD(v1723) = HIDWORD(v1788) - DWORD1(v1787);
                v657 = v1471;
                v1457 = HIDWORD(v1787) - DWORD1(v1787);
                HIDWORD(v1722) = HIDWORD(v1787) - DWORD1(v1787);
              }
              else
              {
                v858 = DWORD2(v1798);
                v859 = HIDWORD(v1798);
                v1722 = v1787;
                v861 = DWORD2(v1787);
                LODWORD(v656) = v1787;
                v1723 = v1788;
                v1457 = HIDWORD(v1787);
                LODWORD(v1431) = HIDWORD(v1788);
                LODWORD(v1509) = DWORD2(v1788);
                v1373 = *((_QWORD *)&v1798 + 1);
                v1476 = DWORD1(v1788);
              }
              LODWORD(v1813) = 40;
              v1680 = 0LL;
              DWORD2(v1813) = -v859;
              v1815 = 0LL;
              v1816 = 0;
              v1814 = 0LL;
              DWORD1(v1813) = v858;
              HIDWORD(v1813) = 2097153;
              v862 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1805C2118[0])(
                       Srcc,
                       &v1813,
                       0LL,
                       &v1680,
                       0LL,
                       0);
              v1481 = v862;
              if ( !v862 )
              {
                GetLastError();
                v656 = 0LL;
LABEL_1143:
                if ( Srcc )
                  ((void (__fastcall *)(WARBIRD_DELAY_LOAD *))off_1805C2130[0])(Srcc);
                goto LABEL_1145;
              }
              off_1805C2178(Srcc, v862);
              if ( v657 == 1 && v1615 )
              {
                v1801 = 0LL;
                v1803 = HIDWORD(v1373);
                v1802 = v858;
                off_1805C21E8[0](Srcc, (int)&v1801);
              }
              v863 = v1780;
              v1447 = v1779;
              v1505 = (__int64)v1783;
              v1510 = v1780;
              memset_0(v1768, 0, 0x68uLL);
              memset_0(v1750, 0, 0x68uLL);
              v1511 = 0LL;
              v1423 = 0;
              v1410 = 0;
              v1827 = 0LL;
              v1828 = 0;
              v1825 = 0LL;
              v1826 = 0LL;
              v1797 = 0LL;
              if ( !v863 )
              {
LABEL_1140:
                v656 = 0LL;
                goto LABEL_1141;
              }
              v864 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int64))off_1805C2150[0])(Srcc, 7LL);
              if ( !v864 )
                goto LABEL_1139;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1805C2168[0])(v864, 104LL, v1768) )
              {
                v1511 = v1771;
                v1423 = v1769;
                v1410 = v1770;
              }
              v1512 = (LPVOID)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *))off_1805C2110[0])(Srcc);
              if ( !v1512 )
              {
LABEL_1139:
                GetLastError();
                goto LABEL_1140;
              }
              v924 = 0;
              DWORD2(v1825) = DWORD1(v1722) - v1457;
              v925 = v861 - v656;
              v1685 = 0LL;
              v1827 = 0LL;
              v1828 = 0;
              v1826 = 0LL;
              LODWORD(v1825) = 40;
              DWORD1(v1825) = v925;
              HIDWORD(v1825) = 2097153;
              v926 = ((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1805C2118[0])(
                       v1512,
                       &v1825,
                       0LL,
                       &v1685,
                       0LL,
                       0);
              v1513 = (char *)v926;
              if ( v926 )
              {
                v928 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1805C2168[0])(v926, 104LL, v1750);
                DWORD2(v1797) = v925;
                v929 = (CToastCenterExperienceManager *)v1512;
                v930 = 0LL;
                if ( v928 )
                  v930 = v1751;
                HIDWORD(v1797) = v1457 - DWORD1(v1722);
                v1499 = v930;
                off_1805C2178((WARBIRD_DELAY_LOAD *)v1512, (int)v1513);
                off_1805C2180(v929, (struct CSingleViewShellExperience *)1);
                v931 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1805C2178)(v929, v1505);
                v932 = off_1805C21E8[0];
                v1505 = v931;
                v933 = ((__int64 (__fastcall *)(_QWORD))off_1805C2170[0])(0LL);
                ((void (__fastcall *)(LPVOID, __int128 *, __int64))v932)(v1512, &v1797, v933);
                v934 = (WARBIRD_DELAY_LOAD *)v1512;
                ((void (__fastcall *)(LPVOID, LPVOID, __int64, __int128 *, int, _QWORD))off_1805C21D8)(
                  v1512,
                  v1510,
                  0xFFFFFFFFLL,
                  &v1797,
                  v1438,
                  0LL);
                if ( v1471 == 1 )
                {
                  if ( v1447 )
                    v1449 = ((__int64 (__fastcall *)(__int64))off_1805C2218[0])(8LL);
                  else
                    v1449 = 0xFFFFFF;
                }
                else
                {
                  v1449 = -5723992;
                }
                v935 = -(int)v656;
                v936 = 0;
                v937 = 0;
                if ( (int)v656 >= 0 )
                {
                  v936 = v656;
                  v935 = 0;
                }
                v938 = -DWORD1(v1722);
                if ( (SDWORD1(v1722) & 0x80000000) == 0 )
                {
                  v937 = DWORD1(v1722);
                  v938 = 0;
                }
                v939 = DWORD2(v1797) - v935;
                if ( DWORD2(v1797) - v935 >= v1423 - v936 )
                  v939 = v1423 - v936;
                v940 = HIDWORD(v1797) - v938;
                if ( HIDWORD(v1797) - v938 >= v1410 - v937 )
                  v940 = v1410 - v937;
                if ( v939 > 0 && v940 > 0 )
                {
                  v1412 = 0;
                  v941 = v1499 + 4 * (v935 + (__int64)(DWORD2(v1797) * v938));
                  v1500 = v941;
                  v942 = (char *)v1511 + 4 * v936 + 4 * (__int64)(v1423 * v937);
                  v1510 = (LPVOID)(4LL * SDWORD2(v1797));
                  v943 = v1510;
                  v1458 = 4LL * v1423;
                  v1511 = v942;
                  do
                  {
                    v1425 = 0;
                    v944 = &v942[-v941];
                    v945 = (unsigned __int8 *)(v941 + 2);
                    for ( i1 = 0; i1 < v939; v1425 = i1 )
                    {
                      if ( (unsigned __int8)((*v945 + *(v945 - 2) + 2 * (unsigned int)*(v945 - 1)) >> 2) != 0xFF )
                      {
                        v947 = (unsigned __int8)~((*v945 + *(v945 - 2) + 2 * (unsigned int)*(v945 - 1)) >> 2);
                        v945[(_QWORD)v944] -= ~((*v945 + *(v945 - 2) + 2 * (unsigned int)*(v945 - 1)) >> 2)
                                            * (v1449 - v945[(_QWORD)v944]);
                        v948 = v945[(_QWORD)v944 - 1];
                        v949 = (unsigned __int64)(2155905153LL * v947 * (BYTE1(v1449) - v948)) >> 32;
                        v945[(_QWORD)v944 - 1] = v948 + (v949 >> 7 < 0) + (v949 >> 7);
                        v950 = v945[(_QWORD)v944 - 2];
                        v951 = (unsigned __int64)(2155905153LL * v947 * (BYTE2(v1449) - v950)) >> 32;
                        v945[(_QWORD)v944 - 2] = v950 + (v951 >> 7 < 0) + (v951 >> 7);
                        v952 = v945[(_QWORD)v944 + 1];
                        v953 = v947 * (255 - v952);
                        i1 = v1425;
                        v945[(_QWORD)v944 + 1] = v952 + v953 / 255;
                      }
                      ++i1;
                      v945 += 4;
                    }
                    v941 = (__int64)v943 + v1500;
                    v942 = (char *)v1511 + v1458;
                    v1500 += (__int64)v943;
                    v1511 = (char *)v1511 + v1458;
                    ++v1412;
                  }
                  while ( v1412 < v940 );
                  v87 = v1465;
                  v858 = v1373;
                  v924 = 0;
                  v934 = (WARBIRD_DELAY_LOAD *)v1512;
                }
                ((void (__fastcall *)(char *))off_1805C2138)(v1513);
                v656 = 0LL;
                if ( v1505 )
                  off_1805C2178(v934, v1505);
              }
              else
              {
                v927 = GetLastError();
                v656 = 0LL;
                v924 = v927;
                if ( v927 > 0 )
                  v924 = (unsigned __int16)v927 | 0x80070000;
                if ( v924 >= 0 )
                  v924 = -2147467259;
              }
              ((void (__fastcall *)(LPVOID))off_1805C2130[0])(v1512);
              if ( v924 < 0 )
                goto LABEL_1141;
              v954 = v1781;
              v1398 = v1779;
              v1501 = v1784;
              v1513 = (char *)v1781;
              memset_0(v1772, 0, 0x68uLL);
              memset_0(v1776, 0, 0x68uLL);
              v1512 = 0LL;
              v1413 = 0;
              v1426 = 0;
              v1831 = 0LL;
              v1832 = 0;
              v1829 = 0LL;
              v1830 = 0LL;
              v1804 = 0LL;
              if ( !v954 )
                goto LABEL_1141;
              v955 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int64))off_1805C2150[0])(Srcc, 7LL);
              if ( !v955 )
                goto LABEL_1220;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1805C2168[0])(v955, 104LL, v1772) )
              {
                v1512 = v1775;
                v1413 = v1773;
                v1426 = v1774;
              }
              v1511 = (LPVOID)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *))off_1805C2110[0])(Srcc);
              if ( !v1511 )
              {
LABEL_1220:
                GetLastError();
                goto LABEL_1141;
              }
              v956 = (_DWORD)v1509 - v1723;
              DWORD2(v1829) = v1476 - v1431;
              v1831 = 0LL;
              v1832 = 0;
              v1688 = 0LL;
              v1830 = 0LL;
              LODWORD(v1829) = 40;
              DWORD1(v1829) = (_DWORD)v1509 - v1723;
              HIDWORD(v1829) = 2097153;
              v957 = (void *)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1805C2118[0])(
                               v1511,
                               &v1829,
                               0LL,
                               &v1688,
                               0LL,
                               0);
              v1510 = v957;
              if ( !v957 )
              {
                LODWORD(v656) = GetLastError();
                v958 = (int)v656 < 0;
                if ( (int)v656 > 0 )
                {
                  LODWORD(v656) = (unsigned __int16)v656 | 0x80070000;
                  v958 = (int)v656 < 0;
                }
                if ( !v958 )
                  LODWORD(v656) = -2147467259;
                goto LABEL_1256;
              }
              v959 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_1805C2168[0])(v957, 104LL, v1776);
              DWORD2(v1804) = v956;
              v960 = (CToastCenterExperienceManager *)v1511;
              v961 = 0LL;
              if ( v959 )
                v961 = v1777;
              HIDWORD(v1804) = v1431 - v1476;
              v1505 = v961;
              off_1805C2178((WARBIRD_DELAY_LOAD *)v1511, (int)v1510);
              off_1805C2180(v960, (struct CSingleViewShellExperience *)1);
              v962 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1805C2178)(
                       v960,
                       v1501);
              v963 = off_1805C21E8[0];
              v1502 = v962;
              v964 = ((__int64 (__fastcall *)(_QWORD))off_1805C2170[0])(0LL);
              ((void (__fastcall *)(LPVOID, __int128 *, __int64))v963)(v1511, &v1804, v964);
              v965 = (WARBIRD_DELAY_LOAD *)v1511;
              ((void (__fastcall *)(LPVOID, char *, __int64, __int128 *, int, _QWORD))off_1805C21D8)(
                v1511,
                v1513,
                0xFFFFFFFFLL,
                &v1804,
                v1438,
                0LL);
              if ( v1471 == 1 )
              {
                if ( !v1398 )
                {
                  v1399 = 0xFFFFFF;
LABEL_1237:
                  v967 = -(int)v1723;
                  v968 = 0;
                  v969 = 0;
                  if ( (int)v1723 >= 0 )
                  {
                    v968 = v1723;
                    v967 = 0;
                  }
                  v970 = -v1476;
                  if ( v1476 >= 0 )
                  {
                    v969 = v1476;
                    v970 = 0;
                  }
                  v971 = v1413;
                  v972 = DWORD2(v1804) - v967;
                  if ( DWORD2(v1804) - v967 >= v1413 - v968 )
                    v972 = v1413 - v968;
                  v973 = HIDWORD(v1804) - v970;
                  if ( HIDWORD(v1804) - v970 >= v1426 - v969 )
                    v973 = v1426 - v969;
                  if ( v972 > 0 && v973 > 0 )
                  {
                    v974 = v1413 * v969;
                    v1414 = 0;
                    v975 = (unsigned __int8 *)(v1505 + 4 * (v967 + (__int64)(DWORD2(v1804) * v970)));
                    v1513 = (char *)v975;
                    v976 = (char *)v1512 + 4 * v968 + 4 * (__int64)v974;
                    v1505 = 4LL * SDWORD2(v1804);
                    v977 = v1505;
                    v1431 = 4 * v971;
                    v1512 = v976;
                    do
                    {
                      v1427 = 0;
                      v978 = (char *)(v976 - (char *)v975);
                      v979 = v975 + 2;
                      for ( i2 = 0; i2 < v972; v1427 = i2 )
                      {
                        if ( (unsigned __int8)((*v979 + *(v979 - 2) + 2 * (unsigned int)*(v979 - 1)) >> 2) != 0xFF )
                        {
                          v981 = (unsigned __int8)~((*v979 + *(v979 - 2) + 2 * (unsigned int)*(v979 - 1)) >> 2);
                          v979[(_QWORD)v978] -= ~((*v979 + *(v979 - 2) + 2 * (unsigned int)*(v979 - 1)) >> 2)
                                              * (v1463 - v979[(_QWORD)v978]);
                          v982 = v979[(_QWORD)v978 - 1];
                          v983 = (unsigned __int64)(2155905153LL * v981 * (BYTE1(v1399) - v982)) >> 32;
                          v979[(_QWORD)v978 - 1] = v982 + (v983 >> 7 < 0) + (v983 >> 7);
                          v984 = v979[(_QWORD)v978 - 2];
                          v985 = (unsigned __int64)(2155905153LL * v981 * (BYTE2(v1399) - v984)) >> 32;
                          v979[(_QWORD)v978 - 2] = v984 + (v985 >> 7 < 0) + (v985 >> 7);
                          v986 = v979[(_QWORD)v978 + 1];
                          v987 = v981 * (255 - v986);
                          i2 = v1427;
                          v979[(_QWORD)v978 + 1] = v986 + v987 / 255;
                        }
                        ++i2;
                        v979 += 4;
                      }
                      v975 = (unsigned __int8 *)&v1513[v977];
                      v976 = (char *)v1512 + v1431;
                      v1513 += v977;
                      v1512 = (char *)v1512 + v1431;
                      ++v1414;
                    }
                    while ( v1414 < v973 );
                    v87 = v1465;
                    LODWORD(v656) = 0;
                    v858 = v1373;
                    v965 = (WARBIRD_DELAY_LOAD *)v1511;
                  }
                  ((void (__fastcall *)(LPVOID))off_1805C2138)(v1510);
                  if ( v1502 )
                    off_1805C2178(v965, v1502);
LABEL_1256:
                  ((void (__fastcall *)(LPVOID))off_1805C2130[0])(v1511);
                  if ( (int)v656 >= 0 )
                  {
                    v855 = v1492;
                    v656 = 0LL;
                    if ( v1471 == 1 )
                      ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, _DWORD, WARBIRD_DELAY_LOAD *, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                        v1492,
                        (unsigned int)v1787,
                        DWORD1(v1787),
                        v858,
                        HIDWORD(v1373),
                        Srcc,
                        0,
                        0,
                        13369376);
                    else
                      ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, _DWORD, WARBIRD_DELAY_LOAD *, _DWORD, _DWORD, unsigned int, _DWORD, int))off_1805C2140[0])(
                        v1492,
                        (unsigned int)v1798,
                        DWORD1(v1798),
                        v858,
                        HIDWORD(v1373),
                        Srcc,
                        0,
                        0,
                        v858,
                        HIDWORD(v1373),
                        v1387);
                    goto LABEL_1260;
                  }
                  goto LABEL_1140;
                }
                v966 = ((__int64 (__fastcall *)(__int64))off_1805C2218[0])(8LL);
              }
              else
              {
                v966 = -5723992;
              }
              v1399 = v966;
              v1463 = v966;
              goto LABEL_1237;
            }
            v1671 = 0LL;
            v1672 = 0LL;
            v660 = 0LL;
            v1673 = 0LL;
            v1674 = 0LL;
            v659 = 0;
            v1675 = 0LL;
            v1676 = 0LL;
            v1566 = 0;
            if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1805C21A0[0])(
                    8LL,
                    &v1567,
                    0LL,
                    &v1566) )
            {
              v661 = GetLastError();
LABEL_813:
              v659 = v661;
              if ( v661 > 0 )
                v659 = (unsigned __int16)v661 | 0x80070000;
              if ( v659 >= 0 )
                v659 = -2147467259;
LABEL_830:
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1676);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1675);
              if ( v659 >= 0 )
              {
                v666 = 0;
                v667 = 0;
                v1375 = 0;
                if ( v1367 )
                {
                  v668 = 0LL;
LABEL_833:
                  v669 = 0;
                  v670 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
                  while ( v660[v668] != *v670 )
                  {
                    ++v670;
                    if ( ++v669 >= 0x26 )
                    {
                      ++v667;
                      ++v668;
                      if ( v667 >= v1367 )
                        goto LABEL_839;
                      goto LABEL_833;
                    }
                  }
                  v666 = v669;
                  v1375 = v669;
                }
LABEL_839:
                v671 = v666;
                v1368 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1805C21A8[0])(
                       `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v666],
                       v1854,
                       85LL)
                  && ((int (__fastcall *)(_BYTE *, __int64, char *))off_1805C2190[0])(v1854, 88LL, v1805) > 0 )
                {
                  v1368 = (v1806 >> 27) & 1;
                  LODWORD(v656) = 0;
                }
                v672 = L"Segoe UI Light";
                v673 = 19LL;
                v674 = (const wchar_t **)v1852;
                do
                {
                  *v674 = v672;
                  v675 = -1LL;
                  do
                    ++v675;
                  while ( v672[v675] != (_WORD)v656 );
                  ++v674;
                  v672 += v675 + 1;
                  --v673;
                }
                while ( v673 );
                v1389 = (unsigned __int16 *)v1852[*((unsigned __int8 *)&`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping
                                                  + 3 * v671)];
                v1405 = (unsigned __int16 *)v1852[(unsigned __int8)byte_1804F6B31[3 * v671]];
                v1420 = (unsigned __int16 *)v1852[(unsigned __int8)byte_1804F6B32[3 * v671]];
                v1456 = v656;
                v656 = (__int64)MemoryAlloc(0x1C90uLL);
                v1431 = v656;
                if ( v656 )
                {
                  v676 = (_BYTE *)(v656 + 7);
                  v677 = -1;
                  v678 = (unsigned __int8 *)&unk_18054F8C2;
                  v679 = 0;
                  v680 = 0;
                  v681 = 0;
                  v682 = 914LL;
                  do
                  {
                    v683 = *(v678 - 1) | (*(v678 - 2) << 8);
                    v684 = v678[2] << 8;
                    v685 = *v678;
                    v678 += 8;
                    v686 = *(v678 - 7) | ((v685 | (v683 << 8)) << 8);
                    v687 = v686 ^ v681;
                    v688 = *(v678 - 3) | ((*(v678 - 4) | ((*(v678 - 5) | v684) << 8)) << 8);
                    v689 = v687 ^ v688 ^ v680 ^ 0xAC987321;
                    v690 = (__ROL4__(v689, 10) + 4991 * __ROL4__(v689 + 1419157410, 5)) ^ v687;
                    v691 = (43881 * __ROR4__(v690 + 133239679, 9) - __ROL4__(v690, 2)) ^ v689;
                    v692 = (24670 * v691 - (v691 >> 13) - 123127970) ^ v690;
                    v693 = (2033 * __ROL4__(v692 ^ 0xAB69, 6) - __ROL4__(v692, 2)) ^ v691;
                    v694 = (133239679 - (v693 ^ 0xAB69605E)) ^ v692;
                    v695 = (43881 * (v694 ^ 0x137F)) ^ __ROR4__(v694, 6) ^ v693;
                    v696 = (__ROL4__(v695, 2) + 24670 * __ROR4__(v695 + 133239679, 15)) ^ v694;
                    v697 = (2033 * __ROR4__(v696 + 1419157410, 14) - __ROL4__(v696, 8)) ^ v695;
                    v698 = __ROR4__(v697, 10) ^ (4991 * __ROR4__(v697 ^ 0xAB69605E, 12)) ^ v696;
                    v699 = (v698 >> 10) ^ (43881 * (v698 ^ 0x7F1)) ^ v697;
                    v700 = (2033 * (__ROR4__(~v699, 5) + 24670)) ^ v698;
                    v701 = v699 ^ (v700 - 2033) ^ 0xAB69605E;
                    v702 = ((v701 >> 2) + 4991 * __ROL4__(v699 ^ (v700 - 2033) ^ 0xAB6967AF, 2)) ^ v700;
                    v703 = (__ROL4__(v702, 7) + 43881 * __ROR4__(v702 - 133239679, 6)) ^ v701;
                    v704 = (24670 * (v703 ^ 0x137F) + __ROR4__(v703, 9)) ^ v702;
                    v705 = (__ROL4__(v704, 7) + 2033 * __ROL4__(v704 ^ 0xAB69, 5)) ^ v703;
                    v706 = v705 ^ v704 ^ 0xAC987321;
                    v707 = (4991 * __ROR4__(v706, 3) - 219010071) ^ v705;
                    v708 = (24670 * __ROR4__(v707 - 133239679, 1) - __ROR4__(v707, 6)) ^ v706;
                    v709 = (__ROL4__(v708, 14) + 2033 * __ROL4__(v708 - 1419157410, 3)) ^ v707;
                    v710 = (4991 * __ROL4__(v709 - 1419157410, 15) - __ROR4__(v709, 14)) ^ v708;
                    v711 = (v710 >> 3) ^ (43881 * (v710 ^ 0x605E)) ^ v709;
                    v712 = 24670 * __ROL4__(v711 ^ 0x7F1137F, 4);
                    v713 = v711;
                    v714 = v677 ^ v711;
                    v677 = v688;
                    v715 = v679 ^ __ROL4__(v713, 2) ^ v712;
                    v679 = v686;
                    v716 = v715 ^ v710;
                    *(v676 - 4) = v716;
                    *v676 = v714;
                    v676 += 8;
                    v717 = __ROR4__(v716, 8);
                    *(v676 - 13) = v717;
                    v718 = __ROR4__(v714, 8);
                    *(v676 - 9) = v718;
                    v719 = __ROR4__(v717, 8);
                    *(v676 - 14) = v719;
                    v720 = __ROR4__(v718, 8);
                    *(v676 - 10) = v720;
                    v721 = __ROR4__(v719, 8);
                    v722 = __ROR4__(v720, 8);
                    *(v676 - 15) = v721;
                    *(v676 - 11) = v722;
                    v680 = __ROR4__(v722, 8);
                    v681 = __ROR4__(v721, 8);
                    --v682;
                  }
                  while ( v682 );
                  v87 = v1465;
                  v659 = v1456;
                  v723 = 0LL;
                  v724 = (void *)v1431;
                  v725 = 0LL;
                  do
                  {
                    v726 = _mm_loadu_si128((const __m128i *)(v723 + v1431));
                    v723 += 16LL;
                    v727 = _mm_xor_si128(v726, v725);
                    v725 = v727;
                  }
                  while ( v723 < 0x1C90 );
                  v728 = _mm_xor_si128(v727, _mm_srli_si128(v727, 8));
                  v729 = _mm_xor_si128(v728, _mm_srli_si128(v728, 4));
                  v730 = _mm_xor_si128(v729, _mm_srli_si128(v729, 2));
                  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v730, _mm_srli_si128(v730, 1))) == 127LL )
                  {
                    v1672 = (_BYTE *)v1431;
                    v724 = 0LL;
                    v1673 = 7312LL;
                  }
                  else
                  {
                    v659 = -1073425151;
                  }
                  if ( v724 )
                    MemoryFree(v724);
                  v656 = 0LL;
                  if ( v659 >= 0 )
                  {
                    v731 = v1672;
                    v732 = v1846;
                    v733 = 6LL;
                    do
                    {
                      for ( i3 = 0; i3 < 0x26; ++i3 )
                      {
                        if ( v1375 == i3 )
                          *v732 = v731;
                        v735 = -1LL;
                        do
                          ++v735;
                        while ( v731[v735] );
                        v731 += v735 + 1;
                      }
                      ++v732;
                      --v733;
                    }
                    while ( v733 );
                    v736 = (char *)MemoryAlloc(0x18uLL);
                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1674);
                    if ( v736 )
                    {
                      v737 = v1853;
                      v1474 = v1853;
                      v1441 = 0;
                      v656 = (__int64)v736;
                      v738 = v736;
                      *(_OWORD *)v736 = 0LL;
                      v739 = 0;
                      v1674 = v736;
                      *((_QWORD *)v736 + 2) = 0LL;
                      v1431 = (__int64)v736;
                      while ( 2 )
                      {
                        v740 = *v737;
                        v741 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
                        v742 = 0LL;
                        while ( v740 != *v741 )
                        {
                          v742 = (unsigned int)(v742 + 1);
                          ++v741;
                          if ( (unsigned int)v742 >= 6 )
                            goto LABEL_881;
                        }
                        v743 = v1846[v742];
                        v744 = -1LL;
                        do
                          ++v744;
                        while ( *(_BYTE *)(v744 + v743) );
                        v745 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1805C21C0[0])(
                                 65001LL,
                                 0LL,
                                 v743,
                                 (unsigned int)(v744 + 1),
                                 0LL,
                                 0);
                        v1376 = v745;
                        if ( !v745 )
                          goto LABEL_884;
                        v746 = MemoryAlloc(2LL * v745);
                        *(_QWORD *)v1431 = v746;
                        if ( !v746 )
                        {
                          v659 = -2147024882;
                          goto LABEL_888;
                        }
                        v747 = -1LL;
                        do
                          ++v747;
                        while ( *(_BYTE *)(v747 + v743) );
                        if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1805C21C0[0])(
                                65001LL,
                                0LL,
                                v743,
                                (unsigned int)(v747 + 1),
                                v746,
                                v1376) )
                        {
LABEL_884:
                          v748 = GetLastError();
                          v659 = v748;
                          if ( v748 > 0 )
                            v659 = (unsigned __int16)v748 | 0x80070000;
                          if ( v659 >= 0 )
                            v659 = -2147467259;
                          goto LABEL_888;
                        }
                        v738 = (char *)v1431;
                        v739 = v1441;
LABEL_881:
                        ++v739;
                        v737 = v1474 + 1;
                        v1441 = v739;
                        v738 += 8;
                        ++v1474;
                        v1431 = (__int64)v738;
                        if ( v739 < 3 )
                          continue;
                        break;
                      }
                      v656 = 0LL;
                      v1674 = 0LL;
                      v1668 = (void **)v736;
                      v1778 = v1368;
                    }
                    else
                    {
                      v1674 = 0LL;
                      v659 = -2147024882;
                    }
LABEL_888:
                    if ( v656 )
                    {
                      v749 = 3LL;
                      do
                      {
                        v750 = *(_WORD **)v656;
                        if ( *(_QWORD *)v656 )
                        {
                          v751 = -1LL;
                          do
                            ++v751;
                          while ( v750[v751] );
                          memset(v750, 0, 2 * v751 + 2);
                          MemoryFree(*(void **)v656);
                        }
                        v656 += 8LL;
                        --v749;
                      }
                      while ( v749 );
                      v656 = 0LL;
                    }
                  }
                }
                else
                {
                  v659 = -2147024882;
                }
              }
              if ( v1672 )
                memset(v1672, 0, v1673);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1674);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1672);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1671);
              if ( v659 < 0 )
                goto LABEL_1018;
              v752 = v656;
              v659 = v656;
              v1780 = *v1668;
              v1781 = v1668[1];
              v1782 = v1668[2];
              v1739 = 0LL;
              LODWORD(v1739) = 16;
              if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1805C2268)(
                                   66LL,
                                   0LL,
                                   &v1739,
                                   0LL) )
              {
                v752 = BYTE4(v1739) & 1;
              }
              else
              {
                v753 = GetLastError();
                v659 = v753;
                if ( v753 > 0 )
                  v659 = (unsigned __int16)v753 | 0x80070000;
                if ( v659 >= 0 )
                  v659 = -2147467259;
              }
              v657 = v1471;
              v1779 = v752;
              if ( v659 < 0 )
                goto LABEL_1019;
              if ( v1471 == 1 )
              {
                v1436 = 42;
              }
              else
              {
                if ( v1471 != 2 )
                {
                  if ( v1471 == 3 )
                  {
                    v1436 = 225;
                    v1382 = 225;
                  }
LABEL_913:
                  v754 = 96;
                  v1369 = 96;
                  memset_0(v1842, 0, 0xDCuLL);
                  v1843 = 220;
                  v659 = 0;
                  if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1805C21E0[0])(
                         0LL,
                         0xFFFFFFFFLL,
                         v1842) )
                  {
                    v754 = v1844;
                    *((_QWORD *)&v1738 + 1) = v1845;
                    if ( v1844 < 0x60u )
                      v754 = 96;
                    v1369 = v754;
                  }
                  v755 = v1389;
                  if ( v1471 != 1 )
                    v755 = v1420;
                  memset_0(v1833, 0, 0x5CuLL);
                  v756 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21F8[0])(0LL, 0LL, 1027LL);
                  if ( !v756 )
                  {
                    v757 = GetLastError();
                    v656 = 0LL;
                    v659 = v757;
                    if ( v757 > 0 )
                      v659 = (unsigned __int16)v757 | 0x80070000;
                    if ( v659 >= 0 )
                      v659 = -2147467259;
                    goto LABEL_1018;
                  }
                  v758 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21B8)(v1436, v754, 72LL);
                  v1833[4] = 400;
                  v1834 = 5;
                  v1833[0] = -v758;
                  StringCchCopyW(v1835, 0x20uLL, v755);
                  v759 = ((__int64 (__fastcall *)(_DWORD *))off_1805C2120[0])(v1833);
                  v656 = 0LL;
                  if ( v759 )
                  {
                    v1783 = (unsigned __int16 *)v759;
                  }
                  else
                  {
                    v760 = GetLastError();
                    v659 = v760;
                    if ( v760 > 0 )
                      v659 = (unsigned __int16)v760 | 0x80070000;
                    if ( v659 >= 0 )
                      v659 = -2147467259;
                  }
                  off_1805C2260[0](0LL, v756);
                  if ( v659 < 0 )
                    goto LABEL_1018;
                  v657 = v1471;
                  v761 = v1389;
                  if ( v1471 != 1 )
                    v761 = v1420;
                  v1390 = v761;
                  memset_0(v1836, 0, 0x5CuLL);
                  v659 = 0;
                  v656 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21F8[0])(0LL, 0LL, 1027LL);
                  if ( !v656 )
                  {
                    v762 = GetLastError();
                    v659 = v762;
                    if ( v762 > 0 )
                      v659 = (unsigned __int16)v762 | 0x80070000;
                    if ( v659 < 0 )
                      goto LABEL_1019;
                    goto LABEL_937;
                  }
                  v763 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21B8)(v1382, v754, 72LL);
                  v1836[4] = 400;
                  v1836[0] = -v763;
                  v1837 = 5;
                  StringCchCopyW(v1838, 0x20uLL, v1390);
                  v764 = ((__int64 (__fastcall *)(_DWORD *))off_1805C2120[0])(v1836);
                  if ( v764 )
                  {
                    v1784 = (unsigned __int16 *)v764;
                  }
                  else
                  {
                    v765 = GetLastError();
                    v659 = v765;
                    if ( v765 > 0 )
                      v659 = (unsigned __int16)v765 | 0x80070000;
                    if ( v659 >= 0 )
                      v659 = -2147467259;
                  }
                  off_1805C2260[0](0LL, v656);
                  v656 = 0LL;
                  if ( v659 < 0 )
                    goto LABEL_1019;
                  v766 = 0;
                  if ( v1471 != 1 )
                  {
                    if ( v1471 == 2 )
                    {
                      v766 = 0;
                      LODWORD(v656) = SDWORD2(v1738) / 4;
LABEL_949:
                      *((_QWORD *)&v1798 + 1) = __PAIR64__(v766, v656);
                      if ( v1471 == 1 )
                      {
                        v767 = 150;
                        v1383 = 32;
                      }
                      else
                      {
                        if ( (unsigned int)(v1471 - 2) > 1 )
                        {
                          v1383 = 42;
                          v768 = 42;
                          v767 = 42;
                          goto LABEL_956;
                        }
                        v767 = 0;
                        v1383 = 0;
                      }
                      v768 = 0;
LABEL_956:
                      v1437 = v767;
                      v769 = v656 - v767 - v768;
                      v659 = 0;
                      v770 = v1780;
                      DWORD2(v1788) = v769;
                      DWORD2(v1787) = v769;
                      v1391 = (unsigned __int16 *)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_1805C2178)(
                                                    v1444,
                                                    v1783);
                      if ( !(unsigned int)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1805C21D8)(
                                            v1444,
                                            v770,
                                            0xFFFFFFFFLL,
                                            &v1787,
                                            3152,
                                            0LL) )
                        v659 = -2147467259;
                      if ( v1391 )
                        off_1805C2178(v1444, (int)v1391);
                      if ( v659 >= 0 )
                      {
                        v659 = 0;
                        v771 = v1781;
                        v1392 = (unsigned __int16 *)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_1805C2178)(
                                                      v1444,
                                                      v1784);
                        if ( !(unsigned int)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1805C21D8)(
                                              v1444,
                                              v771,
                                              0xFFFFFFFFLL,
                                              &v1788,
                                              3152,
                                              0LL) )
                          v659 = -2147467259;
                        if ( v1392 )
                          off_1805C2178(v1444, (int)v1392);
                        if ( v659 >= 0 )
                        {
                          if ( (unsigned int)(v1471 - 2) <= 1 )
                          {
                            v769 = DWORD2(v1788);
                            if ( SDWORD2(v1787) > SDWORD2(v1788) )
                              v769 = DWORD2(v1787);
                          }
                          if ( v1778 )
                          {
                            off_1805C2250(
                              (CToastCenterExperienceManager *)&v1787,
                              (struct CSingleViewShellExperience *)(v769 + v768 - DWORD2(v1787)));
                            v772 = v769 + v768 - DWORD2(v1788);
                          }
                          else
                          {
                            off_1805C2250(
                              (CToastCenterExperienceManager *)&v1787,
                              (struct CSingleViewShellExperience *)v1437);
                            v772 = v1437;
                          }
                          ((void (__fastcall *)(__int128 *, __int64, _QWORD))off_1805C2250)(
                            &v1788,
                            v772,
                            (unsigned int)(HIDWORD(v1787) + v1383));
                          v657 = v1471;
                          if ( (unsigned int)(v1471 - 2) <= 1 )
                          {
                            *((_QWORD *)&v1798 + 1) = __PAIR64__(HIDWORD(v1788), v769);
                            v1786 = -5723992;
                            goto LABEL_1003;
                          }
                          if ( v1471 != 1 )
                            goto LABEL_1003;
                          v1786 = 0xFFFFFF;
                          memset_0(v1839, 0, 0x5CuLL);
                          v659 = 0;
                          v773 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21F8[0])(0LL, 0LL, 1027LL);
                          if ( v773 )
                          {
                            v775 = v1369;
                            v776 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1805C21B8)(11LL, v1369);
                            v1839[4] = 400;
                            v1839[0] = -v776;
                            v1840 = 5;
                            StringCchCopyW(v1841, 0x20uLL, v1405);
                            v777 = ((__int64 (__fastcall *)(_DWORD *))off_1805C2120[0])(v1839);
                            if ( v777 )
                            {
                              v1785 = v777;
                            }
                            else
                            {
                              v659 = GetLastError();
                              v778 = v659 < 0;
                              if ( v659 > 0 )
                              {
                                v659 = (unsigned __int16)v659 | 0x80070000;
                                v778 = v659 < 0;
                              }
                              if ( !v778 )
                                v659 = -2147467259;
                            }
                            off_1805C2260[0](0LL, v773);
                          }
                          else
                          {
                            v659 = GetLastError();
                            v774 = v659 < 0;
                            if ( v659 > 0 )
                            {
                              v659 = (unsigned __int16)v659 | 0x80070000;
                              v774 = v659 < 0;
                            }
                            if ( !v774 )
                            {
                              v656 = 0LL;
LABEL_937:
                              v659 = -2147467259;
LABEL_1019:
                              off_1805C2260[0](0LL, (int)v1444);
                              goto LABEL_1020;
                            }
                            v775 = v1369;
                          }
                          if ( v659 >= 0 )
                          {
                            v659 = 0;
                            v779 = v1782;
                            v1791 = v769;
                            v780 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int64))off_1805C2178)(v1444, v1785);
                            if ( !(unsigned int)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, unsigned int *, int, _QWORD))off_1805C21D8)(
                                                  v1444,
                                                  v779,
                                                  0xFFFFFFFFLL,
                                                  &v1789,
                                                  1120,
                                                  0LL) )
                              v659 = -2147467259;
                            if ( v780 )
                              off_1805C2178(v1444, v780);
                            v656 = 0LL;
                            if ( v659 < 0 )
                              goto LABEL_1018;
                            v781 = v1791 + 24;
                            if ( (int)(v1791 + 24) < 90 )
                              v781 = 90;
                            v1791 = v781;
                            v1792 = 32;
                            v1789 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21B8)(v1789, v775, 96LL);
                            v1790 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21B8)(v1790, v775, 96LL);
                            v1791 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21B8)(v1791, v775, 96LL);
                            v1792 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805C21B8)(v1792, v775, 96LL);
                            if ( v1778 )
                            {
                              v782 = (unsigned int)v1787;
                              if ( (int)v1787 >= (int)v1788 )
                                v782 = (unsigned int)v1788;
                            }
                            else
                            {
                              v783 = DWORD2(v1787);
                              if ( SDWORD2(v1787) <= SDWORD2(v1788) )
                                v783 = DWORD2(v1788);
                              v782 = v1789 + v783 - v1791;
                            }
                            off_1805C2250(
                              (CToastCenterExperienceManager *)&v1789,
                              (struct CSingleViewShellExperience *)v782);
                            v657 = v1471;
LABEL_1003:
                            v784 = v1778;
                            v785 = HIDWORD(v1798);
                            v786 = DWORD2(v1798);
                            switch ( v657 )
                            {
                              case 1:
                                v656 = 0LL;
                                *(_QWORD *)&v1798 = 0LL;
                                goto LABEL_1010;
                              case 2:
                                v1812 = 0LL;
                                v1810 = 0LL;
                                v1811 = 0LL;
                                v790 = (CToastCenterExperienceManager *)off_1805C2248[0](
                                                                          0LL,
                                                                          (struct CSingleViewShellExperience *)1);
                                LODWORD(v1810) = 40;
                                if ( !(unsigned int)off_1805C2208(v790, (struct CSingleViewShellExperience *)&v1810) )
                                  goto LABEL_1009;
                                off_1805C2240[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1811 + 4));
                                off_1805C2240[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1811 + 12));
                                if ( v784 )
                                  v788 = DWORD1(v1811) + 5 * HIDWORD(v1811) / 100;
                                else
                                  v788 = 95 * (HIDWORD(v1811) - v786) / 100;
                                v789 = 95 * (v1812 - v785);
                                break;
                              case 3:
                                v1809 = 0LL;
                                v1807 = 0LL;
                                v1808 = 0LL;
                                v787 = (CToastCenterExperienceManager *)off_1805C2248[0](
                                                                          0LL,
                                                                          (struct CSingleViewShellExperience *)1);
                                LODWORD(v1807) = 40;
                                if ( !(unsigned int)off_1805C2208(v787, (struct CSingleViewShellExperience *)&v1807) )
                                  goto LABEL_1009;
                                off_1805C2240[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1808 + 4));
                                off_1805C2240[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1808 + 12));
                                v788 = 50 * (HIDWORD(v1808) - v786) / 100;
                                v789 = 50 * (v1809 - v785);
                                break;
                              default:
                                goto LABEL_1009;
                            }
                            LODWORD(v1798) = v788;
                            DWORD1(v1798) = v789 / 100;
LABEL_1009:
                            v656 = 0LL;
LABEL_1010:
                            v659 = 0;
                            goto LABEL_1019;
                          }
                        }
                      }
                      v656 = 0LL;
LABEL_1018:
                      v657 = v1471;
                      goto LABEL_1019;
                    }
                    if ( v1471 != 3 )
                      goto LABEL_949;
                  }
                  LODWORD(v656) = DWORD2(v1738);
                  v766 = HIDWORD(v1738);
                  goto LABEL_949;
                }
                v1436 = 15;
              }
              v1382 = 11;
              goto LABEL_913;
            }
            v656 = (__int64)MemoryAlloc(2LL * v1566);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1675);
            if ( !v656 )
            {
              v1675 = 0LL;
              v659 = -2147024882;
              goto LABEL_830;
            }
            v1675 = v656;
            v662 = MemoryAlloc(4LL * (v1567 + 1));
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1676);
            if ( v662 )
            {
              v1676 = v662;
              if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1805C21A0[0])(
                      8LL,
                      &v1567,
                      v656,
                      &v1566) )
              {
                v661 = GetLastError();
                v656 = 0LL;
                goto LABEL_813;
              }
              v663 = v662;
              if ( v1567 )
              {
                for ( i4 = 0; i4 < v1567; ++i4 )
                {
                  *v663 = off_1805C21B0((WARBIRD_DELAY_LOAD *)v656, 0);
                  v665 = -1LL;
                  do
                    ++v665;
                  while ( *(_WORD *)(v656 + 2 * v665) );
                  ++v663;
                  v656 += 2 * v665 + 2;
                }
              }
              *v663 = 1033;
              v656 = 0LL;
              v660 = v662;
              v1671 = v662;
              v1367 = v1567 + 1;
            }
            else
            {
              v656 = 0LL;
              v659 = -2147024882;
            }
            v1676 = 0LL;
            goto LABEL_830;
          }
          v586 = g_WarbirdSecureFunctionsRefCount;
        }
        g_WarbirdSecureFunctionsRefCount = v586 + 1;
        goto LABEL_806;
      }
      v516 = g_WarbirdSecureFunctionsRefCount;
    }
    g_WarbirdSecureFunctionsRefCount = v516 + 1;
    goto LABEL_759;
  }
LABEL_1307:
  SH_HANDLE::~SH_HANDLE((SH_HANDLE *)&v1664);
  v89 = 0LL;
  if ( v1570 )
  {
    v1737 = 0LL;
    v1007 = 0LL;
    *(_OWORD *)v1740 = 0LL;
    v1691 = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
    v1008 = 0LL;
    v1009 = GetProcessHeap();
    v1010 = HeapAlloc(v1009, 8u, 0xA0uLL);
    v89 = 0LL;
    v1011 = v1010;
    if ( v1010 )
    {
      v1012 = v1691;
      v1503 = v1011;
      *v1011 = *v1691;
      v1011[1] = v1012[1];
      v1011[2] = v1012[2];
      v1011[3] = v1012[3];
      v1011[4] = v1012[4];
      v1011[5] = v1012[5];
      v1011[6] = v1012[6];
      v1011[7] = v1012[7];
      v1011[8] = v1012[8];
      v1011[9] = v1012[9];
      v1692 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
      v1013 = GetProcessHeap();
      v1014 = HeapAlloc(v1013, 8u, 8uLL);
      v89 = 0LL;
      v1015 = v1014;
      if ( v1014 )
      {
        v1008 = v1014;
        v1513 = (char *)v1014;
        *v1014 = *v1692;
        v1693 = __rdtsc();
        v1575 = 0;
        if ( (int)RtlUIntAdd(4LL, 4LL, &v1576) >= 0
          && (int)RtlUIntAdd(0LL, v1576, &v1575) >= 0
          && (int)RtlUIntAdd(v1016, 160LL, &v1577) >= 0 )
        {
          v1017 = RtlUIntAdd(v1575, v1577, &v1575);
          if ( (v1019 | v1017) >= 0 && (int)RtlUIntAdd(v1018, 8LL, &v1578) >= 0 )
          {
            v1020 = RtlUIntAdd(v1575, v1578, &v1575);
            if ( (v1022 | v1020) >= 0 && (int)RtlUIntAdd(v1021, 8LL, v1579) >= 0 )
            {
              v1579[1] = v1579[0];
              v1023 = RtlUIntAdd(v1575, v1579[0], &v1575);
              if ( (v1024 | v1023) >= 0 )
              {
                HIDWORD(v1736) = v1575;
                v1025 = v1575;
                v1026 = GetProcessHeap();
                v1027 = (unsigned int *)HeapAlloc(v1026, 8u, v1025);
                v89 = 0LL;
                v1028 = v1027;
                if ( v1027 )
                {
                  v1737 = v1027;
                  LODWORD(v1736) = 0;
                  v1580 = 4;
                  if ( (int)RtlULongLongAdd(v1027, 4LL, &v1741) >= 0
                    && v1028 + 2 <= (unsigned int *)((char *)v1028 + HIDWORD(v1736)) )
                  {
                    v1030 = v1741;
                    *v1028 = v1029;
                    *v1030 = v1580;
                    v1031 = v1736 + 1;
                    LODWORD(v1736) = v1736 + 1;
                    if ( v1737 == v89 )
                    {
                      if ( (int)RtlUIntAdd(v1029, 160LL, &v1581) < 0 )
                        goto LABEL_1694;
                      v1582 = v1581;
                      if ( (int)RtlUIntAdd(HIDWORD(v1736), v1581, (char *)&v1736 + 4) >= 0 )
                      {
                        v1033 = (_DWORD)v89 + 1;
                        v1034 = (_DWORD)v89 + 1 + v1736;
                        LODWORD(v1736) = v1034;
                        goto LABEL_1333;
                      }
                    }
                    else
                    {
                      v1035 = v1737;
                      v1694 = v1737;
                      if ( v1031 )
                      {
                        while ( (int)RtlUIntAdd(4LL, (unsigned int)*v1035, &v1583) >= 0 )
                        {
                          v1582 = v1583;
                          if ( (int)RtlULongLongAdd(v1035, v1583, &v1694) < 0 )
                            goto LABEL_1325;
                          v1035 = v1694;
                          if ( v1036 + 1 >= v1037 )
                            goto LABEL_1330;
                        }
                        goto LABEL_1694;
                      }
LABEL_1330:
                      v1038 = RtlULongLongAdd(v1035, 4LL, &v1724);
                      if ( v1038 >= 0 && v1035 + 41 <= (_DWORD *)((char *)v1737 + HIDWORD(v1736)) )
                      {
                        v1039 = v1724;
                        v1040 = v1032 + 124;
                        *v1035 = 160;
                        *v1039 = *v1011;
                        v1039[1] = v1011[1];
                        v1039[2] = v1011[2];
                        v1039[3] = v1011[3];
                        v1039[4] = v1011[4];
                        v1039[5] = v1011[5];
                        v1039[6] = v1011[6];
                        *(_OWORD *)((char *)v1039 + v1040 - 16) = v1011[7];
                        *(_OWORD *)((char *)v1039 + v1040) = *(_OWORD *)((char *)v1011 + v1040);
                        v1041 = *(_OWORD *)((char *)v1011 + v1040 + 16);
                        v1033 = v1032 - 3;
                        *(_OWORD *)((char *)v1039 + v1040 + 16) = v1041;
                        v1034 = v1032 - 3 + v1736;
                        LODWORD(v1736) = v1034;
LABEL_1333:
                        if ( v1737 == v89 )
                        {
                          if ( (int)RtlUIntAdd(v1032, 8LL, &v1584) < 0 )
                            goto LABEL_1694;
                          v1585 = v1584;
                          if ( (int)RtlUIntAdd(HIDWORD(v1736), v1584, (char *)&v1736 + 4) < 0 )
                            goto LABEL_1694;
                          v1043 = v1033 + v1736;
                          LODWORD(v1736) = v1033 + v1736;
                        }
                        else
                        {
                          v1044 = (unsigned int *)v1737;
                          v1695 = (unsigned int *)v1737;
                          if ( v1034 )
                          {
                            while ( (int)RtlUIntAdd(4LL, *v1044, &v1586) >= 0 )
                            {
                              v1585 = v1586;
                              if ( (int)RtlULongLongAdd(v1045, v1586, &v1695) < 0 )
                                break;
                              v1044 = v1695;
                              if ( v1033 + v1046 >= v1034 )
                                goto LABEL_1341;
                            }
                            goto LABEL_1694;
                          }
LABEL_1341:
                          v1047 = RtlULongLongAdd(v1044, 4LL, &v1729);
                          if ( v1047 < 0 || v1048 + 3 > (_DWORD *)((char *)v1737 + HIDWORD(v1736)) )
                            goto LABEL_1694;
                          v1049 = v1729;
                          *v1048 = 8;
                          *v1049 = *v1015;
                          v1043 = v1033 + v1736;
                          LODWORD(v1736) = v1033 + v1736;
                          v1042 = 4;
                        }
                        v1696 = v1693;
                        if ( v1737 == v89 )
                        {
                          if ( (int)RtlUIntAdd(v1042, 8LL, &v1587) < 0 )
                            goto LABEL_1694;
                          v1605 = v1587;
                          if ( (int)RtlUIntAdd(HIDWORD(v1736), v1587, (char *)&v1736 + 4) < 0 )
                            goto LABEL_1694;
                        }
                        else
                        {
                          v1051 = (unsigned int *)v1737;
                          v1697 = (unsigned int *)v1737;
                          if ( v1043 )
                          {
                            while ( (int)RtlUIntAdd(4LL, *v1051, &v1589) >= 0 )
                            {
                              v1605 = v1589;
                              if ( (int)RtlULongLongAdd(v1052, v1589, &v1697) < 0 )
                                break;
                              v1051 = v1697;
                              if ( v1033 + v1053 >= v1043 )
                                goto LABEL_1352;
                            }
                            goto LABEL_1694;
                          }
LABEL_1352:
                          if ( (int)RtlULongLongAdd(v1051, 4LL, &v1725) < 0
                            || v1054 + 3 > (_DWORD *)((char *)v1737 + HIDWORD(v1736)) )
                          {
                            goto LABEL_1694;
                          }
                          v1055 = v1725;
                          *v1054 = 8;
                          v1050 = 4;
                          *v1055 = v1696;
                        }
                        LODWORD(v1736) = v1033 + v1736;
                        if ( (int)RtlUIntAdd(v1050, v1050, &v1590) >= 0 )
                        {
                          v1057 = v1590;
                          v1591 = v1590;
                          if ( (int)RtlUIntAdd(v1056, 8LL, v1592) >= 0 )
                          {
                            v1592[1] = v1592[0];
                            if ( (int)RtlUIntAdd(v1057, v1592[0], &v1591) >= 0 )
                            {
                              v1400 = v1591;
                              v1512 = v89;
                              v1058 = v89;
                              v1415 = (unsigned int)v89;
                              v1059 = (int *)v89;
                              v1698 = v89;
                              v1511 = v89;
                              v1429 = (unsigned int)v89;
                              v1510 = v89;
                              v1593 = (unsigned int)v89;
                              v1505 = (__int64)v89;
                              v1615 = (__int64)v89;
                              v1594 = (unsigned int)v89;
                              v1699 = __rdtsc();
                              v1595 = 8;
                              v1060 = RtlUIntAdd(8LL, HIDWORD(v1736), &v1595);
                              if ( v1060 >= 0 )
                              {
                                v1063 = (v1595 + 7) & 0xFFFFFFF8;
                                if ( v1063 >= v1595 )
                                {
                                  v1595 = (v1595 + 7) & 0xFFFFFFF8;
                                  v1064 = v1063;
                                  v1065 = GetProcessHeap();
                                  v1066 = (char *)HeapAlloc(v1065, 8u, v1064);
                                  v89 = 0LL;
                                  v1067 = v1066;
                                  if ( v1066 )
                                  {
                                    v1700 = v1066;
                                    *(_DWORD *)v1066 = v1736;
                                    v1060 = RtlULongLongAdd(v1066, 4LL, &v1700);
                                    if ( v1060 < 0
                                      || (v1069 = v1700,
                                          *(_DWORD *)v1700 = HIDWORD(v1736),
                                          v1060 = RtlULongLongAdd(v1069, v1068, &v1700),
                                          v1060 < 0) )
                                    {
                                      v1061 = (unsigned int)v89;
                                      v1062 = (unsigned int)v89;
                                    }
                                    else
                                    {
                                      *(_QWORD *)&v1067[v1595 - 8] = v1699;
                                      memcpy_0(v1700, v1737, HIDWORD(v1736));
                                      v1061 = v1595;
                                      v89 = 0LL;
                                      v1062 = (unsigned __int64)v1067;
                                      v1512 = v1067;
                                      v1067 = 0LL;
                                      v1415 = v1595;
                                    }
                                    if ( v1067 )
                                    {
                                      v1070 = GetProcessHeap();
                                      HeapFree(v1070, 0, v1067);
                                      v1061 = v1415;
                                      v89 = 0LL;
                                      v1062 = (unsigned __int64)v1512;
                                    }
                                  }
                                  else
                                  {
                                    v1061 = 0;
                                    v1060 = -1073741801;
                                    v1062 = 0LL;
                                  }
                                }
                                else
                                {
                                  v1060 = -1073741675;
                                }
                              }
                              v1071 = v1060 | 0x10000000;
                              if ( v1071 < 0 )
                                goto LABEL_1489;
                              v1701 = v89;
                              v1072 = v89;
                              v1495 = v89;
                              if ( v1062 )
                              {
                                v1074 = v1061;
                                Srcd = v1061;
                                if ( v1061
                                  && (v1075 = (char *)MemoryAlloc(v1061 + 8LL),
                                      v89 = 0LL,
                                      v1482 = v1075,
                                      (v1076 = v1075) != 0LL) )
                                {
                                  v1077 = (unsigned __int8 *)v1512;
                                  v1078 = 0;
                                  v1366 = 0;
                                  v1079 = 0LL;
                                  if ( v1074 )
                                  {
                                    do
                                      v1078 ^= *((_BYTE *)v1512 + v1079++);
                                    while ( v1079 < v1074 );
                                    v1366 = v1078;
                                  }
                                  v1794 = 0xC81ECB17B1B54A58uLL;
                                  v1080 = v1076;
                                  v1416 = 0;
                                  v1450 = 0;
                                  v1081 = -1;
                                  v1082 = 0;
                                  v1083 = v1074 & 7;
                                  if ( (v1074 & 7) != 0 )
                                  {
                                    v1416 = 0;
                                    v1084 = 56;
                                    v1085 = 0;
                                    do
                                    {
                                      v1086 = *v1077++;
                                      if ( v1082 >= 4 )
                                      {
                                        v1087 = (v1086 << v1084) | v1416;
                                        v1416 = v1087;
                                      }
                                      else
                                      {
                                        v1087 = v1416;
                                        v1085 |= v1086 << (v1084 - 32);
                                      }
                                      ++v1082;
                                      v1084 -= 8;
                                    }
                                    while ( v1082 < (int)v1083 );
                                    v1450 = v1085;
                                    v1432 = (unsigned int)v1058 & v1431;
                                    v1082 = v1085 ^ 0xB17A307A;
                                    v1088 = v1087 ^ 0x42F6B18D;
                                    v1089 = v1085 ^ 0xB17A307A;
                                    v1090 = v1088;
                                    if ( (v1074 & 7) != 0 )
                                    {
                                      v1091 = v1432;
                                      do
                                      {
                                        v1504 = v1080 + 1;
                                        if ( v1091 >= 4 )
                                        {
                                          v1090 = __ROL4__(v1090, 8);
                                          v1092 = v1090;
                                        }
                                        else
                                        {
                                          v1089 = __ROL4__(v1089, 8);
                                          v1092 = v1089;
                                        }
                                        *v1080 = v1092;
                                        ++v1091;
                                        v1080 = v1504;
                                      }
                                      while ( v1091 < (int)v1083 );
                                      v87 = v1465;
                                    }
                                    if ( v1083 <= 4 )
                                    {
                                      v1081 = 0;
                                      if ( v1083 < 4 )
                                        v1082 = (unsigned int)v1082 >> (8 * (4 - v1083)) << (8 * (4 - v1083));
                                    }
                                    else
                                    {
                                      v1081 = v1088 >> (8 * (8 - v1083)) << (8 * (8 - v1083));
                                    }
                                  }
                                  v1093 = v1074 >> 3;
                                  if ( v1074 >> 3 )
                                  {
                                    v1094 = v1080 + 7;
                                    v1095 = v1416;
                                    v1096 = v1093;
                                    v1097 = v1450;
                                    v1098 = WORD2(v1794);
                                    v1433 = HIWORD(v1794);
                                    v1477 = WORD1(v1794);
                                    LODWORD(v1509) = HIDWORD(v1794) ^ 0xB1B54A58;
                                    v1099 = v1077 + 2;
                                    do
                                    {
                                      v1100 = *(v1099 - 1) | (*(v1099 - 2) << 8);
                                      v1101 = v1099[2] << 8;
                                      v1102 = *v1099;
                                      v1099 += 8;
                                      v1103 = *(v1099 - 7) | ((v1102 | (v1100 << 8)) << 8);
                                      v1104 = *(v1099 - 3) | ((*(v1099 - 4) | ((*(v1099 - 5) | v1101) << 8)) << 8);
                                      v1105 = v1104 ^ v1081;
                                      v1106 = HIDWORD(v1794) ^ v1103 ^ (v1105 - 19032) ^ v1082;
                                      v1107 = (__ROR4__(v1106, 7) + WORD1(v1794) * __ROR4__(HIDWORD(v1794) ^ v1106, 15)) ^ v1105;
                                      v1108 = (v1098 * __ROR4__(v1107 - 1313519016, 9) - __ROR4__(v1107, 10)) ^ v1106;
                                      v1109 = (__ROL4__(v1108, 5) + HIWORD(v1794) * __ROL4__(v1098 ^ v1108, 4)) ^ v1107;
                                      v1110 = (HIDWORD(v1794) - (v1109 ^ 0xB1B54A58)) ^ v1108;
                                      v1111 = (WORD1(v1794) * (v1110 - 19032) - (v1110 >> 6)) ^ v1109;
                                      v1112 = (19032 * (v1098 ^ __ROR4__(v1111, 15))) ^ v1110;
                                      v1113 = (v1098 * (HIWORD(v1794) + __ROR4__(~v1112, 3))) ^ v1111;
                                      v1114 = (v1113 - 19032 - HIDWORD(v1794)) ^ v1112;
                                      v1115 = (v1477 * (v1433 ^ v1114)) ^ __ROR4__(v1114, 10) ^ v1113;
                                      v1116 = __ROR4__(v1115, 3) ^ (v1098 * __ROL4__(v1115 ^ 0x4A58, 6)) ^ v1114;
                                      v1117 = (19032 * (__ROR4__(v1116, 15) - HIWORD(v1794))) ^ v1115;
                                      v1118 = (v1117 >> 15) ^ (19032 * __ROL4__(v1117 - v1098, 3)) ^ (v1117 >> 1) ^ (19032 * (HIWORD(v1794) ^ v1117)) ^ v1116;
                                      v1119 = (WORD1(v1794) * (v1118 - v1098) - (v1118 >> 13)) ^ v1117;
                                      v1120 = __ROR4__(v1119, 11) ^ (v1098 * __ROR4__(-1313519016 - v1119, 9)) ^ v1118;
                                      v1121 = (v1120 + 1313519016 - HIWORD(v1794)) ^ v1119;
                                      v1122 = (19032 * (v1477 ^ v1121) - __ROR4__(v1121, 7)) ^ v1120;
                                      v1123 = (WORD1(v1794) * __ROL4__(HIWORD(v1794) ^ v1122, 4) - __ROR4__(v1122, 16)) ^ v1121;
                                      v1124 = (__ROR4__(v1123, 4) + v1098 * __ROR4__(-1313519016 - v1123, 10)) ^ v1122;
                                      v1125 = __ROR4__(v1124, 9) ^ (HIWORD(v1794) * __ROR4__(v1124 + 1313519016, 4)) ^ v1123;
                                      v1126 = (19032 * __ROL4__(HIDWORD(v1794) ^ v1125, 8) - __ROL4__(v1125, 2)) ^ v1124;
                                      v1127 = (WORD1(v1794) * __ROR4__(HIDWORD(v1794) - v1126, 11) - __ROR4__(v1126, 12)) ^ v1125;
                                      v1128 = (v1127 >> 8) ^ (v1098 * (WORD1(v1794) ^ v1127)) ^ v1126;
                                      v1129 = v1128 ^ v1127;
                                      v1130 = v1097 ^ v1128;
                                      v1131 = (unsigned int)v1509 ^ v1129;
                                      v1097 = v1103;
                                      *(v1094 - 4) = v1130;
                                      v1132 = v1095 ^ v1131;
                                      *v1094 = v1132;
                                      v1095 = v1104;
                                      v1133 = __ROR4__(v1130, 8);
                                      *(v1094 - 5) = v1133;
                                      v1094 += 8;
                                      v1134 = __ROR4__(v1132, 8);
                                      *(v1094 - 9) = v1134;
                                      v1135 = __ROR4__(v1133, 8);
                                      *(v1094 - 14) = v1135;
                                      v1136 = __ROR4__(v1134, 8);
                                      *(v1094 - 10) = v1136;
                                      v1137 = __ROR4__(v1135, 8);
                                      v1138 = __ROR4__(v1136, 8);
                                      *(v1094 - 15) = v1137;
                                      *(v1094 - 11) = v1138;
                                      v1081 = __ROR4__(v1138, 8);
                                      v1082 = __ROR4__(v1137, 8);
                                      --v1096;
                                    }
                                    while ( v1096 );
                                    v1078 = v1366;
                                    v87 = v1465;
                                    v1058 = (_QWORD *)v1505;
                                    v1072 = v1495;
                                    v1074 = Srcd;
                                  }
                                  v1139 = v1074 + 8;
                                  *(_QWORD *)&v1482[v1074] = v1078;
                                  v1701 = v1482;
                                  v1702 = v1074 + 8;
                                  v1703 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                                  v1704 = 8LL;
                                  v1706 = 160LL;
                                  v1705 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
                                  v1140 = GetProcessHeap();
                                  v1141 = HeapAlloc(v1140, 8u, 0x30uLL);
                                  v89 = 0LL;
                                  v1142 = v1141;
                                  if ( v1141 )
                                  {
                                    *v1141 = v1139;
                                    v1143 = GetProcessHeap();
                                    v1144 = HeapAlloc(v1143, 8u, v1139);
                                    v89 = 0LL;
                                    if ( !v1144 )
                                      goto LABEL_1401;
                                    *((_QWORD *)v1142 + 1) = v1144;
                                    memcpy_0(v1144, v1482, v1139);
                                    v1142[4] = 160;
                                    v1145 = GetProcessHeap();
                                    v1146 = HeapAlloc(v1145, 8u, 0xA0uLL);
                                    v89 = 0LL;
                                    if ( !v1146 )
                                      goto LABEL_1401;
                                    *((_QWORD *)v1142 + 3) = v1146;
                                    *v1146 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                                    v1146[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                                    v1146[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                                    v1146[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                                    v1146[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                                    v1146[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                                    v1146[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                                    v1146[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                                    v1146[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                                    v1146[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                                    v1142[8] = 8;
                                    v1147 = GetProcessHeap();
                                    v1148 = HeapAlloc(v1147, 8u, 8uLL);
                                    v89 = 0LL;
                                    if ( v1148 )
                                    {
                                      *((_QWORD *)v1142 + 5) = v1148;
                                      v1072 = v1142;
                                      *v1148 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                                      v1073 = 0;
                                      v1142 = 0LL;
                                    }
                                    else
                                    {
LABEL_1401:
                                      v1073 = -1073741801;
                                    }
                                    if ( v1142 )
                                    {
                                      v1149 = (void *)*((_QWORD *)v1142 + 1);
                                      if ( v1149 )
                                      {
                                        v1150 = GetProcessHeap();
                                        HeapFree(v1150, 0, v1149);
                                        *((_QWORD *)v1142 + 1) = 0LL;
                                      }
                                      v1151 = (void *)*((_QWORD *)v1142 + 3);
                                      if ( v1151 )
                                      {
                                        v1152 = GetProcessHeap();
                                        HeapFree(v1152, 0, v1151);
                                        *((_QWORD *)v1142 + 3) = 0LL;
                                      }
                                      v1153 = (void *)*((_QWORD *)v1142 + 5);
                                      if ( v1153 )
                                      {
                                        v1154 = GetProcessHeap();
                                        HeapFree(v1154, 0, v1153);
                                        *((_QWORD *)v1142 + 5) = 0LL;
                                      }
                                      v1155 = GetProcessHeap();
                                      HeapFree(v1155, 0, v1142);
                                      v89 = 0LL;
                                    }
                                  }
                                  else
                                  {
                                    v1073 = -1073741801;
                                  }
                                  if ( v1073 >= 0 )
                                  {
                                    v1698 = v1072;
                                    v1072 = 0LL;
                                  }
                                }
                                else
                                {
                                  v1073 = -1073741823;
                                }
                                v1156 = v1701;
                                if ( v1701 )
                                {
                                  v1157 = GetProcessHeap();
                                  HeapFree(v1157, 0, v1156);
                                  v89 = 0LL;
                                  v1701 = 0LL;
                                }
                                if ( v1072 )
                                {
                                  v1158 = (void *)v1072[1];
                                  if ( v1158 )
                                  {
                                    v1159 = GetProcessHeap();
                                    HeapFree(v1159, 0, v1158);
                                    v1072[1] = 0LL;
                                  }
                                  v1160 = (void *)v1072[3];
                                  if ( v1160 )
                                  {
                                    v1161 = GetProcessHeap();
                                    HeapFree(v1161, 0, v1160);
                                    v1072[3] = 0LL;
                                  }
                                  v1162 = (void *)v1072[5];
                                  if ( v1162 )
                                  {
                                    v1163 = GetProcessHeap();
                                    HeapFree(v1163, 0, v1162);
                                    v1072[5] = 0LL;
                                  }
                                  v1164 = GetProcessHeap();
                                  HeapFree(v1164, 0, v1072);
                                  v89 = 0LL;
                                }
                              }
                              else
                              {
                                v1073 = -1073741811;
                              }
                              v1071 = v1073 | 0x10000000;
                              if ( v1071 < 0 )
                                goto LABEL_1488;
                              v1165 = (const void **)v1698;
                              v1596 = 4;
                              v1167 = RtlUIntAdd(4LL, *(unsigned int *)v1698, &v1596);
                              if ( v1167 < 0
                                || (v1167 = RtlUIntAdd(v1596, v1166, &v1596), v1167 < 0)
                                || (v1167 = RtlUIntAdd(v1596, *((unsigned int *)v1165 + 4), &v1596), v1167 < 0)
                                || (v1167 = RtlUIntAdd(v1596, 4LL, &v1596), v1167 < 0) )
                              {
                                v1168 = v1597;
                              }
                              else
                              {
                                v1167 = RtlUIntAdd(v1596, *((unsigned int *)v1165 + 8), &v1596);
                                v1168 = v1597;
                                if ( v1167 >= 0 )
                                  v1168 = v1596;
                                v1597 = v1168;
                              }
                              if ( v1167 >= 0 )
                              {
                                v1169 = v1168;
                                v1170 = GetProcessHeap();
                                v1171 = HeapAlloc(v1170, 8u, v1169);
                                v89 = 0LL;
                                v1172 = v1171;
                                if ( v1171 )
                                {
                                  *v1171 = *(_DWORD *)v1165;
                                  v1707 = v1171;
                                  v1167 = RtlULongLongAdd(v1171, 4LL, &v1707);
                                  if ( v1167 >= 0 )
                                  {
                                    memcpy_0(v1707, v1165[1], *(unsigned int *)v1165);
                                    v1173 = RtlULongLongAdd(v1707, *(unsigned int *)v1165, &v1707);
                                    v89 = 0LL;
                                    v1167 = v1173;
                                    if ( v1173 >= 0 )
                                    {
                                      v1174 = v1707;
                                      *(_DWORD *)v1707 = *((_DWORD *)v1165 + 4);
                                      v1167 = RtlULongLongAdd(v1174, 4LL, &v1707);
                                      if ( v1167 >= 0 )
                                      {
                                        memcpy_0(v1707, v1165[3], *((unsigned int *)v1165 + 4));
                                        v1175 = RtlULongLongAdd(v1707, *((unsigned int *)v1165 + 4), &v1707);
                                        v89 = 0LL;
                                        v1167 = v1175;
                                        if ( v1175 >= 0 )
                                        {
                                          v1176 = v1707;
                                          *(_DWORD *)v1707 = *((_DWORD *)v1165 + 8);
                                          v1167 = RtlULongLongAdd(v1176, 4LL, &v1707);
                                          if ( v1167 >= 0 )
                                          {
                                            memcpy_0(v1707, v1165[5], *((unsigned int *)v1165 + 8));
                                            v1177 = RtlULongLongAdd(v1707, *((unsigned int *)v1165 + 8), &v1707);
                                            v89 = 0LL;
                                            v1167 = v1177;
                                            if ( v1177 >= 0 )
                                            {
                                              v1511 = v1172;
                                              v1172 = 0LL;
                                              v1429 = v1597;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  if ( v1172 )
                                  {
                                    v1178 = GetProcessHeap();
                                    HeapFree(v1178, 0, v1172);
                                    v89 = 0LL;
                                  }
                                }
                                else
                                {
                                  v1167 = -1073741801;
                                }
                              }
                              v1071 = v1167 | 0x10000000;
                              if ( v1071 < 0 )
                                goto LABEL_1488;
                              v1708 = (unsigned int *)v89;
                              v1598 = (unsigned int)v89;
                              v1709 = (unsigned int *)v89;
                              v1599 = (unsigned int)v89;
                              v1600 = 8;
                              v1179 = RtlUIntAdd(8LL, v1400, &v1600);
                              v1071 = v1179 | 0x10000000;
                              if ( v1179 < 0 )
                                goto LABEL_1528;
                              v1181 = (v1600 + 7) & 0xFFFFFFF8;
                              if ( v1181 >= v1600 )
                              {
                                v1602 = (v1600 + 7) & 0xFFFFFFF8;
                                v1182 = RtlUIntAdd(v1181, v1180, &v1602);
                                v1183 = v1601;
                                v1071 = v1182;
                                if ( v1182 >= 0 )
                                  v1183 = v1602;
                                v1601 = v1183;
                              }
                              else
                              {
                                v1071 = -1073741675;
                              }
                              if ( v1071 < 0 )
                                goto LABEL_1528;
                              if ( !v1737 || (unsigned int)v1736 <= 1 )
                                goto LABEL_1456;
                              v1184 = (unsigned int *)v1737;
                              v1185 = 0;
                              v1710 = (unsigned int *)v1737;
                              while ( 1 )
                              {
                                v1186 = *v1184;
                                v1071 = RtlULongLongAdd(v1184, 4LL, &v1710);
                                if ( v1071 < 0 )
                                  break;
                                v1071 = RtlULongLongAdd(v1710, v1186, &v1710);
                                if ( v1071 < 0 )
                                  break;
                                v1184 = v1710;
                                if ( ++v1185 )
                                {
                                  v1187 = *v1710;
                                  v1071 = RtlULongLongAdd(v1710, 4LL, &v1710);
                                  if ( v1071 >= 0 )
                                  {
                                    v1188 = v1710;
                                    v1598 = v1187;
                                    if ( !v1187 )
                                      v1188 = 0LL;
                                    v1710 = v1188;
                                    v1708 = v1188;
                                  }
                                  break;
                                }
                              }
                              if ( v1071 < 0 )
                                goto LABEL_1528;
                              if ( (unsigned int)v1736 > 2 )
                              {
                                v1189 = (unsigned int *)v1737;
                                v1190 = 0;
                                v1711 = (unsigned int *)v1737;
                                while ( 1 )
                                {
                                  v1191 = *v1189;
                                  v1071 = RtlULongLongAdd(v1189, 4LL, &v1711);
                                  if ( v1071 < 0 )
                                    break;
                                  v1071 = RtlULongLongAdd(v1711, v1191, &v1711);
                                  if ( v1071 < 0 )
                                    break;
                                  v1189 = v1711;
                                  if ( (unsigned int)++v1190 >= 2 )
                                  {
                                    v1193 = *v1711;
                                    v1071 = RtlULongLongAdd(v1711, 4LL, &v1711);
                                    if ( v1071 >= 0 )
                                    {
                                      v1194 = v1711;
                                      v1599 = v1193;
                                      if ( !v1193 )
                                        v1194 = 0LL;
                                      v1711 = v1194;
                                      v1709 = v1194;
                                    }
                                    break;
                                  }
                                }
                                if ( v1071 >= 0 )
                                {
                                  v1603 = 4;
                                  v1071 = RtlUIntAdd(4LL, v1192, &v1603);
                                  if ( v1071 < 0
                                    || (v1071 = RtlUIntAdd(v1603, v1195, &v1603), v1071 < 0)
                                    || (v1071 = RtlUIntAdd(v1603, v1196, &v1603), v1071 < 0)
                                    || (v1071 = RtlUIntAdd(v1603, v1197, &v1603), v1071 < 0) )
                                  {
                                    v1199 = v1604;
                                    v89 = 0LL;
                                  }
                                  else
                                  {
                                    v1071 = RtlUIntAdd(v1603, v1198, &v1603);
                                    v89 = 0LL;
                                    v1199 = v1604;
                                    if ( v1071 >= 0 )
                                      v1199 = v1603;
                                    v1604 = v1199;
                                  }
                                  if ( v1071 < 0 )
                                    goto LABEL_1488;
                                  if ( v1199 > 0x400000 )
                                  {
                                    v1071 = -2147418113;
LABEL_1488:
                                    v1059 = (int *)v1615;
LABEL_1489:
                                    v1200 = v1512;
                                    if ( v1512 )
                                    {
                                      v1201 = GetProcessHeap();
                                      HeapFree(v1201, 0, v1200);
                                      v89 = 0LL;
                                    }
                                    v1202 = v1698;
                                    if ( v1698 )
                                    {
                                      v1203 = (void *)*((_QWORD *)v1698 + 1);
                                      if ( v1203 )
                                      {
                                        v1204 = GetProcessHeap();
                                        HeapFree(v1204, 0, v1203);
                                        v1202[1] = 0LL;
                                      }
                                      v1205 = (void *)v1202[3];
                                      if ( v1205 )
                                      {
                                        v1206 = GetProcessHeap();
                                        HeapFree(v1206, 0, v1205);
                                        v1202[3] = 0LL;
                                      }
                                      v1207 = (void *)v1202[5];
                                      if ( v1207 )
                                      {
                                        v1208 = GetProcessHeap();
                                        HeapFree(v1208, 0, v1207);
                                        v1202[5] = 0LL;
                                      }
                                      v1209 = GetProcessHeap();
                                      HeapFree(v1209, 0, v1202);
                                      v89 = 0LL;
                                      v1698 = 0LL;
                                    }
                                    v1210 = v1511;
                                    if ( v1511 )
                                    {
                                      v1211 = GetProcessHeap();
                                      HeapFree(v1211, 0, v1210);
                                      v89 = 0LL;
                                    }
                                    v1212 = v1510;
                                    if ( v1510 )
                                    {
                                      v1213 = GetProcessHeap();
                                      HeapFree(v1213, 0, v1212);
                                      v89 = 0LL;
                                    }
                                    if ( v1058 )
                                    {
                                      v1214 = (void *)v1058[1];
                                      if ( v1214 )
                                      {
                                        v1215 = GetProcessHeap();
                                        HeapFree(v1215, 0, v1214);
                                        v1058[1] = 0LL;
                                      }
                                      v1216 = (void *)v1058[3];
                                      if ( v1216 )
                                      {
                                        v1217 = GetProcessHeap();
                                        HeapFree(v1217, 0, v1216);
                                        v1058[3] = 0LL;
                                      }
                                      v1218 = (void *)v1058[5];
                                      if ( v1218 )
                                      {
                                        v1219 = GetProcessHeap();
                                        HeapFree(v1219, 0, v1218);
                                        v1058[5] = 0LL;
                                      }
                                      v1220 = GetProcessHeap();
                                      HeapFree(v1220, 0, v1058);
                                      v89 = 0LL;
                                    }
                                    if ( v1059 )
                                    {
                                      v1221 = GetProcessHeap();
                                      HeapFree(v1221, 0, v1059);
                                      v89 = 0LL;
                                    }
                                    if ( v1071 >= 0 )
                                    {
                                      if ( LODWORD(v1740[0]) )
                                      {
                                        v1222 = (unsigned int *)v1740[1];
                                        if ( v1740[1] )
                                        {
                                          v1719[0] = v1740[1];
                                          if ( (int)RtlULongLongAdd(v1740[1], 4LL, v1719) >= 0 )
                                          {
                                            v1225 = (int *)v1719[0];
                                            v1607[1] = v1224;
                                            if ( !v1224 )
                                              v1225 = (int *)v89;
                                            v1719[0] = v1225;
                                            v1719[1] = v1225;
                                            if ( v1224 == 4 )
                                            {
                                              v1608 = *v1225;
                                              if ( v1608 >= 0 && v1223 > 1 )
                                              {
                                                for ( v1720[0] = v1222;
                                                      (int)RtlULongLongAdd(v1222, 4LL, v1720) >= 0
                                                   && (int)RtlULongLongAdd(v1720[0], *v1222, v1720) >= 0;
                                                      v1222 = (unsigned int *)v1720[0] )
                                                {
                                                  if ( v1226 != -1 )
                                                  {
                                                    v1356 = *(_DWORD *)v1720[0];
                                                    if ( (int)RtlULongLongAdd(v1720[0], 4LL, v1720) >= 0 )
                                                    {
                                                      v1357 = (_QWORD *)v1720[0];
                                                      v1609 = v1356;
                                                      if ( !v1356 )
                                                        v1357 = v89;
                                                      v1720[0] = v1357;
                                                      v1720[1] = v1357;
                                                      if ( v1356 == 8 )
                                                        v1720[2] = *v1357;
                                                    }
                                                    break;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    v1008 = v1513;
                                    goto LABEL_1694;
                                  }
                                  v1593 = v1199;
LABEL_1529:
                                  if ( v1071 < 0 )
                                    goto LABEL_1488;
                                  v1227 = v1593;
                                  v1228 = GetProcessHeap();
                                  v1229 = (int *)HeapAlloc(v1228, 8u, v1227);
                                  v89 = 0LL;
                                  if ( v1229 )
                                  {
                                    v1230 = v1229;
                                    v1510 = v1229;
                                    v1071 = 0x10000000;
                                  }
                                  else
                                  {
                                    v1071 = -805306345;
                                    v1230 = 0LL;
                                  }
                                  if ( v1071 >= 0 )
                                  {
                                    if ( v1511 && v1230 )
                                    {
                                      v1746[0] = v1511;
                                      v1747 = v1429;
                                      v1748 = v1593;
                                      v1746[1] = v1230;
                                      v1749 = 0;
                                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                        && (v1233 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                                      {
                                        v1234 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1233)(134LL, v1746);
                                        v1232 = v1593;
                                        v1071 = v1234 | 0x10000000;
                                        if ( v1234 >= 0 )
                                          v1232 = v1748;
                                        v1593 = v1232;
                                      }
                                      else
                                      {
                                        v1231 = GetLastError();
                                        v1071 = v1231;
                                        if ( v1231 > 0 )
                                          v1071 = (unsigned __int16)v1231 | 0x80070000;
                                        if ( v1071 >= 0 )
                                          v1071 = -2147467259;
                                        v1232 = v1593;
                                      }
                                      v89 = 0LL;
                                      if ( v1071 == -805306333 )
                                      {
                                        v1071 = -2147024774;
LABEL_1550:
                                        v1059 = 0LL;
                                        goto LABEL_1489;
                                      }
                                      if ( v1071 < 0 )
                                        goto LABEL_1550;
                                      v1496 = 0LL;
                                      v1621 = 0;
                                      v1713 = v1230;
                                      if ( v1232 < 4 )
                                        goto LABEL_1553;
                                      v1401 = *v1230;
                                      v1235 = RtlULongLongAdd(v1230, 4LL, &v1713);
                                      if ( v1235 < 0 || (v1235 = RtlUIntAdd(0LL, 4LL, &v1621), v1235 < 0) )
                                      {
LABEL_1606:
                                        v1071 = v1235 | 0x10000000;
                                        if ( v1071 < 0 )
                                          goto LABEL_1488;
                                        v1497 = (unsigned int)v89;
                                        v1273 = (int *)v89;
                                        v1714 = (int *)v89;
                                        v1274 = (unsigned int)v89;
                                        if ( !v1058
                                          || (Srcf = (unsigned __int8 *)v1058[1]) == 0LL
                                          || *(_DWORD *)v1058 == (_DWORD)v89 )
                                        {
                                          v1071 = -805306355;
                                          goto LABEL_1488;
                                        }
                                        v1402 = (int)v89;
                                        if ( *(_DWORD *)v1058 )
                                        {
                                          v1275 = *(unsigned int *)v1058 - 8LL;
                                          v1484 = v1275;
                                          v1276 = MemoryAlloc(v1275);
                                          v89 = 0LL;
                                          v1504 = v1276;
                                          v1277 = v1276;
                                          if ( v1276 )
                                          {
                                            v1278 = Srcf;
                                            v1796 = 0x7F1137FAB69605ELL;
                                            v1279 = 0;
                                            v1280 = v1277;
                                            v1417 = 0;
                                            v1281 = v1275 & 7;
                                            if ( (v1275 & 7) != 0 )
                                            {
                                              v1508 = 0;
                                              v1282 = 0;
                                              v1283 = 56;
                                              do
                                              {
                                                v1284 = *v1278++;
                                                if ( v1282 >= 4 )
                                                {
                                                  v1285 = (v1284 << v1283) | v1508;
                                                  v1508 = v1285;
                                                }
                                                else
                                                {
                                                  v1285 = v1508;
                                                  LODWORD(v89) = (v1284 << (v1283 - 32)) | (unsigned int)v89;
                                                }
                                                ++v1282;
                                                v1283 -= 8;
                                              }
                                              while ( v1282 < (int)v1281 );
                                              v87 = v1465;
                                              v1417 = (int)v89;
                                              v1286 = (unsigned int)v89 ^ 0x92F65A5;
                                              v1287 = v1285 ^ 0x699A899C;
                                              v1288 = v1286;
                                              v1289 = v1287;
                                              if ( (v1275 & 7) != 0 )
                                              {
                                                v1290 = 0;
                                                do
                                                {
                                                  if ( v1290 >= 4 )
                                                  {
                                                    v1289 = __ROL4__(v1289, 8);
                                                    v1291 = v1289;
                                                  }
                                                  else
                                                  {
                                                    v1288 = __ROL4__(v1288, 8);
                                                    v1291 = v1288;
                                                  }
                                                  *v1280 = v1291;
                                                  ++v1290;
                                                  ++v1280;
                                                }
                                                while ( v1290 < (int)v1281 );
                                                v87 = v1465;
                                                v1274 = v1497;
                                              }
                                              if ( v1281 <= 4 )
                                              {
                                                LODWORD(v89) = 0;
                                                if ( v1281 < 4 )
                                                  v1286 = v1286 >> (8 * (4 - v1281)) << (8 * (4 - v1281));
                                              }
                                              else
                                              {
                                                LODWORD(v89) = v1287 >> (8 * (8 - v1281)) << (8 * (8 - v1281));
                                              }
                                            }
                                            else
                                            {
                                              v1286 = 0;
                                            }
                                            v1478 = (char *)(v1275 >> 3);
                                            if ( v1275 >> 3 )
                                            {
                                              v1292 = v1280 + 7;
                                              v1293 = v1278 + 2;
                                              v1294 = v1417;
                                              v1451 = WORD1(v1796);
                                              v1295 = HIDWORD(v1796) ^ 0xAB69605E;
                                              v1296 = HIDWORD(v1796);
                                              v1297 = WORD2(v1796);
                                              v1298 = v1478;
                                              v1430 = WORD2(v1796);
                                              do
                                              {
                                                v1299 = *(v1293 - 1) | (*(v1293 - 2) << 8);
                                                v1300 = v1293[2] << 8;
                                                v1301 = *v1293;
                                                v1293 += 8;
                                                v1302 = *(v1293 - 7) | ((v1301 | (v1299 << 8)) << 8);
                                                v1303 = v1302 ^ v1286;
                                                v1304 = *(v1293 - 3) | ((*(v1293 - 4) | ((*(v1293 - 5) | v1300) << 8)) << 8);
                                                v1305 = v1295 ^ v1303 ^ v1304 ^ (unsigned int)v89;
                                                v1306 = (__ROL4__(v1305, 10) + v1297 * __ROL4__(v1305 + 1419157410, 5)) ^ v1303;
                                                v1307 = (WORD1(v1796) * __ROR4__(v1296 + v1306, 9) - __ROL4__(v1306, 2)) ^ v1305;
                                                v1308 = (24670 * (v1307 - v1430) - (v1307 >> 13)) ^ v1306;
                                                v1309 = (HIWORD(v1796) * __ROL4__(v1308 ^ WORD1(v1796), 6)
                                                       - __ROL4__(v1308, 2)) ^ v1307;
                                                v1310 = (v1296 - (v1309 ^ 0xAB69605E)) ^ v1308;
                                                v1311 = (v1451 * (v1310 ^ v1430)) ^ __ROR4__(v1310, 6) ^ v1309;
                                                v1312 = (__ROL4__(v1311, 2) + 24670 * __ROR4__(v1296 + v1311, 15)) ^ v1310;
                                                v1313 = (HIWORD(v1796) * __ROR4__(v1312 + 1419157410, 14)
                                                       - __ROL4__(v1312, 8)) ^ v1311;
                                                v1314 = __ROR4__(v1313, 10) ^ (v1430 * __ROR4__(v1313 ^ 0xAB69605E, 12)) ^ v1312;
                                                v1315 = (v1314 >> 10) ^ (WORD1(v1796) * (v1314 ^ HIWORD(v1796))) ^ v1313;
                                                v1316 = (HIWORD(v1796) * (__ROR4__(~v1315, 5) + 24670)) ^ v1314;
                                                v1317 = v1315 ^ (v1316 - HIWORD(v1796)) ^ 0xAB69605E;
                                                v1318 = ((v1317 >> 2) + v1430 * __ROL4__(HIWORD(v1796) ^ v1317, 2)) ^ v1316;
                                                v1319 = (__ROL4__(v1318, 7) + WORD1(v1796) * __ROR4__(v1318 - v1296, 6)) ^ v1317;
                                                v1320 = (24670 * (v1430 ^ v1319) + __ROR4__(v1319, 9)) ^ v1318;
                                                v1321 = (__ROL4__(v1320, 7)
                                                       + HIWORD(v1796) * __ROL4__(WORD1(v1796) ^ v1320, 5)) ^ v1319;
                                                v1322 = v1296 ^ v1321 ^ v1320 ^ 0xAB69605E;
                                                v1323 = (v1430 * (__ROR4__(v1322, 3) - WORD1(v1796))) ^ v1321;
                                                v1324 = (24670 * __ROR4__(v1323 - v1296, 1) - __ROR4__(v1323, 6)) ^ v1322;
                                                v1325 = (__ROL4__(v1324, 14)
                                                       + HIWORD(v1796) * __ROL4__(v1324 - 1419157410, 3)) ^ v1323;
                                                v1326 = (v1430 * __ROL4__(v1325 - 1419157410, 15) - __ROR4__(v1325, 14)) ^ v1324;
                                                v1327 = (v1326 >> 3) ^ (WORD1(v1796) * (v1326 ^ 0x605E)) ^ v1325;
                                                v1328 = v1508 ^ v1327;
                                                v1508 = v1304;
                                                v1329 = v1294 ^ __ROL4__(v1327, 2) ^ (24670 * __ROL4__(v1296 ^ v1327, 4));
                                                v1294 = v1302;
                                                v1330 = v1329 ^ v1326;
                                                v1297 = v1430;
                                                *(v1292 - 4) = v1330;
                                                *v1292 = v1328;
                                                v1292 += 8;
                                                v1331 = __ROR4__(v1330, 8);
                                                *(v1292 - 13) = v1331;
                                                v1332 = __ROR4__(v1328, 8);
                                                *(v1292 - 9) = v1332;
                                                v1333 = __ROR4__(v1331, 8);
                                                *(v1292 - 14) = v1333;
                                                v1334 = __ROR4__(v1332, 8);
                                                *(v1292 - 10) = v1334;
                                                v1335 = __ROR4__(v1333, 8);
                                                v1336 = __ROR4__(v1334, 8);
                                                *(v1292 - 15) = v1335;
                                                *(v1292 - 11) = v1336;
                                                LODWORD(v89) = __ROR4__(v1336, 8);
                                                v1286 = __ROR4__(v1335, 8);
                                                --v1298;
                                              }
                                              while ( v1298 );
                                              v1279 = 0;
                                              v87 = v1465;
                                              v1058 = (_QWORD *)v1505;
                                              v1274 = v1497;
                                              v1275 = v1484;
                                              v1277 = v1504;
                                            }
                                            v89 = 0LL;
                                            for ( i5 = 0LL; i5 < v1275; ++i5 )
                                              v1279 ^= v1277[i5];
                                            if ( v1279 == *(_QWORD *)&Srcf[v1275] )
                                            {
                                              v1338 = v1402;
                                              v1273 = (int *)v1277;
                                              v1714 = (int *)v1277;
                                              v1277 = 0LL;
                                              v1274 = v1275;
                                            }
                                            else
                                            {
                                              v1273 = v1714;
                                              v1338 = -1073425151;
                                            }
                                            if ( v1277 )
                                            {
                                              MemoryFree(v1277);
                                              v1273 = v1714;
                                              v89 = 0LL;
                                            }
                                            if ( v1338 >= 0 )
                                            {
                                              v1059 = v1273;
                                              v1615 = (__int64)v1273;
                                              v1273 = 0LL;
                                              v1594 = v1274;
                                              v1714 = 0LL;
                                              v1071 = 0x10000000;
LABEL_1646:
                                              if ( v1273 )
                                              {
                                                v1339 = GetProcessHeap();
                                                HeapFree(v1339, 0, v1273);
                                                v1274 = v1594;
                                                v89 = 0LL;
                                                v1714 = 0LL;
                                              }
                                              if ( v1071 < 0 )
                                                goto LABEL_1489;
                                              v1606[0] = (_DWORD)v89;
                                              v1715 = v1059;
                                              if ( v1274 < 4 )
                                                goto LABEL_1650;
                                              v1403 = *v1059;
                                              v1340 = RtlULongLongAdd(v1059, 4LL, &v1715);
                                              if ( v1340 < 0 )
                                                goto LABEL_1687;
                                              v1340 = RtlUIntAdd(0LL, v1341, v1606);
                                              if ( v1340 < 0 )
                                                goto LABEL_1687;
                                              if ( v1274 - v1606[0] < (unsigned int)v1342 )
                                              {
LABEL_1650:
                                                v1340 = -1073741762;
LABEL_1687:
                                                v1071 = v1340 | 0x10000000;
                                                goto LABEL_1489;
                                              }
                                              v1343 = *(unsigned int *)v1715;
                                              v1340 = RtlULongLongAdd(v1715, v1342, &v1715);
                                              if ( v1340 < 0 || (v1340 = RtlUIntAdd(v1606[0], v1344, v1606), v1340 < 0) )
                                              {
LABEL_1686:
                                                v1059 = (int *)v1615;
                                                goto LABEL_1687;
                                              }
                                              if ( v1274 - v1606[0] < (unsigned int)v1343 )
                                                goto LABEL_1685;
                                              v1340 = RtlUIntAdd(v1606[0], (unsigned int)v1343, v1606);
                                              if ( v1340 < 0 )
                                                goto LABEL_1686;
                                              v1345 = v1715;
                                              if ( v1615 + (unsigned __int64)v1274 < (unsigned __int64)v1715 + v1343
                                                || v1274 + v1615 - v1343 - (unsigned __int64)v1715 >= 8 )
                                              {
LABEL_1685:
                                                v1340 = -1073741762;
                                                goto LABEL_1686;
                                              }
                                              v1418 = (int)v89;
                                              v1346 = v89;
                                              v1340 = (int)v89;
                                              if ( v1715 )
                                              {
                                                v1340 = RtlULongLongAdd(v1715, (unsigned int)v1343, &v1716);
                                                if ( v1340 < 0 )
                                                  goto LABEL_1682;
                                                v1348 = v1716;
                                                if ( (unsigned __int64)v1345 < v1716 )
                                                {
                                                  while ( 1 )
                                                  {
                                                    v1340 = RtlULongLongAdd(v1347, 4LL, &v1717);
                                                    if ( v1340 < 0 )
                                                      break;
                                                    if ( v1717 > v1350 )
                                                      goto LABEL_1676;
                                                    v1351 = RtlUIntAdd(4LL, *v1349, v1607);
                                                    v1340 = v1351;
                                                    if ( v1351 >= 0 )
                                                      v1353 = v1607[0];
                                                    v1606[1] = v1353;
                                                    if ( v1351 < 0 )
                                                      break;
                                                    v1340 = RtlULongLongAdd(v1352, v1353, &v1718);
                                                    if ( v1340 < 0 )
                                                      break;
                                                    v1347 = v1718;
                                                    if ( v1718 > v1348 )
                                                      goto LABEL_1676;
                                                    ++v1418;
                                                    if ( v1718 >= v1348 )
                                                      goto LABEL_1671;
                                                  }
                                                  v89 = 0LL;
                                                  goto LABEL_1682;
                                                }
LABEL_1671:
                                                if ( v1347 != v1348 )
                                                {
LABEL_1676:
                                                  v1340 = -1073741811;
                                                  v89 = 0LL;
                                                  goto LABEL_1686;
                                                }
                                                v89 = 0LL;
                                              }
                                              if ( (_DWORD)v1343 )
                                              {
                                                v1354 = GetProcessHeap();
                                                v1355 = HeapAlloc(v1354, 8u, v1343);
                                                v89 = 0LL;
                                                v1346 = v1355;
                                                if ( !v1355 )
                                                {
                                                  v1340 = -1073741801;
                                                  goto LABEL_1682;
                                                }
                                                v1340 = 0;
                                              }
                                              if ( v1345 )
                                              {
                                                memcpy_0(v1346, v1345, v1343);
                                                v89 = 0LL;
                                              }
                                              LODWORD(v1740[0]) = v1418;
                                              v1740[1] = v1346;
LABEL_1682:
                                              if ( v1340 >= 0 )
                                              {
                                                v1059 = (int *)v1615;
                                                if ( v1403 == LODWORD(v1740[0]) )
                                                  goto LABEL_1687;
                                                goto LABEL_1650;
                                              }
                                              goto LABEL_1686;
                                            }
                                          }
                                          else
                                          {
                                            v1273 = v1714;
                                          }
                                        }
                                        v1274 = v1594;
                                        v1071 = -805306367;
                                        v1059 = (int *)v1615;
                                        goto LABEL_1646;
                                      }
                                      if ( v1236 - v1621 < (unsigned int)v1237 )
                                        goto LABEL_1553;
                                      Srce = v1713;
                                      v1483 = v1237;
                                      v1235 = RtlULongLongAdd(v1713, (unsigned int)v1237, &v1713);
                                      if ( v1235 < 0 )
                                        goto LABEL_1606;
                                      v1235 = RtlUIntAdd(v1621, v1238, &v1621);
                                      if ( v1235 < 0 )
                                        goto LABEL_1606;
                                      if ( v1239 - v1621 < 4 )
                                        goto LABEL_1553;
                                      v1240 = *(unsigned int *)v1713;
                                      v1235 = RtlULongLongAdd(v1713, 4LL, &v1713);
                                      if ( v1235 < 0 )
                                        goto LABEL_1606;
                                      v1235 = RtlUIntAdd(v1621, 4LL, &v1621);
                                      if ( v1235 < 0 )
                                        goto LABEL_1606;
                                      if ( v1241 - v1621 < (unsigned int)v1240 )
                                        goto LABEL_1553;
                                      v1504 = v1713;
                                      v1235 = RtlULongLongAdd(v1713, (unsigned int)v1240, &v1713);
                                      if ( v1235 < 0 )
                                        goto LABEL_1606;
                                      v1235 = RtlUIntAdd(v1621, (unsigned int)v1240, &v1621);
                                      if ( v1235 < 0 )
                                        goto LABEL_1606;
                                      if ( v1242 - v1621 < 4 )
                                        goto LABEL_1553;
                                      v1243 = *(unsigned int *)v1713;
                                      v1235 = RtlULongLongAdd(v1713, 4LL, &v1713);
                                      if ( v1235 < 0 )
                                        goto LABEL_1606;
                                      v1235 = RtlUIntAdd(v1621, 4LL, &v1621);
                                      if ( v1235 < 0 )
                                        goto LABEL_1606;
                                      if ( v1244 - v1621 < (unsigned int)v1243 )
                                        goto LABEL_1553;
                                      v1235 = RtlUIntAdd(v1621, (unsigned int)v1243, &v1621);
                                      if ( v1235 < 0 )
                                        goto LABEL_1606;
                                      if ( v1245 != v1621 || (unsigned int)(v1243 + v1240 + v1246) + 12LL != v1245 )
                                      {
LABEL_1553:
                                        v1235 = -1073741762;
                                        goto LABEL_1606;
                                      }
                                      v1247 = GetProcessHeap();
                                      v1248 = HeapAlloc(v1247, 8u, 0x30uLL);
                                      v89 = 0LL;
                                      v1249 = v1248;
                                      if ( !v1248 )
                                      {
                                        v1235 = -1073741801;
LABEL_1596:
                                        v1058 = v1496;
                                        v1265 = 0LL;
                                        if ( v1235 < 0 )
                                        {
                                          v1265 = v1496;
                                          v1058 = 0LL;
                                        }
                                        v1505 = (__int64)v1058;
                                        if ( v1265 )
                                        {
                                          v1266 = (void *)v1265[1];
                                          if ( v1266 )
                                          {
                                            v1267 = GetProcessHeap();
                                            HeapFree(v1267, 0, v1266);
                                            v1265[1] = 0LL;
                                          }
                                          v1268 = (void *)v1265[3];
                                          if ( v1268 )
                                          {
                                            v1269 = GetProcessHeap();
                                            HeapFree(v1269, 0, v1268);
                                            v1265[3] = 0LL;
                                          }
                                          v1270 = (void *)v1265[5];
                                          if ( v1270 )
                                          {
                                            v1271 = GetProcessHeap();
                                            HeapFree(v1271, 0, v1270);
                                            v1265[5] = 0LL;
                                          }
                                          v1272 = GetProcessHeap();
                                          HeapFree(v1272, 0, v1265);
                                          v89 = 0LL;
                                          v1505 = (__int64)v1058;
                                        }
                                        goto LABEL_1606;
                                      }
                                      if ( Srce )
                                      {
                                        *(_DWORD *)v1248 = v1401;
                                        v1250 = GetProcessHeap();
                                        v1251 = HeapAlloc(v1250, 8u, v1483);
                                        v89 = 0LL;
                                        if ( !v1251 )
                                        {
LABEL_1576:
                                          v1235 = -1073741801;
                                          goto LABEL_1588;
                                        }
                                        v1249[1] = v1251;
                                        memcpy_0(v1251, Srce, v1483);
                                        v89 = 0LL;
                                      }
                                      else
                                      {
                                        *(_DWORD *)v1248 = 0;
                                        v1248[1] = 0LL;
                                      }
                                      v1252 = v1504;
                                      if ( v1504 )
                                      {
                                        *((_DWORD *)v1249 + 4) = v1240;
                                        v1253 = GetProcessHeap();
                                        v1254 = HeapAlloc(v1253, 8u, v1240);
                                        v89 = 0LL;
                                        if ( !v1254 )
                                          goto LABEL_1576;
                                        v1249[3] = v1254;
                                        memcpy_0(v1254, v1252, v1240);
                                        v89 = 0LL;
                                      }
                                      else
                                      {
                                        *((_DWORD *)v1249 + 4) = 0;
                                        v1249[3] = 0LL;
                                      }
                                      v1255 = v1713;
                                      if ( v1713 )
                                      {
                                        *((_DWORD *)v1249 + 8) = v1243;
                                        v1256 = GetProcessHeap();
                                        v1257 = HeapAlloc(v1256, 8u, v1243);
                                        v89 = 0LL;
                                        if ( !v1257 )
                                          goto LABEL_1576;
                                        v1249[5] = v1257;
                                        memcpy_0(v1257, v1255, v1243);
                                        v89 = 0LL;
                                      }
                                      else
                                      {
                                        *((_DWORD *)v1249 + 8) = 0;
                                        v1249[5] = 0LL;
                                      }
                                      v1496 = v1249;
                                      v1235 = 0;
                                      v1249 = 0LL;
LABEL_1588:
                                      if ( v1249 )
                                      {
                                        v1258 = (void *)v1249[1];
                                        if ( v1258 )
                                        {
                                          v1259 = GetProcessHeap();
                                          HeapFree(v1259, 0, v1258);
                                          v1249[1] = 0LL;
                                        }
                                        v1260 = (void *)v1249[3];
                                        if ( v1260 )
                                        {
                                          v1261 = GetProcessHeap();
                                          HeapFree(v1261, 0, v1260);
                                          v1249[3] = 0LL;
                                        }
                                        v1262 = (void *)v1249[5];
                                        if ( v1262 )
                                        {
                                          v1263 = GetProcessHeap();
                                          HeapFree(v1263, 0, v1262);
                                          v1249[5] = 0LL;
                                        }
                                        v1264 = GetProcessHeap();
                                        HeapFree(v1264, 0, v1249);
                                        v89 = 0LL;
                                      }
                                      goto LABEL_1596;
                                    }
                                    v1071 = -2147024809;
                                  }
                                  v1059 = 0LL;
                                  goto LABEL_1489;
                                }
                              }
                              else
                              {
LABEL_1456:
                                v1071 = -1073741811;
                              }
LABEL_1528:
                              v89 = 0LL;
                              goto LABEL_1529;
                            }
                          }
                        }
LABEL_1694:
                        v1007 = v1503;
                        goto LABEL_1695;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_1325:
      v1007 = v1011;
    }
LABEL_1695:
    v1736 = 0LL;
    v1358 = v1737;
    if ( v1737 )
    {
      v1359 = GetProcessHeap();
      HeapFree(v1359, 0, v1358);
      v89 = 0LL;
      v1737 = 0LL;
    }
    v1740[0] = 0LL;
    v1360 = v1740[1];
    if ( v1740[1] )
    {
      v1361 = GetProcessHeap();
      HeapFree(v1361, 0, v1360);
      v89 = 0LL;
      v1740[1] = 0LL;
    }
    if ( v1007 )
    {
      v1362 = GetProcessHeap();
      HeapFree(v1362, 0, v1007);
      v89 = 0LL;
    }
    if ( v1008 )
    {
      v1363 = GetProcessHeap();
      HeapFree(v1363, 0, v1008);
      v89 = 0LL;
    }
  }
LABEL_1703:
  v88 = v1568;
  v1610 = v1569;
  v1638[0] = v1440;
  v1504 = v89;
LABEL_101:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v90 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v90 == 1 )
    {
      v91 = 4LL;
      v92 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      do
      {
        if ( *v92 )
          FreeLibrary(*v92);
        v92 += 3;
        --v91;
      }
      while ( v91 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, off_180498000, 0x170uLL);
      LODWORD(v89) = 0;
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, (__int32)v89);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1504);
  if ( v87 < 0 )
  {
    switch ( v87 )
    {
      case -805306316:
        v87 = -1073418222;
LABEL_112:
        v93 = v87;
        goto LABEL_1713;
      case -805306139:
      case -1073425151:
        v87 = -1073418201;
        break;
      case -805306306:
        v87 = -1073418200;
        goto LABEL_112;
    }
    if ( v87 != -2147024774 )
      goto LABEL_112;
    goto LABEL_1710;
  }
  if ( v88 != 4 )
  {
LABEL_1710:
    v93 = -1073418210;
    goto LABEL_1713;
  }
  v93 = 0;
  v1565 = *(_DWORD *)v1638[0];
LABEL_1713:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(v1638);
  if ( v93 >= 0 )
  {
    *(_BYTE *)v1637 = v1565 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)(unsigned int)v93);
    return (unsigned int)v93;
  }
}
