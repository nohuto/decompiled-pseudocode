/*
 * XREFs of sub_18003CC78 @ 0x18003CC78
 * Callers:
 *     sub_18003CC4C @ 0x18003CC4C (sub_18003CC4C.c)
 * Callees:
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     sub_18003EC98 @ 0x18003EC98 (sub_18003EC98.c)
 *     sub_18003ECBC @ 0x18003ECBC (sub_18003ECBC.c)
 *     sub_18003ECDC @ 0x18003ECDC (sub_18003ECDC.c)
 *     sub_1800439E4 @ 0x1800439E4 (sub_1800439E4.c)
 *     sub_180044164 @ 0x180044164 (sub_180044164.c)
 *     sub_1800443AC @ 0x1800443AC (sub_1800443AC.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     memset @ 0x18004683A (memset.c)
 *     wcscmp @ 0x180046846 (wcscmp.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180046880 @ 0x180046880 (sub_180046880.c)
 *     sub_180085A84 @ 0x180085A84 (sub_180085A84.c)
 *     sub_180085AB4 @ 0x180085AB4 (sub_180085AB4.c)
 */

// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall sub_18003CC78(int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v8; // r15d
  int v9; // edi
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rsi
  _BYTE *v15; // r12
  int v16; // eax
  unsigned __int8 *v17; // r13
  int v18; // ebx
  int v19; // r11d
  int v20; // r14d
  int v21; // r10d
  int v22; // r9d
  int v23; // ecx
  int v24; // r10d
  int v25; // r11d
  int v26; // r9d
  unsigned int v27; // r8d
  int v28; // r11d
  unsigned int v29; // r8d
  int v30; // r11d
  int v31; // r8d
  unsigned int v32; // r11d
  int v33; // r8d
  int v34; // r11d
  int v35; // r8d
  unsigned int v36; // r11d
  int v37; // edx
  int v38; // r11d
  unsigned int v39; // ebx
  int v40; // r11d
  int v41; // ebx
  int v42; // r11d
  int v43; // ebx
  unsigned int v44; // r11d
  int v45; // ebx
  int v46; // r11d
  int v47; // ebx
  unsigned int v48; // r11d
  int v49; // ebx
  int v50; // edx
  int v51; // ecx
  int v52; // ebx
  int v53; // edx
  int v54; // r11d
  int v55; // r11d
  int v56; // ebx
  int v57; // r11d
  int v58; // ebx
  int v59; // r11d
  int v60; // ebx
  WCHAR *v61; // r14
  unsigned __int64 v62; // rcx
  char v63; // al
  int v64; // esi
  int v65; // edi
  LPCWSTR i; // rdi
  unsigned int v67; // r12d
  const WCHAR *v68; // rdx
  __int64 v69; // rax
  const WCHAR *v70; // rdi
  char *v71; // rbx
  __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  unsigned int v74; // r13d
  unsigned int v75; // r14d
  const CHAR *v76; // rdx
  __int64 v77; // rax
  __int64 (__fastcall *ProcAddress)(); // rcx
  HANDLE ProcessHeap; // rax
  __int64 v80; // rbx
  HMODULE *v81; // rdi
  int v82; // esi
  signed int v83; // edi
  __int64 v84; // r14
  __int64 v85; // r9
  wchar_t *j; // rbx
  signed int LastError; // eax
  signed int v88; // eax
  DWORD CurrentThreadId; // eax
  __int64 v90; // r14
  __int64 v91; // r9
  wchar_t *k; // rbx
  signed int v93; // eax
  HANDLE CurrentProcess; // rax
  int v95; // eax
  int v96; // r12d
  void *v97; // r13
  HANDLE v98; // rax
  _OWORD *v99; // rbx
  _OWORD *v100; // rax
  HANDLE v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // r13
  int v104; // eax
  unsigned int v105; // edi
  int v106; // eax
  unsigned int v107; // r11d
  int v108; // eax
  int v109; // eax
  unsigned int v110; // r11d
  int v111; // r10d
  int v112; // eax
  int v113; // eax
  unsigned int v114; // r11d
  int v115; // r10d
  int v116; // eax
  int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  int v120; // r10d
  unsigned int v121; // r11d
  int v122; // eax
  int v123; // eax
  unsigned int v124; // r11d
  int v125; // r10d
  int v126; // eax
  int v127; // eax
  unsigned int v128; // r11d
  int v129; // r10d
  int v130; // eax
  int v131; // eax
  int v132; // r10d
  unsigned int v133; // edi
  HANDLE v134; // rax
  _DWORD *v135; // rax
  _DWORD *v136; // rdi
  __int64 v137; // r11
  int v138; // eax
  _DWORD *v139; // rax
  int v140; // edi
  int v141; // eax
  __int64 v142; // rdx
  _DWORD *v143; // rdi
  int v144; // eax
  unsigned int v145; // r9d
  int v146; // r10d
  _OWORD *v147; // rax
  int v148; // eax
  __int64 v149; // rdx
  _DWORD *v150; // rdi
  int v151; // eax
  unsigned int v152; // r9d
  int v153; // r10d
  _QWORD *v154; // rax
  int v155; // eax
  unsigned __int64 v156; // rcx
  __int64 v157; // rdx
  _DWORD *v158; // rdi
  int v159; // eax
  unsigned int v160; // r9d
  int v161; // r10d
  unsigned __int64 *v162; // rax
  __int64 v163; // r11
  int v164; // eax
  __int64 v165; // rdx
  _DWORD *v166; // rdi
  int v167; // eax
  __int64 v168; // rcx
  unsigned int v169; // r9d
  int v170; // r11d
  __int64 v171; // r10
  void *v172; // rcx
  int v173; // eax
  __int64 v174; // rdx
  _DWORD *v175; // rdi
  int v176; // eax
  unsigned int v177; // r9d
  int v178; // r10d
  int *v179; // rax
  int v180; // eax
  __int64 v181; // rdx
  void *v182; // rdi
  HANDLE v183; // rax
  void *v184; // rdi
  HANDLE v185; // rax
  HANDLE v186; // rax
  HANDLE v187; // rax
  DWORD ModuleFileNameW; // eax
  _DWORD *v189; // rdi
  int v190; // eax
  unsigned int v191; // r9d
  int v192; // r10d
  _DWORD *v193; // rax
  int v194; // eax
  __int64 v195; // rcx
  unsigned int v196; // r9d
  int v197; // eax
  unsigned int v198; // r9d
  unsigned int v199; // edi
  unsigned int v200; // r11d
  int v201; // eax
  unsigned int v202; // r11d
  int v203; // eax
  unsigned int v204; // r11d
  int v205; // eax
  unsigned int v206; // r11d
  int v207; // eax
  unsigned int v208; // eax
  unsigned __int8 *v209; // rdi
  unsigned __int64 v210; // r13
  int v211; // r12d
  unsigned int v212; // eax
  unsigned int v213; // edi
  HANDLE v214; // rax
  _DWORD *v215; // rdi
  unsigned int v216; // r11d
  void *v217; // rcx
  HANDLE v218; // rax
  _QWORD *v219; // rbx
  int v220; // r12d
  unsigned __int8 v221; // al
  unsigned __int64 m; // rcx
  _BYTE *v223; // r12
  int v224; // r10d
  unsigned __int8 *v225; // r8
  unsigned int v226; // r9d
  unsigned int v227; // edx
  int v228; // r11d
  int v229; // r10d
  char v230; // r9
  int v231; // edi
  int v232; // ecx
  unsigned int v233; // r10d
  unsigned int v234; // ecx
  int v235; // edi
  int v236; // r11d
  char v237; // r14
  unsigned __int64 v238; // r11
  unsigned __int8 *v239; // rdx
  int v240; // r14d
  int v241; // ebx
  _BYTE *v242; // rax
  int v243; // r12d
  int v244; // r15d
  int v245; // r8d
  int v246; // edi
  int v247; // r10d
  int v248; // r9d
  int v249; // r10d
  int v250; // r9d
  int v251; // r10d
  unsigned int v252; // r9d
  int v253; // r10d
  int v254; // r9d
  int v255; // r10d
  int v256; // r9d
  int v257; // r10d
  int v258; // r9d
  unsigned int v259; // r10d
  unsigned int v260; // r9d
  int v261; // r10d
  int v262; // r9d
  int v263; // r10d
  int v264; // r9d
  int v265; // r10d
  int v266; // r9d
  int v267; // r10d
  int v268; // r9d
  unsigned int v269; // r10d
  int v270; // r9d
  unsigned int v271; // r10d
  int v272; // r9d
  int v273; // r10d
  int v274; // r9d
  int v275; // r10d
  int v276; // r9d
  int v277; // r10d
  int v278; // r9d
  int v279; // r10d
  unsigned int v280; // r12d
  HANDLE v281; // rax
  _DWORD *v282; // rax
  _DWORD *v283; // rdi
  HANDLE v284; // rax
  void *v285; // rax
  HANDLE v286; // rax
  _OWORD *v287; // rax
  HANDLE v288; // rax
  _QWORD *v289; // rax
  void *v290; // r13
  HANDLE v291; // rax
  void *v292; // r13
  HANDLE v293; // rax
  void *v294; // r13
  HANDLE v295; // rax
  HANDLE v296; // rax
  void *v297; // rdi
  HANDLE v298; // rax
  void *v299; // rdi
  HANDLE v300; // rax
  void *v301; // rdi
  HANDLE v302; // rax
  void *v303; // rdi
  HANDLE v304; // rax
  HANDLE v305; // rax
  const void **v306; // rbx
  int v307; // r12d
  unsigned int v308; // eax
  unsigned int v309; // edi
  HANDLE v310; // rax
  _DWORD *v311; // rdi
  void *v312; // rcx
  void *v313; // rcx
  HANDLE v314; // rax
  int v315; // eax
  unsigned int v316; // ecx
  unsigned int v317; // eax
  unsigned int v318; // edi
  int v319; // eax
  unsigned int *v320; // rcx
  unsigned int v321; // ebx
  int v322; // r9d
  int v323; // r9d
  unsigned int *v324; // rax
  unsigned int *v325; // rcx
  unsigned int v326; // ebx
  int v327; // r9d
  int v328; // r9d
  unsigned int *v329; // rax
  unsigned int v330; // r10d
  unsigned int v331; // r11d
  unsigned int v332; // eax
  unsigned int v333; // edi
  HANDLE v334; // rax
  int *v335; // rax
  int *v336; // rbx
  FARPROC v337; // rax
  int v338; // eax
  unsigned int v339; // edi
  signed int v340; // eax
  int v341; // r12d
  SIZE_T v342; // r9
  unsigned int v343; // r9d
  SIZE_T v344; // rbx
  SIZE_T v345; // r13
  unsigned int v346; // r10d
  int v347; // r9d
  HANDLE v348; // rax
  _QWORD *v349; // rax
  _QWORD *v350; // rdi
  unsigned int *v351; // rbx
  int *v352; // rdi
  unsigned int v353; // r13d
  unsigned __int8 *v354; // r12
  __int64 v355; // rbx
  unsigned __int64 v356; // rbx
  int *v357; // r11
  unsigned __int8 v358; // al
  char *v359; // rcx
  unsigned __int8 *v360; // r8
  int v361; // r10d
  unsigned int v362; // edx
  int v363; // r12d
  char v364; // r9
  int v365; // edi
  int v366; // ecx
  HANDLE v367; // rax
  void *v368; // rax
  HANDLE v369; // rax
  void *v370; // rax
  HANDLE v371; // rax
  void *v372; // rax
  void *v373; // rbx
  HANDLE v374; // rax
  void *v375; // rbx
  HANDLE v376; // rax
  void *v377; // rbx
  HANDLE v378; // rax
  HANDLE v379; // rax
  unsigned int *v380; // rdi
  void *v381; // rbx
  HANDLE v382; // rax
  void *v383; // rbx
  HANDLE v384; // rax
  void *v385; // rbx
  HANDLE v386; // rax
  HANDLE v387; // rax
  unsigned int v388; // r9d
  unsigned int v389; // r10d
  int v390; // ecx
  int v391; // edi
  int v392; // r12d
  _BYTE *v393; // rsi
  char v394; // r14
  unsigned __int64 v395; // r12
  int v396; // eax
  _BYTE *v397; // rbx
  int v398; // esi
  unsigned __int8 *v399; // r15
  int v400; // r13d
  unsigned int v401; // r11d
  int v402; // r8d
  int v403; // edi
  int v404; // ecx
  int v405; // r8d
  int v406; // r9d
  int v407; // edi
  unsigned int v408; // r10d
  int v409; // r9d
  unsigned int v410; // r10d
  int v411; // r9d
  int v412; // r10d
  unsigned int v413; // r9d
  int v414; // r10d
  int v415; // r9d
  int v416; // r10d
  unsigned int v417; // r9d
  int v418; // r10d
  int v419; // r9d
  unsigned int v420; // r10d
  int v421; // r9d
  int v422; // r10d
  int v423; // r9d
  int v424; // r10d
  int v425; // r9d
  int v426; // r10d
  int v427; // r9d
  int v428; // r10d
  unsigned int v429; // r9d
  int v430; // r10d
  int v431; // edx
  int v432; // ecx
  int v433; // r10d
  int v434; // edx
  int v435; // r9d
  int v436; // r9d
  int v437; // r10d
  int v438; // r9d
  int v439; // r10d
  int v440; // r9d
  int v441; // r10d
  unsigned __int64 n; // rcx
  int v443; // ebx
  int *v444; // rbx
  HANDLE v445; // rax
  int v446; // r12d
  unsigned int v447; // r11d
  __int64 v448; // r11
  __int64 v449; // rdx
  SIZE_T v450; // r13
  char *v451; // rcx
  void *v452; // rbx
  void *v453; // rdi
  unsigned int *v454; // rdi
  unsigned int *v455; // r10
  unsigned __int64 v456; // r10
  int v457; // eax
  unsigned int v458; // r9d
  HANDLE v459; // rax
  HANDLE v460; // rax
  _QWORD *v461; // rbx
  void *v462; // rdi
  HANDLE v463; // rax
  void *v464; // rdi
  HANDLE v465; // rax
  void *v466; // rdi
  HANDLE v467; // rax
  HANDLE v468; // rax
  HANDLE v469; // rax
  HANDLE v470; // rax
  void *v471; // rdi
  HANDLE v472; // rax
  void *v473; // rdi
  HANDLE v474; // rax
  void *v475; // rdi
  HANDLE v476; // rax
  HANDLE v477; // rax
  HANDLE v478; // rax
  __int64 v479; // r11
  int v480; // r9d
  int *v481; // rax
  int *v482; // rcx
  int v483; // edi
  unsigned int v484; // r9d
  int v485; // edi
  int *v486; // rax
  int *v487; // rcx
  unsigned int v488; // edi
  unsigned int v489; // r9d
  int v490; // edi
  int *v491; // rax
  LPVOID v492; // rcx
  unsigned int v493; // edi
  unsigned int v494; // r9d
  int v495; // r10d
  void *v496; // rdi
  int *v497; // rcx
  unsigned int v498; // r11d
  int v499; // r9d
  int v500; // r11d
  int v501; // r9d
  int *v502; // rax
  int *v503; // rcx
  unsigned int v504; // ebx
  unsigned int v505; // r10d
  unsigned int v506; // r11d
  int v507; // r9d
  int v508; // r9d
  int *v509; // rax
  int v510; // ecx
  __int64 v511; // rax
  unsigned int v512; // edi
  int v513; // eax
  __int64 v514; // rax
  __int64 v515; // rdi
  int v516; // r13d
  _BYTE *v517; // r14
  int v518; // esi
  unsigned __int8 *v519; // r12
  int v520; // ebx
  int v521; // eax
  int v522; // r11d
  int v523; // r10d
  int v524; // ecx
  int v525; // r11d
  int v526; // ebx
  int v527; // r10d
  unsigned int v528; // r9d
  int v529; // ebx
  unsigned int v530; // r9d
  int v531; // ebx
  int v532; // r9d
  unsigned int v533; // ebx
  int v534; // r9d
  int v535; // ebx
  int v536; // r9d
  unsigned int v537; // ebx
  int v538; // edx
  int v539; // ebx
  unsigned int v540; // esi
  int v541; // ebx
  int v542; // esi
  int v543; // ebx
  int v544; // esi
  unsigned int v545; // r8d
  int v546; // esi
  int v547; // r8d
  int v548; // esi
  unsigned int v549; // r8d
  int v550; // esi
  int v551; // ebx
  int v552; // ecx
  int v553; // esi
  int v554; // ebx
  int v555; // ebx
  int v556; // esi
  int v557; // ebx
  int v558; // esi
  int v559; // ebx
  int v560; // esi
  char v561; // al
  unsigned __int64 v562; // rcx
  int v563; // r13d
  WCHAR *v564; // rdx
  int v565; // ebx
  LPCWSTR v566; // rbx
  const WCHAR *v567; // rdx
  __int64 v568; // rax
  const WCHAR *v569; // rbx
  HMODULE *v570; // r8
  __int64 v571; // rcx
  unsigned __int64 v572; // rcx
  unsigned int v573; // eax
  unsigned int v574; // ecx
  const CHAR *v575; // rdx
  __int64 v576; // rax
  __int64 (__fastcall *v577)(); // rcx
  HANDLE v578; // rax
  HMODULE *v579; // rbx
  __int64 v580; // r13
  int v581; // eax
  __int64 v582; // rax
  __int64 v583; // rdi
  int v584; // r13d
  _BYTE *v585; // rsi
  int v586; // r14d
  unsigned __int8 *v587; // r12
  int v588; // ebx
  int v589; // eax
  int v590; // r11d
  int v591; // r10d
  int v592; // ecx
  int v593; // r11d
  int v594; // ebx
  int v595; // r10d
  unsigned int v596; // r9d
  int v597; // ebx
  unsigned int v598; // r9d
  int v599; // ebx
  int v600; // r9d
  unsigned int v601; // ebx
  int v602; // r9d
  int v603; // ebx
  int v604; // r9d
  unsigned int v605; // ebx
  int v606; // r9d
  int v607; // ebx
  unsigned int v608; // r14d
  int v609; // ebx
  int v610; // r14d
  int v611; // ebx
  int v612; // r14d
  unsigned int v613; // ebx
  int v614; // r14d
  int v615; // ebx
  int v616; // r14d
  unsigned int v617; // ebx
  int v618; // r14d
  int v619; // edx
  int v620; // ecx
  int v621; // r14d
  int v622; // edx
  int v623; // ebx
  int v624; // ebx
  int v625; // r14d
  int v626; // ebx
  int v627; // r14d
  int v628; // ebx
  int v629; // r14d
  char v630; // al
  unsigned __int64 v631; // rcx
  int v632; // r13d
  WCHAR *v633; // rdx
  int v634; // ebx
  LPCWSTR v635; // rbx
  const WCHAR *v636; // rdx
  __int64 v637; // rax
  const WCHAR *v638; // rbx
  HMODULE *v639; // r8
  __int64 v640; // rcx
  unsigned __int64 v641; // rcx
  unsigned int v642; // eax
  unsigned int v643; // ecx
  const CHAR *v644; // rdx
  __int64 v645; // rax
  __int64 (__fastcall *v646)(); // rcx
  HANDLE v647; // rax
  HMODULE *v648; // rbx
  __int64 v649; // r13
  signed int v650; // eax
  signed int v651; // r13d
  _DWORD *v652; // rdi
  __int64 v653; // rbx
  signed int v654; // eax
  _DWORD *v655; // rax
  _DWORD *v656; // rdi
  unsigned int v657; // esi
  __int64 v658; // rax
  unsigned int v659; // r10d
  unsigned int v660; // r9d
  __int64 v661; // r8
  unsigned int v662; // ecx
  unsigned int *v663; // rdx
  __int64 v664; // rdi
  const wchar_t *v665; // rcx
  __int64 v666; // r8
  const wchar_t **v667; // rdx
  __int64 v668; // rax
  __int64 v669; // rax
  _BYTE *v670; // r14
  int v671; // r11d
  unsigned __int8 *v672; // rsi
  int v673; // r10d
  int v674; // ebx
  int v675; // r15d
  __int64 v676; // r12
  int v677; // r9d
  int v678; // r8d
  int v679; // eax
  int v680; // r9d
  int v681; // r10d
  int v682; // r8d
  unsigned int v683; // edi
  int v684; // r10d
  unsigned int v685; // edi
  int v686; // r10d
  int v687; // edi
  unsigned int v688; // r10d
  int v689; // edi
  int v690; // r10d
  int v691; // edi
  unsigned int v692; // r10d
  int v693; // edi
  int v694; // r10d
  unsigned int v695; // r11d
  int v696; // r10d
  int v697; // r11d
  int v698; // r10d
  int v699; // r11d
  unsigned int v700; // r10d
  int v701; // r11d
  int v702; // r10d
  int v703; // r11d
  unsigned int v704; // r10d
  int v705; // r11d
  int v706; // ecx
  int v707; // eax
  int v708; // r11d
  int v709; // ecx
  int v710; // r10d
  int v711; // r10d
  int v712; // r11d
  int v713; // r10d
  int v714; // r11d
  int v715; // r10d
  int v716; // r11d
  unsigned __int64 v717; // rax
  void *v718; // rbx
  __m128i v719; // xmm1
  __m128i v720; // xmm0
  __m128i v721; // xmm0
  __m128i v722; // xmm1
  __m128i v723; // xmm1
  __m128i v724; // xmm1
  _BYTE *v725; // rdx
  _QWORD *v726; // rdi
  __int64 v727; // r8
  unsigned int kk; // ecx
  __int64 v729; // rax
  __int64 v730; // rdi
  void **v731; // rbx
  __int16 *v732; // rcx
  _QWORD *v733; // rdx
  unsigned int v734; // r8d
  __int16 v735; // r9
  _WORD *v736; // rcx
  __int64 v737; // rax
  __int64 v738; // rcx
  __int64 v739; // rax
  int v740; // eax
  __int64 v741; // rcx
  __int64 v742; // rax
  signed int v743; // eax
  __int64 v744; // rax
  _WORD *v745; // rdi
  __int64 v746; // rcx
  int v747; // edi
  signed int v748; // eax
  unsigned int v749; // edi
  __int64 v750; // rbx
  int v751; // eax
  __int64 v752; // rax
  signed int v753; // eax
  signed int v754; // eax
  void *v755; // rax
  __int64 v756; // rbx
  int v757; // eax
  __int64 v758; // rax
  signed int v759; // eax
  int v760; // ebx
  unsigned int v761; // edx
  int v762; // ecx
  int v763; // eax
  int v764; // ebx
  __int64 v765; // rdi
  __int64 v766; // rdi
  __int64 v767; // rdx
  __int64 v768; // rdi
  int v769; // eax
  __int64 v770; // rax
  signed int v771; // eax
  __int64 v772; // rdi
  __int64 v773; // rbx
  int v774; // eax
  int v775; // r13d
  int v776; // ebx
  int v777; // edi
  __int64 v778; // rax
  int v779; // edx
  int v780; // ecx
  __int64 v781; // rax
  int v782; // ebx
  int v783; // eax
  __int64 v784; // rbx
  HMODULE *v785; // rdi
  unsigned int v786; // edi
  LPVOID v787; // r13
  __int64 v788; // rax
  bool v789; // zf
  int v790; // ebx
  int v791; // eax
  __int64 v792; // rdi
  __int64 v793; // rax
  __int64 v794; // rax
  __int64 v795; // r13
  signed int v796; // ebx
  signed int v797; // eax
  int v798; // eax
  char *v799; // rcx
  __int64 v800; // rax
  int v801; // r8d
  int v802; // edx
  int v803; // r9d
  int v804; // edi
  int v805; // ecx
  int v806; // r11d
  char *v807; // rdx
  __int64 v808; // rax
  __int64 v809; // r12
  __int64 v810; // r10
  unsigned __int8 *v811; // r9
  int nn; // edi
  int v813; // r8d
  int v814; // edi
  int v815; // edx
  int v816; // edi
  int v817; // edx
  __int64 v818; // rdi
  LPVOID v819; // r13
  __int64 v820; // rax
  __int64 v821; // rax
  __int64 v822; // r13
  signed int v823; // ebx
  signed int v824; // eax
  int v825; // eax
  char *v826; // rcx
  __int64 v827; // rax
  int v828; // eax
  int v829; // r8d
  int v830; // edi
  int v831; // r9d
  int v832; // ecx
  int v833; // edx
  int v834; // r11d
  int v835; // esi
  char *v836; // rdx
  __int64 v837; // rax
  unsigned __int8 *v838; // r9
  __int64 v839; // r10
  int i1; // edi
  int v841; // r8d
  int v842; // edi
  int v843; // edx
  int v844; // edi
  int v845; // edx
  LPVOID v846; // rdi
  int v847; // r11d
  unsigned int v848; // r13d
  int v849; // ecx
  unsigned __int64 v850; // kr00_8
  int v851; // edi
  __int64 v852; // rax
  __int64 v853; // rbx
  __int64 v854; // rax
  int v855; // ebx
  int v856; // edi
  __int64 v857; // rax
  signed int v858; // eax
  bool v859; // sf
  int v860; // eax
  char *v861; // rcx
  int v862; // edi
  __int64 v863; // rax
  int v864; // r8d
  int v865; // r9d
  int v866; // edx
  int v867; // ecx
  int v868; // ebx
  int v869; // r11d
  unsigned __int8 *v870; // rdi
  char *v871; // rax
  unsigned __int8 *v872; // r9
  int v873; // r8d
  __int64 v874; // r10
  int v875; // r8d
  int v876; // edi
  int v877; // edx
  int v878; // edi
  int v879; // edx
  int v880; // edi
  int v881; // ecx
  __int64 v882; // rdi
  __int64 v883; // rax
  int v884; // edi
  signed int v885; // ebx
  void *v886; // rax
  signed int v887; // eax
  int v888; // eax
  __int64 v889; // rcx
  __int64 v890; // rax
  int v891; // eax
  int v892; // edx
  int v893; // r9d
  int v894; // r10d
  int v895; // r8d
  int v896; // ecx
  int v897; // r11d
  __int64 v898; // rdx
  char *v899; // rax
  unsigned __int8 *v900; // r9
  char *v901; // r10
  int mm; // edi
  int v903; // r8d
  int v904; // edi
  int v905; // edx
  int v906; // edi
  int v907; // edx
  __int64 v908; // rcx
  __int64 v909; // rcx
  __int64 v910; // rcx
  int v911; // eax
  HMODULE *v912; // rdi
  __int64 v913; // rbx
  int v914; // eax
  __int64 v915; // rax
  _BYTE *v916; // rsi
  __int64 v917; // rax
  unsigned __int8 *v918; // r13
  int v919; // r14d
  int v920; // ebx
  int v921; // r11d
  int v922; // r12d
  int v923; // r10d
  int v924; // r9d
  int v925; // ecx
  int v926; // r10d
  int v927; // r11d
  int v928; // r9d
  unsigned int v929; // r8d
  int v930; // r11d
  unsigned int v931; // r8d
  int v932; // r11d
  int v933; // r8d
  unsigned int v934; // r11d
  int v935; // r8d
  int v936; // r11d
  int v937; // r8d
  unsigned int v938; // r11d
  int v939; // edx
  int v940; // r11d
  unsigned int v941; // ebx
  int v942; // r11d
  int v943; // ebx
  int v944; // r11d
  int v945; // ebx
  unsigned int v946; // r11d
  int v947; // ebx
  int v948; // r11d
  int v949; // ebx
  unsigned int v950; // r11d
  int v951; // ebx
  int v952; // edx
  int v953; // ecx
  int v954; // ebx
  int v955; // edx
  int v956; // r11d
  int v957; // r11d
  int v958; // ebx
  int v959; // r11d
  int v960; // ebx
  int v961; // r11d
  int v962; // ebx
  char v963; // al
  unsigned __int64 v964; // rcx
  int v965; // r13d
  WCHAR *v966; // rdx
  int v967; // edi
  LPCWSTR v968; // rdi
  const WCHAR *v969; // rdx
  __int64 v970; // rax
  const WCHAR *v971; // rdi
  char *v972; // rbx
  __int64 v973; // rcx
  unsigned __int64 v974; // rcx
  unsigned int v975; // eax
  unsigned int v976; // ecx
  const CHAR *v977; // rdx
  __int64 v978; // rax
  __int64 (__fastcall *v979)(); // rcx
  HANDLE v980; // rax
  HMODULE *v981; // rdi
  __int64 v982; // rbx
  HMODULE *v983; // rdi
  __int64 v984; // rbx
  int v985; // eax
  WCHAR *v986; // r13
  HANDLE v987; // rax
  _OWORD *v988; // rbx
  _OWORD *v989; // rax
  HANDLE v990; // rax
  WCHAR *v991; // rax
  unsigned int v992; // r11d
  int v993; // eax
  unsigned int v994; // r11d
  int v995; // r9d
  int v996; // eax
  unsigned int v997; // r11d
  int v998; // r9d
  int v999; // eax
  int v1000; // r9d
  unsigned int v1001; // edi
  HANDLE v1002; // rax
  _DWORD *v1003; // rax
  _DWORD *v1004; // rdi
  __int64 v1005; // r11
  int *v1006; // rax
  int v1007; // r10d
  __int64 v1008; // r11
  int v1009; // ebx
  unsigned int v1010; // edi
  _DWORD *v1011; // rdi
  int v1012; // r9d
  unsigned int v1013; // r10d
  int v1014; // r8d
  _OWORD *v1015; // rax
  __int128 v1016; // xmm1
  __int64 v1017; // r11
  unsigned int v1018; // edi
  unsigned int *v1019; // r9
  __int64 v1020; // r9
  int v1021; // r10d
  int v1022; // r8d
  _DWORD *v1023; // r9
  _QWORD *v1024; // rax
  unsigned int v1025; // r11d
  unsigned int *v1026; // r9
  __int64 v1027; // r9
  int v1028; // r10d
  _DWORD *v1029; // r9
  unsigned __int64 *v1030; // rax
  __int64 v1031; // rcx
  unsigned int v1032; // edi
  _DWORD *v1033; // r13
  int v1034; // edi
  unsigned int v1035; // r9d
  LPVOID v1036; // r10
  unsigned int v1037; // eax
  unsigned int v1038; // edi
  HANDLE v1039; // rax
  _DWORD *v1040; // rbx
  unsigned int v1041; // r11d
  void *v1042; // rcx
  HANDLE v1043; // rax
  int v1044; // edi
  _QWORD *v1045; // rbx
  int v1046; // edi
  unsigned __int64 v1047; // rdi
  char *v1048; // r11
  unsigned __int8 *v1049; // r8
  unsigned __int8 v1050; // al
  unsigned __int64 v1051; // rcx
  int v1052; // r10d
  _BYTE *v1053; // rbx
  unsigned int v1054; // r9d
  unsigned int v1055; // edx
  int v1056; // r11d
  int v1057; // r10d
  char v1058; // r9
  int v1059; // edi
  int v1060; // ecx
  unsigned int v1061; // r10d
  unsigned int v1062; // ecx
  int v1063; // r11d
  int i3; // r14d
  char v1065; // si
  _BYTE *v1066; // r15
  int v1067; // r14d
  unsigned __int64 v1068; // rbx
  int v1069; // r11d
  int v1070; // r13d
  unsigned __int8 *v1071; // rax
  int v1072; // r8d
  int v1073; // edi
  int v1074; // ecx
  int v1075; // r8d
  int v1076; // edi
  int v1077; // r10d
  int v1078; // r9d
  int v1079; // r10d
  int v1080; // r9d
  int v1081; // r10d
  unsigned int v1082; // r9d
  int v1083; // r10d
  int v1084; // r9d
  int v1085; // r10d
  int v1086; // r9d
  int v1087; // r10d
  int v1088; // r9d
  unsigned int v1089; // r10d
  unsigned int v1090; // r9d
  int v1091; // r10d
  int v1092; // r9d
  int v1093; // r10d
  int v1094; // r9d
  int v1095; // r10d
  int v1096; // r9d
  int v1097; // r10d
  int v1098; // r9d
  unsigned int v1099; // r10d
  int v1100; // r9d
  unsigned int v1101; // r10d
  int v1102; // r9d
  int v1103; // r10d
  int v1104; // r10d
  int v1105; // r9d
  int v1106; // r10d
  int v1107; // r9d
  int v1108; // r10d
  int v1109; // r9d
  int v1110; // r10d
  HANDLE v1111; // rax
  _DWORD *v1112; // rax
  _DWORD *v1113; // rbx
  void *v1114; // rsi
  HANDLE v1115; // rax
  void *v1116; // rax
  HANDLE v1117; // rax
  _OWORD *v1118; // rax
  HANDLE v1119; // rax
  _QWORD *v1120; // rax
  HANDLE v1121; // rax
  HANDLE v1122; // rax
  HANDLE v1123; // rax
  HANDLE v1124; // rax
  void *v1125; // rsi
  HANDLE v1126; // rax
  void *v1127; // rsi
  HANDLE v1128; // rax
  void *v1129; // rsi
  HANDLE v1130; // rax
  void *v1131; // rsi
  HANDLE v1132; // rax
  HANDLE v1133; // rax
  const void **v1134; // rbx
  int v1135; // edi
  unsigned int v1136; // r9d
  unsigned int v1137; // r9d
  unsigned int v1138; // eax
  unsigned int v1139; // edi
  HANDLE v1140; // rax
  _DWORD *v1141; // rsi
  void *v1142; // rcx
  void *v1143; // rcx
  HANDLE v1144; // rax
  int v1145; // eax
  unsigned int v1146; // ecx
  int v1147; // r9d
  unsigned int v1148; // eax
  int v1149; // eax
  unsigned int v1150; // r9d
  unsigned int *v1151; // rcx
  int v1152; // ebx
  unsigned int v1153; // esi
  unsigned int v1154; // ebx
  unsigned int *v1155; // rax
  unsigned int *v1156; // rcx
  int v1157; // ebx
  unsigned int v1158; // esi
  unsigned int v1159; // r9d
  unsigned int v1160; // ebx
  unsigned int *v1161; // rax
  unsigned int v1162; // r10d
  unsigned int v1163; // r11d
  unsigned int v1164; // eax
  unsigned int v1165; // edi
  HANDLE v1166; // rax
  int *v1167; // rax
  int *v1168; // rbx
  FARPROC v1169; // rax
  int v1170; // eax
  unsigned int v1171; // r9d
  signed int v1172; // eax
  int v1173; // edi
  int v1174; // r9d
  void *v1175; // r11
  unsigned int v1176; // r11d
  int v1177; // r9d
  SIZE_T v1178; // rsi
  int v1179; // r9d
  int v1180; // r9d
  int v1181; // r9d
  unsigned int v1182; // r10d
  int v1183; // r9d
  int v1184; // r10d
  int v1185; // r11d
  HANDLE v1186; // rax
  _QWORD *v1187; // rax
  _QWORD *v1188; // rbx
  HANDLE v1189; // rax
  void *v1190; // rax
  void *v1191; // rdi
  HANDLE v1192; // rax
  void *v1193; // rax
  HANDLE v1194; // rax
  void *v1195; // rax
  void *v1196; // rsi
  HANDLE v1197; // rax
  void *v1198; // rsi
  HANDLE v1199; // rax
  void *v1200; // rsi
  HANDLE v1201; // rax
  HANDLE v1202; // rax
  _QWORD *v1203; // rbx
  void *v1204; // rsi
  HANDLE v1205; // rax
  void *v1206; // rsi
  HANDLE v1207; // rax
  void *v1208; // rsi
  HANDLE v1209; // rax
  HANDLE v1210; // rax
  unsigned int v1211; // esi
  unsigned __int64 v1212; // rdi
  _BYTE *v1213; // r11
  unsigned __int8 *v1214; // rbx
  unsigned __int8 v1215; // al
  char *v1216; // rcx
  unsigned int v1217; // r10d
  int v1218; // r9d
  unsigned int v1219; // edx
  char v1220; // r14
  int v1221; // r8d
  int v1222; // ecx
  unsigned int v1223; // r9d
  unsigned int v1224; // r10d
  int v1225; // ecx
  unsigned int v1226; // r8d
  _BYTE *v1227; // r14
  int v1228; // edi
  char v1229; // r12
  int v1230; // eax
  unsigned __int8 *v1231; // r15
  int v1232; // r12d
  _BYTE *v1233; // r11
  int v1234; // esi
  char *v1235; // rbx
  int v1236; // r13d
  int v1237; // r8d
  int v1238; // edi
  int v1239; // ecx
  int v1240; // r8d
  int v1241; // r9d
  int v1242; // edi
  unsigned int v1243; // r10d
  int v1244; // r9d
  unsigned int v1245; // r10d
  int v1246; // r9d
  int v1247; // r10d
  unsigned int v1248; // r9d
  int v1249; // r10d
  int v1250; // r9d
  int v1251; // r10d
  unsigned int v1252; // r9d
  int v1253; // r10d
  int v1254; // r9d
  unsigned int v1255; // r10d
  int v1256; // r9d
  int v1257; // r10d
  int v1258; // r9d
  int v1259; // r10d
  unsigned int v1260; // r9d
  int v1261; // r10d
  int v1262; // r9d
  int v1263; // r10d
  unsigned int v1264; // r9d
  int v1265; // ecx
  int v1266; // r10d
  int v1267; // edx
  int v1268; // r9d
  int v1269; // r9d
  int v1270; // r10d
  int v1271; // r9d
  int v1272; // r10d
  int v1273; // r9d
  int v1274; // r10d
  unsigned __int64 i4; // rcx
  _DWORD *v1276; // rbx
  int v1277; // edi
  int *v1278; // r14
  HANDLE v1279; // rax
  int v1280; // edi
  unsigned int v1281; // r9d
  unsigned int v1282; // r9d
  unsigned int v1283; // r9d
  unsigned int v1284; // r10d
  __int64 v1285; // r10
  void *v1286; // rbx
  __int64 v1287; // rdx
  SIZE_T v1288; // rsi
  void *v1289; // r14
  unsigned __int64 v1290; // r9
  unsigned __int64 v1291; // r11
  unsigned int *v1292; // r9
  unsigned __int64 v1293; // r11
  int v1294; // eax
  __int64 v1295; // r9
  unsigned int v1296; // r10d
  HANDLE v1297; // rax
  void *v1298; // rbx
  HANDLE v1299; // rax
  _QWORD *v1300; // rbx
  void *v1301; // rsi
  HANDLE v1302; // rax
  void *v1303; // rsi
  HANDLE v1304; // rax
  void *v1305; // rsi
  HANDLE v1306; // rax
  HANDLE v1307; // rax
  void *v1308; // rbx
  HANDLE v1309; // rax
  void *v1310; // rbx
  HANDLE v1311; // rax
  void *v1312; // rbx
  HANDLE v1313; // rax
  void *v1314; // rbx
  HANDLE v1315; // rax
  void *v1316; // rbx
  HANDLE v1317; // rax
  HANDLE v1318; // rax
  void *v1319; // rbx
  HANDLE v1320; // rax
  unsigned int *v1321; // rdi
  unsigned int v1322; // r9d
  int v1323; // r10d
  __int64 v1324; // r11
  int *v1325; // rax
  int v1326; // r9d
  int v1327; // edi
  _QWORD *v1328; // rax
  void *v1329; // rdi
  HANDLE v1330; // rax
  void *v1331; // rdi
  HANDLE v1332; // rax
  HANDLE v1333; // rax
  HANDLE v1334; // rax
  int v1335; // ebx
  int v1336; // eax
  HMODULE *v1337; // rdi
  __int64 v1338; // rsi
  _OWORD *v1339; // [rsp+80h] [rbp-80h]
  __int64 v1340; // [rsp+80h] [rbp-80h]
  __int64 v1341; // [rsp+80h] [rbp-80h]
  __int64 v1342; // [rsp+80h] [rbp-80h]
  __int64 v1343; // [rsp+80h] [rbp-80h]
  __int64 v1344; // [rsp+80h] [rbp-80h]
  int v1345; // [rsp+80h] [rbp-80h]
  int v1346; // [rsp+80h] [rbp-80h]
  int v1347; // [rsp+80h] [rbp-80h]
  int v1348; // [rsp+80h] [rbp-80h]
  unsigned int v1349; // [rsp+80h] [rbp-80h]
  unsigned int v1350; // [rsp+80h] [rbp-80h]
  int v1351; // [rsp+80h] [rbp-80h]
  int v1352; // [rsp+88h] [rbp-78h]
  int v1353; // [rsp+88h] [rbp-78h]
  int v1354; // [rsp+88h] [rbp-78h]
  int v1355; // [rsp+88h] [rbp-78h]
  unsigned int v1356; // [rsp+88h] [rbp-78h]
  unsigned int v1357; // [rsp+88h] [rbp-78h]
  int v1358; // [rsp+88h] [rbp-78h]
  int v1359; // [rsp+88h] [rbp-78h]
  int v1360; // [rsp+88h] [rbp-78h]
  int v1361; // [rsp+88h] [rbp-78h]
  unsigned int v1362; // [rsp+90h] [rbp-70h]
  const void *v1363; // [rsp+90h] [rbp-70h]
  int v1364; // [rsp+90h] [rbp-70h]
  unsigned int v1365; // [rsp+90h] [rbp-70h]
  unsigned int v1366; // [rsp+90h] [rbp-70h]
  int v1367; // [rsp+90h] [rbp-70h]
  int v1368; // [rsp+90h] [rbp-70h]
  int v1369; // [rsp+90h] [rbp-70h]
  int v1370; // [rsp+90h] [rbp-70h]
  int v1371; // [rsp+98h] [rbp-68h]
  unsigned int ii; // [rsp+98h] [rbp-68h]
  unsigned int v1373; // [rsp+98h] [rbp-68h]
  _WORD *v1374; // [rsp+98h] [rbp-68h]
  int v1375; // [rsp+98h] [rbp-68h]
  int v1376; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v1377; // [rsp+A0h] [rbp-60h]
  LPVOID v1378; // [rsp+A0h] [rbp-60h]
  LPVOID v1379; // [rsp+A0h] [rbp-60h]
  LPVOID v1380; // [rsp+A0h] [rbp-60h]
  int v1381; // [rsp+A0h] [rbp-60h]
  int v1382; // [rsp+A0h] [rbp-60h]
  LPVOID v1383; // [rsp+A0h] [rbp-60h]
  unsigned int v1384; // [rsp+A0h] [rbp-60h]
  int v1385; // [rsp+A0h] [rbp-60h]
  int v1386; // [rsp+A0h] [rbp-60h]
  HLOCAL v1387; // [rsp+A8h] [rbp-58h]
  unsigned int v1388; // [rsp+A8h] [rbp-58h]
  unsigned int v1389; // [rsp+A8h] [rbp-58h]
  const void *v1390; // [rsp+B0h] [rbp-50h]
  char *v1391; // [rsp+B0h] [rbp-50h]
  int v1392; // [rsp+B0h] [rbp-50h]
  int v1393; // [rsp+B0h] [rbp-50h]
  unsigned int jj; // [rsp+B0h] [rbp-50h]
  char v1395; // [rsp+B0h] [rbp-50h]
  int v1396; // [rsp+B8h] [rbp-48h]
  int v1397; // [rsp+B8h] [rbp-48h]
  int v1398; // [rsp+B8h] [rbp-48h]
  unsigned int v1399; // [rsp+B8h] [rbp-48h]
  __int64 v1400; // [rsp+B8h] [rbp-48h]
  int v1401; // [rsp+B8h] [rbp-48h]
  __int64 v1402; // [rsp+B8h] [rbp-48h]
  int *v1403; // [rsp+C0h] [rbp-40h]
  _DWORD *v1404; // [rsp+C0h] [rbp-40h]
  char *v1405; // [rsp+C0h] [rbp-40h]
  _QWORD *v1406; // [rsp+C0h] [rbp-40h]
  __int64 v1407; // [rsp+C0h] [rbp-40h]
  __int64 v1408; // [rsp+C0h] [rbp-40h]
  int v1409; // [rsp+C0h] [rbp-40h]
  int v1410; // [rsp+C0h] [rbp-40h]
  LPVOID v1411; // [rsp+C8h] [rbp-38h]
  void *v1412; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v1413; // [rsp+C8h] [rbp-38h]
  void *v1414; // [rsp+C8h] [rbp-38h]
  void *v1415; // [rsp+C8h] [rbp-38h]
  void *v1416; // [rsp+C8h] [rbp-38h]
  void *v1417; // [rsp+C8h] [rbp-38h]
  LPVOID v1418; // [rsp+C8h] [rbp-38h]
  unsigned int *v1419; // [rsp+D0h] [rbp-30h]
  int v1420; // [rsp+D0h] [rbp-30h]
  unsigned int v1421; // [rsp+D0h] [rbp-30h]
  int v1422; // [rsp+D0h] [rbp-30h]
  int v1423; // [rsp+D0h] [rbp-30h]
  _BYTE *Src; // [rsp+D8h] [rbp-28h]
  unsigned int *Srca; // [rsp+D8h] [rbp-28h]
  char *Srcb; // [rsp+D8h] [rbp-28h]
  void *Srcc; // [rsp+D8h] [rbp-28h]
  void *Srcd; // [rsp+D8h] [rbp-28h]
  void *Srce; // [rsp+D8h] [rbp-28h]
  _BYTE *Srcf; // [rsp+D8h] [rbp-28h]
  int v1431; // [rsp+E0h] [rbp-20h]
  int v1432; // [rsp+E0h] [rbp-20h]
  SIZE_T v1433; // [rsp+E0h] [rbp-20h]
  int v1434; // [rsp+E0h] [rbp-20h]
  int *v1435; // [rsp+E8h] [rbp-18h]
  unsigned int v1436; // [rsp+E8h] [rbp-18h]
  int v1437; // [rsp+E8h] [rbp-18h]
  int v1438; // [rsp+E8h] [rbp-18h]
  char *v1439; // [rsp+F0h] [rbp-10h]
  unsigned __int8 *v1440; // [rsp+F0h] [rbp-10h]
  LPVOID v1441; // [rsp+F0h] [rbp-10h]
  LPVOID v1442; // [rsp+F0h] [rbp-10h]
  int v1443; // [rsp+F0h] [rbp-10h]
  void *v1444; // [rsp+F0h] [rbp-10h]
  void *v1445; // [rsp+F8h] [rbp-8h] BYREF
  LPVOID v1446; // [rsp+100h] [rbp+0h]
  __int64 v1447; // [rsp+108h] [rbp+8h]
  const WCHAR *v1448; // [rsp+110h] [rbp+10h]
  unsigned int v1449; // [rsp+118h] [rbp+18h] BYREF
  int v1450; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v1451; // [rsp+120h] [rbp+20h]
  LPVOID v1452; // [rsp+128h] [rbp+28h]
  LPVOID v1453; // [rsp+130h] [rbp+30h]
  LPVOID v1454; // [rsp+138h] [rbp+38h]
  unsigned int v1455; // [rsp+140h] [rbp+40h] BYREF
  int v1456; // [rsp+148h] [rbp+48h]
  unsigned int v1457; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1458; // [rsp+154h] [rbp+54h]
  unsigned int v1459; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v1460; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1461; // [rsp+160h] [rbp+60h]
  unsigned int v1462; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1463; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1464; // [rsp+16Ch] [rbp+6Ch]
  unsigned int v1465; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1466; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1467; // [rsp+178h] [rbp+78h]
  unsigned int v1468; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v1469; // [rsp+180h] [rbp+80h]
  unsigned int v1470; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1471; // [rsp+18Ch] [rbp+8Ch]
  unsigned int v1472; // [rsp+190h] [rbp+90h] BYREF
  int v1473; // [rsp+198h] [rbp+98h]
  unsigned int v1474; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1475; // [rsp+1A4h] [rbp+A4h]
  unsigned int v1476; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1477; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1478; // [rsp+1B0h] [rbp+B0h]
  unsigned int v1479; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1480; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1481; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1482; // [rsp+1C0h] [rbp+C0h] BYREF
  SIZE_T v1483; // [rsp+1C4h] [rbp+C4h]
  unsigned int v1484; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1485; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1486; // [rsp+1D4h] [rbp+D4h]
  int v1487; // [rsp+1D8h] [rbp+D8h]
  int v1488; // [rsp+1DCh] [rbp+DCh]
  unsigned int v1489; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1490; // [rsp+1E4h] [rbp+E4h]
  unsigned int v1491; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1492; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1493; // [rsp+1F0h] [rbp+F0h]
  unsigned int v1494; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1495; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1496; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1497; // [rsp+200h] [rbp+100h] BYREF
  int v1498; // [rsp+204h] [rbp+104h]
  int v1499; // [rsp+208h] [rbp+108h]
  int v1500; // [rsp+20Ch] [rbp+10Ch]
  int v1501; // [rsp+210h] [rbp+110h]
  int v1502; // [rsp+214h] [rbp+114h]
  int v1503; // [rsp+218h] [rbp+118h]
  int v1504; // [rsp+21Ch] [rbp+11Ch]
  int v1505; // [rsp+220h] [rbp+120h]
  int v1506; // [rsp+224h] [rbp+124h]
  int v1507; // [rsp+228h] [rbp+128h]
  unsigned int v1508; // [rsp+22Ch] [rbp+12Ch] BYREF
  _DWORD v1509[2]; // [rsp+230h] [rbp+130h] BYREF
  int v1510; // [rsp+238h] [rbp+138h]
  int v1511; // [rsp+23Ch] [rbp+13Ch]
  unsigned int v1512; // [rsp+240h] [rbp+140h]
  unsigned int v1513; // [rsp+244h] [rbp+144h]
  int v1514; // [rsp+248h] [rbp+148h]
  unsigned int v1515; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1516; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1517; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v1518; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1519; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1520; // [rsp+260h] [rbp+160h] BYREF
  _DWORD v1521[3]; // [rsp+264h] [rbp+164h] BYREF
  int v1522; // [rsp+270h] [rbp+170h]
  unsigned int v1523; // [rsp+278h] [rbp+178h] BYREF
  unsigned int v1524; // [rsp+27Ch] [rbp+17Ch]
  unsigned int v1525; // [rsp+280h] [rbp+180h] BYREF
  unsigned int v1526; // [rsp+284h] [rbp+184h] BYREF
  unsigned int v1527; // [rsp+288h] [rbp+188h]
  unsigned int v1528; // [rsp+28Ch] [rbp+18Ch] BYREF
  unsigned int v1529; // [rsp+290h] [rbp+190h] BYREF
  int v1530; // [rsp+294h] [rbp+194h]
  unsigned int v1531; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v1532; // [rsp+29Ch] [rbp+19Ch] BYREF
  unsigned int v1533; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v1534[2]; // [rsp+2A4h] [rbp+1A4h] BYREF
  SIZE_T v1535; // [rsp+2ACh] [rbp+1ACh]
  unsigned int v1536; // [rsp+2B4h] [rbp+1B4h] BYREF
  unsigned int v1537; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v1538; // [rsp+2BCh] [rbp+1BCh]
  unsigned int v1539; // [rsp+2C0h] [rbp+1C0h]
  unsigned int v1540; // [rsp+2C4h] [rbp+1C4h]
  unsigned int v1541; // [rsp+2C8h] [rbp+1C8h] BYREF
  unsigned int v1542; // [rsp+2CCh] [rbp+1CCh]
  unsigned int v1543; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int v1544; // [rsp+2D4h] [rbp+1D4h] BYREF
  unsigned int v1545; // [rsp+2D8h] [rbp+1D8h]
  unsigned int v1546; // [rsp+2DCh] [rbp+1DCh]
  _DWORD v1547[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _DWORD v1548[2]; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v1549; // [rsp+2F0h] [rbp+1F0h]
  int v1550; // [rsp+2F4h] [rbp+1F4h]
  unsigned int v1551; // [rsp+2F8h] [rbp+1F8h]
  int v1552; // [rsp+2FCh] [rbp+1FCh]
  unsigned int dwBytes; // [rsp+300h] [rbp+200h] BYREF
  unsigned int dwBytes_4; // [rsp+304h] [rbp+204h] BYREF
  unsigned int v1555; // [rsp+308h] [rbp+208h]
  LPVOID v1556; // [rsp+310h] [rbp+210h]
  unsigned int v1557; // [rsp+318h] [rbp+218h] BYREF
  unsigned int v1558; // [rsp+31Ch] [rbp+21Ch] BYREF
  unsigned int v1559; // [rsp+320h] [rbp+220h] BYREF
  unsigned int v1560; // [rsp+324h] [rbp+224h] BYREF
  unsigned int v1561; // [rsp+328h] [rbp+228h] BYREF
  unsigned int v1562; // [rsp+32Ch] [rbp+22Ch] BYREF
  _QWORD *v1563; // [rsp+330h] [rbp+230h]
  unsigned __int64 v1564; // [rsp+338h] [rbp+238h]
  __int64 v1565; // [rsp+340h] [rbp+240h] BYREF
  _DWORD *v1566; // [rsp+348h] [rbp+248h] BYREF
  _DWORD *v1567; // [rsp+350h] [rbp+250h] BYREF
  unsigned __int64 v1568; // [rsp+358h] [rbp+258h]
  _DWORD *v1569; // [rsp+360h] [rbp+260h] BYREF
  __int64 v1570; // [rsp+368h] [rbp+268h] BYREF
  _DWORD *v1571; // [rsp+370h] [rbp+270h] BYREF
  _DWORD *v1572; // [rsp+378h] [rbp+278h] BYREF
  _DWORD *v1573; // [rsp+380h] [rbp+280h] BYREF
  LPVOID v1574; // [rsp+388h] [rbp+288h]
  unsigned __int64 v1575; // [rsp+390h] [rbp+290h]
  void *v1576; // [rsp+398h] [rbp+298h] BYREF
  LPVOID v1577; // [rsp+3A0h] [rbp+2A0h]
  unsigned __int64 v1578; // [rsp+3A8h] [rbp+2A8h]
  __int64 *v1579; // [rsp+3B0h] [rbp+2B0h]
  __int64 v1580; // [rsp+3B8h] [rbp+2B8h]
  _OWORD *v1581; // [rsp+3C0h] [rbp+2C0h]
  __int64 v1582; // [rsp+3C8h] [rbp+2C8h]
  void *v1583; // [rsp+3D0h] [rbp+2D0h] BYREF
  unsigned int *v1584; // [rsp+3D8h] [rbp+2D8h]
  unsigned int *v1585; // [rsp+3E0h] [rbp+2E0h]
  unsigned int *v1586; // [rsp+3E8h] [rbp+2E8h] BYREF
  unsigned int *v1587; // [rsp+3F0h] [rbp+2F0h] BYREF
  HMODULE phModule; // [rsp+3F8h] [rbp+2F8h] BYREF
  void *v1589; // [rsp+400h] [rbp+300h] BYREF
  int *v1590; // [rsp+408h] [rbp+308h]
  int *v1591; // [rsp+410h] [rbp+310h]
  int *v1592; // [rsp+418h] [rbp+318h] BYREF
  void *v1593; // [rsp+420h] [rbp+320h] BYREF
  unsigned __int64 v1594; // [rsp+428h] [rbp+328h] BYREF
  unsigned __int64 v1595; // [rsp+430h] [rbp+330h] BYREF
  unsigned int *v1596; // [rsp+438h] [rbp+338h] BYREF
  int *v1597; // [rsp+440h] [rbp+340h] BYREF
  int *v1598; // [rsp+448h] [rbp+348h]
  int *v1599; // [rsp+450h] [rbp+350h] BYREF
  int *v1600; // [rsp+458h] [rbp+358h]
  __int64 v1601; // [rsp+460h] [rbp+360h]
  int *v1602; // [rsp+468h] [rbp+368h] BYREF
  int *v1603; // [rsp+470h] [rbp+370h]
  LPVOID v1604; // [rsp+478h] [rbp+378h] BYREF
  void *v1605; // [rsp+480h] [rbp+380h]
  int *v1606; // [rsp+488h] [rbp+388h] BYREF
  int *v1607; // [rsp+490h] [rbp+390h]
  int *v1608; // [rsp+498h] [rbp+398h] BYREF
  int *v1609; // [rsp+4A0h] [rbp+3A0h]
  __int64 v1610; // [rsp+4A8h] [rbp+3A8h] BYREF
  LPCWSTR lpModuleName; // [rsp+4B0h] [rbp+3B0h]
  LPCWSTR v1612; // [rsp+4B8h] [rbp+3B8h]
  unsigned __int64 v1613; // [rsp+4C0h] [rbp+3C0h]
  _QWORD *v1614; // [rsp+4C8h] [rbp+3C8h] BYREF
  LPCWSTR v1615; // [rsp+4D0h] [rbp+3D0h]
  unsigned __int64 v1616; // [rsp+4D8h] [rbp+3D8h]
  _DWORD *v1617; // [rsp+4E0h] [rbp+3E0h] BYREF
  _BYTE *v1618; // [rsp+4E8h] [rbp+3E8h] BYREF
  unsigned __int64 v1619; // [rsp+4F0h] [rbp+3F0h]
  __int64 v1620; // [rsp+4F8h] [rbp+3F8h] BYREF
  __int64 v1621; // [rsp+500h] [rbp+400h] BYREF
  _DWORD *v1622; // [rsp+508h] [rbp+408h] BYREF
  __int64 v1623; // [rsp+510h] [rbp+410h]
  __int64 v1624; // [rsp+518h] [rbp+418h] BYREF
  __int64 v1625; // [rsp+520h] [rbp+420h] BYREF
  __int64 v1626; // [rsp+528h] [rbp+428h] BYREF
  unsigned __int64 v1627; // [rsp+530h] [rbp+430h]
  wchar_t *String1; // [rsp+538h] [rbp+438h] BYREF
  wchar_t *v1629; // [rsp+540h] [rbp+440h] BYREF
  wchar_t *v1630; // [rsp+548h] [rbp+448h] BYREF
  __int64 v1631; // [rsp+550h] [rbp+450h] BYREF
  wchar_t *v1632; // [rsp+558h] [rbp+458h] BYREF
  _OWORD *v1633; // [rsp+560h] [rbp+460h]
  __int64 v1634; // [rsp+568h] [rbp+468h] BYREF
  LPCWSTR v1635; // [rsp+570h] [rbp+470h]
  unsigned __int64 v1636; // [rsp+578h] [rbp+478h]
  _OWORD *v1637; // [rsp+580h] [rbp+480h]
  _QWORD *v1638; // [rsp+588h] [rbp+488h]
  unsigned __int64 v1639; // [rsp+590h] [rbp+490h]
  _DWORD *v1640; // [rsp+598h] [rbp+498h] BYREF
  unsigned int *v1641; // [rsp+5A0h] [rbp+4A0h] BYREF
  unsigned __int64 v1642; // [rsp+5A8h] [rbp+4A8h]
  unsigned int *v1643; // [rsp+5B0h] [rbp+4B0h] BYREF
  LPVOID v1644; // [rsp+5B8h] [rbp+4B8h]
  unsigned __int64 v1645; // [rsp+5C0h] [rbp+4C0h]
  void *v1646; // [rsp+5C8h] [rbp+4C8h] BYREF
  LPVOID v1647; // [rsp+5D0h] [rbp+4D0h]
  void *v1648; // [rsp+5D8h] [rbp+4D8h]
  __int64 *v1649; // [rsp+5E0h] [rbp+4E0h]
  __int64 v1650; // [rsp+5E8h] [rbp+4E8h]
  _OWORD *v1651; // [rsp+5F0h] [rbp+4F0h]
  __int64 v1652; // [rsp+5F8h] [rbp+4F8h]
  void *v1653; // [rsp+600h] [rbp+500h] BYREF
  unsigned int *v1654; // [rsp+608h] [rbp+508h]
  unsigned int *v1655; // [rsp+610h] [rbp+510h]
  unsigned int *v1656; // [rsp+618h] [rbp+518h] BYREF
  unsigned int *v1657; // [rsp+620h] [rbp+520h] BYREF
  HMODULE hModule; // [rsp+628h] [rbp+528h] BYREF
  void *v1659; // [rsp+630h] [rbp+530h] BYREF
  _DWORD *v1660; // [rsp+638h] [rbp+538h]
  void *v1661; // [rsp+640h] [rbp+540h] BYREF
  unsigned __int64 v1662; // [rsp+648h] [rbp+548h] BYREF
  unsigned __int64 v1663; // [rsp+650h] [rbp+550h] BYREF
  unsigned __int64 v1664; // [rsp+658h] [rbp+558h] BYREF
  _QWORD v1665[2]; // [rsp+660h] [rbp+560h] BYREF
  _QWORD v1666[4]; // [rsp+670h] [rbp+570h] BYREF
  _DWORD *v1667; // [rsp+690h] [rbp+590h] BYREF
  __int128 v1668; // [rsp+698h] [rbp+598h]
  _OWORD *v1669; // [rsp+6B0h] [rbp+5B0h] BYREF
  unsigned __int64 *v1670; // [rsp+6C0h] [rbp+5C0h] BYREF
  _QWORD *v1671; // [rsp+6D0h] [rbp+5D0h] BYREF
  size_t Size; // [rsp+6D8h] [rbp+5D8h] BYREF
  LPVOID lpMem; // [rsp+6E0h] [rbp+5E0h]
  LPVOID v1674[2]; // [rsp+6E8h] [rbp+5E8h]
  __int128 v1675; // [rsp+6F8h] [rbp+5F8h]
  _OWORD *v1676; // [rsp+710h] [rbp+610h] BYREF
  _QWORD *v1677; // [rsp+720h] [rbp+620h] BYREF
  unsigned __int64 *v1678; // [rsp+730h] [rbp+630h] BYREF
  void *v1679; // [rsp+740h] [rbp+640h] BYREF
  int *v1680; // [rsp+750h] [rbp+650h] BYREF
  _DWORD *v1681; // [rsp+760h] [rbp+660h] BYREF
  size_t v1682; // [rsp+768h] [rbp+668h] BYREF
  void *v1683; // [rsp+770h] [rbp+670h]
  __int128 v1684; // [rsp+778h] [rbp+678h]
  __int128 v1685; // [rsp+788h] [rbp+688h] BYREF
  LPVOID v1686[3]; // [rsp+798h] [rbp+698h]
  int *v1687; // [rsp+7B0h] [rbp+6B0h] BYREF
  __int128 v1688; // [rsp+7B8h] [rbp+6B8h]
  _QWORD v1689[2]; // [rsp+7C8h] [rbp+6C8h] BYREF
  int v1690; // [rsp+7D8h] [rbp+6D8h]
  unsigned int v1691; // [rsp+7DCh] [rbp+6DCh]
  int v1692; // [rsp+7E0h] [rbp+6E0h]
  _QWORD v1693[2]; // [rsp+7E8h] [rbp+6E8h] BYREF
  unsigned int v1694; // [rsp+7F8h] [rbp+6F8h]
  unsigned int v1695; // [rsp+7FCh] [rbp+6FCh]
  int v1696; // [rsp+800h] [rbp+700h]
  _QWORD v1697[14]; // [rsp+810h] [rbp+710h] BYREF
  _QWORD v1698[14]; // [rsp+880h] [rbp+780h] BYREF
  _QWORD v1699[14]; // [rsp+8F0h] [rbp+7F0h] BYREF
  _QWORD v1700[14]; // [rsp+960h] [rbp+860h] BYREF
  _QWORD v1701[14]; // [rsp+9D0h] [rbp+8D0h] BYREF
  _QWORD v1702[14]; // [rsp+A40h] [rbp+940h] BYREF
  _QWORD v1703[14]; // [rsp+AB0h] [rbp+9B0h] BYREF
  _QWORD v1704[14]; // [rsp+B20h] [rbp+A20h] BYREF
  _QWORD v1705[28]; // [rsp+B90h] [rbp+A90h] BYREF
  __int64 v1706; // [rsp+C70h] [rbp+B70h]
  unsigned __int64 v1707; // [rsp+C78h] [rbp+B78h]
  unsigned __int64 v1708; // [rsp+C80h] [rbp+B80h]
  __int64 v1709; // [rsp+C88h] [rbp+B88h]
  __int128 v1710; // [rsp+C90h] [rbp+B90h] BYREF
  __int64 v1711; // [rsp+CA0h] [rbp+BA0h] BYREF
  unsigned int v1712; // [rsp+CA8h] [rbp+BA8h]
  int v1713; // [rsp+CACh] [rbp+BACh]
  __int128 v1714; // [rsp+CB0h] [rbp+BB0h] BYREF
  __int128 v1715; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int128 v1716; // [rsp+CD0h] [rbp+BD0h] BYREF
  char v1717[12]; // [rsp+CE0h] [rbp+BE0h] BYREF
  unsigned int v1718; // [rsp+CECh] [rbp+BECh]
  __int128 v1719; // [rsp+D00h] [rbp+C00h] BYREF
  __int128 v1720; // [rsp+D10h] [rbp+C10h] BYREF
  __int64 v1721; // [rsp+D20h] [rbp+C20h]
  __int128 v1722; // [rsp+D28h] [rbp+C28h] BYREF
  __int128 v1723; // [rsp+D38h] [rbp+C38h] BYREF
  __int64 v1724; // [rsp+D48h] [rbp+C48h]
  __int128 v1725; // [rsp+D50h] [rbp+C50h] BYREF
  __int128 v1726; // [rsp+D60h] [rbp+C60h]
  __int64 v1727; // [rsp+D70h] [rbp+C70h]
  int v1728; // [rsp+D78h] [rbp+C78h]
  __int128 v1729; // [rsp+D80h] [rbp+C80h] BYREF
  __int128 v1730; // [rsp+D90h] [rbp+C90h]
  __int64 v1731; // [rsp+DA0h] [rbp+CA0h]
  int v1732; // [rsp+DA8h] [rbp+CA8h]
  __int128 v1733; // [rsp+DB0h] [rbp+CB0h] BYREF
  __int128 v1734; // [rsp+DC0h] [rbp+CC0h]
  __int64 v1735; // [rsp+DD0h] [rbp+CD0h]
  int v1736; // [rsp+DD8h] [rbp+CD8h]
  __int128 v1737; // [rsp+DE0h] [rbp+CE0h] BYREF
  __int128 v1738; // [rsp+DF0h] [rbp+CF0h]
  __int64 v1739; // [rsp+E00h] [rbp+D00h]
  int v1740; // [rsp+E08h] [rbp+D08h]
  __int128 v1741; // [rsp+E10h] [rbp+D10h] BYREF
  __int128 v1742; // [rsp+E20h] [rbp+D20h]
  __int64 v1743; // [rsp+E30h] [rbp+D30h]
  int v1744; // [rsp+E38h] [rbp+D38h]
  _DWORD v1745[24]; // [rsp+E40h] [rbp+D40h] BYREF
  _DWORD v1746[24]; // [rsp+EA0h] [rbp+DA0h] BYREF
  _DWORD v1747[24]; // [rsp+F00h] [rbp+E00h] BYREF
  _DWORD v1748[56]; // [rsp+F60h] [rbp+E60h] BYREF
  _QWORD v1749[6]; // [rsp+1040h] [rbp+F40h] BYREF
  int v1750; // [rsp+1070h] [rbp+F70h] BYREF
  __int128 v1751; // [rsp+1078h] [rbp+F78h]
  __int128 v1752; // [rsp+1088h] [rbp+F88h]
  __int128 v1753; // [rsp+1098h] [rbp+F98h]
  __int64 v1754; // [rsp+10A8h] [rbp+FA8h]
  _QWORD v1755[20]; // [rsp+10B0h] [rbp+FB0h] BYREF
  _WORD v1756[8]; // [rsp+1150h] [rbp+1050h] BYREF
  _BYTE v1757[176]; // [rsp+1160h] [rbp+1060h] BYREF
  WCHAR Filename[264]; // [rsp+1210h] [rbp+1110h] BYREF
  _UNKNOWN *retaddr; // [rsp+1458h] [rbp+1358h]
  unsigned __int8 v1760; // [rsp+1490h] [rbp+1390h]
  unsigned __int8 v1761; // [rsp+1490h] [rbp+1390h]
  int v1762; // [rsp+1494h] [rbp+1394h]
  int v1763; // [rsp+1494h] [rbp+1394h]
  int v1764; // [rsp+1494h] [rbp+1394h]
  int v1765; // [rsp+1494h] [rbp+1394h]
  int v1766; // [rsp+1494h] [rbp+1394h]
  const WCHAR *v1767; // [rsp+1498h] [rbp+1398h]
  void *v1768; // [rsp+1498h] [rbp+1398h]
  const WCHAR *v1769; // [rsp+1498h] [rbp+1398h]
  char *v1770; // [rsp+1498h] [rbp+1398h]
  LPVOID v1771; // [rsp+1498h] [rbp+1398h]
  LPVOID v1772; // [rsp+1498h] [rbp+1398h]
  LPVOID v1773; // [rsp+1498h] [rbp+1398h]
  LPVOID v1774; // [rsp+1498h] [rbp+1398h]
  LPVOID v1775; // [rsp+1498h] [rbp+1398h]
  LPVOID v1776; // [rsp+1498h] [rbp+1398h]
  LPVOID v1777; // [rsp+1498h] [rbp+1398h]
  LPVOID v1778; // [rsp+1498h] [rbp+1398h]
  signed int v1779; // [rsp+1498h] [rbp+1398h]
  int v1780; // [rsp+1498h] [rbp+1398h]
  int v1781; // [rsp+1498h] [rbp+1398h]
  int v1782; // [rsp+1498h] [rbp+1398h]
  unsigned int v1783; // [rsp+1498h] [rbp+1398h]
  int v1784; // [rsp+1498h] [rbp+1398h]
  int v1785; // [rsp+1498h] [rbp+1398h]
  SIZE_T v1786; // [rsp+14A0h] [rbp+13A0h]
  SIZE_T v1787; // [rsp+14A0h] [rbp+13A0h]
  SIZE_T v1788; // [rsp+14A0h] [rbp+13A0h]
  SIZE_T v1789; // [rsp+14A0h] [rbp+13A0h]
  SIZE_T v1790; // [rsp+14A0h] [rbp+13A0h]
  SIZE_T v1791; // [rsp+14A0h] [rbp+13A0h]
  int v1792; // [rsp+14A0h] [rbp+13A0h]
  int v1793; // [rsp+14A0h] [rbp+13A0h]
  int v1794; // [rsp+14A0h] [rbp+13A0h]
  int v1795; // [rsp+14A0h] [rbp+13A0h]
  int v1796; // [rsp+14A0h] [rbp+13A0h]
  unsigned int v1797; // [rsp+14A0h] [rbp+13A0h]
  int v1798; // [rsp+14A0h] [rbp+13A0h]
  unsigned int v1799; // [rsp+14A0h] [rbp+13A0h]
  unsigned int v1800; // [rsp+14A0h] [rbp+13A0h]
  void *v1801; // [rsp+14A8h] [rbp+13A8h]
  const WCHAR *v1802; // [rsp+14A8h] [rbp+13A8h]
  char *v1803; // [rsp+14A8h] [rbp+13A8h]
  LPVOID v1804; // [rsp+14A8h] [rbp+13A8h]
  char *v1805; // [rsp+14A8h] [rbp+13A8h]
  char *v1806; // [rsp+14A8h] [rbp+13A8h]
  __int64 v1807; // [rsp+14A8h] [rbp+13A8h]
  int v1808; // [rsp+14A8h] [rbp+13A8h]
  unsigned int i2; // [rsp+14A8h] [rbp+13A8h]
  int v1810; // [rsp+14A8h] [rbp+13A8h]

  v1591 = a1;
  v8 = 0;
  v9 = 0;
  AcquireSRWLockShared(&stru_1800B4EB0);
  if ( dword_1800B4204 )
  {
    *a1 = dword_1800B4200;
    ReleaseSRWLockShared(&stru_1800B4EB0);
    return (unsigned int)v9;
  }
  ReleaseSRWLockShared(&stru_1800B4EB0);
  AcquireSRWLockExclusive(&stru_1800B4EB0);
  if ( dword_1800B4204 )
  {
    *a1 = dword_1800B4200;
    goto LABEL_12;
  }
  v1507 = 0;
  v1509[1] = 4;
  v1592 = 0LL;
  v1510 = 0;
  v1511 = 0;
  v1512 = 0;
  v1445 = 0LL;
  v1514 = 0;
  while ( _InterlockedCompareExchange(&dword_1800B42A8, 1, 0) )
    ;
  v12 = dword_1800B400C;
  v1451 = -1;
  if ( dword_1800B400C )
    goto LABEL_60;
  v1396 = 0;
  lpModuleName = 0LL;
  v1627 = 0LL;
  v13 = sub_1800443AC(824LL);
  v1767 = (const WCHAR *)v13;
  if ( !v13 )
    goto LABEL_50;
  v14 = 103LL;
  v15 = (_BYTE *)(v13 + 7);
  v16 = 0;
  v17 = (unsigned __int8 *)&unk_180096F02;
  v18 = 0;
  v19 = 0;
  v20 = -1;
  do
  {
    v21 = *(v17 - 1) | (*(v17 - 2) << 8);
    v22 = v17[2] << 8;
    v23 = *v17;
    v17 += 8;
    v24 = *(v17 - 7) | ((v23 | (v21 << 8)) << 8);
    v25 = v24 ^ v19;
    v26 = *(v17 - 3) | ((*(v17 - 4) | ((*(v17 - 5) | v22) << 8)) << 8);
    v27 = v26 ^ v18 ^ v25 ^ 0xAC987321;
    v28 = (__ROL4__(v27, 10) + 4991 * __ROL4__(v27 + 1419157410, 5)) ^ v25;
    v29 = (43881 * __ROR4__(v28 + 133239679, 9) - __ROL4__(v28, 2)) ^ v27;
    v30 = (24670 * v29 - (v29 >> 13) - 123127970) ^ v28;
    v31 = (2033 * __ROL4__(v30 ^ 0xAB69, 6) - __ROL4__(v30, 2)) ^ v29;
    v32 = (133239679 - (v31 ^ 0xAB69605E)) ^ v30;
    v33 = (43881 * (v32 ^ 0x137F)) ^ __ROR4__(v32, 6) ^ v31;
    v34 = (__ROL4__(v33, 2) + 24670 * __ROR4__(v33 + 133239679, 15)) ^ v32;
    v35 = (2033 * __ROR4__(v34 + 1419157410, 14) - __ROL4__(v34, 8)) ^ v33;
    v36 = __ROR4__(v35, 10) ^ (4991 * __ROR4__(v35 ^ 0xAB69605E, 12)) ^ v34;
    v37 = v35 ^ (v36 >> 10) ^ (43881 * (v36 ^ 0x7F1));
    v38 = (2033 * (__ROR4__(~v37, 5) + 24670)) ^ v36;
    v39 = v37 ^ (v38 - 2033) ^ 0xAB69605E;
    v40 = ((v39 >> 2) + 4991 * __ROL4__(v37 ^ (v38 - 2033) ^ 0xAB6967AF, 2)) ^ v38;
    v41 = (__ROL4__(v40, 7) + 43881 * __ROR4__(v40 - 133239679, 6)) ^ v39;
    v42 = (24670 * (v41 ^ 0x137F) + __ROR4__(v41, 9)) ^ v40;
    v43 = (__ROL4__(v42, 7) + 2033 * __ROL4__(v42 ^ 0xAB69, 5)) ^ v41;
    v44 = v43 ^ v42 ^ 0xAC987321;
    v45 = (4991 * __ROR4__(v44, 3) - 219010071) ^ v43;
    v46 = (24670 * __ROR4__(v45 - 133239679, 1) - __ROR4__(v45, 6)) ^ v44;
    v47 = (__ROL4__(v46, 14) + 2033 * __ROL4__(v46 - 1419157410, 3)) ^ v45;
    v48 = (4991 * __ROL4__(v47 - 1419157410, 15) - __ROR4__(v47, 14)) ^ v46;
    v49 = (v48 >> 3) ^ (43881 * (v48 ^ 0x605E)) ^ v47;
    v50 = 24670 * __ROL4__(v49 ^ 0x7F1137F, 4);
    v51 = v49;
    v52 = v20 ^ v49;
    v20 = v26;
    v53 = v16 ^ __ROL4__(v51, 2) ^ v50;
    v16 = v24;
    v54 = v53 ^ v48;
    *(v15 - 4) = v54;
    *v15 = v52;
    v15 += 8;
    v55 = __ROR4__(v54, 8);
    *(v15 - 13) = v55;
    v56 = __ROR4__(v52, 8);
    *(v15 - 9) = v56;
    v57 = __ROR4__(v55, 8);
    *(v15 - 14) = v57;
    v58 = __ROR4__(v56, 8);
    *(v15 - 10) = v58;
    v59 = __ROR4__(v57, 8);
    v60 = __ROR4__(v58, 8);
    *(v15 - 15) = v59;
    *(v15 - 11) = v60;
    v18 = __ROR4__(v60, 8);
    v19 = __ROR4__(v59, 8);
    --v14;
  }
  while ( v14 );
  v61 = (WCHAR *)v1767;
  v8 = 0;
  v62 = 0LL;
  v63 = 0;
  v64 = 0;
  do
    v63 ^= *((_BYTE *)v1767 + v62++);
  while ( v62 < 0x338 );
  if ( v63 == 64LL )
  {
    lpModuleName = v1767;
    v65 = 0;
    v61 = 0LL;
    v1627 = 824LL;
  }
  else
  {
    v65 = -1073425151;
  }
  if ( v61 )
    sub_18003850C(v61);
  if ( v65 < 0 )
    goto LABEL_50;
  i = lpModuleName;
  HIBYTE(lpModuleName[v1627 / 2 - 1]) = 0;
  memset(&unk_1800B4230, 0, 0x60uLL);
  if ( *(_BYTE *)i )
  {
    v67 = 0;
    while ( 1 )
    {
      v68 = i;
      v69 = -1LL;
      do
        ++v69;
      while ( i[v69] );
      v70 = &i[v69];
      v71 = (char *)&unk_1800B4230 + 24 * v67;
      if ( !GetModuleHandleExW(0, v68, (HMODULE *)v71) )
        break;
      v64 = 0;
      if ( **(_WORD **)v71 == 23117
        && (v72 = *(int *)(*(_QWORD *)v71 + 60LL), (unsigned int)v72 < 0x10000000)
        && (v73 = *(_QWORD *)v71 + v72, v73 >= *(_QWORD *)v71)
        && *(_DWORD *)v73 == 17744 )
      {
        if ( ((*(_WORD *)(v73 + 24) - 267) & 0xFEFF) != 0 )
        {
          v64 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v71 + 12) = *(_QWORD *)(v73 + 136);
          *((_DWORD *)v71 + 2) = *(_DWORD *)(v73 + 80);
        }
      }
      else
      {
        v64 = -1073741701;
      }
      v74 = *(_DWORD *)(v70 + 1);
      v75 = 0;
      for ( i = v70 + 3; v75 < v74; ++v75 )
      {
        v76 = (const CHAR *)i;
        v77 = -1LL;
        do
          ++v77;
        while ( *((_BYTE *)i + v77) );
        i = (LPCWSTR)((char *)i + v77 + 1);
        if ( v64 >= 0 )
        {
          ProcAddress = GetProcAddress(*(HMODULE *)v71, v76);
          if ( !ProcAddress )
            goto LABEL_51;
          off_1800B3000[v1396] = ProcAddress;
        }
        ++v1396;
      }
      ++v67;
      if ( !*(_BYTE *)i )
        goto LABEL_51;
    }
LABEL_50:
    v64 = -1073741702;
  }
