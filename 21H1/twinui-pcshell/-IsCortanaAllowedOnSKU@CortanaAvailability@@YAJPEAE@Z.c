/*
 * XREFs of ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1801D72F0
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1801D6EDC (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800894E0 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _alloca_probe @ 0x1800CA410 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1800CA47F (wcscmp_0.c)
 *     memcpy_0 @ 0x1800CA497 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180117540 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x180454244 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x180454278 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1804542A8 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1804542D8 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     RtlUIntAdd @ 0x180454300 (RtlUIntAdd.c)
 *     RtlULongLongAdd @ 0x180454320 (RtlULongLongAdd.c)
 *     StringCchLengthW @ 0x180454344 (StringCchLengthW.c)
 */

__int64 __fastcall CortanaAvailability::IsCortanaAllowedOnSKU(CortanaAvailability *this, unsigned __int8 *a2)
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
  int v27; // edx
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
  __int64 (__fastcall *ProcAddress)(); // rcx
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
  __int64 (__fastcall *v78)(); // rdi
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
  int v89; // eax
  HMODULE *v90; // rdi
  __int64 v91; // rsi
  int v92; // edi
  unsigned __int16 *v93; // r13
  unsigned __int16 *v94; // r12
  HANDLE v95; // rax
  unsigned __int16 *v96; // rbx
  _OWORD *v97; // rax
  HANDLE v98; // rax
  int v99; // eax
  unsigned int v100; // edi
  int v101; // eax
  unsigned int v102; // r11d
  int v103; // eax
  int v104; // eax
  unsigned int v105; // r11d
  int v106; // r10d
  int v107; // eax
  int v108; // eax
  unsigned int v109; // r11d
  int v110; // r10d
  int v111; // eax
  int v112; // eax
  size_t v113; // rdx
  const wchar_t *v114; // rcx
  int v115; // r10d
  unsigned int v116; // r11d
  int v117; // eax
  int v118; // eax
  unsigned int v119; // r11d
  int v120; // r10d
  int v121; // eax
  int v122; // eax
  unsigned int v123; // r11d
  int v124; // r10d
  int v125; // eax
  int v126; // eax
  int v127; // r10d
  unsigned int v128; // edi
  HANDLE v129; // rax
  _DWORD *v130; // rdi
  __int64 v131; // r11
  int v132; // eax
  _DWORD *v133; // rax
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // r11
  _DWORD *v137; // rdi
  unsigned int v138; // r9d
  int v139; // r10d
  _OWORD *v140; // rax
  int v141; // eax
  __int64 v142; // rdx
  _DWORD *v143; // rdi
  int v144; // eax
  unsigned int v145; // r9d
  int v146; // r10d
  _QWORD *v147; // rax
  int v148; // eax
  __int64 v149; // rdx
  size_t v150; // rdx
  const wchar_t *v151; // rcx
  _DWORD *v152; // rdi
  int v153; // eax
  unsigned int v154; // r9d
  int v155; // r10d
  void *v156; // rdi
  HANDLE v157; // rax
  void *v158; // rdi
  HANDLE v159; // rax
  HANDLE v160; // rax
  HANDLE v161; // rax
  void *v162; // r13
  DWORD ModuleFileNameW; // eax
  STRSAFE_PCNZWCH *v164; // rax
  __int64 v165; // r11
  int v166; // eax
  __int64 v167; // rdx
  _DWORD *v168; // rdi
  int v169; // eax
  __int64 v170; // rcx
  unsigned int v171; // r9d
  int v172; // r11d
  __int64 v173; // r10
  void *v174; // rcx
  int v175; // eax
  __int64 v176; // rdx
  __int64 v177; // r11
  _DWORD *v178; // rdi
  unsigned int v179; // r9d
  int v180; // r10d
  int *v181; // rax
  int v182; // eax
  __int64 v183; // rdx
  unsigned int v184; // r11d
  _DWORD *v185; // rdi
  int v186; // eax
  unsigned int v187; // r9d
  int v188; // r10d
  _DWORD *v189; // rax
  int v190; // eax
  __int64 v191; // rcx
  unsigned int v192; // r9d
  int v193; // eax
  unsigned int v194; // r9d
  unsigned int v195; // edi
  unsigned int v196; // r11d
  int v197; // eax
  unsigned int v198; // r11d
  int v199; // eax
  unsigned int v200; // r11d
  int v201; // eax
  unsigned int v202; // r11d
  int v203; // eax
  unsigned int v204; // eax
  unsigned __int16 *v205; // rdi
  unsigned int v206; // r12d
  unsigned int v207; // r13d
  int v208; // r15d
  unsigned int v209; // eax
  unsigned int v210; // edi
  HANDLE v211; // rax
  _DWORD *v212; // rdi
  unsigned int v213; // r11d
  void *v214; // rcx
  HANDLE v215; // rax
  _QWORD *v216; // rbx
  int v217; // r15d
  unsigned __int64 v218; // r15
  _BYTE *v219; // r13
  unsigned __int8 v220; // al
  int v221; // r11d
  unsigned __int64 m; // rcx
  int v223; // r10d
  unsigned __int16 *v224; // r8
  _BYTE *v225; // r12
  unsigned int v226; // r9d
  unsigned int v227; // edx
  int v228; // r10d
  char v229; // r9
  int v230; // edi
  int v231; // ecx
  unsigned int v232; // r10d
  int v233; // r11d
  unsigned int v234; // ecx
  unsigned int v235; // edi
  char v236; // r14
  unsigned __int64 v237; // r11
  unsigned __int8 *v238; // rdx
  int v239; // r14d
  int v240; // ebx
  _BYTE *v241; // rax
  int v242; // r12d
  int v243; // r15d
  int v244; // r8d
  int v245; // edi
  int v246; // r10d
  int v247; // r9d
  int v248; // r10d
  int v249; // r9d
  int v250; // r10d
  unsigned int v251; // r9d
  int v252; // r10d
  int v253; // r9d
  int v254; // r10d
  int v255; // r9d
  int v256; // r10d
  int v257; // r9d
  unsigned int v258; // r10d
  unsigned int v259; // r9d
  int v260; // r10d
  int v261; // r9d
  int v262; // r10d
  int v263; // r9d
  int v264; // r10d
  int v265; // r9d
  int v266; // r10d
  int v267; // r9d
  unsigned int v268; // r10d
  int v269; // r9d
  unsigned int v270; // r10d
  int v271; // r9d
  int v272; // r10d
  int v273; // r9d
  int v274; // r10d
  int v275; // r9d
  int v276; // r10d
  int v277; // r9d
  int v278; // r10d
  HANDLE v279; // rax
  _QWORD *v280; // rdi
  HANDLE v281; // rax
  void *v282; // rax
  HANDLE v283; // rax
  _OWORD *v284; // rax
  HANDLE v285; // rax
  _QWORD *v286; // rcx
  void *v287; // r12
  HANDLE v288; // rax
  void *v289; // r12
  HANDLE v290; // rax
  void *v291; // r12
  HANDLE v292; // rax
  HANDLE v293; // rax
  void *v294; // rdi
  HANDLE v295; // rax
  void *v296; // rdi
  HANDLE v297; // rax
  void *v298; // rdi
  HANDLE v299; // rax
  void *v300; // rdi
  HANDLE v301; // rax
  HANDLE v302; // rax
  const void **v303; // rbx
  int v304; // r15d
  unsigned int v305; // r12d
  unsigned int v306; // eax
  unsigned int v307; // edi
  HANDLE v308; // rax
  _DWORD *v309; // rdi
  void *v310; // rcx
  void *v311; // rcx
  HANDLE v312; // rax
  int v313; // eax
  unsigned int v314; // ecx
  unsigned int v315; // eax
  unsigned int v316; // edi
  int v317; // eax
  unsigned int *v318; // rcx
  unsigned int v319; // ebx
  int v320; // r9d
  int v321; // r9d
  unsigned int *v322; // rax
  unsigned int *v323; // rcx
  unsigned int v324; // ebx
  int v325; // r9d
  int v326; // r9d
  unsigned int *v327; // rax
  unsigned int v328; // r10d
  unsigned int v329; // r11d
  unsigned int v330; // eax
  unsigned int v331; // edi
  HANDLE v332; // rax
  unsigned int *v333; // rax
  unsigned int *v334; // rbx
  signed int v335; // eax
  unsigned int v336; // edi
  FARPROC v337; // rax
  int v338; // eax
  int v339; // r15d
  unsigned int *v340; // rbx
  int *v341; // rdi
  SIZE_T v342; // r13
  unsigned int v343; // r10d
  unsigned int *v344; // rcx
  __int64 v345; // r10
  SIZE_T v346; // rbx
  unsigned int v347; // r10d
  __int64 v348; // r10
  SIZE_T v349; // r12
  int v350; // eax
  unsigned int v351; // r10d
  unsigned int *v352; // r9
  HANDLE v353; // rax
  _QWORD *v354; // rdi
  HANDLE v355; // rax
  void *v356; // rax
  HANDLE v357; // rax
  void *v358; // rax
  void *v359; // rbx
  size_t v360; // r15
  HANDLE v361; // rax
  void *v362; // rax
  void *v363; // rbx
  HANDLE v364; // rax
  void *v365; // rbx
  HANDLE v366; // rax
  void *v367; // rbx
  HANDLE v368; // rax
  HANDLE v369; // rax
  _QWORD *v370; // rdi
  void *v371; // rbx
  HANDLE v372; // rax
  void *v373; // rbx
  HANDLE v374; // rax
  void *v375; // rbx
  HANDLE v376; // rax
  HANDLE v377; // rax
  char *v378; // r15
  __int64 v379; // rbx
  unsigned __int64 v380; // rbx
  void *v381; // rax
  unsigned int v382; // r9d
  _BYTE *v383; // r11
  unsigned __int8 v384; // al
  char *v385; // r8
  _BYTE *v386; // r13
  int v387; // r10d
  unsigned int v388; // edx
  int v389; // r15d
  char v390; // r9
  int v391; // edi
  int v392; // ecx
  unsigned int v393; // r10d
  int v394; // r15d
  int v395; // ecx
  unsigned int v396; // edi
  char v397; // si
  unsigned __int64 v398; // r15
  _BYTE *v399; // r11
  int v400; // esi
  unsigned __int8 *v401; // rbx
  int v402; // r12d
  int v403; // r13d
  unsigned int v404; // eax
  int v405; // r8d
  int v406; // edi
  int v407; // ecx
  int v408; // r8d
  int v409; // r9d
  int v410; // edi
  unsigned int v411; // r10d
  int v412; // r9d
  unsigned int v413; // r10d
  int v414; // r9d
  int v415; // r10d
  unsigned int v416; // r9d
  int v417; // r10d
  int v418; // r9d
  int v419; // r10d
  unsigned int v420; // r9d
  int v421; // r10d
  int v422; // r9d
  unsigned int v423; // r10d
  int v424; // r9d
  int v425; // r10d
  int v426; // r9d
  int v427; // r10d
  int v428; // r9d
  int v429; // r10d
  int v430; // r9d
  int v431; // r10d
  unsigned int v432; // r9d
  int v433; // r10d
  int v434; // edx
  int v435; // ecx
  int v436; // r10d
  int v437; // edx
  int v438; // r9d
  int v439; // r9d
  int v440; // r10d
  int v441; // r9d
  int v442; // r10d
  int v443; // r9d
  int v444; // r10d
  unsigned __int64 n; // rcx
  int v446; // ebx
  int *v447; // r13
  HANDLE v448; // rax
  int v449; // r15d
  unsigned int v450; // r11d
  void *v451; // r9
  __int64 v452; // r11
  void *v453; // rbx
  __int64 v454; // rdx
  SIZE_T v455; // r12
  void *v456; // r13
  int v457; // edi
  unsigned int *v458; // rdi
  unsigned int *v459; // r10
  unsigned __int64 v460; // r10
  int v461; // eax
  unsigned int v462; // r9d
  HANDLE v463; // rax
  HANDLE v464; // rax
  _QWORD *v465; // rbx
  void *v466; // rdi
  HANDLE v467; // rax
  void *v468; // rdi
  HANDLE v469; // rax
  void *v470; // rdi
  HANDLE v471; // rax
  HANDLE v472; // rax
  HANDLE v473; // rax
  HANDLE v474; // rax
  void *v475; // rdi
  HANDLE v476; // rax
  void *v477; // rdi
  HANDLE v478; // rax
  void *v479; // rdi
  HANDLE v480; // rax
  HANDLE v481; // rax
  HANDLE v482; // rax
  __int64 v483; // r11
  int v484; // r9d
  int *v485; // rax
  int *v486; // rcx
  int v487; // edi
  unsigned int v488; // r9d
  int v489; // edi
  int *v490; // rax
  int *v491; // rcx
  unsigned int v492; // edi
  unsigned int v493; // r9d
  int v494; // edi
  int *v495; // rax
  LPVOID v496; // rcx
  unsigned int v497; // edi
  unsigned int v498; // r9d
  int v499; // r10d
  void *v500; // rdi
  int *v501; // rcx
  unsigned int v502; // r11d
  int v503; // r9d
  int v504; // r11d
  int v505; // r9d
  int *v506; // rax
  int *v507; // rcx
  unsigned int v508; // ebx
  unsigned int v509; // r10d
  unsigned int v510; // r11d
  int v511; // r9d
  int v512; // r9d
  int *v513; // rax
  int v514; // ecx
  __int64 v515; // rax
  unsigned int v516; // edi
  int v517; // eax
  char *v518; // rax
  int v519; // r12d
  _BYTE *v520; // r14
  unsigned __int8 *v521; // rsi
  int v522; // edi
  int v523; // ebx
  __int64 v524; // r15
  int v525; // r11d
  int v526; // r10d
  int v527; // ecx
  int v528; // r11d
  int v529; // ebx
  int v530; // r10d
  unsigned int v531; // r9d
  int v532; // ebx
  unsigned int v533; // r9d
  int v534; // ebx
  int v535; // r9d
  unsigned int v536; // ebx
  int v537; // r9d
  int v538; // ebx
  int v539; // r9d
  unsigned int v540; // ebx
  int v541; // edx
  int v542; // ebx
  unsigned int v543; // r13d
  int v544; // ebx
  int v545; // r13d
  int v546; // ebx
  int v547; // r13d
  unsigned int v548; // ebx
  int v549; // r13d
  int v550; // ebx
  int v551; // r13d
  unsigned int v552; // ebx
  int v553; // r13d
  int v554; // edx
  int v555; // ecx
  int v556; // r13d
  int v557; // edx
  int v558; // ebx
  int v559; // ebx
  int v560; // r13d
  int v561; // ebx
  int v562; // r13d
  int v563; // ebx
  int v564; // r13d
  unsigned __int64 v565; // rcx
  void *v566; // rdx
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
  __int64 (__fastcall *v581)(); // rcx
  WCHAR *v582; // rbx
  HANDLE v583; // rax
  HMODULE *v584; // rbx
  __int64 v585; // r12
  int v586; // eax
  char *v587; // rax
  int v588; // r12d
  _BYTE *v589; // r14
  int v590; // edi
  unsigned __int8 *v591; // rsi
  int v592; // ebx
  __int64 v593; // r15
  int v594; // r11d
  int v595; // r10d
  int v596; // ecx
  int v597; // r11d
  int v598; // ebx
  int v599; // r10d
  unsigned int v600; // r9d
  int v601; // ebx
  unsigned int v602; // r9d
  int v603; // ebx
  int v604; // r9d
  unsigned int v605; // ebx
  int v606; // r9d
  int v607; // ebx
  int v608; // r9d
  unsigned int v609; // ebx
  int v610; // edx
  int v611; // ebx
  unsigned int v612; // r13d
  int v613; // ebx
  int v614; // r13d
  int v615; // ebx
  int v616; // r13d
  unsigned int v617; // ebx
  int v618; // r13d
  int v619; // ebx
  int v620; // r13d
  unsigned int v621; // ebx
  int v622; // r13d
  int v623; // edx
  int v624; // ecx
  int v625; // r13d
  int v626; // edx
  int v627; // ebx
  int v628; // ebx
  int v629; // r13d
  int v630; // ebx
  int v631; // r13d
  int v632; // ebx
  int v633; // r13d
  char v634; // al
  unsigned __int64 v635; // rcx
  int v636; // r12d
  WCHAR *v637; // rdx
  int v638; // ebx
  LPCWSTR v639; // rbx
  const WCHAR *v640; // rdx
  __int64 v641; // rax
  const WCHAR *v642; // rbx
  char *v643; // r13
  __int64 v644; // rcx
  unsigned __int64 v645; // rcx
  unsigned int v646; // eax
  unsigned int v647; // ecx
  const CHAR *v648; // rdx
  __int64 v649; // rax
  __int64 (__fastcall *v650)(); // rcx
  WCHAR *v651; // rbx
  HANDLE v652; // rax
  HMODULE *v653; // rbx
  __int64 v654; // r12
  int v655; // r13d
  _DWORD *v656; // rdi
  signed int v657; // eax
  signed int v658; // r12d
  signed int v659; // eax
  char *v660; // rbx
  _DWORD *v661; // r13
  _DWORD *v662; // rdi
  unsigned int kk; // esi
  __int64 v664; // rax
  unsigned int v665; // r10d
  unsigned int v666; // r9d
  __int64 v667; // r8
  unsigned int v668; // ecx
  _DWORD *v669; // rdx
  __int64 v670; // rdi
  const wchar_t *v671; // rcx
  __int64 v672; // r8
  const wchar_t **v673; // rdx
  __int64 v674; // rax
  char *v675; // rax
  unsigned __int8 *v676; // r14
  int v677; // ebx
  int v678; // r15d
  int v679; // r11d
  int v680; // r10d
  _BYTE *v681; // r13
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
  unsigned int mm; // ecx
  __int64 v735; // rax
  void **v736; // rdi
  void **v737; // rbx
  __int64 v738; // r13
  _WORD *v739; // rdi
  __int64 v740; // rcx
  int v741; // edi
  signed int v742; // eax
  __int16 *v743; // rcx
  char *v744; // rdx
  unsigned int v745; // r8d
  __int16 v746; // r9
  _WORD *v747; // rcx
  __int64 v748; // rax
  __int64 v749; // r13
  __int64 v750; // rax
  int v751; // eax
  void *v752; // rcx
  __int64 v753; // rax
  signed int v754; // eax
  signed int v755; // eax
  unsigned int v756; // edi
  size_t *v757; // rbx
  __int64 v758; // r13
  signed int v759; // eax
  int v760; // ebx
  int v761; // eax
  __int64 v762; // rbx
  HMODULE *v763; // rdi
  unsigned int v764; // edi
  CToastCenterExperienceManager *v765; // r12
  __int64 v766; // rax
  int v767; // edi
  int v768; // eax
  void *v769; // r13
  __int64 v770; // rax
  __int64 v771; // rax
  CToastCenterExperienceManager *v772; // r12
  signed int v773; // ebx
  signed int v774; // eax
  int v775; // eax
  __int64 v776; // rax
  signed int v777; // eax
  unsigned __int16 *v778; // rax
  __int64 v779; // rbx
  signed int v780; // eax
  int v781; // eax
  __int64 v782; // rax
  signed int v783; // eax
  int v784; // ebx
  unsigned int v785; // edx
  int v786; // eax
  int v787; // r13d
  void *v788; // rdi
  int v789; // ebx
  void *v790; // rdi
  __int64 v791; // rdx
  __int64 v792; // rdi
  signed int v793; // eax
  unsigned int v794; // r13d
  void *v795; // rdi
  __int64 v796; // rbx
  int v797; // eax
  unsigned __int64 v798; // rdx
  int v799; // eax
  __int64 v800; // rax
  bool v801; // sf
  int v802; // edx
  int v803; // r12d
  int v804; // ebx
  int v805; // edi
  CToastCenterExperienceManager *v806; // rax
  int v807; // edx
  int v808; // ecx
  CToastCenterExperienceManager *v809; // rax
  bool v810; // zf
  char *v811; // rcx
  __int64 v812; // rax
  __int64 (__fastcall *v813)(); // rdi
  __int64 v814; // rax
  int v815; // edi
  __int64 v816; // r9
  int v817; // edx
  int v818; // r8d
  int v819; // ecx
  int v820; // r13d
  int v821; // r11d
  unsigned __int8 *v822; // rdx
  int v823; // eax
  unsigned __int16 *v824; // rax
  unsigned __int8 *v825; // r9
  int v826; // edi
  signed __int64 v827; // r10
  int v828; // r8d
  int v829; // edi
  int v830; // edx
  int v831; // edi
  int v832; // edx
  void *v833; // r13
  LPVOID v834; // r12
  __int64 v835; // rax
  __int64 v836; // rax
  CToastCenterExperienceManager *v837; // r12
  signed int v838; // ebx
  signed int v839; // eax
  __int64 v840; // rcx
  __int64 v841; // rax
  __int64 (__fastcall *v842)(); // rdi
  __int64 v843; // rax
  int v844; // eax
  int v845; // r8d
  int v846; // edi
  int v847; // edx
  int v848; // ecx
  int v849; // r13d
  int v850; // r11d
  char v851; // r15
  __int64 v852; // rdi
  unsigned __int16 *v853; // rax
  unsigned __int8 *v854; // r9
  int v855; // r8d
  char *v856; // r10
  int v857; // r8d
  int v858; // edi
  int v859; // edx
  int v860; // edi
  int v861; // edx
  int v862; // edi
  int v863; // ecx
  CToastCenterExperienceManager *v864; // rdi
  char v865; // al
  int v866; // ebx
  unsigned int v867; // r12d
  int v868; // edx
  int v869; // r13d
  int v870; // edi
  __int64 v871; // rax
  void *v872; // r13
  void *v873; // r13
  __int64 v874; // rax
  void *v875; // rax
  int v876; // edi
  void *v877; // rax
  bool v878; // sf
  int v879; // eax
  CToastCenterExperienceManager *v880; // rdi
  __int64 v881; // rcx
  __int64 v882; // rax
  __int64 (__fastcall *v883)(); // rdi
  __int64 v884; // rax
  LPVOID v885; // rdi
  int v886; // r8d
  int v887; // r9d
  int v888; // edx
  int v889; // ecx
  int v890; // ebx
  int v891; // r11d
  char *v892; // rdi
  char *v893; // rax
  unsigned __int8 *v894; // r9
  int v895; // r8d
  __int64 v896; // r10
  int v897; // r8d
  int v898; // edi
  int v899; // edx
  int v900; // edi
  int v901; // edx
  int v902; // edi
  int v903; // ecx
  void *v904; // rdi
  void *v905; // r13
  __int64 v906; // rax
  void *v907; // rax
  int v908; // edi
  signed int v909; // ebx
  void *v910; // rax
  signed int v911; // eax
  int v912; // eax
  CToastCenterExperienceManager *v913; // rdi
  __int64 v914; // rcx
  __int64 v915; // rax
  __int64 (__fastcall *v916)(); // rdi
  __int64 v917; // rax
  LPVOID v918; // rdi
  int v919; // eax
  int v920; // r8d
  int v921; // r9d
  int v922; // edx
  int v923; // ecx
  __int64 v924; // r10
  int v925; // r13d
  int v926; // r11d
  int v927; // edx
  unsigned __int8 *v928; // rdi
  char *v929; // rax
  unsigned __int8 *v930; // r9
  int v931; // r8d
  __int64 v932; // r10
  int v933; // r8d
  int v934; // edi
  int v935; // edx
  int v936; // edi
  int v937; // edx
  int v938; // edi
  int v939; // ecx
  __int64 v940; // rcx
  __int64 v941; // rcx
  __int64 v942; // rcx
  int v943; // eax
  HMODULE *v944; // rdi
  __int64 v945; // rbx
  int v946; // eax
  char *v947; // rax
  _BYTE *v948; // rsi
  int v949; // r14d
  __int64 v950; // rax
  int v951; // r15d
  int v952; // ebx
  unsigned __int8 *v953; // r12
  int v954; // r11d
  int v955; // r10d
  int v956; // r9d
  int v957; // ecx
  int v958; // r10d
  int v959; // r11d
  int v960; // r9d
  unsigned int v961; // r8d
  int v962; // r11d
  unsigned int v963; // r8d
  int v964; // r11d
  int v965; // r8d
  unsigned int v966; // r11d
  int v967; // r8d
  int v968; // r11d
  int v969; // r8d
  unsigned int v970; // r11d
  int v971; // r8d
  int v972; // r11d
  unsigned int v973; // ebx
  int v974; // r11d
  int v975; // ebx
  int v976; // r11d
  int v977; // ebx
  unsigned int v978; // r11d
  int v979; // ebx
  int v980; // r11d
  int v981; // ebx
  unsigned int v982; // r11d
  int v983; // ebx
  int v984; // edx
  int v985; // ecx
  int v986; // ebx
  int v987; // edx
  int v988; // r11d
  int v989; // r11d
  int v990; // ebx
  int v991; // r11d
  int v992; // ebx
  int v993; // r11d
  int v994; // ebx
  int v995; // r12d
  unsigned __int64 v996; // rcx
  void *v997; // r13
  char v998; // al
  int v999; // edi
  LPCWSTR v1000; // rdi
  const WCHAR *v1001; // rdx
  __int64 v1002; // rax
  const WCHAR *v1003; // rdi
  char *v1004; // rbx
  __int64 v1005; // rcx
  unsigned __int64 v1006; // rcx
  unsigned int v1007; // eax
  const CHAR *v1008; // rdx
  __int64 v1009; // rax
  __int64 (__fastcall *v1010)(); // rcx
  WCHAR *v1011; // rdi
  HANDLE v1012; // rax
  HMODULE *v1013; // rdi
  __int64 v1014; // rbx
  HMODULE *v1015; // rdi
  __int64 v1016; // rbx
  int v1017; // eax
  void *v1018; // r12
  HANDLE v1019; // rax
  _OWORD *v1020; // rbx
  _OWORD *v1021; // rax
  HANDLE v1022; // rax
  _QWORD *v1023; // rax
  _QWORD *v1024; // r12
  unsigned int v1025; // r9d
  int v1026; // eax
  unsigned int v1027; // r9d
  int v1028; // r10d
  int v1029; // eax
  unsigned int v1030; // r9d
  int v1031; // r10d
  int v1032; // eax
  int v1033; // r10d
  unsigned int v1034; // edi
  HANDLE v1035; // rax
  unsigned int *v1036; // rax
  unsigned int *v1037; // rdi
  unsigned int v1038; // r9d
  void *v1039; // r11
  int *v1040; // rax
  int v1041; // r10d
  unsigned int v1042; // r9d
  void *v1043; // r11
  int v1044; // ebx
  unsigned int v1045; // edi
  _DWORD *v1046; // rdi
  int v1047; // r9d
  unsigned int v1048; // r10d
  int v1049; // r8d
  _OWORD *v1050; // rax
  __int64 v1051; // rcx
  __int128 v1052; // xmm1
  unsigned int v1053; // r9d
  void *v1054; // r11
  unsigned int v1055; // edi
  unsigned int *v1056; // r9
  __int64 v1057; // r9
  int v1058; // r10d
  int v1059; // r8d
  _DWORD *v1060; // r9
  _QWORD *v1061; // rax
  unsigned int v1062; // r9d
  unsigned int *v1063; // r9
  __int64 v1064; // r9
  int v1065; // r10d
  _DWORD *v1066; // r9
  unsigned __int64 *v1067; // rax
  __int64 v1068; // rcx
  unsigned int v1069; // edi
  void *v1070; // r11
  _DWORD *v1071; // r12
  int *v1072; // r13
  int v1073; // edi
  unsigned int v1074; // r9d
  unsigned __int64 v1075; // r10
  void *v1076; // r11
  unsigned int v1077; // eax
  unsigned int v1078; // edi
  HANDLE v1079; // rax
  char *v1080; // rax
  char *v1081; // rbx
  unsigned int v1082; // r9d
  void *v1083; // rcx
  HANDLE v1084; // rax
  int v1085; // edi
  _QWORD *v1086; // r13
  int v1087; // edi
  unsigned __int64 v1088; // rbx
  unsigned __int8 *v1089; // r8
  unsigned __int8 v1090; // al
  unsigned __int64 v1091; // rcx
  _BYTE *v1092; // r11
  int v1093; // r9d
  signed int v1094; // r10d
  unsigned int v1095; // edx
  char v1096; // r9
  int v1097; // r14d
  int v1098; // edi
  int v1099; // ecx
  unsigned int v1100; // r9d
  unsigned int v1101; // ecx
  unsigned int v1102; // edi
  int v1103; // r14d
  char v1104; // si
  unsigned __int64 v1105; // rcx
  _BYTE *v1106; // rbx
  int v1107; // r14d
  unsigned __int64 v1108; // r11
  int v1109; // r12d
  int v1110; // r13d
  unsigned __int8 *v1111; // rax
  int v1112; // r8d
  int v1113; // edi
  int v1114; // ecx
  int v1115; // r8d
  int v1116; // edi
  int v1117; // r9d
  int v1118; // r10d
  int v1119; // r9d
  int v1120; // r10d
  int v1121; // r9d
  unsigned int v1122; // r10d
  int v1123; // r9d
  int v1124; // r10d
  int v1125; // r9d
  int v1126; // r10d
  int v1127; // r9d
  int v1128; // r10d
  unsigned int v1129; // r9d
  unsigned int v1130; // r10d
  int v1131; // r9d
  int v1132; // r10d
  int v1133; // r9d
  int v1134; // r10d
  int v1135; // r9d
  int v1136; // r10d
  int v1137; // r9d
  int v1138; // r10d
  unsigned int v1139; // r9d
  int v1140; // r10d
  int v1141; // r9d
  int v1142; // r10d
  int v1143; // r9d
  int v1144; // r10d
  int v1145; // r9d
  int v1146; // r10d
  int v1147; // r9d
  int v1148; // r10d
  int v1149; // r9d
  unsigned int v1150; // esi
  HANDLE v1151; // rax
  _DWORD *v1152; // rax
  _DWORD *v1153; // rbx
  HANDLE v1154; // rax
  void *v1155; // rax
  HANDLE v1156; // rax
  _OWORD *v1157; // rax
  HANDLE v1158; // rax
  _QWORD *v1159; // rax
  void *v1160; // rsi
  HANDLE v1161; // rax
  void *v1162; // rsi
  HANDLE v1163; // rax
  void *v1164; // rsi
  HANDLE v1165; // rax
  HANDLE v1166; // rax
  void *v1167; // rbx
  HANDLE v1168; // rax
  void *v1169; // rbx
  HANDLE v1170; // rax
  void *v1171; // rbx
  HANDLE v1172; // rax
  void *v1173; // rbx
  HANDLE v1174; // rax
  HANDLE v1175; // rax
  const void **v1176; // rbx
  __int64 v1177; // r13
  int v1178; // edi
  unsigned int *v1179; // r11
  unsigned int v1180; // eax
  unsigned int v1181; // edi
  HANDLE v1182; // rax
  _DWORD *v1183; // rax
  void *v1184; // rsi
  int v1185; // eax
  void *v1186; // rcx
  int v1187; // eax
  void *v1188; // rcx
  int v1189; // eax
  HANDLE v1190; // rax
  int v1191; // eax
  unsigned int v1192; // ecx
  unsigned int v1193; // eax
  int v1194; // eax
  unsigned int v1195; // r9d
  unsigned int *v1196; // rcx
  int v1197; // ebx
  unsigned int v1198; // esi
  unsigned int v1199; // ebx
  unsigned int *v1200; // rax
  unsigned int *v1201; // rcx
  int v1202; // ebx
  unsigned int v1203; // esi
  unsigned int v1204; // r9d
  unsigned int v1205; // ebx
  unsigned int *v1206; // rax
  __int64 v1207; // r9
  unsigned int v1208; // r10d
  unsigned int v1209; // r11d
  unsigned int v1210; // eax
  void *v1211; // rbx
  HANDLE v1212; // rax
  _QWORD *v1213; // rbx
  void *v1214; // rsi
  HANDLE v1215; // rax
  void *v1216; // rsi
  HANDLE v1217; // rax
  void *v1218; // rsi
  HANDLE v1219; // rax
  HANDLE v1220; // rax
  void *v1221; // rbx
  HANDLE v1222; // rax
  void *v1223; // rbx
  HANDLE v1224; // rax
  void *v1225; // rbx
  HANDLE v1226; // rax
  void *v1227; // rbx
  HANDLE v1228; // rax
  void *v1229; // rbx
  HANDLE v1230; // rax
  HANDLE v1231; // rax
  HANDLE v1232; // rax
  unsigned int *v1233; // rdi
  unsigned int v1234; // r9d
  int v1235; // r10d
  int *v1236; // r11
  int *v1237; // rax
  int v1238; // r9d
  unsigned int v1239; // edi
  HANDLE v1240; // rax
  int *v1241; // rax
  int *v1242; // rbx
  signed int v1243; // eax
  unsigned int v1244; // r9d
  FARPROC v1245; // rax
  int v1246; // eax
  void *v1247; // r11
  int v1248; // edi
  int v1249; // r9d
  SIZE_T v1250; // r10
  unsigned int v1251; // r10d
  int v1252; // r9d
  SIZE_T v1253; // rsi
  int v1254; // r9d
  int v1255; // r9d
  SIZE_T v1256; // r13
  int v1257; // r9d
  int v1258; // r9d
  int v1259; // r10d
  HANDLE v1260; // rax
  _QWORD *v1261; // rax
  _QWORD *v1262; // rbx
  void *v1263; // rdi
  HANDLE v1264; // rax
  void *v1265; // rax
  void *v1266; // rdi
  HANDLE v1267; // rax
  void *v1268; // rax
  void *v1269; // rdi
  HANDLE v1270; // rax
  void *v1271; // rax
  void *v1272; // rsi
  HANDLE v1273; // rax
  void *v1274; // rsi
  HANDLE v1275; // rax
  void *v1276; // rsi
  HANDLE v1277; // rax
  HANDLE v1278; // rax
  _QWORD *v1279; // rbx
  void *v1280; // rsi
  HANDLE v1281; // rax
  void *v1282; // rsi
  HANDLE v1283; // rax
  void *v1284; // rsi
  HANDLE v1285; // rax
  HANDLE v1286; // rax
  int *v1287; // rbx
  unsigned int v1288; // esi
  unsigned __int64 v1289; // r13
  void *v1290; // rax
  _BYTE *v1291; // rdi
  unsigned __int8 *v1292; // r9
  unsigned __int8 v1293; // al
  _BYTE *v1294; // rbx
  unsigned int v1295; // edx
  int v1296; // r10d
  char v1297; // r14
  int v1298; // r8d
  int v1299; // ecx
  unsigned int v1300; // r10d
  unsigned int v1301; // r11d
  unsigned int v1302; // ecx
  unsigned int v1303; // r8d
  int v1304; // r14d
  char v1305; // r15
  _BYTE *v1306; // r13
  int v1307; // esi
  unsigned __int8 *v1308; // r12
  int v1309; // edx
  int v1310; // ebx
  unsigned int v1311; // r15d
  char *v1312; // rax
  int v1313; // r9d
  int v1314; // r8d
  int v1315; // ecx
  int v1316; // r9d
  int v1317; // r10d
  int v1318; // r8d
  unsigned int v1319; // edi
  int v1320; // r10d
  unsigned int v1321; // edi
  int v1322; // r10d
  int v1323; // edi
  unsigned int v1324; // r10d
  int v1325; // edi
  int v1326; // r10d
  int v1327; // edi
  unsigned int v1328; // r10d
  int v1329; // edi
  int v1330; // r10d
  unsigned int v1331; // r11d
  int v1332; // r10d
  int v1333; // r11d
  int v1334; // r10d
  int v1335; // r11d
  int v1336; // r10d
  int v1337; // r11d
  int v1338; // r10d
  int v1339; // r11d
  unsigned int v1340; // r10d
  int v1341; // r11d
  int v1342; // edx
  int v1343; // ecx
  int v1344; // r11d
  int v1345; // edx
  int v1346; // r10d
  int v1347; // r10d
  int v1348; // r11d
  int v1349; // r10d
  int v1350; // r11d
  int v1351; // r10d
  int v1352; // r11d
  unsigned __int64 nn; // rcx
  int v1354; // r14d
  HANDLE v1355; // rax
  int v1356; // edi
  unsigned int v1357; // r9d
  __int64 v1358; // r9
  SIZE_T v1359; // r13
  unsigned int v1360; // r9d
  void *v1361; // r11
  void *v1362; // rbx
  void *v1363; // rsi
  unsigned __int64 v1364; // r9
  unsigned __int64 v1365; // r11
  unsigned int *v1366; // r9
  unsigned __int64 v1367; // r11
  int v1368; // eax
  __int64 v1369; // r9
  unsigned int v1370; // r10d
  HANDLE v1371; // rax
  int v1372; // edi
  _QWORD *v1373; // r11
  _QWORD *v1374; // rax
  void *v1375; // rdi
  HANDLE v1376; // rax
  void *v1377; // rdi
  HANDLE v1378; // rax
  HANDLE v1379; // rax
  HANDLE v1380; // rax
  unsigned __int8 v1382; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1383; // [rsp+60h] [rbp-A0h]
  unsigned int v1384; // [rsp+64h] [rbp-9Ch]
  int v1385; // [rsp+64h] [rbp-9Ch]
  unsigned int v1386; // [rsp+64h] [rbp-9Ch]
  int v1387; // [rsp+64h] [rbp-9Ch]
  int v1388; // [rsp+64h] [rbp-9Ch]
  int v1389; // [rsp+64h] [rbp-9Ch]
  __int64 v1390; // [rsp+64h] [rbp-9Ch]
  int v1391; // [rsp+68h] [rbp-98h]
  int ii; // [rsp+68h] [rbp-98h]
  unsigned int v1393; // [rsp+68h] [rbp-98h]
  int v1394; // [rsp+68h] [rbp-98h]
  int v1395; // [rsp+68h] [rbp-98h]
  int v1396; // [rsp+68h] [rbp-98h]
  int v1397; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1398; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1399; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1400; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1401; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1402; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1403; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1404; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1405; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1406; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1407; // [rsp+70h] [rbp-90h]
  int v1408; // [rsp+70h] [rbp-90h]
  int v1409; // [rsp+70h] [rbp-90h]
  int v1410; // [rsp+70h] [rbp-90h]
  unsigned int v1411; // [rsp+70h] [rbp-90h]
  int v1412; // [rsp+70h] [rbp-90h]
  int v1413; // [rsp+70h] [rbp-90h]
  int v1414; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1415; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1416; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1417; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1418; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1419; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1420; // [rsp+78h] [rbp-88h]
  int v1421; // [rsp+78h] [rbp-88h]
  int v1422; // [rsp+78h] [rbp-88h]
  int v1423; // [rsp+78h] [rbp-88h]
  int v1424; // [rsp+78h] [rbp-88h]
  int v1425; // [rsp+78h] [rbp-88h]
  unsigned int v1426; // [rsp+78h] [rbp-88h]
  int v1427; // [rsp+78h] [rbp-88h]
  int v1428; // [rsp+78h] [rbp-88h]
  int v1429; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1430; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1431; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1432; // [rsp+80h] [rbp-80h]
  int v1433; // [rsp+80h] [rbp-80h]
  int v1434; // [rsp+80h] [rbp-80h]
  int v1435; // [rsp+80h] [rbp-80h]
  int v1436; // [rsp+80h] [rbp-80h]
  unsigned int v1437; // [rsp+80h] [rbp-80h]
  unsigned int v1438; // [rsp+80h] [rbp-80h]
  int v1439; // [rsp+80h] [rbp-80h]
  __int64 v1440; // [rsp+88h] [rbp-78h]
  int v1441; // [rsp+88h] [rbp-78h]
  int v1442; // [rsp+88h] [rbp-78h]
  int v1443; // [rsp+88h] [rbp-78h]
  void *v1444; // [rsp+90h] [rbp-70h]
  const WCHAR *v1445; // [rsp+90h] [rbp-70h]
  LPVOID v1446; // [rsp+90h] [rbp-70h]
  char *v1447; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v1448; // [rsp+90h] [rbp-70h]
  LPVOID v1449; // [rsp+90h] [rbp-70h]
  int v1450; // [rsp+90h] [rbp-70h]
  int v1451; // [rsp+90h] [rbp-70h]
  unsigned int v1452; // [rsp+90h] [rbp-70h]
  int v1453; // [rsp+90h] [rbp-70h]
  int v1454; // [rsp+98h] [rbp-68h]
  unsigned int v1455; // [rsp+98h] [rbp-68h]
  unsigned int v1456; // [rsp+98h] [rbp-68h]
  int v1457; // [rsp+98h] [rbp-68h]
  int v1458; // [rsp+98h] [rbp-68h]
  int v1459; // [rsp+98h] [rbp-68h]
  int v1460; // [rsp+98h] [rbp-68h]
  int v1461; // [rsp+98h] [rbp-68h]
  SIZE_T v1462; // [rsp+A0h] [rbp-60h]
  void *v1463; // [rsp+A0h] [rbp-60h]
  int v1464; // [rsp+A0h] [rbp-60h]
  int v1465; // [rsp+A0h] [rbp-60h]
  int v1466; // [rsp+A0h] [rbp-60h]
  unsigned int v1467; // [rsp+A0h] [rbp-60h]
  int v1468; // [rsp+A0h] [rbp-60h]
  unsigned int v1469; // [rsp+A0h] [rbp-60h]
  int v1470; // [rsp+A0h] [rbp-60h]
  HLOCAL v1471; // [rsp+A8h] [rbp-58h]
  unsigned int v1472; // [rsp+A8h] [rbp-58h]
  unsigned int v1473; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v1474; // [rsp+B0h] [rbp-50h]
  int v1475; // [rsp+B0h] [rbp-50h]
  int v1476; // [rsp+B0h] [rbp-50h]
  unsigned int jj; // [rsp+B0h] [rbp-50h]
  char v1478; // [rsp+B0h] [rbp-50h]
  int v1479; // [rsp+B0h] [rbp-50h]
  int v1480; // [rsp+B8h] [rbp-48h]
  int v1481; // [rsp+B8h] [rbp-48h]
  unsigned int v1482; // [rsp+B8h] [rbp-48h]
  int v1483; // [rsp+B8h] [rbp-48h]
  __int64 v1484; // [rsp+B8h] [rbp-48h]
  const void *Src; // [rsp+C0h] [rbp-40h]
  char *Srca; // [rsp+C0h] [rbp-40h]
  unsigned int Srcb; // [rsp+C0h] [rbp-40h]
  int Srcc; // [rsp+C0h] [rbp-40h]
  int Srcd; // [rsp+C0h] [rbp-40h]
  unsigned int *v1490; // [rsp+C8h] [rbp-38h]
  _WORD *v1491; // [rsp+C8h] [rbp-38h]
  __int64 v1492; // [rsp+C8h] [rbp-38h]
  __int64 v1493; // [rsp+C8h] [rbp-38h]
  int v1494; // [rsp+C8h] [rbp-38h]
  int v1495; // [rsp+C8h] [rbp-38h]
  SIZE_T v1496; // [rsp+D0h] [rbp-30h]
  SIZE_T v1497; // [rsp+D0h] [rbp-30h]
  _BYTE *v1498; // [rsp+D0h] [rbp-30h]
  SIZE_T v1499; // [rsp+D0h] [rbp-30h]
  SIZE_T v1500; // [rsp+D0h] [rbp-30h]
  __int64 v1501; // [rsp+D8h] [rbp-28h]
  char *v1502; // [rsp+D8h] [rbp-28h]
  unsigned __int16 *v1503; // [rsp+D8h] [rbp-28h]
  __int64 v1504; // [rsp+D8h] [rbp-28h]
  int v1505; // [rsp+D8h] [rbp-28h]
  _OWORD *v1506; // [rsp+D8h] [rbp-28h]
  int v1507; // [rsp+E0h] [rbp-20h]
  int v1508; // [rsp+E0h] [rbp-20h]
  int v1509; // [rsp+E0h] [rbp-20h]
  int *v1510; // [rsp+E8h] [rbp-18h]
  __int64 v1511; // [rsp+E8h] [rbp-18h]
  int v1512; // [rsp+E8h] [rbp-18h]
  unsigned int v1513; // [rsp+E8h] [rbp-18h]
  char *v1514; // [rsp+E8h] [rbp-18h]
  void *v1515; // [rsp+F0h] [rbp-10h] BYREF
  void *v1516; // [rsp+F8h] [rbp-8h]
  LPVOID v1517; // [rsp+100h] [rbp+0h]
  __int64 v1518; // [rsp+108h] [rbp+8h]
  void *v1519; // [rsp+110h] [rbp+10h]
  unsigned int v1520; // [rsp+118h] [rbp+18h] BYREF
  int v1521; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v1522; // [rsp+120h] [rbp+20h]
  LPVOID v1523; // [rsp+128h] [rbp+28h]
  LPVOID v1524; // [rsp+130h] [rbp+30h]
  LPVOID v1525; // [rsp+138h] [rbp+38h]
  int v1526; // [rsp+140h] [rbp+40h]
  unsigned int v1527; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v1528; // [rsp+14Ch] [rbp+4Ch]
  unsigned int v1529; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1530; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1531; // [rsp+158h] [rbp+58h]
  unsigned int v1532; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1533; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1534; // [rsp+164h] [rbp+64h]
  unsigned int v1535; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1536; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1537; // [rsp+170h] [rbp+70h]
  unsigned int v1538; // [rsp+174h] [rbp+74h] BYREF
  int v1539; // [rsp+178h] [rbp+78h]
  unsigned int v1540; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v1541; // [rsp+184h] [rbp+84h]
  unsigned int v1542; // [rsp+188h] [rbp+88h] BYREF
  int v1543; // [rsp+190h] [rbp+90h]
  unsigned int v1544; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1545; // [rsp+19Ch] [rbp+9Ch]
  unsigned int v1546; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1547; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1548; // [rsp+1A8h] [rbp+A8h]
  unsigned int v1549; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1550; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1551; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1552; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1553; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1554; // [rsp+1C0h] [rbp+C0h]
  unsigned int v1555; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1556; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1557; // [rsp+1CCh] [rbp+CCh]
  int v1558; // [rsp+1D0h] [rbp+D0h]
  int v1559; // [rsp+1D4h] [rbp+D4h]
  unsigned int v1560; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1561; // [rsp+1DCh] [rbp+DCh]
  unsigned int v1562; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1563; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1564; // [rsp+1E8h] [rbp+E8h]
  unsigned int v1565; // [rsp+1ECh] [rbp+ECh] BYREF
  _DWORD v1566[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1567; // [rsp+1F8h] [rbp+F8h]
  int v1568; // [rsp+1FCh] [rbp+FCh]
  int v1569; // [rsp+200h] [rbp+100h]
  int v1570; // [rsp+204h] [rbp+104h]
  int v1571; // [rsp+208h] [rbp+108h]
  int v1572; // [rsp+20Ch] [rbp+10Ch]
  int v1573; // [rsp+210h] [rbp+110h]
  int v1574; // [rsp+214h] [rbp+114h]
  int v1575; // [rsp+218h] [rbp+118h]
  int v1576; // [rsp+21Ch] [rbp+11Ch]
  int v1577; // [rsp+220h] [rbp+120h]
  unsigned int v1578; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1579; // [rsp+228h] [rbp+128h] BYREF
  int v1580; // [rsp+22Ch] [rbp+12Ch]
  int v1581; // [rsp+230h] [rbp+130h]
  unsigned int v1582; // [rsp+234h] [rbp+134h]
  int v1583; // [rsp+238h] [rbp+138h]
  unsigned int v1584; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1585; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1586; // [rsp+244h] [rbp+144h] BYREF
  int v1587; // [rsp+248h] [rbp+148h]
  unsigned int v1588; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1589; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1590; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v1591; // [rsp+258h] [rbp+158h] BYREF
  _DWORD v1592[3]; // [rsp+25Ch] [rbp+15Ch] BYREF
  int v1593; // [rsp+268h] [rbp+168h]
  unsigned int v1594; // [rsp+270h] [rbp+170h] BYREF
  unsigned int v1595; // [rsp+274h] [rbp+174h]
  unsigned int v1596; // [rsp+278h] [rbp+178h] BYREF
  unsigned int v1597; // [rsp+27Ch] [rbp+17Ch] BYREF
  unsigned int v1598; // [rsp+280h] [rbp+180h]
  unsigned int v1599; // [rsp+284h] [rbp+184h] BYREF
  unsigned int v1600; // [rsp+288h] [rbp+188h] BYREF
  int v1601; // [rsp+28Ch] [rbp+18Ch]
  unsigned int v1602; // [rsp+290h] [rbp+190h] BYREF
  unsigned int v1603; // [rsp+294h] [rbp+194h] BYREF
  unsigned int v1604; // [rsp+298h] [rbp+198h] BYREF
  _DWORD v1605[2]; // [rsp+29Ch] [rbp+19Ch] BYREF
  unsigned int v1606; // [rsp+2A4h] [rbp+1A4h]
  unsigned int v1607; // [rsp+2A8h] [rbp+1A8h]
  unsigned int v1608; // [rsp+2ACh] [rbp+1ACh] BYREF
  unsigned int v1609; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int v1610; // [rsp+2B4h] [rbp+1B4h]
  unsigned int v1611; // [rsp+2B8h] [rbp+1B8h]
  unsigned int v1612; // [rsp+2BCh] [rbp+1BCh]
  unsigned int v1613; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v1614; // [rsp+2C4h] [rbp+1C4h]
  unsigned int v1615; // [rsp+2C8h] [rbp+1C8h] BYREF
  unsigned int v1616; // [rsp+2CCh] [rbp+1CCh] BYREF
  unsigned int v1617; // [rsp+2D0h] [rbp+1D0h]
  unsigned int v1618; // [rsp+2D4h] [rbp+1D4h]
  _DWORD v1619[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  _DWORD v1620[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v1621; // [rsp+2E8h] [rbp+1E8h]
  int v1622; // [rsp+2ECh] [rbp+1ECh]
  unsigned int v1623; // [rsp+2F0h] [rbp+1F0h]
  unsigned int dwBytes; // [rsp+2F4h] [rbp+1F4h] BYREF
  unsigned int dwBytes_4; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int v1626; // [rsp+2FCh] [rbp+1FCh]
  unsigned int v1627; // [rsp+300h] [rbp+200h] BYREF
  __int64 v1628; // [rsp+308h] [rbp+208h]
  unsigned int v1629; // [rsp+310h] [rbp+210h] BYREF
  unsigned int v1630; // [rsp+314h] [rbp+214h] BYREF
  unsigned int v1631; // [rsp+318h] [rbp+218h] BYREF
  unsigned int v1632; // [rsp+31Ch] [rbp+21Ch] BYREF
  unsigned int v1633; // [rsp+320h] [rbp+220h] BYREF
  unsigned int v1634; // [rsp+324h] [rbp+224h] BYREF
  _QWORD *v1635; // [rsp+328h] [rbp+228h]
  const wchar_t *v1636; // [rsp+330h] [rbp+230h]
  size_t pcchLength; // [rsp+338h] [rbp+238h] BYREF
  _DWORD *v1638; // [rsp+340h] [rbp+240h] BYREF
  _DWORD *v1639; // [rsp+348h] [rbp+248h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+350h] [rbp+250h]
  _DWORD *v1641; // [rsp+358h] [rbp+258h] BYREF
  size_t v1642; // [rsp+360h] [rbp+260h] BYREF
  _DWORD *v1643; // [rsp+368h] [rbp+268h] BYREF
  _DWORD *v1644; // [rsp+370h] [rbp+270h] BYREF
  _DWORD *v1645; // [rsp+378h] [rbp+278h] BYREF
  LPVOID v1646; // [rsp+380h] [rbp+280h]
  unsigned __int64 v1647; // [rsp+388h] [rbp+288h]
  void *v1648; // [rsp+390h] [rbp+290h] BYREF
  LPVOID v1649; // [rsp+398h] [rbp+298h]
  SIZE_T v1650; // [rsp+3A0h] [rbp+2A0h]
  __int64 *v1651; // [rsp+3A8h] [rbp+2A8h]
  __int64 v1652; // [rsp+3B0h] [rbp+2B0h]
  void *v1653; // [rsp+3B8h] [rbp+2B8h]
  __int64 v1654; // [rsp+3C0h] [rbp+2C0h]
  void *v1655; // [rsp+3C8h] [rbp+2C8h] BYREF
  unsigned int *v1656; // [rsp+3D0h] [rbp+2D0h]
  unsigned int *v1657; // [rsp+3D8h] [rbp+2D8h]
  unsigned int *v1658; // [rsp+3E0h] [rbp+2E0h] BYREF
  unsigned int *v1659; // [rsp+3E8h] [rbp+2E8h] BYREF
  HMODULE phModule; // [rsp+3F0h] [rbp+2F0h] BYREF
  void *v1661; // [rsp+3F8h] [rbp+2F8h] BYREF
  int *v1662; // [rsp+400h] [rbp+300h]
  CortanaAvailability *v1663; // [rsp+408h] [rbp+308h]
  int *v1664; // [rsp+410h] [rbp+310h] BYREF
  void *v1665; // [rsp+418h] [rbp+318h] BYREF
  unsigned __int64 v1666; // [rsp+420h] [rbp+320h] BYREF
  unsigned __int64 v1667; // [rsp+428h] [rbp+328h] BYREF
  unsigned int *v1668; // [rsp+430h] [rbp+330h] BYREF
  int *v1669; // [rsp+438h] [rbp+338h] BYREF
  int *v1670; // [rsp+440h] [rbp+340h]
  int *v1671; // [rsp+448h] [rbp+348h] BYREF
  int *v1672; // [rsp+450h] [rbp+350h]
  const wchar_t *v1673; // [rsp+458h] [rbp+358h]
  int *v1674; // [rsp+460h] [rbp+360h] BYREF
  int *v1675; // [rsp+468h] [rbp+368h]
  LPVOID v1676; // [rsp+470h] [rbp+370h] BYREF
  void *v1677; // [rsp+478h] [rbp+378h]
  int *v1678; // [rsp+480h] [rbp+380h] BYREF
  int *v1679; // [rsp+488h] [rbp+388h]
  int *v1680; // [rsp+490h] [rbp+390h] BYREF
  int *v1681; // [rsp+498h] [rbp+398h]
  __int64 v1682; // [rsp+4A0h] [rbp+3A0h] BYREF
  LPCWSTR lpModuleName; // [rsp+4A8h] [rbp+3A8h]
  LPCWSTR v1684; // [rsp+4B0h] [rbp+3B0h]
  unsigned __int64 v1685; // [rsp+4B8h] [rbp+3B8h]
  void **v1686; // [rsp+4C0h] [rbp+3C0h] BYREF
  LPCWSTR v1687; // [rsp+4C8h] [rbp+3C8h]
  unsigned __int64 v1688; // [rsp+4D0h] [rbp+3D0h]
  _DWORD *v1689; // [rsp+4D8h] [rbp+3D8h] BYREF
  _BYTE *v1690; // [rsp+4E0h] [rbp+3E0h] BYREF
  unsigned __int64 v1691; // [rsp+4E8h] [rbp+3E8h]
  void **v1692; // [rsp+4F0h] [rbp+3F0h] BYREF
  char *v1693; // [rsp+4F8h] [rbp+3F8h] BYREF
  _DWORD *v1694; // [rsp+500h] [rbp+400h] BYREF
  __int64 v1695; // [rsp+508h] [rbp+408h]
  __int64 v1696; // [rsp+510h] [rbp+410h] BYREF
  __int64 v1697; // [rsp+518h] [rbp+418h] BYREF
  __int64 v1698; // [rsp+520h] [rbp+420h] BYREF
  unsigned __int64 v1699; // [rsp+528h] [rbp+428h]
  wchar_t *String1; // [rsp+530h] [rbp+430h] BYREF
  wchar_t *v1701; // [rsp+538h] [rbp+438h] BYREF
  wchar_t *v1702; // [rsp+540h] [rbp+440h] BYREF
  __int64 v1703; // [rsp+548h] [rbp+448h] BYREF
  wchar_t *v1704; // [rsp+550h] [rbp+450h] BYREF
  _OWORD *v1705; // [rsp+558h] [rbp+458h]
  __int64 v1706; // [rsp+560h] [rbp+460h] BYREF
  LPCWSTR v1707; // [rsp+568h] [rbp+468h]
  unsigned __int64 v1708; // [rsp+570h] [rbp+470h]
  _OWORD *v1709; // [rsp+578h] [rbp+478h]
  _QWORD *v1710; // [rsp+580h] [rbp+480h]
  unsigned __int64 v1711; // [rsp+588h] [rbp+488h]
  _DWORD *v1712; // [rsp+590h] [rbp+490h] BYREF
  unsigned int *v1713; // [rsp+598h] [rbp+498h] BYREF
  unsigned __int64 v1714; // [rsp+5A0h] [rbp+4A0h]
  unsigned int *v1715; // [rsp+5A8h] [rbp+4A8h] BYREF
  LPVOID v1716; // [rsp+5B0h] [rbp+4B0h]
  unsigned __int64 v1717; // [rsp+5B8h] [rbp+4B8h]
  void *v1718; // [rsp+5C0h] [rbp+4C0h] BYREF
  LPVOID v1719; // [rsp+5C8h] [rbp+4C8h]
  char *v1720; // [rsp+5D0h] [rbp+4D0h]
  __int64 *v1721; // [rsp+5D8h] [rbp+4D8h]
  __int64 v1722; // [rsp+5E0h] [rbp+4E0h]
  void *v1723; // [rsp+5E8h] [rbp+4E8h]
  __int64 v1724; // [rsp+5F0h] [rbp+4F0h]
  void *v1725; // [rsp+5F8h] [rbp+4F8h] BYREF
  unsigned int *v1726; // [rsp+600h] [rbp+500h]
  unsigned int *v1727; // [rsp+608h] [rbp+508h]
  unsigned int *v1728; // [rsp+610h] [rbp+510h] BYREF
  unsigned int *v1729; // [rsp+618h] [rbp+518h] BYREF
  HMODULE hModule; // [rsp+620h] [rbp+520h] BYREF
  void *v1731; // [rsp+628h] [rbp+528h] BYREF
  int *v1732; // [rsp+630h] [rbp+530h]
  void *v1733; // [rsp+638h] [rbp+538h] BYREF
  unsigned __int64 v1734; // [rsp+640h] [rbp+540h] BYREF
  unsigned __int64 v1735; // [rsp+648h] [rbp+548h] BYREF
  unsigned __int64 v1736; // [rsp+650h] [rbp+550h] BYREF
  _QWORD v1737[2]; // [rsp+658h] [rbp+558h] BYREF
  _QWORD v1738[4]; // [rsp+668h] [rbp+568h] BYREF
  _DWORD *v1739; // [rsp+688h] [rbp+588h] BYREF
  __int128 v1740; // [rsp+690h] [rbp+590h]
  __int128 v1741; // [rsp+6A0h] [rbp+5A0h]
  _OWORD *v1742; // [rsp+6B8h] [rbp+5B8h] BYREF
  unsigned __int64 *v1743; // [rsp+6C8h] [rbp+5C8h] BYREF
  size_t Size; // [rsp+6D0h] [rbp+5D0h] BYREF
  LPVOID lpMem; // [rsp+6D8h] [rbp+5D8h]
  LPVOID v1746[3]; // [rsp+6E0h] [rbp+5E0h]
  _QWORD *v1747; // [rsp+6F8h] [rbp+5F8h] BYREF
  _OWORD *v1748; // [rsp+708h] [rbp+608h] BYREF
  _QWORD *v1749; // [rsp+718h] [rbp+618h] BYREF
  STRSAFE_PCNZWCH *v1750; // [rsp+728h] [rbp+628h] BYREF
  void *v1751; // [rsp+738h] [rbp+638h] BYREF
  int *v1752; // [rsp+748h] [rbp+648h] BYREF
  _DWORD *v1753; // [rsp+758h] [rbp+658h] BYREF
  size_t v1754; // [rsp+760h] [rbp+660h] BYREF
  void *v1755; // [rsp+768h] [rbp+668h]
  __int128 v1756; // [rsp+770h] [rbp+670h]
  __int128 v1757; // [rsp+780h] [rbp+680h] BYREF
  LPVOID v1758[3]; // [rsp+790h] [rbp+690h]
  int *v1759; // [rsp+7A8h] [rbp+6A8h] BYREF
  _QWORD v1760[2]; // [rsp+7B0h] [rbp+6B0h] BYREF
  unsigned int v1761; // [rsp+7C0h] [rbp+6C0h]
  unsigned int v1762; // [rsp+7C4h] [rbp+6C4h]
  int v1763; // [rsp+7C8h] [rbp+6C8h]
  _QWORD v1764[2]; // [rsp+7D0h] [rbp+6D0h] BYREF
  unsigned int v1765; // [rsp+7E0h] [rbp+6E0h]
  unsigned int v1766; // [rsp+7E4h] [rbp+6E4h]
  int v1767; // [rsp+7E8h] [rbp+6E8h]
  _BYTE v1768[24]; // [rsp+7F0h] [rbp+6F0h] BYREF
  __int64 v1769; // [rsp+808h] [rbp+708h]
  _BYTE v1770[4]; // [rsp+860h] [rbp+760h] BYREF
  int v1771; // [rsp+864h] [rbp+764h]
  int v1772; // [rsp+868h] [rbp+768h]
  __int16 v1773; // [rsp+872h] [rbp+772h]
  __int64 v1774; // [rsp+878h] [rbp+778h]
  _BYTE v1775[4]; // [rsp+8D0h] [rbp+7D0h] BYREF
  int v1776; // [rsp+8D4h] [rbp+7D4h]
  int v1777; // [rsp+8D8h] [rbp+7D8h]
  unsigned __int16 *v1778; // [rsp+8E8h] [rbp+7E8h]
  _BYTE v1779[24]; // [rsp+940h] [rbp+840h] BYREF
  char *v1780; // [rsp+958h] [rbp+858h]
  _BYTE v1781[4]; // [rsp+9B0h] [rbp+8B0h] BYREF
  int v1782; // [rsp+9B4h] [rbp+8B4h]
  int v1783; // [rsp+9B8h] [rbp+8B8h]
  unsigned __int16 *v1784; // [rsp+9C8h] [rbp+8C8h]
  _BYTE v1785[24]; // [rsp+A20h] [rbp+920h] BYREF
  __int64 v1786; // [rsp+A38h] [rbp+938h]
  _BYTE v1787[4]; // [rsp+A90h] [rbp+990h] BYREF
  int v1788; // [rsp+A94h] [rbp+994h]
  int v1789; // [rsp+A98h] [rbp+998h]
  void *v1790; // [rsp+AA8h] [rbp+9A8h]
  _BYTE v1791[4]; // [rsp+B00h] [rbp+A00h] BYREF
  int v1792; // [rsp+B04h] [rbp+A04h]
  int v1793; // [rsp+B08h] [rbp+A08h]
  void *v1794; // [rsp+B18h] [rbp+A18h]
  _BYTE v1795[24]; // [rsp+B70h] [rbp+A70h] BYREF
  __int64 v1796; // [rsp+B88h] [rbp+A88h]
  int v1797; // [rsp+BE0h] [rbp+AE0h] BYREF
  int v1798; // [rsp+BE4h] [rbp+AE4h]
  void *v1799; // [rsp+BE8h] [rbp+AE8h]
  void *v1800; // [rsp+BF0h] [rbp+AF0h]
  void *v1801; // [rsp+BF8h] [rbp+AF8h]
  unsigned __int16 *v1802; // [rsp+C00h] [rbp+B00h]
  unsigned __int16 *v1803; // [rsp+C08h] [rbp+B08h]
  __int64 v1804; // [rsp+C10h] [rbp+B10h]
  int v1805; // [rsp+C18h] [rbp+B18h]
  __int128 v1806; // [rsp+C1Ch] [rbp+B1Ch] BYREF
  __int128 v1807; // [rsp+C2Ch] [rbp+B2Ch] BYREF
  unsigned int v1808; // [rsp+C3Ch] [rbp+B3Ch] BYREF
  unsigned int v1809; // [rsp+C40h] [rbp+B40h]
  unsigned int v1810; // [rsp+C44h] [rbp+B44h]
  unsigned int v1811; // [rsp+C48h] [rbp+B48h]
  __int64 v1812; // [rsp+C50h] [rbp+B50h]
  unsigned __int64 v1813; // [rsp+C58h] [rbp+B58h]
  unsigned __int64 v1814; // [rsp+C60h] [rbp+B60h]
  __int64 v1815; // [rsp+C68h] [rbp+B68h]
  __int128 v1816; // [rsp+C70h] [rbp+B70h] BYREF
  __int128 v1817; // [rsp+C80h] [rbp+B80h]
  __int128 v1818; // [rsp+C90h] [rbp+B90h] BYREF
  __int128 v1819; // [rsp+CA0h] [rbp+BA0h] BYREF
  __int64 v1820; // [rsp+CB0h] [rbp+BB0h] BYREF
  unsigned int v1821; // [rsp+CB8h] [rbp+BB8h]
  int v1822; // [rsp+CBCh] [rbp+BBCh]
  __int128 v1823; // [rsp+CC0h] [rbp+BC0h] BYREF
  char v1824[12]; // [rsp+CD0h] [rbp+BD0h] BYREF
  unsigned int v1825; // [rsp+CDCh] [rbp+BDCh]
  __int128 v1826; // [rsp+CF0h] [rbp+BF0h] BYREF
  __int128 v1827; // [rsp+D00h] [rbp+C00h] BYREF
  __int64 v1828; // [rsp+D10h] [rbp+C10h]
  __int128 v1829; // [rsp+D18h] [rbp+C18h] BYREF
  __int128 v1830; // [rsp+D28h] [rbp+C28h] BYREF
  __int64 v1831; // [rsp+D38h] [rbp+C38h]
  __int128 v1832; // [rsp+D40h] [rbp+C40h] BYREF
  __int128 v1833; // [rsp+D50h] [rbp+C50h]
  __int64 v1834; // [rsp+D60h] [rbp+C60h]
  int v1835; // [rsp+D68h] [rbp+C68h]
  __int128 v1836; // [rsp+D70h] [rbp+C70h] BYREF
  __int128 v1837; // [rsp+D80h] [rbp+C80h]
  __int64 v1838; // [rsp+D90h] [rbp+C90h]
  int v1839; // [rsp+D98h] [rbp+C98h]
  __int128 v1840; // [rsp+DA0h] [rbp+CA0h] BYREF
  __int128 v1841; // [rsp+DB0h] [rbp+CB0h]
  __int64 v1842; // [rsp+DC0h] [rbp+CC0h]
  int v1843; // [rsp+DC8h] [rbp+CC8h]
  __int128 v1844; // [rsp+DD0h] [rbp+CD0h] BYREF
  __int128 v1845; // [rsp+DE0h] [rbp+CE0h]
  __int64 v1846; // [rsp+DF0h] [rbp+CF0h]
  int v1847; // [rsp+DF8h] [rbp+CF8h]
  __int128 v1848; // [rsp+E00h] [rbp+D00h] BYREF
  __int128 v1849; // [rsp+E10h] [rbp+D10h]
  __int64 v1850; // [rsp+E20h] [rbp+D20h]
  int v1851; // [rsp+E28h] [rbp+D28h]
  _DWORD v1852[6]; // [rsp+E30h] [rbp+D30h] BYREF
  char v1853; // [rsp+E4Ah] [rbp+D4Ah]
  unsigned __int16 v1854[34]; // [rsp+E4Ch] [rbp+D4Ch] BYREF
  _DWORD v1855[6]; // [rsp+E90h] [rbp+D90h] BYREF
  char v1856; // [rsp+EAAh] [rbp+DAAh]
  unsigned __int16 v1857[34]; // [rsp+EACh] [rbp+DACh] BYREF
  _DWORD v1858[6]; // [rsp+EF0h] [rbp+DF0h] BYREF
  char v1859; // [rsp+F0Ah] [rbp+E0Ah]
  unsigned __int16 v1860[34]; // [rsp+F0Ch] [rbp+E0Ch] BYREF
  _BYTE v1861[68]; // [rsp+F50h] [rbp+E50h] BYREF
  __int16 v1862; // [rsp+F94h] [rbp+E94h]
  unsigned __int16 v1863; // [rsp+FF6h] [rbp+EF6h]
  __int64 v1864; // [rsp+FFCh] [rbp+EFCh]
  _QWORD v1865[6]; // [rsp+1030h] [rbp+F30h] BYREF
  int v1866; // [rsp+1060h] [rbp+F60h] BYREF
  __int128 v1867; // [rsp+1068h] [rbp+F68h]
  __int128 v1868; // [rsp+1078h] [rbp+F78h]
  __int128 v1869; // [rsp+1088h] [rbp+F88h]
  __int64 v1870; // [rsp+1098h] [rbp+F98h]
  _QWORD v1871[20]; // [rsp+10A0h] [rbp+FA0h] BYREF
  _WORD v1872[8]; // [rsp+1140h] [rbp+1040h] BYREF
  _BYTE v1873[176]; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR Filename[264]; // [rsp+1200h] [rbp+1100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1448h] [rbp+1348h]

  v1663 = this;
  v1664 = 0LL;
  v1577 = 1;
  v1580 = 0;
  v1581 = 0;
  v1582 = 0;
  v1515 = 0LL;
  v1583 = 0;
  while ( _InterlockedCompareExchange(&dword_1805A0710, 1, 0) )
    ;
  v2 = dword_18059F558;
  v1522 = -1;
  if ( dword_18059F558 )
    goto LABEL_46;
  v1480 = 0;
  lpModuleName = 0LL;
  v1699 = 0LL;
  v3 = (WCHAR *)MemoryAlloc(0x338uLL);
  if ( v3 )
  {
    v4 = (char *)v3 + 7;
    v5 = 0;
    v6 = (unsigned __int8 *)&unk_1804CAD42;
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
      v17 = v16 ^ v8 ^ v15 ^ 0xAC987321;
      v18 = (__ROL4__(v17, 10) + 4991 * __ROL4__(v17 + 1419157410, 5)) ^ v15;
      v19 = (43881 * __ROR4__(v18 + 133239679, 9) - __ROL4__(v18, 2)) ^ v17;
      v20 = (24670 * v19 - (v19 >> 13) - 123127970) ^ v18;
      v21 = (2033 * __ROL4__(v20 ^ 0xAB69, 6) - __ROL4__(v20, 2)) ^ v19;
      v22 = (133239679 - (v21 ^ 0xAB69605E)) ^ v20;
      v23 = (43881 * (v22 ^ 0x137F)) ^ __ROR4__(v22, 6) ^ v21;
      v24 = (__ROL4__(v23, 2) + 24670 * __ROR4__(v23 + 133239679, 15)) ^ v22;
      v25 = (2033 * __ROR4__(v24 + 1419157410, 14) - __ROL4__(v24, 8)) ^ v23;
      v26 = __ROR4__(v25, 10) ^ (4991 * __ROR4__(v25 ^ 0xAB69605E, 12)) ^ v24;
      v27 = v25 ^ (v26 >> 10) ^ (43881 * (v26 ^ 0x7F1));
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
      v1699 = 824LL;
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
      HIBYTE(lpModuleName[v1699 / 2 - 1]) = 0;
      memset_0(&unk_1805A0520, 0, 0x60uLL);
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
        v60 = (char *)&unk_1805A0520 + 24 * v54;
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
            ProcAddress = GetProcAddress(*(HMODULE *)v60, v66);
            if ( !ProcAddress )
              goto LABEL_37;
            off_1805960F0[v1480] = ProcAddress;
          }
          ++v1480;
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
    v2 = dword_18059F558;
LABEL_46:
    dword_18059F558 = v2 + 1;
    goto LABEL_47;
  }
  v69 = 4LL;
  v70 = (HMODULE *)&unk_1805A0520;
  do
  {
    if ( *v70 )
      FreeLibrary(*v70);
    v70 += 3;
    --v69;
  }
  while ( v69 );
  memset_0(&unk_1805A0520, 0, 0x60uLL);
  memcpy_0(off_1805960F0, off_180472760, 0x170uLL);
LABEL_47:
  _InterlockedExchange(&dword_1805A0710, 0);
  String1 = 0LL;
  v71 = 0;
  v1701 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_95;
  v73 = off_180596200[0]();
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
  v1702 = 0LL;
  v75 = 0LL;
  for ( j = 0LL; ; v1702 = j )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180596220[0])(
           v73,
           2LL,
           j,
           v75,
           &v1584) )
    {
      String1 = j;
      goto LABEL_66;
    }
    v77 = GetLastError();
    if ( v77 != 122 )
      break;
    if ( j )
      goto LABEL_60;
    j = (wchar_t *)MemoryAlloc(v1584);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1702);
    if ( !j )
    {
      LastError = -2147024882;
LABEL_66:
      v1702 = 0LL;
      goto LABEL_67;
    }
    v75 = v1584;
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
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1702);
  if ( LastError >= 0 )
  {
    v78 = off_180596218[0];
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
    v1704 = 0LL;
    LastError = 0;
    v82 = 0LL;
    for ( k = 0LL; ; v1704 = k )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180596220[0])(
             v80,
             2LL,
             k,
             v82,
             &v1586) )
      {
        v1701 = k;
        goto LABEL_86;
      }
      v84 = GetLastError();
      if ( v84 != 122 )
        break;
      if ( k )
        goto LABEL_80;
      k = (wchar_t *)MemoryAlloc(v1586);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1704);
      if ( !k )
      {
        LastError = -2147024882;
LABEL_86:
        v1704 = 0LL;
        goto LABEL_87;
      }
      v82 = v1586;
    }
    if ( !v84 )
    {
LABEL_80:
      LastError = -2147467259;
      goto LABEL_87;
    }
    LastError = v84 > 0 ? (unsigned __int16)v84 | 0x80070000 : v84;
