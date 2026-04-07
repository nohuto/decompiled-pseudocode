/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x18004EDC4
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18002A45C (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     StringCchLengthW @ 0x18003C114 (StringCchLengthW.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180042450 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x18004EE9C (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18004EEC0 (RtlUIntAdd.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180052180 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x180052DF0 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18005606A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SLGetHelper(STRSAFE_PCNZWCH psz)
{
  char v2; // r15
  void *v4; // rbx
  int v5; // r14d
  void *v6; // r13
  HANDLE ProcessHeap; // rax
  _OWORD *v8; // rax
  size_t v9; // r10
  _OWORD *v10; // r12
  _OWORD *v11; // rax
  HANDLE v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  int v15; // eax
  unsigned int v16; // r11d
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r11d
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // r11d
  int v24; // eax
  int v25; // r9d
  int v26; // eax
  unsigned int v27; // r11d
  int v28; // eax
  size_t v29; // rdx
  int v30; // r9d
  HRESULT v31; // eax
  int v32; // eax
  unsigned int v33; // r11d
  int v34; // eax
  int v35; // eax
  unsigned int v36; // r11d
  int v37; // eax
  int v38; // r9d
  int v39; // eax
  unsigned int v40; // r11d
  int v41; // eax
  int v42; // r9d
  unsigned int v43; // esi
  HANDLE v44; // rax
  void *v45; // rax
  unsigned int *v46; // r9
  unsigned int v47; // r11d
  _DWORD *v48; // rax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rdx
  unsigned int *v52; // r9
  int v53; // eax
  __int64 v54; // r9
  unsigned int v55; // r10d
  int v56; // r11d
  _DWORD *v57; // r9
  _OWORD *v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  unsigned int *v61; // r9
  int v62; // eax
  __int64 v63; // r9
  unsigned int v64; // r10d
  int v65; // r11d
  _DWORD *v66; // r9
  _QWORD *v67; // rax
  int v68; // eax
  size_t v69; // rdx
  unsigned int *v70; // r9
  int v71; // eax
  __int64 v72; // r9
  unsigned int v73; // r10d
  int v74; // r11d
  _DWORD *v75; // r9
  _QWORD *v76; // rax
  STRSAFE_PCNZWCH v77; // r12
  HRESULT v78; // eax
  __int64 v79; // r9
  void *v80; // rsi
  HANDLE v81; // rax
  void *v82; // rsi
  HANDLE v83; // rax
  HANDLE v84; // rax
  void *v85; // rsi
  HANDLE v86; // rax
  void *v87; // r13
  void *v88; // rsi
  HANDLE v89; // rax
  size_t *v90; // rax
  size_t *v91; // r12
  _OWORD *v92; // rax
  HANDLE v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // r13
  unsigned int v96; // r11d
  int v97; // eax
  unsigned int v98; // r11d
  int v99; // r9d
  int v100; // eax
  unsigned int v101; // r11d
  int v102; // r9d
  int v103; // eax
  int v104; // r9d
  unsigned int v105; // esi
  HANDLE v106; // rax
  void *v107; // rax
  _DWORD *v108; // r9
  int v109; // r11d
  _DWORD *v110; // rax
  int v111; // r11d
  unsigned int v112; // r11d
  __int64 v113; // r9
  int v114; // eax
  __int64 v115; // rdx
  int v116; // r10d
  int v117; // esi
  unsigned int *v118; // r9
  int v119; // eax
  __int64 v120; // r9
  unsigned int v121; // r10d
  _DWORD *v122; // r9
  __int64 v123; // r11
  void *v124; // rcx
  int v125; // eax
  __int64 v126; // rdx
  unsigned int *v127; // r9
  int v128; // eax
  __int64 v129; // r9
  unsigned int v130; // r10d
  int v131; // r11d
  _DWORD *v132; // r9
  _DWORD *v133; // rax
  int v134; // eax
  __int64 v135; // rdx
  int v136; // eax
  __int64 v137; // rcx
  unsigned int v138; // r10d
  int v139; // eax
  unsigned int v140; // r10d
  unsigned int v141; // r9d
  int v142; // eax
  int v143; // eax
  unsigned int v144; // r9d
  int v145; // eax
  unsigned int v146; // r9d
  int v147; // eax
  unsigned int v148; // r9d
  int v149; // eax
  unsigned int v150; // r9d
  unsigned int v151; // eax
  unsigned int *v152; // r9
  int v153; // eax
  __int64 v154; // r9
  unsigned int v155; // r10d
  int v156; // r11d
  _DWORD *v157; // r9
  _DWORD *v158; // rax
  unsigned int v159; // r12d
  size_t *v160; // r13
  LPVOID v161; // r9
  int v162; // r14d
  unsigned int v163; // eax
  unsigned int v164; // esi
  HANDLE v165; // rax
  char *v166; // rax
  char *v167; // rsi
  __int64 v168; // r9
  void *v169; // rcx
  HANDLE v170; // rax
  _QWORD *v171; // r13
  int v172; // r14d
  unsigned __int64 v173; // rsi
  void *v174; // rax
  _BYTE *v175; // r12
  unsigned __int8 *v176; // r9
  unsigned __int8 v177; // al
  unsigned __int64 v178; // rcx
  int v179; // r11d
  _BYTE *v180; // r14
  unsigned int v181; // edx
  int v182; // r12d
  int v183; // r11d
  char v184; // r10
  int v185; // r8d
  int v186; // ecx
  unsigned int v187; // r11d
  int v188; // r12d
  unsigned int v189; // ecx
  unsigned int v190; // r8d
  char v191; // di
  unsigned __int64 v192; // rcx
  unsigned __int8 *v193; // rdx
  int v194; // edi
  int v195; // r12d
  int v196; // esi
  _BYTE *v197; // rax
  unsigned __int64 v198; // r14
  int v199; // r9d
  int v200; // r8d
  int v201; // r11d
  int v202; // r10d
  int v203; // r11d
  int v204; // r10d
  int v205; // r11d
  unsigned int v206; // r10d
  int v207; // r11d
  int v208; // r10d
  int v209; // r11d
  int v210; // r10d
  int v211; // r11d
  int v212; // r10d
  unsigned int v213; // r11d
  unsigned int v214; // r10d
  int v215; // r11d
  int v216; // r10d
  int v217; // r11d
  int v218; // r10d
  int v219; // r11d
  int v220; // r10d
  int v221; // r11d
  int v222; // r10d
  unsigned int v223; // r11d
  int v224; // r10d
  unsigned int v225; // r11d
  int v226; // r10d
  int v227; // r11d
  int v228; // r11d
  int v229; // r10d
  int v230; // r11d
  int v231; // r10d
  int v232; // r11d
  int v233; // r10d
  int v234; // r11d
  unsigned int v235; // r14d
  HANDLE v236; // rax
  _DWORD *v237; // rax
  _DWORD *v238; // rsi
  HANDLE v239; // rax
  void *v240; // rax
  HANDLE v241; // rax
  _OWORD *v242; // rax
  HANDLE v243; // rax
  _QWORD *v244; // rax
  void *v245; // r12
  HANDLE v246; // rax
  void *v247; // r12
  HANDLE v248; // rax
  void *v249; // r12
  HANDLE v250; // rax
  HANDLE v251; // rax
  void *v252; // rsi
  HANDLE v253; // rax
  void *v254; // rsi
  HANDLE v255; // rax
  void *v256; // rsi
  HANDLE v257; // rax
  void *v258; // rsi
  HANDLE v259; // rax
  HANDLE v260; // rax
  const void **v261; // r12
  int v262; // r14d
  unsigned int v263; // eax
  unsigned int v264; // esi
  HANDLE v265; // rax
  _DWORD *v266; // rax
  __int64 v267; // r9
  void *v268; // rsi
  __int64 v269; // r9
  int v270; // eax
  __int64 v271; // r9
  void *v272; // rcx
  __int64 v273; // r9
  int v274; // eax
  __int64 v275; // r9
  void *v276; // rcx
  __int64 v277; // r9
  int v278; // eax
  HANDLE v279; // rax
  unsigned int v280; // esi
  int v281; // eax
  unsigned int v282; // ecx
  unsigned int v283; // eax
  __int64 v284; // r9
  int v285; // eax
  unsigned int *v286; // rcx
  unsigned int v287; // r12d
  int v288; // r10d
  int v289; // r10d
  void *v290; // rax
  unsigned int v291; // esi
  HANDLE v292; // rax
  unsigned int *v293; // rax
  unsigned int *v294; // rsi
  unsigned int *v295; // rcx
  unsigned int v296; // r12d
  int v297; // r10d
  unsigned int v298; // r10d
  void *v299; // rax
  unsigned int v300; // r11d
  unsigned int v301; // eax
  FARPROC ProcAddress; // rax
  int v303; // eax
  __int64 v304; // r9
  signed int LastError; // eax
  int v306; // r14d
  __int64 v307; // r9
  size_t v308; // r10
  unsigned int v309; // r10d
  __int64 v310; // r9
  SIZE_T v311; // r12
  __int64 v312; // r9
  __int64 v313; // r9
  SIZE_T v314; // r13
  int v315; // r9d
  int v316; // r9d
  int v317; // r10d
  HANDLE v318; // rax
  _QWORD *v319; // rax
  size_t v320; // rsi
  unsigned int v321; // r12d
  unsigned int v322; // eax
  unsigned __int64 v323; // r14
  _BYTE *v324; // rax
  _BYTE *v325; // r13
  unsigned __int8 *v326; // r9
  unsigned __int8 v327; // al
  _BYTE *v328; // rsi
  unsigned int v329; // edx
  int v330; // r11d
  char v331; // r10
  int v332; // ebx
  int v333; // r8d
  int v334; // ecx
  void *v335; // r14
  HANDLE v336; // rax
  void *v337; // rax
  void *v338; // r14
  HANDLE v339; // rax
  void *v340; // rax
  void *v341; // r14
  HANDLE v342; // rax
  void *v343; // rax
  void *v344; // r12
  HANDLE v345; // rax
  void *v346; // r12
  HANDLE v347; // rax
  void *v348; // r12
  HANDLE v349; // rax
  HANDLE v350; // rax
  _QWORD *v351; // rsi
  void *v352; // r12
  HANDLE v353; // rax
  void *v354; // r12
  HANDLE v355; // rax
  void *v356; // r12
  HANDLE v357; // rax
  HANDLE v358; // rax
  unsigned int v359; // r11d
  int v360; // ecx
  unsigned int v361; // r8d
  int v362; // ebx
  char v363; // di
  unsigned int v364; // r11d
  int v365; // eax
  _BYTE *v366; // r13
  char *v367; // rsi
  unsigned __int8 *v368; // r14
  int v369; // ebx
  int v370; // r12d
  int v371; // r9d
  int v372; // r8d
  int v373; // ecx
  int v374; // r9d
  int v375; // r10d
  int v376; // r8d
  unsigned int v377; // r11d
  int v378; // r10d
  unsigned int v379; // r11d
  int v380; // r10d
  int v381; // r11d
  unsigned int v382; // r10d
  int v383; // r11d
  int v384; // r10d
  int v385; // r11d
  unsigned int v386; // r10d
  int v387; // r11d
  int v388; // r10d
  unsigned int v389; // r11d
  int v390; // r10d
  int v391; // r11d
  int v392; // r10d
  int v393; // r11d
  unsigned int v394; // r10d
  int v395; // r11d
  int v396; // r10d
  int v397; // r11d
  unsigned int v398; // r10d
  int v399; // edx
  int v400; // r11d
  int v401; // edx
  int v402; // r10d
  int v403; // r10d
  int v404; // r11d
  int v405; // r10d
  int v406; // r11d
  int v407; // r10d
  int v408; // r11d
  unsigned __int64 i; // rcx
  wchar_t *v410; // rsi
  int v411; // r14d
  HANDLE v412; // rax
  unsigned int v413; // r11d
  int v414; // r14d
  __int64 v415; // r9
  unsigned int v416; // r11d
  SIZE_T v417; // r13
  unsigned int v418; // r11d
  __int64 v419; // r9
  size_t v420; // r10
  void *v421; // rsi
  void *v422; // rax
  void *v423; // r9
  SIZE_T v424; // r11
  unsigned int *v425; // r9
  SIZE_T v426; // r11
  int v427; // eax
  __int64 v428; // r9
  unsigned int v429; // r10d
  HANDLE v430; // rax
  void *v431; // rsi
  HANDLE v432; // rax
  _QWORD *v433; // r12
  void *v434; // rsi
  HANDLE v435; // rax
  void *v436; // rsi
  HANDLE v437; // rax
  void *v438; // rsi
  HANDLE v439; // rax
  HANDLE v440; // rax
  void *v441; // rsi
  HANDLE v442; // rax
  void *v443; // rsi
  HANDLE v444; // rax
  void *v445; // rsi
  HANDLE v446; // rax
  void *v447; // rsi
  HANDLE v448; // rax
  void *v449; // rsi
  HANDLE v450; // rax
  HANDLE v451; // rax
  wchar_t *v452; // rsi
  HANDLE v453; // rax
  int v454; // r9d
  int *v455; // rax
  LPVOID v456; // rcx
  __int64 v457; // r9
  __int64 v458; // r9
  unsigned int v459; // r10d
  int v460; // eax
  int v461; // r9d
  int v462; // r9d
  _QWORD *v463; // rax
  LPVOID v464; // rcx
  __int64 v465; // r9
  __int64 v466; // r9
  unsigned int v467; // r10d
  int v468; // eax
  int v469; // r9d
  int v470; // r9d
  _DWORD *v471; // rax
  LPVOID v472; // rcx
  __int64 v473; // r9
  __int64 v474; // r9
  unsigned int v475; // r10d
  int v476; // r9d
  int v477; // r10d
  LPVOID v478; // r11
  unsigned int *v479; // rcx
  __int64 v480; // r9
  unsigned int v481; // esi
  __int64 v482; // r9
  int v483; // r9d
  int v484; // r9d
  unsigned int *v485; // rax
  unsigned int v486; // esi
  unsigned int *v487; // rcx
  __int64 v488; // r9
  unsigned int v489; // r12d
  __int64 v490; // r9
  unsigned int v491; // r10d
  const void *v492; // r11
  int v493; // r9d
  int v494; // r9d
  _DWORD *v495; // rax
  int v496; // ecx
  unsigned int *v497; // r9
  __int64 v498; // r9
  int v499; // r10d
  unsigned int v500; // r11d
  int v501; // eax
  _DWORD *v502; // r9
  int v503; // r8d
  _OWORD *v504; // rax
  __int64 v505; // rcx
  DWORD v506; // r12d
  unsigned int v507; // r11d
  __int64 v508; // r9
  unsigned int *v509; // r10
  __int64 v510; // r9
  __int64 v511; // r10
  int v512; // eax
  int v513; // r11d
  int v514; // r8d
  _DWORD *v515; // r10
  _QWORD *v516; // rax
  unsigned int v517; // r11d
  unsigned int *v518; // r10
  __int64 v519; // r9
  __int64 v520; // r10
  int v521; // eax
  int v522; // r11d
  DWORD *v523; // r10
  _QWORD *v524; // rax
  __int64 v525; // rcx
  unsigned int v526; // r9d
  unsigned int v527; // eax
  _DWORD *v528; // r13
  int v529; // esi
  unsigned int v530; // r9d
  LPVOID v531; // r10
  void *v532; // r11
  unsigned int v533; // eax
  unsigned int v534; // esi
  HANDLE v535; // rax
  char *v536; // rax
  char *v537; // r12
  __int64 v538; // r9
  void *v539; // rcx
  HANDLE v540; // rax
  int v541; // esi
  _QWORD *v542; // r12
  int v543; // esi
  unsigned __int64 v544; // rsi
  unsigned __int8 *v545; // r9
  unsigned __int8 v546; // al
  unsigned __int64 v547; // rcx
  SIZE_T v548; // rcx
  unsigned int v549; // r10d
  int v550; // r11d
  unsigned int v551; // edx
  int v552; // r11d
  char v553; // r10
  int v554; // edi
  int v555; // r8d
  int v556; // ecx
  unsigned int v557; // r11d
  unsigned int v558; // ecx
  unsigned int v559; // r8d
  _BYTE *v560; // rdi
  int v561; // ebx
  char v562; // r14
  SIZE_T v563; // rdi
  int v564; // r13d
  int v565; // r12d
  unsigned __int8 *v566; // rdx
  unsigned int v567; // r14d
  int v568; // eax
  int v569; // r9d
  int v570; // r8d
  int v571; // r11d
  int v572; // r10d
  int v573; // r11d
  int v574; // r10d
  int v575; // r11d
  unsigned int v576; // r10d
  int v577; // r11d
  int v578; // r10d
  int v579; // r11d
  int v580; // r10d
  int v581; // r11d
  int v582; // r10d
  unsigned int v583; // r11d
  unsigned int v584; // r10d
  int v585; // r11d
  int v586; // r10d
  int v587; // r11d
  int v588; // r10d
  int v589; // r11d
  int v590; // r10d
  int v591; // r11d
  int v592; // r10d
  unsigned int v593; // r11d
  _BYTE *v594; // rcx
  int v595; // r10d
  int v596; // r11d
  int v597; // r10d
  int v598; // r11d
  int v599; // r10d
  int v600; // r11d
  int v601; // r10d
  int v602; // r11d
  int v603; // r10d
  int v604; // r11d
  __int64 v605; // rcx
  wchar_t *v606; // rax
  unsigned int v607; // esi
  HANDLE v608; // rax
  _DWORD *v609; // rax
  _DWORD *v610; // rbx
  HANDLE v611; // rax
  void *v612; // rax
  HANDLE v613; // rax
  _OWORD *v614; // rax
  HANDLE v615; // rax
  _QWORD *v616; // rax
  HANDLE v617; // rax
  HANDLE v618; // rax
  HANDLE v619; // rax
  HANDLE v620; // rax
  void *v621; // rbx
  HANDLE v622; // rax
  void *v623; // rbx
  HANDLE v624; // rax
  void *v625; // rbx
  HANDLE v626; // rax
  void *v627; // rbx
  HANDLE v628; // rax
  HANDLE v629; // rax
  const void **v630; // r12
  int v631; // esi
  unsigned int v632; // r9d
  void *v633; // r11
  unsigned int v634; // r9d
  unsigned int v635; // eax
  unsigned int v636; // ebx
  HANDLE v637; // rax
  _DWORD *v638; // rax
  __int64 v639; // r9
  void *v640; // rbx
  __int64 v641; // r9
  int v642; // eax
  __int64 v643; // r9
  void *v644; // rcx
  __int64 v645; // r9
  int v646; // eax
  __int64 v647; // r9
  void *v648; // rcx
  __int64 v649; // r9
  int v650; // eax
  HANDLE v651; // rax
  int v652; // eax
  unsigned int v653; // ecx
  unsigned int v654; // eax
  __int64 v655; // r9
  int v656; // eax
  unsigned int *v657; // rcx
  int v658; // ebx
  unsigned int v659; // r12d
  unsigned int v660; // ebx
  void *v661; // rax
  unsigned int v662; // ebx
  HANDLE v663; // rax
  _DWORD *v664; // rax
  _DWORD *v665; // rbx
  unsigned int *v666; // rcx
  unsigned int v667; // ebx
  unsigned int v668; // r12d
  __int64 v669; // r9
  int v670; // ebx
  void *v671; // rax
  unsigned int v672; // r10d
  int v673; // eax
  unsigned int v674; // r11d
  unsigned int v675; // eax
  FARPROC v676; // rax
  int v677; // eax
  __int64 v678; // r9
  signed int v679; // eax
  int v680; // esi
  __int64 v681; // r9
  SIZE_T v682; // r11
  unsigned int v683; // r11d
  __int64 v684; // r9
  SIZE_T v685; // r12
  __int64 v686; // r9
  __int64 v687; // r9
  int v688; // r9d
  unsigned int v689; // r10d
  int v690; // r9d
  int v691; // r10d
  int v692; // r11d
  HANDLE v693; // rax
  _QWORD *v694; // rax
  _QWORD *v695; // rbx
  const void *v696; // rsi
  HANDLE v697; // rax
  SIZE_T v698; // r13
  void *v699; // rax
  void *v700; // rsi
  HANDLE v701; // rax
  void *v702; // rax
  void *v703; // rsi
  unsigned int v704; // eax
  unsigned int v705; // r12d
  HANDLE v706; // rax
  void *v707; // rax
  void *v708; // r12
  HANDLE v709; // rax
  void *v710; // r12
  HANDLE v711; // rax
  void *v712; // r12
  HANDLE v713; // rax
  HANDLE v714; // rax
  _QWORD *v715; // rbx
  void *v716; // r12
  HANDLE v717; // rax
  void *v718; // r12
  HANDLE v719; // rax
  void *v720; // r12
  HANDLE v721; // rax
  HANDLE v722; // rax
  void *v723; // rbx
  unsigned int v724; // r12d
  __int64 v725; // rsi
  SIZE_T v726; // rsi
  void *v727; // rax
  wchar_t *v728; // r8
  unsigned __int8 *v729; // rbx
  unsigned __int8 v730; // al
  SIZE_T v731; // rcx
  unsigned int v732; // r11d
  int v733; // edx
  char v734; // di
  int v735; // r9d
  int v736; // ecx
  unsigned int v737; // r11d
  int v738; // ecx
  unsigned int v739; // r9d
  int v740; // r12d
  _BYTE *v741; // rdi
  char v742; // al
  int v743; // eax
  unsigned __int8 *v744; // r14
  int v745; // r12d
  _BYTE *v746; // r13
  SIZE_T v747; // rbx
  unsigned int v748; // esi
  int v749; // r9d
  int v750; // r8d
  int v751; // ecx
  int v752; // r9d
  int v753; // r10d
  int v754; // r8d
  unsigned int v755; // r11d
  int v756; // r10d
  unsigned int v757; // r11d
  int v758; // r10d
  int v759; // r11d
  unsigned int v760; // r10d
  int v761; // r11d
  int v762; // r10d
  int v763; // r11d
  unsigned int v764; // r10d
  int v765; // r11d
  int v766; // r10d
  unsigned int v767; // r11d
  int v768; // r10d
  int v769; // r11d
  int v770; // r10d
  int v771; // r11d
  int v772; // r10d
  int v773; // r11d
  int v774; // r10d
  int v775; // r11d
  unsigned int v776; // r10d
  int v777; // r11d
  int v778; // edx
  int v779; // ecx
  int v780; // r11d
  int v781; // edx
  int v782; // r10d
  int v783; // r10d
  int v784; // r11d
  int v785; // r10d
  int v786; // r11d
  int v787; // r10d
  int v788; // r11d
  SIZE_T j; // rcx
  int v790; // edi
  HANDLE v791; // rax
  int v792; // esi
  __int64 v793; // r9
  unsigned int v794; // r10d
  __int64 v795; // r9
  __int64 v796; // r10
  unsigned int v797; // r11d
  const void *v798; // rbx
  SIZE_T v799; // rdi
  unsigned __int64 v800; // r12
  SIZE_T v801; // r9
  SIZE_T v802; // r11
  unsigned int *v803; // r9
  SIZE_T v804; // r11
  int v805; // eax
  __int64 v806; // r9
  unsigned int v807; // r10d
  HANDLE v808; // rax
  void *v809; // rbx
  HANDLE v810; // rax
  _QWORD *v811; // r12
  void *v812; // rbx
  HANDLE v813; // rax
  void *v814; // rbx
  HANDLE v815; // rax
  void *v816; // rbx
  HANDLE v817; // rax
  HANDLE v818; // rax
  void *v819; // rbx
  HANDLE v820; // rax
  void *v821; // rbx
  HANDLE v822; // rax
  void *v823; // rbx
  HANDLE v824; // rax
  void *v825; // rbx
  HANDLE v826; // rax
  void *v827; // rbx
  HANDLE v828; // rax
  HANDLE v829; // rax
  void *v830; // rbx
  HANDLE v831; // rax
  unsigned int *v832; // rbx
  unsigned int v833; // r9d
  int v834; // r10d
  __int64 v835; // r11
  int *v836; // rax
  __int64 v837; // r9
  __int64 v838; // r9
  int v839; // r9d
  int v840; // r9d
  _QWORD *v841; // rax
  void *v842; // rbx
  HANDLE v843; // rax
  void *v844; // rbx
  HANDLE v845; // rax
  HANDLE v846; // rax
  HANDLE v847; // rax
  unsigned int v848; // ebx
  int v849; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v850; // [rsp+3Ch] [rbp-CCh] BYREF
  SIZE_T dwBytes; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v852; // [rsp+48h] [rbp-C0h]
  size_t *v853; // [rsp+50h] [rbp-B8h]
  __int64 v854; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID v855; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD *v856; // [rsp+68h] [rbp-A0h] BYREF
  size_t v857; // [rsp+70h] [rbp-98h] BYREF
  size_t Size; // [rsp+78h] [rbp-90h] BYREF
  LPVOID lpMem; // [rsp+80h] [rbp-88h]
  unsigned int v860; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v861; // [rsp+8Ch] [rbp-7Ch] BYREF
  size_t v862; // [rsp+90h] [rbp-78h] BYREF
  void *v863; // [rsp+98h] [rbp-70h]
  STRSAFE_PCNZWCH psza; // [rsp+A0h] [rbp-68h] BYREF
  size_t pcchLength; // [rsp+A8h] [rbp-60h] BYREF
  SIZE_T v866; // [rsp+B0h] [rbp-58h] BYREF
  void *v867; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v868; // [rsp+C0h] [rbp-48h]
  unsigned int v869; // [rsp+C4h] [rbp-44h]
  SIZE_T v870; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v871; // [rsp+D0h] [rbp-38h]
  void *v872; // [rsp+D8h] [rbp-30h] BYREF
  void *Src; // [rsp+E0h] [rbp-28h] BYREF
  LPVOID v874; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v875; // [rsp+F0h] [rbp-18h]
  unsigned int v876; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v877; // [rsp+F8h] [rbp-10h] BYREF
  int v878; // [rsp+FCh] [rbp-Ch]
  LPVOID v879[2]; // [rsp+100h] [rbp-8h]
  int v880; // [rsp+110h] [rbp+8h]
  unsigned int v881; // [rsp+114h] [rbp+Ch]
  unsigned int v882; // [rsp+118h] [rbp+10h]
  int v883; // [rsp+120h] [rbp+18h]
  unsigned int v884; // [rsp+128h] [rbp+20h]
  unsigned int v885; // [rsp+12Ch] [rbp+24h]
  unsigned int v886; // [rsp+130h] [rbp+28h]
  unsigned int v887; // [rsp+134h] [rbp+2Ch]
  LPVOID v888; // [rsp+138h] [rbp+30h]
  LPVOID v889; // [rsp+140h] [rbp+38h]
  unsigned int v890; // [rsp+148h] [rbp+40h]
  unsigned int v891; // [rsp+14Ch] [rbp+44h]
  unsigned int v892; // [rsp+150h] [rbp+48h]
  unsigned int v893; // [rsp+154h] [rbp+4Ch]
  unsigned int v894; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v895; // [rsp+15Ch] [rbp+54h]
  int v896; // [rsp+160h] [rbp+58h]
  unsigned int v897; // [rsp+164h] [rbp+5Ch] BYREF
  void *v898; // [rsp+168h] [rbp+60h]
  wchar_t *v899; // [rsp+170h] [rbp+68h]
  unsigned int v900; // [rsp+178h] [rbp+70h]
  unsigned int v901; // [rsp+17Ch] [rbp+74h]
  unsigned int v902; // [rsp+180h] [rbp+78h]
  int v903; // [rsp+184h] [rbp+7Ch]
  unsigned int v904; // [rsp+188h] [rbp+80h]
  unsigned int v905; // [rsp+18Ch] [rbp+84h]
  int v906; // [rsp+190h] [rbp+88h]
  unsigned int v907; // [rsp+194h] [rbp+8Ch] BYREF
  unsigned int v908; // [rsp+198h] [rbp+90h] BYREF
  unsigned int v909; // [rsp+19Ch] [rbp+94h]
  LPVOID v910; // [rsp+1A0h] [rbp+98h]
  LPVOID v911; // [rsp+1A8h] [rbp+A0h]
  LPVOID v912[2]; // [rsp+1B0h] [rbp+A8h]
  unsigned int v913; // [rsp+1C0h] [rbp+B8h]
  unsigned int v914; // [rsp+1C4h] [rbp+BCh]
  int v915; // [rsp+1C8h] [rbp+C0h]
  LPVOID v916; // [rsp+1D0h] [rbp+C8h]
  int v917; // [rsp+1D8h] [rbp+D0h]
  int v918; // [rsp+1E0h] [rbp+D8h]
  int v919; // [rsp+1E8h] [rbp+E0h]
  unsigned int v920; // [rsp+1ECh] [rbp+E4h]
  LPVOID v921; // [rsp+1F0h] [rbp+E8h]
  unsigned int v922; // [rsp+1F8h] [rbp+F0h]
  int v923; // [rsp+1FCh] [rbp+F4h]
  int v924; // [rsp+200h] [rbp+F8h]
  int v925; // [rsp+204h] [rbp+FCh]
  int *v926; // [rsp+208h] [rbp+100h] BYREF
  int v927; // [rsp+210h] [rbp+108h]
  int v928; // [rsp+214h] [rbp+10Ch]
  unsigned int v929; // [rsp+218h] [rbp+110h]
  int v930; // [rsp+21Ch] [rbp+114h]
  unsigned int v931; // [rsp+220h] [rbp+118h]
  int v932; // [rsp+228h] [rbp+120h]
  unsigned int v933; // [rsp+230h] [rbp+128h]
  unsigned int v934; // [rsp+234h] [rbp+12Ch]
  unsigned __int64 v935; // [rsp+238h] [rbp+130h]
  void *v936; // [rsp+240h] [rbp+138h]
  int v937; // [rsp+248h] [rbp+140h]
  _OWORD *v938; // [rsp+250h] [rbp+148h]
  _QWORD *v939; // [rsp+258h] [rbp+150h]
  unsigned __int64 v940; // [rsp+260h] [rbp+158h]
  unsigned __int64 v941; // [rsp+268h] [rbp+160h]
  int v942; // [rsp+270h] [rbp+168h]
  size_t v943; // [rsp+278h] [rbp+170h]
  size_t v944; // [rsp+280h] [rbp+178h]
  HMODULE phModule; // [rsp+288h] [rbp+180h] BYREF
  unsigned int v946; // [rsp+290h] [rbp+188h]
  int *v947; // [rsp+298h] [rbp+190h]
  _QWORD *v948; // [rsp+2A0h] [rbp+198h]
  _DWORD *v949; // [rsp+2A8h] [rbp+1A0h]
  LPVOID v950; // [rsp+2B0h] [rbp+1A8h]
  unsigned int *v951; // [rsp+2B8h] [rbp+1B0h]
  _DWORD *v952; // [rsp+2C0h] [rbp+1B8h]
  __int64 v953; // [rsp+2C8h] [rbp+1C0h]
  _OWORD *v954; // [rsp+2D0h] [rbp+1C8h]
  _QWORD *v955; // [rsp+2D8h] [rbp+1D0h]
  unsigned __int64 v956; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int64 v957; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int64 v958; // [rsp+2F0h] [rbp+1E8h]
  unsigned int v959; // [rsp+2F8h] [rbp+1F0h]
  void *v960; // [rsp+300h] [rbp+1F8h]
  void *v961; // [rsp+308h] [rbp+200h]
  HMODULE hModule; // [rsp+310h] [rbp+208h] BYREF
  unsigned int v963; // [rsp+318h] [rbp+210h]
  int v964; // [rsp+31Ch] [rbp+214h]
  _QWORD v965[2]; // [rsp+320h] [rbp+218h] BYREF
  unsigned int v966; // [rsp+330h] [rbp+228h]
  unsigned int v967; // [rsp+334h] [rbp+22Ch]
  int v968; // [rsp+338h] [rbp+230h]
  _QWORD v969[2]; // [rsp+340h] [rbp+238h] BYREF
  unsigned int v970; // [rsp+350h] [rbp+248h]
  unsigned int v971; // [rsp+354h] [rbp+24Ch]
  int v972; // [rsp+358h] [rbp+250h]
  _OWORD *v973; // [rsp+360h] [rbp+258h]
  __int64 v974; // [rsp+368h] [rbp+260h]
  SIZE_T v975; // [rsp+370h] [rbp+268h]
  __int64 *v976; // [rsp+378h] [rbp+270h]
  __int64 v977; // [rsp+380h] [rbp+278h]
  char *v978; // [rsp+388h] [rbp+280h]
  __int64 v979; // [rsp+390h] [rbp+288h]
  int *v980; // [rsp+398h] [rbp+290h]
  _QWORD *v981; // [rsp+3A0h] [rbp+298h]
  __int64 v982; // [rsp+3A8h] [rbp+2A0h]
  _OWORD *v983; // [rsp+3B0h] [rbp+2A8h]
  __int64 *v984; // [rsp+3B8h] [rbp+2B0h]
  __int64 v985; // [rsp+3C0h] [rbp+2B8h]
  void *v986; // [rsp+3C8h] [rbp+2C0h] BYREF
  void *v987; // [rsp+3D0h] [rbp+2C8h]

  psza = psz;
  v903 = 0;
  v926 = 0LL;
  v878 = 0;
  v2 = 1;
  if ( !psz )
  {
    v878 = -2147024809;
    goto LABEL_6;
  }
  v902 = 0;
  v872 = 0LL;
  v896 = 0;
  v901 = 0;
  v936 = LocalAlloc(0x40u, 4uLL);
  v4 = v936;
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v872);
  if ( !v4 )
  {
    v872 = 0LL;
    v5 = -2147024882;
LABEL_1029:
    v848 = v884;
    goto LABEL_1030;
  }
  v872 = v4;
  v874 = 0LL;
  *(_OWORD *)v879 = 0LL;
  v938 = &unk_1800E45F0;
  v6 = 0LL;
  lpMem = 0LL;
  v906 = 0;
  v880 = 0;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
  v861 = -1;
  v9 = 0LL;
  v10 = v8;
  if ( !v8 )
  {
    v5 = -1073741801;
    v849 = -1073741801;
    goto LABEL_111;
  }
  v11 = v938;
  v856 = v10;
  *v10 = *v938;
  v10[1] = v11[1];
  v10[2] = v11[2];
  v10[3] = v11[3];
  v10[4] = v11[4];
  v10[5] = v11[5];
  v10[6] = v11[6];
  v10[7] = v11[7];
  v10[8] = v11[8];
  v10[9] = v11[9];
  v939 = &unk_1800E4538;
  v12 = GetProcessHeap();
  v13 = HeapAlloc(v12, 8u, 8uLL);
  v9 = 0LL;
  v14 = v13;
  if ( !v13 )
    goto LABEL_35;
  v874 = v13;
  *v13 = *v939;
  v935 = __rdtsc();
  LODWORD(dwBytes) = 0;
  v15 = RtlUIntAdd(4LL, 4LL, &v850);
  v16 = v871;
  v5 = v15;
  v849 = v15;
  if ( v15 >= 0 )
    v16 = v850;
  v871 = v16;
  if ( v15 < 0 )
    goto LABEL_38;
  v17 = RtlUIntAdd(0LL, v16, &dwBytes);
  v5 = v17 | 0x10000000;
  v849 = v17 | 0x10000000;
  if ( v17 < 0 )
    goto LABEL_38;
  v18 = RtlUIntAdd((unsigned int)(v9 + 4), 160LL, &v850);
  v849 = v18;
  v5 = v18;
  if ( v18 >= 0 )
    v19 = v850;
  v871 = v19;
  if ( v18 < 0 )
    goto LABEL_38;
  v20 = RtlUIntAdd((unsigned int)dwBytes, v19, &dwBytes);
  v5 = v21 | v20;
  v849 = v21 | v20;
  if ( (v21 | v20) < 0 )
    goto LABEL_38;
  v22 = RtlUIntAdd((unsigned int)(v9 + 4), (unsigned int)(v9 + 8), &v850);
  v849 = v22;
  v5 = v22;
  if ( v22 >= 0 )
    v23 = v850;
  v871 = v23;
  if ( v22 < 0 )
    goto LABEL_38;
  v24 = RtlUIntAdd((unsigned int)dwBytes, v23, &dwBytes);
  v5 = v25 | v24;
  v849 = v25 | v24;
  if ( (v25 | v24) < 0 )
    goto LABEL_38;
  v26 = RtlUIntAdd((unsigned int)(v9 + 4), (unsigned int)(v9 + 8), &v850);
  v849 = v26;
  v5 = v26;
  if ( v26 >= 0 )
    v27 = v850;
  v871 = v27;
  if ( v26 < 0 )
    goto LABEL_38;
  v28 = RtlUIntAdd((unsigned int)dwBytes, v27, &dwBytes);
  v5 = v30 | v28;
  v849 = v30 | v28;
  if ( (v30 | v28) < 0 )
    goto LABEL_38;
  v31 = StringCchLengthW(psz, v29, &pcchLength);
  v9 = 0LL;
  if ( v31 < 0 )
  {
    v5 = -1073741762;
LABEL_37:
    v849 = v5;
LABEL_38:
    v6 = v10;
    goto LABEL_111;
  }
  v32 = RtlUIntAdd(4LL, (unsigned int)(2 * (pcchLength + 1)), &v850);
  v849 = v32;
  v5 = v32;
  if ( v32 >= 0 )
    v33 = v850;
  v871 = v33;
  if ( v32 < 0 )
    goto LABEL_38;
  v34 = RtlUIntAdd((unsigned int)dwBytes, v33, &dwBytes);
  v5 = v34 | 0x10000000;
  v849 = v34 | 0x10000000;
  if ( v34 < 0 )
    goto LABEL_38;
  v35 = RtlUIntAdd(4LL, 4LL, &v850);
  v849 = v35;
  v5 = v35;
  if ( v35 >= 0 )
    v36 = v850;
  v871 = v36;
  if ( v35 < 0 )
    goto LABEL_38;
  v37 = RtlUIntAdd((unsigned int)dwBytes, v36, &dwBytes);
  v5 = v38 | v37;
  v849 = v38 | v37;
  if ( (v38 | v37) < 0 )
    goto LABEL_38;
  v39 = RtlUIntAdd(4LL, 4LL, &v850);
  v849 = v39;
  v5 = v39;
  if ( v39 >= 0 )
    v40 = v850;
  v871 = v40;
  if ( v39 < 0 )
    goto LABEL_38;
  v41 = RtlUIntAdd((unsigned int)dwBytes, v40, &dwBytes);
  v5 = v42 | v41;
  v849 = v42 | v41;
  if ( (v42 | v41) < 0 )
    goto LABEL_38;
  HIDWORD(Size) = dwBytes;
  v43 = dwBytes;
  v44 = GetProcessHeap();
  v45 = HeapAlloc(v44, 8u, v43);
  v9 = 0LL;
  if ( !v45 )
  {
LABEL_35:
    v5 = -1073741801;
    goto LABEL_37;
  }
  lpMem = v45;
  LODWORD(Size) = 0;
  v917 = 0;
  v5 = RtlULongLongAdd(v45, 4LL, &v867, v45);
  v849 = v5;
  if ( v5 < 0 )
    goto LABEL_38;
  if ( v46 + 2 > (unsigned int *)((char *)v46 + HIDWORD(Size)) )
    goto LABEL_36;
  v48 = v867;
  *v46 = v47;
  *v48 = v917;
  v49 = Size + 1;
  LODWORD(Size) = Size + 1;
  if ( lpMem == (LPVOID)v9 )
  {
    v50 = RtlUIntAdd(v47, 160LL, &v850);
    v51 = v885;
    v5 = v50;
    v849 = v50;
    if ( v50 >= 0 )
      v51 = v850;
    v885 = v51;
    if ( v50 >= 0 )
    {
      v849 = RtlUIntAdd(HIDWORD(Size), v51, (char *)&Size + 4);
      v5 = v849;
      if ( v849 >= 0 )
      {
        LODWORD(Size) = Size + 1;
        goto LABEL_71;
      }
    }
  }
  else
  {
    v52 = (unsigned int *)lpMem;
    v857 = (size_t)lpMem;
    if ( v49 )
    {
      while ( 1 )
      {
        v53 = RtlUIntAdd(4LL, *v52, &v850);
        v849 = v53;
        v5 = v53;
        if ( v53 >= 0 )
          v55 = v850;
        v885 = v55;
        if ( v53 < 0 )
          break;
        v849 = RtlULongLongAdd(v54, v55, &v857, v54);
        v5 = v849;
        if ( v849 < 0 )
          break;
        v52 = (unsigned int *)v857;
        if ( v56 + 1 >= (unsigned int)Size )
          goto LABEL_66;
      }
      v9 = 0LL;
    }
    else
    {
LABEL_66:
      v849 = RtlULongLongAdd(v52, 4LL, &v867, v52);
      v5 = v849;
      if ( v849 >= 0 )
      {
        if ( v57 + 41 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
          goto LABEL_36;
        v58 = v867;
        *v57 = 160;
        *v58 = *v10;
        v58[1] = v10[1];
        v58[2] = v10[2];
        v58[3] = v10[3];
        v58[4] = v10[4];
        v58[5] = v10[5];
        v58[6] = v10[6];
        v58[7] = v10[7];
        v58[8] = v10[8];
        v58[9] = v10[9];
        LODWORD(Size) = Size + 1;
      }
    }
  }
  if ( v5 < 0 )
    goto LABEL_38;
LABEL_71:
  if ( lpMem == (LPVOID)v9 )
  {
    v59 = RtlUIntAdd(4LL, 8LL, &v850);
    v60 = v886;
    v5 = v59;
    v849 = v59;
    if ( v59 >= 0 )
      v60 = v850;
    v886 = v60;
    if ( v59 >= 0 )
    {
      v849 = RtlUIntAdd(HIDWORD(Size), v60, (char *)&Size + 4);
      v5 = v849;
      if ( v849 >= 0 )
      {
        LODWORD(Size) = Size + 1;
        goto LABEL_88;
      }
    }
  }
  else
  {
    v61 = (unsigned int *)lpMem;
    v857 = (size_t)lpMem;
    if ( (unsigned int)Size <= (unsigned int)v9 )
    {
LABEL_83:
      v849 = RtlULongLongAdd(v61, 4LL, &v867, v61);
      v5 = v849;
      if ( v849 >= 0 )
      {
        if ( v66 + 3 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
          goto LABEL_36;
        v67 = v867;
        *v66 = 8;
        *v67 = *v14;
        LODWORD(Size) = Size + 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v62 = RtlUIntAdd(4LL, *v61, &v850);
        v849 = v62;
        v5 = v62;
        if ( v62 >= 0 )
          v64 = v850;
        v886 = v64;
        if ( v62 < 0 )
          break;
        v849 = RtlULongLongAdd(v63, v64, &v857, v63);
        v5 = v849;
        if ( v849 < 0 )
          break;
        v61 = (unsigned int *)v857;
        if ( v65 + 1 >= (unsigned int)Size )
          goto LABEL_83;
      }
      v9 = 0LL;
    }
  }
  if ( v5 < 0 )
    goto LABEL_38;
LABEL_88:
  v940 = v935;
  if ( lpMem != (LPVOID)v9 )
  {
    v70 = (unsigned int *)lpMem;
    v857 = (size_t)lpMem;
    if ( (unsigned int)Size > (unsigned int)v9 )
    {
      while ( 1 )
      {
        v71 = RtlUIntAdd(4LL, *v70, &v850);
        v849 = v71;
        v5 = v71;
        if ( v71 >= 0 )
          v73 = v850;
        v887 = v73;
        if ( v71 < 0 )
          break;
        v849 = RtlULongLongAdd(v72, v73, &v857, v72);
        v5 = v849;
        if ( v849 < 0 )
          break;
        v70 = (unsigned int *)v857;
        if ( v74 + 1 >= (unsigned int)Size )
          goto LABEL_100;
      }
      v9 = 0LL;
      goto LABEL_104;
    }
LABEL_100:
    v849 = RtlULongLongAdd(v70, 4LL, &v867, v70);
    v5 = v849;
    if ( v849 < 0 )
      goto LABEL_104;
    if ( v75 + 3 <= (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
    {
      v76 = v867;
      *v75 = 8;
      *v76 = v940;
      LODWORD(Size) = Size + 1;
      goto LABEL_104;
    }
LABEL_36:
    v5 = -1073741789;
    goto LABEL_37;
  }
  v68 = RtlUIntAdd(4LL, 8LL, &v850);
  v69 = v887;
  v5 = v68;
  v849 = v68;
  if ( v68 >= 0 )
    v69 = v850;
  v887 = v69;
  if ( v68 >= 0 )
  {
    v849 = RtlUIntAdd(HIDWORD(Size), v69, (char *)&Size + 4);
    v5 = v849;
    if ( v849 >= 0 )
    {
      LODWORD(Size) = Size + 1;
      goto LABEL_105;
    }
  }
LABEL_104:
  if ( v5 < 0 )
    goto LABEL_38;
LABEL_105:
  v77 = psza;
  v78 = StringCchLengthW(psza, v69, &v857);
  v9 = 0LL;
  if ( v78 < 0 )
  {
    v5 = -1073741762;
    goto LABEL_109;
  }
  v849 = RtlULongLongAdd(v857, 1LL, &v857, v79);
  v5 = v849;
  if ( v849 >= 0 )
  {
    if ( 2 * (_DWORD)v857 )
    {
      if ( lpMem == (LPVOID)v9 )
      {
        v114 = RtlUIntAdd(4LL, (unsigned int)(2 * v857), &v850);
        v115 = v890;
        v5 = v114;
        v849 = v114;
        if ( v114 >= 0 )
          v115 = v850;
        v890 = v115;
        if ( v114 >= 0 )
        {
          v849 = RtlUIntAdd(HIDWORD(Size), v115, (char *)&Size + 4);
          v5 = v849;
          if ( v849 >= 0 )
          {
            LODWORD(Size) = Size + 1;
            v5 = v116;
            v849 = v116;
          }
        }
      }
      else
      {
        v117 = v9;
        v118 = (unsigned int *)lpMem;
        v857 = (size_t)lpMem;
        if ( (unsigned int)Size <= (unsigned int)v9 )
        {
LABEL_152:
          v849 = RtlULongLongAdd(v118, 4LL, &v867, v118);
          v5 = v849;
          if ( v849 >= 0 )
          {
            if ( (char *)v122 + v123 + 4 <= (char *)lpMem + HIDWORD(Size) )
            {
              v124 = v867;
              *v122 = v123;
              memcpy_0(v124, v77, (unsigned int)v123);
              LODWORD(Size) = Size + 1;
            }
            else
            {
              v5 = -1073741789;
              v849 = -1073741789;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v119 = RtlUIntAdd(4LL, *v118, &v850);
            v849 = v119;
            v5 = v119;
            if ( v119 >= 0 )
              v121 = v850;
            v890 = v121;
            if ( v119 < 0 )
              break;
            v849 = RtlULongLongAdd(v120, v121, &v857, v120);
            v5 = v849;
            if ( v849 < 0 )
              break;
            v118 = (unsigned int *)v857;
            if ( ++v117 >= (unsigned int)Size )
              goto LABEL_152;
          }
        }
      }
    }
    else
    {
      v5 = -1073741811;
      v849 = -1073741811;
    }
    v9 = 0LL;
  }
  if ( v5 < 0 )
    goto LABEL_110;
  v918 = v896;
  if ( lpMem == (LPVOID)v9 )
  {
    v125 = RtlUIntAdd(4LL, 4LL, &v850);
    v126 = v891;
    v5 = v125;
    v849 = v125;
    if ( v125 >= 0 )
      v126 = v850;
    v891 = v126;
    if ( v125 >= 0 )
    {
      v849 = RtlUIntAdd(HIDWORD(Size), v126, (char *)&Size + 4);
      v5 = v849;
      if ( v849 >= 0 )
      {
        LODWORD(Size) = Size + 1;
        goto LABEL_177;
      }
    }
  }
  else
  {
    v127 = (unsigned int *)lpMem;
    v857 = (size_t)lpMem;
    if ( (unsigned int)Size <= (unsigned int)v9 )
    {
LABEL_171:
      v849 = RtlULongLongAdd(v127, 4LL, &v867, v127);
      v5 = v849;
      if ( v849 >= 0 )
      {
        if ( v132 + 2 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
          goto LABEL_174;
        v133 = v867;
        *v132 = 4;
        *v133 = v918;
        LODWORD(Size) = Size + 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v128 = RtlUIntAdd(4LL, *v127, &v850);
        v849 = v128;
        v5 = v128;
        if ( v128 >= 0 )
          v130 = v850;
        v891 = v130;
        if ( v128 < 0 )
          break;
        v849 = RtlULongLongAdd(v129, v130, &v857, v129);
        v5 = v849;
        if ( v849 < 0 )
          break;
        v127 = (unsigned int *)v857;
        if ( v131 + 1 >= (unsigned int)Size )
          goto LABEL_171;
      }
      v9 = 0LL;
    }
  }
  if ( v5 < 0 )
    goto LABEL_110;
LABEL_177:
  v883 = 4;
  if ( lpMem != (LPVOID)v9 )
  {
    v152 = (unsigned int *)lpMem;
    v857 = (size_t)lpMem;
    if ( (unsigned int)Size > (unsigned int)v9 )
    {
      while ( 1 )
      {
        v153 = RtlUIntAdd(4LL, *v152, &v850);
        v849 = v153;
        v5 = v153;
        if ( v153 >= 0 )
          v155 = v850;
        v892 = v155;
        if ( v153 < 0 )
          break;
        v849 = RtlULongLongAdd(v154, v155, &v857, v154);
        v5 = v849;
        if ( v849 < 0 )
          break;
        v152 = (unsigned int *)v857;
        if ( v156 + 1 >= (unsigned int)Size )
          goto LABEL_214;
      }
      v9 = 0LL;
      goto LABEL_218;
    }
LABEL_214:
    v849 = RtlULongLongAdd(v152, 4LL, &v867, v152);
    v5 = v849;
    if ( v849 < 0 )
      goto LABEL_218;
    if ( v157 + 2 <= (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
    {
      v158 = v867;
      *v157 = 4;
      *v158 = v883;
      LODWORD(Size) = Size + 1;
      goto LABEL_218;
    }
LABEL_174:
    v5 = -1073741789;
    v849 = -1073741789;
    goto LABEL_110;
  }
  v134 = RtlUIntAdd(4LL, 4LL, &v850);
  v135 = v892;
  v5 = v134;
  v849 = v134;
  if ( v134 >= 0 )
    v135 = v850;
  v892 = v135;
  if ( v134 >= 0 )
  {
    v849 = RtlUIntAdd(HIDWORD(Size), v135, (char *)&Size + 4);
    v5 = v849;
    if ( v849 >= 0 )
    {
      LODWORD(Size) = Size + 1;
      goto LABEL_183;
    }
  }
LABEL_218:
  if ( v5 < 0 )
  {
LABEL_219:
    v6 = v856;
    goto LABEL_111;
  }
LABEL_183:
  v136 = RtlUIntAdd(4LL, 4LL, &v850);
  v138 = v875;
  v5 = v136;
  v849 = v136;
  if ( v136 >= 0 )
    v138 = v850;
  v875 = v138;
  if ( v136 < 0 )
    goto LABEL_220;
  LODWORD(dwBytes) = v138;
  v139 = RtlUIntAdd(v137, 8LL, &v850);
  v849 = v139;
  v141 = v140;
  v5 = v139;
  if ( v139 >= 0 )
    v141 = v850;
  v875 = v141;
  if ( v139 < 0 )
  {
LABEL_220:
    v9 = 0LL;
LABEL_221:
    v151 = v883;
    goto LABEL_222;
  }
  v142 = RtlUIntAdd(v140, v141, &dwBytes);
  v9 = 0LL;
  v849 = v142;
  v5 = v142;
  if ( v142 < 0 )
    goto LABEL_221;
  v143 = RtlUIntAdd(4LL, 4LL, &v850);
  v849 = v143;
  v5 = v143;
  if ( v143 >= 0 )
    v144 = v850;
  v875 = v144;
  if ( v143 < 0 )
    goto LABEL_221;
  v849 = RtlUIntAdd((unsigned int)dwBytes, v144, &dwBytes);
  v5 = v849;
  if ( v849 < 0 )
    goto LABEL_221;
  v145 = RtlUIntAdd(4LL, 4LL, &v850);
  v849 = v145;
  v5 = v145;
  if ( v145 >= 0 )
    v146 = v850;
  v875 = v146;
  if ( v145 < 0 )
    goto LABEL_221;
  v849 = RtlUIntAdd((unsigned int)dwBytes, v146, &dwBytes);
  v5 = v849;
  if ( v849 < 0 )
    goto LABEL_221;
  v147 = RtlUIntAdd(4LL, 4LL, &v850);
  v849 = v147;
  v5 = v147;
  if ( v147 >= 0 )
    v148 = v850;
  v875 = v148;
  if ( v147 < 0 )
    goto LABEL_221;
  v849 = RtlUIntAdd((unsigned int)dwBytes, v148, &dwBytes);
  v5 = v849;
  if ( v849 < 0 )
    goto LABEL_221;
  v149 = RtlUIntAdd(4LL, 4LL, &v850);
  v849 = v149;
  v5 = v149;
  if ( v149 >= 0 )
    v150 = v850;
  v875 = v150;
  if ( v149 < 0 )
    goto LABEL_221;
  v5 = RtlUIntAdd((unsigned int)dwBytes, v150, &dwBytes);
  v849 = v5;
  v151 = v883;
  if ( v5 >= 0 )
    v151 = dwBytes;
LABEL_222:
  v860 = v151;
  if ( v5 < 0 )
    goto LABEL_110;
  v855 = (LPVOID)v9;
  v159 = v9;
  v911 = (LPVOID)v9;
  v888 = (LPVOID)v9;
  v160 = (size_t *)v9;
  v850 = v9;
  v889 = (LPVOID)v9;
  v868 = v9;
  v853 = (size_t *)v9;
  psza = (STRSAFE_PCNZWCH)v9;
  v895 = v9;
  v941 = __rdtsc();
  v876 = 8;
  v162 = RtlUIntAdd(8LL, HIDWORD(Size), &v876);
  if ( v162 >= 0 )
  {
    v163 = (v876 + 7) & 0xFFFFFFF8;
    if ( v163 >= v876 )
    {
      v876 = (v876 + 7) & 0xFFFFFFF8;
      v164 = v163;
      v165 = GetProcessHeap();
      v166 = (char *)HeapAlloc(v165, 8u, v164);
      v9 = 0LL;
      v167 = v166;
      if ( v166 )
      {
        v986 = v166;
        *(_DWORD *)v166 = Size;
        v162 = RtlULongLongAdd(v166, 4LL, &v986, 4LL);
        if ( v162 < 0
          || (v169 = v986,
              *(_DWORD *)v986 = HIDWORD(Size),
              v162 = RtlULongLongAdd(v169, (unsigned int)v168, &v986, v168),
              v162 < 0) )
        {
          v161 = v160;
        }
        else
        {
          *(_QWORD *)&v167[v876 - 8] = v941;
          memcpy_0(v986, lpMem, HIDWORD(Size));
          v159 = v876;
          v9 = 0LL;
          v161 = v167;
          v855 = v167;
          v167 = 0LL;
        }
        if ( v167 )
        {
          v170 = GetProcessHeap();
          HeapFree(v170, 0, v167);
          v161 = v855;
          v9 = 0LL;
        }
      }
      else
      {
        v162 = -1073741801;
        v161 = v160;
      }
    }
    else
    {
      v162 = -1073741675;
    }
  }
  v5 = v162 | 0x10000000;
  v849 = v5;
  if ( v5 < 0 )
    goto LABEL_514;
  v921 = (LPVOID)v9;
  v171 = (_QWORD *)v9;
  v857 = v9;
  if ( v161 )
  {
    v173 = v159;
    Src = (void *)v159;
    if ( v159 && (v174 = MemoryAlloc(v159 + 8LL), v9 = 0LL, v986 = v174, (v175 = v174) != 0LL) )
    {
      v176 = (unsigned __int8 *)v855;
      v177 = 0;
      LOBYTE(v852) = 0;
      v178 = 0LL;
      if ( v173 )
      {
        do
          v177 ^= *((_BYTE *)v855 + v178++);
        while ( v178 < v173 );
        LOBYTE(v852) = v177;
      }
      v987 = (void *)0xC81ECB17B1B54A58LL;
      v179 = -1;
      v854 = 0LL;
      v180 = v175;
      v181 = v173 & 7;
      if ( (v173 & 7) != 0 )
      {
        v854 = 0LL;
        v182 = 0;
        v183 = 0;
        v184 = 56;
        do
        {
          v185 = *v176++;
          if ( v183 >= 4 )
          {
            v186 = HIDWORD(v854);
            v182 |= v185 << v184;
          }
          else
          {
            v186 = (v185 << (v184 - 32)) | HIDWORD(v854);
            HIDWORD(v854) = v186;
          }
          ++v183;
          v184 -= 8;
        }
        while ( v183 < (int)v181 );
        LODWORD(v854) = v182;
        LODWORD(v9) = v186 ^ 0xB17A307A;
        v187 = v182 ^ 0x42F6B18D;
        v188 = 0;
        v189 = v186 ^ 0xB17A307A;
        v190 = v187;
        if ( (v173 & 7) != 0 )
        {
          do
          {
            pcchLength = (size_t)(v180 + 1);
            if ( v188 >= 4 )
            {
              v190 = __ROL4__(v190, 8);
              v191 = v190;
            }
            else
            {
              v189 = __ROL4__(v189, 8);
              v191 = v189;
            }
            *v180 = v191;
            ++v188;
            v180 = (_BYTE *)pcchLength;
          }
          while ( v188 < (int)v181 );
        }
        if ( v181 <= 4 )
        {
          v179 = 0;
          if ( v181 < 4 )
            LODWORD(v9) = (unsigned int)v9 >> (8 * (4 - v181)) << (8 * (4 - v181));
        }
        else
        {
          v179 = v187 >> (8 * (8 - v181)) << (8 * (8 - v181));
        }
        v175 = v986;
      }
      v192 = v173 >> 3;
      if ( v173 >> 3 )
      {
        v193 = v176 + 2;
        v194 = v854;
        v195 = HIDWORD(v854);
        v196 = WORD2(v987);
        v849 = HIWORD(v987);
        LODWORD(dwBytes) = WORD1(v987);
        v197 = v180 + 7;
        v198 = v192;
        do
        {
          v199 = v193[1] | ((*v193 | ((*(v193 - 1) | (*(v193 - 2) << 8)) << 8)) << 8);
          v200 = v193[5] | ((v193[4] | ((v193[3] | (v193[2] << 8)) << 8)) << 8);
          pcchLength = (size_t)(v193 + 8);
          v201 = v200 ^ v179;
          v202 = HIDWORD(v987) ^ v199 ^ (v201 - 19032) ^ v9;
          v203 = (__ROR4__(v202, 7) + WORD1(v987) * __ROR4__(HIDWORD(v987) ^ v202, 15)) ^ v201;
          v204 = (v196 * __ROR4__(v203 - 1313519016, 9) - __ROR4__(v203, 10)) ^ v202;
          v205 = (__ROL4__(v204, 5) + HIWORD(v987) * __ROL4__(v196 ^ v204, 4)) ^ v203;
          v206 = (HIDWORD(v987) - (v205 ^ 0xB1B54A58)) ^ v204;
          v207 = (WORD1(v987) * (v206 - 19032) - (v206 >> 6)) ^ v205;
          v208 = (19032 * (v196 ^ __ROR4__(v207, 15))) ^ v206;
          v209 = (v196 * (HIWORD(v987) + __ROR4__(~v208, 3))) ^ v207;
          v210 = (v209 - 19032 - HIDWORD(v987)) ^ v208;
          v211 = (dwBytes * (v849 ^ v210)) ^ __ROR4__(v210, 10) ^ v209;
          v212 = __ROR4__(v211, 3) ^ (v196 * __ROL4__(v211 ^ 0x4A58, 6)) ^ v210;
          v213 = (19032 * (__ROR4__(v212, 15) - HIWORD(v987))) ^ v211;
          v214 = (v213 >> 15) ^ (19032 * __ROL4__(v213 - v196, 3)) ^ (v213 >> 1) ^ (19032 * (HIWORD(v987) ^ v213)) ^ v212;
          v215 = (WORD1(v987) * (v214 - v196) - (v214 >> 13)) ^ v213;
          v216 = __ROR4__(v215, 11) ^ (v196 * __ROR4__(-1313519016 - v215, 9)) ^ v214;
          v217 = (v216 + 1313519016 - HIWORD(v987)) ^ v215;
          v218 = (19032 * (dwBytes ^ v217) - __ROR4__(v217, 7)) ^ v216;
          v219 = (WORD1(v987) * __ROL4__(HIWORD(v987) ^ v218, 4) - __ROR4__(v218, 16)) ^ v217;
          v220 = (__ROR4__(v219, 4) + v196 * __ROR4__(-1313519016 - v219, 10)) ^ v218;
          v221 = __ROR4__(v220, 9) ^ (HIWORD(v987) * __ROR4__(v220 + 1313519016, 4)) ^ v219;
          v222 = (19032 * __ROL4__(HIDWORD(v987) ^ v221, 8) - __ROL4__(v221, 2)) ^ v220;
          v223 = (WORD1(v987) * __ROR4__(HIDWORD(v987) - v222, 11) - __ROR4__(v222, 12)) ^ v221;
          v224 = (v223 >> 8) ^ (v196 * (WORD1(v987) ^ v223)) ^ v222;
          v193 += 8;
          v225 = v224 ^ v223 ^ 0xB1B54A58;
          v226 = v195 ^ v224;
          v227 = HIDWORD(v987) ^ v225;
          v195 = v199;
          *(v197 - 4) = v226;
          v228 = v194 ^ v227;
          *v197 = v228;
          v194 = v200;
          v229 = __ROR4__(v226, 8);
          *(v197 - 5) = v229;
          v197 += 8;
          v230 = __ROR4__(v228, 8);
          *(v197 - 9) = v230;
          v231 = __ROR4__(v229, 8);
          *(v197 - 14) = v231;
          v232 = __ROR4__(v230, 8);
          *(v197 - 10) = v232;
          v233 = __ROR4__(v231, 8);
          v234 = __ROR4__(v232, 8);
          *(v197 - 15) = v233;
          *(v197 - 11) = v234;
          v179 = __ROR4__(v234, 8);
          LODWORD(v9) = __ROR4__(v233, 8);
          --v198;
        }
        while ( v198 );
        v177 = v852;
        v171 = (_QWORD *)v857;
        v173 = (unsigned __int64)Src;
        v175 = v986;
      }
      v235 = v173 + 8;
      *(_QWORD *)&v175[v173] = v177;
      v921 = v175;
      v978 = (char *)(v173 + 8);
      v985 = 8LL;
      v984 = &qword_1800E45E0;
      v974 = 160LL;
      v973 = xmmword_1800E4540;
      v236 = GetProcessHeap();
      v237 = HeapAlloc(v236, 8u, 0x30uLL);
      v9 = 0LL;
      v238 = v237;
      if ( v237 )
      {
        *v237 = v235;
        v239 = GetProcessHeap();
        v240 = HeapAlloc(v239, 8u, v235);
        v9 = 0LL;
        if ( !v240 )
          goto LABEL_268;
        *((_QWORD *)v238 + 1) = v240;
        memcpy_0(v240, v175, v235);
        v238[4] = 160;
        v241 = GetProcessHeap();
        v242 = HeapAlloc(v241, 8u, 0xA0uLL);
        v9 = 0LL;
        if ( !v242 )
          goto LABEL_268;
        *((_QWORD *)v238 + 3) = v242;
        *v242 = xmmword_1800E4540[0];
        v242[1] = xmmword_1800E4540[1];
        v242[2] = xmmword_1800E4540[2];
        v242[3] = xmmword_1800E4540[3];
        v242[4] = xmmword_1800E4540[4];
        v242[5] = xmmword_1800E4540[5];
        v242[6] = xmmword_1800E4540[6];
        v242[7] = xmmword_1800E4540[7];
        v242[8] = xmmword_1800E4540[8];
        v242[9] = xmmword_1800E4540[9];
        v238[8] = 8;
        v243 = GetProcessHeap();
        v244 = HeapAlloc(v243, 8u, 8uLL);
        v9 = 0LL;
        if ( v244 )
        {
          *((_QWORD *)v238 + 5) = v244;
          v171 = v238;
          *v244 = qword_1800E45E0;
          v172 = 0;
          v238 = 0LL;
        }
        else
        {
LABEL_268:
          v172 = -1073741801;
        }
        if ( v238 )
        {
          v245 = (void *)*((_QWORD *)v238 + 1);
          if ( v245 )
          {
            v246 = GetProcessHeap();
            HeapFree(v246, 0, v245);
            *((_QWORD *)v238 + 1) = 0LL;
          }
          v247 = (void *)*((_QWORD *)v238 + 3);
          if ( v247 )
          {
            v248 = GetProcessHeap();
            HeapFree(v248, 0, v247);
            *((_QWORD *)v238 + 3) = 0LL;
          }
          v249 = (void *)*((_QWORD *)v238 + 5);
          if ( v249 )
          {
            v250 = GetProcessHeap();
            HeapFree(v250, 0, v249);
            *((_QWORD *)v238 + 5) = 0LL;
          }
          v251 = GetProcessHeap();
          HeapFree(v251, 0, v238);
          v9 = 0LL;
        }
      }
      else
      {
        v172 = -1073741801;
      }
      if ( v172 >= 0 )
      {
        v911 = v171;
        v171 = 0LL;
      }
    }
    else
    {
      v172 = -1073741823;
    }
    v252 = v921;
    if ( v921 )
    {
      v253 = GetProcessHeap();
      HeapFree(v253, 0, v252);
      v9 = 0LL;
      v921 = 0LL;
    }
    if ( v171 )
    {
      v254 = (void *)v171[1];
      if ( v254 )
      {
        v255 = GetProcessHeap();
        HeapFree(v255, 0, v254);
        v171[1] = 0LL;
      }
      v256 = (void *)v171[3];
      if ( v256 )
      {
        v257 = GetProcessHeap();
        HeapFree(v257, 0, v256);
        v171[3] = 0LL;
      }
      v258 = (void *)v171[5];
      if ( v258 )
      {
        v259 = GetProcessHeap();
        HeapFree(v259, 0, v258);
        v171[5] = 0LL;
      }
      v260 = GetProcessHeap();
      HeapFree(v260, 0, v171);
      v9 = 0LL;
    }
  }
  else
  {
    v172 = -1073741811;
  }
  v5 = v172 | 0x10000000;
  v849 = v5;
  if ( v5 < 0 )
    goto LABEL_513;
  v261 = (const void **)v911;
  LODWORD(dwBytes) = 4;
  v262 = RtlUIntAdd(4LL, *(unsigned int *)v911, &dwBytes);
  if ( v262 < 0
    || (v262 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes), v262 < 0)
    || (v262 = RtlUIntAdd((unsigned int)dwBytes, *((unsigned int *)v261 + 4), &dwBytes), v262 < 0)
    || (v262 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes), v262 < 0) )
  {
    v263 = v893;
  }
  else
  {
    v262 = RtlUIntAdd((unsigned int)dwBytes, *((unsigned int *)v261 + 8), &dwBytes);
    v263 = v893;
    if ( v262 >= 0 )
      v263 = dwBytes;
    v893 = v263;
  }
  if ( v262 >= 0 )
  {
    v264 = v263;
    v265 = GetProcessHeap();
    v266 = HeapAlloc(v265, 8u, v264);
    v9 = 0LL;
    v268 = v266;
    if ( v266 )
    {
      *v266 = *(_DWORD *)v261;
      v986 = v266;
      v262 = RtlULongLongAdd(v266, 4LL, &v986, v267);
      if ( v262 >= 0 )
      {
        memcpy_0(v986, v261[1], *(unsigned int *)v261);
        v270 = RtlULongLongAdd(v986, *(unsigned int *)v261, &v986, v269);
        v9 = 0LL;
        v262 = v270;
        if ( v270 >= 0 )
        {
          v272 = v986;
          *(_DWORD *)v986 = *((_DWORD *)v261 + 4);
          v262 = RtlULongLongAdd(v272, 4LL, &v986, v271);
          if ( v262 >= 0 )
          {
            memcpy_0(v986, v261[3], *((unsigned int *)v261 + 4));
            v274 = RtlULongLongAdd(v986, *((unsigned int *)v261 + 4), &v986, v273);
            v9 = 0LL;
            v262 = v274;
            if ( v274 >= 0 )
            {
              v276 = v986;
              *(_DWORD *)v986 = *((_DWORD *)v261 + 8);
              v262 = RtlULongLongAdd(v276, 4LL, &v986, v275);
              if ( v262 >= 0 )
              {
                memcpy_0(v986, v261[5], *((unsigned int *)v261 + 8));
                v278 = RtlULongLongAdd(v986, *((unsigned int *)v261 + 8), &v986, v277);
                v9 = 0LL;
                v262 = v278;
                if ( v278 >= 0 )
                {
                  v888 = v268;
                  v268 = 0LL;
                  v850 = v893;
                }
              }
            }
          }
        }
      }
      if ( v268 )
      {
        v279 = GetProcessHeap();
        HeapFree(v279, 0, v268);
        v9 = 0LL;
      }
    }
    else
    {
      v262 = -1073741801;
    }
  }
  v5 = v262 | 0x10000000;
  v849 = v5;
  if ( v5 < 0 )
    goto LABEL_513;
  v943 = v9;
  v919 = v9;
  v280 = v9;
  v944 = v9;
  v920 = v9;
  v894 = 8;
  v281 = RtlUIntAdd(8LL, v860, &v894);
  v5 = v281 | 0x10000000;
  v849 = v281 | 0x10000000;
  if ( v281 >= 0 )
  {
    v283 = (v894 + 7) & 0xFFFFFFF8;
    if ( v283 >= v894 )
    {
      v908 = (v894 + 7) & 0xFFFFFFF8;
      v285 = RtlUIntAdd(v283, v282, &v908);
      v284 = v905;
      v5 = v285;
      v849 = v285;
      if ( v285 >= 0 )
        v284 = v908;
      v905 = v284;
    }
    else
    {
      v284 = v905;
      v5 = -1073741675;
      v849 = -1073741675;
    }
    if ( v5 < 0 )
      goto LABEL_513;
    if ( lpMem == (LPVOID)v9 || (unsigned int)Size <= 1 )
    {
      v5 = -1073741811;
      v849 = -1073741811;
    }
    else
    {
      v286 = (unsigned int *)lpMem;
      v986 = lpMem;
      do
      {
        v287 = *v286;
        v849 = RtlULongLongAdd(v286, 4LL, &v986, v284);
        v5 = v849;
        if ( v849 < 0 )
          goto LABEL_330;
        v849 = RtlULongLongAdd(v986, v287, &v986, v284);
        v5 = v849;
        if ( v849 < 0 )
          goto LABEL_330;
        v286 = (unsigned int *)v986;
      }
      while ( v288 == -1 );
      v849 = RtlULongLongAdd(v986, 4LL, &v986, v284);
      v5 = v849;
      if ( v849 < 0 )
      {
LABEL_330:
        v9 = 0LL;
        goto LABEL_331;
      }
      v290 = v986;
      v919 = v289;
      if ( !v289 )
        v290 = 0LL;
      v9 = 0LL;
      v943 = (size_t)v290;
LABEL_331:
      if ( v5 >= 0 )
      {
        if ( (unsigned int)Size > 2 )
        {
          v295 = (unsigned int *)lpMem;
          v986 = lpMem;
          do
          {
            v296 = *v295;
            v849 = RtlULongLongAdd(v295, 4LL, &v986, v284);
            v5 = v849;
            if ( v849 < 0 )
              goto LABEL_345;
            v849 = RtlULongLongAdd(v986, v296, &v986, v284);
            v5 = v849;
            if ( v849 < 0 )
              goto LABEL_345;
            v295 = (unsigned int *)v986;
          }
          while ( (unsigned int)(v297 + 1) < 2 );
          v849 = RtlULongLongAdd(v986, 4LL, &v986, v284);
          v5 = v849;
          if ( v849 < 0 )
          {
LABEL_345:
            v9 = 0LL;
            goto LABEL_346;
          }
          v299 = v986;
          v280 = v298;
          v920 = v298;
          if ( !v298 )
            v299 = 0LL;
          v9 = 0LL;
          v944 = (size_t)v299;
LABEL_346:
          if ( v5 < 0 )
            goto LABEL_513;
          LODWORD(dwBytes) = 4;
          v849 = RtlUIntAdd(4LL, (unsigned int)v284, &dwBytes);
          v5 = v849;
          if ( v849 < 0
            || (v849 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes), v5 = v849, v849 < 0)
            || (v849 = RtlUIntAdd((unsigned int)dwBytes, v300, &dwBytes), v5 = v849, v849 < 0)
            || (v849 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes), v5 = v849, v849 < 0) )
          {
            v301 = v904;
          }
          else
          {
            v5 = RtlUIntAdd((unsigned int)dwBytes, v280, &dwBytes);
            v849 = v5;
            v301 = v904;
            if ( v5 >= 0 )
              v301 = dwBytes;
            v904 = v301;
          }
          if ( v5 < 0 )
            goto LABEL_513;
          if ( v301 > 0x400000 )
          {
            v5 = -2147418113;
LABEL_512:
            v849 = v5;
            goto LABEL_513;
          }
          v868 = v301;
        }
        else
        {
          v5 = -1073741811;
          v849 = -1073741811;
        }
      }
    }
  }
  if ( v5 < 0 )
    goto LABEL_513;
  v291 = v868;
  v292 = GetProcessHeap();
  v293 = (unsigned int *)HeapAlloc(v292, 8u, v291);
  v9 = 0LL;
  if ( v293 )
  {
    v294 = v293;
    v889 = v293;
    v5 = 0x10000000;
  }
  else
  {
    v294 = (unsigned int *)v889;
    v5 = -805306345;
  }
  v849 = v5;
  if ( v5 < 0 )
    goto LABEL_513;
  if ( !v888 || !v294 )
  {
    v5 = -2147024809;
    goto LABEL_512;
  }
  v969[0] = v888;
  v970 = v850;
  v971 = v868;
  v969[1] = v294;
  v972 = 0;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
    && (ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
  {
    v303 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v969);
    v304 = v868;
    v5 = v303 | 0x10000000;
    if ( v303 >= 0 )
      v304 = v971;
    v868 = v304;
  }
  else
  {
    LastError = GetLastError();
    v849 = LastError;
    v5 = LastError;
    if ( LastError > 0 )
    {
      v5 = (unsigned __int16)LastError | 0x80070000;
      v849 = v5;
    }
    v304 = v868;
    if ( v5 < 0 )
      goto LABEL_374;
    v5 = -2147467259;
  }
  v849 = v5;
LABEL_374:
  v9 = 0LL;
  if ( v5 == -805306333 )
  {
    v5 = -2147024774;
    v849 = -2147024774;
LABEL_513:
    v160 = v853;
    goto LABEL_514;
  }
  if ( v5 < 0 )
    goto LABEL_513;
  v857 = 0LL;
  v849 = 0;
  v986 = v294;
  if ( (unsigned int)v304 < 4 )
  {
    v306 = -1073741762;
LABEL_401:
    v160 = v853;
    goto LABEL_402;
  }
  v850 = *v294;
  v306 = RtlULongLongAdd(v294, 4LL, &v986, v304);
  if ( v306 < 0 )
    goto LABEL_400;
  v306 = RtlUIntAdd(0LL, 4LL, &v849);
  if ( v306 < 0 )
  {
    v160 = v853;
LABEL_444:
    v9 = 0LL;
    goto LABEL_402;
  }
  if ( (int)v307 - v849 < (unsigned int)v308 )
    goto LABEL_399;
  Src = v986;
  pcchLength = v308;
  v306 = RtlULongLongAdd(v986, (unsigned int)v308, &v986, v307);
  if ( v306 < 0 )
    goto LABEL_400;
  v306 = RtlUIntAdd((unsigned int)v849, v309, &v849);
  if ( v306 < 0 )
    goto LABEL_400;
  if ( (unsigned int)(v310 - v849) < 4 )
    goto LABEL_399;
  v311 = *(unsigned int *)v986;
  v306 = RtlULongLongAdd(v986, 4LL, &v986, v310);
  if ( v306 < 0 )
    goto LABEL_400;
  v306 = RtlUIntAdd((unsigned int)v849, 4LL, &v849);
  if ( v306 < 0 )
    goto LABEL_400;
  if ( (int)v312 - v849 < (unsigned int)v311 )
    goto LABEL_399;
  v987 = v986;
  v306 = RtlULongLongAdd(v986, (unsigned int)v311, &v986, v312);
  if ( v306 < 0 )
    goto LABEL_400;
  v306 = RtlUIntAdd((unsigned int)v849, (unsigned int)v311, &v849);
  if ( v306 < 0 )
    goto LABEL_400;
  if ( (unsigned int)(v313 - v849) < 4 )
    goto LABEL_399;
  v314 = *(unsigned int *)v986;
  v306 = RtlULongLongAdd(v986, 4LL, &v986, v313);
  if ( v306 < 0 )
    goto LABEL_400;
  v306 = RtlUIntAdd((unsigned int)v849, 4LL, &v849);
  if ( v306 < 0 )
    goto LABEL_400;
  if ( v315 - v849 < (unsigned int)v314 )
    goto LABEL_399;
  v306 = RtlUIntAdd((unsigned int)v849, (unsigned int)v314, &v849);
  if ( v306 < 0 )
  {
LABEL_400:
    v9 = 0LL;
    goto LABEL_401;
  }
  if ( v316 != v849 || (unsigned int)(v317 + v311 + v314) + 12LL != v316 )
  {
LABEL_399:
    v306 = -1073741762;
    goto LABEL_400;
  }
  v318 = GetProcessHeap();
  v319 = HeapAlloc(v318, 8u, 0x30uLL);
  v9 = 0LL;
  v320 = (size_t)v319;
  if ( !v319 )
  {
    v306 = -1073741801;
    goto LABEL_433;
  }
  v335 = Src;
  if ( Src )
  {
    *(_DWORD *)v319 = v850;
    v336 = GetProcessHeap();
    v337 = HeapAlloc(v336, 8u, pcchLength);
    v9 = 0LL;
    if ( !v337 )
      goto LABEL_414;
    *(_QWORD *)(v320 + 8) = v337;
    memcpy_0(v337, v335, pcchLength);
    v9 = 0LL;
  }
  else
  {
    *(_DWORD *)v319 = 0;
    v319[1] = 0LL;
  }
  v338 = v987;
  if ( v987 )
  {
    *(_DWORD *)(v320 + 16) = v311;
    v339 = GetProcessHeap();
    v340 = HeapAlloc(v339, 8u, v311);
    v9 = 0LL;
    if ( !v340 )
      goto LABEL_414;
    *(_QWORD *)(v320 + 24) = v340;
    memcpy_0(v340, v338, v311);
    v9 = 0LL;
  }
  else
  {
    *(_DWORD *)(v320 + 16) = 0;
    *(_QWORD *)(v320 + 24) = 0LL;
  }
  v341 = v986;
  if ( !v986 )
  {
    *(_DWORD *)(v320 + 32) = 0;
    *(_QWORD *)(v320 + 40) = 0LL;
    goto LABEL_424;
  }
  *(_DWORD *)(v320 + 32) = v314;
  v342 = GetProcessHeap();
  v343 = HeapAlloc(v342, 8u, v314);
  v9 = 0LL;
  if ( !v343 )
  {
LABEL_414:
    v306 = -1073741801;
    goto LABEL_425;
  }
  *(_QWORD *)(v320 + 40) = v343;
  memcpy_0(v343, v341, v314);
  v9 = 0LL;
LABEL_424:
  v857 = v320;
  v306 = 0;
  v320 = 0LL;
LABEL_425:
  if ( v320 )
  {
    v344 = *(void **)(v320 + 8);
    if ( v344 )
    {
      v345 = GetProcessHeap();
      HeapFree(v345, 0, v344);
      *(_QWORD *)(v320 + 8) = 0LL;
    }
    v346 = *(void **)(v320 + 24);
    if ( v346 )
    {
      v347 = GetProcessHeap();
      HeapFree(v347, 0, v346);
      *(_QWORD *)(v320 + 24) = 0LL;
    }
    v348 = *(void **)(v320 + 40);
    if ( v348 )
    {
      v349 = GetProcessHeap();
      HeapFree(v349, 0, v348);
      *(_QWORD *)(v320 + 40) = 0LL;
    }
    v350 = GetProcessHeap();
    HeapFree(v350, 0, (LPVOID)v320);
    v9 = 0LL;
  }
LABEL_433:
  v160 = (size_t *)v857;
  v351 = 0LL;
  if ( v306 < 0 )
  {
    v351 = (_QWORD *)v857;
    v160 = 0LL;
  }
  v853 = v160;
  if ( v351 )
  {
    v352 = (void *)v351[1];
    if ( v352 )
    {
      v353 = GetProcessHeap();
      HeapFree(v353, 0, v352);
      v351[1] = 0LL;
    }
    v354 = (void *)v351[3];
    if ( v354 )
    {
      v355 = GetProcessHeap();
      HeapFree(v355, 0, v354);
      v351[3] = 0LL;
    }
    v356 = (void *)v351[5];
    if ( v356 )
    {
      v357 = GetProcessHeap();
      HeapFree(v357, 0, v356);
      v351[5] = 0LL;
    }
    v358 = GetProcessHeap();
    HeapFree(v358, 0, v351);
    v853 = v160;
    goto LABEL_444;
  }
LABEL_402:
  v5 = v306 | 0x10000000;
  v849 = v5;
  if ( v5 >= 0 )
  {
    v899 = 0LL;
    v857 = 0LL;
    v321 = 0;
    if ( v160 )
    {
      pcchLength = v160[1];
      if ( pcchLength )
      {
        v322 = *(_DWORD *)v160;
        if ( *(_DWORD *)v160 )
        {
          v860 = 0;
          v323 = v322 - 8LL;
          v987 = (void *)v323;
          v324 = MemoryAlloc(v323);
          v9 = 0LL;
          v870 = (SIZE_T)v324;
          v325 = v324;
          if ( v324 )
          {
            v326 = (unsigned __int8 *)pcchLength;
            v986 = (void *)0x7F1137FAB69605ELL;
            v327 = 0;
            LOBYTE(v852) = 0;
            v328 = v325;
            LODWORD(v854) = 0;
            v329 = v323 & 7;
            if ( (v323 & 7) != 0 )
            {
              HIDWORD(v854) = 0;
              v330 = 0;
              v331 = 56;
              v332 = 0;
              do
              {
                v333 = *v326++;
                if ( v330 >= 4 )
                {
                  v334 = (v333 << v331) | HIDWORD(v854);
                  HIDWORD(v854) = v334;
                }
                else
                {
                  v334 = HIDWORD(v854);
                  v332 |= v333 << (v331 - 32);
                }
                ++v330;
                v331 -= 8;
              }
              while ( v330 < (int)v329 );
              LODWORD(v854) = v332;
              v850 = 0;
              v359 = v334 ^ 0x699A899C;
              LODWORD(v9) = v332 ^ 0x92F65A5;
              v360 = v332 ^ 0x92F65A5;
              v361 = v359;
              if ( (v323 & 7) != 0 )
              {
                v362 = v850;
                do
                {
                  Src = v328 + 1;
                  if ( v362 >= 4 )
                  {
                    v361 = __ROL4__(v361, 8);
                    v363 = v361;
                  }
                  else
                  {
                    v360 = __ROL4__(v360, 8);
                    v363 = v360;
                  }
                  *v328 = v363;
                  ++v362;
                  v328 = Src;
                }
                while ( v362 < (int)v329 );
              }
              if ( v329 <= 4 )
              {
                v364 = 0;
                if ( v329 < 4 )
                  LODWORD(v9) = (unsigned int)v9 >> (8 * (4 - v329)) << (8 * (4 - v329));
              }
              else
              {
                v364 = v359 >> (8 * (8 - v329)) << (8 * (8 - v329));
              }
            }
            else
            {
              HIDWORD(v854) = -1;
              v364 = 0;
            }
            Src = (void *)(v323 >> 3);
            if ( v323 >> 3 )
            {
              v365 = HIDWORD(v986);
              v366 = v328 + 7;
              v367 = (char *)Src;
              v368 = v326 + 2;
              v369 = HIDWORD(v854);
              v370 = v854;
              LODWORD(dwBytes) = WORD2(v986);
              v850 = WORD1(v986);
              v849 = 24670;
              do
              {
                v371 = *(v368 - 1) | (*(v368 - 2) << 8);
                v372 = v368[2] << 8;
                v373 = *v368;
                v368 += 8;
                v374 = *(v368 - 7) | ((v373 | (v371 << 8)) << 8);
                v375 = v374 ^ v9;
                v376 = *(v368 - 3) | ((*(v368 - 4) | ((*(v368 - 5) | v372) << 8)) << 8);
                v377 = v365 ^ v375 ^ v376 ^ v364 ^ 0xAB69605E;
                v378 = (__ROL4__(v377, 10) + dwBytes * __ROL4__(v377 + 1419157410, 5)) ^ v375;
                v379 = (WORD1(v986) * __ROR4__(v378 + v365, 9) - __ROL4__(v378, 2)) ^ v377;
                v380 = (v849 * (v379 - dwBytes) - (v379 >> 13)) ^ v378;
                v381 = (HIWORD(v986) * __ROL4__(WORD1(v986) ^ v380, 6) - __ROL4__(v380, 2)) ^ v379;
                v382 = (v365 - (v381 ^ 0xAB69605E)) ^ v380;
                v383 = (v850 * (dwBytes ^ v382)) ^ __ROR4__(v382, 6) ^ v381;
                v384 = (__ROL4__(v383, 2) + v849 * __ROR4__(v383 + v365, 15)) ^ v382;
                v385 = (HIWORD(v986) * __ROR4__(v384 + 1419157410, 14) - __ROL4__(v384, 8)) ^ v383;
                v386 = __ROR4__(v385, 10) ^ (dwBytes * __ROR4__(v385 ^ 0xAB69605E, 12)) ^ v384;
                v387 = (v386 >> 10) ^ (WORD1(v986) * (HIWORD(v986) ^ v386)) ^ v385;
                v388 = (HIWORD(v986) * (v849 + __ROR4__(~v387, 5))) ^ v386;
                v389 = (v388 - HIWORD(v986)) ^ 0xAB69605E ^ v387;
                v390 = ((v389 >> 2) + dwBytes * __ROL4__(HIWORD(v986) ^ v389, 2)) ^ v388;
                v391 = (__ROL4__(v390, 7) + WORD1(v986) * __ROR4__(v390 - v365, 6)) ^ v389;
                v392 = (v849 * (dwBytes ^ v391) + __ROR4__(v391, 9)) ^ v390;
                v393 = (__ROL4__(v392, 7) + HIWORD(v986) * __ROL4__(WORD1(v986) ^ v392, 5)) ^ v391;
                v394 = v365 ^ v393 ^ 0xAB69605E ^ v392;
                v395 = (dwBytes * (__ROR4__(v394, 3) - WORD1(v986))) ^ v393;
                v396 = (v849 * __ROR4__(v395 - v365, 1) - __ROR4__(v395, 6)) ^ v394;
                v397 = (__ROL4__(v396, 14) + HIWORD(v986) * __ROL4__(v396 - 1419157410, 3)) ^ v395;
                v398 = (dwBytes * __ROL4__(v397 - 1419157410, 15) - __ROR4__(v397, 14)) ^ v396;
                v399 = (v398 >> 3) ^ (WORD1(v986) * (v849 ^ v398)) ^ v397;
                v400 = v369 ^ v399;
                v369 = v376;
                v401 = v370 ^ __ROL4__(v399, 2) ^ (v849 * __ROL4__(v365 ^ v399, 4));
                v370 = v374;
                v402 = v401 ^ v398;
                *(v366 - 4) = v402;
                *v366 = v400;
                v366 += 8;
                v403 = __ROR4__(v402, 8);
                *(v366 - 13) = v403;
                v404 = __ROR4__(v400, 8);
                *(v366 - 9) = v404;
                v405 = __ROR4__(v403, 8);
                *(v366 - 14) = v405;
                v406 = __ROR4__(v404, 8);
                *(v366 - 10) = v406;
                v407 = __ROR4__(v405, 8);
                v408 = __ROR4__(v406, 8);
                *(v366 - 15) = v407;
                *(v366 - 11) = v408;
                v364 = __ROR4__(v408, 8);
                LODWORD(v9) = __ROR4__(v407, 8);
                --v367;
              }
              while ( v367 );
              v327 = v852;
              v321 = v857;
              v323 = (unsigned __int64)v987;
              v325 = (_BYTE *)v870;
            }
            v9 = 0LL;
            for ( i = 0LL; i < v323; ++i )
              v327 ^= v325[i];
            if ( v327 == *(_QWORD *)(v323 + pcchLength) )
            {
              v410 = (wchar_t *)v325;
              v899 = (wchar_t *)v325;
              v321 = v323;
              v325 = 0LL;
              v411 = v860;
            }
            else
            {
              v410 = v899;
              v411 = -1073425151;
            }
            if ( v325 )
            {
              MemoryFree(v325);
              v410 = v899;
              v9 = 0LL;
            }
            if ( v411 >= 0 )
            {
              psza = v410;
              v5 = 0x10000000;
              v410 = 0LL;
              v899 = 0LL;
              v895 = v321;
              goto LABEL_474;
            }
          }
          else
          {
            v410 = v899;
          }
          v321 = v895;
          v5 = -805306367;
LABEL_474:
          v849 = v5;
          if ( v410 )
          {
            v412 = GetProcessHeap();
            HeapFree(v412, 0, v410);
            v321 = v895;
            v9 = 0LL;
            v899 = 0LL;
          }
          if ( v5 < 0 )
            goto LABEL_513;
          HIDWORD(v854) = 0;
          v986 = (void *)psza;
          if ( v321 >= 4 )
          {
            v860 = *(_DWORD *)psza;
            v414 = RtlULongLongAdd(psza, 4LL, &v986, psza);
            if ( v414 < 0 )
              goto LABEL_511;
            v414 = RtlUIntAdd(0LL, v413, (char *)&v854 + 4);
            if ( v414 < 0 )
              goto LABEL_511;
            if ( v321 - HIDWORD(v854) >= v416 )
            {
              v417 = *(unsigned int *)v986;
              v414 = RtlULongLongAdd(v986, v416, &v986, v415);
              if ( v414 < 0 )
                goto LABEL_511;
              v414 = RtlUIntAdd(HIDWORD(v854), v418, (char *)&v854 + 4);
              if ( v414 < 0 )
                goto LABEL_511;
              if ( v321 - HIDWORD(v854) >= (unsigned int)v417 )
              {
                v414 = RtlUIntAdd(HIDWORD(v854), (unsigned int)v417, (char *)&v854 + 4);
                if ( v414 < 0 )
                  goto LABEL_511;
                v421 = v986;
                if ( v419 + (unsigned __int64)v321 >= (unsigned __int64)v986 + v417
                  && v321 + v419 - (_QWORD)v986 - v417 < 8 )
                {
                  LODWORD(v854) = v420;
                  v422 = (void *)v420;
                  v857 = v420;
                  v414 = v420;
                  if ( !v986 )
                  {
LABEL_500:
                    if ( (_DWORD)v417 )
                    {
                      v430 = GetProcessHeap();
                      v422 = HeapAlloc(v430, 8u, v417);
                      v857 = (size_t)v422;
                      if ( !v422 )
                      {
                        v414 = -1073741801;
                        goto LABEL_508;
                      }
                      v414 = 0;
                    }
                    if ( v421 )
                    {
                      memcpy_0(v422, v421, v417);
                      v422 = (void *)v857;
                    }
                    v879[1] = v422;
                    LODWORD(v879[0]) = v854;
LABEL_508:
                    if ( v414 < 0 || v860 == LODWORD(v879[0]) )
                      goto LABEL_511;
                    goto LABEL_510;
                  }
                  v414 = RtlULongLongAdd(v986, (unsigned int)v417, &v870, v986);
                  if ( v414 < 0 )
                    goto LABEL_508;
                  v424 = v870;
                  if ( (unsigned __int64)v421 < v870 )
                  {
                    do
                    {
                      v414 = RtlULongLongAdd(v423, 4LL, &v870, v423);
                      if ( v414 < 0 )
                        goto LABEL_511;
                      if ( v870 > v426 )
                        goto LABEL_503;
                      v427 = RtlUIntAdd(4LL, *v425, &v850);
                      v414 = v427;
                      if ( v427 >= 0 )
                        v429 = v850;
                      v922 = v429;
                      if ( v427 < 0 )
                        goto LABEL_511;
                      v414 = RtlULongLongAdd(v428, v429, &Src, v428);
                      if ( v414 < 0 )
                        goto LABEL_511;
                      v423 = Src;
                      if ( (unsigned __int64)Src > v424 )
                        goto LABEL_503;
                      LODWORD(v854) = v854 + 1;
                    }
                    while ( (unsigned __int64)Src < v424 );
                  }
                  if ( v423 == (void *)v424 )
                  {
                    v422 = (void *)v857;
                    goto LABEL_500;
                  }
LABEL_503:
                  v414 = -1073741811;
LABEL_511:
                  v5 = v414 | 0x10000000;
                  v9 = 0LL;
                  goto LABEL_512;
                }
              }
            }
          }
LABEL_510:
          v414 = -1073741762;
          goto LABEL_511;
        }
      }
    }
    v5 = -805306355;
    v849 = -805306355;
  }
LABEL_514:
  v431 = v855;
  if ( v855 )
  {
    v432 = GetProcessHeap();
    HeapFree(v432, 0, v431);
    v9 = 0LL;
  }
  v433 = v911;
  if ( v911 )
  {
    v434 = (void *)*((_QWORD *)v911 + 1);
    if ( v434 )
    {
      v435 = GetProcessHeap();
      HeapFree(v435, 0, v434);
      v433[1] = 0LL;
    }
    v436 = (void *)v433[3];
    if ( v436 )
    {
      v437 = GetProcessHeap();
      HeapFree(v437, 0, v436);
      v433[3] = 0LL;
    }
    v438 = (void *)v433[5];
    if ( v438 )
    {
      v439 = GetProcessHeap();
      HeapFree(v439, 0, v438);
      v433[5] = 0LL;
    }
    v440 = GetProcessHeap();
    HeapFree(v440, 0, v433);
    v9 = 0LL;
    v911 = 0LL;
  }
  v441 = v888;
  if ( v888 )
  {
    v442 = GetProcessHeap();
    HeapFree(v442, 0, v441);
    v9 = 0LL;
  }
  v443 = v889;
  if ( v889 )
  {
    v444 = GetProcessHeap();
    HeapFree(v444, 0, v443);
    v9 = 0LL;
  }
  if ( v160 )
  {
    v445 = (void *)v160[1];
    if ( v445 )
    {
      v446 = GetProcessHeap();
      HeapFree(v446, 0, v445);
      v160[1] = 0LL;
    }
    v447 = (void *)v160[3];
    if ( v447 )
    {
      v448 = GetProcessHeap();
      HeapFree(v448, 0, v447);
      v160[3] = 0LL;
    }
    v449 = (void *)v160[5];
    if ( v449 )
    {
      v450 = GetProcessHeap();
      HeapFree(v450, 0, v449);
      v160[5] = 0LL;
    }
    v451 = GetProcessHeap();
    HeapFree(v451, 0, v160);
    v9 = 0LL;
  }
  v452 = (wchar_t *)psza;
  if ( psza )
  {
    v453 = GetProcessHeap();
    HeapFree(v453, 0, v452);
    v9 = 0LL;
  }
  if ( v5 < 0 )
    goto LABEL_110;
  if ( !LODWORD(v879[0]) )
  {
    v5 = -1073425151;
    goto LABEL_109;
  }
  if ( v879[1] == (LPVOID)v9 || LODWORD(v879[0]) <= (unsigned int)v9 )
  {
    v5 = -1073741811;
    v849 = -1073741811;
  }
  else
  {
    pcchLength = (size_t)v879[1];
    v849 = RtlULongLongAdd(v879[1], 4LL, &pcchLength, *(unsigned int *)v879[1]);
    v5 = v849;
    if ( v849 < 0 )
    {
      v454 = v923;
      v455 = v947;
    }
    else
    {
      v455 = (int *)pcchLength;
      v923 = v454;
      if ( !v454 )
        v455 = (int *)v9;
      v947 = v455;
    }
    if ( v849 < 0 )
      goto LABEL_110;
    if ( v454 != 4 )
      goto LABEL_558;
    v880 = *v455;
  }
  if ( v5 < 0 )
    goto LABEL_110;
  v5 = v880;
  if ( v880 == -805306333 )
    v5 = -2147024774;
  v849 = v5;
  v880 = v5;
  if ( v5 != -2147024774 && v5 < 0 )
    goto LABEL_219;
  if ( LODWORD(v879[0]) != 6 )
  {
    v6 = v856;
    v5 = -1073425151;
    v849 = -1073425151;
    goto LABEL_111;
  }
  if ( v879[1] == (LPVOID)v9 )
  {
    v5 = -1073741811;
    v849 = -1073741811;
    goto LABEL_576;
  }
  v456 = v879[1];
  v457 = (unsigned int)v9;
  v855 = v879[1];
  do
  {
    v849 = RtlULongLongAdd(v456, 4LL, &v855, v457);
    v5 = v849;
    if ( v849 < 0 )
    {
      v9 = 0LL;
      goto LABEL_572;
    }
    v460 = RtlULongLongAdd(v855, v459, &v855, v458);
    v9 = 0LL;
    v849 = v460;
    v5 = v460;
    if ( v460 < 0 )
      goto LABEL_572;
    v456 = v855;
    v457 = (unsigned int)(v461 + 1);
  }
  while ( !(_DWORD)v457 );
  v849 = RtlULongLongAdd(v855, 4LL, &v855, *(unsigned int *)v855);
  v5 = v849;
  if ( v849 < 0 )
  {
LABEL_572:
    v462 = v924;
    v463 = v948;
    goto LABEL_573;
  }
  v463 = v855;
  v924 = v462;
  if ( !v462 )
    v463 = (_QWORD *)v9;
  v948 = v463;
LABEL_573:
  if ( v5 < 0 )
    goto LABEL_110;
  if ( v462 != 8 )
  {
LABEL_558:
    v5 = -1073741789;
    goto LABEL_109;
  }
  v953 = *v463;
LABEL_576:
  if ( v5 < 0 )
    goto LABEL_110;
  if ( v879[1] == (LPVOID)v9 )
  {
    v5 = -1073741811;
    v849 = -1073741811;
    goto LABEL_592;
  }
  v464 = v879[1];
  v465 = (unsigned int)v9;
  v855 = v879[1];
  while ( 2 )
  {
    v849 = RtlULongLongAdd(v464, 4LL, &v855, v465);
    v5 = v849;
    if ( v849 < 0 )
    {
      v9 = 0LL;
      goto LABEL_588;
    }
    v468 = RtlULongLongAdd(v855, v467, &v855, v466);
    v9 = 0LL;
    v849 = v468;
    v5 = v468;
    if ( v468 < 0 )
      goto LABEL_588;
    v464 = v855;
    v465 = (unsigned int)(v469 + 1);
    if ( (unsigned int)v465 < 2 )
      continue;
    break;
  }
  v849 = RtlULongLongAdd(v855, 4LL, &v855, *(unsigned int *)v855);
  v5 = v849;
  if ( v849 < 0 )
  {
LABEL_588:
    v470 = v925;
    v471 = v949;
    goto LABEL_589;
  }
  v471 = v855;
  v925 = v470;
  if ( !v470 )
    v471 = (_DWORD *)v9;
  v949 = v471;
LABEL_589:
  if ( v5 < 0 )
    goto LABEL_110;
  if ( v470 != 4 )
    goto LABEL_558;
  v931 = *v471;
LABEL_592:
  if ( v5 < 0 )
    goto LABEL_110;
  if ( v879[1] == (LPVOID)v9 )
  {
    v5 = -1073741811;
    goto LABEL_109;
  }
  v472 = v879[1];
  v473 = (unsigned int)v9;
  v855 = v879[1];
  while ( 1 )
  {
    v849 = RtlULongLongAdd(v472, 4LL, &v855, v473);
    v5 = v849;
    if ( v849 < 0 )
      break;
    v849 = RtlULongLongAdd(v855, v475, &v855, v474);
    v5 = v849;
    if ( v849 < 0 )
      break;
    v472 = v855;
    v473 = (unsigned int)(v476 + 1);
    if ( (unsigned int)v473 >= 3 )
    {
      v849 = RtlULongLongAdd(v855, 4LL, &v855, v473);
      v5 = v849;
      if ( v849 >= 0 )
      {
        v478 = v855;
        v927 = v477;
        if ( !v477 )
          v478 = 0LL;
        v950 = v478;
      }
      break;
    }
  }
  if ( v5 < 0 )
    goto LABEL_619;
  v479 = (unsigned int *)v879[1];
  v480 = 0LL;
  v855 = v879[1];
  do
  {
    v481 = *v479;
    v849 = RtlULongLongAdd(v479, 4LL, &v855, v480);
    v5 = v849;
    if ( v849 < 0 )
      goto LABEL_612;
    v849 = RtlULongLongAdd(v855, v481, &v855, v482);
    v5 = v849;
    if ( v849 < 0 )
      goto LABEL_612;
    v479 = (unsigned int *)v855;
    v480 = (unsigned int)(v483 + 1);
  }
  while ( (unsigned int)v480 < 4 );
  v849 = RtlULongLongAdd(v855, 4LL, &v855, *(unsigned int *)v855);
  v5 = v849;
  if ( v849 < 0 )
  {
LABEL_612:
    v484 = v928;
    v485 = v951;
    goto LABEL_613;
  }
  v485 = (unsigned int *)v855;
  v928 = v484;
  if ( !v484 )
    v485 = 0LL;
  v951 = v485;
LABEL_613:
  if ( v5 < 0 )
  {
    v486 = v929;
LABEL_621:
    if ( v5 < 0 )
      goto LABEL_619;
    v487 = (unsigned int *)v879[1];
    v488 = 0LL;
    v855 = v879[1];
    do
    {
      v489 = *v487;
      v849 = RtlULongLongAdd(v487, 4LL, &v855, v488);
      v5 = v849;
      if ( v849 < 0 )
        goto LABEL_630;
      v849 = RtlULongLongAdd(v855, v489, &v855, v490);
      v5 = v849;
      if ( v849 < 0 )
        goto LABEL_630;
      v487 = (unsigned int *)v855;
      v488 = (unsigned int)(v493 + 1);
    }
    while ( (unsigned int)v488 < 5 );
    v849 = RtlULongLongAdd(v855, 4LL, &v855, *(unsigned int *)v855);
    v5 = v849;
    if ( v849 < 0 )
    {
LABEL_630:
      v494 = v930;
      v495 = v952;
      goto LABEL_631;
    }
    v495 = v855;
    v930 = v494;
    if ( !v494 )
      v495 = 0LL;
    v952 = v495;
LABEL_631:
    if ( v5 < 0 )
    {
      v496 = v906;
    }
    else
    {
      if ( v494 != 4 )
        goto LABEL_616;
      v496 = *v495;
      v906 = *v495;
    }
    if ( v5 < 0 )
      goto LABEL_619;
    if ( v935 != v953 )
    {
      v5 = -1073425151;
      goto LABEL_618;
    }
    v902 = v931;
    v901 = v486;
    v896 = v496;
    if ( v486 <= 4 && v491 <= 4 )
    {
      memcpy_0(v936, v492, v491);
      v9 = 0LL;
      if ( v880 )
        v5 = v880;
LABEL_109:
      v849 = v5;
      goto LABEL_110;
    }
    v6 = v856;
    v5 = -2147024774;
    v849 = -2147024774;
    v9 = 0LL;
  }
  else
  {
    if ( v484 == 4 )
    {
      v486 = *v485;
      v929 = *v485;
      goto LABEL_621;
    }
LABEL_616:
    v5 = -1073741789;
LABEL_618:
    v849 = v5;
LABEL_619:
    v9 = 0LL;
LABEL_110:
    v6 = v856;
  }
LABEL_111:
  Size = 0LL;
  v80 = lpMem;
  if ( lpMem )
  {
    v81 = GetProcessHeap();
    HeapFree(v81, 0, v80);
    v9 = 0LL;
    lpMem = 0LL;
  }
  v879[0] = 0LL;
  v82 = v879[1];
  if ( v879[1] )
  {
    v83 = GetProcessHeap();
    HeapFree(v83, 0, v82);
    v9 = 0LL;
    v879[1] = 0LL;
  }
  if ( v6 )
  {
    v84 = GetProcessHeap();
    HeapFree(v84, 0, v6);
    v9 = 0LL;
  }
  v85 = v874;
  if ( v874 )
  {
    v86 = GetProcessHeap();
    HeapFree(v86, 0, v85);
    v9 = 0LL;
  }
  if ( v5 < 0 )
    goto LABEL_1029;
  if ( v896 == (_DWORD)v9 )
    goto LABEL_1028;
  v863 = (void *)v9;
  v87 = (void *)v9;
  *(_OWORD *)v912 = 0LL;
  v954 = &unk_1800E45F0;
  v88 = (void *)v9;
  v89 = GetProcessHeap();
  v90 = (size_t *)HeapAlloc(v89, 8u, 0xA0uLL);
  v9 = 0LL;
  v91 = v90;
  if ( !v90 )
    goto LABEL_1020;
  v92 = v954;
  v853 = v91;
  *(_OWORD *)v91 = *v954;
  *((_OWORD *)v91 + 1) = v92[1];
  *((_OWORD *)v91 + 2) = v92[2];
  *((_OWORD *)v91 + 3) = v92[3];
  *((_OWORD *)v91 + 4) = v92[4];
  *((_OWORD *)v91 + 5) = v92[5];
  *((_OWORD *)v91 + 6) = v92[6];
  *((_OWORD *)v91 + 7) = v92[7];
  *((_OWORD *)v91 + 8) = v92[8];
  *((_OWORD *)v91 + 9) = v92[9];
  v955 = &unk_1800E4538;
  v93 = GetProcessHeap();
  v94 = HeapAlloc(v93, 8u, 8uLL);
  v9 = 0LL;
  v95 = v94;
  if ( !v94 )
    goto LABEL_1019;
  v88 = v94;
  v987 = v94;
  *v94 = *v955;
  v956 = __rdtsc();
  LODWORD(dwBytes) = 0;
  if ( (int)RtlUIntAdd(4LL, 4LL, &v850) < 0 )
    goto LABEL_1019;
  if ( (int)RtlUIntAdd(0LL, v850, &dwBytes) < 0 )
    goto LABEL_1019;
  if ( (int)RtlUIntAdd(v96, 160LL, &v850) < 0 )
    goto LABEL_1019;
  v97 = RtlUIntAdd((unsigned int)dwBytes, v850, &dwBytes);
  if ( (v99 | v97) < 0 )
    goto LABEL_1019;
  if ( (int)RtlUIntAdd(v98, (unsigned int)(v9 + 8), &v850) < 0 )
    goto LABEL_1019;
  v100 = RtlUIntAdd((unsigned int)dwBytes, v850, &dwBytes);
  if ( (v102 | v100) < 0 )
    goto LABEL_1019;
  if ( (int)RtlUIntAdd(v101, (unsigned int)(v9 + 8), &v850) < 0 )
    goto LABEL_1019;
  v959 = v850;
  v103 = RtlUIntAdd((unsigned int)dwBytes, v850, &dwBytes);
  if ( (v104 | v103) < 0 )
    goto LABEL_1019;
  HIDWORD(v862) = dwBytes;
  v105 = dwBytes;
  v106 = GetProcessHeap();
  v107 = HeapAlloc(v106, 8u, v105);
  v9 = 0LL;
  if ( !v107 )
    goto LABEL_640;
  v863 = v107;
  LODWORD(v862) = 0;
  v932 = 4;
  if ( (int)RtlULongLongAdd(v107, 4LL, &v867, v107) < 0 || v108 + 2 > (_DWORD *)((char *)v108 + HIDWORD(v862)) )
    goto LABEL_640;
  v110 = v867;
  *v108 = v109;
  *v110 = v932;
  v111 = v862 + 1;
  LODWORD(v862) = v862 + 1;
  if ( v863 != (void *)v9 )
  {
    v497 = (unsigned int *)v863;
    psza = (STRSAFE_PCNZWCH)v863;
    if ( v111 )
    {
      while ( (int)RtlUIntAdd(4LL, *v497, &v850) >= 0 )
      {
        v933 = v850;
        if ( (int)RtlULongLongAdd(v498, v850, &psza, v498) < 0 )
          goto LABEL_1018;
        v497 = (unsigned int *)psza;
        if ( v499 + 1 >= v500 )
          goto LABEL_645;
      }
      goto LABEL_663;
    }
LABEL_645:
    v501 = RtlULongLongAdd(v497, 4LL, &v867, v497);
    v9 = 0LL;
    v503 = v501;
    if ( v501 < 0 )
      goto LABEL_640;
    if ( v502 + 41 > (_DWORD *)((char *)v863 + HIDWORD(v862)) )
      goto LABEL_640;
    v504 = v867;
    v505 = v112 + 124;
    *v502 = 160;
    *v504 = *(_OWORD *)v91;
    v504[1] = *((_OWORD *)v91 + 1);
    v504[2] = *((_OWORD *)v91 + 2);
    v504[3] = *((_OWORD *)v91 + 3);
    v504[4] = *((_OWORD *)v91 + 4);
    v504[5] = *((_OWORD *)v91 + 5);
    v504[6] = *((_OWORD *)v91 + 6);
    *(_OWORD *)((char *)v504 + v505 - 16) = *((_OWORD *)v91 + 7);
    *(_OWORD *)((char *)v504 + v505) = *(_OWORD *)((char *)v91 + v505);
    *(_OWORD *)((char *)v504 + v505 + 16) = *(_OWORD *)((char *)v91 + v505 + 16);
    v113 = (unsigned int)(v862 + 1);
    LODWORD(v862) = v862 + 1;
    if ( v503 < 0 )
      goto LABEL_640;
LABEL_648:
    if ( v863 == (void *)v9 )
    {
      v506 = 8;
      if ( (int)RtlUIntAdd(v112, 8LL, &v850) < 0 )
        goto LABEL_664;
      v934 = v850;
      if ( (int)RtlUIntAdd(HIDWORD(v862), v850, (char *)&v862 + 4) < 0 )
        goto LABEL_664;
      v508 = (unsigned int)(v862 + 1);
      LODWORD(v862) = v862 + 1;
    }
    else
    {
      v509 = (unsigned int *)v863;
      psza = (STRSAFE_PCNZWCH)v863;
      if ( (_DWORD)v113 )
      {
        while ( (int)RtlUIntAdd(4LL, *v509, &v850) >= 0 )
        {
          v934 = v850;
          v512 = RtlULongLongAdd(v511, v850, &psza, v510);
          v9 = 0LL;
          if ( v512 < 0 )
            goto LABEL_640;
          v509 = (unsigned int *)psza;
          if ( v513 + 1 >= (unsigned int)v113 )
            goto LABEL_656;
        }
        goto LABEL_663;
      }
LABEL_656:
      v514 = RtlULongLongAdd(v509, 4LL, &v867, v113);
      if ( v514 < 0 || v515 + 3 > (_DWORD *)((char *)v863 + HIDWORD(v862)) )
      {
LABEL_1018:
        v88 = v95;
        v9 = 0LL;
        goto LABEL_1019;
      }
      v516 = v867;
      v506 = v507 + 4;
      *v515 = v507 + 4;
      *v516 = *v95;
      v508 = (unsigned int)(v862 + 1);
      LODWORD(v862) = v862 + 1;
      v9 = 0LL;
    }
    v957 = v956;
    if ( v863 == (void *)v9 )
    {
      if ( (int)RtlUIntAdd(v507, v506, &v850) < 0 )
        goto LABEL_664;
      v913 = v850;
      if ( (int)RtlUIntAdd(HIDWORD(v862), v850, (char *)&v862 + 4) < 0 )
        goto LABEL_664;
      LODWORD(v862) = v862 + 1;
      goto LABEL_674;
    }
    v518 = (unsigned int *)v863;
    psza = (STRSAFE_PCNZWCH)v863;
    if ( !(_DWORD)v508 )
    {
LABEL_671:
      if ( (int)RtlULongLongAdd(v518, 4LL, &v867, v508) < 0 || v523 + 3 > (DWORD *)((char *)v863 + HIDWORD(v862)) )
      {
        v88 = v95;
        goto LABEL_1017;
      }
      v524 = v867;
      *v523 = v506;
      *v524 = v957;
      LODWORD(v862) = v862 + 1;
LABEL_674:
      if ( (int)RtlUIntAdd(v517, v517, &v850) < 0 )
        goto LABEL_664;
      if ( (int)RtlUIntAdd(v525, v506, &v860) < 0 )
        goto LABEL_664;
      v946 = v860;
      if ( (int)RtlUIntAdd(v526, v860, &v850) < 0 )
        goto LABEL_664;
      v527 = v850;
      LODWORD(v854) = 0;
      v910 = 0LL;
      v528 = 0LL;
      v889 = 0LL;
      v850 = 0;
      v888 = 0LL;
      v869 = 0;
      v857 = 0LL;
      pcchLength = 0LL;
      v881 = 0;
      LODWORD(v856) = v527;
      v855 = (LPVOID)v9;
      v958 = __rdtsc();
      v877 = v506;
      v529 = RtlUIntAdd(v506, HIDWORD(v862), &v877);
      if ( v529 >= 0 )
      {
        v533 = (v877 + 7) & 0xFFFFFFF8;
        if ( v533 < v877 )
        {
          v529 = -1073741675;
          goto LABEL_689;
        }
        v877 = (v877 + 7) & 0xFFFFFFF8;
        v534 = v533;
        v535 = GetProcessHeap();
        v536 = (char *)HeapAlloc(v535, v506, v534);
        v532 = 0LL;
        v537 = v536;
        if ( !v536 )
        {
          v529 = -1073741801;
          v530 = 0;
LABEL_688:
          v531 = v855;
          goto LABEL_689;
        }
        v872 = v536;
        *(_DWORD *)v536 = v862;
        v529 = RtlULongLongAdd(v536, 4LL, &v872, 4LL);
        if ( v529 < 0
          || (v539 = v872,
              *(_DWORD *)v872 = HIDWORD(v862),
              v529 = RtlULongLongAdd(v539, (unsigned int)v538, &v872, v538),
              v529 < 0) )
        {
          v531 = v855;
          v530 = (unsigned int)v532;
        }
        else
        {
          *(_QWORD *)&v537[v877 - 8] = v958;
          memcpy_0(v872, v863, HIDWORD(v862));
          v530 = v877;
          v532 = 0LL;
          v531 = v537;
          v855 = v537;
          v537 = 0LL;
          LODWORD(v854) = v877;
        }
        if ( v537 )
        {
          v540 = GetProcessHeap();
          HeapFree(v540, 0, v537);
          v530 = v854;
          v532 = 0LL;
          goto LABEL_688;
        }
      }
LABEL_689:
      v541 = v529 | 0x10000000;
      if ( v541 < 0 )
        goto LABEL_971;
      v916 = v532;
      v542 = v532;
      Src = v532;
      if ( !v531 )
      {
        v543 = -1073741811;
        goto LABEL_748;
      }
      v544 = v530;
      v872 = (void *)v530;
      if ( !v530 || (v866 = v530 + 8LL, (psza = (STRSAFE_PCNZWCH)MemoryAlloc(v866)) == 0LL) )
      {
        v543 = -1073741823;
LABEL_738:
        v621 = v916;
        if ( v916 )
        {
          v622 = GetProcessHeap();
          HeapFree(v622, 0, v621);
          v916 = 0LL;
        }
        if ( v542 )
        {
          v623 = (void *)v542[1];
          if ( v623 )
          {
            v624 = GetProcessHeap();
            HeapFree(v624, 0, v623);
            v542[1] = 0LL;
          }
          v625 = (void *)v542[3];
          if ( v625 )
          {
            v626 = GetProcessHeap();
            HeapFree(v626, 0, v625);
            v542[3] = 0LL;
          }
          v627 = (void *)v542[5];
          if ( v627 )
          {
            v628 = GetProcessHeap();
            HeapFree(v628, 0, v627);
            v542[5] = 0LL;
          }
          v629 = GetProcessHeap();
          HeapFree(v629, 0, v542);
        }
LABEL_748:
        v541 = v543 | 0x10000000;
        if ( v541 >= 0 )
        {
          v630 = (const void **)v910;
          LODWORD(dwBytes) = 4;
          v631 = RtlUIntAdd(4LL, *(unsigned int *)v910, &dwBytes);
          if ( v631 < 0
            || (v631 = RtlUIntAdd((unsigned int)dwBytes, v632, &dwBytes), v631 < 0)
            || (v631 = RtlUIntAdd((unsigned int)dwBytes, *((unsigned int *)v630 + 4), &dwBytes), v631 < 0)
            || (v631 = RtlUIntAdd((unsigned int)dwBytes, v634, &dwBytes), v631 < 0) )
          {
            v635 = v882;
          }
          else
          {
            v631 = RtlUIntAdd((unsigned int)dwBytes, *((unsigned int *)v630 + 8), &dwBytes);
            v635 = v882;
            if ( v631 >= 0 )
              v635 = dwBytes;
            v882 = v635;
          }
          if ( v631 >= 0 )
          {
            v636 = v635;
            v637 = GetProcessHeap();
            v638 = HeapAlloc(v637, 8u, v636);
            v633 = 0LL;
            v640 = v638;
            if ( v638 )
            {
              *v638 = *(_DWORD *)v630;
              v986 = v638;
              v631 = RtlULongLongAdd(v638, 4LL, &v986, v639);
              if ( v631 >= 0 )
              {
                memcpy_0(v986, v630[1], *(unsigned int *)v630);
                v642 = RtlULongLongAdd(v986, *(unsigned int *)v630, &v986, v641);
                v633 = 0LL;
                v631 = v642;
                if ( v642 >= 0 )
                {
                  v644 = v986;
                  *(_DWORD *)v986 = *((_DWORD *)v630 + 4);
                  v631 = RtlULongLongAdd(v644, 4LL, &v986, v643);
                  if ( v631 >= 0 )
                  {
                    memcpy_0(v986, v630[3], *((unsigned int *)v630 + 4));
                    v646 = RtlULongLongAdd(v986, *((unsigned int *)v630 + 4), &v986, v645);
                    v633 = 0LL;
                    v631 = v646;
                    if ( v646 >= 0 )
                    {
                      v648 = v986;
                      *(_DWORD *)v986 = *((_DWORD *)v630 + 8);
                      v631 = RtlULongLongAdd(v648, 4LL, &v986, v647);
                      if ( v631 >= 0 )
                      {
                        memcpy_0(v986, v630[5], *((unsigned int *)v630 + 8));
                        v650 = RtlULongLongAdd(v986, *((unsigned int *)v630 + 8), &v986, v649);
                        v633 = 0LL;
                        v631 = v650;
                        if ( v650 >= 0 )
                        {
                          v889 = v640;
                          v640 = 0LL;
                          v850 = v882;
                        }
                      }
                    }
                  }
                }
              }
              if ( v640 )
              {
                v651 = GetProcessHeap();
                HeapFree(v651, 0, v640);
                v633 = 0LL;
              }
            }
            else
            {
              v631 = -1073741801;
            }
          }
          v541 = v631 | 0x10000000;
          if ( v541 >= 0 )
          {
            v960 = v633;
            v914 = (unsigned int)v633;
            v961 = v633;
            v915 = (int)v633;
            v897 = 8;
            v652 = RtlUIntAdd(8LL, (unsigned int)v856, &v897);
            v541 = v652 | 0x10000000;
            if ( v652 >= 0 )
            {
              v654 = (v897 + 7) & 0xFFFFFFF8;
              if ( v654 >= v897 )
              {
                v907 = (v897 + 7) & 0xFFFFFFF8;
                v656 = RtlUIntAdd(v654, v653, &v907);
                v655 = v909;
                v541 = v656;
                if ( v656 >= 0 )
                  v655 = v907;
                v909 = v655;
              }
              else
              {
                v655 = v909;
                v541 = -1073741675;
              }
              if ( v541 >= 0 )
              {
                if ( v863 && (unsigned int)v862 > 1 )
                {
                  v657 = (unsigned int *)v863;
                  v658 = 0;
                  v986 = v863;
                  while ( 1 )
                  {
                    v659 = *v657;
                    v541 = RtlULongLongAdd(v657, 4LL, &v986, v655);
                    if ( v541 < 0 )
                      break;
                    v541 = RtlULongLongAdd(v986, v659, &v986, v655);
                    if ( v541 < 0 )
                      break;
                    v657 = (unsigned int *)v986;
                    if ( ++v658 )
                    {
                      v660 = *(_DWORD *)v986;
                      v541 = RtlULongLongAdd(v986, 4LL, &v986, v655);
                      if ( v541 >= 0 )
                      {
                        v661 = v986;
                        v914 = v660;
                        if ( !v660 )
                          v661 = 0LL;
                        v960 = v661;
                      }
                      break;
                    }
                  }
                  if ( v541 < 0 )
                    goto LABEL_788;
                  if ( (unsigned int)v862 > 2 )
                  {
                    v666 = (unsigned int *)v863;
                    v667 = 0;
                    v986 = v863;
                    do
                    {
                      v668 = *v666;
                      v541 = RtlULongLongAdd(v666, 4LL, &v986, v655);
                      if ( v541 < 0 )
                        goto LABEL_788;
                      v541 = RtlULongLongAdd(v986, v668, &v986, v669);
                      if ( v541 < 0 )
                        goto LABEL_802;
                      v666 = (unsigned int *)v986;
                      ++v667;
                    }
                    while ( v667 < 2 );
                    v670 = *(_DWORD *)v986;
                    v541 = RtlULongLongAdd(v986, 4LL, &v986, v655);
                    if ( v541 >= 0 )
                    {
                      v671 = v986;
                      v915 = v670;
                      if ( !v670 )
                        v671 = 0LL;
                      v961 = v671;
                    }
LABEL_802:
                    if ( v541 < 0 )
                      goto LABEL_788;
                    LODWORD(dwBytes) = 4;
                    v541 = RtlUIntAdd(4LL, (unsigned int)v655, &dwBytes);
                    if ( v541 < 0 || (v541 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes), v541 < 0) )
                    {
                      v9 = 0LL;
                    }
                    else
                    {
                      v673 = RtlUIntAdd((unsigned int)dwBytes, v672, &dwBytes);
                      v9 = 0LL;
                      v541 = v673;
                      if ( v673 >= 0 )
                      {
                        v541 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                        if ( v541 >= 0 )
                        {
                          v541 = RtlUIntAdd((unsigned int)dwBytes, v674, &dwBytes);
                          v675 = v900;
                          if ( v541 >= 0 )
                            v675 = dwBytes;
                          v900 = v675;
                          goto LABEL_812;
                        }
                      }
                    }
                    v675 = v900;
LABEL_812:
                    if ( v541 < 0 )
                      goto LABEL_972;
                    if ( v675 > 0x400000 )
                    {
                      v541 = -2147418113;
                      goto LABEL_972;
                    }
                    v869 = v675;
                    goto LABEL_789;
                  }
                }
                v541 = -1073741811;
              }
            }
LABEL_788:
            v9 = 0LL;
LABEL_789:
            if ( v541 < 0 )
              goto LABEL_972;
            v662 = v869;
            v663 = GetProcessHeap();
            v664 = HeapAlloc(v663, 8u, v662);
            v9 = 0LL;
            if ( v664 )
            {
              v665 = v664;
              v888 = v664;
              v541 = 0x10000000;
            }
            else
            {
              v541 = -805306345;
              v665 = 0LL;
            }
            if ( v541 < 0 )
              goto LABEL_972;
            if ( !v889 || !v665 )
            {
              v541 = -2147024809;
LABEL_972:
              v809 = v855;
              if ( v855 )
              {
                v810 = GetProcessHeap();
                HeapFree(v810, 0, v809);
                v9 = 0LL;
              }
              v811 = v910;
              if ( v910 )
              {
                v812 = (void *)*((_QWORD *)v910 + 1);
                if ( v812 )
                {
                  v813 = GetProcessHeap();
                  HeapFree(v813, 0, v812);
                  v811[1] = 0LL;
                }
                v814 = (void *)v811[3];
                if ( v814 )
                {
                  v815 = GetProcessHeap();
                  HeapFree(v815, 0, v814);
                  v811[3] = 0LL;
                }
                v816 = (void *)v811[5];
                if ( v816 )
                {
                  v817 = GetProcessHeap();
                  HeapFree(v817, 0, v816);
                  v811[5] = 0LL;
                }
                v818 = GetProcessHeap();
                HeapFree(v818, 0, v811);
                v9 = 0LL;
                v910 = 0LL;
              }
              v819 = v889;
              if ( v889 )
              {
                v820 = GetProcessHeap();
                HeapFree(v820, 0, v819);
                v9 = 0LL;
              }
              v821 = v888;
              if ( v888 )
              {
                v822 = GetProcessHeap();
                HeapFree(v822, 0, v821);
                v9 = 0LL;
              }
              if ( v528 )
              {
                v823 = (void *)*((_QWORD *)v528 + 1);
                if ( v823 )
                {
                  v824 = GetProcessHeap();
                  HeapFree(v824, 0, v823);
                  *((_QWORD *)v528 + 1) = 0LL;
                }
                v825 = (void *)*((_QWORD *)v528 + 3);
                if ( v825 )
                {
                  v826 = GetProcessHeap();
                  HeapFree(v826, 0, v825);
                  *((_QWORD *)v528 + 3) = 0LL;
                }
                v827 = (void *)*((_QWORD *)v528 + 5);
                if ( v827 )
                {
                  v828 = GetProcessHeap();
                  HeapFree(v828, 0, v827);
                  *((_QWORD *)v528 + 5) = 0LL;
                }
                v829 = GetProcessHeap();
                HeapFree(v829, 0, v528);
                v9 = 0LL;
              }
              v830 = (void *)pcchLength;
              if ( pcchLength )
              {
                v831 = GetProcessHeap();
                HeapFree(v831, 0, v830);
                v9 = 0LL;
              }
              if ( v541 < 0 || !LODWORD(v912[0]) || (v832 = (unsigned int *)v912[1]) == 0LL )
              {
LABEL_665:
                v88 = v987;
                goto LABEL_666;
              }
              v874 = v912[1];
              if ( (int)RtlULongLongAdd(v912[1], 4LL, &v874, LODWORD(v912[0])) >= 0 )
              {
                v836 = (int *)v874;
                v942 = v834;
                if ( !v834 )
                  v836 = 0LL;
                v980 = v836;
                if ( v834 == (_DWORD)v835 )
                {
                  v937 = *v836;
                  v9 = 0LL;
                  if ( v937 >= 0 && v833 > 1 )
                  {
                    v855 = v832;
                    v837 = 0LL;
                    while ( (int)RtlULongLongAdd(v832, v835, &v855, v837) >= 0
                         && (int)RtlULongLongAdd(v855, *v832, &v855, v838) >= 0 )
                    {
                      v837 = (unsigned int)(v839 + 1);
                      if ( (_DWORD)v837 )
                      {
                        if ( (int)RtlULongLongAdd(v855, v835, &v855, *(unsigned int *)v855) >= 0 )
                        {
                          v841 = v855;
                          v964 = v840;
                          if ( !v840 )
                            v841 = (_QWORD *)v9;
                          v981 = v841;
                          if ( v840 == 8 )
                            v982 = *v841;
                        }
                        goto LABEL_665;
                      }
                      v832 = (unsigned int *)v855;
                    }
                  }
                  goto LABEL_665;
                }
              }
              v88 = v987;
LABEL_1017:
              v87 = v853;
              v9 = 0LL;
              goto LABEL_1020;
            }
            v965[0] = v889;
            v966 = v850;
            v967 = v869;
            v965[1] = v665;
            v968 = 0;
            if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
              && (v676 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
            {
              v677 = ((__int64 (__fastcall *)(__int64, _QWORD *))v676)(134LL, v965);
              v678 = v869;
              v541 = v677 | 0x10000000;
              if ( v677 >= 0 )
                v678 = v967;
              v869 = v678;
            }
            else
            {
              v679 = GetLastError();
              v541 = v679;
              if ( v679 > 0 )
                v541 = (unsigned __int16)v679 | 0x80070000;
              if ( v541 >= 0 )
                v541 = -2147467259;
              v678 = v869;
            }
            v9 = 0LL;
            if ( v541 == -805306333 )
            {
              v541 = -2147024774;
              goto LABEL_972;
            }
            if ( v541 < 0 )
              goto LABEL_972;
            v874 = 0LL;
            LODWORD(dwBytes) = 0;
            v986 = v665;
            if ( (unsigned int)v678 < 4 )
              goto LABEL_855;
            LODWORD(v856) = *v665;
            v680 = RtlULongLongAdd(v665, 4LL, &v986, v678);
            if ( v680 < 0 )
              goto LABEL_890;
            v680 = RtlUIntAdd(0LL, 4LL, &dwBytes);
            if ( v680 < 0 )
              goto LABEL_890;
            if ( (int)v681 - (int)dwBytes < (unsigned int)v682 )
              goto LABEL_855;
            v866 = (SIZE_T)v986;
            v870 = v682;
            v680 = RtlULongLongAdd(v986, (unsigned int)v682, &v986, v681);
            if ( v680 < 0 )
              goto LABEL_890;
            v680 = RtlUIntAdd((unsigned int)dwBytes, v683, &dwBytes);
            if ( v680 < 0 )
              goto LABEL_890;
            if ( (unsigned int)(v684 - dwBytes) < 4 )
              goto LABEL_855;
            v685 = *(unsigned int *)v986;
            v680 = RtlULongLongAdd(v986, 4LL, &v986, v684);
            if ( v680 < 0 )
              goto LABEL_890;
            v680 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
            if ( v680 < 0 )
              goto LABEL_890;
            if ( (int)v686 - (int)dwBytes < (unsigned int)v685 )
              goto LABEL_855;
            Src = v986;
            v680 = RtlULongLongAdd(v986, (unsigned int)v685, &v986, v686);
            if ( v680 < 0 )
              goto LABEL_890;
            v680 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v685, &dwBytes);
            if ( v680 < 0 )
              goto LABEL_890;
            if ( (unsigned int)(v687 - dwBytes) < 4 )
            {
LABEL_855:
              v680 = -1073741762;
              goto LABEL_890;
            }
            v850 = *(_DWORD *)v986;
            v680 = RtlULongLongAdd(v986, 4LL, &v986, v687);
            if ( v680 >= 0 )
            {
              v680 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
              if ( v680 >= 0 )
              {
                if ( v688 - (int)dwBytes < v689 )
                {
LABEL_856:
                  v680 = -1073741762;
                  goto LABEL_889;
                }
                v680 = RtlUIntAdd((unsigned int)dwBytes, v689, &dwBytes);
                if ( v680 >= 0 )
                {
                  if ( v690 == (_DWORD)dwBytes && (unsigned int)(v691 + v685 + v692) + 12LL == v690 )
                  {
                    v693 = GetProcessHeap();
                    v694 = HeapAlloc(v693, 8u, 0x30uLL);
                    v9 = 0LL;
                    v695 = v694;
                    if ( !v694 )
                    {
                      v680 = -1073741801;
                      goto LABEL_879;
                    }
                    v696 = (const void *)v866;
                    if ( v866 )
                    {
                      *(_DWORD *)v694 = (_DWORD)v856;
                      v697 = GetProcessHeap();
                      v698 = v870;
                      v699 = HeapAlloc(v697, 8u, v870);
                      v9 = 0LL;
                      if ( !v699 )
                        goto LABEL_860;
                      v695[1] = v699;
                      memcpy_0(v699, v696, v698);
                      v9 = 0LL;
                    }
                    else
                    {
                      *(_DWORD *)v694 = 0;
                      v694[1] = 0LL;
                    }
                    v700 = Src;
                    if ( Src )
                    {
                      *((_DWORD *)v695 + 4) = v685;
                      v701 = GetProcessHeap();
                      v702 = HeapAlloc(v701, 8u, v685);
                      v9 = 0LL;
                      if ( !v702 )
                        goto LABEL_860;
                      v695[3] = v702;
                      memcpy_0(v702, v700, v685);
                      v9 = 0LL;
                    }
                    else
                    {
                      *((_DWORD *)v695 + 4) = 0;
                      v695[3] = 0LL;
                    }
                    v703 = v986;
                    if ( !v986 )
                    {
                      *((_DWORD *)v695 + 8) = 0;
                      v695[5] = 0LL;
                      goto LABEL_870;
                    }
                    v704 = v850;
                    *((_DWORD *)v695 + 8) = v850;
                    v705 = v704;
                    v706 = GetProcessHeap();
                    v707 = HeapAlloc(v706, 8u, v705);
                    v9 = 0LL;
                    if ( v707 )
                    {
                      v695[5] = v707;
                      memcpy_0(v707, v703, v705);
                      v9 = 0LL;
LABEL_870:
                      v874 = v695;
                      v680 = 0;
                      v695 = 0LL;
LABEL_871:
                      if ( v695 )
                      {
                        v708 = (void *)v695[1];
                        if ( v708 )
                        {
                          v709 = GetProcessHeap();
                          HeapFree(v709, 0, v708);
                          v695[1] = 0LL;
                        }
                        v710 = (void *)v695[3];
                        if ( v710 )
                        {
                          v711 = GetProcessHeap();
                          HeapFree(v711, 0, v710);
                          v695[3] = 0LL;
                        }
                        v712 = (void *)v695[5];
                        if ( v712 )
                        {
                          v713 = GetProcessHeap();
                          HeapFree(v713, 0, v712);
                          v695[5] = 0LL;
                        }
                        v714 = GetProcessHeap();
                        HeapFree(v714, 0, v695);
                        v9 = 0LL;
                      }
LABEL_879:
                      v528 = v874;
                      v715 = 0LL;
                      if ( v680 < 0 )
                      {
                        v715 = v874;
                        v528 = 0LL;
                      }
                      v857 = (size_t)v528;
                      if ( v715 )
                      {
                        v716 = (void *)v715[1];
                        if ( v716 )
                        {
                          v717 = GetProcessHeap();
                          HeapFree(v717, 0, v716);
                          v715[1] = 0LL;
                        }
                        v718 = (void *)v715[3];
                        if ( v718 )
                        {
                          v719 = GetProcessHeap();
                          HeapFree(v719, 0, v718);
                          v715[3] = 0LL;
                        }
                        v720 = (void *)v715[5];
                        if ( v720 )
                        {
                          v721 = GetProcessHeap();
                          HeapFree(v721, 0, v720);
                          v715[5] = 0LL;
                        }
                        v722 = GetProcessHeap();
                        HeapFree(v722, 0, v715);
                        v857 = (size_t)v528;
                        goto LABEL_889;
                      }
LABEL_890:
                      v541 = v680 | 0x10000000;
                      if ( v541 < 0 )
                        goto LABEL_972;
                      v874 = (LPVOID)v9;
                      v723 = (void *)v9;
                      v898 = (void *)v9;
                      v724 = v9;
                      if ( !v528 || (v872 = (void *)*((_QWORD *)v528 + 1)) == 0LL || *v528 == (_DWORD)v9 )
                      {
                        v541 = -805306355;
                        goto LABEL_972;
                      }
                      v725 = (unsigned int)*v528;
                      v860 = v9;
                      if ( !v725 )
                        goto LABEL_930;
                      v726 = v725 - 8;
                      v870 = v726;
                      v727 = MemoryAlloc(v726);
                      v9 = 0LL;
                      Src = v727;
                      v728 = (wchar_t *)v727;
                      if ( !v727 )
                      {
                        v723 = v898;
                        goto LABEL_930;
                      }
                      v729 = (unsigned __int8 *)v872;
                      v986 = (void *)0x7F1137FAB69605ELL;
                      v730 = 0;
                      LOBYTE(v852) = 0;
                      v731 = (SIZE_T)v728;
                      psza = v728;
                      v732 = 0;
                      LODWORD(v854) = 0;
                      v733 = v726 & 7;
                      if ( (v726 & 7) != 0 )
                      {
                        v861 = 0;
                        v734 = 56;
                        do
                        {
                          v735 = *v729++;
                          if ( (int)v9 >= 4 )
                          {
                            v736 = (v735 << v734) | v861;
                            v861 = v736;
                          }
                          else
                          {
                            v736 = v861;
                            v732 |= v735 << (v734 - 32);
                          }
                          LODWORD(v9) = v9 + 1;
                          v734 -= 8;
                        }
                        while ( (int)v9 < v733 );
                        LODWORD(v854) = v732;
                        LODWORD(v856) = 0;
                        LODWORD(v9) = v732 ^ 0x92F65A5;
                        v737 = v736 ^ 0x699A899C;
                        v738 = v9;
                        v739 = v737;
                        if ( (v726 & 7) != 0 )
                        {
                          v740 = (int)v856;
                          v741 = v728;
                          do
                          {
                            v866 = (SIZE_T)(v741 + 1);
                            if ( v740 >= 4 )
                            {
                              v739 = __ROL4__(v739, 8);
                              v742 = v739;
                            }
                            else
                            {
                              v738 = __ROL4__(v738, 8);
                              v742 = v738;
                            }
                            *v741 = v742;
                            ++v740;
                            v741 = (_BYTE *)v866;
                          }
                          while ( v740 < v733 );
                          v724 = (unsigned int)v874;
                          v731 = v866;
                          psza = (STRSAFE_PCNZWCH)v866;
                          v730 = v852;
                        }
                        else
                        {
                          v731 = (SIZE_T)v728;
                        }
                        if ( (unsigned int)v733 <= 4 )
                        {
                          v732 = 0;
                          if ( (unsigned int)v733 >= 4 )
                            goto LABEL_916;
                          LODWORD(v9) = (unsigned int)v9 >> (8 * (4 - v733)) << (8 * (4 - v733));
                        }
                        else
                        {
                          v732 = v737 >> (8 * (8 - v733)) << (8 * (8 - v733));
                        }
                        v731 = (SIZE_T)psza;
                      }
LABEL_916:
                      v866 = v726 >> 3;
                      if ( v726 >> 3 )
                      {
                        v743 = HIDWORD(v986);
                        v744 = v729 + 2;
                        v745 = v854;
                        v746 = (_BYTE *)(v731 + 7);
                        v747 = v866;
                        LODWORD(dwBytes) = WORD2(v986);
                        LODWORD(v856) = HIDWORD(v986) ^ 0xAB69605E;
                        v748 = HIDWORD(v986) ^ 0xAB69605E;
                        v850 = WORD1(v986);
                        HIDWORD(v854) = 24670;
                        do
                        {
                          v749 = *(v744 - 1) | (*(v744 - 2) << 8);
                          v750 = v744[2] << 8;
                          v751 = *v744;
                          v744 += 8;
                          v752 = *(v744 - 7) | ((v751 | (v749 << 8)) << 8);
                          v753 = v752 ^ v9;
                          v754 = *(v744 - 3) | ((*(v744 - 4) | ((*(v744 - 5) | v750) << 8)) << 8);
                          v755 = v753 ^ v743 ^ 0xAB69605E ^ v754 ^ v732;
                          v756 = (__ROL4__(v755, 10) + dwBytes * __ROL4__(v755 + 1419157410, 5)) ^ v753;
                          v757 = (WORD1(v986) * __ROR4__(v756 + v743, 9) - __ROL4__(v756, 2)) ^ v755;
                          v758 = (HIDWORD(v854) * (v757 - dwBytes) - (v757 >> 13)) ^ v756;
                          v759 = (HIWORD(v986) * __ROL4__(WORD1(v986) ^ v758, 6) - __ROL4__(v758, 2)) ^ v757;
                          v760 = (v743 - (v759 ^ 0xAB69605E)) ^ v758;
                          v761 = (v850 * (dwBytes ^ v760)) ^ __ROR4__(v760, 6) ^ v759;
                          v762 = (__ROL4__(v761, 2) + HIDWORD(v854) * __ROR4__(v761 + v743, 15)) ^ v760;
                          v763 = (HIWORD(v986) * __ROR4__(v762 + 1419157410, 14) - __ROL4__(v762, 8)) ^ v761;
                          v764 = __ROR4__(v763, 10) ^ (dwBytes * __ROR4__(v763 ^ 0xAB69605E, 12)) ^ v762;
                          v765 = (v764 >> 10) ^ (WORD1(v986) * (HIWORD(v986) ^ v764)) ^ v763;
                          v766 = (HIWORD(v986) * (HIDWORD(v854) + __ROR4__(~v765, 5))) ^ v764;
                          v767 = (v766 - HIWORD(v986)) ^ 0xAB69605E ^ v765;
                          v768 = ((v767 >> 2) + dwBytes * __ROL4__(v767 ^ HIWORD(v986), 2)) ^ v766;
                          v769 = (__ROL4__(v768, 7) + WORD1(v986) * __ROR4__(v768 - v743, 6)) ^ v767;
                          v770 = (HIDWORD(v854) * (v769 ^ dwBytes) + __ROR4__(v769, 9)) ^ v768;
                          v771 = (__ROL4__(v770, 7) + HIWORD(v986) * __ROL4__(v770 ^ WORD1(v986), 5)) ^ v769;
                          v772 = v771 ^ v748 ^ v770;
                          v773 = (dwBytes * (__ROR4__(v772, 3) - WORD1(v986))) ^ v771;
                          v774 = (HIDWORD(v854) * __ROR4__(v773 - v743, 1) - __ROR4__(v773, 6)) ^ v772;
                          v775 = (__ROL4__(v774, 14) + HIWORD(v986) * __ROL4__(v774 - 1419157410, 3)) ^ v773;
                          v776 = (dwBytes * __ROL4__(v775 - 1419157410, 15) - __ROR4__(v775, 14)) ^ v774;
                          v777 = (v776 >> 3) ^ (WORD1(v986) * (v776 ^ HIDWORD(v854))) ^ v775;
                          v778 = v777 ^ v743;
                          v779 = v777;
                          v780 = v861 ^ v777;
                          v861 = v754;
                          v781 = v745 ^ __ROL4__(v779, 2) ^ (HIDWORD(v854) * __ROL4__(v778, 4));
                          v745 = v752;
                          v782 = v781 ^ v776;
                          *(v746 - 4) = v782;
                          *v746 = v780;
                          v746 += 8;
                          v783 = __ROR4__(v782, 8);
                          *(v746 - 13) = v783;
                          v784 = __ROR4__(v780, 8);
                          *(v746 - 9) = v784;
                          v785 = __ROR4__(v783, 8);
                          *(v746 - 14) = v785;
                          v786 = __ROR4__(v784, 8);
                          *(v746 - 10) = v786;
                          v787 = __ROR4__(v785, 8);
                          v788 = __ROR4__(v786, 8);
                          *(v746 - 15) = v787;
                          *(v746 - 11) = v788;
                          v732 = __ROR4__(v788, 8);
                          LODWORD(v9) = __ROR4__(v787, 8);
                          --v747;
                        }
                        while ( v747 );
                        v730 = v852;
                        v5 = v849;
                        v528 = (_DWORD *)v857;
                        v724 = (unsigned int)v874;
                        v726 = v870;
                        v728 = (wchar_t *)Src;
                      }
                      v9 = 0LL;
                      for ( j = 0LL; j < v726; ++j )
                        v730 ^= *((_BYTE *)v728 + j);
                      if ( v730 == *(_QWORD *)((char *)v872 + v726) )
                      {
                        v790 = v860;
                        v723 = v728;
                        v898 = v728;
                        v728 = 0LL;
                        v724 = v726;
                      }
                      else
                      {
                        v723 = v898;
                        v790 = -1073425151;
                      }
                      if ( v728 )
                      {
                        MemoryFree(v728);
                        v723 = v898;
                        v9 = 0LL;
                      }
                      if ( v790 >= 0 )
                      {
                        pcchLength = (size_t)v723;
                        v541 = 0x10000000;
                        v723 = 0LL;
                        v881 = v724;
                        v898 = 0LL;
LABEL_931:
                        if ( v723 )
                        {
                          v791 = GetProcessHeap();
                          HeapFree(v791, 0, v723);
                          v724 = v881;
                          v9 = 0LL;
                          v898 = 0LL;
                        }
                        if ( v541 < 0 )
                          goto LABEL_972;
                        v861 = v9;
                        v857 = pcchLength;
                        if ( v724 < 4 )
                          goto LABEL_967;
                        v860 = *(_DWORD *)pcchLength;
                        v792 = RtlULongLongAdd(pcchLength, 4LL, &v857, pcchLength);
                        if ( v792 < 0 )
                          goto LABEL_970;
                        v792 = RtlUIntAdd(0LL, 4LL, &v861);
                        if ( v792 < 0 )
                          goto LABEL_970;
                        if ( v724 - v861 < 4 )
                        {
LABEL_967:
                          v792 = -1073741762;
LABEL_970:
                          v541 = v792 | 0x10000000;
                          goto LABEL_972;
                        }
                        v792 = RtlULongLongAdd(v857, 4LL, &v857, v793);
                        if ( v792 >= 0 )
                        {
                          v792 = RtlUIntAdd(v861, 4LL, &v861);
                          if ( v792 >= 0 )
                          {
                            if ( v724 - v861 < v794 )
                              goto LABEL_968;
                            v792 = RtlUIntAdd(v861, v794, &v861);
                            if ( v792 < 0 )
                              goto LABEL_969;
                            v798 = (const void *)v857;
                            v799 = (unsigned int)v796;
                            if ( (unsigned __int64)v724 + v795 < v857 + v796 || v795 + v724 - v857 - v796 >= 8 )
                            {
LABEL_968:
                              v792 = -1073741762;
                              goto LABEL_969;
                            }
                            LODWORD(v854) = v797;
                            v800 = v797;
                            v792 = v797;
                            if ( !v857 )
                              goto LABEL_957;
                            v792 = RtlULongLongAdd(v857, (unsigned int)v796, &v866, v857);
                            if ( v792 < 0 )
                              goto LABEL_965;
                            v802 = v866;
                            if ( (unsigned __int64)v798 < v866 )
                            {
                              while ( 1 )
                              {
                                v792 = RtlULongLongAdd(v801, 4LL, &v866, v801);
                                if ( v792 < 0 )
                                  goto LABEL_965;
                                if ( v866 > v804 )
                                  goto LABEL_960;
                                v805 = RtlUIntAdd(4LL, *v803, &v856);
                                v792 = v805;
                                if ( v805 >= 0 )
                                  v807 = (unsigned int)v856;
                                v884 = v807;
                                if ( v805 < 0 )
                                  goto LABEL_965;
                                v792 = RtlULongLongAdd(v806, v807, &v870, v806);
                                if ( v792 < 0 )
                                  goto LABEL_965;
                                v801 = v870;
                                if ( v870 > v802 )
                                  goto LABEL_960;
                                LODWORD(v854) = v854 + 1;
                                if ( v870 >= v802 )
                                {
                                  LODWORD(v796) = v799;
                                  break;
                                }
                              }
                            }
                            if ( v801 == v802 )
                            {
LABEL_957:
                              if ( (_DWORD)v796 )
                              {
                                v808 = GetProcessHeap();
                                v800 = (unsigned __int64)HeapAlloc(v808, 8u, v799);
                                if ( !v800 )
                                {
                                  v792 = -1073741801;
                                  goto LABEL_965;
                                }
                                v792 = 0;
                              }
                              if ( v798 )
                                memcpy_0((void *)v800, v798, v799);
                              LODWORD(v912[0]) = v854;
                              v912[1] = (LPVOID)v800;
LABEL_965:
                              v9 = 0LL;
                              if ( v792 < 0 || v860 == LODWORD(v912[0]) )
                                goto LABEL_970;
                              goto LABEL_967;
                            }
LABEL_960:
                            v792 = -1073741811;
                          }
                        }
LABEL_969:
                        v9 = 0LL;
                        goto LABEL_970;
                      }
LABEL_930:
                      v724 = v881;
                      v541 = -805306367;
                      goto LABEL_931;
                    }
LABEL_860:
                    v680 = -1073741801;
                    goto LABEL_871;
                  }
                  goto LABEL_856;
                }
              }
            }
LABEL_889:
            v9 = 0LL;
            goto LABEL_890;
          }
        }
LABEL_971:
        v9 = 0LL;
        goto LABEL_972;
      }
      v545 = (unsigned __int8 *)v855;
      v546 = 0;
      LOBYTE(v852) = 0;
      v547 = 0LL;
      if ( v544 )
      {
        do
          v546 ^= *((_BYTE *)v855 + v547++);
        while ( v547 < v544 );
        LOBYTE(v852) = v546;
      }
      v548 = (SIZE_T)psza;
      dwBytes = (SIZE_T)psza;
      v986 = (void *)0xC81ECB17B1B54A58LL;
      v854 = 0LL;
      v549 = 0;
      v550 = -1;
      v551 = v544 & 7;
      if ( (v544 & 7) != 0 )
      {
        v854 = 0LL;
        v552 = 0;
        v553 = 56;
        v554 = 0;
        do
        {
          v555 = *v545++;
          if ( v552 >= 4 )
          {
            v556 = (v555 << v553) | v854;
            LODWORD(v854) = v556;
          }
          else
          {
            v556 = v854;
            v554 |= v555 << (v553 - 32);
          }
          ++v552;
          v553 -= 8;
        }
        while ( v552 < (int)v551 );
        HIDWORD(v854) = v554;
        v860 = 0;
        v549 = v554 ^ 0xB17A307A;
        v557 = v556 ^ 0x42F6B18D;
        v558 = v554 ^ 0xB17A307A;
        v559 = v557;
        if ( (v544 & 7) != 0 )
        {
          v560 = (_BYTE *)dwBytes;
          v561 = v860;
          do
          {
            v870 = (SIZE_T)(v560 + 1);
            if ( v561 >= 4 )
            {
              v559 = __ROL4__(v559, 8);
              v562 = v559;
            }
            else
            {
              v558 = __ROL4__(v558, 8);
              v562 = v558;
            }
            *v560 = v562;
            ++v561;
            v560 = (_BYTE *)v870;
          }
          while ( v561 < (int)v551 );
          v548 = v870;
          v5 = v849;
          dwBytes = v870;
        }
        else
        {
          v548 = dwBytes;
        }
        if ( v551 > 4 )
        {
          v550 = v557 >> (8 * (8 - v551)) << (8 * (8 - v551));
LABEL_715:
          v548 = dwBytes;
          goto LABEL_716;
        }
        v550 = 0;
        if ( v551 < 4 )
        {
          v549 = v549 >> (8 * (4 - v551)) << (8 * (4 - v551));
          goto LABEL_715;
        }
      }
LABEL_716:
      v870 = v544 >> 3;
      if ( v544 >> 3 )
      {
        v563 = v870;
        v564 = v854;
        v565 = HIDWORD(v854);
        v860 = HIDWORD(v986) ^ 0xB1B54A58;
        v566 = v545 + 2;
        v567 = HIDWORD(v986) ^ 0xB1B54A58;
        LODWORD(dwBytes) = WORD1(v986);
        v568 = WORD2(v986);
        v874 = (LPVOID)(v548 + 7);
        do
        {
          v569 = v566[1] | ((*v566 | ((*(v566 - 1) | (*(v566 - 2) << 8)) << 8)) << 8);
          v570 = v566[5] | ((v566[4] | ((v566[3] | (v566[2] << 8)) << 8)) << 8);
          v870 = (SIZE_T)(v566 + 8);
          v571 = v570 ^ v550;
          v572 = v569 ^ HIDWORD(v986) ^ (v571 - 19032) ^ v549;
          v573 = (__ROR4__(v572, 7) + WORD1(v986) * __ROR4__(v572 ^ HIDWORD(v986), 15)) ^ v571;
          v574 = (v568 * __ROR4__(v573 - 1313519016, 9) - __ROR4__(v573, 10)) ^ v572;
          v575 = (__ROL4__(v574, 5) + HIWORD(v986) * __ROL4__(v574 ^ v568, 4)) ^ v573;
          v576 = (HIDWORD(v986) - (v575 ^ 0xB1B54A58)) ^ v574;
          v577 = (WORD1(v986) * (v576 - 19032) - (v576 >> 6)) ^ v575;
          v578 = (19032 * (v568 ^ __ROR4__(v577, 15))) ^ v576;
          v579 = (v568 * (HIWORD(v986) + __ROR4__(~v578, 3))) ^ v577;
          v580 = (v579 - HIDWORD(v986) - 19032) ^ v578;
          v581 = (dwBytes * (v580 ^ HIWORD(v986))) ^ __ROR4__(v580, 10) ^ v579;
          v582 = __ROR4__(v581, 3) ^ (v568 * __ROL4__(v581 ^ 0x4A58, 6)) ^ v580;
          v583 = (19032 * (__ROR4__(v582, 15) - HIWORD(v986))) ^ v581;
          v584 = (v583 >> 15) ^ (19032 * __ROL4__(v583 - v568, 3)) ^ (v583 >> 1) ^ (19032 * (v583 ^ HIWORD(v986))) ^ v582;
          v585 = (WORD1(v986) * (v584 - v568) - (v584 >> 13)) ^ v583;
          v586 = __ROR4__(v585, 11) ^ (v568 * __ROR4__(-1313519016 - v585, 9)) ^ v584;
          v587 = (v586 + 1313519016 - HIWORD(v986)) ^ v585;
          v588 = (19032 * (v587 ^ WORD1(v986)) - __ROR4__(v587, 7)) ^ v586;
          v589 = (WORD1(v986) * __ROL4__(v588 ^ HIWORD(v986), 4) - __ROR4__(v588, 16)) ^ v587;
          v590 = (__ROR4__(v589, 4) + v568 * __ROR4__(-1313519016 - v589, 10)) ^ v588;
          v591 = __ROR4__(v590, 9) ^ (HIWORD(v986) * __ROR4__(v590 + 1313519016, 4)) ^ v589;
          v592 = (19032 * __ROL4__(v591 ^ HIDWORD(v986), 8) - __ROL4__(v591, 2)) ^ v590;
          v593 = (WORD1(v986) * __ROR4__(HIDWORD(v986) - v592, 11) - __ROR4__(v592, 12)) ^ v591;
          v594 = v874;
          v595 = (v593 >> 8) ^ (v568 * (WORD1(v986) ^ v593)) ^ v592;
          v566 += 8;
          v596 = v595 ^ v593;
          v597 = v565 ^ v595;
          v565 = v569;
          *((char *)v874 - 4) = v597;
          v598 = v564 ^ v567 ^ v596;
          *v594 = v598;
          v564 = v570;
          v599 = __ROR4__(v597, 8);
          *(v594 - 5) = v599;
          v600 = __ROR4__(v598, 8);
          *(v594 - 1) = v600;
          v601 = __ROR4__(v599, 8);
          *(v594 - 6) = v601;
          v602 = __ROR4__(v600, 8);
          *(v594 - 2) = v602;
          v603 = __ROR4__(v601, 8);
          v604 = __ROR4__(v602, 8);
          *(v594 - 7) = v603;
          *(v594 - 3) = v604;
          v550 = __ROR4__(v604, 8);
          v549 = __ROR4__(v603, 8);
          v874 = v594 + 8;
          --v563;
        }
        while ( v563 );
        v546 = v852;
        v5 = v849;
        v528 = (_DWORD *)v857;
        v542 = Src;
        v544 = (unsigned __int64)v872;
      }
      v605 = v546;
      v606 = (wchar_t *)psza;
      *(_QWORD *)((char *)psza + v544) = v605;
      v607 = v866;
      v975 = v866;
      v916 = v606;
      v976 = &qword_1800E45E0;
      v977 = 8LL;
      v979 = 160LL;
      v983 = xmmword_1800E4540;
      v608 = GetProcessHeap();
      v609 = HeapAlloc(v608, 8u, 0x30uLL);
      v610 = v609;
      if ( v609 )
      {
        *v609 = v607;
        v611 = GetProcessHeap();
        v612 = HeapAlloc(v611, 8u, v607);
        if ( !v612 )
          goto LABEL_726;
        *((_QWORD *)v610 + 1) = v612;
        memcpy_0(v612, psza, v607);
        v610[4] = 160;
        v613 = GetProcessHeap();
        v614 = HeapAlloc(v613, 8u, 0xA0uLL);
        if ( !v614 )
          goto LABEL_726;
        *((_QWORD *)v610 + 3) = v614;
        *v614 = xmmword_1800E4540[0];
        v614[1] = xmmword_1800E4540[1];
        v614[2] = xmmword_1800E4540[2];
        v614[3] = xmmword_1800E4540[3];
        v614[4] = xmmword_1800E4540[4];
        v614[5] = xmmword_1800E4540[5];
        v614[6] = xmmword_1800E4540[6];
        v614[7] = xmmword_1800E4540[7];
        v614[8] = xmmword_1800E4540[8];
        v614[9] = xmmword_1800E4540[9];
        v610[8] = 8;
        v615 = GetProcessHeap();
        v616 = HeapAlloc(v615, 8u, 8uLL);
        if ( v616 )
        {
          *((_QWORD *)v610 + 5) = v616;
          v542 = v610;
          *v616 = qword_1800E45E0;
          v543 = 0;
          v610 = 0LL;
        }
        else
        {
LABEL_726:
          v543 = -1073741801;
        }
        if ( v610 )
        {
          v866 = *((_QWORD *)v610 + 1);
          if ( v866 )
          {
            v617 = GetProcessHeap();
            HeapFree(v617, 0, (LPVOID)v866);
            *((_QWORD *)v610 + 1) = 0LL;
          }
          v866 = *((_QWORD *)v610 + 3);
          if ( v866 )
          {
            v618 = GetProcessHeap();
            HeapFree(v618, 0, (LPVOID)v866);
            *((_QWORD *)v610 + 3) = 0LL;
          }
          v866 = *((_QWORD *)v610 + 5);
          if ( v866 )
          {
            v619 = GetProcessHeap();
            HeapFree(v619, 0, (LPVOID)v866);
            *((_QWORD *)v610 + 5) = 0LL;
          }
          v620 = GetProcessHeap();
          HeapFree(v620, 0, v610);
        }
      }
      else
      {
        v543 = -1073741801;
      }
      if ( v543 >= 0 )
      {
        v910 = v542;
        v542 = 0LL;
      }
      goto LABEL_738;
    }
    while ( (int)RtlUIntAdd(4LL, *v518, &v850) >= 0 )
    {
      v913 = v850;
      v521 = RtlULongLongAdd(v520, v850, &psza, v519);
      v9 = 0LL;
      if ( v521 < 0 )
        goto LABEL_664;
      v518 = (unsigned int *)psza;
      if ( v522 + 1 >= (unsigned int)v508 )
        goto LABEL_671;
    }
LABEL_663:
    v9 = 0LL;
    goto LABEL_664;
  }
  if ( (int)RtlUIntAdd((unsigned int)(v9 + 4), 160LL, &v850) < 0 )
  {
LABEL_664:
    v88 = v95;
LABEL_666:
    v87 = v853;
    goto LABEL_1020;
  }
  v933 = v850;
  if ( (int)RtlUIntAdd(HIDWORD(v862), v850, (char *)&v862 + 4) >= 0 )
  {
    v113 = (unsigned int)(v862 + 1);
    LODWORD(v862) = v862 + 1;
    goto LABEL_648;
  }
LABEL_640:
  v88 = v95;
LABEL_1019:
  v87 = v91;
LABEL_1020:
  v862 = 0LL;
  v842 = v863;
  if ( v863 )
  {
    v843 = GetProcessHeap();
    HeapFree(v843, 0, v842);
    v9 = 0LL;
    v863 = 0LL;
  }
  v912[0] = 0LL;
  v844 = v912[1];
  if ( v912[1] )
  {
    v845 = GetProcessHeap();
    HeapFree(v845, 0, v844);
    v9 = 0LL;
    v912[1] = 0LL;
  }
  if ( v87 )
  {
    v846 = GetProcessHeap();
    HeapFree(v846, 0, v87);
    v9 = 0LL;
  }
  if ( v88 )
  {
    v847 = GetProcessHeap();
    HeapFree(v847, 0, v88);
    v9 = 0LL;
  }
LABEL_1028:
  v848 = v902;
  v963 = v901;
  v926 = (int *)v936;
  v872 = (void *)v9;
LABEL_1030:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v872);
  if ( v5 >= 0 )
  {
    if ( v848 != 4 )
      goto LABEL_9;
    v903 = *v926;
  }
  else
  {
    switch ( v5 )
    {
      case -805306316:
        v5 = -1073418222;
        goto LABEL_1039;
      case -805306139:
      case -1073425151:
        v5 = -1073418201;
        break;
      case -805306306:
        v5 = -1073418200;
        goto LABEL_1039;
    }
    if ( v5 != -2147024774 )
    {
LABEL_1039:
      v878 = v5;
      goto LABEL_6;
    }
LABEL_9:
    v878 = -1073418210;
  }
LABEL_6:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v926);
  if ( v878 < 0 || !v903 )
    return 0;
  return v2;
}