LABEL_51:
  if ( lpModuleName )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)lpModuleName);
  }
  if ( v64 < 0 )
  {
    v80 = 4LL;
    v81 = (HMODULE *)&unk_1800B4230;
    do
    {
      if ( *v81 )
        FreeLibrary(*v81);
      v81 += 3;
      --v80;
    }
    while ( v80 );
    memset(&unk_1800B4230, 0, 0x60uLL);
    memcpy(off_1800B3000, off_18008E410, 0x170uLL);
    goto LABEL_61;
  }
  v12 = dword_1800B400C;
LABEL_60:
  dword_1800B400C = v12 + 1;
LABEL_61:
  v82 = 0;
  _InterlockedExchange(&dword_1800B42A8, 0);
  v83 = 0;
  String1 = 0LL;
  v1629 = 0LL;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_105;
  v84 = off_1800B3110[0]();
  if ( !v84 )
    goto LABEL_69;
  v1630 = 0LL;
  v85 = 0LL;
  for ( j = 0LL; ; v1630 = j )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1800B3130[0])(
           v84,
           2LL,
           j,
           v85,
           &v1515) )
    {
      String1 = j;
      goto LABEL_80;
    }
    LastError = GetLastError();
    if ( LastError != 122 )
      break;
    if ( j )
      goto LABEL_74;
    j = (wchar_t *)sub_1800443AC(v1515);
    sub_180044164(&v1630);
    if ( !j )
    {
      v83 = -2147024882;
LABEL_80:
      v1630 = 0LL;
      goto LABEL_81;
    }
    v85 = v1515;
  }
  if ( !LastError )
  {
LABEL_74:
    v83 = -2147467259;
    goto LABEL_81;
  }
  if ( LastError > 0 )
    v83 = (unsigned __int16)LastError | 0x80070000;
  else
    v83 = LastError;