LABEL_87:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1704);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1701 && !wcscmp_0(v1701, L"Default") )
      {
        v1521 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1521, 4LL) )
          goto LABEL_49;
        if ( (v1521 & 0xF) == 0 )
          v71 = 1;
      }
LABEL_95:
      v1583 = v71;
    }
  }
LABEL_96:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1701);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&String1);
  v86 = v1583;
  if ( LastError < 0 )
    v86 = 0;
  v1583 = v86;
  v1471 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1515);
  if ( !v1471 )
  {
    v1515 = 0LL;
    v87 = -2147024882;
LABEL_100:
    v88 = v1521;
    goto LABEL_101;
  }
  v93 = 0LL;
  lpMem = 0LL;
  v94 = 0LL;
  v1587 = 0;
  v1601 = 0;
  v1515 = v1471;
  v1705 = &unk_18059E920;
  *(_OWORD *)v1746 = 0LL;
  v95 = GetProcessHeap();
  v96 = (unsigned __int16 *)HeapAlloc(v95, 8u, 0xA0uLL);
  v87 = -1073741801;
  if ( !v96 )
  {
LABEL_114:
    v1507 = v87;
    goto LABEL_201;
  }
  v97 = v1705;
  v93 = v96;
  v1415 = v96;
  *(_OWORD *)v96 = *v1705;
  *((_OWORD *)v96 + 1) = v97[1];
  *((_OWORD *)v96 + 2) = v97[2];
  *((_OWORD *)v96 + 3) = v97[3];
  *((_OWORD *)v96 + 4) = v97[4];
  *((_OWORD *)v96 + 5) = v97[5];
  *((_OWORD *)v96 + 6) = v97[6];
  *((_OWORD *)v96 + 7) = v97[7];
  *((_OWORD *)v96 + 8) = v97[8];
  *((_OWORD *)v96 + 9) = v97[9];
  v1635 = &unk_18059E910;
  v98 = GetProcessHeap();
  v94 = (unsigned __int16 *)HeapAlloc(v98, 8u, 8uLL);
  if ( !v94 )
  {
    v1507 = -1073741801;
    v94 = 0LL;
    goto LABEL_201;
  }
  v1398 = v94;
  *(_QWORD *)v94 = *v1635;
  v1636 = (const wchar_t *)__rdtsc();
  dwBytes = 0;
  v99 = RtlUIntAdd(4LL, 4LL, &dwBytes_4);
  v100 = v1626;
  v87 = v99;
  v1507 = v99;
  if ( v99 >= 0 )
    v100 = dwBytes_4;
  v1626 = v100;
  if ( v99 >= 0 )
  {
    v101 = RtlUIntAdd(0LL, v100, &dwBytes);
    v87 = v101 | 0x10000000;
    v1507 = v101 | 0x10000000;
    if ( v101 >= 0 )
    {
      v103 = RtlUIntAdd(v102, 160LL, &v1627);
      v1507 = v103;
      v87 = v103;
      if ( v103 >= 0 )
        v100 = v1627;
      v1626 = v100;
      if ( v103 >= 0 )
      {
        v104 = RtlUIntAdd(dwBytes, v100, &dwBytes);
        v87 = v106 | v104;
        v1507 = v106 | v104;
        if ( (v106 | v104) >= 0 )
        {
          v107 = RtlUIntAdd(v105, v105 + 4, &v1629);
          v1507 = v107;
          v87 = v107;
          if ( v107 >= 0 )
            v100 = v1629;
          v1626 = v100;
          if ( v107 >= 0 )
          {
            v108 = RtlUIntAdd(dwBytes, v100, &dwBytes);
            v87 = v110 | v108;
            v1507 = v110 | v108;
            if ( (v110 | v108) >= 0 )
            {
              v111 = RtlUIntAdd(v109, v109 + 4, &v1630);
              v1507 = v111;
              v87 = v111;
              if ( v111 >= 0 )
                v100 = v1630;
              v1626 = v100;
              if ( v111 >= 0 )
              {
                v112 = RtlUIntAdd(dwBytes, v100, &dwBytes);
                v87 = v115 | v112;
                v1507 = v115 | v112;
                if ( (v115 | v112) >= 0 )
                {
                  if ( StringCchLengthW(v114, v113, &pcchLength) < 0 )
                  {
                    v87 = -1073741762;
                    goto LABEL_114;
                  }
                  v117 = RtlUIntAdd(v116, (unsigned int)(2 * ++pcchLength), &v1631);
                  v1507 = v117;
                  v87 = v117;
                  if ( v117 >= 0 )
                    v100 = v1631;
                  v1626 = v100;
                  if ( v117 < 0 )
                    goto LABEL_201;
                  v118 = RtlUIntAdd(dwBytes, v100, &dwBytes);
                  v87 = v120 | v118;
                  v1507 = v120 | v118;
                  if ( (v120 | v118) < 0 )
                    goto LABEL_201;
                  v121 = RtlUIntAdd(v119, v119, &v1632);
                  v1507 = v121;
                  v87 = v121;
                  if ( v121 >= 0 )
                    v100 = v1632;
                  v1626 = v100;
                  if ( v121 < 0 )
                    goto LABEL_201;
                  v122 = RtlUIntAdd(dwBytes, v100, &dwBytes);
                  v87 = v124 | v122;
                  v1507 = v124 | v122;
                  if ( (v124 | v122) < 0 )
                    goto LABEL_201;
                  v125 = RtlUIntAdd(v123, v123, &v1633);
                  v1507 = v125;
                  v87 = v125;
                  if ( v125 >= 0 )
                    v100 = v1633;
                  v1626 = v100;
                  if ( v125 < 0 )
                    goto LABEL_201;
                  v126 = RtlUIntAdd(dwBytes, v100, &dwBytes);
                  v87 = v127 | v126;
                  v1507 = v127 | v126;
                  if ( (v127 | v126) < 0 )
                    goto LABEL_201;
                  HIDWORD(Size) = dwBytes;
                  v128 = dwBytes;
                  v129 = GetProcessHeap();
                  v130 = HeapAlloc(v129, 8u, v128);
                  if ( !v130 )
                  {
                    v87 = -1073741801;
                    goto LABEL_114;
                  }
                  lpMem = v130;
                  LODWORD(Size) = 0;
                  v1526 = 0;
                  v87 = RtlULongLongAdd(v130, 4LL, &v1739);
                  v1507 = v87;
                  v132 = 0;
                  if ( v87 >= 0 )
                  {
                    if ( v130 + 2 > (_DWORD *)((char *)v130 + HIDWORD(Size)) )
                    {
LABEL_151:
                      v87 = -1073741789;
                      goto LABEL_114;
                    }
                    v133 = v1739;
                    *v130 = v131;
                    *v133 = v1526;
                    v132 = Size + 1;
                    LODWORD(Size) = Size + 1;
                  }
                  if ( v87 < 0 )
                    goto LABEL_201;
                  if ( lpMem )
                  {
                    v137 = lpMem;
                    v1638 = lpMem;
                    if ( v132 )
                    {
                      do
                      {
                        v87 = RtlUIntAdd((unsigned int)v131, (unsigned int)*v137, &v1529);
                        v1507 = v87;
                        if ( v87 >= 0 )
                          v138 = v1529;
                        v1528 = v138;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v87 = RtlULongLongAdd(v137, v138, &v1638);
                        v1507 = v87;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v137 = v1638;
                      }
                      while ( v139 + 1 < (unsigned int)Size );
                    }
                    v87 = RtlULongLongAdd(v137, v131, &v1748);
                    v1507 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    if ( v137 + 41 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                      goto LABEL_151;
                    v140 = v1748;
                    *v137 = 160;
                    *v140 = *(_OWORD *)v96;
                    v140[1] = *((_OWORD *)v96 + 1);
                    v140[2] = *((_OWORD *)v96 + 2);
                    v140[3] = *((_OWORD *)v96 + 3);
                    v140[4] = *((_OWORD *)v96 + 4);
                    v140[5] = *((_OWORD *)v96 + 5);
                    v140[6] = *((_OWORD *)v96 + 6);
                    v140[7] = *((_OWORD *)v96 + 7);
                    v140[8] = *((_OWORD *)v96 + 8);
                    v140[9] = *((_OWORD *)v96 + 9);
                    LODWORD(Size) = Size + 1;
                  }
                  else
                  {
                    v134 = RtlUIntAdd((unsigned int)v131, 160LL, &v1527);
                    v135 = v1528;
                    v87 = v134;
                    v1507 = v134;
                    if ( v134 >= 0 )
                      v135 = v1527;
                    v1528 = v135;
                    if ( v134 < 0 )
                      goto LABEL_201;
                    v87 = RtlUIntAdd(HIDWORD(Size), v135, (char *)&Size + 4);
                    v1507 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    LODWORD(Size) = Size + 1;
                  }
                  if ( lpMem )
                  {
                    v143 = lpMem;
                    v1639 = lpMem;
                    if ( (_DWORD)Size )
                    {
                      while ( 1 )
                      {
                        v144 = RtlUIntAdd((unsigned int)v136, (unsigned int)*v143, &v1532);
                        v1507 = v144;
                        v87 = v144;
                        if ( v144 >= 0 )
                          v145 = v1532;
                        v1531 = v145;
                        if ( v144 < 0 )
                          break;
                        v1507 = RtlULongLongAdd(v143, v145, &v1639);
                        v87 = v1507;
                        if ( v1507 < 0 )
                          break;
                        v143 = v1639;
                        if ( v146 + 1 >= (unsigned int)Size )
                          goto LABEL_181;
                      }
                    }
                    else
                    {
LABEL_181:
                      v1507 = RtlULongLongAdd(v143, v136, &v1749);
                      v87 = v1507;
                      if ( v1507 >= 0 )
                      {
                        if ( v143 + 3 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                          goto LABEL_151;
                        v147 = v1749;
                        *v143 = 8;
                        *v147 = *(_QWORD *)v94;
                        LODWORD(Size) = Size + 1;
                      }
                    }
                  }
                  else
                  {
                    v141 = RtlUIntAdd((unsigned int)v136, 8LL, &v1530);
                    v142 = v1531;
                    v87 = v141;
                    v1507 = v141;
                    if ( v141 >= 0 )
                      v142 = v1530;
                    v1531 = v142;
                    if ( v141 >= 0 )
                    {
                      v1507 = RtlUIntAdd(HIDWORD(Size), v142, (char *)&Size + 4);
                      v87 = v1507;
                      if ( v1507 < 0 )
                        goto LABEL_201;
                      LODWORD(Size) = Size + 1;
                      goto LABEL_185;
                    }
                  }
                  if ( v87 < 0 )
                    goto LABEL_201;
LABEL_185:
                  psz = v1636;
                  if ( lpMem )
                  {
                    v152 = lpMem;
                    v1641 = lpMem;
                    if ( (_DWORD)Size )
                    {
                      do
                      {
                        v153 = RtlUIntAdd((unsigned int)v136, (unsigned int)*v152, &v1535);
                        v1507 = v153;
                        v87 = v153;
                        if ( v153 >= 0 )
                          v154 = v1535;
                        v1534 = v154;
                        if ( v153 < 0 )
                          goto LABEL_201;
                        v1507 = RtlULongLongAdd(v152, v154, &v1641);
                        v87 = v1507;
                        if ( v1507 < 0 )
                          goto LABEL_201;
                        v152 = v1641;
                      }
                      while ( v155 + 1 < (unsigned int)Size );
                    }
                    v1507 = RtlULongLongAdd(v152, v136, &v1750);
                    v87 = v1507;
                    if ( v1507 < 0 )
                      goto LABEL_201;
                    if ( v152 + 3 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                    {
                      v87 = -1073741789;
LABEL_200:
                      v1507 = v87;
                      goto LABEL_201;
                    }
                    v164 = v1750;
                    *v152 = 8;
                    v151 = psz;
                    *v164 = psz;
                    LODWORD(Size) = Size + 1;
                  }
                  else
                  {
                    v148 = RtlUIntAdd((unsigned int)v136, 8LL, &v1533);
                    v149 = v1534;
                    v87 = v148;
                    v1507 = v148;
                    if ( v148 >= 0 )
                      v149 = v1533;
                    v1534 = v149;
                    if ( v148 < 0 )
                      goto LABEL_201;
                    v1507 = RtlUIntAdd(HIDWORD(Size), v149, (char *)&Size + 4);
                    v87 = v1507;
                    if ( v1507 < 0 )
                      goto LABEL_201;
                    LODWORD(Size) = Size + 1;
                  }
                  if ( StringCchLengthW(v151, v150, &v1642) < 0 )
                  {
                    v87 = -1073741762;
                    goto LABEL_200;
                  }
                  v1507 = RtlULongLongAdd(v1642, 1LL, &v1642);
                  v87 = v1507;
                  if ( v1507 < 0 )
                    goto LABEL_201;
                  if ( 2 * (_DWORD)v1642 )
                  {
                    if ( lpMem )
                    {
                      v168 = lpMem;
                      v1643 = lpMem;
                      if ( (_DWORD)Size )
                      {
                        while ( 1 )
                        {
                          v169 = RtlUIntAdd(4LL, (unsigned int)*v168, &v1538);
                          v1507 = v169;
                          v87 = v169;
                          if ( v169 >= 0 )
                            v171 = v1538;
                          v1537 = v171;
                          if ( v169 < 0 )
                            break;
                          v1507 = RtlULongLongAdd(v168, v171, &v1643);
                          v87 = v1507;
                          if ( v1507 < 0 )
                            goto LABEL_237;
                          v168 = v1643;
                          if ( v172 + 1 >= (unsigned int)Size )
                            goto LABEL_233;
                        }
                        v165 = v170;
                      }
                      else
                      {
LABEL_233:
                        v1507 = RtlULongLongAdd(v168, 4LL, &v1751);
                        v87 = v1507;
                        if ( v1507 < 0 )
                          goto LABEL_201;
                        if ( (char *)v168 + v173 + 4 <= (char *)lpMem + HIDWORD(Size) )
                        {
                          v174 = v1751;
                          *v168 = v173;
                          memcpy_0(v174, L"Cortana-AllowCortana-Enabled", (unsigned int)v173);
                          LODWORD(Size) = Size + 1;
LABEL_237:
                          v165 = 4LL;
                        }
                        else
                        {
                          v87 = -1073741789;
                          v1507 = -1073741789;
                        }
                      }
                    }
                    else
                    {
                      v166 = RtlUIntAdd((unsigned int)v165, (unsigned int)(2 * v1642), &v1536);
                      v167 = v1537;
                      v87 = v166;
                      v1507 = v166;
                      if ( v166 >= 0 )
                        v167 = v1536;
                      v1537 = v167;
                      if ( v166 < 0 )
                        goto LABEL_201;
                      v87 = RtlUIntAdd(HIDWORD(Size), v167, (char *)&Size + 4);
                      v1507 = v87;
                      if ( v87 < 0 )
                        goto LABEL_201;
                      LODWORD(Size) = Size + 1;
                      v87 = 0;
                      v1507 = 0;
                    }
                  }
                  else
                  {
                    v87 = -1073741811;
                    v1507 = -1073741811;
                  }
                  if ( v87 < 0 )
                    goto LABEL_201;
                  v1539 = v1583;
                  if ( lpMem )
                  {
                    v178 = lpMem;
                    v1644 = lpMem;
                    if ( (_DWORD)Size )
                    {
                      do
                      {
                        v87 = RtlUIntAdd((unsigned int)v165, (unsigned int)*v178, &v1542);
                        v1507 = v87;
                        if ( v87 >= 0 )
                          v179 = v1542;
                        v1541 = v179;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v87 = RtlULongLongAdd(v178, v179, &v1644);
                        v1507 = v87;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v178 = v1644;
                      }
                      while ( v180 + 1 < (unsigned int)Size );
                    }
                    v87 = RtlULongLongAdd(v178, v165, &v1752);
                    v1507 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    if ( v178 + 2 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                      goto LABEL_255;
                    v181 = v1752;
                    *v178 = v177;
                    *v181 = v1539;
                    LODWORD(Size) = Size + 1;
                  }
                  else
                  {
                    v175 = RtlUIntAdd((unsigned int)v165, (unsigned int)v165, &v1540);
                    v176 = v1541;
                    v87 = v175;
                    v1507 = v175;
                    if ( v175 >= 0 )
                      v176 = v1540;
                    v1541 = v176;
                    if ( v175 < 0 )
                      goto LABEL_201;
                    v87 = RtlUIntAdd(HIDWORD(Size), v176, (char *)&Size + 4);
                    v1507 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    LODWORD(Size) = Size + 1;
                  }
                  v1543 = v177;
                  if ( !lpMem )
                  {
                    v182 = RtlUIntAdd((unsigned int)v177, (unsigned int)v177, &v1544);
                    v183 = v1545;
                    v87 = v182;
                    v1507 = v182;
                    if ( v182 >= 0 )
                      v183 = v1544;
                    v1545 = v183;
                    if ( v182 < 0 )
                      goto LABEL_699;
                    v1507 = RtlUIntAdd(HIDWORD(Size), v183, (char *)&Size + 4);
                    v87 = v1507;
                    if ( v1507 < 0 )
                      goto LABEL_699;
                    LODWORD(Size) = Size + 1;
LABEL_272:
                    v190 = RtlUIntAdd(v184, v184, &v1547);
                    v192 = v1548;
                    v87 = v190;
                    v1507 = v190;
                    if ( v190 >= 0 )
                      v192 = v1547;
                    v1548 = v192;
                    if ( v190 < 0 )
                      goto LABEL_297;
                    v1549 = v192;
                    v193 = RtlUIntAdd(v191, 8LL, &v1550);
                    v1507 = v193;
                    v195 = v194;
                    v87 = v193;
                    if ( v193 >= 0 )
                      v195 = v1550;
                    v1548 = v195;
                    if ( v193 < 0 )
                      goto LABEL_297;
                    v1507 = RtlUIntAdd(v194, v195, &v1549);
                    v87 = v1507;
                    if ( v1507 < 0 )
                      goto LABEL_297;
                    v197 = RtlUIntAdd(v196, v196, &v1551);
                    v1507 = v197;
                    v87 = v197;
                    if ( v197 >= 0 )
                      v195 = v1551;
                    v1548 = v195;
                    if ( v197 < 0 )
                      goto LABEL_297;
                    v1507 = RtlUIntAdd(v1549, v195, &v1549);
                    v87 = v1507;
                    if ( v1507 < 0 )
                      goto LABEL_297;
                    v199 = RtlUIntAdd(v198, v198, &v1552);
                    v1507 = v199;
                    v87 = v199;
                    if ( v199 >= 0 )
                      v195 = v1552;
                    v1548 = v195;
                    if ( v199 < 0 )
                      goto LABEL_297;
                    v1507 = RtlUIntAdd(v1549, v195, &v1549);
                    v87 = v1507;
                    if ( v1507 < 0 )
                      goto LABEL_297;
                    v201 = RtlUIntAdd(v200, v200, &v1553);
                    v1507 = v201;
                    v87 = v201;
                    if ( v201 >= 0 )
                      v195 = v1553;
                    v1548 = v195;
                    if ( v201 < 0 )
                      goto LABEL_297;
                    v1507 = RtlUIntAdd(v1549, v195, &v1549);
                    v87 = v1507;
                    if ( v1507 < 0 )
                      goto LABEL_297;
                    v203 = RtlUIntAdd(v202, v202, &v1520);
                    v1507 = v203;
                    v87 = v203;
                    if ( v203 >= 0 )
                      v195 = v1520;
                    v1548 = v195;
                    if ( v203 < 0 )
                    {
LABEL_297:
                      v204 = v1520;
                    }
                    else
                    {
                      v87 = RtlUIntAdd(v1549, v195, &v1549);
                      v1507 = v87;
                      v204 = v1520;
                      if ( v87 >= 0 )
                        v204 = v1549;
                    }
                    v1384 = v204;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    v205 = 0LL;
                    v1430 = 0LL;
                    v206 = 0;
                    v1646 = 0LL;
                    v1444 = 0LL;
                    v207 = 0;
                    v1440 = 0LL;
                    v1567 = 0;
                    v1490 = 0LL;
                    v1510 = 0LL;
                    v1554 = 0;
                    v1647 = __rdtsc();
                    v1555 = 8;
                    v208 = RtlUIntAdd(8LL, HIDWORD(Size), &v1555);
                    if ( v208 >= 0 )
                    {
                      v209 = (v1555 + 7) & 0xFFFFFFF8;
                      if ( v209 >= v1555 )
                      {
                        v1555 = (v1555 + 7) & 0xFFFFFFF8;
                        v210 = v209;
                        v211 = GetProcessHeap();
                        v212 = HeapAlloc(v211, 8u, v210);
                        if ( v212 )
                        {
                          v1648 = v212;
                          *v212 = Size;
                          v208 = RtlULongLongAdd(v212, 4LL, &v1648);
                          if ( v208 >= 0 )
                          {
                            v214 = v1648;
                            *(_DWORD *)v1648 = HIDWORD(Size);
                            v208 = RtlULongLongAdd(v214, v213, &v1648);
                            if ( v208 >= 0 )
                            {
                              *(_QWORD *)((char *)v212 + v1555 - 8) = v1647;
                              memcpy_0(v1648, lpMem, HIDWORD(Size));
                              v206 = v1555;
                              v1430 = (unsigned __int16 *)v212;
                              v212 = 0LL;
                            }
                          }
                          if ( v212 )
                          {
                            v215 = GetProcessHeap();
                            HeapFree(v215, 0, v212);
                          }
                          v205 = v1430;
                        }
                        else
                        {
                          v208 = -1073741801;
                          v205 = 0LL;
                        }
                      }
                      else
                      {
                        v208 = -1073741675;
                      }
                    }
                    v87 = v208 | 0x10000000;
                    v1507 = v87;
                    if ( v87 < 0 )
                      goto LABEL_587;
                    v1649 = 0LL;
                    v216 = 0LL;
                    if ( v205 )
                    {
                      v218 = v206;
                      v1474 = v206;
                      if ( v206 && (v1462 = v206 + 8LL, v219 = MemoryAlloc(v1462), v220 = 0, v219) )
                      {
                        v221 = 0;
                        for ( m = 0LL; m < v206; v220 ^= *((_BYTE *)v205 + m++) )
                          ;
                        v1382 = v220;
                        v223 = -1;
                        v1813 = 0xC81ECB17B1B54A58uLL;
                        v1508 = 0;
                        v1481 = 0;
                        v224 = v205;
                        v225 = v219;
                        v226 = 0;
                        v227 = v218 & 7;
                        if ( (v218 & 7) != 0 )
                        {
                          v228 = 0;
                          v1481 = 0;
                          v229 = 56;
                          do
                          {
                            v230 = *(unsigned __int8 *)v224;
                            v224 = (unsigned __int16 *)((char *)v224 + 1);
                            if ( v228 >= 4 )
                            {
                              v231 = v1481;
                              v221 |= v230 << v229;
                            }
                            else
                            {
                              v231 = (v230 << (v229 - 32)) | v1481;
                              v1481 = v231;
                            }
                            ++v228;
                            v229 -= 8;
                          }
                          while ( v228 < (int)v227 );
                          v1508 = v221;
                          v226 = v231 ^ 0xB17A307A;
                          v232 = v221 ^ 0x42F6B18D;
                          v233 = 0;
                          v234 = v231 ^ 0xB17A307A;
                          v235 = v232;
                          if ( (v218 & 7) != 0 )
                          {
                            do
                            {
                              if ( v233 >= 4 )
                              {
                                v235 = __ROL4__(v235, 8);
                                v236 = v235;
                              }
                              else
                              {
                                v234 = __ROL4__(v234, 8);
                                v236 = v234;
                              }
                              *v225 = v236;
                              ++v233;
                              ++v225;
                            }
                            while ( v233 < (int)v227 );
                          }
                          if ( v227 <= 4 )
                          {
                            v223 = 0;
                            if ( v227 < 4 )
                              v226 = v226 >> (8 * (4 - v227)) << (8 * (4 - v227));
                          }
                          else
                          {
                            v223 = v232 >> (8 * (8 - v227)) << (8 * (8 - v227));
                          }
                        }
                        v237 = v218 >> 3;
                        if ( v218 >> 3 )
                        {
                          v238 = (unsigned __int8 *)(v224 + 1);
                          v239 = v1508;
                          v240 = v1481;
                          v1454 = WORD1(v1813);
                          v241 = v225 + 7;
                          v242 = HIDWORD(v1813);
                          v243 = WORD2(v1813);
                          do
                          {
                            v244 = v238[1] | ((*v238 | ((*(v238 - 1) | (*(v238 - 2) << 8)) << 8)) << 8);
                            v245 = v238[5] | ((v238[4] | ((v238[3] | (v238[2] << 8)) << 8)) << 8);
                            v246 = v245 ^ v223;
                            v247 = v244 ^ v242 ^ (v246 - 19032) ^ v226;
                            v248 = (__ROR4__(v247, 7) + WORD1(v1813) * __ROR4__(v247 ^ v242, 15)) ^ v246;
                            v249 = (v243 * __ROR4__(v248 - 1313519016, 9) - __ROR4__(v248, 10)) ^ v247;
                            v250 = (__ROL4__(v249, 5) + HIWORD(v1813) * __ROL4__(v249 ^ v243, 4)) ^ v248;
                            v251 = (v242 - (v250 ^ 0xB1B54A58)) ^ v249;
                            v252 = (WORD1(v1813) * (v251 - 19032) - (v251 >> 6)) ^ v250;
                            v253 = (19032 * (v243 ^ __ROR4__(v252, 15))) ^ v251;
                            v254 = (v243 * (HIWORD(v1813) + __ROR4__(~v253, 3))) ^ v252;
                            v255 = (v254 - 19032 - v242) ^ v253;
                            v256 = (v1454 * (v255 ^ HIWORD(v1813))) ^ __ROR4__(v255, 10) ^ v254;
                            v257 = __ROR4__(v256, 3) ^ (v243 * __ROL4__(v256 ^ 0x4A58, 6)) ^ v255;
                            v258 = (19032 * (__ROR4__(v257, 15) - HIWORD(v1813))) ^ v256;
                            v259 = (v258 >> 15) ^ (19032 * __ROL4__(v258 - v243, 3)) ^ (v258 >> 1) ^ (19032 * (v258 ^ HIWORD(v1813))) ^ v257;
                            v260 = (WORD1(v1813) * (v259 - v243) - (v259 >> 13)) ^ v258;
                            v261 = __ROR4__(v260, 11) ^ (v243 * __ROR4__(-1313519016 - v260, 9)) ^ v259;
                            v262 = (v261 + 1313519016 - HIWORD(v1813)) ^ v260;
                            v263 = (19032 * (v262 ^ WORD1(v1813)) - __ROR4__(v262, 7)) ^ v261;
                            v264 = (WORD1(v1813) * __ROL4__(HIWORD(v1813) ^ v263, 4) - __ROR4__(v263, 16)) ^ v262;
                            v265 = (__ROR4__(v264, 4) + v243 * __ROR4__(-1313519016 - v264, 10)) ^ v263;
                            v266 = __ROR4__(v265, 9) ^ (HIWORD(v1813) * __ROR4__(v265 + 1313519016, 4)) ^ v264;
                            v267 = (19032 * __ROL4__(v266 ^ v242, 8) - __ROL4__(v266, 2)) ^ v265;
                            v268 = (WORD1(v1813) * __ROR4__(v242 - v267, 11) - __ROR4__(v267, 12)) ^ v266;
                            v269 = (v268 >> 8) ^ (v243 * (v268 ^ WORD1(v1813))) ^ v267;
                            v238 += 8;
                            v270 = v269 ^ v242 ^ 0xB1B54A58 ^ v268;
                            v271 = v240 ^ v269;
                            *(v241 - 4) = v271;
                            v272 = v239 ^ v270;
                            *v241 = v272;
                            v240 = v244;
                            v273 = __ROR4__(v271, 8);
                            v239 = v245;
                            *(v241 - 5) = v273;
                            v241 += 8;
                            v274 = __ROR4__(v272, 8);
                            *(v241 - 9) = v274;
                            v275 = __ROR4__(v273, 8);
                            *(v241 - 14) = v275;
                            v276 = __ROR4__(v274, 8);
                            *(v241 - 10) = v276;
                            v277 = __ROR4__(v275, 8);
                            v278 = __ROR4__(v276, 8);
                            *(v241 - 15) = v277;
                            *(v241 - 11) = v278;
                            v223 = __ROR4__(v278, 8);
                            v226 = __ROR4__(v277, 8);
                            --v237;
                          }
                          while ( v237 );
                          v220 = v1382;
                          v216 = 0LL;
                          v218 = v1474;
                        }
                        *(_QWORD *)&v219[v218] = v220;
                        v1650 = v1462;
                        v1649 = v219;
                        v1652 = 8LL;
                        v1651 = &qword_18059E918;
                        v1654 = 160LL;
                        v1653 = &xmmword_18059E870;
                        v279 = GetProcessHeap();
                        v280 = HeapAlloc(v279, 8u, 0x30uLL);
                        if ( v280 )
                        {
                          *(_DWORD *)v280 = v1462;
                          v281 = GetProcessHeap();
                          v282 = HeapAlloc(v281, 8u, (unsigned int)v1462);
                          if ( !v282 )
                            goto LABEL_339;
                          v280[1] = v282;
                          memcpy_0(v282, v219, (unsigned int)v1462);
                          *((_DWORD *)v280 + 4) = 160;
                          v283 = GetProcessHeap();
                          v284 = HeapAlloc(v283, 8u, 0xA0uLL);
                          if ( !v284 )
                            goto LABEL_339;
                          v280[3] = v284;
                          *v284 = xmmword_18059E870;
                          v284[1] = *((_OWORD *)&xmmword_18059E870 + 1);
                          v284[2] = *((_OWORD *)&xmmword_18059E870 + 2);
                          v284[3] = *((_OWORD *)&xmmword_18059E870 + 3);
                          v284[4] = *((_OWORD *)&xmmword_18059E870 + 4);
                          v284[5] = *((_OWORD *)&xmmword_18059E870 + 5);
                          v284[6] = *((_OWORD *)&xmmword_18059E870 + 6);
                          v284[7] = *((_OWORD *)&xmmword_18059E870 + 7);
                          v284[8] = *((_OWORD *)&xmmword_18059E870 + 8);
                          v284[9] = *((_OWORD *)&xmmword_18059E870 + 9);
                          *((_DWORD *)v280 + 8) = 8;
                          v285 = GetProcessHeap();
                          v286 = HeapAlloc(v285, 8u, 8uLL);
                          if ( v286 )
                          {
                            v280[5] = v286;
                            v217 = 0;
                            v216 = v280;
                            *v286 = qword_18059E918;
                            v280 = 0LL;
                          }
                          else
                          {
LABEL_339:
                            v217 = -1073741801;
                          }
                          if ( v280 )
                          {
                            v287 = (void *)v280[1];
                            if ( v287 )
                            {
                              v288 = GetProcessHeap();
                              HeapFree(v288, 0, v287);
                              v280[1] = 0LL;
                            }
                            v289 = (void *)v280[3];
                            if ( v289 )
                            {
                              v290 = GetProcessHeap();
                              HeapFree(v290, 0, v289);
                              v280[3] = 0LL;
                            }
                            v291 = (void *)v280[5];
                            if ( v291 )
                            {
                              v292 = GetProcessHeap();
                              HeapFree(v292, 0, v291);
                              v280[5] = 0LL;
                            }
                            v293 = GetProcessHeap();
                            HeapFree(v293, 0, v280);
                          }
                        }
                        else
                        {
                          v217 = -1073741801;
                        }
                        if ( v217 >= 0 )
                        {
                          v1646 = v216;
                          v216 = 0LL;
                        }
                      }
                      else
                      {
                        v217 = -1073741823;
                      }
                      v294 = v1649;
                      if ( v1649 )
                      {
                        v295 = GetProcessHeap();
                        HeapFree(v295, 0, v294);
                        v1649 = 0LL;
                      }
                      if ( v216 )
                      {
                        v296 = (void *)v216[1];
                        if ( v296 )
                        {
                          v297 = GetProcessHeap();
                          HeapFree(v297, 0, v296);
                          v216[1] = 0LL;
                        }
                        v298 = (void *)v216[3];
                        if ( v298 )
                        {
                          v299 = GetProcessHeap();
                          HeapFree(v299, 0, v298);
                          v216[3] = 0LL;
                        }
                        v300 = (void *)v216[5];
                        if ( v300 )
                        {
                          v301 = GetProcessHeap();
                          HeapFree(v301, 0, v300);
                          v216[5] = 0LL;
                        }
                        v302 = GetProcessHeap();
                        HeapFree(v302, 0, v216);
                      }
                      v207 = 0;
                    }
                    else
                    {
                      v217 = -1073741811;
                    }
                    v87 = v217 | 0x10000000;
                    v1507 = v87;
                    if ( v87 < 0 )
                      goto LABEL_587;
                    v303 = (const void **)v1646;
                    v1556 = 4;
                    v304 = RtlUIntAdd(4LL, *(unsigned int *)v1646, &v1556);
                    if ( v304 < 0
                      || (v304 = RtlUIntAdd(v1556, 4LL, &v1556), v304 < 0)
                      || (v304 = RtlUIntAdd(v1556, *((unsigned int *)v303 + 4), &v1556), v304 < 0) )
                    {
                      v305 = 0;
                    }
                    else
                    {
                      v305 = 0;
                      v304 = RtlUIntAdd(v1556, 4LL, &v1556);
                      if ( v304 >= 0 )
                      {
                        v304 = RtlUIntAdd(v1556, *((unsigned int *)v303 + 8), &v1556);
                        v306 = v1557;
                        if ( v304 >= 0 )
                          v306 = v1556;
                        v1557 = v306;
LABEL_375:
                        if ( v304 >= 0 )
                        {
                          v307 = v306;
                          v308 = GetProcessHeap();
                          v309 = HeapAlloc(v308, 8u, v307);
                          if ( v309 )
                          {
                            *v309 = *(_DWORD *)v303;
                            v1655 = v309;
                            v304 = RtlULongLongAdd(v309, 4LL, &v1655);
                            if ( v304 >= 0 )
                            {
                              memcpy_0(v1655, v303[1], *(unsigned int *)v303);
                              v304 = RtlULongLongAdd(v1655, *(unsigned int *)v303, &v1655);
                              if ( v304 >= 0 )
                              {
                                v310 = v1655;
                                *(_DWORD *)v1655 = *((_DWORD *)v303 + 4);
                                v304 = RtlULongLongAdd(v310, 4LL, &v1655);
                                if ( v304 >= 0 )
                                {
                                  memcpy_0(v1655, v303[3], *((unsigned int *)v303 + 4));
                                  v304 = RtlULongLongAdd(v1655, *((unsigned int *)v303 + 4), &v1655);
                                  if ( v304 >= 0 )
                                  {
                                    v311 = v1655;
                                    *(_DWORD *)v1655 = *((_DWORD *)v303 + 8);
                                    v304 = RtlULongLongAdd(v311, 4LL, &v1655);
                                    if ( v304 >= 0 )
                                    {
                                      memcpy_0(v1655, v303[5], *((unsigned int *)v303 + 8));
                                      v304 = RtlULongLongAdd(v1655, *((unsigned int *)v303 + 8), &v1655);
                                      if ( v304 >= 0 )
                                      {
                                        v207 = v1557;
                                        v1444 = v309;
                                        v309 = 0LL;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            if ( v309 )
                            {
                              v312 = GetProcessHeap();
                              HeapFree(v312, 0, v309);
                            }
                          }
                          else
                          {
                            v304 = -1073741801;
                          }
                        }
                        v87 = v304 | 0x10000000;
                        v1507 = v87;
                        if ( v87 < 0 )
                          goto LABEL_587;
                        v1656 = 0LL;
                        v1558 = 0;
                        v1657 = 0LL;
                        v1559 = 0;
                        v1560 = 8;
                        v313 = RtlUIntAdd(8LL, v1384, &v1560);
                        v87 = v313 | 0x10000000;
                        v1507 = v313 | 0x10000000;
                        if ( v313 >= 0 )
                        {
                          v315 = (v1560 + 7) & 0xFFFFFFF8;
                          if ( v315 >= v1560 )
                          {
                            v1562 = (v1560 + 7) & 0xFFFFFFF8;
                            v317 = RtlUIntAdd(v315, v314, &v1562);
                            v316 = v1561;
                            v87 = v317;
                            v1507 = v317;
                            if ( v317 >= 0 )
                              v316 = v1562;
                            v1561 = v316;
                          }
                          else
                          {
                            v316 = v1561;
                            v87 = -1073741675;
                            v1507 = -1073741675;
                          }
                          if ( v87 < 0 )
                            goto LABEL_587;
                          if ( !lpMem || (unsigned int)Size <= 1 )
                            goto LABEL_396;
                          v318 = (unsigned int *)lpMem;
                          v1658 = (unsigned int *)lpMem;
                          do
                          {
                            v319 = *v318;
                            v1507 = RtlULongLongAdd(v318, 4LL, &v1658);
                            v87 = v1507;
                            if ( v1507 < 0 )
                              goto LABEL_406;
                            v1507 = RtlULongLongAdd(v1658, v319, &v1658);
                            v87 = v1507;
                            if ( v1507 < 0 )
                              goto LABEL_406;
                            v318 = v1658;
                          }
                          while ( v320 == -1 );
                          v1507 = RtlULongLongAdd(v1658, 4LL, &v1658);
                          v87 = v1507;
                          if ( v1507 >= 0 )
                          {
                            v322 = v1658;
                            v1558 = v321;
                            if ( !v321 )
                              v322 = 0LL;
                            v1658 = v322;
                            v1656 = v322;
                          }
LABEL_406:
                          if ( v87 < 0 )
                            goto LABEL_587;
                          if ( (unsigned int)Size > 2 )
                          {
                            v323 = (unsigned int *)lpMem;
                            v1659 = (unsigned int *)lpMem;
                            do
                            {
                              v324 = *v323;
                              v1507 = RtlULongLongAdd(v323, 4LL, &v1659);
                              v87 = v1507;
                              if ( v1507 < 0 )
                                goto LABEL_416;
                              v1507 = RtlULongLongAdd(v1659, v324, &v1659);
                              v87 = v1507;
                              if ( v1507 < 0 )
                                goto LABEL_416;
                              v323 = v1659;
                            }
                            while ( (unsigned int)(v325 + 1) < 2 );
                            v1507 = RtlULongLongAdd(v1659, 4LL, &v1659);
                            v87 = v1507;
                            if ( v1507 >= 0 )
                            {
                              v327 = v1659;
                              v1559 = v326;
                              if ( !v326 )
                                v327 = 0LL;
                              v1659 = v327;
                              v1657 = v327;
                            }
LABEL_416:
                            if ( v87 < 0 )
                              goto LABEL_587;
                            v1563 = 4;
                            v1507 = RtlUIntAdd(4LL, v316, &v1563);
                            v87 = v1507;
                            if ( v1507 < 0
                              || (v1507 = RtlUIntAdd(v1563, 4LL, &v1563), v87 = v1507, v1507 < 0)
                              || (v1507 = RtlUIntAdd(v1563, v328, &v1563), v87 = v1507, v1507 < 0)
                              || (v1507 = RtlUIntAdd(v1563, 4LL, &v1563), v87 = v1507, v1507 < 0) )
                            {
                              v330 = v1564;
                            }
                            else
                            {
                              v87 = RtlUIntAdd(v1563, v329, &v1563);
                              v1507 = v87;
                              v330 = v1564;
                              if ( v87 >= 0 )
                                v330 = v1563;
                              v1564 = v330;
                            }
                            if ( v87 < 0 )
                              goto LABEL_587;
                            if ( v330 > 0x400000 )
                            {
                              v87 = -2147418113;
LABEL_586:
                              v1507 = v87;
                              goto LABEL_587;
                            }
                            v1567 = v330;
                          }
                          else
                          {
LABEL_396:
                            v87 = -1073741811;
                            v1507 = -1073741811;
                          }
                        }
                        if ( v87 < 0 )
                          goto LABEL_587;
                        v331 = v1567;
                        v332 = GetProcessHeap();
                        v333 = (unsigned int *)HeapAlloc(v332, 8u, v331);
                        if ( v333 )
                        {
                          v334 = v333;
                          v1440 = (__int64)v333;
                          v87 = 0x10000000;
                        }
                        else
                        {
                          v334 = 0LL;
                          v87 = -805306345;
                        }
                        v1507 = v87;
                        if ( v87 < 0 )
                          goto LABEL_587;
                        if ( !v1444 || !v334 )
                        {
                          v87 = -2147024809;
                          goto LABEL_586;
                        }
                        v1760[0] = v1444;
                        v1762 = v1567;
                        v1761 = v207;
                        v1760[1] = v334;
                        v1763 = 0;
                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                          && (v337 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                        {
                          v338 = ((__int64 (__fastcall *)(__int64, _QWORD *))v337)(134LL, v1760);
                          v336 = v1567;
                          v87 = v338 | 0x10000000;
                          if ( v338 >= 0 )
                            v336 = v1762;
                          v1567 = v336;
                        }
                        else
                        {
                          v335 = GetLastError();
                          v1507 = v335;
                          v87 = v335;
                          if ( v335 > 0 )
                          {
                            v87 = (unsigned __int16)v335 | 0x80070000;
                            v1507 = v87;
                          }
                          v336 = v1567;
                          if ( v87 < 0 )
                            goto LABEL_447;
                          v87 = -2147467259;
                        }
                        v1507 = v87;
LABEL_447:
                        if ( v87 == -805306333 )
                        {
                          v87 = -2147024774;
                          v1507 = -2147024774;
                          goto LABEL_587;
                        }
                        if ( v87 < 0 )
                          goto LABEL_587;
                        v1496 = 0LL;
                        v1565 = 0;
                        v1661 = v334;
                        if ( v336 < 4 )
                        {
LABEL_451:
                          v339 = -1073741762;
LABEL_452:
                          v340 = 0LL;
                          goto LABEL_453;
                        }
                        v342 = *v334;
                        v339 = RtlULongLongAdd(v334, 4LL, &v1661);
                        if ( v339 < 0 )
                          goto LABEL_452;
                        v339 = RtlUIntAdd(0LL, v343, &v1565);
                        if ( v339 < 0 )
                          goto LABEL_460;
                        if ( v336 - v1565 < (unsigned int)v342 )
                        {
                          v339 = -1073741762;
LABEL_460:
                          v340 = v344;
                          goto LABEL_453;
                        }
                        Src = v1661;
                        v339 = RtlULongLongAdd(v1661, v342, &v1661);
                        if ( v339 < 0 )
                          goto LABEL_452;
                        v339 = RtlUIntAdd(v1565, (unsigned int)v342, &v1565);
                        if ( v339 < 0 )
                          goto LABEL_452;
                        if ( v336 - v1565 < (unsigned int)v345 )
                          goto LABEL_451;
                        v346 = *(unsigned int *)v1661;
                        v339 = RtlULongLongAdd(v1661, v345, &v1661);
                        if ( v339 < 0 )
                          goto LABEL_452;
                        v339 = RtlUIntAdd(v1565, v347, &v1565);
                        if ( v339 < 0 )
                          goto LABEL_452;
                        if ( v336 - v1565 < (unsigned int)v346 )
                          goto LABEL_451;
                        v1463 = v1661;
                        v339 = RtlULongLongAdd(v1661, (unsigned int)v346, &v1661);
                        if ( v339 < 0 )
                          goto LABEL_452;
                        v339 = RtlUIntAdd(v1565, (unsigned int)v346, &v1565);
                        if ( v339 < 0 )
                          goto LABEL_452;
                        if ( v336 - v1565 < (unsigned int)v348 )
                          goto LABEL_451;
                        v349 = *(unsigned int *)v1661;
                        v350 = RtlULongLongAdd(v1661, v348, &v1661);
                        v352 = 0LL;
                        v339 = v350;
                        if ( v350 < 0 )
                          goto LABEL_474;
                        v339 = RtlUIntAdd(v1565, v351, &v1565);
                        if ( v339 < 0 )
                          goto LABEL_474;
                        if ( v336 - v1565 < (unsigned int)v349 )
                          goto LABEL_473;
                        v339 = RtlUIntAdd(v1565, (unsigned int)v349, &v1565);
                        if ( v339 < 0 )
                          goto LABEL_474;
                        if ( v336 != v1565 || (unsigned int)(v349 + v346 + v342) + 12LL != v336 )
                        {
LABEL_473:
                          v339 = -1073741762;
LABEL_474:
                          v340 = v352;
                          v305 = 0;
                          goto LABEL_453;
                        }
                        v353 = GetProcessHeap();
                        v354 = HeapAlloc(v353, 8u, 0x30uLL);
                        if ( !v354 )
                        {
                          v339 = -1073741801;
                          v305 = 0;
LABEL_503:
                          v340 = (unsigned int *)v1496;
                          v370 = 0LL;
                          if ( v339 < 0 )
                          {
                            v370 = (_QWORD *)v1496;
                            v340 = 0LL;
                          }
                          v1490 = v340;
                          if ( v370 )
                          {
                            v371 = (void *)v370[1];
                            if ( v371 )
                            {
                              v372 = GetProcessHeap();
                              HeapFree(v372, 0, v371);
                              v370[1] = 0LL;
                            }
                            v373 = (void *)v370[3];
                            if ( v373 )
                            {
                              v374 = GetProcessHeap();
                              HeapFree(v374, 0, v373);
                              v370[3] = 0LL;
                            }
                            v375 = (void *)v370[5];
                            if ( v375 )
                            {
                              v376 = GetProcessHeap();
                              HeapFree(v376, 0, v375);
                              v370[5] = 0LL;
                            }
                            v377 = GetProcessHeap();
                            HeapFree(v377, 0, v370);
                            v340 = v1490;
                          }
LABEL_453:
                          v87 = v339 | 0x10000000;
                          v1507 = v87;
                          if ( v87 < 0 )
                            goto LABEL_587;
                          v1662 = 0LL;
                          v341 = 0LL;
                          if ( !v340 || (v378 = (char *)*((_QWORD *)v340 + 1), (Srca = v378) == 0LL) || !*v340 )
                          {
                            v87 = -805306355;
                            goto LABEL_586;
                          }
                          v379 = *v340;
                          if ( v379 )
                          {
                            v380 = v379 - 8;
                            v1516 = (void *)v380;
                            v381 = MemoryAlloc(v380);
                            v382 = 0;
                            v1517 = v381;
                            v383 = v381;
                            if ( v381 )
                            {
                              v1812 = 0x7F1137FAB69605ELL;
                              v384 = 0;
                              v385 = v378;
                              v386 = v383;
                              v387 = 0;
                              v388 = v380 & 7;
                              if ( (v380 & 7) != 0 )
                              {
                                v1384 = 0;
                                v389 = 0;
                                v390 = 56;
                                do
                                {
                                  v391 = (unsigned __int8)*v385++;
                                  if ( v387 >= 4 )
                                  {
                                    v392 = v1384;
                                    v389 |= v391 << v390;
                                  }
                                  else
                                  {
                                    v392 = (v391 << (v390 - 32)) | v1384;
                                    v1384 = v392;
                                  }
                                  ++v387;
                                  v390 -= 8;
                                }
                                while ( v387 < (int)v388 );
                                v1509 = v389;
                                v382 = v392 ^ 0x92F65A5;
                                v393 = v389 ^ 0x699A899C;
                                v394 = 0;
                                v395 = v392 ^ 0x92F65A5;
                                v396 = v393;
                                if ( (v380 & 7) != 0 )
                                {
                                  do
                                  {
                                    if ( v394 >= 4 )
                                    {
                                      v396 = __ROL4__(v396, 8);
                                      v397 = v396;
                                    }
                                    else
                                    {
                                      v395 = __ROL4__(v395, 8);
                                      v397 = v395;
                                    }
                                    *v386 = v397;
                                    ++v394;
                                    ++v386;
                                  }
                                  while ( v394 < (int)v388 );
                                }
                                if ( v388 <= 4 )
                                {
                                  v387 = 0;
                                  if ( v388 < 4 )
                                    v382 = v382 >> (8 * (4 - v388)) << (8 * (4 - v388));
                                }
                                else
                                {
                                  v387 = v393 >> (8 * (8 - v388)) << (8 * (8 - v388));
                                }
                              }
                              else
                              {
                                v1509 = -1;
                                v1384 = 0;
                              }
                              v398 = v380 >> 3;
                              if ( v380 >> 3 )
                              {
                                v399 = v386 + 7;
                                v400 = v1509;
                                v401 = (unsigned __int8 *)(v385 + 2);
                                v402 = v1384;
                                v1391 = WORD2(v1812);
                                v403 = HIDWORD(v1812);
                                v1464 = WORD1(v1812);
                                v404 = HIDWORD(v1812) ^ 0xAB69605E;
                                do
                                {
                                  v405 = *(v401 - 1) | (*(v401 - 2) << 8);
                                  v406 = v401[2] << 8;
                                  v407 = *v401;
                                  v401 += 8;
                                  v408 = *(v401 - 7) | ((v407 | (v405 << 8)) << 8);
                                  v409 = v408 ^ v382;
                                  v410 = *(v401 - 3) | ((*(v401 - 4) | ((*(v401 - 5) | v406) << 8)) << 8);
                                  v411 = v409 ^ v403 ^ 0xAB69605E ^ v410 ^ v387;
                                  v412 = (__ROL4__(v411, 10) + v1391 * __ROL4__(v411 + 1419157410, 5)) ^ v409;
                                  v413 = (WORD1(v1812) * __ROR4__(v412 + v403, 9) - __ROL4__(v412, 2)) ^ v411;
                                  v414 = (24670 * (v413 - v1391) - (v413 >> 13)) ^ v412;
                                  v415 = (HIWORD(v1812) * __ROL4__(v414 ^ WORD1(v1812), 6) - __ROL4__(v414, 2)) ^ v413;
                                  v416 = (v403 - (v415 ^ 0xAB69605E)) ^ v414;
                                  v417 = (v1464 * (v416 ^ v1391)) ^ __ROR4__(v416, 6) ^ v415;
                                  v418 = (__ROL4__(v417, 2) + 24670 * __ROR4__(v417 + v403, 15)) ^ v416;
                                  v419 = (HIWORD(v1812) * __ROR4__(v418 + 1419157410, 14) - __ROL4__(v418, 8)) ^ v417;
                                  v420 = __ROR4__(v419, 10) ^ (v1391 * __ROR4__(v419 ^ 0xAB69605E, 12)) ^ v418;
                                  v421 = (v420 >> 10) ^ (WORD1(v1812) * (v420 ^ HIWORD(v1812))) ^ v419;
                                  v422 = (HIWORD(v1812) * (__ROR4__(~v421, 5) + 24670)) ^ v420;
                                  v423 = (v422 - HIWORD(v1812)) ^ 0xAB69605E ^ v421;
                                  v424 = ((v423 >> 2) + v1391 * __ROL4__(v423 ^ HIWORD(v1812), 2)) ^ v422;
                                  v425 = (__ROL4__(v424, 7) + WORD1(v1812) * __ROR4__(v424 - v403, 6)) ^ v423;
                                  v426 = (24670 * (v425 ^ v1391) + __ROR4__(v425, 9)) ^ v424;
                                  v427 = (__ROL4__(v426, 7) + HIWORD(v1812) * __ROL4__(v426 ^ WORD1(v1812), 5)) ^ v425;
                                  v428 = v427 ^ v404 ^ v426;
                                  v429 = (v1391 * (__ROR4__(v428, 3) - WORD1(v1812))) ^ v427;
                                  v430 = (24670 * __ROR4__(v429 - v403, 1) - __ROR4__(v429, 6)) ^ v428;
                                  v431 = (__ROL4__(v430, 14) + HIWORD(v1812) * __ROL4__(v430 - 1419157410, 3)) ^ v429;
                                  v432 = (v1391 * __ROL4__(v431 - 1419157410, 15) - __ROR4__(v431, 14)) ^ v430;
                                  v433 = (v432 >> 3) ^ (WORD1(v1812) * (v432 ^ 0x605E)) ^ v431;
                                  v434 = v433 ^ v403;
                                  v435 = v433;
                                  v436 = v400 ^ v433;
                                  v400 = v410;
                                  v437 = v402 ^ __ROL4__(v435, 2) ^ (24670 * __ROL4__(v434, 4));
                                  v402 = v408;
                                  v438 = v437 ^ v432;
                                  *(v399 - 4) = v438;
                                  *v399 = v436;
                                  v399 += 8;
                                  v439 = __ROR4__(v438, 8);
                                  *(v399 - 13) = v439;
                                  v440 = __ROR4__(v436, 8);
                                  *(v399 - 9) = v440;
                                  v441 = __ROR4__(v439, 8);
                                  *(v399 - 14) = v441;
                                  v442 = __ROR4__(v440, 8);
                                  *(v399 - 10) = v442;
                                  v443 = __ROR4__(v441, 8);
                                  v444 = __ROR4__(v442, 8);
                                  *(v399 - 15) = v443;
                                  *(v399 - 11) = v444;
                                  v387 = __ROR4__(v444, 8);
                                  v382 = __ROR4__(v443, 8);
                                  --v398;
                                }
                                while ( v398 );
                                v384 = 0;
                                v380 = (unsigned __int64)v1516;
                                v305 = 0;
                                v383 = v1517;
                              }
                              for ( n = 0LL; n < v380; ++n )
                                v384 ^= v383[n];
                              if ( v384 == *(_QWORD *)&Srca[v380] )
                              {
                                v341 = (int *)v383;
                                v1662 = (int *)v383;
                                v305 = v380;
                                v383 = 0LL;
                                v446 = 0;
                              }
                              else
                              {
                                v341 = v1662;
                                v446 = -1073425151;
                              }
                              if ( v383 )
                              {
                                MemoryFree(v383);
                                v341 = v1662;
                              }
                              if ( v446 >= 0 )
                              {
                                v447 = v341;
                                v1510 = v341;
                                v341 = 0LL;
                                v1662 = 0LL;
                                v1554 = v305;
                                v87 = 0x10000000;
                                goto LABEL_548;
                              }
                            }
                            else
                            {
                              v341 = v1662;
                            }
                          }
                          v305 = v1554;
                          v87 = -805306367;
                          v447 = 0LL;
LABEL_548:
                          v1507 = v87;
                          if ( v341 )
                          {
                            v448 = GetProcessHeap();
                            HeapFree(v448, 0, v341);
                            v305 = v1554;
                            v1662 = 0LL;
                          }
                          if ( v87 >= 0 )
                          {
                            v1566[0] = 0;
                            v1665 = v447;
                            if ( v305 >= 4 )
                            {
                              v1475 = *v447;
                              v449 = RtlULongLongAdd(v447, 4LL, &v1665);
                              if ( v449 < 0 )
                                goto LABEL_585;
                              v449 = RtlUIntAdd(0LL, 4LL, v1566);
                              if ( v449 < 0 )
                                goto LABEL_585;
                              if ( v305 - v1566[0] >= 4 )
                              {
                                v449 = RtlULongLongAdd(v1665, 4LL, &v1665);
                                if ( v449 < 0 )
                                  goto LABEL_585;
                                v449 = RtlUIntAdd(v1566[0], 4LL, v1566);
                                if ( v449 < 0 )
                                  goto LABEL_585;
                                if ( v305 - v1566[0] >= v450 )
                                {
                                  v449 = RtlUIntAdd(v1566[0], v450, v1566);
                                  if ( v449 < 0 )
                                    goto LABEL_585;
                                  v453 = v1665;
                                  v454 = v305;
                                  v455 = (unsigned int)v452;
                                  if ( (char *)v447 + v454 >= (char *)v1665 + v452
                                    && (unsigned __int64)(v454 + (char *)v447 - v452 - (_BYTE *)v1665) < 8 )
                                  {
                                    v1465 = (int)v451;
                                    v456 = v451;
                                    v449 = (int)v451;
                                    v457 = (int)v451;
                                    if ( !v1665 )
                                    {
LABEL_574:
                                      if ( (_DWORD)v452 )
                                      {
                                        v463 = GetProcessHeap();
                                        v456 = HeapAlloc(v463, 8u, v455);
                                        if ( !v456 )
                                        {
                                          v449 = -1073741801;
                                          goto LABEL_582;
                                        }
                                        v449 = 0;
                                      }
                                      if ( v453 )
                                        memcpy_0(v456, v453, v455);
                                      v1746[1] = v456;
                                      LODWORD(v1746[0]) = v457;
LABEL_582:
                                      if ( v449 < 0 || v1475 == LODWORD(v1746[0]) )
                                        goto LABEL_585;
                                      goto LABEL_584;
                                    }
                                    v458 = (unsigned int *)v1665;
                                    v449 = RtlULongLongAdd(v1665, (unsigned int)v452, &v1666);
                                    if ( v449 < 0 )
                                      goto LABEL_582;
                                    v459 = (unsigned int *)v1666;
                                    if ( (unsigned __int64)v453 < v1666 )
                                    {
                                      do
                                      {
                                        v449 = RtlULongLongAdd(v458, 4LL, &v1667);
                                        if ( v449 < 0 )
                                          goto LABEL_585;
                                        if ( v1667 > v460 )
                                          goto LABEL_577;
                                        v461 = RtlUIntAdd(4LL, *v458, &v1585);
                                        v449 = v461;
                                        if ( v461 >= 0 )
                                          v462 = v1585;
                                        v1566[1] = v462;
                                        if ( v461 < 0 )
                                          goto LABEL_585;
                                        v449 = RtlULongLongAdd(v458, v462, &v1668);
                                        if ( v449 < 0 )
                                          goto LABEL_585;
                                        v458 = v1668;
                                        if ( v1668 > v459 )
                                          goto LABEL_577;
                                        ++v1465;
                                      }
                                      while ( v1668 < v459 );
                                    }
                                    if ( v458 == v459 )
                                    {
                                      v457 = v1465;
                                      goto LABEL_574;
                                    }
LABEL_577:
                                    v449 = -1073741811;
LABEL_585:
                                    v87 = v449 | 0x10000000;
                                    goto LABEL_586;
                                  }
                                }
                              }
                            }
LABEL_584:
                            v449 = -1073741762;
                            goto LABEL_585;
                          }
LABEL_587:
                          if ( v1430 )
                          {
                            v464 = GetProcessHeap();
                            HeapFree(v464, 0, v1430);
                          }
                          v465 = v1646;
                          if ( v1646 )
                          {
                            v466 = (void *)*((_QWORD *)v1646 + 1);
                            if ( v466 )
                            {
                              v467 = GetProcessHeap();
                              HeapFree(v467, 0, v466);
                              v465[1] = 0LL;
                            }
                            v468 = (void *)v465[3];
                            if ( v468 )
                            {
                              v469 = GetProcessHeap();
                              HeapFree(v469, 0, v468);
                              v465[3] = 0LL;
                            }
                            v470 = (void *)v465[5];
                            if ( v470 )
                            {
                              v471 = GetProcessHeap();
                              HeapFree(v471, 0, v470);
                              v465[5] = 0LL;
                            }
                            v472 = GetProcessHeap();
                            HeapFree(v472, 0, v465);
                            v1646 = 0LL;
                          }
                          if ( v1444 )
                          {
                            v473 = GetProcessHeap();
                            HeapFree(v473, 0, v1444);
                          }
                          if ( v1440 )
                          {
                            v474 = GetProcessHeap();
                            HeapFree(v474, 0, (LPVOID)v1440);
                          }
                          if ( v1490 )
                          {
                            v475 = (void *)*((_QWORD *)v1490 + 1);
                            if ( v475 )
                            {
                              v476 = GetProcessHeap();
                              HeapFree(v476, 0, v475);
                              *((_QWORD *)v1490 + 1) = 0LL;
                            }
                            v477 = (void *)*((_QWORD *)v1490 + 3);
                            if ( v477 )
                            {
                              v478 = GetProcessHeap();
                              HeapFree(v478, 0, v477);
                              *((_QWORD *)v1490 + 3) = 0LL;
                            }
                            v479 = (void *)*((_QWORD *)v1490 + 5);
                            if ( v479 )
                            {
                              v480 = GetProcessHeap();
                              HeapFree(v480, 0, v479);
                              *((_QWORD *)v1490 + 5) = 0LL;
                            }
                            v481 = GetProcessHeap();
                            HeapFree(v481, 0, v1490);
                          }
                          if ( v1510 )
                          {
                            v482 = GetProcessHeap();
                            HeapFree(v482, 0, v1510);
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          if ( !LODWORD(v1746[0]) )
                            goto LABEL_704;
                          v483 = 4LL;
                          if ( v1746[1] )
                          {
                            v1669 = (int *)v1746[1];
                            v1507 = RtlULongLongAdd(v1746[1], 4LL, &v1669);
                            v87 = v1507;
                            if ( v1507 < 0 )
                            {
                              v484 = v1568;
                              v485 = v1670;
                            }
                            else
                            {
                              v485 = v1669;
                              v1568 = v484;
                              if ( !v484 )
                                v485 = 0LL;
                              v1669 = v485;
                              v1670 = v485;
                            }
                            if ( v1507 < 0 )
                              goto LABEL_698;
                            if ( v484 != (_DWORD)v483 )
                              goto LABEL_696;
                            v1601 = *v485;
                          }
                          else
                          {
                            v87 = -1073741811;
                            v1507 = -1073741811;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          v87 = v1601;
                          if ( v1601 == -805306333 )
                            v87 = -2147024774;
                          v1507 = v87;
                          v1601 = v87;
                          if ( v87 != -2147024774 && v87 < 0 )
                            goto LABEL_698;
                          if ( LODWORD(v1746[0]) != 6 )
                            goto LABEL_704;
                          if ( v1746[1] )
                          {
                            v486 = (int *)v1746[1];
                            v487 = 0;
                            v1671 = (int *)v1746[1];
                            do
                            {
                              v1507 = RtlULongLongAdd(v486, v483, &v1671);
                              v87 = v1507;
                              if ( v1507 < 0 )
                                goto LABEL_639;
                              v1507 = RtlULongLongAdd(v1671, v488, &v1671);
                              v87 = v1507;
                              if ( v1507 < 0 )
                                goto LABEL_639;
                              v486 = v1671;
                              ++v487;
                            }
                            while ( !v487 );
                            v489 = *v1671;
                            v1507 = RtlULongLongAdd(v1671, v483, &v1671);
                            v87 = v1507;
                            if ( v1507 < 0 )
                            {
LABEL_639:
                              v489 = v1569;
                              v490 = v1672;
                            }
                            else
                            {
                              v490 = v1671;
                              v1569 = v489;
                              if ( !v489 )
                                v490 = 0LL;
                              v1671 = v490;
                              v1672 = v490;
                            }
                            if ( v87 < 0 )
                              goto LABEL_698;
                            if ( v489 != 8 )
                              goto LABEL_696;
                            v1673 = *(const wchar_t **)v490;
                          }
                          else
                          {
                            v87 = -1073741811;
                            v1507 = -1073741811;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          if ( v1746[1] )
                          {
                            v491 = (int *)v1746[1];
                            v492 = 0;
                            v1674 = (int *)v1746[1];
                            do
                            {
                              v1507 = RtlULongLongAdd(v491, v483, &v1674);
                              v87 = v1507;
                              if ( v1507 < 0 )
                                goto LABEL_654;
                              v1507 = RtlULongLongAdd(v1674, v493, &v1674);
                              v87 = v1507;
                              if ( v1507 < 0 )
                                goto LABEL_654;
                              v491 = v1674;
                              ++v492;
                            }
                            while ( v492 < 2 );
                            v494 = *v1674;
                            v1507 = RtlULongLongAdd(v1674, v483, &v1674);
                            v87 = v1507;
                            if ( v1507 < 0 )
                            {
LABEL_654:
                              v494 = v1570;
                              v495 = v1675;
                            }
                            else
                            {
                              v495 = v1674;
                              v1570 = v494;
                              if ( !v494 )
                                v495 = 0LL;
                              v1674 = v495;
                              v1675 = v495;
                            }
                            if ( v87 < 0 )
                              goto LABEL_698;
                            if ( v494 != (_DWORD)v483 )
                              goto LABEL_696;
                            v1571 = *v495;
                          }
                          else
                          {
                            v87 = -1073741811;
                            v1507 = -1073741811;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          if ( !v1746[1] )
                          {
                            v87 = -1073741811;
                            goto LABEL_697;
                          }
                          v496 = v1746[1];
                          v497 = 0;
                          v1676 = v1746[1];
                          do
                          {
                            v1507 = RtlULongLongAdd(v496, v483, &v1676);
                            v87 = v1507;
                            if ( v1507 < 0 )
                              goto LABEL_669;
                            v1507 = RtlULongLongAdd(v1676, v498, &v1676);
                            v87 = v1507;
                            if ( v1507 < 0 )
                              goto LABEL_669;
                            v496 = v1676;
                            ++v497;
                          }
                          while ( v497 < 3 );
                          v1507 = RtlULongLongAdd(v1676, v483, &v1676);
                          v87 = v1507;
                          if ( v1507 < 0 )
                          {
LABEL_669:
                            v500 = v1677;
                          }
                          else
                          {
                            v500 = v1676;
                            v1572 = v499;
                            if ( !v499 )
                              v500 = 0LL;
                            v1676 = v500;
                            v1677 = v500;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          v501 = (int *)v1746[1];
                          v1678 = (int *)v1746[1];
                          while ( 1 )
                          {
                            v1507 = RtlULongLongAdd(v501, 4LL, &v1678);
                            v87 = v1507;
                            if ( v1507 < 0 )
                              break;
                            v1507 = RtlULongLongAdd(v1678, v502, &v1678);
                            v87 = v1507;
                            v504 = 4;
                            if ( v1507 < 0 )
                              goto LABEL_680;
                            v501 = v1678;
                            if ( (unsigned int)(v503 + 1) >= 4 )
                            {
                              v1507 = RtlULongLongAdd(v1678, 4LL, &v1678);
                              v87 = v1507;
                              if ( v1507 >= 0 )
                              {
                                v506 = v1678;
                                v1573 = v505;
                                if ( !v505 )
                                  v506 = 0LL;
                                v1678 = v506;
                                v1679 = v506;
LABEL_681:
                                if ( v87 >= 0 )
                                {
                                  if ( v505 == v504 )
                                  {
                                    v1574 = *v506;
                                    goto LABEL_684;
                                  }
LABEL_696:
                                  v87 = -1073741789;
LABEL_697:
                                  v1507 = v87;
LABEL_698:
                                  v93 = v1415;
LABEL_699:
                                  v94 = v1398;
                                  goto LABEL_201;
                                }
LABEL_684:
                                if ( v87 < 0 )
                                  goto LABEL_698;
                                v507 = (int *)v1746[1];
                                v1680 = (int *)v1746[1];
                                do
                                {
                                  v508 = *v507;
                                  v1507 = RtlULongLongAdd(v507, 4LL, &v1680);
                                  v87 = v1507;
                                  if ( v1507 < 0 )
                                    goto LABEL_693;
                                  v1507 = RtlULongLongAdd(v1680, v508, &v1680);
                                  v87 = v1507;
                                  if ( v1507 < 0 )
                                    goto LABEL_693;
                                  v507 = v1680;
                                }
                                while ( (unsigned int)(v511 + 1) < 5 );
                                v1507 = RtlULongLongAdd(v1680, 4LL, &v1680);
                                v87 = v1507;
                                if ( v1507 < 0 )
                                {
LABEL_693:
                                  v512 = v1575;
                                  v513 = v1681;
                                  goto LABEL_694;
                                }
                                v513 = v1680;
                                v1575 = v512;
                                if ( !v512 )
                                  v513 = 0LL;
                                v1680 = v513;
                                v1681 = v513;
LABEL_694:
                                if ( v87 < 0 )
                                {
                                  v514 = v1587;
                                }
                                else
                                {
                                  if ( v512 != 4 )
                                    goto LABEL_696;
                                  v514 = *v513;
                                  v1587 = *v513;
                                }
                                if ( v87 < 0 )
                                  goto LABEL_698;
                                if ( v1636 == v1673 )
                                {
                                  v1581 = v1571;
                                  v1582 = v510;
                                  v1583 = v514;
                                  if ( v510 <= 4 && v509 <= 4 )
                                  {
                                    memcpy_0(v1471, v500, v509);
                                    if ( v1601 )
                                      v87 = v1601;
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
                              v505 = v1573;
                              v506 = v1679;
                              goto LABEL_681;
                            }
                          }
                          v504 = 4;
                          goto LABEL_680;
                        }
                        if ( Src )
                        {
                          *(_DWORD *)v354 = v342;
                          v355 = GetProcessHeap();
                          v356 = HeapAlloc(v355, 8u, v342);
                          if ( !v356 )
                          {
LABEL_482:
                            v339 = -1073741801;
                            v305 = 0;
                            goto LABEL_495;
                          }
                          v354[1] = v356;
                          memcpy_0(v356, Src, v342);
                        }
                        else
                        {
                          *(_DWORD *)v354 = 0;
                          v354[1] = 0LL;
                        }
                        if ( v1463 )
                        {
                          *((_DWORD *)v354 + 4) = v346;
                          v357 = GetProcessHeap();
                          v358 = HeapAlloc(v357, 8u, v346);
                          if ( !v358 )
                            goto LABEL_482;
                          v354[3] = v358;
                          memcpy_0(v358, v1463, v346);
                        }
                        else
                        {
                          *((_DWORD *)v354 + 4) = 0;
                          v354[3] = 0LL;
                        }
                        v359 = v1661;
                        if ( v1661 )
                        {
                          *((_DWORD *)v354 + 8) = v349;
                          v360 = v349;
                          v361 = GetProcessHeap();
                          v362 = HeapAlloc(v361, 8u, v349);
                          v305 = 0;
                          if ( !v362 )
                          {
                            v339 = -1073741801;
                            goto LABEL_495;
                          }
                          v354[5] = v362;
                          memcpy_0(v362, v359, v360);
                        }
                        else
                        {
                          v305 = 0;
                          *((_DWORD *)v354 + 8) = 0;
                          v354[5] = 0LL;
                        }
                        v1496 = (SIZE_T)v354;
                        v339 = 0;
                        v354 = 0LL;
LABEL_495:
                        if ( v354 )
                        {
                          v363 = (void *)v354[1];
                          if ( v363 )
                          {
                            v364 = GetProcessHeap();
                            HeapFree(v364, 0, v363);
                            v354[1] = 0LL;
                          }
                          v365 = (void *)v354[3];
                          if ( v365 )
                          {
                            v366 = GetProcessHeap();
                            HeapFree(v366, 0, v365);
                            v354[3] = 0LL;
                          }
                          v367 = (void *)v354[5];
                          if ( v367 )
                          {
                            v368 = GetProcessHeap();
                            HeapFree(v368, 0, v367);
                            v354[5] = 0LL;
                          }
                          v369 = GetProcessHeap();
                          HeapFree(v369, 0, v354);
                        }
                        goto LABEL_503;
                      }
                    }
                    v306 = v1557;
                    goto LABEL_375;
                  }
                  v185 = lpMem;
                  v1645 = lpMem;
                  if ( (_DWORD)Size )
                  {
                    do
                    {
                      v186 = RtlUIntAdd((unsigned int)v177, (unsigned int)*v185, &v1546);
                      v1507 = v186;
                      v87 = v186;
                      if ( v186 >= 0 )
                        v187 = v1546;
                      v1545 = v187;
                      if ( v186 < 0 )
                        goto LABEL_699;
                      v1507 = RtlULongLongAdd(v185, v187, &v1645);
                      v87 = v1507;
                      if ( v1507 < 0 )
                        goto LABEL_699;
                      v185 = v1645;
                    }
                    while ( v188 + 1 < (unsigned int)Size );
                  }
                  v1507 = RtlULongLongAdd(v185, v177, &v1753);
                  v87 = v1507;
                  if ( v1507 < 0 )
                    goto LABEL_699;
                  if ( v185 + 2 <= (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                  {
                    v189 = v1753;
                    *v185 = v184;
                    *v189 = v1543;
                    LODWORD(Size) = Size + 1;
                    goto LABEL_272;
                  }
LABEL_255:
                  v87 = -1073741789;
                  v1507 = -1073741789;
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
  v156 = lpMem;
  if ( lpMem )
  {
    v157 = GetProcessHeap();
    HeapFree(v157, 0, v156);
    lpMem = 0LL;
  }
  v1746[0] = 0LL;
  v158 = v1746[1];
  if ( v1746[1] )
  {
    v159 = GetProcessHeap();
    HeapFree(v159, 0, v158);
    v1746[1] = 0LL;
  }
  if ( v93 )
  {
    v160 = GetProcessHeap();
    HeapFree(v160, 0, v93);
  }
  if ( v94 )
  {
    v161 = GetProcessHeap();
    HeapFree(v161, 0, v94);
  }
  if ( v87 < 0 )
    goto LABEL_100;
  v162 = 0LL;
  if ( !v1583 )
    goto LABEL_1712;
  v1682 = 0LL;
  dword_18059F560 = v1583;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, &Filename, 0x104u);
  if ( ModuleFileNameW && (ModuleFileNameW != 260 || GetLastError() != 122) )
  {
    v1517 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961E8[0])(0LL, 0LL, 1027LL);
    if ( !v1517 )
    {
      GetLastError();
      goto LABEL_1314;
    }
    v515 = off_180596188[0]();
    v516 = dword_18059F560;
    qword_18059F550 = v515;
    v1476 = dword_18059F560;
    memset_0(&v1797, 0, 0x70uLL);
    v1576 = 1;
    v1516 = 0LL;
    v1817 = 0LL;
    v1834 = 0LL;
    v1832 = 0LL;
    v1835 = 0;
    v1833 = 0LL;
    v1497 = 0LL;
    v1628 = 0LL;
    while ( _InterlockedCompareExchange(&dword_1805A0710, 1, 0) )
      ;
    v517 = dword_18059F558;
    if ( !dword_18059F558 )
    {
      v1466 = 0;
      v1384 = 0;
      v1684 = 0LL;
      v1685 = 0LL;
      v518 = (char *)MemoryAlloc(0x338uLL);
      v1399 = (unsigned __int16 *)v518;
      if ( !v518 )
        goto LABEL_749;
      v519 = -1;
      v520 = v518 + 7;
      v521 = (unsigned __int8 *)&unk_1804CAD42;
      v522 = 0;
      v523 = 0;
      v524 = 103LL;
      do
      {
        v525 = *(v521 - 1) | (*(v521 - 2) << 8);
        v526 = v521[2] << 8;
        v527 = *v521;
        v521 += 8;
        v528 = *(v521 - 7) | ((v527 | (v525 << 8)) << 8);
        v529 = v528 ^ v523;
        v530 = *(v521 - 3) | ((*(v521 - 4) | ((*(v521 - 5) | v526) << 8)) << 8);
        v531 = v529 ^ (unsigned int)v162 ^ v530 ^ 0xAC987321;
        v532 = (__ROL4__(v531, 10) + 4991 * __ROL4__(v531 + 1419157410, 5)) ^ v529;
        v533 = (43881 * __ROR4__(v532 + 133239679, 9) - __ROL4__(v532, 2)) ^ v531;
        v534 = (24670 * v533 - (v533 >> 13) - 123127970) ^ v532;
        v535 = (2033 * __ROL4__(v534 ^ 0xAB69, 6) - __ROL4__(v534, 2)) ^ v533;
        v536 = (133239679 - (v535 ^ 0xAB69605E)) ^ v534;
        v537 = (43881 * (v536 ^ 0x137F)) ^ __ROR4__(v536, 6) ^ v535;
        v538 = (__ROL4__(v537, 2) + 24670 * __ROR4__(v537 + 133239679, 15)) ^ v536;
        v539 = (2033 * __ROR4__(v538 + 1419157410, 14) - __ROL4__(v538, 8)) ^ v537;
        v540 = __ROR4__(v539, 10) ^ (4991 * __ROR4__(v539 ^ 0xAB69605E, 12)) ^ v538;
        v541 = v539 ^ (v540 >> 10) ^ (43881 * (v540 ^ 0x7F1));
        v542 = (2033 * (__ROR4__(~v541, 5) + 24670)) ^ v540;
        v543 = v541 ^ (v542 - 2033) ^ 0xAB69605E;
        v544 = ((v543 >> 2) + 4991 * __ROL4__(v541 ^ (v542 - 2033) ^ 0xAB6967AF, 2)) ^ v542;
        v545 = (__ROL4__(v544, 7) + 43881 * __ROR4__(v544 - 133239679, 6)) ^ v543;
        v546 = (24670 * (v545 ^ 0x137F) + __ROR4__(v545, 9)) ^ v544;
        v547 = (__ROL4__(v546, 7) + 2033 * __ROL4__(v546 ^ 0xAB69, 5)) ^ v545;
        v548 = v547 ^ v546 ^ 0xAC987321;
        v549 = (4991 * __ROR4__(v548, 3) - 219010071) ^ v547;
        v550 = (24670 * __ROR4__(v549 - 133239679, 1) - __ROR4__(v549, 6)) ^ v548;
        v551 = (__ROL4__(v550, 14) + 2033 * __ROL4__(v550 - 1419157410, 3)) ^ v549;
        v552 = (4991 * __ROL4__(v551 - 1419157410, 15) - __ROR4__(v551, 14)) ^ v550;
        v553 = (v552 >> 3) ^ (43881 * (v552 ^ 0x605E)) ^ v551;
        v554 = 24670 * __ROL4__(v553 ^ 0x7F1137F, 4);
        v555 = v553;
        v556 = v519 ^ v553;
        v519 = v530;
        v557 = v522 ^ __ROL4__(v555, 2) ^ v554;
        v522 = v528;
        v558 = v557 ^ v552;
        *(v520 - 4) = v558;
        *v520 = v556;
        v520 += 8;
        v559 = __ROR4__(v558, 8);
        *(v520 - 13) = v559;
        v560 = __ROR4__(v556, 8);
        *(v520 - 9) = v560;
        v561 = __ROR4__(v559, 8);
        *(v520 - 14) = v561;
        v562 = __ROR4__(v560, 8);
        *(v520 - 10) = v562;
        v563 = __ROR4__(v561, 8);
        v564 = __ROR4__(v562, 8);
        *(v520 - 15) = v563;
        *(v520 - 11) = v564;
        LODWORD(v162) = __ROR4__(v564, 8);
        v523 = __ROR4__(v563, 8);
        --v524;
      }
      while ( v524 );
      v516 = v1476;
      LODWORD(v162) = 0;
      v87 = v1507;
      v565 = 0LL;
      v566 = v518;
      v567 = 0;
      v568 = 0;
      do
        v567 ^= *((_BYTE *)v1399 + v565++);
      while ( v565 < 0x338 );
      if ( v567 == 64LL )
      {
        v1684 = v1399;
        v569 = 0;
        v566 = 0LL;
        v1685 = 824LL;
      }
      else
      {
        v569 = -1073425151;
      }
      if ( v566 )
        MemoryFree(v566);
      if ( v569 < 0 )
        goto LABEL_749;
      v570 = v1684;
      HIBYTE(v1684[v1685 / 2 - 1]) = 0;
      memset_0(&unk_1805A0520, 0, 0x60uLL);
      while ( *(_BYTE *)v570 )
      {
        v571 = v570;
        v572 = -1LL;
        do
          ++v572;
        while ( v570[v572] );
        v573 = &v570[v572];
        v574 = (char *)&unk_1805A0520 + 24 * v1384;
        if ( !GetModuleHandleExW(0, v571, (HMODULE *)v574) )
        {
          LODWORD(v162) = 0;
LABEL_749:
          v568 = -1073741702;
          break;
        }
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
        v1455 = v577;
        for ( ii = 0; v578 < v1455; ii = ++v578 )
        {
          v579 = (const CHAR *)v570;
          v580 = -1LL;
          do
            ++v580;
          while ( *((_BYTE *)v570 + v580) );
          v570 = (LPCWSTR)((char *)v570 + v580 + 1);
          if ( v568 >= 0 )
          {
            v581 = GetProcAddress(*(HMODULE *)v574, v579);
            if ( !v581 )
            {
              LODWORD(v162) = 0;
              goto LABEL_750;
            }
            off_1805960F0[v1466] = v581;
            v578 = ii;
          }
          ++v1466;
        }
        ++v1384;
        LODWORD(v162) = 0;
      }
LABEL_750:
      v582 = (WCHAR *)v1684;
      if ( v1684 )
      {
        v583 = GetProcessHeap();
        HeapFree(v583, 0, v582);
      }
      if ( v568 < 0 )
      {
        v584 = (HMODULE *)&unk_1805A0520;
        v585 = 4LL;
        do
        {
          if ( *v584 )
            FreeLibrary(*v584);
          v584 += 3;
          --v585;
        }
        while ( v585 );
        memset_0(&unk_1805A0520, 0, 0x60uLL);
        memcpy_0(off_1805960F0, off_180472760, 0x170uLL);
LABEL_761:
        v1467 = 0;
        _InterlockedExchange(&dword_1805A0710, 0);
        v1686 = 0LL;
        v1756 = 0LL;
        v1456 = 0;
        v1400 = 0LL;
        v1416 = 0LL;
        v1431 = 0LL;
        while ( _InterlockedCompareExchange(&dword_1805A0710, 1, 0) )
          ;
        v586 = dword_18059F558;
        if ( !dword_18059F558 )
        {
          v1384 = 0;
          v1482 = 0;
          v1687 = 0LL;
          v1688 = 0LL;
          v587 = (char *)MemoryAlloc(0x338uLL);
          v1445 = (const WCHAR *)v587;
          if ( !v587 )
            goto LABEL_797;
          v588 = -1;
          v589 = v587 + 7;
          v590 = 0;
          v591 = (unsigned __int8 *)&unk_1804CAD42;
          v592 = 0;
          v593 = 103LL;
          do
          {
            v594 = *(v591 - 1) | (*(v591 - 2) << 8);
            v595 = v591[2] << 8;
            v596 = *v591;
            v591 += 8;
            v597 = *(v591 - 7) | ((v596 | (v594 << 8)) << 8);
            v598 = v597 ^ v592;
            v599 = *(v591 - 3) | ((*(v591 - 4) | ((*(v591 - 5) | v595) << 8)) << 8);
            v600 = v599 ^ (unsigned int)v162 ^ v598 ^ 0xAC987321;
            v601 = (__ROL4__(v600, 10) + 4991 * __ROL4__(v600 + 1419157410, 5)) ^ v598;
            v602 = (43881 * __ROR4__(v601 + 133239679, 9) - __ROL4__(v601, 2)) ^ v600;
            v603 = (24670 * v602 - (v602 >> 13) - 123127970) ^ v601;
            v604 = (2033 * __ROL4__(v603 ^ 0xAB69, 6) - __ROL4__(v603, 2)) ^ v602;
            v605 = (133239679 - (v604 ^ 0xAB69605E)) ^ v603;
            v606 = (43881 * (v605 ^ 0x137F)) ^ __ROR4__(v605, 6) ^ v604;
            v607 = (__ROL4__(v606, 2) + 24670 * __ROR4__(v606 + 133239679, 15)) ^ v605;
            v608 = (2033 * __ROR4__(v607 + 1419157410, 14) - __ROL4__(v607, 8)) ^ v606;
            v609 = __ROR4__(v608, 10) ^ (4991 * __ROR4__(v608 ^ 0xAB69605E, 12)) ^ v607;
            v610 = v608 ^ (v609 >> 10) ^ (43881 * (v609 ^ 0x7F1));
            v611 = (2033 * (__ROR4__(~v610, 5) + 24670)) ^ v609;
            v612 = v610 ^ (v611 - 2033) ^ 0xAB69605E;
            v613 = ((v612 >> 2) + 4991 * __ROL4__(v610 ^ (v611 - 2033) ^ 0xAB6967AF, 2)) ^ v611;
            v614 = (__ROL4__(v613, 7) + 43881 * __ROR4__(v613 - 133239679, 6)) ^ v612;
            v615 = (24670 * (v614 ^ 0x137F) + __ROR4__(v614, 9)) ^ v613;
            v616 = (__ROL4__(v615, 7) + 2033 * __ROL4__(v615 ^ 0xAB69, 5)) ^ v614;
            v617 = v616 ^ v615 ^ 0xAC987321;
            v618 = (4991 * __ROR4__(v617, 3) - 219010071) ^ v616;
            v619 = (24670 * __ROR4__(v618 - 133239679, 1) - __ROR4__(v618, 6)) ^ v617;
            v620 = (__ROL4__(v619, 14) + 2033 * __ROL4__(v619 - 1419157410, 3)) ^ v618;
            v621 = (4991 * __ROL4__(v620 - 1419157410, 15) - __ROR4__(v620, 14)) ^ v619;
            v622 = (v621 >> 3) ^ (43881 * (v621 ^ 0x605E)) ^ v620;
            v623 = 24670 * __ROL4__(v622 ^ 0x7F1137F, 4);
            v624 = v622;
            v625 = v588 ^ v622;
            v588 = v599;
            v626 = v590 ^ __ROL4__(v624, 2) ^ v623;
            v590 = v597;
            v627 = v626 ^ v621;
            *(v589 - 4) = v627;
            *v589 = v625;
            v589 += 8;
            v628 = __ROR4__(v627, 8);
            *(v589 - 13) = v628;
            v629 = __ROR4__(v625, 8);
            *(v589 - 9) = v629;
            v630 = __ROR4__(v628, 8);
            *(v589 - 14) = v630;
            v631 = __ROR4__(v629, 8);
            *(v589 - 10) = v631;
            v632 = __ROR4__(v630, 8);
            v633 = __ROR4__(v631, 8);
            *(v589 - 15) = v632;
            *(v589 - 11) = v633;
            LODWORD(v162) = __ROR4__(v633, 8);
            v592 = __ROR4__(v632, 8);
            --v593;
          }
          while ( v593 );
          v634 = 0;
          v516 = v1476;
          v635 = 0LL;
          v87 = v1507;
          v636 = 0;
          v637 = (WCHAR *)v1445;
          do
            v634 ^= *((_BYTE *)v1445 + v635++);
          while ( v635 < 0x338 );
          if ( v634 == 64LL )
          {
            v1687 = v1445;
            v638 = 0;
            v637 = 0LL;
            v1688 = 824LL;
          }
          else
          {
            v638 = -1073425151;
          }
          if ( v637 )
            MemoryFree(v637);
          if ( v638 >= 0 )
          {
            v639 = v1687;
            HIBYTE(v1687[v1688 / 2 - 1]) = 0;
            memset_0(&unk_1805A0520, 0, 0x60uLL);
            while ( *(_BYTE *)v639 )
            {
              v640 = v639;
              v641 = -1LL;
              do
                ++v641;
              while ( v639[v641] );
              v642 = &v639[v641];
              v643 = (char *)&unk_1805A0520 + 24 * v1482;
              if ( !GetModuleHandleExW(0, v640, (HMODULE *)v643) )
                goto LABEL_797;
              v636 = 0;
              if ( **(_WORD **)v643 == 23117
                && (v644 = *(int *)(*(_QWORD *)v643 + 60LL), (unsigned int)v644 < 0x10000000)
                && (v645 = *(_QWORD *)v643 + v644, v645 >= *(_QWORD *)v643)
                && *(_DWORD *)v645 == 17744 )
              {
                if ( ((*(_WORD *)(v645 + 24) - 267) & 0xFEFF) != 0 )
                {
                  v636 = -1073741811;
                }
                else
                {
                  *(_QWORD *)(v643 + 12) = *(_QWORD *)(v645 + 136);
                  *((_DWORD *)v643 + 2) = *(_DWORD *)(v645 + 80);
                }
              }
              else
              {
                v636 = -1073741701;
              }
              v646 = *(_DWORD *)(v642 + 1);
              v647 = 0;
              v639 = v642 + 3;
              Srcb = v646;
              for ( jj = 0; v647 < Srcb; jj = v647 )
              {
                v648 = (const CHAR *)v639;
                v649 = -1LL;
                do
                  ++v649;
                while ( *((_BYTE *)v639 + v649) );
                v639 = (LPCWSTR)((char *)v639 + v649 + 1);
                if ( v636 >= 0 )
                {
                  v650 = GetProcAddress(*(HMODULE *)v643, v648);
                  if ( !v650 )
                    goto LABEL_798;
                  off_1805960F0[v1384] = v650;
                  v647 = jj;
                }
                ++v1384;
                ++v647;
              }
              ++v1482;
            }
          }
          else
          {
LABEL_797:
            v636 = -1073741702;
          }
LABEL_798:
          v651 = (WCHAR *)v1687;
          if ( v1687 )
          {
            v652 = GetProcessHeap();
            HeapFree(v652, 0, v651);
          }
          if ( v636 < 0 )
          {
            v653 = (HMODULE *)&unk_1805A0520;
            v654 = 4LL;
            do
            {
              if ( *v653 )
                FreeLibrary(*v653);
              v653 += 3;
              --v654;
            }
            while ( v654 );
            memset_0(&unk_1805A0520, 0, 0x60uLL);
            memcpy_0(off_1805960F0, off_180472760, 0x170uLL);
LABEL_809:
            _InterlockedExchange(&dword_1805A0710, 0);
            v655 = v516 & 0xF;
            Srcc = v655;
            v1872[0] = (v516 >> 4) & 0xF;
            v1872[1] = (v516 >> 8) & 0xF;
            v1817 = 0LL;
            v1872[2] = (v516 >> 12) & 0xF;
            v656 = 0LL;
            v1478 = -1;
            v1446 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961E8[0])(0LL, 0LL, 1027LL);
            if ( !v1446 )
            {
              v657 = GetLastError();
              v658 = v657;
              if ( v657 > 0 )
                v658 = (unsigned __int16)v657 | 0x80070000;
              if ( v658 >= 0 )
                v658 = -2147467259;
LABEL_931:
              v760 = 1;
              while ( _InterlockedCompareExchange(&dword_1805A0710, 1, 0) )
                ;
              v761 = dword_18059F558;
              if ( dword_18059F558 > 0 )
              {
                --dword_18059F558;
                if ( v761 == 1 )
                {
                  v762 = 4LL;
                  v763 = (HMODULE *)&unk_1805A0520;
                  do
                  {
                    if ( *v763 )
                      FreeLibrary(*v763);
                    v763 += 3;
                    --v762;
                  }
                  while ( v762 );
                  memset_0(&unk_1805A0520, 0, 0x60uLL);
                  memcpy_0(off_1805960F0, off_180472760, 0x170uLL);
                  v760 = 1;
                }
              }
              _InterlockedExchange(&dword_1805A0710, 0);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1686);
              if ( v658 < 0 )
              {
                v162 = 0LL;
                goto LABEL_1230;
              }
              v764 = v1817;
              v1695 = v1817;
              memset_0(v1770, 0, 0x68uLL);
              v765 = (CToastCenterExperienceManager *)v1517;
              v766 = ((__int64 (__fastcall *)(LPVOID, __int64))off_180596140[0])(v1517, 7LL);
              if ( !v766
                || !((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180596158[0])(v766, 104LL, v1770)
                || v1773 != 32
                || !v1774
                || v1771 <= 0
                || v1772 <= 0 )
              {
                v760 = 0;
              }
              v1576 = v760;
              if ( v760 || v655 == 1 )
              {
                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180596240)(&v1806, v764, HIDWORD(v1695));
                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180596240)(&v1807, v764, HIDWORD(v1695));
                if ( v655 == 1 )
                  v1628 = ((__int64 (__fastcall *)(_QWORD))off_180596118[0])(v1798 == 0 ? 0xB26720 : 0);
              }
              v767 = 0;
              v1473 = off_180596170(v765, (struct CSingleViewShellExperience *)1);
              v768 = 2064;
              if ( v1797 )
                v768 = 133138;
              v1468 = v768;
              if ( v1576 )
              {
                v769 = v1799;
                v1457 = v1798;
                v1401 = v1802;
                memset_0(v1775, 0, 0x68uLL);
                memset_0(v1779, 0, 0x68uLL);
                v1417 = 0LL;
                v1387 = 0;
                v1395 = 0;
                v1838 = 0LL;
                v1839 = 0;
                v1836 = 0LL;
                v1837 = 0LL;
                v1818 = 0LL;
                if ( !v769 )
                {
LABEL_1128:
                  v162 = 0LL;
                  goto LABEL_1149;
                }
                v770 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180596140[0])(v765, 7LL);
                if ( v770 )
                {
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180596158[0])(v770, 104LL, v1775) )
                  {
                    v1417 = v1778;
                    v1387 = v1776;
                    v1395 = v1777;
                  }
                  v771 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180596100[0])(v765);
                  v772 = (CToastCenterExperienceManager *)v771;
                  if ( v771 )
                  {
                    DWORD1(v1836) = DWORD2(v1806) - v1806;
                    v773 = 0;
                    DWORD2(v1836) = DWORD1(v1806) - HIDWORD(v1806);
                    v1696 = 0LL;
                    v1837 = 0LL;
                    v1838 = 0LL;
                    v1839 = 0;
                    LODWORD(v1836) = 40;
                    HIDWORD(v1836) = 2097153;
                    v1432 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180596108[0])(
                                                  v771,
                                                  &v1836,
                                                  0LL,
                                                  &v1696,
                                                  0LL,
                                                  0);
                    if ( v1432 )
                    {
                      v810 = ((unsigned int (__fastcall *)(unsigned __int16 *, __int64, _BYTE *))off_180596158[0])(
                               v1432,
                               104LL,
                               v1779) == 0;
                      v811 = 0LL;
                      if ( !v810 )
                        v811 = v1780;
                      DWORD2(v1818) = DWORD2(v1806) - v1806;
                      HIDWORD(v1818) = HIDWORD(v1806) - DWORD1(v1806);
                      v1447 = v811;
                      ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_180596168)(
                        v772,
                        v1432);
                      off_180596170(v772, (struct CSingleViewShellExperience *)1);
                      v812 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_180596168)(
                               v772,
                               v1401);
                      v813 = off_1805961D8[0];
                      v1405 = (unsigned __int16 *)v812;
                      v814 = ((__int64 (__fastcall *)(_QWORD))off_180596160[0])(0LL);
                      ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v813)(
                        v772,
                        &v1818,
                        v814);
                      ((void (__fastcall *)(CToastCenterExperienceManager *, void *, __int64, __int128 *, int, _QWORD))off_1805961C8)(
                        v772,
                        v769,
                        0xFFFFFFFFLL,
                        &v1818,
                        v1468,
                        0LL);
                      if ( Srcc == 1 )
                      {
                        if ( v1457 )
                          v1459 = ((__int64 (__fastcall *)(__int64))off_180596208[0])(8LL);
                        else
                          v1459 = 0xFFFFFF;
                      }
                      else
                      {
                        v1459 = -5723992;
                      }
                      v815 = 0;
                      v816 = v1387;
                      v817 = -(int)v1806;
                      v818 = 0;
                      if ( (int)v1806 >= 0 )
                      {
                        v815 = v1806;
                        v817 = 0;
                      }
                      v819 = -DWORD1(v1806);
                      if ( (SDWORD1(v1806) & 0x80000000) == 0 )
                      {
                        v819 = 0;
                        v818 = DWORD1(v1806);
                      }
                      v820 = DWORD2(v1818) - v817;
                      if ( DWORD2(v1818) - v817 >= v1387 - v815 )
                        v820 = v1387 - v815;
                      v821 = HIDWORD(v1818) - v819;
                      if ( HIDWORD(v1818) - v819 >= v1395 - v818 )
                        v821 = v1395 - v818;
                      if ( v820 > 0 && v821 > 0 )
                      {
                        v822 = (unsigned __int8 *)&v1447[4 * v817 + 4 * (__int64)(v819 * DWORD2(v1818))];
                        v823 = v818 * v1387;
                        v1448 = v822;
                        v1388 = 0;
                        v824 = &v1417[2 * v815 + 2 * (__int64)v823];
                        v1440 = 4LL * SDWORD2(v1818);
                        v1492 = 2 * v816;
                        v1418 = v824;
                        do
                        {
                          v1396 = 0;
                          v825 = v822 + 2;
                          v826 = 0;
                          v827 = (char *)v824 - (char *)v822;
                          do
                          {
                            if ( (unsigned __int8)((*v825 + *(v825 - 2) + 2 * (unsigned int)*(v825 - 1)) >> 2) != 0xFF )
                            {
                              v828 = (unsigned __int8)~((*v825 + *(v825 - 2) + 2 * (unsigned int)*(v825 - 1)) >> 2);
                              v825[v827] -= ~((*v825 + *(v825 - 2) + 2 * (unsigned int)*(v825 - 1)) >> 2)
                                          * (v1459 - v825[v827]);
                              v829 = v825[v827 - 1];
                              v830 = (unsigned __int64)(2155905153LL * v828 * (BYTE1(v1459) - v829)) >> 32;
                              v825[v827 - 1] = v829 + (v830 >> 7 < 0) + (v830 >> 7);
                              v831 = v825[v827 - 2];
                              v832 = (unsigned __int64)(2155905153LL * v828 * (BYTE2(v1459) - v831)) >> 32;
                              v825[v827 - 2] = v831 + (v832 >> 7 < 0) + (v832 >> 7);
                              v826 = v1396;
                              v825[v827 + 1] += v828 * (255 - v825[v827 + 1]) / 255;
                            }
                            ++v826;
                            v825 += 4;
                            v1396 = v826;
                          }
                          while ( v826 < v820 );
                          v822 = &v1448[v1440];
                          v824 = &v1418[v1492];
                          v1448 += v1440;
                          v1418 = (unsigned __int16 *)((char *)v1418 + v1492 * 2);
                          ++v1388;
                        }
                        while ( v1388 < v821 );
                        v87 = v1507;
                        v773 = 0;
                      }
                      ((void (__fastcall *)(unsigned __int16 *))off_180596128)(v1432);
                      v162 = 0LL;
                      if ( v1405 )
                        ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_180596168)(
                          v772,
                          v1405);
                    }
                    else
                    {
                      v774 = GetLastError();
                      v162 = 0LL;
                      v773 = v774;
                      if ( v774 > 0 )
                        v773 = (unsigned __int16)v774 | 0x80070000;
                      if ( v773 >= 0 )
                        v773 = -2147467259;
                    }
                    ((void (__fastcall *)(CToastCenterExperienceManager *))off_180596120[0])(v772);
                    if ( v773 < 0 )
                      goto LABEL_1149;
                    v833 = v1800;
                    v1460 = v1798;
                    v1406 = v1803;
                    memset_0(v1781, 0, 0x68uLL);
                    memset_0(v1785, 0, 0x68uLL);
                    v1419 = 0LL;
                    v1389 = 0;
                    v1397 = 0;
                    v1842 = 0LL;
                    v1843 = 0;
                    v1840 = 0LL;
                    v1841 = 0LL;
                    v1819 = 0LL;
                    if ( !v833 )
                      goto LABEL_1128;
                    v834 = v1517;
                    v835 = ((__int64 (__fastcall *)(LPVOID, __int64))off_180596140[0])(v1517, 7LL);
                    if ( v835 )
                    {
                      if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180596158[0])(
                             v835,
                             104LL,
                             v1781) )
                      {
                        v1419 = v1784;
                        v1389 = v1782;
                        v1397 = v1783;
                      }
                      v836 = ((__int64 (__fastcall *)(LPVOID))off_180596100[0])(v834);
                      v837 = (CToastCenterExperienceManager *)v836;
                      if ( v836 )
                      {
                        DWORD1(v1840) = DWORD2(v1807) - v1807;
                        v838 = 0;
                        DWORD2(v1840) = DWORD1(v1807) - HIDWORD(v1807);
                        v1697 = 0LL;
                        v1841 = 0LL;
                        v1842 = 0LL;
                        v1843 = 0;
                        LODWORD(v1840) = 40;
                        HIDWORD(v1840) = 2097153;
                        v1449 = (LPVOID)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180596108[0])(
                                          v836,
                                          &v1840,
                                          0LL,
                                          &v1697,
                                          0LL,
                                          0);
                        if ( !v1449 )
                        {
                          v839 = GetLastError();
                          v162 = 0LL;
                          v838 = v839;
                          if ( v839 > 0 )
                            v838 = (unsigned __int16)v839 | 0x80070000;
                          if ( v838 >= 0 )
                            v838 = -2147467259;
                          goto LABEL_1121;
                        }
                        v810 = ((unsigned int (__fastcall *)(LPVOID, __int64, _BYTE *))off_180596158[0])(
                                 v1449,
                                 104LL,
                                 v1785) == 0;
                        v840 = 0LL;
                        if ( !v810 )
                          v840 = v1786;
                        DWORD2(v1819) = DWORD2(v1807) - v1807;
                        HIDWORD(v1819) = HIDWORD(v1807) - DWORD1(v1807);
                        v1440 = v840;
                        ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_180596168)(v837, v1449);
                        off_180596170(v837, (struct CSingleViewShellExperience *)1);
                        v841 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_180596168)(
                                 v837,
                                 v1406);
                        v842 = off_1805961D8[0];
                        v1407 = (unsigned __int16 *)v841;
                        v843 = ((__int64 (__fastcall *)(_QWORD))off_180596160[0])(0LL);
                        ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v842)(
                          v837,
                          &v1819,
                          v843);
                        ((void (__fastcall *)(CToastCenterExperienceManager *, void *, __int64, __int128 *, int, _QWORD))off_1805961C8)(
                          v837,
                          v833,
                          0xFFFFFFFFLL,
                          &v1819,
                          v1468,
                          0LL);
                        if ( Srcc == 1 )
                        {
                          if ( !v1460 )
                          {
                            Srcd = 0xFFFFFF;
LABEL_1102:
                            v845 = 0;
                            v846 = -(int)v1807;
                            v847 = 0;
                            if ( (int)v1807 >= 0 )
                            {
                              v845 = v1807;
                              v846 = 0;
                            }
                            v848 = -DWORD1(v1807);
                            if ( (SDWORD1(v1807) & 0x80000000) == 0 )
                            {
                              v848 = 0;
                              v847 = DWORD1(v1807);
                            }
                            v849 = DWORD2(v1819) - v846;
                            if ( DWORD2(v1819) - v846 >= v1389 - v845 )
                              v849 = v1389 - v845;
                            v850 = HIDWORD(v1819) - v848;
                            if ( HIDWORD(v1819) - v848 >= v1397 - v847 )
                              v850 = v1397 - v847;
                            if ( v849 > 0 && v850 > 0 )
                            {
                              v851 = v1478;
                              v1470 = 0;
                              v852 = v1440 + 4 * (v846 + (__int64)(DWORD2(v1819) * v848));
                              v1440 = v852;
                              v853 = &v1419[2 * v845 + 2 * (__int64)(v1389 * v847)];
                              v1493 = 4LL * SDWORD2(v1819);
                              v1511 = 2LL * v1389;
                              v1420 = v853;
                              do
                              {
                                v1479 = 0;
                                v854 = (unsigned __int8 *)(v852 + 2);
                                v855 = 0;
                                v856 = (char *)v853 - v852;
                                do
                                {
                                  if ( (unsigned __int8)((*v854 + *(v854 - 2) + 2 * (unsigned int)*(v854 - 1)) >> 2) != 0xFF )
                                  {
                                    v857 = (unsigned __int8)~((*v854 + *(v854 - 2) + 2 * (unsigned int)*(v854 - 1)) >> 2);
                                    v854[(_QWORD)v856] -= ~((*v854 + *(v854 - 2) + 2 * (unsigned int)*(v854 - 1)) >> 2)
                                                        * (v851 - v854[(_QWORD)v856]);
                                    v858 = v854[(_QWORD)v856 - 1];
                                    v859 = (unsigned __int64)(2155905153LL * v857 * (BYTE1(Srcd) - v858)) >> 32;
                                    v854[(_QWORD)v856 - 1] = v858 + (v859 >> 7 < 0) + (v859 >> 7);
                                    v860 = v854[(_QWORD)v856 - 2];
                                    v861 = (unsigned __int64)(2155905153LL * v857 * (BYTE2(Srcd) - v860)) >> 32;
                                    v854[(_QWORD)v856 - 2] = v860 + (v861 >> 7 < 0) + (v861 >> 7);
                                    v862 = v854[(_QWORD)v856 + 1];
                                    v863 = v857 * (255 - v862);
                                    v855 = v1479;
                                    v854[(_QWORD)v856 + 1] = v862 + v863 / 255;
                                  }
                                  ++v855;
                                  v854 += 4;
                                  v1479 = v855;
                                }
                                while ( v855 < v849 );
                                v852 = v1493 + v1440;
                                v853 = &v1420[v1511];
                                v1440 += v1493;
                                v1420 = (unsigned __int16 *)((char *)v1420 + v1511 * 2);
                                ++v1470;
                              }
                              while ( v1470 < v850 );
                              v87 = v1507;
                              v838 = 0;
                            }
                            ((void (__fastcall *)(LPVOID))off_180596128)(v1449);
                            v162 = 0LL;
                            if ( v1407 )
                              ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_180596168)(
                                v837,
                                v1407);
LABEL_1121:
                            ((void (__fastcall *)(CToastCenterExperienceManager *))off_180596120[0])(v837);
                            if ( v838 >= 0 )
                            {
                              v864 = (CToastCenterExperienceManager *)v1517;
                              goto LABEL_1228;
                            }
LABEL_1149:
                            if ( v1628 )
                              ((void (__fastcall *)(__int64))off_180596128)(v1628);
LABEL_1230:
                            if ( v1799 )
                            {
                              v940 = -1LL;
                              do
                                ++v940;
                              while ( *((_WORD *)v1799 + v940) );
                              memset(v1799, 0, 2 * v940 + 2);
                              MemoryFree(v1799);
                              v1799 = 0LL;
                            }
                            if ( v1800 )
                            {
                              v941 = -1LL;
                              do
                                ++v941;
                              while ( *((_WORD *)v1800 + v941) );
                              memset(v1800, 0, 2 * v941 + 2);
                              MemoryFree(v1800);
                              v1800 = 0LL;
                            }
                            if ( v1801 )
                            {
                              v942 = -1LL;
                              do
                                ++v942;
                              while ( *((_WORD *)v1801 + v942) );
                              memset(v1801, 0, 2 * v942 + 2);
                              MemoryFree(v1801);
                              v1801 = 0LL;
                            }
                            if ( v1802 )
                            {
                              off_180596128();
                              v1802 = 0LL;
                            }
                            if ( v1803 )
                            {
                              off_180596128();
                              v1803 = 0LL;
                            }
                            if ( v1804 )
                            {
                              off_180596128();
                              v1804 = 0LL;
                            }
                            while ( _InterlockedCompareExchange(&dword_1805A0710, 1, 0) )
                              ;
                            v943 = dword_18059F558;
                            if ( dword_18059F558 > 0 )
                            {
                              --dword_18059F558;
                              if ( v943 == 1 )
                              {
                                v944 = (HMODULE *)&unk_1805A0520;
                                v945 = 4LL;
                                do
                                {
                                  if ( *v944 )
                                    FreeLibrary(*v944);
                                  v944 += 3;
                                  --v945;
                                }
                                while ( v945 );
                                memset_0(&unk_1805A0520, 0, 0x60uLL);
                                memcpy_0(off_1805960F0, off_180472760, 0x170uLL);
                              }
                            }
                            _InterlockedExchange(&dword_1805A0710, 0);
                            v1410 = dword_18059F560;
                            v1505 = off_180596188[0]() - qword_18059F550;
                            v1870 = 0LL;
                            v1867 = 0LL;
                            v1868 = 0LL;
                            v1869 = 0LL;
                            while ( _InterlockedCompareExchange(&dword_1805A0710, 1, 0) )
                              ;
                            v946 = dword_18059F558;
                            if ( dword_18059F558 )
                              goto LABEL_1304;
                            v1425 = 0;
                            v1452 = 0;
                            v1707 = 0LL;
                            v1708 = 0LL;
                            v947 = (char *)MemoryAlloc(0x338uLL);
                            v1519 = v947;
                            if ( v947 )
                            {
                              v948 = v947 + 7;
                              v949 = 0;
                              v950 = 103LL;
                              v951 = -1;
                              v952 = 0;
                              v953 = (unsigned __int8 *)&unk_1804CAD42;
                              v954 = 0;
                              do
                              {
                                v955 = *(v953 - 1) | (*(v953 - 2) << 8);
                                v956 = v953[2] << 8;
                                v957 = *v953;
                                v953 += 8;
                                v958 = *(v953 - 7) | ((v957 | (v955 << 8)) << 8);
                                v959 = v958 ^ v954;
                                v960 = *(v953 - 3) | ((*(v953 - 4) | ((*(v953 - 5) | v956) << 8)) << 8);
                                v961 = v959 ^ v960 ^ v952 ^ 0xAC987321;
                                v962 = (__ROL4__(v961, 10) + 4991 * __ROL4__(v961 + 1419157410, 5)) ^ v959;
                                v963 = (43881 * __ROR4__(v962 + 133239679, 9) - __ROL4__(v962, 2)) ^ v961;
                                v964 = (24670 * v963 - (v963 >> 13) - 123127970) ^ v962;
                                v965 = (2033 * __ROL4__(v964 ^ 0xAB69, 6) - __ROL4__(v964, 2)) ^ v963;
                                v966 = (133239679 - (v965 ^ 0xAB69605E)) ^ v964;
                                v967 = (43881 * (v966 ^ 0x137F)) ^ __ROR4__(v966, 6) ^ v965;
                                v968 = (__ROL4__(v967, 2) + 24670 * __ROR4__(v967 + 133239679, 15)) ^ v966;
                                v969 = (2033 * __ROR4__(v968 + 1419157410, 14) - __ROL4__(v968, 8)) ^ v967;
                                v970 = __ROR4__(v969, 10) ^ (4991 * __ROR4__(v969 ^ 0xAB69605E, 12)) ^ v968;
                                v971 = (v970 >> 10) ^ (43881 * (v970 ^ 0x7F1)) ^ v969;
                                v972 = (2033 * (__ROR4__(~v971, 5) + 24670)) ^ v970;
                                v973 = v971 ^ (v972 - 2033) ^ 0xAB69605E;
                                v974 = ((v973 >> 2) + 4991 * __ROL4__(v971 ^ (v972 - 2033) ^ 0xAB6967AF, 2)) ^ v972;
                                v975 = (__ROL4__(v974, 7) + 43881 * __ROR4__(v974 - 133239679, 6)) ^ v973;
                                v976 = (24670 * (v975 ^ 0x137F) + __ROR4__(v975, 9)) ^ v974;
                                v977 = (__ROL4__(v976, 7) + 2033 * __ROL4__(v976 ^ 0xAB69, 5)) ^ v975;
                                v978 = v976 ^ v977 ^ 0xAC987321;
                                v979 = (4991 * __ROR4__(v978, 3) - 219010071) ^ v977;
                                v980 = (24670 * __ROR4__(v979 - 133239679, 1) - __ROR4__(v979, 6)) ^ v978;
                                v981 = (__ROL4__(v980, 14) + 2033 * __ROL4__(v980 - 1419157410, 3)) ^ v979;
                                v982 = (4991 * __ROL4__(v981 - 1419157410, 15) - __ROR4__(v981, 14)) ^ v980;
                                v983 = (v982 >> 3) ^ (43881 * (v982 ^ 0x605E)) ^ v981;
                                v984 = 24670 * __ROL4__(v983 ^ 0x7F1137F, 4);
                                v985 = v983;
                                v986 = v951 ^ v983;
                                v951 = v960;
                                v987 = v949 ^ __ROL4__(v985, 2) ^ v984;
                                v949 = v958;
                                v988 = v987 ^ v982;
                                *(v948 - 4) = v988;
                                *v948 = v986;
                                v948 += 8;
                                v989 = __ROR4__(v988, 8);
                                *(v948 - 13) = v989;
                                v990 = __ROR4__(v986, 8);
                                *(v948 - 9) = v990;
                                v991 = __ROR4__(v989, 8);
                                *(v948 - 14) = v991;
                                v992 = __ROR4__(v990, 8);
                                *(v948 - 10) = v992;
                                v993 = __ROR4__(v991, 8);
                                v994 = __ROR4__(v992, 8);
                                *(v948 - 15) = v993;
                                *(v948 - 11) = v994;
                                v952 = __ROR4__(v994, 8);
                                v954 = __ROR4__(v993, 8);
                                --v950;
                              }
                              while ( v950 );
                              v87 = v1507;
                              v995 = 0;
                              v996 = 0LL;
                              v997 = v1519;
                              v998 = 0;
                              do
                                v998 ^= *((_BYTE *)v1519 + v996++);
                              while ( v996 < 0x338 );
                              if ( v998 == 64LL )
                              {
                                v1707 = (LPCWSTR)v1519;
                                v999 = 0;
                                v997 = 0LL;
                                v1708 = 824LL;
                              }
                              else
                              {
                                v999 = -1073425151;
                              }
                              if ( v997 )
                                MemoryFree(v997);
                              v162 = 0LL;
                              if ( v999 >= 0 )
                              {
                                v1000 = v1707;
                                HIBYTE(v1707[v1708 / 2 - 1]) = 0;
                                memset_0(&unk_1805A0520, 0, 0x60uLL);
                                while ( *(_BYTE *)v1000 )
                                {
                                  v1001 = v1000;
                                  v1002 = -1LL;
                                  do
                                    ++v1002;
                                  while ( v1000[v1002] );
                                  v1003 = &v1000[v1002];
                                  v1004 = (char *)&unk_1805A0520 + 24 * v1452;
                                  if ( !GetModuleHandleExW(0, v1001, (HMODULE *)v1004) )
                                    goto LABEL_1294;
                                  v995 = 0;
                                  if ( **(_WORD **)v1004 == 23117
                                    && (v1005 = *(int *)(*(_QWORD *)v1004 + 60LL), (unsigned int)v1005 < 0x10000000)
                                    && (v1006 = *(_QWORD *)v1004 + v1005, v1006 >= *(_QWORD *)v1004)
                                    && *(_DWORD *)v1006 == 17744 )
                                  {
                                    if ( ((*(_WORD *)(v1006 + 24) - 267) & 0xFEFF) != 0 )
                                    {
                                      v995 = -1073741811;
                                    }
                                    else
                                    {
                                      *(_QWORD *)(v1004 + 12) = *(_QWORD *)(v1006 + 136);
                                      *((_DWORD *)v1004 + 2) = *(_DWORD *)(v1006 + 80);
                                    }
                                  }
                                  else
                                  {
                                    v995 = -1073741701;
                                  }
                                  v1007 = *(_DWORD *)(v1003 + 1);
                                  v1000 = v1003 + 3;
                                  v1437 = v1007;
                                  if ( v1007 )
                                  {
                                    do
                                    {
                                      v1008 = (const CHAR *)v1000;
                                      v1009 = -1LL;
                                      do
                                        ++v1009;
                                      while ( *((_BYTE *)v1000 + v1009) );
                                      v1000 = (LPCWSTR)((char *)v1000 + v1009 + 1);
                                      if ( v995 >= 0 )
                                      {
                                        v1010 = GetProcAddress(*(HMODULE *)v1004, v1008);
                                        if ( !v1010 )
                                        {
                                          v162 = 0LL;
                                          goto LABEL_1295;
                                        }
                                        off_1805960F0[v1425] = v1010;
                                      }
                                      ++v1425;
                                      LODWORD(v162) = (_DWORD)v162 + 1;
                                    }
                                    while ( (unsigned int)v162 < v1437 );
                                  }
                                  ++v1452;
                                  v162 = 0LL;
                                }
                                goto LABEL_1295;
                              }
                            }
                            else
                            {
                              v162 = 0LL;
                            }
LABEL_1294:
                            v995 = -1073741702;
LABEL_1295:
                            v1011 = (WCHAR *)v1707;
                            if ( v1707 )
                            {
                              v1012 = GetProcessHeap();
                              HeapFree(v1012, 0, v1011);
                            }
                            if ( v995 < 0 )
                            {
                              v1013 = (HMODULE *)&unk_1805A0520;
                              v1014 = 4LL;
                              do
                              {
                                if ( *v1013 )
                                  FreeLibrary(*v1013);
                                v1013 += 3;
                                --v1014;
                              }
                              while ( v1014 );
                              v1015 = (HMODULE *)&unk_1805A0520;
                              memset_0(&unk_1805A0520, 0, 0x60uLL);
                              memcpy_0(off_1805960F0, off_180472760, 0x170uLL);
                              goto LABEL_1305;
                            }
                            v946 = dword_18059F558;
LABEL_1304:
                            v1015 = (HMODULE *)&unk_1805A0520;
                            dword_18059F558 = v946 + 1;
LABEL_1305:
                            v1016 = 4LL;
                            _InterlockedExchange(&dword_1805A0710, 0);
                            LODWORD(v1870) = v1410;
                            LODWORD(v1867) = v1505;
                            v1866 = 1;
                            LODWORD(v1868) = -1721306479;
                            DWORD2(v1867) = 1;
                            LODWORD(v1869) = 1;
                            DWORD2(v1868) = 1;
                            DWORD2(v1869) = 1;
                            ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1805961C0)(
                              0LL,
                              8225LL,
                              4LL,
                              &v1866);
                            while ( _InterlockedCompareExchange(&dword_1805A0710, 1, 0) )
                              ;
                            v1017 = dword_18059F558;
                            if ( dword_18059F558 > 0 )
                            {
                              --dword_18059F558;
                              if ( v1017 == 1 )
                              {
                                do
                                {
                                  if ( *v1015 )
                                    FreeLibrary(*v1015);
                                  v1015 += 3;
                                  --v1016;
                                }
                                while ( v1016 );
                                memset_0(&unk_1805A0520, 0, 0x60uLL);
                                memcpy_0(off_1805960F0, off_180472760, 0x170uLL);
                              }
                            }
                            _InterlockedExchange(&dword_1805A0710, 0);
                            ((void (__fastcall *)(_QWORD, LPVOID))off_180596250[0])(0LL, v1517);
                            v1471 = v1515;
                            goto LABEL_1314;
                          }
                          v844 = ((__int64 (__fastcall *)(__int64))off_180596208[0])(8LL);
                        }
                        else
                        {
                          v844 = -5723992;
                        }
                        Srcd = v844;
                        v1478 = v844;
                        goto LABEL_1102;
                      }
                    }
                  }
                }
LABEL_1127:
                GetLastError();
                goto LABEL_1128;
              }
              if ( v1798 || (v865 = -64, v655 == 1) )
                v865 = -1;
              BYTE2(v1461) = v865;
              HIBYTE(v1461) = 1;
              v866 = 0;
              *(_QWORD *)&v1740 = 0LL;
              LOWORD(v1461) = 0;
              LODWORD(v1741) = 0;
              v1516 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180596100[0])(v765);
              if ( !v1516 )
                goto LABEL_1127;
              if ( v655 == 1 )
              {
                v867 = DWORD2(v1807) - v1807;
                if ( DWORD2(v1807) - (int)v1807 <= DWORD2(v1806) - (int)v1806 )
                  v867 = DWORD2(v1806) - v1806;
                v868 = HIDWORD(v1807) - DWORD1(v1806);
                LODWORD(v1390) = v867;
                v869 = 0;
                HIDWORD(v1390) = HIDWORD(v1807) - DWORD1(v1806);
                if ( v1797 )
                {
                  v866 = v1806 + v867 - DWORD2(v1806);
                  LODWORD(v1740) = v866;
                  LODWORD(v1741) = v1807 + v867 - DWORD2(v1807);
                  v869 = v1741;
                  v767 = v866;
                }
                v1512 = DWORD2(v1807) + v869 - v1807;
                DWORD2(v1741) = v1512;
                v870 = DWORD2(v1806) + v767 - v1806;
                DWORD2(v1740) = v870;
                v1494 = DWORD1(v1807) - DWORD1(v1806);
                DWORD1(v1741) = DWORD1(v1807) - DWORD1(v1806);
                LODWORD(v1440) = HIDWORD(v1807) - DWORD1(v1806);
                HIDWORD(v1741) = HIDWORD(v1807) - DWORD1(v1806);
                v655 = Srcc;
                v1483 = HIDWORD(v1806) - DWORD1(v1806);
                HIDWORD(v1740) = HIDWORD(v1806) - DWORD1(v1806);
              }
              else
              {
                v867 = DWORD2(v1817);
                v868 = HIDWORD(v1817);
                v1740 = v1806;
                v870 = DWORD2(v1806);
                v866 = v1806;
                v1741 = v1807;
                v1483 = HIDWORD(v1806);
                LODWORD(v1440) = HIDWORD(v1807);
                v1512 = DWORD2(v1807);
                v1390 = *((_QWORD *)&v1817 + 1);
                v1494 = DWORD1(v1807);
              }
              LODWORD(v1832) = 40;
              v1698 = 0LL;
              DWORD2(v1832) = -v868;
              v1834 = 0LL;
              v1835 = 0;
              v1833 = 0LL;
              DWORD1(v1832) = v867;
              HIDWORD(v1832) = 2097153;
              v871 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180596108[0])(
                       v1516,
                       &v1832,
                       0LL,
                       &v1698,
                       0LL,
                       0);
              v1497 = v871;
              if ( !v871 )
              {
                GetLastError();
                v162 = 0LL;
LABEL_1147:
                if ( v1516 )
                  ((void (__fastcall *)(void *))off_180596120[0])(v1516);
                goto LABEL_1149;
              }
              ((void (__fastcall *)(void *, __int64))off_180596168)(v1516, v871);
              if ( v655 == 1 && v1628 )
              {
                v1820 = 0LL;
                v1822 = HIDWORD(v1390);
                v1821 = v867;
                ((void (__fastcall *)(void *, __int64 *))off_1805961D8[0])(v1516, &v1820);
              }
              v872 = v1799;
              v1450 = v1798;
              v1518 = (__int64)v1802;
              v1523 = v1799;
              memset_0(v1787, 0, 0x68uLL);
              memset_0(v1768, 0, 0x68uLL);
              v1524 = 0LL;
              v1433 = 0;
              v1421 = 0;
              v1846 = 0LL;
              v1847 = 0;
              v1844 = 0LL;
              v1845 = 0LL;
              v1816 = 0LL;
              if ( !v872 )
              {
LABEL_1144:
                v162 = 0LL;
                goto LABEL_1145;
              }
              v873 = v1516;
              v874 = ((__int64 (__fastcall *)(void *, __int64))off_180596140[0])(v1516, 7LL);
              if ( !v874 )
              {
LABEL_1143:
                GetLastError();
                goto LABEL_1144;
              }
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180596158[0])(v874, 104LL, v1787) )
              {
                v1524 = v1790;
                v1433 = v1788;
                v1421 = v1789;
              }
              v875 = (void *)((__int64 (__fastcall *)(void *))off_180596100[0])(v873);
              v162 = 0LL;
              v1525 = v875;
              if ( !v875 )
                goto LABEL_1154;
              DWORD2(v1844) = DWORD1(v1740) - v1483;
              v876 = v870 - v866;
              v1846 = 0LL;
              v1847 = 0;
              v1703 = 0LL;
              v1845 = 0LL;
              LODWORD(v1844) = 40;
              DWORD1(v1844) = v876;
              HIDWORD(v1844) = 2097153;
              v877 = (void *)((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180596108[0])(
                               v875,
                               &v1844,
                               0LL,
                               &v1703,
                               0LL,
                               0);
              v1519 = v877;
              if ( v877 )
              {
                v879 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_180596158[0])(v877, 104LL, v1768);
                DWORD2(v1816) = v876;
                v880 = (CToastCenterExperienceManager *)v1525;
                v881 = 0LL;
                if ( v879 )
                  v881 = v1769;
                HIDWORD(v1816) = v1483 - DWORD1(v1740);
                v1501 = v881;
                ((void (__fastcall *)(LPVOID, void *))off_180596168)(v1525, v1519);
                off_180596170(v880, (struct CSingleViewShellExperience *)1);
                v882 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180596168)(v880, v1518);
                v883 = off_1805961D8[0];
                v1518 = v882;
                v884 = ((__int64 (__fastcall *)(_QWORD))off_180596160[0])(0LL);
                ((void (__fastcall *)(LPVOID, __int128 *, __int64))v883)(v1525, &v1816, v884);
                v885 = v1525;
                ((void (__fastcall *)(LPVOID, LPVOID, __int64, __int128 *, int, _QWORD))off_1805961C8)(
                  v1525,
                  v1523,
                  0xFFFFFFFFLL,
                  &v1816,
                  v1468,
                  0LL);
                if ( Srcc == 1 )
                {
                  if ( v1450 )
                    v1451 = ((__int64 (__fastcall *)(__int64))off_180596208[0])(8LL);
                  else
                    v1451 = 0xFFFFFF;
                }
                else
                {
                  v1451 = -5723992;
                }
                v886 = -v866;
                v887 = 0;
                v888 = 0;
                if ( v866 >= 0 )
                {
                  v887 = v866;
                  v886 = 0;
                }
                v889 = -DWORD1(v1740);
                if ( (SDWORD1(v1740) & 0x80000000) == 0 )
                {
                  v888 = DWORD1(v1740);
                  v889 = 0;
                }
                v890 = DWORD2(v1816) - v886;
                if ( DWORD2(v1816) - v886 >= v1433 - v887 )
                  v890 = v1433 - v887;
                v891 = HIDWORD(v1816) - v889;
                if ( HIDWORD(v1816) - v889 >= v1421 - v888 )
                  v891 = v1421 - v888;
                if ( v890 > 0 && v891 > 0 )
                {
                  v1422 = 0;
                  v892 = (char *)(v1501 + 4 * (v886 + (__int64)(DWORD2(v1816) * v889)));
                  v1502 = v892;
                  v893 = (char *)v1524 + 4 * v887 + 4 * (__int64)(v1433 * v888);
                  v1523 = (LPVOID)(4LL * SDWORD2(v1816));
                  v1484 = 4LL * v1433;
                  v1524 = v893;
                  do
                  {
                    v1434 = 0;
                    v894 = (unsigned __int8 *)(v892 + 2);
                    v895 = 0;
                    v896 = v893 - v892;
                    do
                    {
                      if ( (unsigned __int8)((*v894 + *(v894 - 2) + 2 * (unsigned int)*(v894 - 1)) >> 2) != 0xFF )
                      {
                        v897 = (unsigned __int8)~((*v894 + *(v894 - 2) + 2 * (unsigned int)*(v894 - 1)) >> 2);
                        v894[v896] -= ~((*v894 + *(v894 - 2) + 2 * (unsigned int)*(v894 - 1)) >> 2)
                                    * (v1451 - v894[v896]);
                        v898 = v894[v896 - 1];
                        v899 = (unsigned __int64)(2155905153LL * v897 * (BYTE1(v1451) - v898)) >> 32;
                        v894[v896 - 1] = v898 + (v899 >> 7 < 0) + (v899 >> 7);
                        v900 = v894[v896 - 2];
                        v901 = (unsigned __int64)(2155905153LL * v897 * (BYTE2(v1451) - v900)) >> 32;
                        v894[v896 - 2] = v900 + (v901 >> 7 < 0) + (v901 >> 7);
                        v902 = v894[v896 + 1];
                        v903 = v897 * (255 - v902);
                        v895 = v1434;
                        v894[v896 + 1] = v902 + v903 / 255;
                      }
                      ++v895;
                      v894 += 4;
                      v1434 = v895;
                    }
                    while ( v895 < v890 );
                    v892 = &v1502[(_QWORD)v1523];
                    v893 = (char *)v1524 + v1484;
                    v1502 = &v1502[(_QWORD)v1523];
                    v1524 = (char *)v1524 + v1484;
                    ++v1422;
                  }
                  while ( v1422 < v891 );
                  v87 = v1507;
                  v867 = v1390;
                  LODWORD(v162) = 0;
                  v885 = v1525;
                }
                ((void (__fastcall *)(void *))off_180596128)(v1519);
                if ( v1518 )
                  ((void (__fastcall *)(LPVOID, __int64))off_180596168)(v885, v1518);
              }
              else
              {
                LODWORD(v162) = GetLastError();
                v878 = (int)v162 < 0;
                if ( (int)v162 > 0 )
                {
                  LODWORD(v162) = (unsigned __int16)v162 | 0x80070000;
                  v878 = (int)v162 < 0;
                }
                if ( !v878 )
                  LODWORD(v162) = -2147467259;
              }
              ((void (__fastcall *)(LPVOID))off_180596120[0])(v1525);
              if ( (int)v162 < 0 )
                goto LABEL_1144;
              v904 = v1800;
              v1408 = v1798;
              v1503 = v1803;
              v1519 = v1800;
              memset_0(v1791, 0, 0x68uLL);
              memset_0(v1795, 0, 0x68uLL);
              v162 = 0LL;
              v1525 = 0LL;
              v1423 = 0;
              v1435 = 0;
              v1850 = 0LL;
              v1851 = 0;
              v1848 = 0LL;
              v1849 = 0LL;
              v1823 = 0LL;
              if ( !v904 )
                goto LABEL_1145;
              v905 = v1516;
              v906 = ((__int64 (__fastcall *)(void *, __int64))off_180596140[0])(v1516, 7LL);
              if ( !v906 )
                goto LABEL_1143;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180596158[0])(v906, 104LL, v1791) )
              {
                v1525 = v1794;
                v1423 = v1792;
                v1435 = v1793;
              }
              v907 = (void *)((__int64 (__fastcall *)(void *))off_180596100[0])(v905);
              v162 = 0LL;
              v1524 = v907;
              if ( !v907 )
              {
LABEL_1154:
                GetLastError();
                goto LABEL_1145;
              }
              v908 = v1512 - v1741;
              v1706 = 0LL;
              v909 = 0;
              v1850 = 0LL;
              v1851 = 0;
              DWORD2(v1848) = v1494 - v1440;
              v1849 = 0LL;
              LODWORD(v1848) = 40;
              DWORD1(v1848) = v1512 - v1741;
              HIDWORD(v1848) = 2097153;
              v910 = (void *)((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180596108[0])(
                               v907,
                               &v1848,
                               0LL,
                               &v1706,
                               0LL,
                               0);
              v1523 = v910;
              if ( !v910 )
              {
                v911 = GetLastError();
                v162 = 0LL;
                v909 = v911;
                if ( v911 > 0 )
                  v909 = (unsigned __int16)v911 | 0x80070000;
                if ( v909 >= 0 )
                  v909 = -2147467259;
LABEL_1224:
                ((void (__fastcall *)(LPVOID))off_180596120[0])(v1524);
                if ( v909 < 0 )
                  goto LABEL_1145;
                v864 = (CToastCenterExperienceManager *)v1517;
                if ( Srcc == 1 )
                  ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, int))off_1805960F0[0])(
                    v1517,
                    (unsigned int)v1806,
                    DWORD1(v1806),
                    v867,
                    HIDWORD(v1390),
                    v1516,
                    0,
                    0,
                    13369376);
                else
                  ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, unsigned int, _DWORD, int))off_180596130[0])(
                    v1517,
                    (unsigned int)v1817,
                    DWORD1(v1817),
                    v867,
                    HIDWORD(v1390),
                    v1516,
                    0,
                    0,
                    v867,
                    HIDWORD(v1390),
                    v1461);
LABEL_1228:
                off_180596170(v864, (struct CSingleViewShellExperience *)v1473);
LABEL_1145:
                if ( v1497 )
                  ((void (__fastcall *)(SIZE_T))off_180596128)(v1497);
                goto LABEL_1147;
              }
              v912 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_180596158[0])(v910, 104LL, v1795);
              DWORD2(v1823) = v908;
              v913 = (CToastCenterExperienceManager *)v1524;
              v914 = 0LL;
              if ( v912 )
                v914 = v1796;
              HIDWORD(v1823) = v1440 - v1494;
              v1518 = v914;
              ((void (__fastcall *)(LPVOID, LPVOID))off_180596168)(v1524, v1523);
              off_180596170(v913, (struct CSingleViewShellExperience *)1);
              v915 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_180596168)(
                       v913,
                       v1503);
              v916 = off_1805961D8[0];
              v1504 = v915;
              v917 = ((__int64 (__fastcall *)(_QWORD))off_180596160[0])(0LL);
              ((void (__fastcall *)(LPVOID, __int128 *, __int64))v916)(v1524, &v1823, v917);
              v918 = v1524;
              ((void (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1805961C8)(
                v1524,
                v1519,
                0xFFFFFFFFLL,
                &v1823,
                v1468,
                0LL);
              if ( Srcc == 1 )
              {
                if ( !v1408 )
                {
                  v1409 = 0xFFFFFF;
LABEL_1205:
                  v920 = -(int)v1741;
                  v921 = 0;
                  v922 = 0;
                  if ( (int)v1741 >= 0 )
                  {
                    v921 = v1741;
                    v920 = 0;
                  }
                  v923 = -v1494;
                  if ( v1494 >= 0 )
                  {
                    v922 = v1494;
                    v923 = 0;
                  }
                  v924 = v1423;
                  v925 = DWORD2(v1823) - v920;
                  if ( DWORD2(v1823) - v920 >= v1423 - v921 )
                    v925 = v1423 - v921;
                  v926 = HIDWORD(v1823) - v923;
                  if ( HIDWORD(v1823) - v923 >= v1435 - v922 )
                    v926 = v1435 - v922;
                  if ( v925 > 0 && v926 > 0 )
                  {
                    v927 = v1423 * v922;
                    v1424 = 0;
                    v928 = (unsigned __int8 *)(v1518 + 4 * (v920 + (__int64)(DWORD2(v1823) * v923)));
                    v1519 = v928;
                    v929 = (char *)v1525 + 4 * v921 + 4 * (__int64)v927;
                    v1518 = 4LL * SDWORD2(v1823);
                    v1440 = 4 * v924;
                    v1525 = v929;
                    do
                    {
                      v1436 = 0;
                      v930 = v928 + 2;
                      v931 = 0;
                      v932 = v929 - (char *)v928;
                      do
                      {
                        if ( (unsigned __int8)((*v930 + *(v930 - 2) + 2 * (unsigned int)*(v930 - 1)) >> 2) != 0xFF )
                        {
                          v933 = (unsigned __int8)~((*v930 + *(v930 - 2) + 2 * (unsigned int)*(v930 - 1)) >> 2);
                          v930[v932] -= ~((*v930 + *(v930 - 2) + 2 * (unsigned int)*(v930 - 1)) >> 2)
                                      * (v1478 - v930[v932]);
                          v934 = v930[v932 - 1];
                          v935 = (unsigned __int64)(2155905153LL * v933 * (BYTE1(v1409) - v934)) >> 32;
                          v930[v932 - 1] = v934 + (v935 >> 7 < 0) + (v935 >> 7);
                          v936 = v930[v932 - 2];
                          v937 = (unsigned __int64)(2155905153LL * v933 * (BYTE2(v1409) - v936)) >> 32;
                          v930[v932 - 2] = v936 + (v937 >> 7 < 0) + (v937 >> 7);
                          v938 = v930[v932 + 1];
                          v939 = v933 * (255 - v938);
                          v931 = v1436;
                          v930[v932 + 1] = v938 + v939 / 255;
                        }
                        ++v931;
                        v930 += 4;
                        v1436 = v931;
                      }
                      while ( v931 < v925 );
                      v928 = (unsigned __int8 *)v1519 + v1518;
                      v929 = (char *)v1525 + v1440;
                      v1519 = (char *)v1519 + v1518;
                      v1525 = (char *)v1525 + v1440;
                      ++v1424;
                    }
                    while ( v1424 < v926 );
                    v87 = v1507;
                    v909 = 0;
                    v867 = v1390;
                    v918 = v1524;
                  }
                  ((void (__fastcall *)(LPVOID))off_180596128)(v1523);
                  v162 = 0LL;
                  if ( v1504 )
                    ((void (__fastcall *)(LPVOID, __int64))off_180596168)(v918, v1504);
                  goto LABEL_1224;
                }
                v919 = ((__int64 (__fastcall *)(__int64))off_180596208[0])(8LL);
              }
              else
              {
                v919 = -5723992;
              }
              v1409 = v919;
              v1478 = v919;
              goto LABEL_1205;
            }
            v1689 = 0LL;
            v1690 = 0LL;
            v658 = 0;
            v1691 = 0LL;
            v1692 = 0LL;
            v1693 = 0LL;
            v1694 = 0LL;
            v1578 = 0;
            if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_180596190[0])(
                    8LL,
                    &v1579,
                    0LL,
                    &v1578) )
              goto LABEL_815;
            v660 = (char *)MemoryAlloc(2LL * v1578);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1693);
            if ( v660 )
            {
              v1693 = v660;
              v661 = MemoryAlloc(4LL * (v1579 + 1));
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1694);
              if ( v661 )
              {
                v1694 = v661;
                if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_180596190[0])(
                       8LL,
                       &v1579,
                       v660,
                       &v1578) )
                {
                  v662 = v661;
                  if ( v1579 )
                  {
                    for ( kk = 0; kk < v1579; ++kk )
                    {
                      *v662 = ((__int64 (__fastcall *)(char *, _QWORD))off_1805961A0)(v660, 0LL);
                      v664 = -1LL;
                      do
                        ++v664;
                      while ( *(_WORD *)&v660[2 * v664] );
                      ++v662;
                      v660 += 2 * v664 + 2;
                    }
                    v87 = v1507;
                  }
                  *v662 = 1033;
                  v656 = v661;
                  v1689 = v661;
                  v1384 = v1579 + 1;
                  v1694 = 0LL;
LABEL_832:
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1694);
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1693);
                  if ( v658 >= 0 )
                  {
                    v665 = 0;
                    v666 = 0;
                    v1393 = 0;
                    if ( v1384 )
                    {
                      v667 = 0LL;
                      while ( 2 )
                      {
                        v668 = 0;
                        v669 = &dword_1805296C0;
                        do
                        {
                          if ( v656[v667] == *v669 )
                          {
                            v665 = v668;
                            v1393 = v668;
                            goto LABEL_841;
                          }
                          ++v668;
                          ++v669;
                        }
                        while ( v668 < 0x26 );
                        ++v666;
                        ++v667;
                        if ( v666 < v1384 )
                          continue;
                        break;
                      }
                    }
LABEL_841:
                    v670 = v665;
                    v1385 = 0;
                    if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_180596198[0])(
                           *((unsigned int *)&dword_1805296C0 + v665),
                           v1873,
                           85LL)
                      && ((int (__fastcall *)(_BYTE *, __int64, char *))off_180596180[0])(v1873, 88LL, &v1824) > 0 )
                    {
                      v1385 = (v1825 >> 27) & 1;
                    }
                    v671 = L"Segoe UI Light";
                    v672 = 19LL;
                    v673 = (const wchar_t **)v1871;
                    do
                    {
                      *v673 = v671;
                      v674 = -1LL;
                      do
                        ++v674;
                      while ( v671[v674] );
                      ++v673;
                      v671 += v674 + 1;
                      --v672;
                    }
                    while ( v672 );
                    v1400 = (unsigned __int16 *)v1871[*((unsigned __int8 *)&qword_1804CFC40[4] + 3 * v670)];
                    v1416 = (unsigned __int16 *)v1871[*((unsigned __int8 *)&qword_1804CFC40[4] + 3 * v670 + 1)];
                    v1431 = (unsigned __int16 *)v1871[*((unsigned __int8 *)&qword_1804CFC40[4] + 3 * v670 + 2)];
                    v675 = (char *)MemoryAlloc(0x1C90uLL);
                    v1440 = (__int64)v675;
                    if ( v675 )
                    {
                      v676 = (unsigned __int8 *)&unk_180527A22;
                      v677 = -1;
                      v678 = 0;
                      v679 = 0;
                      v680 = 0;
                      v681 = v675 + 7;
                      v682 = 914LL;
                      do
                      {
                        v683 = *(v676 - 1) | (*(v676 - 2) << 8);
                        v684 = v676[2] << 8;
                        v685 = *v676;
                        v676 += 8;
                        v686 = *(v676 - 7) | ((v685 | (v683 << 8)) << 8);
                        v687 = v686 ^ v680;
                        v688 = *(v676 - 3) | ((*(v676 - 4) | ((*(v676 - 5) | v684) << 8)) << 8);
                        v689 = v687 ^ v688 ^ v679 ^ 0xAC987321;
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
                        v715 = v678 ^ __ROL4__(v713, 2) ^ v712;
                        v678 = v686;
                        v716 = v715 ^ v710;
                        *(v681 - 4) = v716;
                        *v681 = v714;
                        v681 += 8;
                        v717 = __ROR4__(v716, 8);
                        *(v681 - 13) = v717;
                        v718 = __ROR4__(v714, 8);
                        *(v681 - 9) = v718;
                        v719 = __ROR4__(v717, 8);
                        *(v681 - 14) = v719;
                        v720 = __ROR4__(v718, 8);
                        *(v681 - 10) = v720;
                        v721 = __ROR4__(v719, 8);
                        v722 = __ROR4__(v720, 8);
                        *(v681 - 15) = v721;
                        *(v681 - 11) = v722;
                        v679 = __ROR4__(v722, 8);
                        v680 = __ROR4__(v721, 8);
                        --v682;
                      }
                      while ( v682 );
                      v87 = v1507;
                      v658 = 0;
                      v723 = 0LL;
                      v724 = (void *)v1440;
                      v725 = 0LL;
                      do
                      {
                        v726 = _mm_loadu_si128((const __m128i *)(v723 + v1440));
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
                        v1690 = (_BYTE *)v1440;
                        v724 = 0LL;
                        v1691 = 7312LL;
                      }
                      else
                      {
                        v658 = -1073425151;
                      }
                      if ( v724 )
                        MemoryFree(v724);
                      if ( v658 >= 0 )
                      {
                        v731 = v1690;
                        v732 = v1865;
                        v733 = 6LL;
                        do
                        {
                          for ( mm = 0; mm < 0x26; ++mm )
                          {
                            if ( v1393 == mm )
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
                        v736 = (void **)MemoryAlloc(0x18uLL);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1692);
                        if ( v736 )
                        {
                          v1472 = 0;
                          v743 = v1872;
                          v737 = v736;
                          v1491 = v1872;
                          v744 = (char *)v736;
                          v1692 = v736;
                          *(_OWORD *)v736 = 0LL;
                          v745 = 0;
                          v736[2] = 0LL;
                          v738 = 3LL;
                          v1440 = (__int64)v736;
                          while ( 2 )
                          {
                            v746 = *v743;
                            v747 = &unk_180529758;
                            v748 = 0LL;
                            while ( v746 != *v747 )
                            {
                              v748 = (unsigned int)(v748 + 1);
                              ++v747;
                              if ( (unsigned int)v748 >= 6 )
                                goto LABEL_898;
                            }
                            v749 = v1865[v748];
                            v750 = -1LL;
                            do
                              ++v750;
                            while ( *(_BYTE *)(v750 + v749) );
                            v751 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1805961B0[0])(
                                     65001LL,
                                     0LL,
                                     v749,
                                     (unsigned int)(v750 + 1),
                                     0LL,
                                     0);
                            v1394 = v751;
                            if ( !v751 )
                            {
                              v755 = GetLastError();
                              v658 = v755;
                              if ( v755 > 0 )
                                v658 = (unsigned __int16)v755 | 0x80070000;
                              v738 = 3LL;
                              if ( v658 >= 0 )
                                v658 = -2147467259;
                              goto LABEL_871;
                            }
                            v752 = MemoryAlloc(2LL * v751);
                            *(_QWORD *)v1440 = v752;
                            if ( !v752 )
                            {
                              v658 = -2147024882;
                              goto LABEL_870;
                            }
                            v753 = -1LL;
                            do
                              ++v753;
                            while ( *(_BYTE *)(v753 + v749) );
                            if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1805961B0[0])(
                                    65001LL,
                                    0LL,
                                    v749,
                                    (unsigned int)(v753 + 1),
                                    v752,
                                    v1394) )
                            {
                              v754 = GetLastError();
                              v658 = v754;
                              if ( v754 > 0 )
                                v658 = (unsigned __int16)v754 | 0x80070000;
                              if ( v658 >= 0 )
                                v658 = -2147467259;
                              goto LABEL_870;
                            }
                            v744 = (char *)v1440;
                            v738 = 3LL;
                            v745 = v1472;
LABEL_898:
                            ++v745;
                            v743 = v1491 + 1;
                            v1472 = v745;
                            v744 += 8;
                            ++v1491;
                            v1440 = (__int64)v744;
                            if ( v745 < 3 )
                              continue;
                            break;
                          }
                          v737 = 0LL;
                          v1692 = 0LL;
                          v1686 = v736;
                          v1797 = v1385;
                        }
                        else
                        {
                          v737 = 0LL;
                          v658 = -2147024882;
                          v1692 = 0LL;
LABEL_870:
                          v738 = 3LL;
                        }