LABEL_81:
  sub_180044164(&v1630);
  if ( v83 < 0 )
    goto LABEL_106;
  CurrentThreadId = GetCurrentThreadId();
  v90 = ((__int64 (__fastcall *)(_QWORD))off_1800B3128[0])(CurrentThreadId);
  if ( !v90 )
  {
LABEL_69:
    v88 = GetLastError();
    v83 = v88;
    if ( v88 > 0 )
      v83 = (unsigned __int16)v88 | 0x80070000;
    if ( v83 >= 0 )
      v83 = -2147467259;
    goto LABEL_106;
  }
  v1632 = 0LL;
  v83 = 0;
  v91 = 0LL;
  for ( k = 0LL; ; v1632 = k )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1800B3130[0])(
           v90,
           2LL,
           k,
           v91,
           &v1516) )
    {
      v1629 = k;
      goto LABEL_96;
    }
    v93 = GetLastError();
    if ( v93 != 122 )
      break;
    if ( k )
      goto LABEL_90;
    k = (wchar_t *)sub_1800443AC(v1516);
    sub_180044164(&v1632);
    if ( !k )
    {
      v83 = -2147024882;
LABEL_96:
      v1632 = 0LL;
      goto LABEL_97;
    }
    v91 = v1516;
  }
  if ( !v93 )
  {
LABEL_90:
    v83 = -2147467259;
    goto LABEL_97;
  }
  if ( v93 > 0 )
    v83 = (unsigned __int16)v93 | 0x80070000;
  else
    v83 = v93;
LABEL_97:
  sub_180044164(&v1632);
  if ( v83 >= 0 )
  {
    if ( String1 && !wcscmp(String1, L"WinSta0") && v1629 && !wcscmp(v1629, L"Default") )
    {
      v1450 = 0;
      CurrentProcess = GetCurrentProcess();
      if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1450, 4LL) )
      {
        if ( (v1450 & 0xF) == 0 )
          v82 = 1;
        goto LABEL_105;
      }
      goto LABEL_69;
    }
LABEL_105:
    v1514 = v82;
  }
LABEL_106:
  sub_180044164(&v1629);
  sub_180044164(&String1);
  v95 = v1514;
  if ( v83 < 0 )
    v95 = 0;
  v1514 = v95;
  v1387 = LocalAlloc(0x40u, 4uLL);
  sub_1800439E4(&v1445);
  if ( !v1387 )
  {
    v1445 = 0LL;
    v96 = -2147024882;
LABEL_1667:
    v1335 = v1450;
    goto LABEL_1668;
  }
  v1445 = v1387;
  v1768 = 0LL;
  *(_OWORD *)v1674 = 0LL;
  v1633 = &unk_1800B35C0;
  v97 = 0LL;
  lpMem = 0LL;
  v1530 = 0;
  v1552 = 0;
  v98 = GetProcessHeap();
  v1786 = 3LL;
  v99 = HeapAlloc(v98, 8u, 0xA0uLL);
  v96 = -1073741801;
  if ( !v99 )
  {
    v1431 = -1073741801;
    goto LABEL_248;
  }
  v100 = v1633;
  v1339 = v99;
  *v99 = *v1633;
  v99[1] = v100[1];
  v99[2] = v100[2];
  v99[3] = v100[3];
  v99[4] = v100[4];
  v99[5] = v100[5];
  v99[6] = v100[6];
  v99[7] = v100[7];
  v99[8] = v100[8];
  v99[9] = v100[9];
  v1563 = &unk_1800B3500;
  v101 = GetProcessHeap();
  v102 = HeapAlloc(v101, 8u, 8uLL);
  v103 = v102;
  if ( !v102 )
    goto LABEL_145;
  v1768 = v102;
  *v102 = *v1563;
  v1564 = __rdtsc();
  dwBytes = 0;
  v104 = sub_18003ECBC(4LL, 4LL, &dwBytes_4);
  v105 = v1555;
  v96 = v104;
  v1431 = v104;
  if ( v104 >= 0 )
    v105 = dwBytes_4;
  v1555 = v105;
  if ( v104 < 0 )
    goto LABEL_146;
  v106 = sub_18003ECBC(0LL, v105, &dwBytes);
  v96 = v106 | 0x10000000;
  v1431 = v106 | 0x10000000;
  if ( v106 < 0 )
    goto LABEL_146;
  v108 = sub_18003ECBC(v107, 160LL, &v1557);
  v1431 = v108;
  v96 = v108;
  if ( v108 >= 0 )
    v105 = v1557;
  v1555 = v105;
  if ( v108 < 0 )
    goto LABEL_146;
  v109 = sub_18003ECBC(dwBytes, v105, &dwBytes);
  v96 = v111 | v109;
  v1431 = v111 | v109;
  if ( (v111 | v109) < 0 )
    goto LABEL_146;
  v112 = sub_18003ECBC(v110, v110 + 4, &v1558);
  v1431 = v112;
  v96 = v112;
  if ( v112 >= 0 )
    v105 = v1558;
  v1555 = v105;
  if ( v112 < 0 )
    goto LABEL_146;
  v113 = sub_18003ECBC(dwBytes, v105, &dwBytes);
  v96 = v115 | v113;
  v1431 = v115 | v113;
  if ( (v115 | v113) < 0 )
    goto LABEL_146;
  v116 = sub_18003ECBC(v114, v114 + 4, &v1559);
  v1431 = v116;
  v96 = v116;
  if ( v116 >= 0 )
    v105 = v1559;
  v1555 = v105;
  if ( v116 < 0 )
    goto LABEL_146;
  v117 = sub_18003ECBC(dwBytes, v105, &dwBytes);
  v96 = v120 | v117;
  v1431 = v120 | v117;
  if ( (v120 | v117) < 0 )
    goto LABEL_146;
  if ( (int)sub_18003ECDC(v119, v118, &v1565) < 0 )
    goto LABEL_147;
  v122 = sub_18003ECBC(v121, (unsigned int)(2 * ++v1565), &v1560);
  v1431 = v122;
  v96 = v122;
  if ( v122 >= 0 )
    v105 = v1560;
  v1555 = v105;
  if ( v122 < 0 )
    goto LABEL_146;
  v123 = sub_18003ECBC(dwBytes, v105, &dwBytes);
  v96 = v125 | v123;
  v1431 = v125 | v123;
  if ( (v125 | v123) < 0 )
    goto LABEL_146;
  v126 = sub_18003ECBC(v124, v124, &v1561);
  v1431 = v126;
  v96 = v126;
  if ( v126 >= 0 )
    v105 = v1561;
  v1555 = v105;
  if ( v126 < 0 )
    goto LABEL_146;
  v127 = sub_18003ECBC(dwBytes, v105, &dwBytes);
  v96 = v129 | v127;
  v1431 = v129 | v127;
  if ( (v129 | v127) < 0 )
    goto LABEL_146;
  v130 = sub_18003ECBC(v128, v128, &v1455);
  v1431 = v130;
  v96 = v130;
  if ( v130 >= 0 )
    v105 = v1455;
  v1555 = v105;
  if ( v130 < 0 )
    goto LABEL_146;
  v131 = sub_18003ECBC(dwBytes, v105, &dwBytes);
  v96 = v132 | v131;
  v1431 = v132 | v131;
  if ( (v132 | v131) < 0 )
    goto LABEL_146;
  HIDWORD(Size) = dwBytes;
  v133 = dwBytes;
  v134 = GetProcessHeap();
  v135 = HeapAlloc(v134, 8u, v133);
  v136 = v135;
  if ( !v135 )
  {
    v96 = -1073741801;
LABEL_145:
    v1431 = v96;
LABEL_146:
    v97 = v99;
    goto LABEL_248;
  }
  lpMem = v135;
  LODWORD(Size) = 0;
  v1456 = 0;
  v96 = sub_18003EC98(v135, 4LL, &v1667);
  v1431 = v96;
  v138 = 0;
  if ( v96 < 0 )
  {
    v140 = 1;
  }
  else
  {
    if ( v136 + 2 > (_DWORD *)((char *)v136 + HIDWORD(Size)) )
      goto LABEL_144;
    v139 = v1667;
    *v136 = v137;
    v140 = v137 - 3;
    *v139 = v1456;
    v138 = v137 - 3 + Size;
    LODWORD(Size) = v138;
  }
  if ( v96 < 0 )
    goto LABEL_146;
  if ( lpMem )
  {
    v143 = lpMem;
    v1566 = lpMem;
    if ( v138 )
    {
      while ( 1 )
      {
        v144 = sub_18003ECBC((unsigned int)v137, (unsigned int)*v143, &v1459);
        v1431 = v144;
        v96 = v144;
        if ( v144 >= 0 )
          v145 = v1459;
        v1458 = v145;
        if ( v144 < 0 )
          break;
        v1431 = sub_18003EC98(v143, v145, &v1566);
        v96 = v1431;
        if ( v1431 < 0 )
          break;
        v143 = v1566;
        if ( v146 + 1 >= (unsigned int)Size )
          goto LABEL_165;
      }
    }
    else
    {
LABEL_165:
      v1431 = sub_18003EC98(v143, v137, &v1676);
      v96 = v1431;
      if ( v1431 >= 0 )
      {
        if ( v143 + 41 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
          goto LABEL_144;
        v147 = v1676;
        *v143 = 160;
        *v147 = *v99;
        v147[1] = v99[1];
        v147[2] = v99[2];
        v147[3] = v99[3];
        v147[4] = v99[4];
        v147[5] = v99[5];
        v147[6] = v99[6];
        v147[7] = v99[7];
        v147[8] = v99[8];
        v147[9] = v99[9];
        LODWORD(Size) = Size + 1;
      }
    }
  }
  else
  {
    v141 = sub_18003ECBC((unsigned int)v137, 160LL, &v1457);
    v142 = v1458;
    v96 = v141;
    v1431 = v141;
    if ( v141 >= 0 )
      v142 = v1457;
    v1458 = v142;
    if ( v141 >= 0 )
    {
      v1431 = sub_18003ECBC(HIDWORD(Size), v142, (char *)&Size + 4);
      v96 = v1431;
      if ( v1431 >= 0 )
      {
        LODWORD(Size) = v140 + Size;
        goto LABEL_169;
      }
    }
  }
  if ( v96 < 0 )
    goto LABEL_146;
LABEL_169:
  if ( lpMem )
  {
    v150 = lpMem;
    v1567 = lpMem;
    if ( (_DWORD)Size )
    {
      while ( 1 )
      {
        v151 = sub_18003ECBC((unsigned int)v137, (unsigned int)*v150, &v1462);
        v1431 = v151;
        v96 = v151;
        if ( v151 >= 0 )
          v152 = v1462;
        v1461 = v152;
        if ( v151 < 0 )
          break;
        v1431 = sub_18003EC98(v150, v152, &v1567);
        v96 = v1431;
        if ( v1431 < 0 )
          break;
        v150 = v1567;
        if ( v153 + 1 >= (unsigned int)Size )
          goto LABEL_181;
      }
    }
    else
    {
LABEL_181:
      v1431 = sub_18003EC98(v150, v137, &v1677);
      v96 = v1431;
      if ( v1431 >= 0 )
      {
        if ( v150 + 3 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
          goto LABEL_144;
        v154 = v1677;
        *v150 = 8;
        *v154 = *v103;
        LODWORD(Size) = Size + 1;
      }
    }
  }
  else
  {
    v148 = sub_18003ECBC((unsigned int)v137, 8LL, &v1460);
    v149 = v1461;
    v96 = v148;
    v1431 = v148;
    if ( v148 >= 0 )
      v149 = v1460;
    v1461 = v149;
    if ( v148 >= 0 )
    {
      v1431 = sub_18003ECBC(HIDWORD(Size), v149, (char *)&Size + 4);
      v96 = v1431;
      if ( v1431 >= 0 )
      {
        LODWORD(Size) = Size + 1;
        goto LABEL_185;
      }
    }
  }
  if ( v96 < 0 )
    goto LABEL_146;
LABEL_185:
  v1568 = v1564;
  if ( lpMem )
  {
    v158 = lpMem;
    v1569 = lpMem;
    if ( (_DWORD)Size )
    {
      do
      {
        v159 = sub_18003ECBC((unsigned int)v137, (unsigned int)*v158, &v1465);
        v1431 = v159;
        v96 = v159;
        if ( v159 >= 0 )
          v160 = v1465;
        v1464 = v160;
        if ( v159 < 0 )
          goto LABEL_200;
        v1431 = sub_18003EC98(v158, v160, &v1569);
        v96 = v1431;
        if ( v1431 < 0 )
          goto LABEL_200;
        v158 = v1569;
      }
      while ( v161 + 1 < (unsigned int)Size );
    }
    v1431 = sub_18003EC98(v158, v137, &v1678);
    v96 = v1431;
    if ( v1431 < 0 )
      goto LABEL_200;
    if ( v158 + 3 <= (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
    {
      v162 = v1678;
      *v158 = 8;
      v156 = v1568;
      *v162 = v1568;
      LODWORD(Size) = Size + 1;
      goto LABEL_200;
    }
LABEL_144:
    v96 = -1073741789;
    goto LABEL_145;
  }
  v155 = sub_18003ECBC((unsigned int)v137, 8LL, &v1463);
  v157 = v1464;
  v96 = v155;
  v1431 = v155;
  if ( v155 >= 0 )
    v157 = v1463;
  v1464 = v157;
  if ( v155 >= 0 )
  {
    v1431 = sub_18003ECBC(HIDWORD(Size), v157, (char *)&Size + 4);
    v96 = v1431;
    if ( v1431 >= 0 )
    {
      LODWORD(Size) = Size + 1;
      goto LABEL_201;
    }
  }
LABEL_200:
  if ( v96 < 0 )
    goto LABEL_146;
LABEL_201:
  if ( (int)sub_18003ECDC(v156, v157, &v1570) < 0 )
  {
LABEL_147:
    v96 = -1073741762;
    goto LABEL_145;
  }
  v1431 = sub_18003EC98(v1570, 1LL, &v1570);
  v96 = v1431;
  if ( v1431 >= 0 )
  {
    if ( 2 * (_DWORD)v1570 )
    {
      if ( lpMem )
      {
        v166 = lpMem;
        v1571 = lpMem;
        if ( (_DWORD)Size )
        {
          while ( 1 )
          {
            v167 = sub_18003ECBC(4LL, (unsigned int)*v166, &v1468);
            v1431 = v167;
            v96 = v167;
            if ( v167 >= 0 )
              v169 = v1468;
            v1467 = v169;
            if ( v167 < 0 )
              break;
            v1431 = sub_18003EC98(v166, v169, &v1571);
            v96 = v1431;
            if ( v1431 < 0 )
              goto LABEL_220;
            v166 = v1571;
            if ( v170 + 1 >= (unsigned int)Size )
              goto LABEL_216;
          }
          v163 = v168;
        }
        else
        {
LABEL_216:
          v1431 = sub_18003EC98(v166, 4LL, &v1679);
          v96 = v1431;
          if ( v1431 >= 0 )
          {
            if ( (char *)v166 + v171 + 4 <= (char *)lpMem + HIDWORD(Size) )
            {
              v172 = v1679;
              *v166 = v171;
              memcpy(v172, L"DataProtectionUnderLock-WindowsCore-Enabled", (unsigned int)v171);
              LODWORD(Size) = Size + 1;
LABEL_220:
              v163 = 4LL;
            }
            else
            {
              v96 = -1073741789;
              v1431 = -1073741789;
            }
          }
        }
      }
      else
      {
        v164 = sub_18003ECBC((unsigned int)v163, (unsigned int)(2 * v1570), &v1466);
        v165 = v1467;
        v96 = v164;
        v1431 = v164;
        if ( v164 >= 0 )
          v165 = v1466;
        v1467 = v165;
        if ( v164 >= 0 )
        {
          v1431 = sub_18003ECBC(HIDWORD(Size), v165, (char *)&Size + 4);
          v96 = v1431;
          if ( v1431 >= 0 )
          {
            LODWORD(Size) = Size + 1;
            v96 = 0;
            v1431 = 0;
          }
        }
      }
    }
    else
    {
      v96 = -1073741811;
      v1431 = -1073741811;
    }
  }
  if ( v96 < 0 )
    goto LABEL_247;
  v1469 = v1514;
  if ( lpMem )
  {
    v175 = lpMem;
    v1572 = lpMem;
    if ( (_DWORD)Size )
    {
      while ( 1 )
      {
        v176 = sub_18003ECBC((unsigned int)v163, (unsigned int)*v175, &v1472);
        v1431 = v176;
        v96 = v176;
        if ( v176 >= 0 )
          v177 = v1472;
        v1471 = v177;
        if ( v176 < 0 )
          break;
        v1431 = sub_18003EC98(v175, v177, &v1572);
        v96 = v1431;
        if ( v1431 < 0 )
          break;
        v175 = v1572;
        if ( v178 + 1 >= (unsigned int)Size )
          goto LABEL_236;
      }
    }
    else
    {
LABEL_236:
      v1431 = sub_18003EC98(v175, v163, &v1680);
      v96 = v1431;
      if ( v1431 >= 0 )
      {
        if ( v175 + 2 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
        {
LABEL_246:
          v96 = -1073741789;
          v1431 = -1073741789;
          goto LABEL_247;
        }
        v179 = v1680;
        *v175 = v163;
        *v179 = v1469;
        LODWORD(Size) = Size + 1;
      }
    }
  }
  else
  {
    v173 = sub_18003ECBC((unsigned int)v163, (unsigned int)v163, &v1470);
    v174 = v1471;
    v96 = v173;
    v1431 = v173;
    if ( v173 >= 0 )
      v174 = v1470;
    v1471 = v174;
    if ( v173 >= 0 )
    {
      v1431 = sub_18003ECBC(HIDWORD(Size), v174, (char *)&Size + 4);
      v96 = v1431;
      if ( v1431 >= 0 )
      {
        LODWORD(Size) = Size + 1;
        goto LABEL_240;
      }
    }
  }
  if ( v96 < 0 )
  {
LABEL_247:
    v97 = v99;
    goto LABEL_248;
  }
LABEL_240:
  v1473 = v163;
  if ( lpMem )
  {
    v189 = lpMem;
    v1573 = lpMem;
    if ( (_DWORD)Size )
    {
      do
      {
        v190 = sub_18003ECBC((unsigned int)v163, (unsigned int)*v189, &v1476);
        v1431 = v190;
        v96 = v190;
        if ( v190 >= 0 )
          v191 = v1476;
        v1475 = v191;
        if ( v190 < 0 )
          goto LABEL_272;
        v1431 = sub_18003EC98(v189, v191, &v1573);
        v96 = v1431;
        if ( v1431 < 0 )
          goto LABEL_272;
        v189 = v1573;
      }
      while ( v192 + 1 < (unsigned int)Size );
    }
    v1431 = sub_18003EC98(v189, v163, &v1681);
    v96 = v1431;
    if ( v1431 < 0 )
      goto LABEL_272;
    if ( v189 + 2 <= (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
    {
      v193 = v1681;
      *v189 = v163;
      *v193 = v1473;
      LODWORD(Size) = Size + 1;
      goto LABEL_272;
    }
    goto LABEL_246;
  }
  v180 = sub_18003ECBC((unsigned int)v163, (unsigned int)v163, &v1474);
  v181 = v1475;
  v96 = v180;
  v1431 = v180;
  if ( v180 >= 0 )
    v181 = v1474;
  v1475 = v181;
  if ( v180 >= 0 )
  {
    v1431 = sub_18003ECBC(HIDWORD(Size), v181, (char *)&Size + 4);
    v96 = v1431;
    if ( v1431 >= 0 )
    {
      LODWORD(Size) = Size + 1;
      goto LABEL_273;
    }
  }
LABEL_272:
  if ( v96 < 0 )
    goto LABEL_247;
LABEL_273:
  v194 = sub_18003ECBC((unsigned int)v163, (unsigned int)v163, &v1477);
  v196 = v1478;
  v96 = v194;
  v1431 = v194;
  if ( v194 >= 0 )
    v196 = v1477;
  v1478 = v196;
  if ( v194 < 0 )
    goto LABEL_298;
  v1479 = v196;
  v197 = sub_18003ECBC(v195, 8LL, &v1480);
  v1431 = v197;
  v199 = v198;
  v96 = v197;
  if ( v197 >= 0 )
    v199 = v1480;
  v1478 = v199;
  if ( v197 < 0 )
    goto LABEL_298;
  v1431 = sub_18003ECBC(v198, v199, &v1479);
  v96 = v1431;
  if ( v1431 < 0 )
    goto LABEL_298;
  v201 = sub_18003ECBC(v200, v200, &v1481);
  v1431 = v201;
  v96 = v201;
  if ( v201 >= 0 )
    v199 = v1481;
  v1478 = v199;
  if ( v201 < 0 )
    goto LABEL_298;
  v1431 = sub_18003ECBC(v1479, v199, &v1479);
  v96 = v1431;
  if ( v1431 < 0 )
    goto LABEL_298;
  v203 = sub_18003ECBC(v202, v202, &v1482);
  v1431 = v203;
  v96 = v203;
  if ( v203 >= 0 )
    v199 = v1482;
  v1478 = v199;
  if ( v203 < 0 )
    goto LABEL_298;
  v1431 = sub_18003ECBC(v1479, v199, &v1479);
  v96 = v1431;
  if ( v1431 < 0 )
    goto LABEL_298;
  v205 = sub_18003ECBC(v204, v204, &v1496);
  v1431 = v205;
  v96 = v205;
  if ( v205 >= 0 )
    v199 = v1496;
  v1478 = v199;
  if ( v205 < 0 )
    goto LABEL_298;
  v1431 = sub_18003ECBC(v1479, v199, &v1479);
  v96 = v1431;
  if ( v1431 < 0 )
    goto LABEL_298;
  v207 = sub_18003ECBC(v206, v206, &v1449);
  v1431 = v207;
  v96 = v207;
  if ( v207 >= 0 )
    v199 = v1449;
  v1478 = v199;
  if ( v207 < 0 )
  {
LABEL_298:
    v208 = v1449;
  }
  else
  {
    v96 = sub_18003ECBC(v1479, v199, &v1479);
    v1431 = v96;
    v208 = v1449;
    if ( v96 >= 0 )
      v208 = v1479;
  }
  v1362 = v208;
  if ( v96 < 0 )
    goto LABEL_247;
  v209 = 0LL;
  v1377 = 0LL;
  v210 = 0LL;
  v1574 = 0LL;
  v1801 = 0LL;
  HIDWORD(a7) = 0;
  v1403 = 0LL;
  v1483 = 0LL;
  v1419 = 0LL;
  v1435 = 0LL;
  v1575 = __rdtsc();
  v1484 = 8;
  v211 = sub_18003ECBC(8LL, HIDWORD(Size), &v1484);
  if ( v211 >= 0 )
  {
    v212 = (v1484 + 7) & 0xFFFFFFF8;
    if ( v212 >= v1484 )
    {
      v1484 = (v1484 + 7) & 0xFFFFFFF8;
      v213 = v212;
      v214 = GetProcessHeap();
      v215 = HeapAlloc(v214, 8u, v213);
      if ( v215 )
      {
        v1576 = v215;
        *v215 = Size;
        v211 = sub_18003EC98(v215, 4LL, &v1576);
        if ( v211 >= 0 )
        {
          v217 = v1576;
          *(_DWORD *)v1576 = HIDWORD(Size);
          v211 = sub_18003EC98(v217, v216, &v1576);
          if ( v211 >= 0 )
          {
            *(_QWORD *)((char *)v215 + v1484 - 8) = v1575;
            memcpy(v1576, lpMem, HIDWORD(Size));
            v210 = v1484;
            v1377 = (unsigned __int8 *)v215;
            v215 = 0LL;
          }
        }
        if ( v215 )
        {
          v218 = GetProcessHeap();
          HeapFree(v218, 0, v215);
        }
        v209 = v1377;
      }
      else
      {
        v211 = -1073741801;
        v209 = 0LL;
      }
    }
    else
    {
      v211 = -1073741675;
    }
  }
  v96 = v211 | 0x10000000;
  v1431 = v96;
  if ( v96 < 0 )
    goto LABEL_585;
  v1577 = 0LL;
  v219 = 0LL;
  if ( v209 )
  {
    if ( v210 && (Src = (_BYTE *)sub_1800443AC(v210 + 8)) != 0LL )
    {
      v221 = 0;
      for ( m = 0LL; m < v210; ++m )
        v221 ^= v209[m];
      v1760 = v221;
      v223 = Src;
      v1707 = 0xC81ECB17B1B54A58uLL;
      v1432 = 0;
      v224 = -1;
      v1371 = 0;
      v225 = v209;
      v226 = 0;
      v227 = v210 & 7;
      if ( (v210 & 7) != 0 )
      {
        v1371 = 0;
        v228 = 0;
        v229 = 0;
        v230 = 56;
        do
        {
          v231 = *v225++;
          if ( v229 >= 4 )
          {
            v232 = v1371;
            v228 |= v231 << v230;
          }
          else
          {
            v232 = (v231 << (v230 - 32)) | v1371;
            v1371 = v232;
          }
          ++v229;
          v230 -= 8;
        }
        while ( v229 < (int)v227 );
        v1432 = v228;
        v226 = v232 ^ 0xB17A307A;
        v233 = v228 ^ 0x42F6B18D;
        v234 = v232 ^ 0xB17A307A;
        v235 = v228 ^ 0x42F6B18D;
        v236 = 0;
        if ( (v210 & 7) != 0 )
        {
          do
          {
            if ( v236 >= 4 )
            {
              v235 = __ROL4__(v235, 8);
              v237 = v235;
            }
            else
            {
              v234 = __ROL4__(v234, 8);
              v237 = v234;
            }
            *v223 = v237;
            ++v236;
            ++v223;
          }
          while ( v236 < (int)v227 );
        }
        if ( v227 <= 4 )
        {
          v224 = 0;
          if ( v227 < 4 )
            v226 = v226 >> (8 * (4 - v227)) << (8 * (4 - v227));
        }
        else
        {
          v224 = v233 >> (8 * (8 - v227)) << (8 * (8 - v227));
        }
      }
      v238 = v210 >> 3;
      if ( v210 >> 3 )
      {
        v239 = v225 + 2;
        v240 = v1432;
        v241 = v1371;
        v1397 = HIWORD(v1707);
        v1352 = WORD1(v1707);
        v242 = v223 + 7;
        v243 = HIDWORD(v1707);
        v244 = WORD2(v1707);
        do
        {
          v245 = v239[1] | ((*v239 | ((*(v239 - 1) | (*(v239 - 2) << 8)) << 8)) << 8);
          v246 = v239[5] | ((v239[4] | ((v239[3] | (v239[2] << 8)) << 8)) << 8);
          v247 = v246 ^ v224;
          v248 = v243 ^ v245 ^ (v247 - 19032) ^ v226;
          v249 = (__ROR4__(v248, 7) + WORD1(v1707) * __ROR4__(v248 ^ v243, 15)) ^ v247;
          v250 = (v244 * __ROR4__(v249 - 1313519016, 9) - __ROR4__(v249, 10)) ^ v248;
          v251 = (__ROL4__(v250, 5) + HIWORD(v1707) * __ROL4__(v244 ^ v250, 4)) ^ v249;
          v252 = (v243 - (v251 ^ 0xB1B54A58)) ^ v250;
          v253 = (WORD1(v1707) * (v252 - 19032) - (v252 >> 6)) ^ v251;
          v254 = (19032 * (v244 ^ __ROR4__(v253, 15))) ^ v252;
          v255 = (v244 * (HIWORD(v1707) + __ROR4__(~v254, 3))) ^ v253;
          v256 = (v255 - v243 - 19032) ^ v254;
          v257 = (v1352 * (v1397 ^ v256)) ^ __ROR4__(v256, 10) ^ v255;
          v258 = __ROR4__(v257, 3) ^ (v244 * __ROL4__(v257 ^ 0x4A58, 6)) ^ v256;
          v259 = (19032 * (__ROR4__(v258, 15) - HIWORD(v1707))) ^ v257;
          v260 = (v259 >> 15) ^ (19032 * __ROL4__(v259 - v244, 3)) ^ (v259 >> 1) ^ (19032 * (HIWORD(v1707) ^ v259)) ^ v258;
          v261 = (WORD1(v1707) * (v260 - v244) - (v260 >> 13)) ^ v259;
          v262 = __ROR4__(v261, 11) ^ (v244 * __ROR4__(-1313519016 - v261, 9)) ^ v260;
          v263 = (v262 + 1313519016 - HIWORD(v1707)) ^ v261;
          v264 = (19032 * (v1352 ^ v263) - __ROR4__(v263, 7)) ^ v262;
          v265 = (WORD1(v1707) * __ROL4__(HIWORD(v1707) ^ v264, 4) - __ROR4__(v264, 16)) ^ v263;
          v266 = (__ROR4__(v265, 4) + v244 * __ROR4__(-1313519016 - v265, 10)) ^ v264;
          v267 = __ROR4__(v266, 9) ^ (HIWORD(v1707) * __ROR4__(v266 + 1313519016, 4)) ^ v265;
          v268 = (19032 * __ROL4__(v243 ^ v267, 8) - __ROL4__(v267, 2)) ^ v266;
          v269 = (WORD1(v1707) * __ROR4__(v243 - v268, 11) - __ROR4__(v268, 12)) ^ v267;
          v270 = (v269 >> 8) ^ (v244 * (v269 ^ WORD1(v1707))) ^ v268;
          v239 += 8;
          v271 = v270 ^ v243 ^ 0xB1B54A58 ^ v269;
          v272 = v241 ^ v270;
          *(v242 - 4) = v272;
          v273 = v240 ^ v271;
          *v242 = v273;
          v241 = v245;
          v274 = __ROR4__(v272, 8);
          v240 = v246;
          *(v242 - 5) = v274;
          v242 += 8;
          v275 = __ROR4__(v273, 8);
          *(v242 - 9) = v275;
          v276 = __ROR4__(v274, 8);
          *(v242 - 14) = v276;
          v277 = __ROR4__(v275, 8);
          *(v242 - 10) = v277;
          v278 = __ROR4__(v276, 8);
          v279 = __ROR4__(v277, 8);
          *(v242 - 15) = v278;
          *(v242 - 11) = v279;
          v224 = __ROR4__(v279, 8);
          v226 = __ROR4__(v278, 8);
          --v238;
        }
        while ( v238 );
        v221 = v1760;
        v8 = 0;
        v219 = 0LL;
      }
      v280 = v210 + 8;
      *(_QWORD *)&Src[v210] = v221;
      v1577 = Src;
      v1578 = v210 + 8;
      v1580 = 8LL;
      v1579 = &qword_1800B35B0;
      v1582 = 160LL;
      v1581 = xmmword_1800B3510;
      v281 = GetProcessHeap();
      v282 = HeapAlloc(v281, 8u, 0x30uLL);
      v283 = v282;
      if ( v282 )
      {
        *v282 = v280;
        v284 = GetProcessHeap();
        v285 = HeapAlloc(v284, 8u, v280);
        if ( !v285 )
          goto LABEL_343;
        *((_QWORD *)v283 + 1) = v285;
        memcpy(v285, Src, v280);
        v283[4] = 160;
        v286 = GetProcessHeap();
        v287 = HeapAlloc(v286, 8u, 0xA0uLL);
        if ( !v287 )
          goto LABEL_343;
        *((_QWORD *)v283 + 3) = v287;
        *v287 = xmmword_1800B3510[0];
        v287[1] = xmmword_1800B3510[1];
        v287[2] = xmmword_1800B3510[2];
        v287[3] = xmmword_1800B3510[3];
        v287[4] = xmmword_1800B3510[4];
        v287[5] = xmmword_1800B3510[5];
        v287[6] = xmmword_1800B3510[6];
        v287[7] = xmmword_1800B3510[7];
        v287[8] = xmmword_1800B3510[8];
        v287[9] = xmmword_1800B3510[9];
        v283[8] = 8;
        v288 = GetProcessHeap();
        v289 = HeapAlloc(v288, 8u, 8uLL);
        if ( v289 )
        {
          *((_QWORD *)v283 + 5) = v289;
          v219 = v283;
          *v289 = qword_1800B35B0;
          v220 = 0;
          v283 = 0LL;
        }
        else
        {
LABEL_343:
          v220 = -1073741801;
        }
        if ( v283 )
        {
          v290 = (void *)*((_QWORD *)v283 + 1);
          if ( v290 )
          {
            v291 = GetProcessHeap();
            HeapFree(v291, 0, v290);
            *((_QWORD *)v283 + 1) = 0LL;
          }
          v292 = (void *)*((_QWORD *)v283 + 3);
          if ( v292 )
          {
            v293 = GetProcessHeap();
            HeapFree(v293, 0, v292);
            *((_QWORD *)v283 + 3) = 0LL;
          }
          v294 = (void *)*((_QWORD *)v283 + 5);
          if ( v294 )
          {
            v295 = GetProcessHeap();
            HeapFree(v295, 0, v294);
            *((_QWORD *)v283 + 5) = 0LL;
          }
          v296 = GetProcessHeap();
          HeapFree(v296, 0, v283);
        }
      }
      else
      {
        v220 = -1073741801;
      }
      if ( v220 >= 0 )
      {
        v1574 = v219;
        v219 = 0LL;
      }
    }
    else
    {
      v220 = -1073741823;
    }
    v297 = v1577;
    if ( v1577 )
    {
      v298 = GetProcessHeap();
      HeapFree(v298, 0, v297);
      v1577 = 0LL;
    }
    if ( v219 )
    {
      v299 = (void *)v219[1];
      if ( v299 )
      {
        v300 = GetProcessHeap();
        HeapFree(v300, 0, v299);
        v219[1] = 0LL;
      }
      v301 = (void *)v219[3];
      if ( v301 )
      {
        v302 = GetProcessHeap();
        HeapFree(v302, 0, v301);
        v219[3] = 0LL;
      }
      v303 = (void *)v219[5];
      if ( v303 )
      {
        v304 = GetProcessHeap();
        HeapFree(v304, 0, v303);
        v219[5] = 0LL;
      }
      v305 = GetProcessHeap();
      HeapFree(v305, 0, v219);
    }
  }
  else
  {
    v220 = -1073741811;
  }
  v96 = v220 | 0x10000000;
  v1431 = v96;
  if ( v96 < 0 )
    goto LABEL_585;
  v306 = (const void **)v1574;
  v1485 = 4;
  v307 = sub_18003ECBC(4LL, *(unsigned int *)v1574, &v1485);
  if ( v307 < 0
    || (v307 = sub_18003ECBC(v1485, 4LL, &v1485), v307 < 0)
    || (v307 = sub_18003ECBC(v1485, *((unsigned int *)v306 + 4), &v1485), v307 < 0)
    || (v307 = sub_18003ECBC(v1485, 4LL, &v1485), v307 < 0) )
  {
    v308 = v1486;
  }
  else
  {
    v307 = sub_18003ECBC(v1485, *((unsigned int *)v306 + 8), &v1485);
    v308 = v1486;
    if ( v307 >= 0 )
      v308 = v1485;
    v1486 = v308;
  }
  if ( v307 >= 0 )
  {
    v309 = v308;
    v310 = GetProcessHeap();
    v311 = HeapAlloc(v310, 8u, v309);
    if ( v311 )
    {
      *v311 = *(_DWORD *)v306;
      v1583 = v311;
      v307 = sub_18003EC98(v311, 4LL, &v1583);
      if ( v307 >= 0 )
      {
        memcpy(v1583, v306[1], *(unsigned int *)v306);
        v307 = sub_18003EC98(v1583, *(unsigned int *)v306, &v1583);
        if ( v307 >= 0 )
        {
          v312 = v1583;
          *(_DWORD *)v1583 = *((_DWORD *)v306 + 4);
          v307 = sub_18003EC98(v312, 4LL, &v1583);
          if ( v307 >= 0 )
          {
            memcpy(v1583, v306[3], *((unsigned int *)v306 + 4));
            v307 = sub_18003EC98(v1583, *((unsigned int *)v306 + 4), &v1583);
            if ( v307 >= 0 )
            {
              v313 = v1583;
              *(_DWORD *)v1583 = *((_DWORD *)v306 + 8);
              v307 = sub_18003EC98(v313, 4LL, &v1583);
              if ( v307 >= 0 )
              {
                memcpy(v1583, v306[5], *((unsigned int *)v306 + 8));
                v307 = sub_18003EC98(v1583, *((unsigned int *)v306 + 8), &v1583);
                if ( v307 >= 0 )
                {
                  v1801 = v311;
                  v311 = 0LL;
                  HIDWORD(a7) = v1486;
                }
              }
            }
          }
        }
      }
      if ( v311 )
      {
        v314 = GetProcessHeap();
        HeapFree(v314, 0, v311);
      }
    }
    else
    {
      v307 = -1073741801;
    }
  }
  v96 = v307 | 0x10000000;
  v1431 = v96;
  if ( v96 < 0 )
    goto LABEL_585;
  v1584 = 0LL;
  v1487 = 0;
  v1585 = 0LL;
  v1488 = 0;
  v1489 = 8;
  v315 = sub_18003ECBC(8LL, v1362, &v1489);
  v96 = v315 | 0x10000000;
  v1431 = v315 | 0x10000000;
  if ( v315 >= 0 )
  {
    v317 = (v1489 + 7) & 0xFFFFFFF8;
    if ( v317 >= v1489 )
    {
      v1491 = (v1489 + 7) & 0xFFFFFFF8;
      v319 = sub_18003ECBC(v317, v316, &v1491);
      v318 = v1490;
      v96 = v319;
      v1431 = v319;
      if ( v319 >= 0 )
        v318 = v1491;
      v1490 = v318;
    }
    else
    {
      v318 = v1490;
      v96 = -1073741675;
      v1431 = -1073741675;
    }
    if ( v96 < 0 )
      goto LABEL_585;
    if ( !lpMem || (unsigned int)Size <= 1 )
      goto LABEL_422;
    v320 = (unsigned int *)lpMem;
    v1586 = (unsigned int *)lpMem;
    while ( 1 )
    {
      v321 = *v320;
      v1431 = sub_18003EC98(v320, 4LL, &v1586);
      v96 = v1431;
      if ( v1431 < 0 )
        break;
      v1431 = sub_18003EC98(v1586, v321, &v1586);
      v96 = v1431;
      if ( v1431 < 0 )
        break;
      v320 = v1586;
      if ( v322 != -1 )
      {
        v1431 = sub_18003EC98(v1586, 4LL, &v1586);
        v96 = v1431;
        if ( v1431 >= 0 )
        {
          v324 = v1586;
          v1487 = v323;
          if ( !v323 )
            v324 = 0LL;
          v1586 = v324;
          v1584 = v324;
        }
        break;
      }
    }
    if ( v96 < 0 )
      goto LABEL_585;
    if ( (unsigned int)Size > 2 )
    {
      v325 = (unsigned int *)lpMem;
      v1587 = (unsigned int *)lpMem;
      while ( 1 )
      {
        v326 = *v325;
        v1431 = sub_18003EC98(v325, 4LL, &v1587);
        v96 = v1431;
        if ( v1431 < 0 )
          break;
        v1431 = sub_18003EC98(v1587, v326, &v1587);
        v96 = v1431;
        if ( v1431 < 0 )
          break;
        v325 = v1587;
        if ( (unsigned int)(v327 + 1) >= 2 )
        {
          v1431 = sub_18003EC98(v1587, 4LL, &v1587);
          v96 = v1431;
          if ( v1431 >= 0 )
          {
            v329 = v1587;
            v1488 = v328;
            if ( !v328 )
              v329 = 0LL;
            v1587 = v329;
            v1585 = v329;
          }
          break;
        }
      }
      if ( v96 < 0 )
        goto LABEL_585;
      v1492 = 4;
      v1431 = sub_18003ECBC(4LL, v318, &v1492);
      v96 = v1431;
      if ( v1431 < 0
        || (v1431 = sub_18003ECBC(v1492, 4LL, &v1492), v96 = v1431, v1431 < 0)
        || (v1431 = sub_18003ECBC(v1492, v330, &v1492), v96 = v1431, v1431 < 0)
        || (v1431 = sub_18003ECBC(v1492, 4LL, &v1492), v96 = v1431, v1431 < 0) )
      {
        v332 = v1493;
      }
      else
      {
        v96 = sub_18003ECBC(v1492, v331, &v1492);
        v1431 = v96;
        v332 = v1493;
        if ( v96 >= 0 )
          v332 = v1492;
        v1493 = v332;
      }
      if ( v96 < 0 )
        goto LABEL_585;
      if ( v332 > 0x400000 )
      {
        v96 = -2147418113;
LABEL_584:
        v1431 = v96;
        goto LABEL_585;
      }
      LODWORD(v1483) = v332;
    }
    else
    {
LABEL_422:
      v96 = -1073741811;
      v1431 = -1073741811;
    }
  }
  if ( v96 < 0 )
    goto LABEL_585;
  v333 = v1483;
  v334 = GetProcessHeap();
  v335 = (int *)HeapAlloc(v334, 8u, v333);
  if ( v335 )
  {
    v336 = v335;
    v1403 = v335;
    v96 = 0x10000000;
  }
  else
  {
    v96 = -805306345;
    v336 = 0LL;
  }
  v1431 = v96;
  if ( v96 < 0 )
    goto LABEL_585;
  if ( !v1801 || !v336 )
  {
    v96 = -2147024809;
    goto LABEL_584;
  }
  v1689[0] = v1801;
  v1690 = HIDWORD(a7);
  v1691 = v1483;
  v1689[1] = v336;
  v1692 = 0;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
  {
    v337 = GetProcAddress(phModule, "NtQuerySystemInformation");
    if ( v337 )
    {
      v338 = ((__int64 (__fastcall *)(__int64, _QWORD *))v337)(134LL, v1689);
      v339 = v1483;
      v96 = v338 | 0x10000000;
      if ( v338 >= 0 )
        v339 = v1691;
      LODWORD(v1483) = v339;
      goto LABEL_445;
    }
  }
  v340 = GetLastError();
  v1431 = v340;
  v96 = v340;
  if ( v340 > 0 )
  {
    v96 = (unsigned __int16)v340 | 0x80070000;
    v1431 = v96;
  }
  v339 = v1483;
  if ( v96 >= 0 )
  {
    v96 = -2147467259;
LABEL_445:
    v1431 = v96;
  }
  if ( v96 != -805306333 )
  {
    if ( v96 < 0 )
      goto LABEL_585;
    Srca = 0LL;
    v1494 = 0;
    v1589 = v336;
    if ( v339 >= 4 )
    {
      v1353 = *v336;
      v341 = sub_18003EC98(v336, 4LL, &v1589);
      if ( v341 < 0 )
        goto LABEL_471;
      v341 = sub_18003ECBC(0LL, 4LL, &v1494);
      if ( v341 < 0 )
        goto LABEL_471;
      if ( v339 - v1494 >= (unsigned int)v342 )
      {
        v1390 = v1589;
        v1433 = v342;
        v341 = sub_18003EC98(v1589, (unsigned int)v342, &v1589);
        if ( v341 < 0 )
          goto LABEL_471;
        v341 = sub_18003ECBC(v1494, v343, &v1494);
        if ( v341 < 0 )
          goto LABEL_471;
        if ( v339 - v1494 >= 4 )
        {
          v344 = *(unsigned int *)v1589;
          v341 = sub_18003EC98(v1589, 4LL, &v1589);
          if ( v341 < 0 )
            goto LABEL_471;
          v341 = sub_18003ECBC(v1494, 4LL, &v1494);
          if ( v341 < 0 )
            goto LABEL_471;
          if ( v339 - v1494 >= (unsigned int)v344 )
          {
            v1363 = v1589;
            v341 = sub_18003EC98(v1589, (unsigned int)v344, &v1589);
            if ( v341 < 0 )
              goto LABEL_471;
            v341 = sub_18003ECBC(v1494, (unsigned int)v344, &v1494);
            if ( v341 < 0 )
              goto LABEL_471;
            if ( v339 - v1494 >= 4 )
            {
              v345 = *(unsigned int *)v1589;
              v341 = sub_18003EC98(v1589, 4LL, &v1589);
              if ( v341 < 0 )
                goto LABEL_471;
              v341 = sub_18003ECBC(v1494, v346, &v1494);
              if ( v341 < 0 )
                goto LABEL_471;
              if ( v339 - v1494 >= (unsigned int)v345 )
              {
                v341 = sub_18003ECBC(v1494, (unsigned int)v345, &v1494);
                if ( v341 < 0 )
                {
LABEL_471:
                  v351 = 0LL;
                  goto LABEL_472;
                }
                if ( v339 == v1494 && (unsigned int)(v344 + v347 + v345) + 12LL == v339 )
                {
                  v348 = GetProcessHeap();
                  v349 = HeapAlloc(v348, 8u, 0x30uLL);
                  v350 = v349;
                  if ( !v349 )
                  {
                    v341 = -1073741801;
LABEL_504:
                    v351 = Srca;
                    v380 = 0LL;
                    if ( v341 < 0 )
                    {
                      v380 = Srca;
                      v351 = 0LL;
                    }
                    v1419 = v351;
                    if ( v380 )
                    {
                      v381 = (void *)*((_QWORD *)v380 + 1);
                      if ( v381 )
                      {
                        v382 = GetProcessHeap();
                        HeapFree(v382, 0, v381);
                        *((_QWORD *)v380 + 1) = 0LL;
                      }
                      v383 = (void *)*((_QWORD *)v380 + 3);
                      if ( v383 )
                      {
                        v384 = GetProcessHeap();
                        HeapFree(v384, 0, v383);
                        *((_QWORD *)v380 + 3) = 0LL;
                      }
                      v385 = (void *)*((_QWORD *)v380 + 5);
                      if ( v385 )
                      {
                        v386 = GetProcessHeap();
                        HeapFree(v386, 0, v385);
                        *((_QWORD *)v380 + 5) = 0LL;
                      }
                      v387 = GetProcessHeap();
                      HeapFree(v387, 0, v380);
                      v351 = v1419;
                    }
LABEL_472:
                    v96 = v341 | 0x10000000;
                    v1431 = v96;
                    if ( v96 < 0 )
                      goto LABEL_585;
                    v1590 = 0LL;
                    v352 = 0LL;
                    v353 = 0;
                    if ( !v351
                      || (v354 = (unsigned __int8 *)*((_QWORD *)v351 + 1), (Srcb = (char *)v354) == 0LL)
                      || !*v351 )
                    {
                      v96 = -805306355;
                      goto LABEL_584;
                    }
                    v355 = *v351;
                    if ( !v355 )
                      goto LABEL_545;
                    v356 = v355 - 8;
                    v1411 = (LPVOID)v356;
                    v1446 = (LPVOID)sub_1800443AC(v356);
                    v357 = (int *)v1446;
                    if ( !v1446 )
                    {
                      v352 = v1590;
                      goto LABEL_545;
                    }
                    v1706 = 0x7F1137FAB69605ELL;
                    v358 = 0;
                    v359 = (char *)v1446;
                    v360 = v354;
                    v1391 = (char *)v1446;
                    v361 = 0;
                    v362 = v356 & 7;
                    if ( (v356 & 7) != 0 )
                    {
                      v1364 = 0;
                      v363 = 0;
                      v364 = 56;
                      do
                      {
                        v365 = *v360++;
                        if ( v361 >= 4 )
                        {
                          v366 = v1364;
                          v363 |= v365 << v364;
                        }
                        else
                        {
                          v366 = (v365 << (v364 - 32)) | v1364;
                          v1364 = v366;
                        }
                        ++v361;
                        v364 -= 8;
                      }
                      while ( v361 < (int)v362 );
                      v1434 = v363;
                      v388 = v366 ^ 0x92F65A5;
                      v389 = v363 ^ 0x699A899C;
                      v390 = v366 ^ 0x92F65A5;
                      v391 = v363 ^ 0x699A899C;
                      v392 = 0;
                      if ( (v356 & 7) != 0 )
                      {
                        v393 = v1446;
                        do
                        {
                          v1391 = v393 + 1;
                          if ( v392 >= 4 )
                          {
                            v391 = __ROL4__(v391, 8);
                            v394 = v391;
                          }
                          else
                          {
                            v390 = __ROL4__(v390, 8);
                            v394 = v390;
                          }
                          *v393 = v394;
                          ++v392;
                          ++v393;
                        }
                        while ( v392 < (int)v362 );
                        v359 = v1391;
                        v358 = 0;
                      }
                      else
                      {
                        v359 = (char *)v1446;
                      }
                      if ( v362 <= 4 )
                      {
                        v361 = 0;
                        if ( v362 >= 4 )
                          goto LABEL_531;
                        v388 = v388 >> (8 * (4 - v362)) << (8 * (4 - v362));
                      }
                      else
                      {
                        v361 = v389 >> (8 * (8 - v362)) << (8 * (8 - v362));
                      }
                      v359 = v1391;
                    }
                    else
                    {
                      v1434 = -1;
                      v388 = 0;
                      v1364 = 0;
                    }
LABEL_531:
                    v395 = v356 >> 3;
                    if ( v356 >> 3 )
                    {
                      v396 = HIDWORD(v1706);
                      v397 = v359 + 7;
                      v398 = v1434;
                      v399 = v360 + 2;
                      v400 = v1364;
                      HIDWORD(a7) = WORD2(v1706);
                      v401 = HIDWORD(v1706) ^ 0xAB69605E;
                      v1398 = WORD1(v1706);
                      do
                      {
                        v402 = *(v399 - 1) | (*(v399 - 2) << 8);
                        v403 = v399[2] << 8;
                        v404 = *v399;
                        v399 += 8;
                        v405 = *(v399 - 7) | ((v404 | (v402 << 8)) << 8);
                        v406 = v405 ^ v388;
                        v407 = *(v399 - 3) | ((*(v399 - 4) | ((*(v399 - 5) | v403) << 8)) << 8);
                        v408 = v396 ^ v406 ^ v407 ^ v361 ^ 0xAB69605E;
                        v409 = (__ROL4__(v408, 10) + HIDWORD(a7) * __ROL4__(v408 + 1419157410, 5)) ^ v406;
                        v410 = (WORD1(v1706) * __ROR4__(v396 + v409, 9) - __ROL4__(v409, 2)) ^ v408;
                        v411 = (24670 * (v410 - HIDWORD(a7)) - (v410 >> 13)) ^ v409;
                        v412 = (HIWORD(v1706) * __ROL4__(WORD1(v1706) ^ v411, 6) - __ROL4__(v411, 2)) ^ v410;
                        v413 = (v396 - (v412 ^ 0xAB69605E)) ^ v411;
                        v414 = (v1398 * (v413 ^ HIDWORD(a7))) ^ __ROR4__(v413, 6) ^ v412;
                        v415 = (__ROL4__(v414, 2) + 24670 * __ROR4__(v396 + v414, 15)) ^ v413;
                        v416 = (HIWORD(v1706) * __ROR4__(v415 + 1419157410, 14) - __ROL4__(v415, 8)) ^ v414;
                        v417 = __ROR4__(v416, 10) ^ (HIDWORD(a7) * __ROR4__(v416 ^ 0xAB69605E, 12)) ^ v415;
                        v418 = (v417 >> 10) ^ (WORD1(v1706) * (HIWORD(v1706) ^ v417)) ^ v416;
                        v419 = (HIWORD(v1706) * (__ROR4__(~v418, 5) + 24670)) ^ v417;
                        v420 = (v419 - HIWORD(v1706)) ^ 0xAB69605E ^ v418;
                        v421 = ((v420 >> 2) + HIDWORD(a7) * __ROL4__(HIWORD(v1706) ^ v420, 2)) ^ v419;
                        v422 = (__ROL4__(v421, 7) + WORD1(v1706) * __ROR4__(v421 - v396, 6)) ^ v420;
                        v423 = (24670 * (v422 ^ HIDWORD(a7)) + __ROR4__(v422, 9)) ^ v421;
                        v424 = (__ROL4__(v423, 7) + HIWORD(v1706) * __ROL4__(WORD1(v1706) ^ v423, 5)) ^ v422;
                        v425 = v424 ^ v401 ^ v423;
                        v426 = (HIDWORD(a7) * (__ROR4__(v425, 3) - WORD1(v1706))) ^ v424;
                        v427 = (24670 * __ROR4__(v426 - v396, 1) - __ROR4__(v426, 6)) ^ v425;
                        v428 = (__ROL4__(v427, 14) + HIWORD(v1706) * __ROL4__(v427 - 1419157410, 3)) ^ v426;
                        v429 = (HIDWORD(a7) * __ROL4__(v428 - 1419157410, 15) - __ROR4__(v428, 14)) ^ v427;
                        v430 = (v429 >> 3) ^ (WORD1(v1706) * (v429 ^ 0x605E)) ^ v428;
                        v431 = v430 ^ v396;
                        v432 = v430;
                        v433 = v398 ^ v430;
                        v398 = v407;
                        v434 = v400 ^ __ROL4__(v432, 2) ^ (24670 * __ROL4__(v431, 4));
                        v400 = v405;
                        v435 = v434 ^ v429;
                        *(v397 - 4) = v435;
                        *v397 = v433;
                        v397 += 8;
                        v436 = __ROR4__(v435, 8);
                        *(v397 - 13) = v436;
                        v437 = __ROR4__(v433, 8);
                        *(v397 - 9) = v437;
                        v438 = __ROR4__(v436, 8);
                        *(v397 - 14) = v438;
                        v439 = __ROR4__(v437, 8);
                        *(v397 - 10) = v439;
                        v440 = __ROR4__(v438, 8);
                        v441 = __ROR4__(v439, 8);
                        *(v397 - 15) = v440;
                        *(v397 - 11) = v441;
                        v361 = __ROR4__(v441, 8);
                        v388 = __ROR4__(v440, 8);
                        --v395;
                      }
                      while ( v395 );
                      v358 = 0;
                      v8 = 0;
                      v356 = (unsigned __int64)v1411;
                      v353 = 0;
                      v357 = (int *)v1446;
                    }
                    for ( n = 0LL; n < v356; ++n )
                      v358 ^= *((_BYTE *)v357 + n);
                    if ( v358 == *(_QWORD *)&Srcb[v356] )
                    {
                      v352 = v357;
                      v1590 = v357;
                      v353 = v356;
                      v357 = 0LL;
                      v443 = 0;
                    }
                    else
                    {
                      v352 = v1590;
                      v443 = -1073425151;
                    }
                    if ( v357 )
                    {
                      sub_18003850C(v357);
                      v352 = v1590;
                    }
                    if ( v443 >= 0 )
                    {
                      v444 = v352;
                      v1590 = 0LL;
                      v1435 = v352;
                      v352 = 0LL;
                      HIDWORD(v1483) = v353;
                      v96 = 0x10000000;
                      goto LABEL_546;
                    }
LABEL_545:
                    v353 = HIDWORD(v1483);
                    v96 = -805306367;
                    v444 = 0LL;
LABEL_546:
                    v1431 = v96;
                    if ( v352 )
                    {
                      v445 = GetProcessHeap();
                      HeapFree(v445, 0, v352);
                      v353 = HIDWORD(v1483);
                      v1590 = 0LL;
                    }
                    if ( v96 < 0 )
                      goto LABEL_585;
                    v1495 = 0;
                    v1593 = v444;
                    if ( v353 >= 4 )
                    {
                      v1392 = *v444;
                      v446 = sub_18003EC98(v444, 4LL, &v1593);
                      if ( v446 < 0 )
                        goto LABEL_583;
                      v446 = sub_18003ECBC(0LL, 4LL, &v1495);
                      if ( v446 < 0 )
                        goto LABEL_583;
                      if ( v353 - v1495 >= 4 )
                      {
                        v446 = sub_18003EC98(v1593, 4LL, &v1593);
                        if ( v446 < 0 )
                          goto LABEL_583;
                        v446 = sub_18003ECBC(v1495, 4LL, &v1495);
                        if ( v446 < 0 )
                          goto LABEL_583;
                        if ( v353 - v1495 >= v447 )
                        {
                          v446 = sub_18003ECBC(v1495, v447, &v1495);
                          if ( v446 < 0 )
                            goto LABEL_583;
                          v449 = v353;
                          v450 = (unsigned int)v448;
                          v451 = (char *)v444 + v449;
                          v452 = v1593;
                          if ( v451 >= (char *)v1593 + v448 && (unsigned __int64)v1435 + v449 - v448 - (_QWORD)v1593 < 8 )
                          {
                            v1354 = 0;
                            v453 = 0LL;
                            v446 = 0;
                            if ( !v1593 )
                            {
LABEL_572:
                              if ( (_DWORD)v448 )
                              {
                                v459 = GetProcessHeap();
                                v453 = HeapAlloc(v459, 8u, v450);
                                if ( !v453 )
                                {
                                  v446 = -1073741801;
                                  goto LABEL_580;
                                }
                                v446 = 0;
                              }
                              if ( v452 )
                                memcpy(v453, v452, v450);
                              LODWORD(v1674[0]) = v1354;
                              v1674[1] = v453;
LABEL_580:
                              if ( v446 < 0 || v1392 == LODWORD(v1674[0]) )
                                goto LABEL_583;
                              goto LABEL_582;
                            }
                            v454 = (unsigned int *)v1593;
                            v446 = sub_18003EC98(v1593, (unsigned int)v448, &v1594);
                            if ( v446 < 0 )
                              goto LABEL_580;
                            v455 = (unsigned int *)v1594;
                            if ( (unsigned __int64)v452 < v1594 )
                            {
                              do
                              {
                                v446 = sub_18003EC98(v454, 4LL, &v1595);
                                if ( v446 < 0 )
                                  goto LABEL_580;
                                if ( v1595 > v456 )
                                  goto LABEL_575;
                                v457 = sub_18003ECBC(4LL, *v454, &v1497);
                                v446 = v457;
                                if ( v457 >= 0 )
                                  v458 = v1497;
                                v1513 = v458;
                                if ( v457 < 0 )
                                  goto LABEL_580;
                                v446 = sub_18003EC98(v454, v458, &v1596);
                                if ( v446 < 0 )
                                  goto LABEL_580;
                                v454 = v1596;
                                if ( v1596 > v455 )
                                  goto LABEL_575;
                                ++v1354;
                              }
                              while ( v1596 < v455 );
                            }
                            if ( v454 == v455 )
                            {
                              v453 = 0LL;
                              goto LABEL_572;
                            }
LABEL_575:
                            v446 = -1073741811;
LABEL_583:
                            v96 = v446 | 0x10000000;
                            goto LABEL_584;
                          }
                        }
                      }
                    }
LABEL_582:
                    v446 = -1073741762;
                    goto LABEL_583;
                  }
                  if ( v1390 )
                  {
                    *(_DWORD *)v349 = v1353;
                    v367 = GetProcessHeap();
                    v368 = HeapAlloc(v367, 8u, v1433);
                    if ( !v368 )
                      goto LABEL_485;
                    v350[1] = v368;
                    memcpy(v368, v1390, v1433);
                  }
                  else
                  {
                    *(_DWORD *)v349 = 0;
                    v349[1] = 0LL;
                  }
                  if ( v1363 )
                  {
                    *((_DWORD *)v350 + 4) = v344;
                    v369 = GetProcessHeap();
                    v370 = HeapAlloc(v369, 8u, v344);
                    if ( !v370 )
                      goto LABEL_485;
                    v350[3] = v370;
                    memcpy(v370, v1363, v344);
                  }
                  else
                  {
                    *((_DWORD *)v350 + 4) = 0;
                    v350[3] = 0LL;
                  }
                  if ( !v1589 )
                  {
                    *((_DWORD *)v350 + 8) = 0;
                    v350[5] = 0LL;
                    goto LABEL_495;
                  }
                  *((_DWORD *)v350 + 8) = v345;
                  v371 = GetProcessHeap();
                  v372 = HeapAlloc(v371, 8u, v345);
                  if ( v372 )
                  {
                    v350[5] = v372;
                    memcpy(v372, v1589, v345);
LABEL_495:
                    Srca = (unsigned int *)v350;
                    v341 = 0;
                    v350 = 0LL;
LABEL_496:
                    if ( v350 )
                    {
                      v373 = (void *)v350[1];
                      if ( v373 )
                      {
                        v374 = GetProcessHeap();
                        HeapFree(v374, 0, v373);
                        v350[1] = 0LL;
                      }
                      v375 = (void *)v350[3];
                      if ( v375 )
                      {
                        v376 = GetProcessHeap();
                        HeapFree(v376, 0, v375);
                        v350[3] = 0LL;
                      }
                      v377 = (void *)v350[5];
                      if ( v377 )
                      {
                        v378 = GetProcessHeap();
                        HeapFree(v378, 0, v377);
                        v350[5] = 0LL;
                      }
                      v379 = GetProcessHeap();
                      HeapFree(v379, 0, v350);
                    }
                    goto LABEL_504;
                  }
LABEL_485:
                  v341 = -1073741801;
                  goto LABEL_496;
                }
              }
            }
          }
        }
      }
    }
    v341 = -1073741762;
    goto LABEL_471;
  }
  v96 = -2147024774;
  v1431 = -2147024774;
LABEL_585:
  if ( v1377 )
  {
    v460 = GetProcessHeap();
    HeapFree(v460, 0, v1377);
  }
  v461 = v1574;
  if ( v1574 )
  {
    v462 = (void *)*((_QWORD *)v1574 + 1);
    if ( v462 )
    {
      v463 = GetProcessHeap();
      HeapFree(v463, 0, v462);
      v461[1] = 0LL;
    }
    v464 = (void *)v461[3];
    if ( v464 )
    {
      v465 = GetProcessHeap();
      HeapFree(v465, 0, v464);
      v461[3] = 0LL;
    }
    v466 = (void *)v461[5];
    if ( v466 )
    {
      v467 = GetProcessHeap();
      HeapFree(v467, 0, v466);
      v461[5] = 0LL;
    }
    v468 = GetProcessHeap();
    HeapFree(v468, 0, v461);
    v1574 = 0LL;
  }
  if ( v1801 )
  {
    v469 = GetProcessHeap();
    HeapFree(v469, 0, v1801);
  }
  if ( v1403 )
  {
    v470 = GetProcessHeap();
    HeapFree(v470, 0, v1403);
  }
  if ( v1419 )
  {
    v471 = (void *)*((_QWORD *)v1419 + 1);
    if ( v471 )
    {
      v472 = GetProcessHeap();
      HeapFree(v472, 0, v471);
      *((_QWORD *)v1419 + 1) = 0LL;
    }
    v473 = (void *)*((_QWORD *)v1419 + 3);
    if ( v473 )
    {
      v474 = GetProcessHeap();
      HeapFree(v474, 0, v473);
      *((_QWORD *)v1419 + 3) = 0LL;
    }
    v475 = (void *)*((_QWORD *)v1419 + 5);
    if ( v475 )
    {
      v476 = GetProcessHeap();
      HeapFree(v476, 0, v475);
      *((_QWORD *)v1419 + 5) = 0LL;
    }
    v477 = GetProcessHeap();
    HeapFree(v477, 0, v1419);
  }
  if ( v1435 )
  {
    v478 = GetProcessHeap();
    HeapFree(v478, 0, v1435);
  }
  if ( v96 < 0 )
    goto LABEL_699;
  if ( !LODWORD(v1674[0]) )
    goto LABEL_706;
  v479 = 4LL;
  if ( v1674[1] )
  {
    v1597 = (int *)v1674[1];
    v1431 = sub_18003EC98(v1674[1], 4LL, &v1597);
    v96 = v1431;
    if ( v1431 < 0 )
    {
      v480 = v1498;
      v481 = v1598;
    }
    else
    {
      v481 = v1597;
      v1498 = v480;
      if ( !v480 )
        v481 = 0LL;
      v1597 = v481;
      v1598 = v481;
    }
    if ( v1431 < 0 )
      goto LABEL_699;
    if ( v480 != (_DWORD)v479 )
      goto LABEL_695;
    v1552 = *v481;
  }
  else
  {
    v96 = -1073741811;
    v1431 = -1073741811;
  }
  if ( v96 < 0 )
    goto LABEL_699;
  v96 = v1552;
  if ( v1552 == -805306333 )
    v96 = -2147024774;
  v1431 = v96;
  v1552 = v96;
  if ( v96 != -2147024774 && v96 < 0 )
    goto LABEL_699;
  if ( LODWORD(v1674[0]) != 6 )
    goto LABEL_706;
  if ( v1674[1] )
  {
    v482 = (int *)v1674[1];
    v483 = 0;
    v1599 = (int *)v1674[1];
    do
    {
      v1431 = sub_18003EC98(v482, v479, &v1599);
      v96 = v1431;
      if ( v1431 < 0 )
        goto LABEL_637;
      v1431 = sub_18003EC98(v1599, v484, &v1599);
      v96 = v1431;
      if ( v1431 < 0 )
        goto LABEL_637;
      v482 = v1599;
      ++v483;
    }
    while ( !v483 );
    v485 = *v1599;
    v1431 = sub_18003EC98(v1599, v479, &v1599);
    v96 = v1431;
    if ( v1431 < 0 )
    {
LABEL_637:
      v485 = v1499;
      v486 = v1600;
      goto LABEL_638;
    }
    v486 = v1599;
    v1499 = v485;
    if ( !v485 )
      v486 = 0LL;
    v1599 = v486;
    v1600 = v486;
LABEL_638:
    if ( v96 < 0 )
      goto LABEL_699;
    if ( v485 != 8 )
      goto LABEL_695;
    v1601 = *(_QWORD *)v486;
  }
  else
  {
    v96 = -1073741811;
    v1431 = -1073741811;
  }
  if ( v96 < 0 )
    goto LABEL_699;
  if ( v1674[1] )
  {
    v487 = (int *)v1674[1];
    v488 = 0;
    v1602 = (int *)v1674[1];
    do
    {
      v1431 = sub_18003EC98(v487, v479, &v1602);
      v96 = v1431;
      if ( v1431 < 0 )
        goto LABEL_652;
      v1431 = sub_18003EC98(v1602, v489, &v1602);
      v96 = v1431;
      if ( v1431 < 0 )
        goto LABEL_652;
      v487 = v1602;
      ++v488;
    }
    while ( v488 < 2 );
    v490 = *v1602;
    v1431 = sub_18003EC98(v1602, v479, &v1602);
    v96 = v1431;
    if ( v1431 < 0 )
    {
LABEL_652:
      v490 = v1500;
      v491 = v1603;
      goto LABEL_653;
    }
    v491 = v1602;
    v1500 = v490;
    if ( !v490 )
      v491 = 0LL;
    v1602 = v491;
    v1603 = v491;
LABEL_653:
    if ( v96 < 0 )
      goto LABEL_699;
    if ( v490 != (_DWORD)v479 )
      goto LABEL_695;
    v1501 = *v491;
  }
  else
  {
    v96 = -1073741811;
    v1431 = -1073741811;
  }
  if ( v96 < 0 )
    goto LABEL_699;
  if ( !v1674[1] )
  {
    v96 = -1073741811;
    goto LABEL_698;
  }
  v492 = v1674[1];
  v493 = 0;
  v1604 = v1674[1];
  do
  {
    v1431 = sub_18003EC98(v492, v479, &v1604);
    v96 = v1431;
    if ( v1431 < 0 )
      goto LABEL_667;
    v1431 = sub_18003EC98(v1604, v494, &v1604);
    v96 = v1431;
    if ( v1431 < 0 )
      goto LABEL_667;
    v492 = v1604;
    ++v493;
  }
  while ( v493 < 3 );
  v1431 = sub_18003EC98(v1604, v479, &v1604);
  v96 = v1431;
  if ( v1431 < 0 )
  {
LABEL_667:
    v496 = v1605;
    goto LABEL_668;
  }
  v496 = v1604;
  v1502 = v495;
  if ( !v495 )
    v496 = 0LL;
  v1604 = v496;
  v1605 = v496;
LABEL_668:
  if ( v96 < 0 )
    goto LABEL_699;
  v497 = (int *)v1674[1];
  v1606 = (int *)v1674[1];
  do
  {
    v1431 = sub_18003EC98(v497, 4LL, &v1606);
    v96 = v1431;
    if ( v1431 < 0 )
    {
      v500 = 4;
      goto LABEL_678;
    }
    v1431 = sub_18003EC98(v1606, v498, &v1606);
    v96 = v1431;
    v500 = 4;
    if ( v1431 < 0 )
      goto LABEL_678;
    v497 = v1606;
  }
  while ( (unsigned int)(v499 + 1) < 4 );
  v1431 = sub_18003EC98(v1606, 4LL, &v1606);
  v96 = v1431;
  if ( v1431 < 0 )
  {
LABEL_678:
    v501 = v1503;
    v502 = v1607;
    goto LABEL_679;
  }
  v502 = v1606;
  v1503 = v501;
  if ( !v501 )
    v502 = 0LL;
  v1606 = v502;
  v1607 = v502;
LABEL_679:
  if ( v96 < 0 )
  {
LABEL_682:
    if ( v96 < 0 )
      goto LABEL_699;
    v503 = (int *)v1674[1];
    v1608 = (int *)v1674[1];
    do
    {
      v504 = *v503;
      v1431 = sub_18003EC98(v503, 4LL, &v1608);
      v96 = v1431;
      if ( v1431 < 0 )
        goto LABEL_691;
      v1431 = sub_18003EC98(v1608, v504, &v1608);
      v96 = v1431;
      if ( v1431 < 0 )
        goto LABEL_691;
      v503 = v1608;
    }
    while ( (unsigned int)(v507 + 1) < 5 );
    v1431 = sub_18003EC98(v1608, 4LL, &v1608);
    v96 = v1431;
    if ( v1431 < 0 )
    {
LABEL_691:
      v508 = v1505;
      v509 = v1609;
      goto LABEL_692;
    }
    v509 = v1608;
    v1505 = v508;
    if ( !v508 )
      v509 = 0LL;
    v1608 = v509;
    v1609 = v509;
LABEL_692:
    if ( v96 < 0 )
    {
      v510 = v1530;
    }
    else
    {
      if ( v508 != 4 )
        goto LABEL_695;
      v510 = *v509;
      v1530 = *v509;
    }
    if ( v96 < 0 )
      goto LABEL_699;
    if ( v1564 == v1601 )
    {
      v1511 = v1501;
      v1512 = v506;
      v1514 = v510;
      if ( v506 <= 4 && v505 <= 4 )
      {
        memcpy(v1387, v496, v505);
        if ( v1552 )
          v96 = v1552;
      }
      else
      {
        v96 = -2147024774;
      }
      goto LABEL_698;
    }
LABEL_706:
    v96 = -1073425151;
    goto LABEL_698;
  }
  if ( v501 == v500 )
  {
    v1504 = *v502;
    goto LABEL_682;
  }
LABEL_695:
  v96 = -1073741789;
LABEL_698:
  v1431 = v96;
LABEL_699:
  v97 = v1339;
LABEL_248:
  Size = 0LL;
  v182 = lpMem;
  if ( lpMem )
  {
    v183 = GetProcessHeap();
    HeapFree(v183, 0, v182);
    lpMem = 0LL;
  }
  v1674[0] = 0LL;
  v184 = v1674[1];
  if ( v1674[1] )
  {
    v185 = GetProcessHeap();
    HeapFree(v185, 0, v184);
    v1674[1] = 0LL;
  }
  if ( v97 )
  {
    v186 = GetProcessHeap();
    HeapFree(v186, 0, v97);
  }
  if ( v1768 )
  {
    v187 = GetProcessHeap();
    HeapFree(v187, 0, v1768);
  }
  if ( v96 < 0 )
    goto LABEL_1667;
  if ( !v1514 )
    goto LABEL_1666;
  v1610 = 0LL;
  dword_1800B4008 = v1514;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    goto LABEL_1276;
  v1446 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30F8[0])(0LL, 0LL, 1027LL);
  if ( !v1446 )
  {
    GetLastError();
    goto LABEL_1276;
  }
  v511 = off_1800B3098[0]();
  v512 = dword_1800B4008;
  qword_1800B4000 = v511;
  v1393 = dword_1800B4008;
  memset(&v1705[14], 0, 0x70uLL);
  v1506 = 1;
  v1412 = 0LL;
  v1675 = 0LL;
  v1727 = 0LL;
  v1725 = 0LL;
  v1728 = 0;
  v1726 = 0LL;
  Srcc = 0LL;
  v1556 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1800B42A8, 1, 0) )
    ;
  v513 = dword_1800B400C;
  if ( dword_1800B400C )
  {
LABEL_753:
    dword_1800B400C = v513 + 1;
    goto LABEL_754;
  }
  v1355 = 0;
  HIDWORD(a7) = 0;
  v1612 = 0LL;
  v1613 = 0LL;
  v514 = sub_1800443AC(824LL);
  v1769 = (const WCHAR *)v514;
  if ( !v514 )
    goto LABEL_743;
  v515 = 103LL;
  v516 = 0;
  v517 = (_BYTE *)(v514 + 7);
  v518 = 0;
  v519 = (unsigned __int8 *)&unk_180096F02;
  v520 = 0;
  v521 = -1;
  do
  {
    v522 = *(v519 - 1) | (*(v519 - 2) << 8);
    v523 = v519[2] << 8;
    v524 = *v519;
    v519 += 8;
    v525 = *(v519 - 7) | ((v524 | (v522 << 8)) << 8);
    v526 = v525 ^ v520;
    v527 = *(v519 - 3) | ((*(v519 - 4) | ((*(v519 - 5) | v523) << 8)) << 8);
    v528 = v527 ^ v518 ^ v526 ^ 0xAC987321;
    v529 = (__ROL4__(v528, 10) + 4991 * __ROL4__(v528 + 1419157410, 5)) ^ v526;
    v530 = (43881 * __ROR4__(v529 + 133239679, 9) - __ROL4__(v529, 2)) ^ v528;
    v531 = (24670 * v530 - (v530 >> 13) - 123127970) ^ v529;
    v532 = (2033 * __ROL4__(v531 ^ 0xAB69, 6) - __ROL4__(v531, 2)) ^ v530;
    v533 = (133239679 - (v532 ^ 0xAB69605E)) ^ v531;
    v534 = (43881 * (v533 ^ 0x137F)) ^ __ROR4__(v533, 6) ^ v532;
    v535 = (__ROL4__(v534, 2) + 24670 * __ROR4__(v534 + 133239679, 15)) ^ v533;
    v536 = (2033 * __ROR4__(v535 + 1419157410, 14) - __ROL4__(v535, 8)) ^ v534;
    v537 = __ROR4__(v536, 10) ^ (4991 * __ROR4__(v536 ^ 0xAB69605E, 12)) ^ v535;
    v538 = v536 ^ (v537 >> 10) ^ (43881 * (v537 ^ 0x7F1));
    v539 = (2033 * (__ROR4__(~v538, 5) + 24670)) ^ v537;
    v540 = v538 ^ (v539 - 2033) ^ 0xAB69605E;
    v541 = ((v540 >> 2) + 4991 * __ROL4__(v538 ^ (v539 - 2033) ^ 0xAB6967AF, 2)) ^ v539;
    v542 = (__ROL4__(v541, 7) + 43881 * __ROR4__(v541 - 133239679, 6)) ^ v540;
    v543 = (24670 * (v542 ^ 0x137F) + __ROR4__(v542, 9)) ^ v541;
    v544 = (__ROL4__(v543, 7) + 2033 * __ROL4__(v543 ^ 0xAB69, 5)) ^ v542;
    v545 = v544 ^ v543 ^ 0xAC987321;
    v546 = (4991 * __ROR4__(v545, 3) - 219010071) ^ v544;
    v547 = (24670 * __ROR4__(v546 - 133239679, 1) - __ROR4__(v546, 6)) ^ v545;
    v548 = (__ROL4__(v547, 14) + 2033 * __ROL4__(v547 - 1419157410, 3)) ^ v546;
    v549 = (4991 * __ROL4__(v548 - 1419157410, 15) - __ROR4__(v548, 14)) ^ v547;
    v550 = (v549 >> 3) ^ (43881 * (v549 ^ 0x605E)) ^ v548;
    v551 = 24670 * __ROL4__(v550 ^ 0x7F1137F, 4);
    v552 = v550;
    v553 = v521 ^ v550;
    v521 = v527;
    v554 = v516 ^ v549 ^ __ROL4__(v552, 2) ^ v551;
    v516 = v525;
    *(v517 - 4) = v554;
    *v517 = v553;
    v517 += 8;
    v555 = __ROR4__(v554, 8);
    *(v517 - 13) = v555;
    v556 = __ROR4__(v553, 8);
    *(v517 - 9) = v556;
    v557 = __ROR4__(v555, 8);
    *(v517 - 14) = v557;
    v558 = __ROR4__(v556, 8);
    *(v517 - 10) = v558;
    v559 = __ROR4__(v557, 8);
    v560 = __ROR4__(v558, 8);
    *(v517 - 15) = v559;
    *(v517 - 11) = v560;
    v518 = __ROR4__(v560, 8);
    v520 = __ROR4__(v559, 8);
    --v515;
  }
  while ( v515 );
  v561 = 0;
  v8 = 0;
  v512 = v1393;
  v562 = 0LL;
  v96 = v1431;
  v563 = 0;
  v564 = (WCHAR *)v1769;
  do
    v561 ^= *((_BYTE *)v1769 + v562++);
  while ( v562 < 0x338 );
  if ( v561 == 64LL )
  {
    v1612 = v1769;
    v565 = 0;
    v564 = 0LL;
    v1613 = 824LL;
  }
  else
  {
    v565 = -1073425151;
  }
  if ( v564 )
    sub_18003850C(v564);
  if ( v565 >= 0 )
  {
    v566 = v1612;
    HIBYTE(v1612[v1613 / 2 - 1]) = 0;
    memset(&unk_1800B4230, 0, 0x60uLL);
    while ( *(_BYTE *)v566 )
    {
      v567 = v566;
      v568 = -1LL;
      do
        ++v568;
      while ( v566[v568] );
      v569 = &v566[v568];
      v1770 = (char *)&unk_1800B4230 + 24 * HIDWORD(a7);
      if ( !GetModuleHandleExW(0, v567, (HMODULE *)v1770) )
        goto LABEL_743;
      v570 = (HMODULE *)v1770;
      v563 = 0;
      if ( **(_WORD **)v1770 == 23117
        && (v571 = *(int *)(*(_QWORD *)v1770 + 60LL), (unsigned int)v571 < 0x10000000)
        && (v572 = *(_QWORD *)v1770 + v571, v572 >= *(_QWORD *)v1770)
        && *(_DWORD *)v572 == 17744 )
      {
        if ( ((*(_WORD *)(v572 + 24) - 267) & 0xFEFF) != 0 )
        {
          v563 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v1770 + 12) = *(_QWORD *)(v572 + 136);
          *((_DWORD *)v1770 + 2) = *(_DWORD *)(v572 + 80);
        }
      }
      else
      {
        v563 = -1073741701;
      }
      v573 = *(_DWORD *)(v569 + 1);
      v574 = 0;
      v566 = v569 + 3;
      v1365 = v573;
      for ( ii = 0; v574 < v1365; ii = v574 )
      {
        v575 = (const CHAR *)v566;
        v576 = -1LL;
        do
          ++v576;
        while ( *((_BYTE *)v566 + v576) );
        v566 = (LPCWSTR)((char *)v566 + v576 + 1);
        if ( v563 >= 0 )
        {
          v577 = GetProcAddress(*v570, v575);
          if ( !v577 )
            goto LABEL_744;
          v570 = (HMODULE *)v1770;
          off_1800B3000[v1355] = v577;
          v574 = ii;
        }
        ++v1355;
        ++v574;
      }
      ++HIDWORD(a7);
    }
  }
  else
  {
LABEL_743:
    v563 = -1073741702;
  }
LABEL_744:
  if ( v1612 )
  {
    v578 = GetProcessHeap();
    HeapFree(v578, 0, (LPVOID)v1612);
  }
  if ( v563 >= 0 )
  {
    v513 = dword_1800B400C;
    goto LABEL_753;
  }
  v579 = (HMODULE *)&unk_1800B4230;
  v580 = 4LL;
  do
  {
    if ( *v579 )
      FreeLibrary(*v579);
    v579 += 3;
    --v580;
  }
  while ( v580 );
  memset(&unk_1800B4230, 0, 0x60uLL);
  memcpy(off_1800B3000, off_18008E410, 0x170uLL);
LABEL_754:
  v1356 = 0;
  _InterlockedExchange(&dword_1800B42A8, 0);
  v1614 = 0LL;
  v1684 = 0LL;
  v1366 = 0;
  v1771 = 0LL;
  v1340 = 0LL;
  v1378 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1800B42A8, 1, 0) )
    ;
  v581 = dword_1800B400C;
  if ( dword_1800B400C )
    goto LABEL_800;
  HIDWORD(a7) = 0;
  v1399 = 0;
  v1615 = 0LL;
  v1616 = 0LL;
  v582 = sub_1800443AC(824LL);
  v1802 = (const WCHAR *)v582;
  if ( !v582 )
    goto LABEL_790;
  v583 = 103LL;
  v584 = 0;
  v585 = (_BYTE *)(v582 + 7);
  v586 = 0;
  v587 = (unsigned __int8 *)&unk_180096F02;
  v588 = 0;
  v589 = -1;
  do
  {
    v590 = *(v587 - 1) | (*(v587 - 2) << 8);
    v591 = v587[2] << 8;
    v592 = *v587;
    v587 += 8;
    v593 = *(v587 - 7) | ((v592 | (v590 << 8)) << 8);
    v594 = v593 ^ v588;
    v595 = *(v587 - 3) | ((*(v587 - 4) | ((*(v587 - 5) | v591) << 8)) << 8);
    v596 = v594 ^ v586 ^ v595 ^ 0xAC987321;
    v597 = (__ROL4__(v596, 10) + 4991 * __ROL4__(v596 + 1419157410, 5)) ^ v594;
    v598 = (43881 * __ROR4__(v597 + 133239679, 9) - __ROL4__(v597, 2)) ^ v596;
    v599 = (24670 * v598 - (v598 >> 13) - 123127970) ^ v597;
    v600 = (2033 * __ROL4__(v599 ^ 0xAB69, 6) - __ROL4__(v599, 2)) ^ v598;
    v601 = (133239679 - (v600 ^ 0xAB69605E)) ^ v599;
    v602 = (43881 * (v601 ^ 0x137F)) ^ __ROR4__(v601, 6) ^ v600;
    v603 = (__ROL4__(v602, 2) + 24670 * __ROR4__(v602 + 133239679, 15)) ^ v601;
    v604 = (2033 * __ROR4__(v603 + 1419157410, 14) - __ROL4__(v603, 8)) ^ v602;
    v605 = __ROR4__(v604, 10) ^ (4991 * __ROR4__(v604 ^ 0xAB69605E, 12)) ^ v603;
    v606 = (v605 >> 10) ^ (43881 * (v605 ^ 0x7F1)) ^ v604;
    v607 = (2033 * (__ROR4__(~v606, 5) + 24670)) ^ v605;
    v608 = v606 ^ (v607 - 2033) ^ 0xAB69605E;
    v609 = ((v608 >> 2) + 4991 * __ROL4__(v606 ^ (v607 - 2033) ^ 0xAB6967AF, 2)) ^ v607;
    v610 = (__ROL4__(v609, 7) + 43881 * __ROR4__(v609 - 133239679, 6)) ^ v608;
    v611 = (24670 * (v610 ^ 0x137F) + __ROR4__(v610, 9)) ^ v609;
    v612 = (__ROL4__(v611, 7) + 2033 * __ROL4__(v611 ^ 0xAB69, 5)) ^ v610;
    v613 = v612 ^ v611 ^ 0xAC987321;
    v614 = (4991 * __ROR4__(v613, 3) - 219010071) ^ v612;
    v615 = (24670 * __ROR4__(v614 - 133239679, 1) - __ROR4__(v614, 6)) ^ v613;
    v616 = (__ROL4__(v615, 14) + 2033 * __ROL4__(v615 - 1419157410, 3)) ^ v614;
    v617 = (4991 * __ROL4__(v616 - 1419157410, 15) - __ROR4__(v616, 14)) ^ v615;
    v618 = (v617 >> 3) ^ (43881 * (v617 ^ 0x605E)) ^ v616;
    v619 = 24670 * __ROL4__(v618 ^ 0x7F1137F, 4);
    v620 = v618;
    v621 = v589 ^ v618;
    v589 = v595;
    v622 = v584 ^ __ROL4__(v620, 2) ^ v619;
    v584 = v593;
    v623 = v622 ^ v617;
    *(v585 - 4) = v623;
    *v585 = v621;
    v585 += 8;
    v624 = __ROR4__(v623, 8);
    *(v585 - 13) = v624;
    v625 = __ROR4__(v621, 8);
    *(v585 - 9) = v625;
    v626 = __ROR4__(v624, 8);
    *(v585 - 14) = v626;
    v627 = __ROR4__(v625, 8);
    *(v585 - 10) = v627;
    v628 = __ROR4__(v626, 8);
    v629 = __ROR4__(v627, 8);
    *(v585 - 15) = v628;
    *(v585 - 11) = v629;
    v586 = __ROR4__(v629, 8);
    v588 = __ROR4__(v628, 8);
    --v583;
  }
  while ( v583 );
  v630 = 0;
  v8 = 0;
  v512 = v1393;
  v631 = 0LL;
  v96 = v1431;
  v632 = 0;
  v633 = (WCHAR *)v1802;
  do
    v630 ^= *((_BYTE *)v1802 + v631++);
  while ( v631 < 0x338 );
  if ( v630 == 64LL )
  {
    v1615 = v1802;
    v634 = 0;
    v633 = 0LL;
    v1616 = 824LL;
  }
  else
  {
    v634 = -1073425151;
  }
  if ( v633 )
    sub_18003850C(v633);
  if ( v634 >= 0 )
  {
    v635 = v1615;
    HIBYTE(v1615[v1616 / 2 - 1]) = 0;
    memset(&unk_1800B4230, 0, 0x60uLL);
    while ( *(_BYTE *)v635 )
    {
      v636 = v635;
      v637 = -1LL;
      do
        ++v637;
      while ( v635[v637] );
      v638 = &v635[v637];
      v1803 = (char *)&unk_1800B4230 + 24 * v1399;
      if ( !GetModuleHandleExW(0, v636, (HMODULE *)v1803) )
        goto LABEL_790;
      v639 = (HMODULE *)v1803;
      v632 = 0;
      if ( **(_WORD **)v1803 == 23117
        && (v640 = *(int *)(*(_QWORD *)v1803 + 60LL), (unsigned int)v640 < 0x10000000)
        && (v641 = *(_QWORD *)v1803 + v640, v641 >= *(_QWORD *)v1803)
        && *(_DWORD *)v641 == 17744 )
      {
        if ( ((*(_WORD *)(v641 + 24) - 267) & 0xFEFF) != 0 )
        {
          v632 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v1803 + 12) = *(_QWORD *)(v641 + 136);
          *((_DWORD *)v1803 + 2) = *(_DWORD *)(v641 + 80);
        }
      }
      else
      {
        v632 = -1073741701;
      }
      v642 = *(_DWORD *)(v638 + 1);
      v643 = 0;
      v635 = v638 + 3;
      v1436 = v642;
      for ( jj = 0; v643 < v1436; jj = v643 )
      {
        v644 = (const CHAR *)v635;
        v645 = -1LL;
        do
          ++v645;
        while ( *((_BYTE *)v635 + v645) );
        v635 = (LPCWSTR)((char *)v635 + v645 + 1);
        if ( v632 >= 0 )
        {
          v646 = GetProcAddress(*v639, v644);
          if ( !v646 )
            goto LABEL_791;
          v639 = (HMODULE *)v1803;
          off_1800B3000[HIDWORD(a7)] = v646;
          v643 = jj;
        }
        ++HIDWORD(a7);
        ++v643;
      }
      ++v1399;
    }
  }
  else
  {
LABEL_790:
    v632 = -1073741702;
  }