LABEL_871:
                        if ( v737 )
                        {
                          do
                          {
                            v739 = *v737;
                            if ( *v737 )
                            {
                              v740 = -1LL;
                              do
                                ++v740;
                              while ( v739[v740] );
                              memset(v739, 0, 2 * v740 + 2);
                              MemoryFree(*v737);
                            }
                            ++v737;
                            --v738;
                          }
                          while ( v738 );
                        }
                      }
                    }
                    else
                    {
                      v658 = -2147024882;
                    }
                  }
                  if ( v1690 )
                    memset(v1690, 0, v1691);
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1692);
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1690);
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1689);
                  if ( v658 < 0 )
                    goto LABEL_929;
                  v741 = 0;
                  v658 = 0;
                  v1799 = *v1686;
                  v1800 = v1686[1];
                  v1801 = v1686[2];
                  v1757 = 0LL;
                  LODWORD(v1757) = 16;
                  if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_180596258)(
                                       66LL,
                                       0LL,
                                       &v1757,
                                       0LL) )
                  {
                    v741 = BYTE4(v1757) & 1;
                  }
                  else
                  {
                    v742 = GetLastError();
                    v658 = v742;
                    if ( v742 > 0 )
                      v658 = (unsigned __int16)v742 | 0x80070000;
                    if ( v658 >= 0 )
                      v658 = -2147467259;
                  }
                  v655 = Srcc;
                  v1798 = v741;
                  if ( v658 < 0 )
                    goto LABEL_930;
                  if ( Srcc == 1 )
                  {
                    v1467 = 42;
                  }
                  else
                  {
                    if ( Srcc != 2 )
                    {
                      if ( Srcc == 3 )
                      {
                        v1467 = 225;
                        v1456 = 225;
                      }
LABEL_918:
                      v756 = 96;
                      v1386 = 96;
                      memset_0(v1861, 0, 0xDCuLL);
                      v1862 = 220;
                      v658 = 0;
                      if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1805961D0[0])(
                             0LL,
                             0xFFFFFFFFLL,
                             v1861) )
                      {
                        v756 = v1863;
                        *((_QWORD *)&v1756 + 1) = v1864;
                        if ( v1863 < 0x60u )
                          v756 = 96;
                        v1386 = v756;
                      }
                      v757 = (size_t *)v1400;
                      if ( Srcc != 1 )
                        v757 = (size_t *)v1431;
                      memset_0(v1852, 0, 0x5CuLL);
                      v758 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961E8[0])(0LL, 0LL, 1027LL);
                      if ( !v758 )
                      {
                        v759 = GetLastError();
                        v658 = v759;
                        if ( v759 > 0 )
                          v658 = (unsigned __int16)v759 | 0x80070000;
                        if ( v658 >= 0 )
                          v658 = -2147467259;
LABEL_929:
                        v655 = Srcc;
LABEL_930:
                        ((void (__fastcall *)(_QWORD, LPVOID))off_180596250[0])(0LL, v1446);
                        goto LABEL_931;
                      }
                      v775 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961A8)(v1467, v756, 72LL);
                      v1852[4] = 400;
                      v1853 = 5;
                      v1852[0] = -v775;
                      StringCchCopyW(&v1854, 0x20uLL, v757);
                      v776 = ((__int64 (__fastcall *)(_DWORD *))off_180596110[0])(v1852);
                      if ( v776 )
                      {
                        v1802 = (unsigned __int16 *)v776;
                      }
                      else
                      {
                        v777 = GetLastError();
                        v658 = v777;
                        if ( v777 > 0 )
                          v658 = (unsigned __int16)v777 | 0x80070000;
                        if ( v658 >= 0 )
                          v658 = -2147467259;
                      }
                      ((void (__fastcall *)(_QWORD, __int64))off_180596250[0])(0LL, v758);
                      if ( v658 < 0 )
                        goto LABEL_929;
                      v655 = Srcc;
                      v778 = v1400;
                      if ( Srcc != 1 )
                        v778 = v1431;
                      v1402 = v778;
                      memset_0(v1855, 0, 0x5CuLL);
                      v658 = 0;
                      v779 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961E8[0])(0LL, 0LL, 1027LL);
                      if ( !v779 )
                      {
                        v780 = GetLastError();
                        v658 = v780;
                        if ( v780 > 0 )
                          v658 = (unsigned __int16)v780 | 0x80070000;
                        if ( v658 < 0 )
                          goto LABEL_930;
                        goto LABEL_978;
                      }
                      v781 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961A8)(v1456, v756, 72LL);
                      v1855[4] = 400;
                      v1855[0] = -v781;
                      v1856 = 5;
                      StringCchCopyW(&v1857, 0x20uLL, (size_t *)v1402);
                      v782 = ((__int64 (__fastcall *)(_DWORD *))off_180596110[0])(v1855);
                      if ( v782 )
                      {
                        v1803 = (unsigned __int16 *)v782;
                      }
                      else
                      {
                        v783 = GetLastError();
                        v658 = v783;
                        if ( v783 > 0 )
                          v658 = (unsigned __int16)v783 | 0x80070000;
                        if ( v658 >= 0 )
                          v658 = -2147467259;
                      }
                      ((void (__fastcall *)(_QWORD, __int64))off_180596250[0])(0LL, v779);
                      if ( v658 < 0 )
                        goto LABEL_930;
                      v784 = 0;
                      v785 = 0;
                      if ( Srcc != 1 )
                      {
                        if ( Srcc == 2 )
                        {
                          v785 = 0;
                          v784 = SDWORD2(v1756) / 4;
LABEL_990:
                          *((_QWORD *)&v1817 + 1) = __PAIR64__(v785, v784);
                          if ( Srcc == 1 )
                          {
                            v786 = 150;
                            v1458 = 32;
                          }
                          else
                          {
                            if ( (unsigned int)(Srcc - 2) > 1 )
                            {
                              v1458 = 42;
                              v787 = 42;
                              v786 = 42;
                              goto LABEL_997;
                            }
                            v786 = 0;
                            v1458 = 0;
                          }
                          v787 = 0;
LABEL_997:
                          v1469 = v786;
                          v788 = v1799;
                          v658 = 0;
                          v789 = v784 - v786 - v787;
                          DWORD2(v1807) = v789;
                          DWORD2(v1806) = v789;
                          v1403 = (unsigned __int16 *)((__int64 (__fastcall *)(LPVOID, unsigned __int16 *))off_180596168)(
                                                        v1446,
                                                        v1802);
                          if ( !(unsigned int)((__int64 (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1805961C8)(
                                                v1446,
                                                v788,
                                                0xFFFFFFFFLL,
                                                &v1806,
                                                3152,
                                                0LL) )
                            v658 = -2147467259;
                          if ( v1403 )
                            ((void (__fastcall *)(LPVOID, unsigned __int16 *))off_180596168)(v1446, v1403);
                          if ( v658 < 0 )
                            goto LABEL_929;
                          v658 = 0;
                          v790 = v1800;
                          v1404 = (unsigned __int16 *)((__int64 (__fastcall *)(LPVOID, unsigned __int16 *))off_180596168)(
                                                        v1446,
                                                        v1803);
                          if ( !(unsigned int)((__int64 (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1805961C8)(
                                                v1446,
                                                v790,
                                                0xFFFFFFFFLL,
                                                &v1807,
                                                3152,
                                                0LL) )
                            v658 = -2147467259;
                          if ( v1404 )
                            ((void (__fastcall *)(LPVOID, unsigned __int16 *))off_180596168)(v1446, v1404);
                          if ( v658 < 0 )
                            goto LABEL_929;
                          if ( (unsigned int)(Srcc - 2) <= 1 )
                          {
                            v789 = DWORD2(v1807);
                            if ( SDWORD2(v1806) > SDWORD2(v1807) )
                              v789 = DWORD2(v1806);
                          }
                          if ( v1797 )
                          {
                            off_180596240(
                              (CToastCenterExperienceManager *)&v1806,
                              (struct CSingleViewShellExperience *)(unsigned int)(v789 + v787 - DWORD2(v1806)));
                            v791 = (unsigned int)(v789 + v787 - DWORD2(v1807));
                          }
                          else
                          {
                            off_180596240(
                              (CToastCenterExperienceManager *)&v1806,
                              (struct CSingleViewShellExperience *)v1469);
                            v791 = v1469;
                          }
                          ((void (__fastcall *)(__int128 *, __int64, _QWORD))off_180596240)(
                            &v1807,
                            v791,
                            (unsigned int)(HIDWORD(v1806) + v1458));
                          v655 = Srcc;
                          if ( (unsigned int)(Srcc - 2) <= 1 )
                          {
                            *((_QWORD *)&v1817 + 1) = __PAIR64__(HIDWORD(v1807), v789);
                            v1805 = -5723992;
                          }
                          else if ( Srcc == 1 )
                          {
                            v1805 = 0xFFFFFF;
                            memset_0(v1858, 0, 0x5CuLL);
                            v658 = 0;
                            v792 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961E8[0])(0LL, 0LL, 1027LL);
                            if ( v792 )
                            {
                              v794 = v1386;
                              v799 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1805961A8)(11LL, v1386);
                              v1858[4] = 400;
                              v1858[0] = -v799;
                              v1859 = 5;
                              StringCchCopyW(&v1860, 0x20uLL, (size_t *)v1416);
                              v800 = ((__int64 (__fastcall *)(_DWORD *))off_180596110[0])(v1858);
                              if ( v800 )
                              {
                                v1804 = v800;
                              }
                              else
                              {
                                v658 = GetLastError();
                                v801 = v658 < 0;
                                if ( v658 > 0 )
                                {
                                  v658 = (unsigned __int16)v658 | 0x80070000;
                                  v801 = v658 < 0;
                                }
                                if ( !v801 )
                                  v658 = -2147467259;
                              }
                              ((void (__fastcall *)(_QWORD, __int64))off_180596250[0])(0LL, v792);
                            }
                            else
                            {
                              v793 = GetLastError();
                              v658 = v793;
                              if ( v793 > 0 )
                                v658 = (unsigned __int16)v793 | 0x80070000;
                              if ( v658 >= 0 )
                              {
LABEL_978:
                                v658 = -2147467259;
                                goto LABEL_930;
                              }
                              v794 = v1386;
                            }
                            if ( v658 < 0 )
                              goto LABEL_929;
                            v658 = 0;
                            v795 = v1801;
                            v1810 = v789;
                            v796 = ((__int64 (__fastcall *)(LPVOID, __int64))off_180596168)(v1446, v1804);
                            if ( !(unsigned int)((__int64 (__fastcall *)(LPVOID, void *, __int64, unsigned int *, int, _QWORD))off_1805961C8)(
                                                  v1446,
                                                  v795,
                                                  0xFFFFFFFFLL,
                                                  &v1808,
                                                  1120,
                                                  0LL) )
                              v658 = -2147467259;
                            if ( v796 )
                              ((void (__fastcall *)(LPVOID, __int64))off_180596168)(v1446, v796);
                            if ( v658 < 0 )
                              goto LABEL_929;
                            v797 = v1810 + 24;
                            if ( (int)(v1810 + 24) < 90 )
                              v797 = 90;
                            v1810 = v797;
                            v1811 = 32;
                            v1808 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961A8)(v1808, v794, 96LL);
                            v1809 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961A8)(v1809, v794, 96LL);
                            v1810 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961A8)(v1810, v794, 96LL);
                            v1811 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805961A8)(v1811, v794, 96LL);
                            if ( v1797 )
                            {
                              v798 = (unsigned int)v1806;
                              if ( (int)v1806 >= (int)v1807 )
                                v798 = (unsigned int)v1807;
                            }
                            else
                            {
                              v802 = DWORD2(v1806);
                              if ( SDWORD2(v1806) <= SDWORD2(v1807) )
                                v802 = DWORD2(v1807);
                              v798 = v1808 + v802 - v1810;
                            }
                            off_180596240(
                              (CToastCenterExperienceManager *)&v1808,
                              (struct CSingleViewShellExperience *)v798);
                            v655 = Srcc;
                          }
                          v803 = v1797;
                          v804 = HIDWORD(v1817);
                          v805 = DWORD2(v1817);
                          switch ( v655 )
                          {
                            case 1:
                              *(_QWORD *)&v1817 = 0LL;
                              goto LABEL_1049;
                            case 2:
                              v1831 = 0LL;
                              v1829 = 0LL;
                              v1830 = 0LL;
                              v809 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD))off_180596238[0])(0LL);
                              LODWORD(v1829) = 40;
                              if ( !(unsigned int)off_1805961F8(v809, (struct CSingleViewShellExperience *)&v1829) )
                                goto LABEL_1049;
                              off_180596230[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1830 + 4));
                              off_180596230[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1830 + 12));
                              if ( v803 )
                                v807 = DWORD1(v1830) + 5 * HIDWORD(v1830) / 100;
                              else
                                v807 = 95 * (HIDWORD(v1830) - v805) / 100;
                              v808 = 95 * (v1831 - v804);
                              break;
                            case 3:
                              v1828 = 0LL;
                              v1826 = 0LL;
                              v1827 = 0LL;
                              v806 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD))off_180596238[0])(0LL);
                              LODWORD(v1826) = 40;
                              if ( !(unsigned int)off_1805961F8(v806, (struct CSingleViewShellExperience *)&v1826) )
                                goto LABEL_1049;
                              off_180596230[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1827 + 4));
                              off_180596230[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1827 + 12));
                              v807 = 50 * (HIDWORD(v1827) - v805) / 100;
                              v808 = 50 * (v1828 - v804);
                              break;
                            default:
                              goto LABEL_1049;
                          }
                          LODWORD(v1817) = v807;
                          DWORD1(v1817) = v808 / 100;