LABEL_791:
  if ( v1615 )
  {
    v647 = GetProcessHeap();
    HeapFree(v647, 0, (LPVOID)v1615);
  }
  if ( v632 >= 0 )
  {
    v581 = dword_1800B400C;
LABEL_800:
    dword_1800B400C = v581 + 1;
    goto LABEL_801;
  }
  v648 = (HMODULE *)&unk_1800B4230;
  v649 = 4LL;
  do
  {
    if ( *v648 )
      FreeLibrary(*v648);
    v648 += 3;
    --v649;
  }
  while ( v649 );
  memset(&unk_1800B4230, 0, 0x60uLL);
  memcpy(off_1800B3000, off_18008E410, 0x170uLL);
LABEL_801:
  _InterlockedExchange(&dword_1800B42A8, 0);
  v1437 = v512 & 0xF;
  v1756[0] = (v512 >> 4) & 0xF;
  v1756[1] = (v512 >> 8) & 0xF;
  v1675 = 0LL;
  v1756[2] = (v512 >> 12) & 0xF;
  v1804 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30F8[0])(0LL, 0LL, 1027LL);
  v1395 = -1;
  if ( v1804 )
  {
    v1617 = 0LL;
    v1618 = 0LL;
    v652 = 0LL;
    v1619 = 0LL;
    v1620 = 0LL;
    v651 = 0;
    v1621 = 0LL;
    v1622 = 0LL;
    v1508 = 0;
    if ( ((unsigned int (__fastcall *)(__int64, _DWORD *, _QWORD, unsigned int *))off_1800B30A0[0])(
           8LL,
           v1509,
           0LL,
           &v1508) )
    {
      v653 = sub_1800443AC(2LL * v1508);
      sub_180085AB4(&v1621);
      if ( !v653 )
      {
        v1621 = 0LL;
        v651 = -2147024882;
        goto LABEL_824;
      }
      v1621 = v653;
      v1404 = (_DWORD *)sub_1800443AC(4LL * (unsigned int)(v1509[0] + 1));
      sub_180085AB4(&v1622);
      if ( !v1404 )
      {
        v651 = -2147024882;
LABEL_823:
        v1622 = 0LL;
        goto LABEL_824;
      }
      v1622 = v1404;
      if ( ((unsigned int (__fastcall *)(__int64, _DWORD *, __int64, unsigned int *))off_1800B30A0[0])(
             8LL,
             v1509,
             v653,
             &v1508) )
      {
        v655 = v1404;
        v656 = v1404;
        if ( v1509[0] )
        {
          v657 = 0;
          do
          {
            *v656 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800B30B0[0])(v653, 0LL);
            v658 = -1LL;
            do
              ++v658;
            while ( *(_WORD *)(v653 + 2 * v658) );
            ++v656;
            v653 += 2 * v658 + 2;
            ++v657;
          }
          while ( v657 < v1509[0] );
          v96 = v1431;
          v655 = v1404;
        }
        *v656 = 1033;
        v652 = v655;
        v1617 = v655;
        HIDWORD(a7) = v1509[0] + 1;
        goto LABEL_823;
      }
    }
    v654 = GetLastError();
    v651 = v654;
    if ( v654 > 0 )
      v651 = (unsigned __int16)v654 | 0x80070000;
    if ( v651 >= 0 )
      v651 = -2147467259;
LABEL_824:
    sub_180085AB4(&v1622);
    sub_180085AB4(&v1621);
    if ( v651 >= 0 )
    {
      v659 = 0;
      v660 = 0;
      v1373 = 0;
      if ( HIDWORD(a7) )
      {
        v661 = 0LL;
        while ( 2 )
        {
          v662 = 0;
          v663 = dword_1800A58F0;
          do
          {
            if ( v652[v661] == *v663 )
            {
              v659 = v662;
              v1373 = v662;
              goto LABEL_833;
            }
            ++v662;
            ++v663;
          }
          while ( v662 < 0x26 );
          ++v660;
          ++v661;
          if ( v660 < HIDWORD(a7) )
            continue;
          break;
        }
      }
LABEL_833:
      v664 = v659;
      v1762 = 0;
      if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1800B30A8[0])(dword_1800A58F0[v659], v1757, 85LL)
        && ((int (__fastcall *)(_BYTE *, __int64, char *))off_1800B3090[0])(v1757, 88LL, v1717) > 0 )
      {
        v1762 = (v1718 >> 27) & 1;
      }
      v665 = L"Segoe UI Light";
      v666 = 19LL;
      v667 = (const wchar_t **)v1755;
      do
      {
        *v667 = v665;
        v668 = -1LL;
        do
          ++v668;
        while ( v665[v668] );
        ++v667;
        v665 += v668 + 1;
        --v666;
      }
      while ( v666 );
      v1771 = (LPVOID)v1755[*((unsigned __int8 *)&unk_180097810 + 3 * v664)];
      v1340 = v1755[(unsigned __int8)byte_180097811[3 * v664]];
      v1378 = (LPVOID)v1755[(unsigned __int8)byte_180097812[3 * v664]];
      v669 = sub_1800443AC(7312LL);
      v1405 = (char *)v669;
      if ( v669 )
      {
        v670 = (_BYTE *)(v669 + 7);
        v671 = 0;
        v672 = (unsigned __int8 *)&unk_1800A3C52;
        v673 = 0;
        v674 = 0;
        v675 = -1;
        v676 = 914LL;
        do
        {
          v677 = *(v672 - 1) | (*(v672 - 2) << 8);
          v678 = v672[2] << 8;
          v679 = *v672;
          v672 += 8;
          v680 = *(v672 - 7) | ((v679 | (v677 << 8)) << 8);
          v681 = v680 ^ v673;
          v682 = *(v672 - 3) | ((*(v672 - 4) | ((*(v672 - 5) | v678) << 8)) << 8);
          v683 = v681 ^ v682 ^ v671 ^ 0xAC987321;
          v684 = (__ROL4__(v683, 10) + 4991 * __ROL4__(v683 + 1419157410, 5)) ^ v681;
          v685 = (43881 * __ROR4__(v684 + 133239679, 9) - __ROL4__(v684, 2)) ^ v683;
          v686 = (24670 * v685 - (v685 >> 13) - 123127970) ^ v684;
          v687 = (2033 * __ROL4__(v686 ^ 0xAB69, 6) - __ROL4__(v686, 2)) ^ v685;
          v688 = (133239679 - (v687 ^ 0xAB69605E)) ^ v686;
          v689 = (43881 * (v688 ^ 0x137F)) ^ __ROR4__(v688, 6) ^ v687;
          v690 = (__ROL4__(v689, 2) + 24670 * __ROR4__(v689 + 133239679, 15)) ^ v688;
          v691 = (2033 * __ROR4__(v690 + 1419157410, 14) - __ROL4__(v690, 8)) ^ v689;
          v692 = __ROR4__(v691, 10) ^ (4991 * __ROR4__(v691 ^ 0xAB69605E, 12)) ^ v690;
          v693 = (v692 >> 10) ^ (43881 * (v692 ^ 0x7F1)) ^ v691;
          v694 = (2033 * (__ROR4__(~v693, 5) + 24670)) ^ v692;
          v695 = v693 ^ (v694 - 2033) ^ 0xAB69605E;
          v696 = ((v695 >> 2) + 4991 * __ROL4__(v693 ^ (v694 - 2033) ^ 0xAB6967AF, 2)) ^ v694;
          v697 = (__ROL4__(v696, 7) + 43881 * __ROR4__(v696 - 133239679, 6)) ^ v695;
          v698 = (24670 * (v697 ^ 0x137F) + __ROR4__(v697, 9)) ^ v696;
          v699 = (__ROL4__(v698, 7) + 2033 * __ROL4__(v698 ^ 0xAB69, 5)) ^ v697;
          v700 = v699 ^ v698 ^ 0xAC987321;
          v701 = (4991 * __ROR4__(v700, 3) - 219010071) ^ v699;
          v702 = (24670 * __ROR4__(v701 - 133239679, 1) - __ROR4__(v701, 6)) ^ v700;
          v703 = (__ROL4__(v702, 14) + 2033 * __ROL4__(v702 - 1419157410, 3)) ^ v701;
          v704 = (4991 * __ROL4__(v703 - 1419157410, 15) - __ROR4__(v703, 14)) ^ v702;
          v705 = (v704 >> 3) ^ (43881 * (v704 ^ 0x605E)) ^ v703;
          v706 = 24670 * __ROL4__(v705 ^ 0x7F1137F, 4);
          v707 = v705;
          v708 = v675 ^ v705;
          v675 = v682;
          v709 = v674 ^ __ROL4__(v707, 2) ^ v706;
          v674 = v680;
          v710 = v709 ^ v704;
          *(v670 - 4) = v710;
          *v670 = v708;
          v670 += 8;
          v711 = __ROR4__(v710, 8);
          *(v670 - 13) = v711;
          v712 = __ROR4__(v708, 8);
          *(v670 - 9) = v712;
          v713 = __ROR4__(v711, 8);
          *(v670 - 14) = v713;
          v714 = __ROR4__(v712, 8);
          *(v670 - 10) = v714;
          v715 = __ROR4__(v713, 8);
          v716 = __ROR4__(v714, 8);
          *(v670 - 15) = v715;
          *(v670 - 11) = v716;
          v671 = __ROR4__(v716, 8);
          v673 = __ROR4__(v715, 8);
          --v676;
        }
        while ( v676 );
        v96 = v1431;
        v8 = 0;
        v651 = 0;
        v717 = 0LL;
        v718 = v1405;
        v719 = 0LL;
        do
        {
          v720 = _mm_loadu_si128((const __m128i *)&v1405[v717]);
          v717 += 16LL;
          v721 = _mm_xor_si128(v720, v719);
          v719 = v721;
        }
        while ( v717 < 0x1C90 );
        v722 = _mm_xor_si128(v721, _mm_srli_si128(v721, 8));
        v723 = _mm_xor_si128(v722, _mm_srli_si128(v722, 4));
        v724 = _mm_xor_si128(v723, _mm_srli_si128(v723, 2));
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v724, _mm_srli_si128(v724, 1))) == 127LL )
        {
          v1618 = v1405;
          v718 = 0LL;
          v1619 = 7312LL;
        }
        else
        {
          v651 = -1073425151;
        }
        if ( v718 )
          sub_18003850C(v718);
        if ( v651 >= 0 )
        {
          v725 = v1618;
          v726 = v1749;
          v727 = 6LL;
          do
          {
            for ( kk = 0; kk < 0x26; ++kk )
            {
              if ( v1373 == kk )
                *v726 = v725;
              v729 = -1LL;
              do
                ++v729;
              while ( v725[v729] );
              v725 += v729 + 1;
            }
            ++v726;
            --v727;
          }
          while ( v727 );
          v730 = sub_1800443AC(24LL);
          sub_180085AB4(&v1620);
          if ( v730 )
          {
            v1388 = 0;
            v731 = (void **)v730;
            v732 = v1756;
            v1620 = v730;
            v733 = (_QWORD *)v730;
            v1374 = v1756;
            *(_OWORD *)v730 = 0LL;
            *(_QWORD *)(v730 + 16) = 0LL;
            v734 = 0;
            v1406 = (_QWORD *)v730;
            while ( 2 )
            {
              v735 = *v732;
              v736 = &unk_1800A5988;
              v737 = 0LL;
              while ( v735 != *v736 )
              {
                v737 = (unsigned int)(v737 + 1);
                ++v736;
                if ( (unsigned int)v737 >= 6 )
                  goto LABEL_875;
              }
              v738 = v1749[v737];
              v739 = -1LL;
              v1400 = v738;
              do
                ++v739;
              while ( *(_BYTE *)(v738 + v739) );
              LODWORD(retaddr) = 0;
              v740 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD))off_1800B30C0[0])(
                       65001LL,
                       0LL,
                       v738,
                       (unsigned int)(v739 + 1),
                       0LL);
              v1420 = v740;
              if ( !v740 )
                goto LABEL_878;
              v741 = sub_1800443AC(2LL * v740);
              *v1406 = v741;
              if ( !v741 )
              {
                v651 = -2147024882;
                goto LABEL_882;
              }
              v742 = -1LL;
              do
                ++v742;
              while ( *(_BYTE *)(v1400 + v742) );
              LODWORD(retaddr) = v1420;
              if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64))off_1800B30C0[0])(
                      65001LL,
                      0LL,
                      v1400,
                      (unsigned int)(v742 + 1),
                      v741) )
              {
LABEL_878:
                v743 = GetLastError();
                v651 = v743;
                if ( v743 > 0 )
                  v651 = (unsigned __int16)v743 | 0x80070000;
                if ( v651 >= 0 )
                  v651 = -2147467259;
                goto LABEL_882;
              }
              v733 = v1406;
              v734 = v1388;
LABEL_875:
              ++v734;
              v732 = v1374 + 1;
              v1388 = v734;
              ++v733;
              ++v1374;
              v1406 = v733;
              if ( v734 < 3 )
                continue;
              break;
            }
            v731 = 0LL;
            v1620 = 0LL;
            v1614 = (_QWORD *)v730;
            LODWORD(v1705[14]) = v1762;
          }
          else
          {
            v731 = 0LL;
            v651 = -2147024882;
            v1620 = 0LL;
          }
LABEL_882:
          if ( v731 )
          {
            v744 = 3LL;
            do
            {
              v745 = *v731;
              if ( *v731 )
              {
                v746 = -1LL;
                do
                  ++v746;
                while ( v745[v746] );
                memset(v745, 0, 2 * v746 + 2);
                sub_18003850C(*v731);
                v744 = v1786;
              }
              ++v731;
              v1786 = --v744;
            }
            while ( v744 );
          }
        }
      }
      else
      {
        v651 = -2147024882;
      }
    }
    if ( v1618 )
      memset(v1618, 0, v1619);
    sub_180085AB4(&v1620);
    sub_180085AB4(&v1618);
    sub_180085AB4(&v1617);
    if ( v651 < 0 )
      goto LABEL_993;
    v747 = 0;
    v651 = 0;
    v1705[15] = *v1614;
    v1705[16] = v1614[1];
    v1705[17] = v1614[2];
    v1685 = 0LL;
    LODWORD(v1685) = 16;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1800B3168)(
                         66LL,
                         0LL,
                         &v1685,
                         0LL) )
    {
      v747 = BYTE4(v1685) & 1;
    }
    else
    {
      v748 = GetLastError();
      v651 = v748;
      if ( v748 > 0 )
        v651 = (unsigned __int16)v748 | 0x80070000;
      if ( v651 >= 0 )
        v651 = -2147467259;
    }
    HIDWORD(v1705[14]) = v747;
    if ( v651 < 0 )
      goto LABEL_993;
    if ( v1437 == 1 )
    {
      v1356 = 42;
    }
    else
    {
      if ( v1437 != 2 )
      {
        if ( v1437 == 3 )
        {
          v1356 = 225;
          v1366 = 225;
        }
        goto LABEL_906;
      }
      v1356 = 15;
    }
    v1366 = 11;
LABEL_906:
    v749 = 96;
    v1421 = 96;
    memset(v1748, 0, 0xDCuLL);
    LOWORD(v1748[17]) = 220;
    if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _DWORD *))off_1800B30E0[0])(0LL, 0xFFFFFFFFLL, v1748) )
    {
      v749 = HIWORD(v1748[41]);
      *((_QWORD *)&v1684 + 1) = *(_QWORD *)&v1748[43];
      if ( HIWORD(v1748[41]) < 0x60u )
        v749 = 96;
      v1421 = v749;
    }
    v750 = (__int64)v1771;
    if ( v1437 != 1 )
      v750 = (__int64)v1378;
    memset(v1745, 0, 0x5CuLL);
    v651 = 0;
    v1787 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30F8[0])(0LL, 0LL, 1027LL);
    if ( !v1787 )
      goto LABEL_918;
    v751 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8[0])(v1356, v749, 72LL);
    v1745[4] = 400;
    BYTE2(v1745[6]) = 5;
    v1745[0] = -v751;
    sub_180026C20(&v1745[7], 32LL, v750);
    v752 = ((__int64 (__fastcall *)(_DWORD *))off_1800B3020[0])(v1745);
    if ( v752 )
    {
      v1705[18] = v752;
    }
    else
    {
      v753 = GetLastError();
      v651 = v753;
      if ( v753 > 0 )
        v651 = (unsigned __int16)v753 | 0x80070000;
      if ( v651 >= 0 )
        v651 = -2147467259;
    }
    ((void (__fastcall *)(_QWORD, SIZE_T))off_1800B3160[0])(0LL, v1787);
    if ( v651 < 0 )
      goto LABEL_993;
    v755 = v1771;
    if ( v1437 != 1 )
      v755 = v1378;
    v1772 = v755;
    memset(v1746, 0, 0x5CuLL);
    v651 = 0;
    v756 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30F8[0])(0LL, 0LL, 1027LL);
    if ( !v756 )
      goto LABEL_918;
    v757 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8[0])(v1366, v749, 72LL);
    v1746[4] = 400;
    v1746[0] = -v757;
    BYTE2(v1746[6]) = 5;
    sub_180026C20(&v1746[7], 32LL, (__int64)v1772);
    v758 = ((__int64 (__fastcall *)(_DWORD *))off_1800B3020[0])(v1746);
    if ( v758 )
    {
      v1705[19] = v758;
    }
    else
    {
      v759 = GetLastError();
      v651 = v759;
      if ( v759 > 0 )
        v651 = (unsigned __int16)v759 | 0x80070000;
      if ( v651 >= 0 )
        v651 = -2147467259;
    }
    ((void (__fastcall *)(_QWORD, __int64))off_1800B3160[0])(0LL, v756);
    if ( v651 < 0 )
      goto LABEL_993;
    v760 = 0;
    v761 = 0;
    if ( v1437 != 1 )
    {
      if ( v1437 == 2 )
      {
        v761 = 0;
        v760 = SDWORD2(v1684) / 4;
LABEL_938:
        *((_QWORD *)&v1675 + 1) = __PAIR64__(v761, v760);
        if ( v1437 == 1 )
        {
          v762 = 150;
          v1763 = 32;
        }
        else
        {
          if ( (unsigned int)(v1437 - 2) > 1 )
          {
            v1763 = 42;
            v763 = 42;
            v762 = 42;
LABEL_945:
            v1357 = v762;
            v1367 = v763;
            v764 = v760 - v762 - v763;
            v651 = 0;
            v765 = v1705[15];
            HIDWORD(v1705[24]) = v764;
            HIDWORD(v1705[22]) = v764;
            retaddr = 0LL;
            v1773 = (LPVOID)((__int64 (__fastcall *)(LPVOID, _QWORD))off_1800B3078[0])(v1804, v1705[18]);
            if ( !((unsigned int (__fastcall *)(LPVOID, __int64, __int64, char *, int))off_1800B30D8[0])(
                    v1804,
                    v765,
                    0xFFFFFFFFLL,
                    (char *)&v1705[21] + 4,
                    3152) )
              v651 = -2147467259;
            if ( v1773 )
              ((void (__fastcall *)(LPVOID, LPVOID))off_1800B3078[0])(v1804, v1773);
            if ( v651 < 0 )
              goto LABEL_993;
            v651 = 0;
            v766 = v1705[16];
            retaddr = 0LL;
            v1774 = (LPVOID)((__int64 (__fastcall *)(LPVOID, _QWORD))off_1800B3078[0])(v1804, v1705[19]);
            if ( !((unsigned int (__fastcall *)(LPVOID, __int64, __int64, char *, int))off_1800B30D8[0])(
                    v1804,
                    v766,
                    0xFFFFFFFFLL,
                    (char *)&v1705[23] + 4,
                    3152) )
              v651 = -2147467259;
            if ( v1774 )
              ((void (__fastcall *)(LPVOID, LPVOID))off_1800B3078[0])(v1804, v1774);
            if ( v651 < 0 )
              goto LABEL_993;
            if ( (unsigned int)(v1437 - 2) <= 1 )
            {
              v764 = HIDWORD(v1705[24]);
              if ( SHIDWORD(v1705[22]) > SHIDWORD(v1705[24]) )
                v764 = HIDWORD(v1705[22]);
            }
            if ( LODWORD(v1705[14]) )
            {
              off_1800B3150();
              v767 = (unsigned int)(v764 + v1367 - HIDWORD(v1705[24]));
            }
            else
            {
              off_1800B3150();
              v767 = v1357;
            }
            ((void (__fastcall *)(char *, __int64, _QWORD))off_1800B3150)(
              (char *)&v1705[23] + 4,
              v767,
              (unsigned int)(v1763 + LODWORD(v1705[23])));
            if ( (unsigned int)(v1437 - 2) <= 1 )
            {
              *((_QWORD *)&v1675 + 1) = __PAIR64__(v1705[25], v764);
              LODWORD(v1705[21]) = -5723992;
              goto LABEL_980;
            }
            if ( v1437 != 1 )
              goto LABEL_980;
            LODWORD(v1705[21]) = 0xFFFFFF;
            memset(v1747, 0, 0x5CuLL);
            v651 = 0;
            v768 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30F8[0])(0LL, 0LL, 1027LL);
            if ( v768 )
            {
              v769 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800B30B8[0])(11LL, v1421);
              v1747[4] = 400;
              v1747[0] = -v769;
              BYTE2(v1747[6]) = 5;
              sub_180026C20(&v1747[7], 32LL, v1340);
              v770 = ((__int64 (__fastcall *)(_DWORD *))off_1800B3020[0])(v1747);
              if ( v770 )
              {
                v1705[20] = v770;
              }
              else
              {
                v771 = GetLastError();
                v651 = v771;
                if ( v771 > 0 )
                  v651 = (unsigned __int16)v771 | 0x80070000;
                if ( v651 >= 0 )
                  v651 = -2147467259;
              }
              ((void (__fastcall *)(_QWORD, __int64))off_1800B3160[0])(0LL, v768);
              if ( v651 < 0 )
                goto LABEL_993;
              v651 = 0;
              v772 = v1705[17];
              HIDWORD(v1705[26]) = v764;
              retaddr = 0LL;
              v773 = ((__int64 (__fastcall *)(LPVOID, _QWORD))off_1800B3078[0])(v1804, v1705[20]);
              if ( !((unsigned int (__fastcall *)(LPVOID, __int64, __int64, char *, int))off_1800B30D8[0])(
                      v1804,
                      v772,
                      0xFFFFFFFFLL,
                      (char *)&v1705[25] + 4,
                      1120) )
                v651 = -2147467259;
              if ( v773 )
                ((void (__fastcall *)(LPVOID, __int64))off_1800B3078[0])(v1804, v773);
              if ( v651 < 0 )
                goto LABEL_993;
              v774 = HIDWORD(v1705[26]) + 24;
              if ( HIDWORD(v1705[26]) + 24 < 90 )
                v774 = 90;
              HIDWORD(v1705[26]) = v774;
              LODWORD(v1705[27]) = 32;
              HIDWORD(v1705[25]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8[0])(
                                     HIDWORD(v1705[25]),
                                     v1421,
                                     96LL);
              LODWORD(v1705[26]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8[0])(
                                     LODWORD(v1705[26]),
                                     v1421,
                                     96LL);
              HIDWORD(v1705[26]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8[0])(
                                     HIDWORD(v1705[26]),
                                     v1421,
                                     96LL);
              LODWORD(v1705[27]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8[0])(
                                     LODWORD(v1705[27]),
                                     v1421,
                                     96LL);
              off_1800B3150();
LABEL_980:
              v775 = v1705[14];
              v776 = HIDWORD(v1675);
              v777 = DWORD2(v1675);
              switch ( v1437 )
              {
                case 1:
                  *(_QWORD *)&v1675 = 0LL;
                  goto LABEL_992;
                case 2:
                  v1724 = 0LL;
                  v1722 = 0LL;
                  v1723 = 0LL;
                  v781 = ((__int64 (__fastcall *)(_QWORD))off_1800B3148[0])(0LL);
                  LODWORD(v1722) = 40;
                  if ( !((unsigned int (__fastcall *)(__int64, __int128 *))off_1800B3108[0])(v781, &v1722) )
                  {
LABEL_992:
                    v651 = 0;
LABEL_993:
                    ((void (__fastcall *)(_QWORD, LPVOID))off_1800B3160[0])(0LL, v1804);
                    goto LABEL_994;
                  }
                  ((void (__fastcall *)(_QWORD, char *))off_1800B3140[0])(0LL, (char *)&v1723 + 4);
                  ((void (__fastcall *)(_QWORD, char *))off_1800B3140[0])(0LL, (char *)&v1723 + 12);
                  if ( v775 )
                    v779 = DWORD1(v1723) + 5 * HIDWORD(v1723) / 100;
                  else
                    v779 = 95 * (HIDWORD(v1723) - v777) / 100;
                  v780 = 95 * (v1724 - v776);
                  break;
                case 3:
                  v1721 = 0LL;
                  v1719 = 0LL;
                  v1720 = 0LL;
                  v778 = ((__int64 (__fastcall *)(_QWORD))off_1800B3148[0])(0LL);
                  LODWORD(v1719) = 40;
                  if ( !((unsigned int (__fastcall *)(__int64, __int128 *))off_1800B3108[0])(v778, &v1719) )
                    goto LABEL_992;
                  ((void (__fastcall *)(_QWORD, char *))off_1800B3140[0])(0LL, (char *)&v1720 + 4);
                  ((void (__fastcall *)(_QWORD, char *))off_1800B3140[0])(0LL, (char *)&v1720 + 12);
                  v779 = 50 * (HIDWORD(v1720) - v777) / 100;
                  v780 = 50 * (v1721 - v776);
                  break;
                default:
                  goto LABEL_992;
              }
              LODWORD(v1675) = v779;
              DWORD1(v1675) = v780 / 100;
              goto LABEL_992;
            }
LABEL_918:
            v754 = GetLastError();
            v651 = v754;
            if ( v754 > 0 )
              v651 = (unsigned __int16)v754 | 0x80070000;
            if ( v651 >= 0 )
              v651 = -2147467259;
            goto LABEL_993;
          }
          v762 = 0;
          v1763 = 0;
        }
        v763 = 0;
        goto LABEL_945;
      }
      if ( v1437 != 3 )
        goto LABEL_938;
    }
    v760 = DWORD2(v1684);
    v761 = HIDWORD(v1684);
    goto LABEL_938;
  }
  v650 = GetLastError();
  v651 = v650;
  if ( v650 > 0 )
    v651 = (unsigned __int16)v650 | 0x80070000;
  if ( v651 >= 0 )
    v651 = -2147467259;
LABEL_994:
  v782 = 1;
  while ( _InterlockedCompareExchange(&dword_1800B42A8, 1, 0) )
    ;
  v783 = dword_1800B400C;
  if ( dword_1800B400C > 0 )
  {
    --dword_1800B400C;
    if ( v783 == 1 )
    {
      v784 = 4LL;
      v785 = (HMODULE *)&unk_1800B4230;
      do
      {
        if ( *v785 )
          FreeLibrary(*v785);
        v785 += 3;
        --v784;
      }
      while ( v784 );
      memset(&unk_1800B4230, 0, 0x60uLL);
      memcpy(off_1800B3000, off_18008E410, 0x170uLL);
      v782 = 1;
    }
  }
  _InterlockedExchange(&dword_1800B42A8, 0);
  sub_180085AB4(&v1614);
  if ( v651 < 0 )
    goto LABEL_1194;
  v786 = v1675;
  v1623 = v1675;
  memset(v1698, 0, 0x68uLL);
  v787 = v1446;
  v788 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1800B3050[0])(v1446, 7LL);
  if ( !v788
    || !((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_1800B3068[0])(v788, 104LL, v1698)
    || WORD1(v1698[2]) != 32
    || !v1698[3]
    || SHIDWORD(v1698[0]) <= 0
    || SLODWORD(v1698[1]) <= 0 )
  {
    v782 = 0;
  }
  v1506 = v782;
  v789 = v782 == 0;
  v790 = v1437;
  if ( !v789 || v1437 == 1 )
  {
    ((void (__fastcall *)(char *, _QWORD, _QWORD))off_1800B3150)((char *)&v1705[21] + 4, v786, HIDWORD(v1623));
    ((void (__fastcall *)(char *, _QWORD, _QWORD))off_1800B3150)((char *)&v1705[23] + 4, v786, HIDWORD(v1623));
    if ( v1437 == 1 )
      v1556 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_1800B3028[0])(HIDWORD(v1705[14]) == 0 ? 0xB26720 : 0);
  }
  v1389 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1800B3080[0])(v787, 1LL);
  v791 = 2064;
  if ( LODWORD(v1705[14]) )
    v791 = 133138;
  v1422 = v791;
  if ( !v1506 )
  {
    *(_QWORD *)&v1688 = 0LL;
    LODWORD(v1668) = 0;
    v1412 = (void *)((__int64 (__fastcall *)(LPVOID))off_1800B3010[0])(v787);
    if ( !v1412 )
      goto LABEL_1101;
    if ( v1437 == 1 )
    {
      v847 = 0;
      v848 = HIDWORD(v1705[24]) - HIDWORD(v1705[23]);
      v1375 = 0;
      if ( HIDWORD(v1705[24]) - HIDWORD(v1705[23]) <= HIDWORD(v1705[22]) - HIDWORD(v1705[21]) )
        v848 = HIDWORD(v1705[22]) - HIDWORD(v1705[21]);
      v849 = LODWORD(v1705[25]) - LODWORD(v1705[22]);
      v850 = __PAIR64__(LODWORD(v1705[25]) - LODWORD(v1705[22]), v848);
      if ( LODWORD(v1705[14]) )
      {
        LODWORD(v1688) = v848 + HIDWORD(v1705[21]) - HIDWORD(v1705[22]);
        v847 = v1688;
        LODWORD(v1668) = v848 + HIDWORD(v1705[23]) - HIDWORD(v1705[24]);
        v1375 = v1668;
      }
      v1376 = v1375 + HIDWORD(v1705[24]) - HIDWORD(v1705[23]);
      v851 = v847 + HIDWORD(v1705[22]) - HIDWORD(v1705[21]);
      DWORD2(v1668) = v1376;
      DWORD2(v1688) = v851;
      v1409 = LODWORD(v1705[24]) - LODWORD(v1705[22]);
      DWORD1(v1668) = LODWORD(v1705[24]) - LODWORD(v1705[22]);
      v790 = v1437;
      v1808 = LODWORD(v1705[25]) - LODWORD(v1705[22]);
      HIDWORD(v1668) = LODWORD(v1705[25]) - LODWORD(v1705[22]);
      v1401 = LODWORD(v1705[23]) - LODWORD(v1705[22]);
      HIDWORD(v1688) = LODWORD(v1705[23]) - LODWORD(v1705[22]);
    }
    else
    {
      v848 = DWORD2(v1675);
      v849 = HIDWORD(v1675);
      v1688 = *(_OWORD *)((char *)&v1705[21] + 4);
      v851 = HIDWORD(v1705[22]);
      v1401 = v1705[23];
      v1668 = *(_OWORD *)((char *)&v1705[23] + 4);
      v1808 = v1705[25];
      v1376 = HIDWORD(v1705[24]);
      v1409 = v1705[24];
      v850 = *((_QWORD *)&v1675 + 1);
    }
    LODWORD(retaddr) = 0;
    v1626 = 0LL;
    DWORD2(v1725) = -v849;
    v1727 = 0LL;
    v1726 = 0LL;
    v1728 = 0;
    LODWORD(v1725) = 40;
    DWORD1(v1725) = v848;
    HIDWORD(v1725) = 2097153;
    v852 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD))off_1800B3018[0])(
             v1412,
             &v1725,
             0LL,
             &v1626,
             0LL);
    Srcc = (void *)v852;
    if ( !v852 )
    {
      GetLastError();
LABEL_1190:
      if ( v1412 )
        ((void (__fastcall *)(void *))off_1800B3030[0])(v1412);
      goto LABEL_1192;
    }
    ((void (__fastcall *)(void *, __int64))off_1800B3078[0])(v1412, v852);
    if ( v790 == 1 && v1556 )
    {
      v1711 = 0LL;
      v1713 = HIDWORD(v850);
      v1712 = v848;
      ((void (__fastcall *)(void *, __int64 *))off_1800B30E8[0])(v1412, &v1711);
    }
    v853 = v1705[15];
    v1381 = HIDWORD(v1705[14]);
    v1447 = v1705[18];
    v1452 = (LPVOID)v1705[15];
    memset(v1703, 0, 0x68uLL);
    memset(v1697, 0, 0x68uLL);
    v1453 = 0LL;
    v1345 = 0;
    v1792 = 0;
    v1739 = 0LL;
    v1740 = 0;
    v1737 = 0LL;
    v1738 = 0LL;
    v1715 = 0LL;
    if ( v853 )
    {
      v854 = ((__int64 (__fastcall *)(void *, __int64))off_1800B3050[0])(v1412, 7LL);
      if ( v854 )
      {
        if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_1800B3068[0])(v854, 104LL, v1703) )
        {
          v1453 = (LPVOID)v1703[3];
          v1345 = HIDWORD(v1703[0]);
          v1792 = v1703[1];
        }
        v1454 = (LPVOID)((__int64 (__fastcall *)(void *))off_1800B3010[0])(v1412);
        if ( v1454 )
        {
          v855 = v1688;
          DWORD2(v1737) = DWORD1(v1688) - v1401;
          v856 = v851 - v1688;
          LODWORD(retaddr) = 0;
          v1631 = 0LL;
          v1779 = 0;
          v1738 = 0LL;
          v1739 = 0LL;
          v1740 = 0;
          LODWORD(v1737) = 40;
          DWORD1(v1737) = v856;
          HIDWORD(v1737) = 2097153;
          v857 = ((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD))off_1800B3018[0])(
                   v1454,
                   &v1737,
                   0LL,
                   &v1631,
                   0LL);
          v1448 = (const WCHAR *)v857;
          if ( v857 )
          {
            v860 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))off_1800B3068[0])(v857, 104LL, v1697);
            v861 = 0LL;
            DWORD2(v1715) = v856;
            if ( v860 )
              v861 = (char *)v1697[3];
            v862 = DWORD1(v1688);
            HIDWORD(v1715) = v1401 - DWORD1(v1688);
            v1439 = v861;
            ((void (__fastcall *)(LPVOID, const WCHAR *))off_1800B3078[0])(v1454, v1448);
            ((void (__fastcall *)(LPVOID, __int64))off_1800B3080[0])(v1454, 1LL);
            v1447 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1800B3078[0])(v1454, v1447);
            v863 = ((__int64 (__fastcall *)(_QWORD))off_1800B3070[0])(0LL);
            ((void (__fastcall *)(LPVOID, __int128 *, __int64))off_1800B30E8[0])(v1454, &v1715, v863);
            retaddr = 0LL;
            ((void (__fastcall *)(LPVOID, LPVOID, __int64, __int128 *, int))off_1800B30D8[0])(
              v1454,
              v1452,
              0xFFFFFFFFLL,
              &v1715,
              v1422);
            if ( v1437 == 1 )
            {
              if ( v1381 )
                v1382 = ((__int64 (__fastcall *)(__int64))off_1800B3118[0])(8LL);
              else
                v1382 = 0xFFFFFF;
            }
            else
            {
              v1382 = -5723992;
            }
            v864 = -v855;
            v865 = 0;
            v866 = 0;
            if ( v855 >= 0 )
            {
              v865 = v855;
              v864 = 0;
            }
            v867 = -v862;
            if ( v862 >= 0 )
            {
              v867 = 0;
              v866 = v862;
            }
            v868 = DWORD2(v1715) - v864;
            if ( DWORD2(v1715) - v864 >= v1345 - v865 )
              v868 = v1345 - v865;
            v869 = HIDWORD(v1715) - v867;
            if ( HIDWORD(v1715) - v867 >= v1792 - v866 )
              v869 = v1792 - v866;
            if ( v868 > 0 && v869 > 0 )
            {
              v1793 = 0;
              v870 = (unsigned __int8 *)&v1439[4 * v864 + 4 * (__int64)(DWORD2(v1715) * v867)];
              v1440 = v870;
              v871 = (char *)v1453 + 4 * v865 + 4 * (__int64)(v1345 * v866);
              v1452 = (LPVOID)(4LL * SDWORD2(v1715));
              v1402 = 4LL * v1345;
              v1453 = v871;
              do
              {
                v1346 = 0;
                v872 = v870 + 2;
                v873 = 0;
                v874 = v871 - (char *)v870;
                do
                {
                  if ( (unsigned __int8)((*v872 + *(v872 - 2) + 2 * (unsigned int)*(v872 - 1)) >> 2) != 0xFF )
                  {
                    v875 = (unsigned __int8)~((*v872 + *(v872 - 2) + 2 * (unsigned int)*(v872 - 1)) >> 2);
                    v872[v874] -= ~((*v872 + *(v872 - 2) + 2 * (unsigned int)*(v872 - 1)) >> 2) * (v1382 - v872[v874]);
                    v876 = v872[v874 - 1];
                    v877 = (unsigned __int64)(2155905153LL * v875 * (BYTE1(v1382) - v876)) >> 32;
                    v872[v874 - 1] = v876 + (v877 >> 7 < 0) + (v877 >> 7);
                    v878 = v872[v874 - 2];
                    v879 = (unsigned __int64)(2155905153LL * v875 * (BYTE2(v1382) - v878)) >> 32;
                    v872[v874 - 2] = v878 + (v879 >> 7 < 0) + (v879 >> 7);
                    v880 = v872[v874 + 1];
                    v881 = v875 * (255 - v880);
                    v873 = v1346;
                    v872[v874 + 1] = v880 + v881 / 255;
                  }
                  ++v873;
                  v872 += 4;
                  v1346 = v873;
                }
                while ( v873 < v868 );
                v870 = &v1440[(_QWORD)v1452];
                v871 = (char *)v1453 + v1402;
                v1440 = &v1440[(_QWORD)v1452];
                v1453 = (char *)v1453 + v1402;
                ++v1793;
              }
              while ( v1793 < v869 );
              v96 = v1431;
              v848 = v850;
            }
            ((void (__fastcall *)(const WCHAR *))off_1800B3038[0])(v1448);
            if ( v1447 )
              ((void (__fastcall *)(LPVOID, __int64))off_1800B3078[0])(v1454, v1447);
          }
          else
          {
            v858 = GetLastError();
            v1779 = v858;
            v859 = v858 < 0;
            if ( v858 > 0 )
            {
              v1779 = (unsigned __int16)v858 | 0x80070000;
              v859 = 1;
            }
            if ( !v859 )
              v1779 = -2147467259;
          }
          ((void (__fastcall *)(LPVOID))off_1800B3030[0])(v1454);
          if ( v1779 < 0 )
            goto LABEL_1188;
          v882 = v1705[16];
          v1780 = HIDWORD(v1705[14]);
          v1441 = (LPVOID)v1705[19];
          v1448 = (const WCHAR *)v1705[16];
          memset(v1704, 0, 0x68uLL);
          memset(v1705, 0, 0x68uLL);
          v1454 = 0LL;
          v1794 = 0;
          v1347 = 0;
          v1743 = 0LL;
          v1744 = 0;
          v1741 = 0LL;
          v1742 = 0LL;
          v1714 = 0LL;
          if ( !v882 )
            goto LABEL_1188;
          v883 = ((__int64 (__fastcall *)(void *, __int64))off_1800B3050[0])(v1412, 7LL);
          if ( v883 )
          {
            if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_1800B3068[0])(v883, 104LL, v1704) )
            {
              v1454 = (LPVOID)v1704[3];
              v1794 = HIDWORD(v1704[0]);
              v1347 = v1704[1];
            }
            v1453 = (LPVOID)((__int64 (__fastcall *)(void *))off_1800B3010[0])(v1412);
            if ( v1453 )
            {
              v884 = v1376 - v1668;
              DWORD2(v1741) = v1409 - v1808;
              v885 = 0;
              LODWORD(retaddr) = 0;
              v1634 = 0LL;
              v1742 = 0LL;
              v1743 = 0LL;
              v1744 = 0;
              LODWORD(v1741) = 40;
              DWORD1(v1741) = v1376 - v1668;
              HIDWORD(v1741) = 2097153;
              v886 = (void *)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD))off_1800B3018[0])(
                               v1453,
                               &v1741,
                               0LL,
                               &v1634,
                               0LL);
              v1452 = v886;
              if ( !v886 )
              {
                v887 = GetLastError();
                v885 = v887;
                if ( v887 > 0 )
                  v885 = (unsigned __int16)v887 | 0x80070000;
                if ( v885 >= 0 )
                  v885 = -2147467259;
                goto LABEL_1183;
              }
              v888 = ((__int64 (__fastcall *)(void *, __int64, _QWORD *))off_1800B3068[0])(v886, 104LL, v1705);
              v889 = 0LL;
              DWORD2(v1714) = v884;
              if ( v888 )
                v889 = v1705[3];
              HIDWORD(v1714) = v1808 - v1409;
              v1447 = v889;
              ((void (__fastcall *)(LPVOID, LPVOID))off_1800B3078[0])(v1453, v1452);
              ((void (__fastcall *)(LPVOID, __int64))off_1800B3080[0])(v1453, 1LL);
              v1442 = (LPVOID)((__int64 (__fastcall *)(LPVOID, LPVOID))off_1800B3078[0])(v1453, v1441);
              v890 = ((__int64 (__fastcall *)(_QWORD))off_1800B3070[0])(0LL);
              ((void (__fastcall *)(LPVOID, __int128 *, __int64))off_1800B30E8[0])(v1453, &v1714, v890);
              retaddr = 0LL;
              ((void (__fastcall *)(LPVOID, const WCHAR *, __int64, __int128 *, int))off_1800B30D8[0])(
                v1453,
                v1448,
                0xFFFFFFFFLL,
                &v1714,
                v1422);
              if ( v1437 == 1 )
              {
                if ( !v1780 )
                {
                  v1781 = 0xFFFFFF;
LABEL_1164:
                  v892 = -(int)v1668;
                  v893 = 0;
                  v894 = 0;
                  if ( (int)v1668 >= 0 )
                  {
                    v893 = v1668;
                    v892 = 0;
                  }
                  v895 = -v1409;
                  if ( v1409 >= 0 )
                  {
                    v894 = v1409;
                    v895 = 0;
                  }
                  v896 = DWORD2(v1714) - v892;
                  if ( DWORD2(v1714) - v892 >= v1794 - v893 )
                    v896 = v1794 - v893;
                  v897 = HIDWORD(v1714) - v895;
                  if ( HIDWORD(v1714) - v895 >= v1347 - v894 )
                    v897 = v1347 - v894;
                  if ( v896 > 0 && v897 > 0 )
                  {
                    v1348 = 0;
                    v898 = v1447 + 4 * (v892 + (__int64)(v895 * DWORD2(v1714)));
                    v1448 = (const WCHAR *)v898;
                    v899 = (char *)v1454 + 4 * v893 + 4 * (__int64)(v894 * v1794);
                    v1447 = 4LL * SDWORD2(v1714);
                    v1383 = (LPVOID)(4LL * v1794);
                    v1454 = v899;
                    do
                    {
                      v900 = (unsigned __int8 *)(v898 + 2);
                      v1795 = 0;
                      v901 = &v899[-v898];
                      for ( mm = 0; mm < v896; v1795 = mm )
                      {
                        if ( (unsigned __int8)((*v900 + *(v900 - 2) + 2 * (unsigned int)*(v900 - 1)) >> 2) != 0xFF )
                        {
                          v903 = (unsigned __int8)~((*v900 + *(v900 - 2) + 2 * (unsigned int)*(v900 - 1)) >> 2);
                          v900[(_QWORD)v901] -= ~((*v900 + *(v900 - 2) + 2 * (unsigned int)*(v900 - 1)) >> 2)
                                              * (v1395 - v900[(_QWORD)v901]);
                          v904 = v900[(_QWORD)v901 - 1];
                          v905 = (unsigned __int64)(2155905153LL * v903 * (BYTE1(v1781) - v904)) >> 32;
                          v900[(_QWORD)v901 - 1] = v904 + (v905 >> 7 < 0) + (v905 >> 7);
                          v906 = v900[(_QWORD)v901 - 2];
                          v907 = (unsigned __int64)(2155905153LL * v903 * (BYTE2(v1781) - v906)) >> 32;
                          v900[(_QWORD)v901 - 2] = v906 + (v907 >> 7 < 0) + (v907 >> 7);
                          mm = v1795;
                          v900[(_QWORD)v901 + 1] += v903 * (255 - v900[(_QWORD)v901 + 1]) / 255;
                        }
                        ++mm;
                        v900 += 4;
                      }
                      v898 = (__int64)v1448 + v1447;
                      v899 = (char *)v1454 + (_QWORD)v1383;
                      v1448 = (const WCHAR *)((char *)v1448 + v1447);
                      v1454 = (char *)v1454 + (_QWORD)v1383;
                      ++v1348;
                    }
                    while ( v1348 < v897 );
                    v96 = v1431;
                  }
                  ((void (__fastcall *)(LPVOID))off_1800B3038[0])(v1452);
                  if ( v1442 )
                    ((void (__fastcall *)(LPVOID, LPVOID))off_1800B3078[0])(v1453, v1442);
LABEL_1183:
                  ((void (__fastcall *)(LPVOID))off_1800B3030[0])(v1453);
                  if ( v885 >= 0 )
                  {
                    v846 = v1446;
                    retaddr = v1412;
                    if ( v1437 == 1 )
                      ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, _DWORD))off_1800B3000[0])(
                        v1446,
                        HIDWORD(v1705[21]),
                        LODWORD(v1705[22]),
                        v848,
                        HIDWORD(v850));
                    else
                      ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, _DWORD))off_1800B3040[0])(
                        v1446,
                        (unsigned int)v1675,
                        DWORD1(v1675),
                        v848,
                        HIDWORD(v850));
LABEL_1187:
                    ((void (__fastcall *)(LPVOID, _QWORD))off_1800B3080[0])(v846, v1389);
                  }
                  goto LABEL_1188;
                }
                v891 = ((__int64 (__fastcall *)(__int64))off_1800B3118[0])(8LL);
              }
              else
              {
                v891 = -5723992;
              }
              v1781 = v891;
              v1395 = v891;
              goto LABEL_1164;
            }
          }
        }
      }
      GetLastError();
    }
LABEL_1188:
    if ( Srcc )
      ((void (__fastcall *)(void *))off_1800B3038[0])(Srcc);
    goto LABEL_1190;
  }
  v792 = v1705[15];
  v1358 = HIDWORD(v1705[14]);
  v1775 = (LPVOID)v1705[18];
  v1788 = v1705[15];
  memset(v1699, 0, 0x68uLL);
  memset(v1700, 0, 0x68uLL);
  v1341 = 0LL;
  v1368 = 0;
  v1764 = 0;
  v1731 = 0LL;
  v1732 = 0;
  v1729 = 0LL;
  v1730 = 0LL;
  v1716 = 0LL;
  if ( !v792 )
    goto LABEL_1192;
  v793 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1800B3050[0])(v787, 7LL);
  if ( !v793 )
    goto LABEL_1101;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_1800B3068[0])(v793, 104LL, v1699) )
  {
    v1341 = v1699[3];
    v1368 = HIDWORD(v1699[0]);
    v1764 = v1699[1];
  }
  v794 = ((__int64 (__fastcall *)(LPVOID))off_1800B3010[0])(v787);
  v795 = v794;
  if ( !v794 )
    goto LABEL_1101;
  DWORD1(v1729) = HIDWORD(v1705[22]) - HIDWORD(v1705[21]);
  v796 = 0;
  DWORD2(v1729) = LODWORD(v1705[22]) - LODWORD(v1705[23]);
  LODWORD(retaddr) = 0;
  v1624 = 0LL;
  v1730 = 0LL;
  v1731 = 0LL;
  v1732 = 0;
  LODWORD(v1729) = 40;
  HIDWORD(v1729) = 2097153;
  v1379 = (LPVOID)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD))off_1800B3018[0])(
                    v794,
                    &v1729,
                    0LL,
                    &v1624,
                    0LL);
  if ( v1379 )
  {
    v798 = ((__int64 (__fastcall *)(LPVOID, __int64, _QWORD *))off_1800B3068[0])(v1379, 104LL, v1700);
    v799 = 0LL;
    if ( v798 )
      v799 = (char *)v1700[3];
    DWORD2(v1716) = HIDWORD(v1705[22]) - HIDWORD(v1705[21]);
    HIDWORD(v1716) = LODWORD(v1705[23]) - LODWORD(v1705[22]);
    v1805 = v799;
    ((void (__fastcall *)(__int64, LPVOID))off_1800B3078[0])(v795, v1379);
    ((void (__fastcall *)(__int64, __int64))off_1800B3080[0])(v795, 1LL);
    v1776 = (LPVOID)((__int64 (__fastcall *)(__int64, LPVOID))off_1800B3078[0])(v795, v1775);
    v800 = ((__int64 (__fastcall *)(_QWORD))off_1800B3070[0])(0LL);
    ((void (__fastcall *)(__int64, __int128 *, __int64))off_1800B30E8[0])(v795, &v1716, v800);
    retaddr = 0LL;
    ((void (__fastcall *)(__int64, SIZE_T, __int64, __int128 *, int))off_1800B30D8[0])(
      v795,
      v1788,
      0xFFFFFFFFLL,
      &v1716,
      v1422);
    if ( v1437 == 1 )
    {
      if ( v1358 )
        v1359 = ((__int64 (__fastcall *)(__int64))off_1800B3118[0])(8LL);
      else
        v1359 = 0xFFFFFF;
    }
    else
    {
      v1359 = -5723992;
    }
    v801 = 0;
    v802 = -HIDWORD(v1705[21]);
    v803 = 0;
    if ( v1705[21] >= 0 )
    {
      v801 = HIDWORD(v1705[21]);
      v802 = 0;
    }
    v804 = -LODWORD(v1705[22]);
    if ( SLODWORD(v1705[22]) >= 0 )
    {
      v803 = v1705[22];
      v804 = 0;
    }
    v805 = DWORD2(v1716) - v802;
    if ( DWORD2(v1716) - v802 >= v1368 - v801 )
      v805 = v1368 - v801;
    v806 = HIDWORD(v1716) - v804;
    if ( HIDWORD(v1716) - v804 >= v1764 - v803 )
      v806 = v1764 - v803;
    if ( v805 > 0 && v806 > 0 )
    {
      v1765 = 0;
      v807 = &v1805[4 * v802 + 4 * (__int64)(v804 * DWORD2(v1716))];
      v1789 = (SIZE_T)v807;
      v808 = v1341 + 4 * (v801 + (__int64)(v803 * v1368));
      v809 = 4LL * SDWORD2(v1716);
      v1407 = 4LL * v1368;
      v1342 = v808;
      do
      {
        v1369 = 0;
        v810 = v808 - (_QWORD)v807;
        v811 = (unsigned __int8 *)(v807 + 2);
        for ( nn = 0; nn < v805; v1369 = nn )
        {
          if ( (unsigned __int8)((*v811 + *(v811 - 2) + 2 * (unsigned int)*(v811 - 1)) >> 2) != 0xFF )
          {
            v813 = (unsigned __int8)~((*v811 + *(v811 - 2) + 2 * (unsigned int)*(v811 - 1)) >> 2);
            v811[v810] -= ~((*v811 + *(v811 - 2) + 2 * (unsigned int)*(v811 - 1)) >> 2) * (v1359 - v811[v810]);
            v814 = v811[v810 - 1];
            v815 = (unsigned __int64)(2155905153LL * v813 * (BYTE1(v1359) - v814)) >> 32;
            v811[v810 - 1] = v814 + (v815 >> 7 < 0) + (v815 >> 7);
            v816 = v811[v810 - 2];
            v817 = (unsigned __int64)(2155905153LL * v813 * (BYTE2(v1359) - v816)) >> 32;
            v811[v810 - 2] = v816 + (v817 >> 7 < 0) + (v817 >> 7);
            nn = v1369;
            v811[v810 + 1] += v813 * (255 - v811[v810 + 1]) / 255;
          }
          ++nn;
          v811 += 4;
        }
        v807 = (char *)(v809 + v1789);
        v808 = v1407 + v1342;
        v1789 += v809;
        v1342 += v1407;
        ++v1765;
      }
      while ( v1765 < v806 );
      v96 = v1431;
      v796 = 0;
    }
    ((void (__fastcall *)(LPVOID))off_1800B3038[0])(v1379);
    if ( v1776 )
      ((void (__fastcall *)(__int64, LPVOID))off_1800B3078[0])(v795, v1776);
  }
  else
  {
    v797 = GetLastError();
    v796 = v797;
    if ( v797 > 0 )
      v796 = (unsigned __int16)v797 | 0x80070000;
    if ( v796 >= 0 )
      v796 = -2147467259;
  }
  ((void (__fastcall *)(__int64))off_1800B3030[0])(v795);
  if ( v796 < 0 )
    goto LABEL_1192;
  v818 = v1705[16];
  v1360 = HIDWORD(v1705[14]);
  v1777 = (LPVOID)v1705[19];
  v1790 = v1705[16];
  memset(v1701, 0, 0x68uLL);
  memset(v1702, 0, 0x68uLL);
  v1343 = 0LL;
  v1370 = 0;
  v1766 = 0;
  v1735 = 0LL;
  v1736 = 0;
  v1733 = 0LL;
  v1734 = 0LL;
  v1710 = 0LL;
  if ( !v818 )
    goto LABEL_1192;
  v819 = v1446;
  v820 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1800B3050[0])(v1446, 7LL);
  if ( !v820 )
    goto LABEL_1101;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_1800B3068[0])(v820, 104LL, v1701) )
  {
    v1343 = v1701[3];
    v1370 = HIDWORD(v1701[0]);
    v1766 = v1701[1];
  }
  v821 = ((__int64 (__fastcall *)(LPVOID))off_1800B3010[0])(v819);
  v822 = v821;
  if ( !v821 )
  {
LABEL_1101:
    GetLastError();
    goto LABEL_1192;
  }
  DWORD1(v1733) = HIDWORD(v1705[24]) - HIDWORD(v1705[23]);
  DWORD2(v1733) = LODWORD(v1705[24]) - LODWORD(v1705[25]);
  v823 = 0;
  LODWORD(retaddr) = 0;
  v1625 = 0LL;
  v1734 = 0LL;
  v1735 = 0LL;
  v1736 = 0;
  LODWORD(v1733) = 40;
  HIDWORD(v1733) = 2097153;
  v1380 = (LPVOID)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD))off_1800B3018[0])(
                    v821,
                    &v1733,
                    0LL,
                    &v1625,
                    0LL);
  if ( !v1380 )
  {
    v824 = GetLastError();
    v823 = v824;
    if ( v824 > 0 )
      v823 = (unsigned __int16)v824 | 0x80070000;
    if ( v823 >= 0 )
      v823 = -2147467259;
    goto LABEL_1092;
  }
  v825 = ((__int64 (__fastcall *)(LPVOID, __int64, _QWORD *))off_1800B3068[0])(v1380, 104LL, v1702);
  v826 = 0LL;
  if ( v825 )
    v826 = (char *)v1702[3];
  DWORD2(v1710) = HIDWORD(v1705[24]) - HIDWORD(v1705[23]);
  HIDWORD(v1710) = LODWORD(v1705[25]) - LODWORD(v1705[24]);
  v1806 = v826;
  ((void (__fastcall *)(__int64, LPVOID))off_1800B3078[0])(v822, v1380);
  ((void (__fastcall *)(__int64, __int64))off_1800B3080[0])(v822, 1LL);
  v1778 = (LPVOID)((__int64 (__fastcall *)(__int64, LPVOID))off_1800B3078[0])(v822, v1777);
  v827 = ((__int64 (__fastcall *)(_QWORD))off_1800B3070[0])(0LL);
  ((void (__fastcall *)(__int64, __int128 *, __int64))off_1800B30E8[0])(v822, &v1710, v827);
  retaddr = 0LL;
  ((void (__fastcall *)(__int64, SIZE_T, __int64, __int128 *, int))off_1800B30D8[0])(
    v822,
    v1790,
    0xFFFFFFFFLL,
    &v1710,
    v1422);
  if ( v1437 == 1 )
  {
    if ( v1360 )
    {
      v828 = ((__int64 (__fastcall *)(__int64))off_1800B3118[0])(8LL);
      goto LABEL_1072;
    }
    v1423 = 0xFFFFFF;
  }
  else
  {
    v828 = -5723992;
LABEL_1072:
    v1423 = v828;
    v1395 = v828;
  }
  v829 = 0;
  v830 = -HIDWORD(v1705[23]);
  v831 = 0;
  if ( v1705[23] >= 0 )
  {
    v829 = HIDWORD(v1705[23]);
    v830 = 0;
  }
  v832 = -LODWORD(v1705[24]);
  if ( SLODWORD(v1705[24]) >= 0 )
  {
    v831 = v1705[24];
    v832 = 0;
  }
  v833 = DWORD2(v1710) - v830;
  if ( DWORD2(v1710) - v830 >= v1370 - v829 )
    v833 = v1370 - v829;
  v834 = HIDWORD(v1710) - v832;
  if ( HIDWORD(v1710) - v832 >= v1766 - v831 )
    v834 = v1766 - v831;
  if ( v833 > 0 && v834 > 0 )
  {
    v835 = v833;
    v1361 = 0;
    v836 = &v1806[4 * v830 + 4 * (__int64)(DWORD2(v1710) * v832)];
    v1791 = (SIZE_T)v836;
    v837 = v1343 + 4 * (v829 + (__int64)(v831 * v1370));
    v1807 = 4LL * SDWORD2(v1710);
    v1408 = 4LL * v1370;
    v1344 = v837;
    do
    {
      v838 = (unsigned __int8 *)(v836 + 2);
      v1438 = 0;
      v839 = v837 - (_QWORD)v836;
      for ( i1 = 0; i1 < v835; v1438 = i1 )
      {
        if ( (unsigned __int8)((*v838 + *(v838 - 2) + 2 * (unsigned int)*(v838 - 1)) >> 2) != 0xFF )
        {
          v841 = (unsigned __int8)~((*v838 + *(v838 - 2) + 2 * (unsigned int)*(v838 - 1)) >> 2);
          v838[v839] -= ~((*v838 + *(v838 - 2) + 2 * (unsigned int)*(v838 - 1)) >> 2) * (v1395 - v838[v839]);
          v842 = v838[v839 - 1];
          v843 = (unsigned __int64)(2155905153LL * v841 * (BYTE1(v1423) - v842)) >> 32;
          v838[v839 - 1] = v842 + (v843 >> 7 < 0) + (v843 >> 7);
          v844 = v838[v839 - 2];
          v845 = (unsigned __int64)(2155905153LL * v841 * (BYTE2(v1423) - v844)) >> 32;
          v838[v839 - 2] = v844 + (v845 >> 7 < 0) + (v845 >> 7);
          i1 = v1438;
          v838[v839 + 1] += v841 * (255 - v838[v839 + 1]) / 255;
        }
        ++i1;
        v838 += 4;
      }
      v836 = (char *)(v1807 + v1791);
      v837 = v1408 + v1344;
      v1791 += v1807;
      v1344 += v1408;
      ++v1361;
    }
    while ( v1361 < v834 );
    v96 = v1431;
  }
  ((void (__fastcall *)(LPVOID))off_1800B3038[0])(v1380);
  if ( v1778 )
    ((void (__fastcall *)(__int64, LPVOID))off_1800B3078[0])(v822, v1778);