LABEL_1049:
                          v658 = 0;
                          goto LABEL_930;
                        }
                        if ( Srcc != 3 )
                          goto LABEL_990;
                      }
                      v784 = DWORD2(v1756);
                      v785 = HIDWORD(v1756);
                      goto LABEL_990;
                    }
                    v1467 = 15;
                  }
                  v1456 = 11;
                  goto LABEL_918;
                }
LABEL_815:
                v659 = GetLastError();
                v658 = v659;
                if ( v659 > 0 )
                  v658 = (unsigned __int16)v659 | 0x80070000;
                if ( v658 >= 0 )
                  v658 = -2147467259;
                goto LABEL_832;
              }
              v1694 = 0LL;
            }
            else
            {
              v1693 = 0LL;
            }
            v658 = -2147024882;
            goto LABEL_832;
          }
          v586 = dword_18059F558;
        }
        dword_18059F558 = v586 + 1;
        goto LABEL_809;
      }
      v517 = dword_18059F558;
    }
    dword_18059F558 = v517 + 1;
    goto LABEL_761;
  }
LABEL_1314:
  SH<void *,SH_HANDLE>::Reset(&v1682);
  if ( v1583 )
  {
    v1755 = 0LL;
    v1018 = 0LL;
    v1709 = &unk_18059E920;
    *(_OWORD *)v1758 = 0LL;
    v1019 = GetProcessHeap();
    v1020 = HeapAlloc(v1019, 8u, 0xA0uLL);
    if ( v1020 )
    {
      v1021 = v1709;
      v1506 = v1020;
      *v1020 = *v1709;
      v1020[1] = v1021[1];
      v1020[2] = v1021[2];
      v1020[3] = v1021[3];
      v1020[4] = v1021[4];
      v1020[5] = v1021[5];
      v1020[6] = v1021[6];
      v1020[7] = v1021[7];
      v1020[8] = v1021[8];
      v1020[9] = v1021[9];
      v1710 = &unk_18059E910;
      v1022 = GetProcessHeap();
      v1023 = HeapAlloc(v1022, 8u, 8uLL);
      v1024 = v1023;
      if ( v1023 )
      {
        v162 = v1023;
        v1519 = v1023;
        *v1023 = *v1710;
        v1711 = __rdtsc();
        v1588 = 0;
        if ( (int)RtlUIntAdd(4LL, 4LL, &v1589) >= 0
          && (int)RtlUIntAdd(0LL, v1589, &v1588) >= 0
          && (int)RtlUIntAdd(v1025, 160LL, &v1590) >= 0 )
        {
          v1026 = RtlUIntAdd(v1588, v1590, &v1588);
          if ( (v1028 | v1026) >= 0 && (int)RtlUIntAdd(v1027, 8LL, &v1591) >= 0 )
          {
            v1029 = RtlUIntAdd(v1588, v1591, &v1588);
            if ( (v1031 | v1029) >= 0 && (int)RtlUIntAdd(v1030, 8LL, v1592) >= 0 )
            {
              v1592[1] = v1592[0];
              v1032 = RtlUIntAdd(v1588, v1592[0], &v1588);
              if ( (v1033 | v1032) >= 0 )
              {
                HIDWORD(v1754) = v1588;
                v1034 = v1588;
                v1035 = GetProcessHeap();
                v1036 = (unsigned int *)HeapAlloc(v1035, 8u, v1034);
                v1037 = v1036;
                if ( v1036 )
                {
                  v1755 = v1036;
                  LODWORD(v1754) = 0;
                  v1593 = 4;
                  if ( (int)RtlULongLongAdd(v1036, 4LL, &v1759) >= 0
                    && v1037 + 2 <= (unsigned int *)((char *)v1037 + HIDWORD(v1754)) )
                  {
                    v1040 = v1759;
                    *v1037 = v1038;
                    *v1040 = v1593;
                    v1041 = v1754 + 1;
                    LODWORD(v1754) = v1754 + 1;
                    if ( v1755 == v1039 )
                    {
                      if ( (int)RtlUIntAdd(v1038, 160LL, &v1594) < 0 )
                        goto LABEL_1703;
                      v1595 = v1594;
                      if ( (int)RtlUIntAdd(HIDWORD(v1754), v1594, (char *)&v1754 + 4) >= 0 )
                      {
                        v1044 = (_DWORD)v1043 + 1;
                        v1045 = (_DWORD)v1043 + 1 + v1754;
                        LODWORD(v1754) = v1045;
                        goto LABEL_1340;
                      }
                    }
                    else
                    {
                      v1046 = v1755;
                      v1712 = v1755;
                      if ( v1041 )
                      {
                        while ( (int)RtlUIntAdd(4LL, (unsigned int)*v1046, &v1596) >= 0 )
                        {
                          v1595 = v1596;
                          if ( (int)RtlULongLongAdd(v1046, v1596, &v1712) < 0 )
                            goto LABEL_1332;
                          v1046 = v1712;
                          if ( v1047 + 1 >= v1048 )
                            goto LABEL_1337;
                        }
                        goto LABEL_1703;
                      }
LABEL_1337:
                      v1049 = RtlULongLongAdd(v1046, 4LL, &v1742);
                      if ( v1049 >= 0 && v1046 + 41 <= (_DWORD *)((char *)v1755 + HIDWORD(v1754)) )
                      {
                        v1050 = v1742;
                        v1051 = v1042 + 124;
                        *v1046 = 160;
                        *v1050 = *v1020;
                        v1050[1] = v1020[1];
                        v1050[2] = v1020[2];
                        v1050[3] = v1020[3];
                        v1050[4] = v1020[4];
                        v1050[5] = v1020[5];
                        v1050[6] = v1020[6];
                        *(_OWORD *)((char *)v1050 + v1051 - 16) = v1020[7];
                        *(_OWORD *)((char *)v1050 + v1051) = *(_OWORD *)((char *)v1020 + v1051);
                        v1052 = *(_OWORD *)((char *)v1020 + v1051 + 16);
                        v1044 = v1042 - 3;
                        *(_OWORD *)((char *)v1050 + v1051 + 16) = v1052;
                        v1045 = v1042 - 3 + v1754;
                        LODWORD(v1754) = v1045;
LABEL_1340:
                        if ( v1755 == v1043 )
                        {
                          if ( (int)RtlUIntAdd(v1042, 8LL, &v1597) < 0 )
                            goto LABEL_1703;
                          v1598 = v1597;
                          if ( (int)RtlUIntAdd(HIDWORD(v1754), v1597, (char *)&v1754 + 4) < 0 )
                            goto LABEL_1703;
                          v1055 = v1044 + v1754;
                          LODWORD(v1754) = v1044 + v1754;
                        }
                        else
                        {
                          v1056 = (unsigned int *)v1755;
                          v1713 = (unsigned int *)v1755;
                          if ( v1045 )
                          {
                            while ( (int)RtlUIntAdd(4LL, *v1056, &v1599) >= 0 )
                            {
                              v1598 = v1599;
                              if ( (int)RtlULongLongAdd(v1057, v1599, &v1713) < 0 )
                                break;
                              v1056 = v1713;
                              if ( v1044 + v1058 >= v1045 )
                                goto LABEL_1348;
                            }
                            goto LABEL_1703;
                          }
LABEL_1348:
                          v1059 = RtlULongLongAdd(v1056, 4LL, &v1747);
                          if ( v1059 < 0 || v1060 + 3 > (_DWORD *)((char *)v1755 + HIDWORD(v1754)) )
                            goto LABEL_1703;
                          v1061 = v1747;
                          *v1060 = 8;
                          *v1061 = *v1024;
                          v1055 = v1044 + v1754;
                          LODWORD(v1754) = v1044 + v1754;
                          v1053 = 4;
                        }
                        v1714 = v1711;
                        if ( v1755 == v1054 )
                        {
                          if ( (int)RtlUIntAdd(v1053, 8LL, &v1600) < 0 )
                            goto LABEL_1703;
                          v1618 = v1600;
                          if ( (int)RtlUIntAdd(HIDWORD(v1754), v1600, (char *)&v1754 + 4) < 0 )
                            goto LABEL_1703;
                        }
                        else
                        {
                          v1063 = (unsigned int *)v1755;
                          v1715 = (unsigned int *)v1755;
                          if ( v1055 )
                          {
                            while ( (int)RtlUIntAdd(4LL, *v1063, &v1602) >= 0 )
                            {
                              v1618 = v1602;
                              if ( (int)RtlULongLongAdd(v1064, v1602, &v1715) < 0 )
                                break;
                              v1063 = v1715;
                              if ( v1044 + v1065 >= v1055 )
                                goto LABEL_1359;
                            }
                            goto LABEL_1703;
                          }
LABEL_1359:
                          if ( (int)RtlULongLongAdd(v1063, 4LL, &v1743) < 0
                            || v1066 + 3 > (_DWORD *)((char *)v1755 + HIDWORD(v1754)) )
                          {
                            goto LABEL_1703;
                          }
                          v1067 = v1743;
                          *v1066 = 8;
                          v1062 = 4;
                          *v1067 = v1714;
                        }
                        LODWORD(v1754) = v1044 + v1754;
                        if ( (int)RtlUIntAdd(v1062, v1062, &v1603) >= 0 )
                        {
                          v1069 = v1603;
                          v1604 = v1603;
                          if ( (int)RtlUIntAdd(v1068, 8LL, v1605) >= 0 )
                          {
                            v1605[1] = v1605[0];
                            if ( (int)RtlUIntAdd(v1069, v1605[0], &v1604) >= 0 )
                            {
                              v1411 = v1604;
                              v1525 = v1070;
                              v1071 = v1070;
                              v1426 = (unsigned int)v1070;
                              v1072 = (int *)v1070;
                              v1716 = v1070;
                              v1524 = v1070;
                              v1438 = (unsigned int)v1070;
                              v1523 = v1070;
                              v1606 = (unsigned int)v1070;
                              v1518 = (__int64)v1070;
                              v1628 = (__int64)v1070;
                              v1607 = (unsigned int)v1070;
                              v1717 = __rdtsc();
                              v1608 = 8;
                              v1073 = RtlUIntAdd(8LL, HIDWORD(v1754), &v1608);
                              if ( v1073 >= 0 )
                              {
                                v1077 = (v1608 + 7) & 0xFFFFFFF8;
                                if ( v1077 >= v1608 )
                                {
                                  v1608 = (v1608 + 7) & 0xFFFFFFF8;
                                  v1078 = v1077;
                                  v1079 = GetProcessHeap();
                                  v1080 = (char *)HeapAlloc(v1079, 8u, v1078);
                                  v1076 = 0LL;
                                  v1081 = v1080;
                                  if ( v1080 )
                                  {
                                    v1718 = v1080;
                                    *(_DWORD *)v1080 = v1754;
                                    v1073 = RtlULongLongAdd(v1080, 4LL, &v1718);
                                    if ( v1073 < 0
                                      || (v1083 = v1718,
                                          *(_DWORD *)v1718 = HIDWORD(v1754),
                                          v1073 = RtlULongLongAdd(v1083, v1082, &v1718),
                                          v1073 < 0) )
                                    {
                                      v1074 = (unsigned int)v1076;
                                      v1075 = (unsigned int)v1076;
                                    }
                                    else
                                    {
                                      *(_QWORD *)&v1081[v1608 - 8] = v1717;
                                      memcpy_0(v1718, v1755, HIDWORD(v1754));
                                      v1074 = v1608;
                                      v1076 = 0LL;
                                      v1075 = (unsigned __int64)v1081;
                                      v1525 = v1081;
                                      v1081 = 0LL;
                                      v1426 = v1608;
                                    }
                                    if ( v1081 )
                                    {
                                      v1084 = GetProcessHeap();
                                      HeapFree(v1084, 0, v1081);
                                      v1074 = v1426;
                                      v1076 = 0LL;
                                      v1075 = (unsigned __int64)v1525;
                                    }
                                  }
                                  else
                                  {
                                    v1074 = 0;
                                    v1073 = -1073741801;
                                    v1075 = 0LL;
                                  }
                                }
                                else
                                {
                                  v1073 = -1073741675;
                                }
                              }
                              v1085 = v1073 | 0x10000000;
                              if ( v1085 < 0 )
                                goto LABEL_1497;
                              v1719 = v1076;
                              v1086 = v1076;
                              v1517 = v1076;
                              if ( v1075 )
                              {
                                v1088 = v1074;
                                v1516 = (void *)v1074;
                                if ( v1074 && (v1498 = MemoryAlloc(v1074 + 8LL)) != 0LL )
                                {
                                  v1089 = (unsigned __int8 *)v1525;
                                  v1090 = 0;
                                  v1383 = 0;
                                  v1091 = 0LL;
                                  if ( v1088 )
                                  {
                                    do
                                      v1090 ^= *((_BYTE *)v1525 + v1091++);
                                    while ( v1091 < v1088 );
                                    v1383 = v1090;
                                  }
                                  v1814 = 0xC81ECB17B1B54A58uLL;
                                  v1092 = v1498;
                                  v1427 = 0;
                                  v1453 = 0;
                                  v1093 = -1;
                                  v1094 = 0;
                                  v1095 = v1088 & 7;
                                  if ( (v1088 & 7) != 0 )
                                  {
                                    v1427 = 0;
                                    v1096 = 56;
                                    v1097 = 0;
                                    do
                                    {
                                      v1098 = *v1089++;
                                      if ( v1094 >= 4 )
                                      {
                                        v1099 = (v1098 << v1096) | v1427;
                                        v1427 = v1099;
                                      }
                                      else
                                      {
                                        v1099 = v1427;
                                        v1097 |= v1098 << (v1096 - 32);
                                      }
                                      ++v1094;
                                      v1096 -= 8;
                                    }
                                    while ( v1094 < (int)v1095 );
                                    v87 = v1507;
                                    v1453 = v1097;
                                    v1441 = (unsigned int)v1071 & v1440;
                                    v1094 = v1097 ^ 0xB17A307A;
                                    v1100 = v1099 ^ 0x42F6B18D;
                                    v1101 = v1097 ^ 0xB17A307A;
                                    v1102 = v1100;
                                    if ( (v1088 & 7) != 0 )
                                    {
                                      v1103 = v1441;
                                      do
                                      {
                                        v1515 = v1092 + 1;
                                        if ( v1103 >= 4 )
                                        {
                                          v1102 = __ROL4__(v1102, 8);
                                          v1104 = v1102;
                                        }
                                        else
                                        {
                                          v1101 = __ROL4__(v1101, 8);
                                          v1104 = v1101;
                                        }
                                        *v1092 = v1104;
                                        ++v1103;
                                        v1092 = v1515;
                                      }
                                      while ( v1103 < (int)v1095 );
                                      v87 = v1507;
                                      v1071 = (_DWORD *)v1518;
                                    }
                                    if ( v1095 <= 4 )
                                    {
                                      v1093 = 0;
                                      if ( v1095 < 4 )
                                        v1094 = (unsigned int)v1094 >> (8 * (4 - v1095)) << (8 * (4 - v1095));
                                    }
                                    else
                                    {
                                      v1093 = v1100 >> (8 * (8 - v1095)) << (8 * (8 - v1095));
                                    }
                                  }
                                  v1105 = v1088 >> 3;
                                  if ( v1088 >> 3 )
                                  {
                                    v1106 = v1092 + 7;
                                    v1107 = v1427;
                                    v1108 = v1105;
                                    v1109 = v1453;
                                    v1110 = WORD2(v1814);
                                    v1442 = HIWORD(v1814);
                                    v1495 = WORD1(v1814);
                                    v1513 = HIDWORD(v1814) ^ 0xB1B54A58;
                                    v1111 = v1089 + 2;
                                    do
                                    {
                                      v1112 = *(v1111 - 1) | (*(v1111 - 2) << 8);
                                      v1113 = v1111[2] << 8;
                                      v1114 = *v1111;
                                      v1111 += 8;
                                      v1115 = *(v1111 - 7) | ((v1114 | (v1112 << 8)) << 8);
                                      v1116 = *(v1111 - 3) | ((*(v1111 - 4) | ((*(v1111 - 5) | v1113) << 8)) << 8);
                                      v1117 = v1116 ^ v1093;
                                      v1118 = HIDWORD(v1814) ^ v1115 ^ (v1117 - 19032) ^ v1094;
                                      v1119 = (__ROR4__(v1118, 7) + WORD1(v1814) * __ROR4__(HIDWORD(v1814) ^ v1118, 15)) ^ v1117;
                                      v1120 = (v1110 * __ROR4__(v1119 - 1313519016, 9) - __ROR4__(v1119, 10)) ^ v1118;
                                      v1121 = (__ROL4__(v1120, 5) + HIWORD(v1814) * __ROL4__(v1110 ^ v1120, 4)) ^ v1119;
                                      v1122 = (HIDWORD(v1814) - (v1121 ^ 0xB1B54A58)) ^ v1120;
                                      v1123 = (WORD1(v1814) * (v1122 - 19032) - (v1122 >> 6)) ^ v1121;
                                      v1124 = (19032 * (v1110 ^ __ROR4__(v1123, 15))) ^ v1122;
                                      v1125 = (v1110 * (HIWORD(v1814) + __ROR4__(~v1124, 3))) ^ v1123;
                                      v1126 = (v1125 - 19032 - HIDWORD(v1814)) ^ v1124;
                                      v1127 = (v1495 * (v1442 ^ v1126)) ^ __ROR4__(v1126, 10) ^ v1125;
                                      v1128 = __ROR4__(v1127, 3) ^ (v1110 * __ROL4__(v1127 ^ 0x4A58, 6)) ^ v1126;
                                      v1129 = (19032 * (__ROR4__(v1128, 15) - HIWORD(v1814))) ^ v1127;
                                      v1130 = (v1129 >> 15) ^ (19032 * __ROL4__(v1129 - v1110, 3)) ^ (v1129 >> 1) ^ (19032 * (HIWORD(v1814) ^ v1129)) ^ v1128;
                                      v1131 = (WORD1(v1814) * (v1130 - v1110) - (v1130 >> 13)) ^ v1129;
                                      v1132 = __ROR4__(v1131, 11) ^ (v1110 * __ROR4__(-1313519016 - v1131, 9)) ^ v1130;
                                      v1133 = (v1132 - HIWORD(v1814) + 1313519016) ^ v1131;
                                      v1134 = (19032 * (v1495 ^ v1133) - __ROR4__(v1133, 7)) ^ v1132;
                                      v1135 = (WORD1(v1814) * __ROL4__(HIWORD(v1814) ^ v1134, 4) - __ROR4__(v1134, 16)) ^ v1133;
                                      v1136 = (__ROR4__(v1135, 4) + v1110 * __ROR4__(-1313519016 - v1135, 10)) ^ v1134;
                                      v1137 = __ROR4__(v1136, 9) ^ (HIWORD(v1814) * __ROR4__(v1136 + 1313519016, 4)) ^ v1135;
                                      v1138 = (19032 * __ROL4__(HIDWORD(v1814) ^ v1137, 8) - __ROL4__(v1137, 2)) ^ v1136;
                                      v1139 = (WORD1(v1814) * __ROR4__(HIDWORD(v1814) - v1138, 11) - __ROR4__(v1138, 12)) ^ v1137;
                                      v1140 = (v1139 >> 8) ^ (v1110 * (WORD1(v1814) ^ v1139)) ^ v1138;
                                      v1141 = v1140 ^ v1139;
                                      v1142 = v1109 ^ v1140;
                                      v1109 = v1115;
                                      *(v1106 - 4) = v1142;
                                      v1143 = v1107 ^ v1513 ^ v1141;
                                      *v1106 = v1143;
                                      v1107 = v1116;
                                      v1144 = __ROR4__(v1142, 8);
                                      *(v1106 - 5) = v1144;
                                      v1106 += 8;
                                      v1145 = __ROR4__(v1143, 8);
                                      *(v1106 - 9) = v1145;
                                      v1146 = __ROR4__(v1144, 8);
                                      *(v1106 - 14) = v1146;
                                      v1147 = __ROR4__(v1145, 8);
                                      *(v1106 - 10) = v1147;
                                      v1148 = __ROR4__(v1146, 8);
                                      v1149 = __ROR4__(v1147, 8);
                                      *(v1106 - 15) = v1148;
                                      *(v1106 - 11) = v1149;
                                      v1093 = __ROR4__(v1149, 8);
                                      v1094 = __ROR4__(v1148, 8);
                                      --v1108;
                                    }
                                    while ( v1108 );
                                    v1090 = v1383;
                                    v87 = v1507;
                                    v1071 = (_DWORD *)v1518;
                                    v1086 = v1517;
                                    v1088 = (unsigned __int64)v1516;
                                  }
                                  v1150 = v1088 + 8;
                                  *(_QWORD *)&v1498[v1088] = v1090;
                                  v1719 = v1498;
                                  v1720 = (char *)(v1088 + 8);
                                  v1721 = &qword_18059E918;
                                  v1722 = 8LL;
                                  v1724 = 160LL;
                                  v1723 = &xmmword_18059E870;
                                  v1151 = GetProcessHeap();
                                  v1152 = HeapAlloc(v1151, 8u, 0x30uLL);
                                  v1153 = v1152;
                                  if ( v1152 )
                                  {
                                    *v1152 = v1150;
                                    v1154 = GetProcessHeap();
                                    v1155 = HeapAlloc(v1154, 8u, v1150);
                                    if ( !v1155 )
                                      goto LABEL_1408;
                                    *((_QWORD *)v1153 + 1) = v1155;
                                    memcpy_0(v1155, v1498, v1150);
                                    v1153[4] = 160;
                                    v1156 = GetProcessHeap();
                                    v1157 = HeapAlloc(v1156, 8u, 0xA0uLL);
                                    if ( !v1157 )
                                      goto LABEL_1408;
                                    *((_QWORD *)v1153 + 3) = v1157;
                                    *v1157 = xmmword_18059E870;
                                    v1157[1] = *((_OWORD *)&xmmword_18059E870 + 1);
                                    v1157[2] = *((_OWORD *)&xmmword_18059E870 + 2);
                                    v1157[3] = *((_OWORD *)&xmmword_18059E870 + 3);
                                    v1157[4] = *((_OWORD *)&xmmword_18059E870 + 4);
                                    v1157[5] = *((_OWORD *)&xmmword_18059E870 + 5);
                                    v1157[6] = *((_OWORD *)&xmmword_18059E870 + 6);
                                    v1157[7] = *((_OWORD *)&xmmword_18059E870 + 7);
                                    v1157[8] = *((_OWORD *)&xmmword_18059E870 + 8);
                                    v1157[9] = *((_OWORD *)&xmmword_18059E870 + 9);
                                    v1153[8] = 8;
                                    v1158 = GetProcessHeap();
                                    v1159 = HeapAlloc(v1158, 8u, 8uLL);
                                    if ( v1159 )
                                    {
                                      *((_QWORD *)v1153 + 5) = v1159;
                                      v1086 = v1153;
                                      *v1159 = qword_18059E918;
                                      v1087 = 0;
                                      v1153 = 0LL;
                                    }
                                    else
                                    {
LABEL_1408:
                                      v1087 = -1073741801;
                                    }
                                    if ( v1153 )
                                    {
                                      v1160 = (void *)*((_QWORD *)v1153 + 1);
                                      if ( v1160 )
                                      {
                                        v1161 = GetProcessHeap();
                                        HeapFree(v1161, 0, v1160);
                                        *((_QWORD *)v1153 + 1) = 0LL;
                                      }
                                      v1162 = (void *)*((_QWORD *)v1153 + 3);
                                      if ( v1162 )
                                      {
                                        v1163 = GetProcessHeap();
                                        HeapFree(v1163, 0, v1162);
                                        *((_QWORD *)v1153 + 3) = 0LL;
                                      }
                                      v1164 = (void *)*((_QWORD *)v1153 + 5);
                                      if ( v1164 )
                                      {
                                        v1165 = GetProcessHeap();
                                        HeapFree(v1165, 0, v1164);
                                        *((_QWORD *)v1153 + 5) = 0LL;
                                      }
                                      v1166 = GetProcessHeap();
                                      HeapFree(v1166, 0, v1153);
                                    }
                                  }
                                  else
                                  {
                                    v1087 = -1073741801;
                                  }
                                  if ( v1087 >= 0 )
                                  {
                                    v1716 = v1086;
                                    v1086 = 0LL;
                                  }
                                }
                                else
                                {
                                  v1087 = -1073741823;
                                }
                                v1167 = v1719;
                                if ( v1719 )
                                {
                                  v1168 = GetProcessHeap();
                                  HeapFree(v1168, 0, v1167);
                                  v1719 = 0LL;
                                }
                                if ( v1086 )
                                {
                                  v1169 = (void *)v1086[1];
                                  if ( v1169 )
                                  {
                                    v1170 = GetProcessHeap();
                                    HeapFree(v1170, 0, v1169);
                                    v1086[1] = 0LL;
                                  }
                                  v1171 = (void *)v1086[3];
                                  if ( v1171 )
                                  {
                                    v1172 = GetProcessHeap();
                                    HeapFree(v1172, 0, v1171);
                                    v1086[3] = 0LL;
                                  }
                                  v1173 = (void *)v1086[5];
                                  if ( v1173 )
                                  {
                                    v1174 = GetProcessHeap();
                                    HeapFree(v1174, 0, v1173);
                                    v1086[5] = 0LL;
                                  }
                                  v1175 = GetProcessHeap();
                                  HeapFree(v1175, 0, v1086);
                                }
                              }
                              else
                              {
                                v1087 = -1073741811;
                              }
                              v1085 = v1087 | 0x10000000;
                              if ( v1085 < 0 )
                                goto LABEL_1496;
                              v1176 = (const void **)v1716;
                              v1177 = 4LL;
                              v1609 = 4;
                              v1178 = RtlUIntAdd(4LL, *(unsigned int *)v1716, &v1609);
                              if ( v1178 < 0
                                || (v1178 = RtlUIntAdd(v1609, 4LL, &v1609), v1178 < 0)
                                || (v1178 = RtlUIntAdd(v1609, *((unsigned int *)v1176 + 4), &v1609), v1178 < 0)
                                || (v1178 = RtlUIntAdd(v1609, 4LL, &v1609), v1178 < 0) )
                              {
                                v1180 = v1610;
                              }
                              else
                              {
                                v1178 = RtlUIntAdd(v1609, *((unsigned int *)v1176 + 8), &v1609);
                                v1180 = v1610;
                                if ( v1178 >= 0 )
                                  v1180 = v1609;
                                v1610 = v1180;
                              }
                              if ( v1178 >= 0 )
                              {
                                v1181 = v1180;
                                v1182 = GetProcessHeap();
                                v1183 = HeapAlloc(v1182, 8u, v1181);
                                v1179 = 0LL;
                                v1184 = v1183;
                                if ( v1183 )
                                {
                                  *v1183 = *(_DWORD *)v1176;
                                  v1725 = v1183;
                                  v1178 = RtlULongLongAdd(v1183, 4LL, &v1725);
                                  if ( v1178 >= 0 )
                                  {
                                    memcpy_0(v1725, v1176[1], *(unsigned int *)v1176);
                                    v1185 = RtlULongLongAdd(v1725, *(unsigned int *)v1176, &v1725);
                                    v1179 = 0LL;
                                    v1178 = v1185;
                                    if ( v1185 >= 0 )
                                    {
                                      v1186 = v1725;
                                      *(_DWORD *)v1725 = *((_DWORD *)v1176 + 4);
                                      v1178 = RtlULongLongAdd(v1186, 4LL, &v1725);
                                      if ( v1178 >= 0 )
                                      {
                                        memcpy_0(v1725, v1176[3], *((unsigned int *)v1176 + 4));
                                        v1187 = RtlULongLongAdd(v1725, *((unsigned int *)v1176 + 4), &v1725);
                                        v1179 = 0LL;
                                        v1178 = v1187;
                                        if ( v1187 >= 0 )
                                        {
                                          v1188 = v1725;
                                          *(_DWORD *)v1725 = *((_DWORD *)v1176 + 8);
                                          v1178 = RtlULongLongAdd(v1188, 4LL, &v1725);
                                          if ( v1178 >= 0 )
                                          {
                                            memcpy_0(v1725, v1176[5], *((unsigned int *)v1176 + 8));
                                            v1189 = RtlULongLongAdd(v1725, *((unsigned int *)v1176 + 8), &v1725);
                                            v1179 = 0LL;
                                            v1178 = v1189;
                                            if ( v1189 >= 0 )
                                            {
                                              v1524 = v1184;
                                              v1184 = 0LL;
                                              v1438 = v1610;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  if ( v1184 )
                                  {
                                    v1190 = GetProcessHeap();
                                    HeapFree(v1190, 0, v1184);
                                    v1179 = 0LL;
                                  }
                                }
                                else
                                {
                                  v1178 = -1073741801;
                                }
                              }
                              v1085 = v1178 | 0x10000000;
                              if ( v1085 < 0 )
                                goto LABEL_1496;
                              v1726 = v1179;
                              v1611 = (unsigned int)v1179;
                              v1727 = v1179;
                              v1612 = (unsigned int)v1179;
                              v1613 = 8;
                              v1191 = RtlUIntAdd(8LL, v1411, &v1613);
                              v1085 = v1191 | 0x10000000;
                              if ( v1191 < 0 )
                                goto LABEL_1537;
                              v1193 = (v1613 + 7) & 0xFFFFFFF8;
                              if ( v1193 >= v1613 )
                              {
                                v1615 = (v1613 + 7) & 0xFFFFFFF8;
                                v1194 = RtlUIntAdd(v1193, v1192, &v1615);
                                v1195 = v1614;
                                v1085 = v1194;
                                if ( v1194 >= 0 )
                                  v1195 = v1615;
                                v1614 = v1195;
                              }
                              else
                              {
                                v1085 = -1073741675;
                              }
                              if ( v1085 < 0 )
                              {
LABEL_1540:
                                v1177 = 4LL;
                                goto LABEL_1537;
                              }
                              if ( v1755 && (unsigned int)v1754 > 1 )
                              {
                                v1196 = (unsigned int *)v1755;
                                v1197 = 0;
                                v1728 = (unsigned int *)v1755;
                                while ( 1 )
                                {
                                  v1198 = *v1196;
                                  v1085 = RtlULongLongAdd(v1196, 4LL, &v1728);
                                  if ( v1085 < 0 )
                                    break;
                                  v1085 = RtlULongLongAdd(v1728, v1198, &v1728);
                                  if ( v1085 < 0 )
                                    break;
                                  v1196 = v1728;
                                  if ( ++v1197 )
                                  {
                                    v1199 = *v1728;
                                    v1085 = RtlULongLongAdd(v1728, 4LL, &v1728);
                                    if ( v1085 >= 0 )
                                    {
                                      v1200 = v1728;
                                      v1611 = v1199;
                                      if ( !v1199 )
                                        v1200 = 0LL;
                                      v1728 = v1200;
                                      v1726 = v1200;
                                    }
                                    break;
                                  }
                                }
                                if ( v1085 < 0 )
                                  goto LABEL_1464;
                                if ( (unsigned int)v1754 > 2 )
                                {
                                  v1201 = (unsigned int *)v1755;
                                  v1202 = 0;
                                  v1729 = (unsigned int *)v1755;
                                  while ( 1 )
                                  {
                                    v1203 = *v1201;
                                    v1085 = RtlULongLongAdd(v1201, 4LL, &v1729);
                                    if ( v1085 < 0 )
                                      break;
                                    v1085 = RtlULongLongAdd(v1729, v1203, &v1729);
                                    if ( v1085 < 0 )
                                      break;
                                    v1201 = v1729;
                                    if ( (unsigned int)++v1202 >= 2 )
                                    {
                                      v1205 = *v1729;
                                      v1085 = RtlULongLongAdd(v1729, 4LL, &v1729);
                                      if ( v1085 >= 0 )
                                      {
                                        v1206 = v1729;
                                        v1612 = v1205;
                                        if ( !v1205 )
                                          v1206 = 0LL;
                                        v1729 = v1206;
                                        v1727 = v1206;
                                      }
                                      break;
                                    }
                                  }
                                  if ( v1085 >= 0 )
                                  {
                                    v1616 = 4;
                                    v1085 = RtlUIntAdd(4LL, v1204, &v1616);
                                    if ( v1085 < 0
                                      || (v1085 = RtlUIntAdd(v1616, (unsigned int)v1207, &v1616), v1085 < 0)
                                      || (v1085 = RtlUIntAdd(v1616, v1208, &v1616), v1085 < 0)
                                      || (v1085 = RtlUIntAdd(v1616, (unsigned int)v1207, &v1616), v1085 < 0) )
                                    {
                                      v1210 = v1617;
                                    }
                                    else
                                    {
                                      v1085 = RtlUIntAdd(v1616, v1209, &v1616);
                                      v1210 = v1617;
                                      if ( v1085 >= 0 )
                                        v1210 = v1616;
                                      v1617 = v1210;
                                    }
                                    if ( v1085 >= 0 )
                                    {
                                      if ( v1210 > 0x400000 )
                                      {
                                        v1085 = -2147418113;
LABEL_1496:
                                        v1072 = (int *)v1628;
LABEL_1497:
                                        v1211 = v1525;
                                        if ( v1525 )
                                        {
                                          v1212 = GetProcessHeap();
                                          HeapFree(v1212, 0, v1211);
                                        }
                                        v1213 = v1716;
                                        if ( v1716 )
                                        {
                                          v1214 = (void *)*((_QWORD *)v1716 + 1);
                                          if ( v1214 )
                                          {
                                            v1215 = GetProcessHeap();
                                            HeapFree(v1215, 0, v1214);
                                            v1213[1] = 0LL;
                                          }
                                          v1216 = (void *)v1213[3];
                                          if ( v1216 )
                                          {
                                            v1217 = GetProcessHeap();
                                            HeapFree(v1217, 0, v1216);
                                            v1213[3] = 0LL;
                                          }
                                          v1218 = (void *)v1213[5];
                                          if ( v1218 )
                                          {
                                            v1219 = GetProcessHeap();
                                            HeapFree(v1219, 0, v1218);
                                            v1213[5] = 0LL;
                                          }
                                          v1220 = GetProcessHeap();
                                          HeapFree(v1220, 0, v1213);
                                          v1716 = 0LL;
                                        }
                                        v1221 = v1524;
                                        if ( v1524 )
                                        {
                                          v1222 = GetProcessHeap();
                                          HeapFree(v1222, 0, v1221);
                                        }
                                        v1223 = v1523;
                                        if ( v1523 )
                                        {
                                          v1224 = GetProcessHeap();
                                          HeapFree(v1224, 0, v1223);
                                        }
                                        if ( v1071 )
                                        {
                                          v1225 = (void *)*((_QWORD *)v1071 + 1);
                                          if ( v1225 )
                                          {
                                            v1226 = GetProcessHeap();
                                            HeapFree(v1226, 0, v1225);
                                            *((_QWORD *)v1071 + 1) = 0LL;
                                          }
                                          v1227 = (void *)*((_QWORD *)v1071 + 3);
                                          if ( v1227 )
                                          {
                                            v1228 = GetProcessHeap();
                                            HeapFree(v1228, 0, v1227);
                                            *((_QWORD *)v1071 + 3) = 0LL;
                                          }
                                          v1229 = (void *)*((_QWORD *)v1071 + 5);
                                          if ( v1229 )
                                          {
                                            v1230 = GetProcessHeap();
                                            HeapFree(v1230, 0, v1229);
                                            *((_QWORD *)v1071 + 5) = 0LL;
                                          }
                                          v1231 = GetProcessHeap();
                                          HeapFree(v1231, 0, v1071);
                                        }
                                        if ( v1072 )
                                        {
                                          v1232 = GetProcessHeap();
                                          HeapFree(v1232, 0, v1072);
                                        }
                                        if ( v1085 >= 0 )
                                        {
                                          if ( LODWORD(v1758[0]) )
                                          {
                                            v1233 = (unsigned int *)v1758[1];
                                            if ( v1758[1] )
                                            {
                                              v1737[0] = v1758[1];
                                              if ( (int)RtlULongLongAdd(v1758[1], 4LL, v1737) >= 0 )
                                              {
                                                v1237 = (int *)v1737[0];
                                                v1620[1] = v1235;
                                                if ( !v1235 )
                                                  v1237 = v1236;
                                                v1737[0] = v1237;
                                                v1737[1] = v1237;
                                                if ( v1235 == 4 )
                                                {
                                                  v1621 = *v1237;
                                                  if ( v1621 >= 0 && v1234 > 1 )
                                                  {
                                                    for ( v1738[0] = v1233;
                                                          (int)RtlULongLongAdd(v1233, 4LL, v1738) >= 0
                                                       && (int)RtlULongLongAdd(v1738[0], *v1233, v1738) >= 0;
                                                          v1233 = (unsigned int *)v1738[0] )
                                                    {
                                                      if ( v1238 != -1 )
                                                      {
                                                        v1372 = *(_DWORD *)v1738[0];
                                                        if ( (int)RtlULongLongAdd(v1738[0], 4LL, v1738) >= 0 )
                                                        {
                                                          v1374 = (_QWORD *)v1738[0];
                                                          v1622 = v1372;
                                                          if ( !v1372 )
                                                            v1374 = v1373;
                                                          v1738[0] = v1374;
                                                          v1738[1] = v1374;
                                                          if ( v1372 == 8 )
                                                            v1738[2] = *v1374;
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
                                        v162 = v1519;
                                        goto LABEL_1703;
                                      }
                                      v1606 = v1210;
                                    }
                                    v1177 = v1207;
LABEL_1537:
                                    if ( v1085 < 0 )
                                      goto LABEL_1496;
                                    v1239 = v1606;
                                    v1240 = GetProcessHeap();
                                    v1241 = (int *)HeapAlloc(v1240, 8u, v1239);
                                    if ( v1241 )
                                    {
                                      v1242 = v1241;
                                      v1523 = v1241;
                                      v1085 = 0x10000000;
                                    }
                                    else
                                    {
                                      v1085 = -805306345;
                                      v1242 = 0LL;
                                    }
                                    if ( v1085 >= 0 )
                                    {
                                      if ( v1524 && v1242 )
                                      {
                                        v1764[0] = v1524;
                                        v1765 = v1438;
                                        v1766 = v1606;
                                        v1764[1] = v1242;
                                        v1767 = 0;
                                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                          && (v1245 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                                        {
                                          v1246 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1245)(134LL, v1764);
                                          v1244 = v1606;
                                          v1085 = v1246 | 0x10000000;
                                          if ( v1246 >= 0 )
                                            v1244 = v1766;
                                          v1606 = v1244;
                                        }
                                        else
                                        {
                                          v1243 = GetLastError();
                                          v1085 = v1243;
                                          if ( v1243 > 0 )
                                            v1085 = (unsigned __int16)v1243 | 0x80070000;
                                          if ( v1085 >= 0 )
                                            v1085 = -2147467259;
                                          v1244 = v1606;
                                        }
                                        v1247 = 0LL;
                                        if ( v1085 == -805306333 )
                                        {
                                          v1085 = -2147024774;
LABEL_1560:
                                          v1072 = 0LL;
                                          goto LABEL_1497;
                                        }
                                        if ( v1085 < 0 )
                                          goto LABEL_1560;
                                        v1517 = 0LL;
                                        v1634 = 0;
                                        v1731 = v1242;
                                        if ( v1244 < (unsigned int)v1177 )
                                          goto LABEL_1563;
                                        v1412 = *v1242;
                                        v1248 = RtlULongLongAdd(v1242, v1177, &v1731);
                                        if ( v1248 < 0
                                          || (v1248 = RtlUIntAdd(0LL, (unsigned int)v1177, &v1634), v1248 < 0) )
                                        {
LABEL_1616:
                                          v1085 = v1248 | 0x10000000;
                                          if ( v1085 < 0 )
                                            goto LABEL_1496;
                                          v1517 = v1247;
                                          v1287 = (int *)v1247;
                                          v1732 = (int *)v1247;
                                          v1288 = (unsigned int)v1247;
                                          if ( !v1071
                                            || (v1516 = (void *)*((_QWORD *)v1071 + 1)) == 0LL
                                            || *v1071 == (_DWORD)v1247 )
                                          {
                                            v1085 = -805306355;
                                            goto LABEL_1496;
                                          }
                                          v1413 = (int)v1247;
                                          if ( *v1071 )
                                          {
                                            v1289 = (unsigned int)*v1071 - 8LL;
                                            v1500 = v1289;
                                            v1290 = MemoryAlloc(v1289);
                                            LODWORD(v1247) = 0;
                                            v1515 = v1290;
                                            v1291 = v1290;
                                            if ( v1290 )
                                            {
                                              v1292 = (unsigned __int8 *)v1516;
                                              v1815 = 0x7F1137FAB69605ELL;
                                              v1293 = 0;
                                              v1294 = v1291;
                                              v1428 = 0;
                                              v1295 = v1289 & 7;
                                              if ( (v1289 & 7) != 0 )
                                              {
                                                v1522 = 0;
                                                v1296 = 0;
                                                v1297 = 56;
                                                do
                                                {
                                                  v1298 = *v1292++;
                                                  if ( v1296 >= 4 )
                                                  {
                                                    v1299 = (v1298 << v1297) | v1522;
                                                    v1522 = v1299;
                                                  }
                                                  else
                                                  {
                                                    v1299 = v1522;
                                                    LODWORD(v1247) = (v1298 << (v1297 - 32)) | (unsigned int)v1247;
                                                  }
                                                  ++v1296;
                                                  v1297 -= 8;
                                                }
                                                while ( v1296 < (int)v1295 );
                                                v87 = v1507;
                                                v1288 = (unsigned int)v1517;
                                                v1428 = (int)v1247;
                                                v1300 = (unsigned int)v1247 ^ 0x92F65A5;
                                                v1301 = v1299 ^ 0x699A899C;
                                                v1302 = v1300;
                                                v1303 = v1301;
                                                if ( (v1289 & 7) != 0 )
                                                {
                                                  v1304 = 0;
                                                  do
                                                  {
                                                    if ( v1304 >= 4 )
                                                    {
                                                      v1303 = __ROL4__(v1303, 8);
                                                      v1305 = v1303;
                                                    }
                                                    else
                                                    {
                                                      v1302 = __ROL4__(v1302, 8);
                                                      v1305 = v1302;
                                                    }
                                                    *v1294 = v1305;
                                                    ++v1304;
                                                    ++v1294;
                                                  }
                                                  while ( v1304 < (int)v1295 );
                                                  v87 = v1507;
                                                  v1071 = (_DWORD *)v1518;
                                                }
                                                if ( v1295 <= 4 )
                                                {
                                                  LODWORD(v1247) = 0;
                                                  if ( v1295 < 4 )
                                                    v1300 = v1300 >> (8 * (4 - v1295)) << (8 * (4 - v1295));
                                                }
                                                else
                                                {
                                                  LODWORD(v1247) = v1301 >> (8 * (8 - v1295)) << (8 * (8 - v1295));
                                                }
                                              }
                                              else
                                              {
                                                v1300 = 0;
                                              }
                                              v1514 = (char *)(v1289 >> 3);
                                              if ( v1289 >> 3 )
                                              {
                                                v1306 = v1294 + 7;
                                                v1307 = v1428;
                                                v1308 = v1292 + 2;
                                                v1309 = WORD2(v1815);
                                                v1439 = WORD2(v1815);
                                                v1310 = HIDWORD(v1815);
                                                v1311 = HIDWORD(v1815) ^ 0xAB69605E;
                                                v1443 = WORD1(v1815);
                                                v1312 = v1514;
                                                do
                                                {
                                                  v1313 = *(v1308 - 1) | (*(v1308 - 2) << 8);
                                                  v1314 = v1308[2] << 8;
                                                  v1315 = *v1308;
                                                  v1308 += 8;
                                                  v1316 = *(v1308 - 7) | ((v1315 | (v1313 << 8)) << 8);
                                                  v1317 = v1316 ^ v1300;
                                                  v1318 = *(v1308 - 3) | ((*(v1308 - 4) | ((*(v1308 - 5) | v1314) << 8)) << 8);
                                                  v1319 = v1310 ^ v1317 ^ v1318 ^ (unsigned int)v1247 ^ 0xAB69605E;
                                                  v1320 = (__ROL4__(v1319, 10) + v1309 * __ROL4__(v1319 + 1419157410, 5)) ^ v1317;
                                                  v1321 = (WORD1(v1815) * __ROR4__(v1310 + v1320, 9) - __ROL4__(v1320, 2)) ^ v1319;
                                                  v1322 = (24670 * (v1321 - v1439) - (v1321 >> 13)) ^ v1320;
                                                  v1323 = (HIWORD(v1815) * __ROL4__(WORD1(v1815) ^ v1322, 6)
                                                         - __ROL4__(v1322, 2)) ^ v1321;
                                                  v1324 = (v1310 - (v1323 ^ 0xAB69605E)) ^ v1322;
                                                  v1325 = (v1443 * (v1439 ^ v1324)) ^ __ROR4__(v1324, 6) ^ v1323;
                                                  v1326 = (__ROL4__(v1325, 2) + 24670 * __ROR4__(v1310 + v1325, 15)) ^ v1324;
                                                  v1327 = (HIWORD(v1815) * __ROR4__(v1326 + 1419157410, 14)
                                                         - __ROL4__(v1326, 8)) ^ v1325;
                                                  v1328 = __ROR4__(v1327, 10) ^ (v1439 * __ROR4__(
                                                                                           v1327 ^ 0xAB69605E,
                                                                                           12)) ^ v1326;
                                                  v1329 = (v1328 >> 10) ^ (WORD1(v1815) * (HIWORD(v1815) ^ v1328)) ^ v1327;
                                                  v1330 = (HIWORD(v1815) * (__ROR4__(~v1329, 5) + 24670)) ^ v1328;
                                                  v1331 = v1329 ^ (v1330 - HIWORD(v1815)) ^ 0xAB69605E;
                                                  v1332 = ((v1331 >> 2) + v1439 * __ROL4__(HIWORD(v1815) ^ v1331, 2)) ^ v1330;
                                                  v1333 = (__ROL4__(v1332, 7) + WORD1(v1815)
                                                                              * __ROR4__(v1332 - v1310, 6)) ^ v1331;
                                                  v1334 = (24670 * (v1439 ^ v1333) + __ROR4__(v1333, 9)) ^ v1332;
                                                  v1335 = (__ROL4__(v1334, 7)
                                                         + HIWORD(v1815) * __ROL4__(WORD1(v1815) ^ v1334, 5)) ^ v1333;
                                                  v1336 = v1311 ^ v1335 ^ v1334;
                                                  v1337 = (v1439 * (__ROR4__(v1336, 3) - WORD1(v1815))) ^ v1335;
                                                  v1338 = (24670 * __ROR4__(v1337 - v1310, 1) - __ROR4__(v1337, 6)) ^ v1336;
                                                  v1339 = (__ROL4__(v1338, 14)
                                                         + HIWORD(v1815) * __ROL4__(v1338 - 1419157410, 3)) ^ v1337;
                                                  v1340 = (v1439 * __ROL4__(v1339 - 1419157410, 15) - __ROR4__(v1339, 14)) ^ v1338;
                                                  v1341 = (v1340 >> 3) ^ (WORD1(v1815) * (v1340 ^ 0x605E)) ^ v1339;
                                                  v1342 = v1341 ^ v1310;
                                                  v1343 = v1341;
                                                  v1344 = v1522 ^ v1341;
                                                  v1522 = v1318;
                                                  v1345 = v1307 ^ __ROL4__(v1343, 2) ^ (24670 * __ROL4__(v1342, 4));
                                                  v1307 = v1316;
                                                  v1346 = v1345 ^ v1340;
                                                  v1309 = v1439;
                                                  *(v1306 - 4) = v1346;
                                                  *v1306 = v1344;
                                                  v1306 += 8;
                                                  v1347 = __ROR4__(v1346, 8);
                                                  *(v1306 - 13) = v1347;
                                                  v1348 = __ROR4__(v1344, 8);
                                                  *(v1306 - 9) = v1348;
                                                  v1349 = __ROR4__(v1347, 8);
                                                  *(v1306 - 14) = v1349;
                                                  v1350 = __ROR4__(v1348, 8);
                                                  *(v1306 - 10) = v1350;
                                                  v1351 = __ROR4__(v1349, 8);
                                                  v1352 = __ROR4__(v1350, 8);
                                                  *(v1306 - 15) = v1351;
                                                  *(v1306 - 11) = v1352;
                                                  LODWORD(v1247) = __ROR4__(v1352, 8);
                                                  v1300 = __ROR4__(v1351, 8);
                                                  --v1312;
                                                }
                                                while ( v1312 );
                                                v1293 = 0;
                                                v87 = v1507;
                                                v1071 = (_DWORD *)v1518;
                                                v1288 = (unsigned int)v1517;
                                                v1289 = v1500;
                                                v1291 = v1515;
                                              }
                                              LODWORD(v1247) = 0;
                                              for ( nn = 0LL; nn < v1289; ++nn )
                                                v1293 ^= v1291[nn];
                                              if ( v1293 == *(_QWORD *)((char *)v1516 + v1289) )
                                              {
                                                v1354 = v1413;
                                                v1287 = (int *)v1291;
                                                v1732 = (int *)v1291;
                                                v1291 = 0LL;
                                                v1288 = v1289;
                                              }
                                              else
                                              {
                                                v1287 = v1732;
                                                v1354 = -1073425151;
                                              }
                                              if ( v1291 )
                                              {
                                                MemoryFree(v1291);
                                                v1287 = v1732;
                                                LODWORD(v1247) = 0;
                                              }
                                              if ( v1354 >= 0 )
                                              {
                                                v1072 = v1287;
                                                v1628 = (__int64)v1287;
                                                v1287 = 0LL;
                                                v1607 = v1288;
                                                v1732 = 0LL;
                                                v1085 = 0x10000000;
LABEL_1656:
                                                if ( v1287 )
                                                {
                                                  v1355 = GetProcessHeap();
                                                  HeapFree(v1355, 0, v1287);
                                                  v1288 = v1607;
                                                  LODWORD(v1247) = 0;
                                                  v1732 = 0LL;
                                                }
                                                if ( v1085 < 0 )
                                                  goto LABEL_1497;
                                                v1619[0] = (_DWORD)v1247;
                                                v1733 = v1072;
                                                if ( v1288 < 4 )
                                                  goto LABEL_1660;
                                                v1414 = *v1072;
                                                v1356 = RtlULongLongAdd(v1072, 4LL, &v1733);
                                                if ( v1356 < 0 )
                                                  goto LABEL_1696;
                                                v1356 = RtlUIntAdd(0LL, v1357, v1619);
                                                if ( v1356 < 0 )
                                                  goto LABEL_1696;
                                                if ( v1288 - v1619[0] < (unsigned int)v1358 )
                                                {
LABEL_1660:
                                                  v1356 = -1073741762;
LABEL_1696:
                                                  v1085 = v1356 | 0x10000000;
                                                  goto LABEL_1497;
                                                }
                                                v1359 = *(unsigned int *)v1733;
                                                v1356 = RtlULongLongAdd(v1733, v1358, &v1733);
                                                if ( v1356 < 0
                                                  || (v1356 = RtlUIntAdd(v1619[0], v1360, v1619), v1356 < 0) )
                                                {
LABEL_1695:
                                                  v1072 = (int *)v1628;
                                                  goto LABEL_1696;
                                                }
                                                if ( v1288 - v1619[0] < (unsigned int)v1359 )
                                                  goto LABEL_1694;
                                                v1356 = RtlUIntAdd(v1619[0], (unsigned int)v1359, v1619);
                                                if ( v1356 < 0 )
                                                  goto LABEL_1695;
                                                v1362 = v1733;
                                                if ( v1628 + (unsigned __int64)v1288 < (unsigned __int64)v1733 + v1359
                                                  || v1288 + v1628 - v1359 - (unsigned __int64)v1733 >= 8 )
                                                {
LABEL_1694:
                                                  v1356 = -1073741762;
                                                  goto LABEL_1695;
                                                }
                                                v1429 = (int)v1361;
                                                v1363 = v1361;
                                                v1356 = (int)v1361;
                                                if ( v1733 )
                                                {
                                                  v1356 = RtlULongLongAdd(v1733, (unsigned int)v1359, &v1734);
                                                  if ( v1356 < 0 )
                                                    goto LABEL_1691;
                                                  v1365 = v1734;
                                                  if ( (unsigned __int64)v1362 < v1734 )
                                                  {
                                                    do
                                                    {
                                                      v1356 = RtlULongLongAdd(v1364, 4LL, &v1735);
                                                      if ( v1356 < 0 )
                                                        goto LABEL_1691;
                                                      if ( v1735 > v1367 )
                                                        goto LABEL_1685;
                                                      v1368 = RtlUIntAdd(4LL, *v1366, v1620);
                                                      v1356 = v1368;
                                                      if ( v1368 >= 0 )
                                                        v1370 = v1620[0];
                                                      v1619[1] = v1370;
                                                      if ( v1368 < 0 )
                                                        goto LABEL_1691;
                                                      v1356 = RtlULongLongAdd(v1369, v1370, &v1736);
                                                      if ( v1356 < 0 )
                                                        goto LABEL_1691;
                                                      v1364 = v1736;
                                                      if ( v1736 > v1365 )
                                                        goto LABEL_1685;
                                                      ++v1429;
                                                    }
                                                    while ( v1736 < v1365 );
                                                  }
                                                  if ( v1364 != v1365 )
                                                  {
LABEL_1685:
                                                    v1356 = -1073741811;
                                                    goto LABEL_1695;
                                                  }
                                                }
                                                if ( (_DWORD)v1359 )
                                                {
                                                  v1371 = GetProcessHeap();
                                                  v1363 = HeapAlloc(v1371, 8u, v1359);
                                                  if ( !v1363 )
                                                  {
                                                    v1356 = -1073741801;
                                                    goto LABEL_1691;
                                                  }
                                                  v1356 = 0;
                                                }
                                                if ( v1362 )
                                                  memcpy_0(v1363, v1362, v1359);
                                                LODWORD(v1758[0]) = v1429;
                                                v1758[1] = v1363;
LABEL_1691:
                                                if ( v1356 >= 0 )
                                                {
                                                  v1072 = (int *)v1628;
                                                  if ( v1414 == LODWORD(v1758[0]) )
                                                    goto LABEL_1696;
                                                  goto LABEL_1660;
                                                }
                                                goto LABEL_1695;
                                              }
                                            }
                                            else
                                            {
                                              v1287 = v1732;
                                            }
                                          }
                                          v1288 = v1607;
                                          v1085 = -805306367;
                                          v1072 = (int *)v1628;
                                          goto LABEL_1656;
                                        }
                                        if ( v1249 - v1634 < (unsigned int)v1250 )
                                          goto LABEL_1563;
                                        v1516 = v1731;
                                        v1499 = v1250;
                                        v1248 = RtlULongLongAdd(v1731, (unsigned int)v1250, &v1731);
                                        if ( v1248 < 0 )
                                          goto LABEL_1616;
                                        v1248 = RtlUIntAdd(v1634, v1251, &v1634);
                                        if ( v1248 < 0 )
                                          goto LABEL_1616;
                                        if ( v1252 - v1634 < (unsigned int)v1177 )
                                          goto LABEL_1563;
                                        v1253 = *(unsigned int *)v1731;
                                        v1248 = RtlULongLongAdd(v1731, v1177, &v1731);
                                        if ( v1248 < 0 )
                                          goto LABEL_1616;
                                        v1248 = RtlUIntAdd(v1634, (unsigned int)v1177, &v1634);
                                        if ( v1248 < 0 )
                                          goto LABEL_1616;
                                        if ( v1254 - v1634 < (unsigned int)v1253 )
                                          goto LABEL_1563;
                                        v1515 = v1731;
                                        v1248 = RtlULongLongAdd(v1731, (unsigned int)v1253, &v1731);
                                        if ( v1248 < 0 )
                                          goto LABEL_1616;
                                        v1248 = RtlUIntAdd(v1634, (unsigned int)v1253, &v1634);
                                        if ( v1248 < 0 )
                                          goto LABEL_1616;
                                        if ( v1255 - v1634 < (unsigned int)v1177 )
                                          goto LABEL_1563;
                                        v1256 = *(unsigned int *)v1731;
                                        v1248 = RtlULongLongAdd(v1731, 4LL, &v1731);
                                        if ( v1248 < 0 )
                                          goto LABEL_1616;
                                        v1248 = RtlUIntAdd(v1634, 4LL, &v1634);
                                        if ( v1248 < 0 )
                                          goto LABEL_1616;
                                        if ( v1257 - v1634 < (unsigned int)v1256 )
                                          goto LABEL_1563;
                                        v1248 = RtlUIntAdd(v1634, (unsigned int)v1256, &v1634);
                                        if ( v1248 < 0 )
                                          goto LABEL_1616;
                                        if ( v1258 != v1634 || (unsigned int)(v1256 + v1253 + v1259) + 12LL != v1258 )
                                        {
LABEL_1563:
                                          v1248 = -1073741762;
                                          goto LABEL_1616;
                                        }
                                        v1260 = GetProcessHeap();
                                        v1261 = HeapAlloc(v1260, 8u, 0x30uLL);
                                        v1247 = 0LL;
                                        v1262 = v1261;
                                        if ( !v1261 )
                                        {
                                          v1248 = -1073741801;
LABEL_1606:
                                          v1071 = v1517;
                                          v1279 = 0LL;
                                          if ( v1248 < 0 )
                                          {
                                            v1279 = v1517;
                                            v1071 = 0LL;
                                          }
                                          v1518 = (__int64)v1071;
                                          if ( v1279 )
                                          {
                                            v1280 = (void *)v1279[1];
                                            if ( v1280 )
                                            {
                                              v1281 = GetProcessHeap();
                                              HeapFree(v1281, 0, v1280);
                                              v1279[1] = 0LL;
                                            }
                                            v1282 = (void *)v1279[3];
                                            if ( v1282 )
                                            {
                                              v1283 = GetProcessHeap();
                                              HeapFree(v1283, 0, v1282);
                                              v1279[3] = 0LL;
                                            }
                                            v1284 = (void *)v1279[5];
                                            if ( v1284 )
                                            {
                                              v1285 = GetProcessHeap();
                                              HeapFree(v1285, 0, v1284);
                                              v1279[5] = 0LL;
                                            }
                                            v1286 = GetProcessHeap();
                                            HeapFree(v1286, 0, v1279);
                                            v1247 = 0LL;
                                            v1518 = (__int64)v1071;
                                          }
                                          goto LABEL_1616;
                                        }
                                        v1263 = v1516;
                                        if ( v1516 )
                                        {
                                          *(_DWORD *)v1261 = v1412;
                                          v1264 = GetProcessHeap();
                                          v1265 = HeapAlloc(v1264, 8u, v1499);
                                          v1247 = 0LL;
                                          if ( !v1265 )
                                          {
LABEL_1586:
                                            v1248 = -1073741801;
                                            goto LABEL_1598;
                                          }
                                          v1262[1] = v1265;
                                          memcpy_0(v1265, v1263, v1499);
                                          v1247 = 0LL;
                                        }
                                        else
                                        {
                                          *(_DWORD *)v1261 = 0;
                                          v1261[1] = 0LL;
                                        }
                                        v1266 = v1515;
                                        if ( v1515 )
                                        {
                                          *((_DWORD *)v1262 + 4) = v1253;
                                          v1267 = GetProcessHeap();
                                          v1268 = HeapAlloc(v1267, 8u, v1253);
                                          v1247 = 0LL;
                                          if ( !v1268 )
                                            goto LABEL_1586;
                                          v1262[3] = v1268;
                                          memcpy_0(v1268, v1266, v1253);
                                          v1247 = 0LL;
                                        }
                                        else
                                        {
                                          *((_DWORD *)v1262 + 4) = 0;
                                          v1262[3] = 0LL;
                                        }
                                        v1269 = v1731;
                                        if ( v1731 )
                                        {
                                          *((_DWORD *)v1262 + 8) = v1256;
                                          v1270 = GetProcessHeap();
                                          v1271 = HeapAlloc(v1270, 8u, v1256);
                                          v1247 = 0LL;
                                          if ( !v1271 )
                                            goto LABEL_1586;
                                          v1262[5] = v1271;
                                          memcpy_0(v1271, v1269, v1256);
                                          v1247 = 0LL;
                                        }
                                        else
                                        {
                                          *((_DWORD *)v1262 + 8) = 0;
                                          v1262[5] = 0LL;
                                        }
                                        v1517 = v1262;
                                        v1248 = 0;
                                        v1262 = 0LL;
LABEL_1598:
                                        if ( v1262 )
                                        {
                                          v1272 = (void *)v1262[1];
                                          if ( v1272 )
                                          {
                                            v1273 = GetProcessHeap();
                                            HeapFree(v1273, 0, v1272);
                                            v1262[1] = 0LL;
                                          }
                                          v1274 = (void *)v1262[3];
                                          if ( v1274 )
                                          {
                                            v1275 = GetProcessHeap();
                                            HeapFree(v1275, 0, v1274);
                                            v1262[3] = 0LL;
                                          }
                                          v1276 = (void *)v1262[5];
                                          if ( v1276 )
                                          {
                                            v1277 = GetProcessHeap();
                                            HeapFree(v1277, 0, v1276);
                                            v1262[5] = 0LL;
                                          }
                                          v1278 = GetProcessHeap();
                                          HeapFree(v1278, 0, v1262);
                                          v1247 = 0LL;
                                        }
                                        goto LABEL_1606;
                                      }
                                      v1085 = -2147024809;
                                    }
                                    v1072 = 0LL;
                                    goto LABEL_1497;
                                  }
                                  goto LABEL_1540;
                                }
                              }
                              v1085 = -1073741811;
LABEL_1464:
                              v1177 = 4LL;
                              goto LABEL_1537;
                            }
                          }
                        }
LABEL_1703:
                        v1018 = v1506;
                        goto LABEL_1704;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_1332:
      v1018 = v1020;
    }
LABEL_1704:
    v1754 = 0LL;
    v1375 = v1755;
    if ( v1755 )
    {
      v1376 = GetProcessHeap();
      HeapFree(v1376, 0, v1375);
      v1755 = 0LL;
    }
    v1758[0] = 0LL;
    v1377 = v1758[1];
    if ( v1758[1] )
    {
      v1378 = GetProcessHeap();
      HeapFree(v1378, 0, v1377);
      v1758[1] = 0LL;
    }
    if ( v1018 )
    {
      v1379 = GetProcessHeap();
      HeapFree(v1379, 0, v1018);
    }
    if ( v162 )
    {
      v1380 = GetProcessHeap();
      HeapFree(v1380, 0, v162);
    }
  }
LABEL_1712:
  v88 = v1581;
  v1623 = v1582;
  v1664 = (int *)v1471;
  v1515 = 0LL;
LABEL_101:
  while ( _InterlockedCompareExchange(&dword_1805A0710, 1, 0) )
    ;
  v89 = dword_18059F558;
  if ( dword_18059F558 > 0 )
  {
    --dword_18059F558;
    if ( v89 == 1 )
    {
      v90 = (HMODULE *)&unk_1805A0520;
      v91 = 4LL;
      do
      {
        if ( *v90 )
          FreeLibrary(*v90);
        v90 += 3;
        --v91;
      }
      while ( v91 );
      memset_0(&unk_1805A0520, 0, 0x60uLL);
      memcpy_0(off_1805960F0, off_180472760, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1805A0710, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1515);
  if ( v87 < 0 )
  {
    switch ( v87 )
    {
      case -805306316:
        v87 = -1073418222;
LABEL_112:
        v92 = v87;
        goto LABEL_1722;
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
    goto LABEL_1719;
  }
  if ( v88 != 4 )
  {
LABEL_1719:
    v92 = -1073418210;
    goto LABEL_1722;
  }
  v92 = v1580;
  v1577 = *v1664;
LABEL_1722:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1664);
  if ( v92 >= 0 )
  {
    *(_BYTE *)v1663 = v1577 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v92);
    return (unsigned int)v92;
  }
}