LABEL_1092:
  ((void (__fastcall *)(__int64))off_1800B3030[0])(v822);
  if ( v823 >= 0 )
  {
    v846 = v1446;
    goto LABEL_1187;
  }
LABEL_1192:
  if ( v1556 )
    ((void (__fastcall *)(LPVOID))off_1800B3038[0])(v1556);
LABEL_1194:
  if ( v1705[15] )
  {
    v908 = -1LL;
    do
      ++v908;
    while ( *(_WORD *)(v1705[15] + 2 * v908) );
    memset((void *)v1705[15], 0, 2 * v908 + 2);
    sub_18003850C((void *)v1705[15]);
    v1705[15] = 0LL;
  }
  if ( v1705[16] )
  {
    v909 = -1LL;
    do
      ++v909;
    while ( *(_WORD *)(v1705[16] + 2 * v909) );
    memset((void *)v1705[16], 0, 2 * v909 + 2);
    sub_18003850C((void *)v1705[16]);
    v1705[16] = 0LL;
  }
  if ( v1705[17] )
  {
    v910 = -1LL;
    do
      ++v910;
    while ( *(_WORD *)(v1705[17] + 2 * v910) );
    memset((void *)v1705[17], 0, 2 * v910 + 2);
    sub_18003850C((void *)v1705[17]);
    v1705[17] = 0LL;
  }
  if ( v1705[18] )
  {
    off_1800B3038[0]();
    v1705[18] = 0LL;
  }
  if ( v1705[19] )
  {
    off_1800B3038[0]();
    v1705[19] = 0LL;
  }
  if ( v1705[20] )
  {
    off_1800B3038[0]();
    v1705[20] = 0LL;
  }
  while ( _InterlockedCompareExchange(&dword_1800B42A8, 1, 0) )
    ;
  v911 = dword_1800B400C;
  if ( dword_1800B400C > 0 )
  {
    --dword_1800B400C;
    if ( v911 == 1 )
    {
      v912 = (HMODULE *)&unk_1800B4230;
      v913 = 4LL;
      do
      {
        if ( *v912 )
          FreeLibrary(*v912);
        v912 += 3;
        --v913;
      }
      while ( v913 );
      memset(&unk_1800B4230, 0, 0x60uLL);
      memcpy(off_1800B3000, off_18008E410, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1800B42A8, 0);
  v1782 = dword_1800B4008;
  v1443 = off_1800B3098[0]() - qword_1800B4000;
  v1754 = 0LL;
  v1751 = 0LL;
  v1752 = 0LL;
  v1753 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1800B42A8, 1, 0) )
    ;
  v914 = dword_1800B400C;
  if ( dword_1800B400C )
    goto LABEL_1266;
  v1796 = 0;
  v1384 = 0;
  v1635 = 0LL;
  v1636 = 0LL;
  v915 = sub_1800443AC(824LL);
  v1448 = (const WCHAR *)v915;
  if ( !v915 )
    goto LABEL_1256;
  v916 = (_BYTE *)(v915 + 7);
  v917 = 103LL;
  v918 = (unsigned __int8 *)&unk_180096F02;
  v919 = 0;
  v920 = 0;
  v921 = 0;
  v922 = -1;
  do
  {
    v923 = *(v918 - 1) | (*(v918 - 2) << 8);
    v924 = v918[2] << 8;
    v925 = *v918;
    v918 += 8;
    v926 = *(v918 - 7) | ((v925 | (v923 << 8)) << 8);
    v927 = v926 ^ v921;
    v928 = *(v918 - 3) | ((*(v918 - 4) | ((*(v918 - 5) | v924) << 8)) << 8);
    v929 = v928 ^ v920 ^ v927 ^ 0xAC987321;
    v930 = (__ROL4__(v929, 10) + 4991 * __ROL4__(v929 + 1419157410, 5)) ^ v927;
    v931 = (43881 * __ROR4__(v930 + 133239679, 9) - __ROL4__(v930, 2)) ^ v929;
    v932 = (24670 * v931 - (v931 >> 13) - 123127970) ^ v930;
    v933 = (2033 * __ROL4__(v932 ^ 0xAB69, 6) - __ROL4__(v932, 2)) ^ v931;
    v934 = (133239679 - (v933 ^ 0xAB69605E)) ^ v932;
    v935 = (43881 * (v934 ^ 0x137F)) ^ __ROR4__(v934, 6) ^ v933;
    v936 = (__ROL4__(v935, 2) + 24670 * __ROR4__(v935 + 133239679, 15)) ^ v934;
    v937 = (2033 * __ROR4__(v936 + 1419157410, 14) - __ROL4__(v936, 8)) ^ v935;
    v938 = __ROR4__(v937, 10) ^ (4991 * __ROR4__(v937 ^ 0xAB69605E, 12)) ^ v936;
    v939 = v937 ^ (v938 >> 10) ^ (43881 * (v938 ^ 0x7F1));
    v940 = (2033 * (__ROR4__(~v939, 5) + 24670)) ^ v938;
    v941 = v939 ^ (v940 - 2033) ^ 0xAB69605E;
    v942 = ((v941 >> 2) + 4991 * __ROL4__(v939 ^ (v940 - 2033) ^ 0xAB6967AF, 2)) ^ v940;
    v943 = (__ROL4__(v942, 7) + 43881 * __ROR4__(v942 - 133239679, 6)) ^ v941;
    v944 = (24670 * (v943 ^ 0x137F) + __ROR4__(v943, 9)) ^ v942;
    v945 = (__ROL4__(v944, 7) + 2033 * __ROL4__(v944 ^ 0xAB69, 5)) ^ v943;
    v946 = v945 ^ v944 ^ 0xAC987321;
    v947 = (4991 * __ROR4__(v946, 3) - 219010071) ^ v945;
    v948 = (24670 * __ROR4__(v947 - 133239679, 1) - __ROR4__(v947, 6)) ^ v946;
    v949 = (__ROL4__(v948, 14) + 2033 * __ROL4__(v948 - 1419157410, 3)) ^ v947;
    v950 = (4991 * __ROL4__(v949 - 1419157410, 15) - __ROR4__(v949, 14)) ^ v948;
    v951 = (v950 >> 3) ^ (43881 * (v950 ^ 0x605E)) ^ v949;
    v952 = 24670 * __ROL4__(v951 ^ 0x7F1137F, 4);
    v953 = v951;
    v954 = v922 ^ v951;
    v922 = v928;
    v955 = v919 ^ __ROL4__(v953, 2) ^ v952;
    v919 = v926;
    v956 = v955 ^ v950;
    *(v916 - 4) = v956;
    *v916 = v954;
    v916 += 8;
    v957 = __ROR4__(v956, 8);
    *(v916 - 13) = v957;
    v958 = __ROR4__(v954, 8);
    *(v916 - 9) = v958;
    v959 = __ROR4__(v957, 8);
    *(v916 - 14) = v959;
    v960 = __ROR4__(v958, 8);
    *(v916 - 10) = v960;
    v961 = __ROR4__(v959, 8);
    v962 = __ROR4__(v960, 8);
    *(v916 - 15) = v961;
    *(v916 - 11) = v962;
    v920 = __ROR4__(v962, 8);
    v921 = __ROR4__(v961, 8);
    --v917;
  }
  while ( v917 );
  v963 = 0;
  v8 = 0;
  v96 = v1431;
  v964 = 0LL;
  v965 = 0;
  v966 = (WCHAR *)v1448;
  do
    v963 ^= *((_BYTE *)v1448 + v964++);
  while ( v964 < 0x338 );
  if ( v963 == 64LL )
  {
    v1635 = v1448;
    v967 = 0;
    v966 = 0LL;
    v1636 = 824LL;
  }
  else
  {
    v967 = -1073425151;
  }
  if ( v966 )
    sub_18003850C(v966);
  if ( v967 >= 0 )
  {
    v968 = v1635;
    HIBYTE(v1635[v1636 / 2 - 1]) = 0;
    memset(&unk_1800B4230, 0, 0x60uLL);
    while ( *(_BYTE *)v968 )
    {
      v969 = v968;
      v970 = -1LL;
      do
        ++v970;
      while ( v968[v970] );
      v971 = &v968[v970];
      v972 = (char *)&unk_1800B4230 + 24 * v1384;
      if ( !GetModuleHandleExW(0, v969, (HMODULE *)v972) )
        goto LABEL_1256;
      v965 = 0;
      if ( **(_WORD **)v972 == 23117
        && (v973 = *(int *)(*(_QWORD *)v972 + 60LL), (unsigned int)v973 < 0x10000000)
        && (v974 = *(_QWORD *)v972 + v973, v974 >= *(_QWORD *)v972)
        && *(_DWORD *)v974 == 17744 )
      {
        if ( ((*(_WORD *)(v974 + 24) - 267) & 0xFEFF) != 0 )
        {
          v965 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v972 + 12) = *(_QWORD *)(v974 + 136);
          *((_DWORD *)v972 + 2) = *(_DWORD *)(v974 + 80);
        }
      }
      else
      {
        v965 = -1073741701;
      }
      v975 = *(_DWORD *)(v971 + 1);
      v976 = 0;
      v968 = v971 + 3;
      v1349 = v975;
      for ( i2 = 0; v976 < v1349; i2 = v976 )
      {
        v977 = (const CHAR *)v968;
        v978 = -1LL;
        do
          ++v978;
        while ( *((_BYTE *)v968 + v978) );
        v968 = (LPCWSTR)((char *)v968 + v978 + 1);
        if ( v965 >= 0 )
        {
          v979 = GetProcAddress(*(HMODULE *)v972, v977);
          if ( !v979 )
            goto LABEL_1257;
          off_1800B3000[v1796] = v979;
          v976 = i2;
        }
        ++v1796;
        ++v976;
      }
      ++v1384;
    }
  }
  else
  {
LABEL_1256:
    v965 = -1073741702;
  }
LABEL_1257:
  if ( v1635 )
  {
    v980 = GetProcessHeap();
    HeapFree(v980, 0, (LPVOID)v1635);
  }
  if ( v965 >= 0 )
  {
    v914 = dword_1800B400C;
LABEL_1266:
    v983 = (HMODULE *)&unk_1800B4230;
    dword_1800B400C = v914 + 1;
    goto LABEL_1267;
  }
  v981 = (HMODULE *)&unk_1800B4230;
  v982 = 4LL;
  do
  {
    if ( *v981 )
      FreeLibrary(*v981);
    v981 += 3;
    --v982;
  }
  while ( v982 );
  v983 = (HMODULE *)&unk_1800B4230;
  memset(&unk_1800B4230, 0, 0x60uLL);
  memcpy(off_1800B3000, off_18008E410, 0x170uLL);
LABEL_1267:
  v984 = 4LL;
  _InterlockedExchange(&dword_1800B42A8, 0);
  LODWORD(v1754) = v1782;
  LODWORD(v1751) = v1443;
  v1750 = 1;
  LODWORD(v1752) = -1721306479;
  DWORD2(v1751) = 1;
  LODWORD(v1753) = 1;
  DWORD2(v1752) = 1;
  DWORD2(v1753) = 1;
  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1800B30D0)(0LL, 8225LL, 4LL, &v1750);
  while ( _InterlockedCompareExchange(&dword_1800B42A8, 1, 0) )
    ;
  v985 = dword_1800B400C;
  if ( dword_1800B400C > 0 )
  {
    --dword_1800B400C;
    if ( v985 == 1 )
    {
      do
      {
        if ( *v983 )
          FreeLibrary(*v983);
        v983 += 3;
        --v984;
      }
      while ( v984 );
      memset(&unk_1800B4230, 0, 0x60uLL);
      memcpy(off_1800B3000, off_18008E410, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1800B42A8, 0);
  ((void (__fastcall *)(_QWORD, LPVOID))off_1800B3160[0])(0LL, v1446);
  v1387 = v1445;
LABEL_1276:
  sub_180085A84(&v1610);
  if ( v1514 )
  {
    v1444 = 0LL;
    v1683 = 0LL;
    *(_OWORD *)v1686 = 0LL;
    v1637 = &unk_1800B35C0;
    v986 = 0LL;
    v987 = GetProcessHeap();
    v988 = HeapAlloc(v987, 8u, 0xA0uLL);
    if ( !v988 )
      goto LABEL_1658;
    v989 = v1637;
    v1444 = v988;
    *v988 = *v1637;
    v988[1] = v989[1];
    v988[2] = v989[2];
    v988[3] = v989[3];
    v988[4] = v989[4];
    v988[5] = v989[5];
    v988[6] = v989[6];
    v988[7] = v989[7];
    v988[8] = v989[8];
    v988[9] = v989[9];
    v1638 = &unk_1800B3500;
    v990 = GetProcessHeap();
    v991 = (WCHAR *)HeapAlloc(v990, 8u, 8uLL);
    v986 = v991;
    if ( !v991 )
    {
      v986 = 0LL;
      goto LABEL_1658;
    }
    v1448 = v991;
    *(_QWORD *)v991 = *v1638;
    v1639 = __rdtsc();
    v1517 = 0;
    if ( (int)sub_18003ECBC(4LL, 4LL, &v1518) >= 0
      && (int)sub_18003ECBC(0LL, v1518, &v1517) >= 0
      && (int)sub_18003ECBC(v992, 160LL, &v1519) >= 0 )
    {
      v993 = sub_18003ECBC(v1517, v1519, &v1517);
      if ( (v995 | v993) >= 0 && (int)sub_18003ECBC(v994, 8LL, &v1520) >= 0 )
      {
        v996 = sub_18003ECBC(v1517, v1520, &v1517);
        if ( (v998 | v996) >= 0 && (int)sub_18003ECBC(v997, 8LL, v1521) >= 0 )
        {
          v1521[1] = v1521[0];
          v999 = sub_18003ECBC(v1517, v1521[0], &v1517);
          if ( (v1000 | v999) >= 0 )
          {
            HIDWORD(v1682) = v1517;
            v1001 = v1517;
            v1002 = GetProcessHeap();
            v1003 = HeapAlloc(v1002, 8u, v1001);
            v1004 = v1003;
            if ( v1003 )
            {
              v1683 = v1003;
              LODWORD(v1682) = 0;
              v1522 = 4;
              if ( (int)sub_18003EC98(v1003, 4LL, &v1687) >= 0
                && v1004 + 2 <= (_DWORD *)((char *)v1004 + HIDWORD(v1682)) )
              {
                v1006 = v1687;
                *v1004 = v1005;
                *v1006 = v1522;
                v1007 = v1682 + 1;
                LODWORD(v1682) = v1682 + 1;
                if ( !v1683 )
                {
                  if ( (int)sub_18003ECBC((unsigned int)v1005, 160LL, &v1523) >= 0 )
                  {
                    v1524 = v1523;
                    if ( (int)sub_18003ECBC(HIDWORD(v1682), v1523, (char *)&v1682 + 4) >= 0 )
                    {
                      v1009 = v1008 - 3;
                      v1010 = v1008 - 3 + v1682;
                      LODWORD(v1682) = v1010;
                      goto LABEL_1301;
                    }
                  }
                  goto LABEL_1658;
                }
                v1011 = v1683;
                v1640 = v1683;
                if ( v1007 )
                {
                  while ( (int)sub_18003ECBC((unsigned int)v1005, (unsigned int)*v1011, &v1525) >= 0 )
                  {
                    v1524 = v1525;
                    if ( (int)sub_18003EC98(v1011, v1525, &v1640) < 0 )
                      break;
                    v1011 = v1640;
                    if ( v1012 + 1 >= v1013 )
                      goto LABEL_1298;
                  }
                  goto LABEL_1658;
                }
LABEL_1298:
                v1014 = sub_18003EC98(v1011, v1005, &v1669);
                if ( v1014 < 0 || v1011 + 41 > (_DWORD *)((char *)v1683 + HIDWORD(v1682)) )
                  goto LABEL_1658;
                v1015 = v1669;
                *v1011 = 160;
                *v1015 = *v988;
                v1015[1] = v988[1];
                v1015[2] = v988[2];
                v1015[3] = v988[3];
                v1015[4] = v988[4];
                v1015[5] = v988[5];
                v1015[6] = v988[6];
                v1015[7] = v988[7];
                v1015[8] = v988[8];
                v1016 = v988[9];
                v1009 = 1;
                v1015[9] = v1016;
                v1010 = v1682 + 1;
                LODWORD(v1682) = v1682 + 1;
LABEL_1301:
                if ( v1683 )
                {
                  v1019 = (unsigned int *)v1683;
                  v1641 = (unsigned int *)v1683;
                  if ( v1010 )
                  {
                    while ( (int)sub_18003ECBC((unsigned int)v1008, *v1019, &v1528) >= 0 )
                    {
                      v1527 = v1528;
                      if ( (int)sub_18003EC98(v1020, v1528, &v1641) < 0 )
                        break;
                      v1019 = v1641;
                      if ( v1009 + v1021 >= v1010 )
                        goto LABEL_1309;
                    }
                    goto LABEL_1658;
                  }
LABEL_1309:
                  v1022 = sub_18003EC98(v1019, v1008, &v1671);
                  if ( v1022 < 0 || v1023 + 3 > (_DWORD *)((char *)v1683 + HIDWORD(v1682)) )
                    goto LABEL_1658;
                  v1024 = v1671;
                  *v1023 = 8;
                  *v1024 = *(_QWORD *)v986;
                  v1018 = v1009 + v1682;
                  LODWORD(v1682) = v1009 + v1682;
                }
                else
                {
                  if ( (int)sub_18003ECBC((unsigned int)v1008, 8LL, &v1526) < 0 )
                    goto LABEL_1658;
                  v1527 = v1526;
                  if ( (int)sub_18003ECBC(HIDWORD(v1682), v1526, (char *)&v1682 + 4) < 0 )
                    goto LABEL_1658;
                  v1018 = v1009 + v1682;
                  LODWORD(v1682) = v1009 + v1682;
                }
                v1642 = v1639;
                if ( v1683 )
                {
                  v1026 = (unsigned int *)v1683;
                  v1643 = (unsigned int *)v1683;
                  if ( v1018 )
                  {
                    while ( (int)sub_18003ECBC((unsigned int)v1017, *v1026, &v1531) >= 0 )
                    {
                      v1546 = v1531;
                      if ( (int)sub_18003EC98(v1027, v1531, &v1643) < 0 )
                        break;
                      v1026 = v1643;
                      if ( v1009 + v1028 >= v1018 )
                        goto LABEL_1320;
                    }
                    goto LABEL_1658;
                  }
LABEL_1320:
                  if ( (int)sub_18003EC98(v1026, v1017, &v1670) < 0
                    || v1029 + 3 > (_DWORD *)((char *)v1683 + HIDWORD(v1682)) )
                  {
                    goto LABEL_1658;
                  }
                  v1030 = v1670;
                  *v1029 = 8;
                  *v1030 = v1642;
                }
                else
                {
                  if ( (int)sub_18003ECBC((unsigned int)v1017, 8LL, &v1529) < 0 )
                    goto LABEL_1658;
                  v1546 = v1529;
                  if ( (int)sub_18003ECBC(HIDWORD(v1682), v1529, (char *)&v1682 + 4) < 0 )
                    goto LABEL_1658;
                }
                LODWORD(v1682) = v1009 + v1682;
                if ( (int)sub_18003ECBC(v1025, v1025, &v1532) < 0 )
                  goto LABEL_1658;
                v1032 = v1532;
                v1533 = v1532;
                if ( (int)sub_18003ECBC(v1031, 8LL, v1534) < 0 )
                  goto LABEL_1658;
                v1534[1] = v1534[0];
                if ( (int)sub_18003ECBC(v1032, v1534[0], &v1533) < 0 )
                  goto LABEL_1658;
                v1783 = v1533;
                v1454 = 0LL;
                v1033 = 0LL;
                v1797 = 0;
                v1644 = 0LL;
                v1453 = 0LL;
                v1350 = 0;
                v1452 = 0LL;
                v1535 = 0LL;
                v1447 = 0LL;
                v1556 = 0LL;
                v1645 = __rdtsc();
                v1536 = 8;
                v1034 = sub_18003ECBC(8LL, HIDWORD(v1682), &v1536);
                if ( v1034 >= 0 )
                {
                  v1037 = (v1536 + 7) & 0xFFFFFFF8;
                  if ( v1037 >= v1536 )
                  {
                    v1536 = (v1536 + 7) & 0xFFFFFFF8;
                    v1038 = v1037;
                    v1039 = GetProcessHeap();
                    v1040 = HeapAlloc(v1039, 8u, v1038);
                    if ( v1040 )
                    {
                      v1646 = v1040;
                      *v1040 = v1682;
                      v1034 = sub_18003EC98(v1040, 4LL, &v1646);
                      if ( v1034 < 0
                        || (v1042 = v1646,
                            *(_DWORD *)v1646 = HIDWORD(v1682),
                            v1034 = sub_18003EC98(v1042, v1041, &v1646),
                            v1034 < 0) )
                      {
                        v1036 = 0LL;
                        v1035 = 0;
                      }
                      else
                      {
                        *(_QWORD *)((char *)v1040 + v1536 - 8) = v1645;
                        memcpy(v1646, v1683, HIDWORD(v1682));
                        v1035 = v1536;
                        v1036 = v1040;
                        v1454 = v1040;
                        v1040 = 0LL;
                        v1797 = v1536;
                      }
                      if ( v1040 )
                      {
                        v1043 = GetProcessHeap();
                        HeapFree(v1043, 0, v1040);
                        v1035 = v1797;
                        v1036 = v1454;
                      }
                    }
                    else
                    {
                      v1034 = -1073741801;
                      v1035 = 0;
                      v1036 = 0LL;
                    }
                  }
                  else
                  {
                    v1034 = -1073741675;
                  }
                }
                v1044 = v1034 | 0x10000000;
                if ( v1044 < 0 )
                  goto LABEL_1613;
                v1647 = 0LL;
                v1045 = 0LL;
                v1446 = 0LL;
                if ( v1036 )
                {
                  v1047 = v1035;
                  v1413 = v1035;
                  if ( v1035
                    && (Srcd = (void *)(v1035 + 8LL), v1445 = (void *)sub_1800443AC(Srcd),
                                                      (v1048 = (char *)v1445) != 0LL) )
                  {
                    v1049 = (unsigned __int8 *)v1454;
                    v1050 = 0;
                    v1761 = 0;
                    v1051 = 0LL;
                    if ( v1047 )
                    {
                      do
                        v1050 ^= *((_BYTE *)v1454 + v1051++);
                      while ( v1051 < v1047 );
                      v1761 = v1050;
                    }
                    v1052 = -1;
                    v1708 = 0xC81ECB17B1B54A58uLL;
                    v1798 = 0;
                    v1385 = 0;
                    v1053 = v1445;
                    v1054 = 0;
                    v1055 = v1047 & 7;
                    if ( (v1047 & 7) != 0 )
                    {
                      v1385 = 0;
                      v1056 = 0;
                      v1057 = 0;
                      v1058 = 56;
                      do
                      {
                        v1059 = *v1049++;
                        if ( v1057 >= 4 )
                        {
                          v1060 = v1385;
                          v1056 |= v1059 << v1058;
                        }
                        else
                        {
                          v1060 = (v1059 << (v1058 - 32)) | v1385;
                          v1385 = v1060;
                        }
                        ++v1057;
                        v1058 -= 8;
                      }
                      while ( v1057 < (int)v1055 );
                      v1047 = v1413;
                      v1798 = v1056;
                      v1054 = v1060 ^ 0xB17A307A;
                      v1061 = v1056 ^ 0x42F6B18D;
                      v1062 = v1060 ^ 0xB17A307A;
                      v1063 = v1056 ^ 0x42F6B18D;
                      if ( v1055 )
                      {
                        for ( i3 = 0; i3 < (int)v1055; ++i3 )
                        {
                          if ( i3 >= 4 )
                          {
                            v1063 = __ROL4__(v1063, 8);
                            v1065 = v1063;
                          }
                          else
                          {
                            v1062 = __ROL4__(v1062, 8);
                            v1065 = v1062;
                          }
                          *v1053++ = v1065;
                        }
                        v96 = v1431;
                        v1033 = 0LL;
                      }
                      if ( v1055 <= 4 )
                      {
                        v1052 = 0;
                        if ( v1055 < 4 )
                          v1054 = v1054 >> (8 * (4 - v1055)) << (8 * (4 - v1055));
                      }
                      else
                      {
                        v1052 = v1061 >> (8 * (8 - v1055)) << (8 * (8 - v1055));
                      }
                      v1048 = (char *)v1445;
                    }
                    if ( v1047 >> 3 )
                    {
                      v1066 = v1053 + 7;
                      v1067 = v1798;
                      v1068 = v1047 >> 3;
                      v1069 = v1385;
                      v1070 = WORD2(v1708);
                      v1810 = HIWORD(v1708);
                      v1410 = WORD1(v1708);
                      v1071 = v1049 + 2;
                      do
                      {
                        v1072 = *(v1071 - 1) | (*(v1071 - 2) << 8);
                        v1073 = v1071[2] << 8;
                        v1074 = *v1071;
                        v1071 += 8;
                        v1075 = *(v1071 - 7) | ((v1074 | (v1072 << 8)) << 8);
                        v1076 = *(v1071 - 3) | ((*(v1071 - 4) | ((*(v1071 - 5) | v1073) << 8)) << 8);
                        v1077 = v1076 ^ v1052;
                        v1078 = v1075 ^ HIDWORD(v1708) ^ (v1077 - 19032) ^ v1054;
                        v1079 = (__ROR4__(v1078, 7) + WORD1(v1708) * __ROR4__(HIDWORD(v1708) ^ v1078, 15)) ^ v1077;
                        v1080 = (v1070 * __ROR4__(v1079 - 1313519016, 9) - __ROR4__(v1079, 10)) ^ v1078;
                        v1081 = (__ROL4__(v1080, 5) + HIWORD(v1708) * __ROL4__(v1070 ^ v1080, 4)) ^ v1079;
                        v1082 = (HIDWORD(v1708) - (v1081 ^ 0xB1B54A58)) ^ v1080;
                        v1083 = (WORD1(v1708) * (v1082 - 19032) - (v1082 >> 6)) ^ v1081;
                        v1084 = (19032 * (v1070 ^ __ROR4__(v1083, 15))) ^ v1082;
                        v1085 = (v1070 * (HIWORD(v1708) + __ROR4__(~v1084, 3))) ^ v1083;
                        v1086 = (v1085 - 19032 - HIDWORD(v1708)) ^ v1084;
                        v1087 = (v1410 * (v1810 ^ v1086)) ^ __ROR4__(v1086, 10) ^ v1085;
                        v1088 = __ROR4__(v1087, 3) ^ (v1070 * __ROL4__(v1087 ^ 0x4A58, 6)) ^ v1086;
                        v1089 = (19032 * (__ROR4__(v1088, 15) - HIWORD(v1708))) ^ v1087;
                        v1090 = (v1089 >> 15) ^ (19032 * __ROL4__(v1089 - v1070, 3)) ^ (v1089 >> 1) ^ (19032 * (HIWORD(v1708) ^ v1089)) ^ v1088;
                        v1091 = (WORD1(v1708) * (v1090 - v1070) - (v1090 >> 13)) ^ v1089;
                        v1092 = __ROR4__(v1091, 11) ^ (v1070 * __ROR4__(-1313519016 - v1091, 9)) ^ v1090;
                        v1093 = (v1092 + 1313519016 - HIWORD(v1708)) ^ v1091;
                        v1094 = (19032 * (v1410 ^ v1093) - __ROR4__(v1093, 7)) ^ v1092;
                        v1095 = (WORD1(v1708) * __ROL4__(HIWORD(v1708) ^ v1094, 4) - __ROR4__(v1094, 16)) ^ v1093;
                        v1096 = (__ROR4__(v1095, 4) + v1070 * __ROR4__(-1313519016 - v1095, 10)) ^ v1094;
                        v1097 = __ROR4__(v1096, 9) ^ (HIWORD(v1708) * __ROR4__(v1096 + 1313519016, 4)) ^ v1095;
                        v1098 = (19032 * __ROL4__(v1097 ^ HIDWORD(v1708), 8) - __ROL4__(v1097, 2)) ^ v1096;
                        v1099 = (WORD1(v1708) * __ROR4__(HIDWORD(v1708) - v1098, 11) - __ROR4__(v1098, 12)) ^ v1097;
                        v1100 = (v1099 >> 8) ^ (v1070 * (v1099 ^ WORD1(v1708))) ^ v1098;
                        v1101 = v1100 ^ v1099 ^ 0xB1B54A58;
                        v1102 = v1069 ^ v1100;
                        v1103 = HIDWORD(v1708) ^ v1101;
                        v1069 = v1075;
                        *(v1066 - 4) = v1102;
                        v1104 = v1067 ^ v1103;
                        *v1066 = v1104;
                        v1067 = v1076;
                        v1105 = __ROR4__(v1102, 8);
                        *(v1066 - 5) = v1105;
                        v1066 += 8;
                        v1106 = __ROR4__(v1104, 8);
                        *(v1066 - 9) = v1106;
                        v1107 = __ROR4__(v1105, 8);
                        *(v1066 - 14) = v1107;
                        v1108 = __ROR4__(v1106, 8);
                        *(v1066 - 10) = v1108;
                        v1109 = __ROR4__(v1107, 8);
                        v1110 = __ROR4__(v1108, 8);
                        *(v1066 - 15) = v1109;
                        *(v1066 - 11) = v1110;
                        v1052 = __ROR4__(v1110, 8);
                        v1054 = __ROR4__(v1109, 8);
                        --v1068;
                      }
                      while ( v1068 );
                      v1050 = v1761;
                      v8 = 0;
                      v96 = v1431;
                      v1033 = 0LL;
                      v1047 = v1413;
                      v1048 = (char *)v1445;
                    }
                    *(_QWORD *)&v1048[v1047] = v1050;
                    v1648 = Srcd;
                    v1647 = v1048;
                    v1649 = &qword_1800B35B0;
                    v1650 = 8LL;
                    v1652 = 160LL;
                    v1651 = xmmword_1800B3510;
                    v1111 = GetProcessHeap();
                    v1112 = HeapAlloc(v1111, 8u, 0x30uLL);
                    v1113 = v1112;
                    if ( v1112 )
                    {
                      *v1112 = (_DWORD)Srcd;
                      v1115 = GetProcessHeap();
                      v1116 = HeapAlloc(v1115, 8u, (unsigned int)Srcd);
                      if ( !v1116 )
                        goto LABEL_1373;
                      *((_QWORD *)v1113 + 1) = v1116;
                      memcpy(v1116, v1445, (unsigned int)Srcd);
                      v1113[4] = 160;
                      v1117 = GetProcessHeap();
                      v1118 = HeapAlloc(v1117, 8u, 0xA0uLL);
                      if ( !v1118 )
                        goto LABEL_1373;
                      *((_QWORD *)v1113 + 3) = v1118;
                      *v1118 = xmmword_1800B3510[0];
                      v1118[1] = xmmword_1800B3510[1];
                      v1118[2] = xmmword_1800B3510[2];
                      v1118[3] = xmmword_1800B3510[3];
                      v1118[4] = xmmword_1800B3510[4];
                      v1118[5] = xmmword_1800B3510[5];
                      v1118[6] = xmmword_1800B3510[6];
                      v1118[7] = xmmword_1800B3510[7];
                      v1118[8] = xmmword_1800B3510[8];
                      v1118[9] = xmmword_1800B3510[9];
                      v1113[8] = 8;
                      v1119 = GetProcessHeap();
                      v1120 = HeapAlloc(v1119, 8u, 8uLL);
                      if ( v1120 )
                      {
                        *((_QWORD *)v1113 + 5) = v1120;
                        v1114 = v1113;
                        v1446 = v1113;
                        v1046 = 0;
                        *v1120 = qword_1800B35B0;
                        v1113 = 0LL;
                      }
                      else
                      {
LABEL_1373:
                        v1046 = -1073741801;
                        v1114 = 0LL;
                      }
                      if ( v1113 )
                      {
                        v1414 = (void *)*((_QWORD *)v1113 + 1);
                        if ( v1414 )
                        {
                          v1121 = GetProcessHeap();
                          HeapFree(v1121, 0, v1414);
                          *((_QWORD *)v1113 + 1) = 0LL;
                        }
                        v1415 = (void *)*((_QWORD *)v1113 + 3);
                        if ( v1415 )
                        {
                          v1122 = GetProcessHeap();
                          HeapFree(v1122, 0, v1415);
                          *((_QWORD *)v1113 + 3) = 0LL;
                        }
                        v1416 = (void *)*((_QWORD *)v1113 + 5);
                        if ( v1416 )
                        {
                          v1123 = GetProcessHeap();
                          HeapFree(v1123, 0, v1416);
                          *((_QWORD *)v1113 + 5) = 0LL;
                        }
                        v1124 = GetProcessHeap();
                        HeapFree(v1124, 0, v1113);
                      }
                    }
                    else
                    {
                      v1046 = -1073741801;
                      v1114 = 0LL;
                    }
                    if ( v1046 < 0 )
                    {
                      v1045 = v1446;
                    }
                    else
                    {
                      v1644 = v1114;
                      v1045 = 0LL;
                    }
                  }
                  else
                  {
                    v1046 = -1073741823;
                  }
                  v1125 = v1647;
                  if ( v1647 )
                  {
                    v1126 = GetProcessHeap();
                    HeapFree(v1126, 0, v1125);
                    v1647 = 0LL;
                  }
                  if ( v1045 )
                  {
                    v1127 = (void *)v1045[1];
                    if ( v1127 )
                    {
                      v1128 = GetProcessHeap();
                      HeapFree(v1128, 0, v1127);
                      v1045[1] = 0LL;
                    }
                    v1129 = (void *)v1045[3];
                    if ( v1129 )
                    {
                      v1130 = GetProcessHeap();
                      HeapFree(v1130, 0, v1129);
                      v1045[3] = 0LL;
                    }
                    v1131 = (void *)v1045[5];
                    if ( v1131 )
                    {
                      v1132 = GetProcessHeap();
                      HeapFree(v1132, 0, v1131);
                      v1045[5] = 0LL;
                    }
                    v1133 = GetProcessHeap();
                    HeapFree(v1133, 0, v1045);
                  }
                }
                else
                {
                  v1046 = -1073741811;
                }
                v1044 = v1046 | 0x10000000;
                if ( v1044 < 0 )
                  goto LABEL_1613;
                v1134 = (const void **)v1644;
                v1537 = 4;
                v1135 = sub_18003ECBC(4LL, *(unsigned int *)v1644, &v1537);
                if ( v1135 < 0
                  || (v1135 = sub_18003ECBC(v1537, v1136, &v1537), v1135 < 0)
                  || (v1135 = sub_18003ECBC(v1537, *((unsigned int *)v1134 + 4), &v1537), v1135 < 0)
                  || (v1135 = sub_18003ECBC(v1537, v1137, &v1537), v1135 < 0) )
                {
                  v1138 = v1538;
                }
                else
                {
                  v1135 = sub_18003ECBC(v1537, *((unsigned int *)v1134 + 8), &v1537);
                  v1138 = v1538;
                  if ( v1135 >= 0 )
                    v1138 = v1537;
                  v1538 = v1138;
                }
                if ( v1135 >= 0 )
                {
                  v1139 = v1138;
                  v1140 = GetProcessHeap();
                  v1141 = HeapAlloc(v1140, 8u, v1139);
                  if ( v1141 )
                  {
                    *v1141 = *(_DWORD *)v1134;
                    v1653 = v1141;
                    v1135 = sub_18003EC98(v1141, 4LL, &v1653);
                    if ( v1135 >= 0 )
                    {
                      memcpy(v1653, v1134[1], *(unsigned int *)v1134);
                      v1135 = sub_18003EC98(v1653, *(unsigned int *)v1134, &v1653);
                      if ( v1135 >= 0 )
                      {
                        v1142 = v1653;
                        *(_DWORD *)v1653 = *((_DWORD *)v1134 + 4);
                        v1135 = sub_18003EC98(v1142, 4LL, &v1653);
                        if ( v1135 >= 0 )
                        {
                          memcpy(v1653, v1134[3], *((unsigned int *)v1134 + 4));
                          v1135 = sub_18003EC98(v1653, *((unsigned int *)v1134 + 4), &v1653);
                          if ( v1135 >= 0 )
                          {
                            v1143 = v1653;
                            *(_DWORD *)v1653 = *((_DWORD *)v1134 + 8);
                            v1135 = sub_18003EC98(v1143, 4LL, &v1653);
                            if ( v1135 >= 0 )
                            {
                              memcpy(v1653, v1134[5], *((unsigned int *)v1134 + 8));
                              v1135 = sub_18003EC98(v1653, *((unsigned int *)v1134 + 8), &v1653);
                              if ( v1135 >= 0 )
                              {
                                v1453 = v1141;
                                v1141 = 0LL;
                                v1350 = v1538;
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( v1141 )
                    {
                      v1144 = GetProcessHeap();
                      HeapFree(v1144, 0, v1141);
                    }
                  }
                  else
                  {
                    v1135 = -1073741801;
                  }
                }
                v1044 = v1135 | 0x10000000;
                if ( v1044 < 0 )
                {
LABEL_1613:
                  v1298 = v1454;
                  if ( v1454 )
                  {
                    v1299 = GetProcessHeap();
                    HeapFree(v1299, 0, v1298);
                  }
                  v1300 = v1644;
                  if ( v1644 )
                  {
                    v1301 = (void *)*((_QWORD *)v1644 + 1);
                    if ( v1301 )
                    {
                      v1302 = GetProcessHeap();
                      HeapFree(v1302, 0, v1301);
                      v1300[1] = 0LL;
                    }
                    v1303 = (void *)v1300[3];
                    if ( v1303 )
                    {
                      v1304 = GetProcessHeap();
                      HeapFree(v1304, 0, v1303);
                      v1300[3] = 0LL;
                    }
                    v1305 = (void *)v1300[5];
                    if ( v1305 )
                    {
                      v1306 = GetProcessHeap();
                      HeapFree(v1306, 0, v1305);
                      v1300[5] = 0LL;
                    }
                    v1307 = GetProcessHeap();
                    HeapFree(v1307, 0, v1300);
                    v1644 = 0LL;
                  }
                  v1308 = v1453;
                  if ( v1453 )
                  {
                    v1309 = GetProcessHeap();
                    HeapFree(v1309, 0, v1308);
                  }
                  v1310 = v1452;
                  if ( v1452 )
                  {
                    v1311 = GetProcessHeap();
                    HeapFree(v1311, 0, v1310);
                  }
                  if ( v1033 )
                  {
                    v1312 = (void *)*((_QWORD *)v1033 + 1);
                    if ( v1312 )
                    {
                      v1313 = GetProcessHeap();
                      HeapFree(v1313, 0, v1312);
                      *((_QWORD *)v1033 + 1) = 0LL;
                    }
                    v1314 = (void *)*((_QWORD *)v1033 + 3);
                    if ( v1314 )
                    {
                      v1315 = GetProcessHeap();
                      HeapFree(v1315, 0, v1314);
                      *((_QWORD *)v1033 + 3) = 0LL;
                    }
                    v1316 = (void *)*((_QWORD *)v1033 + 5);
                    if ( v1316 )
                    {
                      v1317 = GetProcessHeap();
                      HeapFree(v1317, 0, v1316);
                      *((_QWORD *)v1033 + 5) = 0LL;
                    }
                    v1318 = GetProcessHeap();
                    HeapFree(v1318, 0, v1033);
                  }
                  v1319 = v1556;
                  if ( v1556 )
                  {
                    v1320 = GetProcessHeap();
                    HeapFree(v1320, 0, v1319);
                  }
                  if ( v1044 >= 0 )
                  {
                    if ( LODWORD(v1686[0]) )
                    {
                      v1321 = (unsigned int *)v1686[1];
                      if ( v1686[1] )
                      {
                        v1665[0] = v1686[1];
                        if ( (int)sub_18003EC98(v1686[1], 4LL, v1665) >= 0 )
                        {
                          v1325 = (int *)v1665[0];
                          v1548[1] = v1323;
                          if ( !v1323 )
                            v1325 = 0LL;
                          v1665[0] = v1325;
                          v1665[1] = v1325;
                          if ( v1323 == (_DWORD)v1324 )
                          {
                            v1549 = *v1325;
                            if ( v1549 >= 0 && v1322 > 1 )
                            {
                              for ( v1666[0] = v1321;
                                    (int)sub_18003EC98(v1321, v1324, v1666) >= 0
                                 && (int)sub_18003EC98(v1666[0], *v1321, v1666) >= 0;
                                    v1321 = (unsigned int *)v1666[0] )
                              {
                                if ( v1326 != -1 )
                                {
                                  v1327 = *(_DWORD *)v1666[0];
                                  if ( (int)sub_18003EC98(v1666[0], v1324, v1666) >= 0 )
                                  {
                                    v1328 = (_QWORD *)v1666[0];
                                    v1550 = v1327;
                                    if ( !v1327 )
                                      v1328 = 0LL;
                                    v1666[0] = v1328;
                                    v1666[1] = v1328;
                                    if ( v1327 == 8 )
                                      v1666[2] = *v1328;
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
                  v986 = (WCHAR *)v1448;
                  goto LABEL_1658;
                }
                v1654 = 0LL;
                v1539 = 0;
                v1655 = 0LL;
                v1540 = 0;
                v1541 = 8;
                v1145 = sub_18003ECBC(8LL, v1783, &v1541);
                v1044 = v1147 | v1145;
                if ( (v1147 | v1145) >= 0 )
                {
                  v1148 = (v1541 + 7) & 0xFFFFFFF8;
                  if ( v1148 >= v1541 )
                  {
                    v1543 = (v1541 + 7) & 0xFFFFFFF8;
                    v1149 = sub_18003ECBC(v1148, v1146, &v1543);
                    v1150 = v1542;
                    v1044 = v1149;
                    if ( v1149 >= 0 )
                      v1150 = v1543;
                    v1542 = v1150;
                  }
                  else
                  {
                    v1044 = -1073741675;
                  }
                  if ( v1044 >= 0 )
                  {
                    if ( !v1683 || (unsigned int)v1682 <= 1 )
                      goto LABEL_1435;
                    v1151 = (unsigned int *)v1683;
                    v1152 = 0;
                    v1656 = (unsigned int *)v1683;
                    while ( 1 )
                    {
                      v1153 = *v1151;
                      v1044 = sub_18003EC98(v1151, 4LL, &v1656);
                      if ( v1044 < 0 )
                        break;
                      v1044 = sub_18003EC98(v1656, v1153, &v1656);
                      if ( v1044 < 0 )
                        break;
                      v1151 = v1656;
                      if ( ++v1152 )
                      {
                        v1154 = *v1656;
                        v1044 = sub_18003EC98(v1656, 4LL, &v1656);
                        if ( v1044 >= 0 )
                        {
                          v1155 = v1656;
                          v1539 = v1154;
                          if ( !v1154 )
                            v1155 = 0LL;
                          v1656 = v1155;
                          v1654 = v1155;
                        }
                        break;
                      }
                    }
                    if ( v1044 < 0 )
                      goto LABEL_1613;
                    if ( (unsigned int)v1682 > 2 )
                    {
                      v1156 = (unsigned int *)v1683;
                      v1157 = 0;
                      v1657 = (unsigned int *)v1683;
                      while ( 1 )
                      {
                        v1158 = *v1156;
                        v1044 = sub_18003EC98(v1156, 4LL, &v1657);
                        if ( v1044 < 0 )
                          break;
                        v1044 = sub_18003EC98(v1657, v1158, &v1657);
                        if ( v1044 < 0 )
                          break;
                        v1156 = v1657;
                        if ( (unsigned int)++v1157 >= 2 )
                        {
                          v1160 = *v1657;
                          v1044 = sub_18003EC98(v1657, 4LL, &v1657);
                          if ( v1044 >= 0 )
                          {
                            v1161 = v1657;
                            v1540 = v1160;
                            if ( !v1160 )
                              v1161 = 0LL;
                            v1657 = v1161;
                            v1655 = v1161;
                          }
                          break;
                        }
                      }
                      if ( v1044 >= 0 )
                      {
                        v1544 = 4;
                        v1044 = sub_18003ECBC(4LL, v1159, &v1544);
                        if ( v1044 < 0
                          || (v1044 = sub_18003ECBC(v1544, 4LL, &v1544), v1044 < 0)
                          || (v1044 = sub_18003ECBC(v1544, v1162, &v1544), v1044 < 0)
                          || (v1044 = sub_18003ECBC(v1544, 4LL, &v1544), v1044 < 0) )
                        {
                          v1164 = v1545;
                        }
                        else
                        {
                          v1044 = sub_18003ECBC(v1544, v1163, &v1544);
                          v1164 = v1545;
                          if ( v1044 >= 0 )
                            v1164 = v1544;
                          v1545 = v1164;
                        }
                        if ( v1044 >= 0 )
                        {
                          if ( v1164 > 0x400000 )
                          {
                            v1044 = -2147418113;
                            goto LABEL_1613;
                          }
                          LODWORD(v1535) = v1164;
                        }
                      }
                    }
                    else
                    {
LABEL_1435:
                      v1044 = -1073741811;
                    }
                  }
                }
                if ( v1044 < 0 )
                  goto LABEL_1613;
                v1165 = v1535;
                v1166 = GetProcessHeap();
                v1167 = (int *)HeapAlloc(v1166, 8u, v1165);
                if ( v1167 )
                {
                  v1168 = v1167;
                  v1452 = v1167;
                  v1044 = 0x10000000;
                }
                else
                {
                  v1044 = -805306345;
                  v1168 = 0LL;
                }
                if ( v1044 < 0 )
                  goto LABEL_1613;
                if ( !v1453 || !v1168 )
                {
                  v1044 = -2147024809;
                  goto LABEL_1613;
                }
                v1693[0] = v1453;
                v1694 = v1350;
                v1695 = v1535;
                v1693[1] = v1168;
                v1696 = 0;
                if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                  && (v1169 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                {
                  v1170 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1169)(134LL, v1693);
                  v1171 = v1535;
                  v1044 = v1170 | 0x10000000;
                  if ( v1170 >= 0 )
                    v1171 = v1695;
                  LODWORD(v1535) = v1171;
                }
                else
                {
                  v1172 = GetLastError();
                  v1044 = v1172;
                  if ( v1172 > 0 )
                    v1044 = (unsigned __int16)v1172 | 0x80070000;
                  if ( v1044 >= 0 )
                    v1044 = -2147467259;
                  v1171 = v1535;
                }
                if ( v1044 == -805306333 )
                {
                  v1044 = -2147024774;
                  goto LABEL_1613;
                }
                if ( v1044 < 0 )
                  goto LABEL_1613;
                v1446 = 0LL;
                v1562 = 0;
                v1659 = v1168;
                if ( v1171 < 4 )
                  goto LABEL_1501;
                v1784 = *v1168;
                v1173 = sub_18003EC98(v1168, 4LL, &v1659);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                v1173 = sub_18003ECBC(0LL, 4LL, &v1562);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                if ( v1174 - v1562 < (unsigned int)v1175 )
                  goto LABEL_1501;
                v1417 = v1659;
                Srce = v1175;
                v1173 = sub_18003EC98(v1659, (unsigned int)v1175, &v1659);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                v1173 = sub_18003ECBC(v1562, v1176, &v1562);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                if ( v1177 - v1562 < 4 )
                  goto LABEL_1501;
                v1178 = *(unsigned int *)v1659;
                v1173 = sub_18003EC98(v1659, 4LL, &v1659);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                v1173 = sub_18003ECBC(v1562, 4LL, &v1562);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                if ( v1179 - v1562 < (unsigned int)v1178 )
                  goto LABEL_1501;
                v1445 = v1659;
                v1173 = sub_18003EC98(v1659, (unsigned int)v1178, &v1659);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                v1173 = sub_18003ECBC(v1562, (unsigned int)v1178, &v1562);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                if ( v1180 - v1562 < 4 )
                  goto LABEL_1501;
                v1799 = *(_DWORD *)v1659;
                v1173 = sub_18003EC98(v1659, 4LL, &v1659);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                v1173 = sub_18003ECBC(v1562, 4LL, &v1562);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                if ( v1181 - v1562 < v1182 )
                  goto LABEL_1501;
                v1173 = sub_18003ECBC(v1562, v1182, &v1562);
                if ( v1173 < 0 )
                  goto LABEL_1534;
                if ( v1183 != v1562 || (unsigned int)(v1185 + v1184 + v1178) + 12LL != v1183 )
                {
LABEL_1501:
                  v1173 = -1073741762;
                  goto LABEL_1534;
                }
                v1186 = GetProcessHeap();
                v1187 = HeapAlloc(v1186, 8u, 0x30uLL);
                v1188 = v1187;
                if ( !v1187 )
                {
                  v1173 = -1073741801;
                  goto LABEL_1524;
                }
                if ( v1417 )
                {
                  *(_DWORD *)v1187 = v1784;
                  v1189 = GetProcessHeap();
                  v1190 = HeapAlloc(v1189, 8u, (SIZE_T)Srce);
                  if ( v1190 )
                  {
                    v1188[1] = v1190;
                    memcpy(v1190, v1417, (size_t)Srce);
                    goto LABEL_1507;
                  }
LABEL_1505:
                  v1173 = -1073741801;
                }
                else
                {
                  *(_DWORD *)v1187 = 0;
                  v1187[1] = 0LL;
LABEL_1507:
                  v1191 = v1445;
                  if ( v1445 )
                  {
                    *((_DWORD *)v1188 + 4) = v1178;
                    v1192 = GetProcessHeap();
                    v1193 = HeapAlloc(v1192, 8u, v1178);
                    if ( !v1193 )
                      goto LABEL_1505;
                    v1188[3] = v1193;
                    memcpy(v1193, v1191, v1178);
                  }
                  else
                  {
                    *((_DWORD *)v1188 + 4) = 0;
                    v1188[3] = 0LL;
                  }
                  if ( v1659 )
                  {
                    *((_DWORD *)v1188 + 8) = v1799;
                    v1194 = GetProcessHeap();
                    v1195 = HeapAlloc(v1194, 8u, v1799);
                    if ( !v1195 )
                      goto LABEL_1505;
                    v1188[5] = v1195;
                    memcpy(v1195, v1659, v1799);
                  }
                  else
                  {
                    *((_DWORD *)v1188 + 8) = 0;
                    v1188[5] = 0LL;
                  }
                  v1446 = v1188;
                  v1173 = 0;
                  v1188 = 0LL;
                }
                if ( v1188 )
                {
                  v1196 = (void *)v1188[1];
                  if ( v1196 )
                  {
                    v1197 = GetProcessHeap();
                    HeapFree(v1197, 0, v1196);
                    v1188[1] = 0LL;
                  }
                  v1198 = (void *)v1188[3];
                  if ( v1198 )
                  {
                    v1199 = GetProcessHeap();
                    HeapFree(v1199, 0, v1198);
                    v1188[3] = 0LL;
                  }
                  v1200 = (void *)v1188[5];
                  if ( v1200 )
                  {
                    v1201 = GetProcessHeap();
                    HeapFree(v1201, 0, v1200);
                    v1188[5] = 0LL;
                  }
                  v1202 = GetProcessHeap();
                  HeapFree(v1202, 0, v1188);
                }
LABEL_1524:
                v1033 = v1446;
                v1203 = 0LL;
                if ( v1173 < 0 )
                {
                  v1203 = v1446;
                  v1033 = 0LL;
                }
                v1447 = (__int64)v1033;
                if ( v1203 )
                {
                  v1204 = (void *)v1203[1];
                  if ( v1204 )
                  {
                    v1205 = GetProcessHeap();
                    HeapFree(v1205, 0, v1204);
                    v1203[1] = 0LL;
                  }
                  v1206 = (void *)v1203[3];
                  if ( v1206 )
                  {
                    v1207 = GetProcessHeap();
                    HeapFree(v1207, 0, v1206);
                    v1203[3] = 0LL;
                  }
                  v1208 = (void *)v1203[5];
                  if ( v1208 )
                  {
                    v1209 = GetProcessHeap();
                    HeapFree(v1209, 0, v1208);
                    v1203[5] = 0LL;
                  }
                  v1210 = GetProcessHeap();
                  HeapFree(v1210, 0, v1203);
                  v1447 = (__int64)v1033;
                }
LABEL_1534:
                v1044 = v1173 | 0x10000000;
                if ( v1044 < 0 )
                  goto LABEL_1613;
                v1211 = 0;
                v1660 = 0LL;
                if ( !v1033 || (v1446 = (LPVOID)*((_QWORD *)v1033 + 1)) == 0LL || !*v1033 )
                {
                  v1044 = -805306355;
                  goto LABEL_1613;
                }
                v1212 = (unsigned int)*v1033 - 8LL;
                v1418 = (LPVOID)v1212;
                Srcf = (_BYTE *)sub_1800443AC(v1212);
                v1213 = Srcf;
                if ( Srcf )
                {
                  v1214 = (unsigned __int8 *)v1446;
                  v1709 = 0x7F1137FAB69605ELL;
                  v1215 = 0;
                  v1216 = Srcf;
                  v1445 = Srcf;
                  v1217 = 0;
                  v1218 = 0;
                  v1219 = v1212 & 7;
                  if ( (v1212 & 7) != 0 )
                  {
                    v1451 = 0;
                    v1220 = 56;
                    do
                    {
                      v1221 = *v1214++;
                      if ( v1218 >= 4 )
                      {
                        v1222 = (v1221 << v1220) | v1451;
                        v1451 = v1222;
                      }
                      else
                      {
                        v1222 = v1451;
                        v1217 |= v1221 << (v1220 - 32);
                      }
                      ++v1218;
                      v1220 -= 8;
                    }
                    while ( v1218 < (int)v1219 );
                    v96 = v1431;
                    v1033 = (_DWORD *)v1447;
                    v1800 = v1217;
                    v1223 = v1217;
                    v1224 = v1222 ^ 0x699A899C;
                    v1218 = v1223 ^ 0x92F65A5;
                    v1225 = v1218;
                    v1226 = v1224;
                    if ( (v1212 & 7) != 0 )
                    {
                      v1227 = Srcf;
                      v1228 = 0;
                      do
                      {
                        v1445 = v1227 + 1;
                        if ( v1228 >= 4 )
                        {
                          v1226 = __ROL4__(v1226, 8);
                          v1229 = v1226;
                        }
                        else
                        {
                          v1225 = __ROL4__(v1225, 8);
                          v1229 = v1225;
                        }
                        *v1227 = v1229;
                        ++v1228;
                        v1227 = v1445;
                      }
                      while ( v1228 < (int)v1219 );
                      v1212 = (unsigned __int64)v1418;
                      v1216 = (char *)v1445;
                      v96 = v1431;
                      v1215 = 0;
                    }
                    else
                    {
                      v1216 = Srcf;
                    }
                    if ( v1219 > 4 )
                    {
                      v1217 = v1224 >> (8 * (8 - v1219)) << (8 * (8 - v1219));
                      goto LABEL_1558;
                    }
                    v1217 = 0;
                    if ( v1219 < 4 )
                    {
                      v1218 = (unsigned int)v1218 >> (8 * (4 - v1219)) << (8 * (4 - v1219));
LABEL_1558:
                      v1216 = (char *)v1445;
                    }
                  }
                  else
                  {
                    v1800 = 0;
                  }
                  v1445 = (void *)(v1212 >> 3);
                  if ( v1212 >> 3 )
                  {
                    v1230 = HIDWORD(v1709);
                    v1231 = v1214 + 2;
                    v1232 = HIWORD(v1709);
                    v1233 = v1216 + 7;
                    v1234 = v1800;
                    v1235 = (char *)v1445;
                    v1236 = WORD2(v1709);
                    v1386 = WORD1(v1709);
                    do
                    {
                      v1237 = *(v1231 - 1) | (*(v1231 - 2) << 8);
                      v1238 = v1231[2] << 8;
                      v1239 = *v1231;
                      v1231 += 8;
                      v1240 = *(v1231 - 7) | ((v1239 | (v1237 << 8)) << 8);
                      v1241 = v1240 ^ v1218;
                      v1242 = *(v1231 - 3) | ((*(v1231 - 4) | ((*(v1231 - 5) | v1238) << 8)) << 8);
                      v1243 = v1241 ^ v1230 ^ 0xAB69605E ^ v1242 ^ v1217;
                      v1244 = (__ROL4__(v1243, 10) + v1236 * __ROL4__(v1243 + 1419157410, 5)) ^ v1241;
                      v1245 = (WORD1(v1709) * __ROR4__(v1244 + v1230, 9) - __ROL4__(v1244, 2)) ^ v1243;
                      v1246 = (24670 * (v1245 - v1236) - (v1245 >> 13)) ^ v1244;
                      v1247 = (v1232 * __ROL4__(v1246 ^ WORD1(v1709), 6) - __ROL4__(v1246, 2)) ^ v1245;
                      v1248 = (v1230 - (v1247 ^ 0xAB69605E)) ^ v1246;
                      v1249 = (v1386 * (v1248 ^ v1236)) ^ __ROR4__(v1248, 6) ^ v1247;
                      v1250 = (__ROL4__(v1249, 2) + 24670 * __ROR4__(v1249 + v1230, 15)) ^ v1248;
                      v1251 = (v1232 * __ROR4__(v1250 + 1419157410, 14) - __ROL4__(v1250, 8)) ^ v1249;
                      v1252 = __ROR4__(v1251, 10) ^ (v1236 * __ROR4__(v1251 ^ 0xAB69605E, 12)) ^ v1250;
                      v1253 = (v1252 >> 10) ^ (WORD1(v1709) * (v1252 ^ v1232)) ^ v1251;
                      v1254 = (v1232 * (__ROR4__(~v1253, 5) + 24670)) ^ v1252;
                      v1255 = (v1254 - v1232) ^ 0xAB69605E ^ v1253;
                      v1256 = ((v1255 >> 2) + v1236 * __ROL4__(v1255 ^ v1232, 2)) ^ v1254;
                      v1257 = (__ROL4__(v1256, 7) + WORD1(v1709) * __ROR4__(v1256 - v1230, 6)) ^ v1255;
                      v1258 = (24670 * (v1257 ^ v1236) + __ROR4__(v1257, 9)) ^ v1256;
                      v1259 = (__ROL4__(v1258, 7) + v1232 * __ROL4__(v1258 ^ WORD1(v1709), 5)) ^ v1257;
                      v1260 = v1230 ^ v1259 ^ 0xAB69605E ^ v1258;
                      v1261 = (v1236 * (__ROR4__(v1260, 3) - WORD1(v1709))) ^ v1259;
                      v1262 = (24670 * __ROR4__(v1261 - v1230, 1) - __ROR4__(v1261, 6)) ^ v1260;
                      v1263 = (__ROL4__(v1262, 14) + v1232 * __ROL4__(v1262 - 1419157410, 3)) ^ v1261;
                      v1264 = (v1236 * __ROL4__(v1263 - 1419157410, 15) - __ROR4__(v1263, 14)) ^ v1262;
                      v1265 = (v1264 >> 3) ^ (WORD1(v1709) * (v1264 ^ 0x605E)) ^ v1263;
                      v1266 = v1451 ^ v1265;
                      v1451 = v1242;
                      v1267 = v1234 ^ __ROL4__(v1265, 2) ^ (24670 * __ROL4__(v1230 ^ v1265, 4));
                      v1234 = v1240;
                      v1268 = v1267 ^ v1264;
                      *(v1233 - 4) = v1268;
                      *v1233 = v1266;
                      v1233 += 8;
                      v1269 = __ROR4__(v1268, 8);
                      *(v1233 - 13) = v1269;
                      v1270 = __ROR4__(v1266, 8);
                      *(v1233 - 9) = v1270;
                      v1271 = __ROR4__(v1269, 8);
                      *(v1233 - 14) = v1271;
                      v1272 = __ROR4__(v1270, 8);
                      *(v1233 - 10) = v1272;
                      v1273 = __ROR4__(v1271, 8);
                      v1274 = __ROR4__(v1272, 8);
                      *(v1233 - 15) = v1273;
                      *(v1233 - 11) = v1274;
                      v1217 = __ROR4__(v1274, 8);
                      v1218 = __ROR4__(v1273, 8);
                      --v1235;
                    }
                    while ( v1235 );
                    v1215 = 0;
                    v8 = 0;
                    v96 = v1431;
                    v1211 = 0;
                    v1033 = (_DWORD *)v1447;
                    v1212 = (unsigned __int64)v1418;
                    v1213 = Srcf;
                  }
                  for ( i4 = 0LL; i4 < v1212; ++i4 )
                    v1215 ^= v1213[i4];
                  if ( v1215 == *(_QWORD *)((char *)v1446 + v1212) )
                  {
                    v1276 = v1213;
                    v1211 = v1212;
                    v1277 = 0;
                    v1213 = 0LL;
                    v1660 = v1276;
                  }
                  else
                  {
                    v1276 = v1660;
                    v1277 = -1073425151;
                  }
                  if ( v1213 )
                  {
                    sub_18003850C(v1213);
                    v1276 = v1660;
                  }
                  if ( v1277 >= 0 )
                  {
                    v1278 = v1276;
                    v1556 = v1276;
                    v1276 = 0LL;
                    HIDWORD(v1535) = v1211;
                    v1660 = 0LL;
                    v1044 = 0x10000000;
                    goto LABEL_1575;
                  }
                }
                else
                {
                  v1276 = v1660;
                }
                v1211 = HIDWORD(v1535);
                v1044 = -805306367;
                v1278 = 0LL;
LABEL_1575:
                if ( v1276 )
                {
                  v1279 = GetProcessHeap();
                  HeapFree(v1279, 0, v1276);
                  v1211 = HIDWORD(v1535);
                  v1660 = 0LL;
                }
                if ( v1044 < 0 )
                  goto LABEL_1613;
                v1547[0] = 0;
                v1661 = v1278;
                if ( v1211 < 4 )
                  goto LABEL_1611;
                v1785 = *v1278;
                v1280 = sub_18003EC98(v1278, 4LL, &v1661);
                if ( v1280 >= 0 )
                {
                  v1280 = sub_18003ECBC(0LL, v1281, v1547);
                  if ( v1280 >= 0 )
                  {
                    if ( v1211 - v1547[0] < v1282 )
                      goto LABEL_1611;
                    v1280 = sub_18003EC98(v1661, v1282, &v1661);
                    if ( v1280 >= 0 )
                    {
                      v1280 = sub_18003ECBC(v1547[0], v1283, v1547);
                      if ( v1280 >= 0 )
                      {
                        if ( v1211 - v1547[0] < v1284 )
                          goto LABEL_1611;
                        v1280 = sub_18003ECBC(v1547[0], v1284, v1547);
                        if ( v1280 >= 0 )
                        {
                          v1286 = v1661;
                          v1287 = v1211;
                          v1288 = (unsigned int)v1285;
                          if ( (char *)v1278 + v1287 < (char *)v1661 + v1285
                            || (unsigned __int64)v1278 + v1287 - v1285 - (_QWORD)v1661 >= 8 )
                          {
                            goto LABEL_1611;
                          }
                          v1351 = 0;
                          v1289 = 0LL;
                          v1280 = 0;
                          if ( !v1661 )
                            goto LABEL_1601;
                          v1280 = sub_18003EC98(v1661, (unsigned int)v1285, &v1662);
                          if ( v1280 < 0 )
                            goto LABEL_1609;
                          v1291 = v1662;
                          if ( (unsigned __int64)v1286 < v1662 )
                          {
                            while ( 1 )
                            {
                              v1280 = sub_18003EC98(v1290, 4LL, &v1663);
                              if ( v1280 < 0 )
                                goto LABEL_1609;
                              if ( v1663 > v1293 )
                                goto LABEL_1604;
                              v1294 = sub_18003ECBC(4LL, *v1292, v1548);
                              v1280 = v1294;
                              if ( v1294 >= 0 )
                                v1296 = v1548[0];
                              v1547[1] = v1296;
                              if ( v1294 < 0 )
                                goto LABEL_1609;
                              v1280 = sub_18003EC98(v1295, v1296, &v1664);
                              if ( v1280 < 0 )
                                goto LABEL_1609;
                              v1290 = v1664;
                              if ( v1664 > v1291 )
                                goto LABEL_1604;
                              ++v1351;
                              if ( v1664 >= v1291 )
                              {
                                LODWORD(v1285) = v1288;
                                break;
                              }
                            }
                          }
                          if ( v1290 != v1291 )
                          {
LABEL_1604:
                            v1280 = -1073741811;
                          }
                          else
                          {
LABEL_1601:
                            if ( (_DWORD)v1285 )
                            {
                              v1297 = GetProcessHeap();
                              v1289 = HeapAlloc(v1297, 8u, v1288);
                              if ( !v1289 )
                              {
                                v1280 = -1073741801;
                                goto LABEL_1609;
                              }
                              v1280 = 0;
                            }
                            if ( v1286 )
                              memcpy(v1289, v1286, v1288);
                            LODWORD(v1686[0]) = v1351;
                            v1686[1] = v1289;
LABEL_1609:
                            if ( v1280 >= 0 && v1785 != LODWORD(v1686[0]) )
LABEL_1611:
                              v1280 = -1073741762;
                          }
                        }
                      }
                    }
                  }
                }
                v1044 = v1280 | 0x10000000;
                goto LABEL_1613;
              }
            }
          }
        }
      }
    }
LABEL_1658:
    v1682 = 0LL;
    v1329 = v1683;
    if ( v1683 )
    {
      v1330 = GetProcessHeap();
      HeapFree(v1330, 0, v1329);
      v1683 = 0LL;
    }
    v1686[0] = 0LL;
    v1331 = v1686[1];
    if ( v1686[1] )
    {
      v1332 = GetProcessHeap();
      HeapFree(v1332, 0, v1331);
      v1686[1] = 0LL;
    }
    if ( v1444 )
    {
      v1333 = GetProcessHeap();
      HeapFree(v1333, 0, v1444);
    }
    if ( v986 )
    {
      v1334 = GetProcessHeap();
      HeapFree(v1334, 0, v986);
    }
  }
LABEL_1666:
  v1335 = v1511;
  v1551 = v1512;
  v1592 = (int *)v1387;
  v1445 = 0LL;
LABEL_1668:
  while ( _InterlockedCompareExchange(&dword_1800B42A8, 1, 0) )
    ;
  v1336 = dword_1800B400C;
  if ( dword_1800B400C > 0 )
  {
    --dword_1800B400C;
    if ( v1336 == 1 )
    {
      v1337 = (HMODULE *)&unk_1800B4230;
      v1338 = 4LL;
      do
      {
        if ( *v1337 )
          FreeLibrary(*v1337);
        v1337 += 3;
        --v1338;
      }
      while ( v1338 );
      memset(&unk_1800B4230, 0, 0x60uLL);
      memcpy(off_1800B3000, off_18008E410, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1800B42A8, 0);
  sub_1800439E4(&v1445);
  if ( v96 >= 0 )
  {
    if ( v1335 == 4 )
    {
      v9 = v1510;
      v1507 = *v1592;
      goto LABEL_9;
    }
    goto LABEL_13;
  }
  switch ( v96 )
  {
    case -805306316:
      v96 = -1073418222;
      break;
    case -805306139:
    case -1073425151:
      v96 = -1073418201;
      break;
    case -805306306:
      v96 = -1073418200;
      break;
    case -2147024774:
LABEL_13:
      v9 = -1073418210;
      goto LABEL_9;
  }
  v9 = v96;
LABEL_9:
  sub_1800439E4(&v1592);
  v11 = v1507;
  if ( v9 < 0 )
    v11 = 0;
  v1507 = v11;
  LOBYTE(v8) = v11 == 1;
  *v1591 = v8;
  dword_1800B4200 = v8;
  dword_1800B4204 = 1;
LABEL_12:
  ReleaseSRWLockExclusive(&stru_1800B4EB0);
  return (unsigned int)v9;
}
