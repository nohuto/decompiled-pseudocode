/*
 * XREFs of sub_18005F460 @ 0x18005F460
 * Callers:
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_18005F608 @ 0x18005F608 (sub_18005F608.c)
 *     sub_18005F628 @ 0x18005F628 (sub_18005F628.c)
 *     sub_18005F64C @ 0x18005F64C (sub_18005F64C.c)
 *     sub_18005FD7C @ 0x18005FD7C (sub_18005FD7C.c)
 *     sub_180067CF8 @ 0x180067CF8 (sub_180067CF8.c)
 *     sub_1800685D0 @ 0x1800685D0 (sub_1800685D0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_180074180 @ 0x180074180 (sub_180074180.c)
 *     unknown_libname_376 @ 0x1800741B0 (unknown_libname_376.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     wcscmp @ 0x18007441B (wcscmp.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_180133608 @ 0x180133608 (sub_180133608.c)
 *     sub_180133660 @ 0x180133660 (sub_180133660.c)
 *     sub_1801336B8 @ 0x1801336B8 (sub_1801336B8.c)
 *     sub_18013698C @ 0x18013698C (sub_18013698C.c)
 *     sub_180136F2C @ 0x180136F2C (sub_180136F2C.c)
 *     sub_1801380EC @ 0x1801380EC (sub_1801380EC.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall sub_18005F460(__int64 a1, __int64 a2, bool *a3)
{
  bool *v3; // r12
  int v4; // r13d
  __int64 v5; // rbx
  int MediaComponentPackageInfo; // eax
  int v7; // r14d
  int v8; // eax
  int *v9; // rax
  unsigned int v10; // esi
  int v12; // eax
  char *v13; // rbx
  int v14; // r14d
  int v15; // r11d
  int v16; // r10d
  _BYTE *v17; // r13
  unsigned __int8 *v18; // r12
  __int64 v19; // rsi
  int v20; // ebx
  int v21; // r9d
  int v22; // r8d
  int v23; // r10d
  unsigned int v24; // edi
  int v25; // r10d
  unsigned int v26; // edi
  int v27; // r10d
  int v28; // edi
  unsigned int v29; // r10d
  int v30; // edi
  int v31; // r10d
  int v32; // edi
  unsigned int v33; // r10d
  int v34; // edi
  int v35; // r10d
  unsigned int v36; // r11d
  int v37; // r10d
  int v38; // r11d
  int v39; // r10d
  int v40; // r11d
  unsigned int v41; // r10d
  int v42; // r11d
  int v43; // r10d
  int v44; // r11d
  unsigned int v45; // r10d
  int v46; // r11d
  int v47; // r10d
  int v48; // r11d
  int v49; // r10d
  int v50; // r11d
  int v51; // r10d
  int v52; // r11d
  int v53; // r10d
  int v54; // r11d
  unsigned __int64 v55; // rax
  __m128i v56; // xmm2
  __m128i v57; // xmm1
  WCHAR *v58; // rbx
  int v59; // esi
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __m128i v62; // xmm1
  __m128i v63; // xmm1
  __m128i v64; // xmm1
  char i; // cl
  HMODULE *v66; // rdi
  const WCHAR *v67; // rdx
  __int64 v68; // rax
  WCHAR *v69; // rbx
  char *v70; // rdi
  __int64 v71; // rcx
  unsigned __int64 v72; // rcx
  unsigned int v73; // ecx
  const CHAR *v74; // rdx
  __int64 v75; // rax
  __int64 (__fastcall *ProcAddress)(); // rax
  HANDLE ProcessHeap; // rax
  HANDLE v78; // rax
  int v79; // esi
  signed int v80; // edi
  __int64 v81; // rax
  signed int LastError; // eax
  __int64 v83; // r9
  signed int v84; // eax
  DWORD CurrentThreadId; // eax
  __int64 v86; // rax
  __int64 v87; // r9
  signed int v88; // eax
  HANDLE CurrentProcess; // rax
  int v90; // eax
  HLOCAL v91; // rdi
  int v92; // r15d
  __int64 v93; // r11
  signed __int32 v94; // r9d
  HANDLE v95; // rax
  _OWORD *v96; // rdx
  _OWORD *v97; // rax
  HANDLE v98; // rax
  _QWORD *v99; // rax
  int v100; // eax
  unsigned int v101; // edi
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  unsigned int v117; // edi
  HANDLE v118; // rax
  LPVOID v119; // rax
  _DWORD *v120; // r9
  unsigned int v121; // edi
  int v122; // eax
  __int64 v123; // rdx
  unsigned int *v124; // r9
  int v125; // eax
  __int64 v126; // r9
  unsigned int v127; // r10d
  _DWORD *v128; // r9
  _OWORD *v129; // rax
  int v130; // eax
  __int64 v131; // rdx
  unsigned int *v132; // r9
  int v133; // eax
  __int64 v134; // r9
  unsigned int v135; // r10d
  _DWORD *v136; // r9
  int v137; // eax
  unsigned __int64 v138; // rcx
  __int64 v139; // rdx
  unsigned int *v140; // r9
  int v141; // eax
  __int64 v142; // r9
  unsigned int v143; // r10d
  _DWORD *v144; // r9
  int v145; // eax
  int v146; // eax
  __int64 v147; // rdx
  unsigned int *v148; // r9
  int v149; // eax
  __int64 v150; // r9
  unsigned int v151; // r10d
  unsigned int *v152; // r9
  unsigned int v153; // r10d
  int v154; // eax
  __int64 v155; // rdx
  unsigned int *v156; // r9
  int v157; // eax
  __int64 v158; // r9
  unsigned int v159; // r10d
  _DWORD *v160; // r9
  int v161; // eax
  __int64 v162; // rdx
  unsigned int *v163; // r9
  int v164; // eax
  __int64 v165; // r9
  unsigned int v166; // r10d
  _DWORD *v167; // r9
  int v168; // eax
  __int64 v169; // rcx
  unsigned int v170; // r10d
  int v171; // eax
  unsigned int v172; // r10d
  unsigned int v173; // r9d
  int v174; // eax
  unsigned int v175; // r9d
  int v176; // eax
  unsigned int v177; // r9d
  int v178; // eax
  unsigned int v179; // r9d
  int v180; // eax
  unsigned int v181; // r9d
  unsigned int v182; // eax
  char *v183; // r9
  _QWORD *v184; // r10
  int v185; // r15d
  unsigned int v186; // ecx
  unsigned int v187; // edi
  HANDLE v188; // rax
  char *v189; // rax
  char *v190; // rdi
  unsigned int v191; // r9d
  void *v192; // rcx
  char *v193; // rcx
  HANDLE v194; // rax
  WCHAR *v195; // rax
  int v196; // r15d
  unsigned __int64 v197; // r15
  _BYTE *v198; // rax
  _BYTE *v199; // r8
  unsigned __int64 v200; // rcx
  unsigned __int8 *v201; // rdi
  __m128i v202; // xmm2
  __m128i v203; // xmm1
  __m128i v204; // xmm0
  __m128i v205; // xmm1
  __m128i v206; // xmm1
  __m128i v207; // xmm1
  __m128i v208; // xmm1
  _BYTE *v209; // r11
  signed int v210; // r9d
  int v211; // r10d
  unsigned int v212; // eax
  int v213; // r10d
  char v214; // r8
  int v215; // edx
  int v216; // ecx
  unsigned int v217; // r10d
  unsigned int v218; // ecx
  unsigned int v219; // edx
  int v220; // r8d
  _BYTE *v221; // rdx
  char v222; // si
  unsigned __int64 v223; // r11
  int v224; // ecx
  unsigned __int8 *v225; // rdx
  int v226; // esi
  int v227; // r12d
  unsigned int v228; // r13d
  unsigned int v229; // r15d
  int v230; // r14d
  int v231; // r8d
  int v232; // edi
  int v233; // r10d
  int v234; // r9d
  int v235; // r10d
  int v236; // r9d
  int v237; // r10d
  unsigned int v238; // r9d
  int v239; // r10d
  int v240; // r9d
  int v241; // r10d
  int v242; // r9d
  int v243; // r10d
  int v244; // r9d
  unsigned int v245; // r10d
  unsigned int v246; // r9d
  int v247; // r10d
  int v248; // r9d
  int v249; // r10d
  int v250; // r9d
  int v251; // r10d
  int v252; // r9d
  int v253; // r10d
  int v254; // r9d
  unsigned int v255; // r10d
  int v256; // r9d
  int v257; // r10d
  int v258; // r9d
  int v259; // r10d
  int v260; // r9d
  int v261; // r10d
  int v262; // r9d
  int v263; // r10d
  int v264; // r9d
  int v265; // r10d
  unsigned int v266; // r15d
  HANDLE v267; // rax
  _DWORD *v268; // rax
  _DWORD *v269; // rdi
  HANDLE v270; // rax
  void *v271; // rax
  HANDLE v272; // rax
  _OWORD *v273; // rax
  HANDLE v274; // rax
  _QWORD *v275; // rax
  void *v276; // r15
  HANDLE v277; // rax
  void *v278; // r15
  HANDLE v279; // rax
  void *v280; // r15
  HANDLE v281; // rax
  HANDLE v282; // rax
  HANDLE v283; // rax
  HANDLE v284; // rax
  HANDLE v285; // rax
  HANDLE v286; // rax
  HANDLE v287; // rax
  int v288; // r15d
  unsigned int v289; // r9d
  unsigned int v290; // r10d
  unsigned int v291; // eax
  unsigned int v292; // edi
  HANDLE v293; // rax
  _DWORD *v294; // rax
  const void **v295; // r9
  __int64 v296; // r9
  void *v297; // rcx
  __int64 v298; // r9
  __int64 v299; // r9
  void *v300; // rcx
  __int64 v301; // r9
  void *v302; // rdx
  HANDLE v303; // rax
  int v304; // eax
  __int64 v305; // r10
  __int64 v306; // rcx
  unsigned int v307; // r9d
  unsigned int *v308; // rcx
  int v309; // r10d
  unsigned int v310; // r10d
  unsigned int *v311; // rax
  _DWORD *v312; // rcx
  unsigned int v313; // edi
  unsigned int v314; // r9d
  unsigned int v315; // r10d
  int v316; // edi
  _DWORD *v317; // rax
  unsigned int v318; // r10d
  unsigned int v319; // eax
  LPVOID v320; // rcx
  unsigned int v321; // edi
  HANDLE v322; // rax
  void *v323; // rax
  signed int v324; // eax
  unsigned int v325; // edi
  int v326; // r15d
  NTSTATUS (__stdcall *NtQuerySystemInformation)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG); // rax
  int v328; // eax
  HANDLE v329; // rax
  _QWORD *v330; // rdi
  HANDLE v331; // rax
  HANDLE v332; // rax
  HANDLE v333; // rax
  HANDLE v334; // rax
  HANDLE v335; // rax
  HANDLE v336; // rax
  void *v337; // rdi
  HANDLE v338; // rax
  void *v339; // rdi
  HANDLE v340; // rax
  void *v341; // rdi
  HANDLE v342; // rax
  void *v343; // rdi
  _QWORD *v344; // rcx
  SIZE_T v345; // r9
  unsigned int v346; // r9d
  unsigned int v347; // r10d
  unsigned int v348; // r10d
  unsigned int v349; // r9d
  unsigned int v350; // r9d
  unsigned int v351; // r10d
  unsigned int v352; // r10d
  int v353; // r9d
  int v354; // r10d
  HANDLE v355; // rax
  _QWORD *v356; // rax
  _QWORD *v357; // rdi
  HANDLE v358; // rax
  size_t v359; // r15
  void *v360; // rax
  HANDLE v361; // rax
  void *v362; // rax
  HANDLE v363; // rax
  void *v364; // rax
  void *v365; // r15
  HANDLE v366; // rax
  void *v367; // r15
  HANDLE v368; // rax
  void *v369; // r15
  HANDLE v370; // rax
  HANDLE v371; // rax
  HANDLE v372; // rax
  HANDLE v373; // rax
  HANDLE v374; // rax
  HANDLE v375; // rax
  unsigned __int8 *v376; // r15
  __int64 v377; // rax
  unsigned __int64 v378; // rdi
  _BYTE *v379; // rax
  SIZE_T v380; // r9
  unsigned __int8 v381; // cl
  unsigned __int8 *v382; // r8
  _BYTE *v383; // r15
  unsigned int v384; // edx
  int v385; // r11d
  int v386; // r10d
  char v387; // r9
  int v388; // eax
  int v389; // ecx
  unsigned int v390; // r10d
  unsigned int v391; // r11d
  int v392; // eax
  unsigned int v393; // ecx
  int v394; // r9d
  char v395; // bl
  unsigned int v396; // r11d
  int v397; // ebx
  int v398; // r13d
  unsigned int v399; // ecx
  unsigned __int8 *v400; // rdx
  char *v401; // r15
  int v402; // r12d
  int v403; // r14d
  int v404; // r9d
  int v405; // r8d
  int v406; // r10d
  int v407; // edi
  int v408; // r10d
  unsigned int v409; // edi
  int v410; // r10d
  int v411; // edi
  unsigned int v412; // r10d
  int v413; // edi
  int v414; // r10d
  int v415; // edi
  unsigned int v416; // r10d
  int v417; // edi
  int v418; // r10d
  unsigned int v419; // r11d
  int v420; // r10d
  int v421; // r11d
  int v422; // r10d
  int v423; // r11d
  int v424; // r10d
  int v425; // r11d
  int v426; // r10d
  int v427; // r11d
  unsigned int v428; // r10d
  int v429; // r11d
  int v430; // r10d
  int v431; // r11d
  int v432; // r10d
  int v433; // r11d
  int v434; // r10d
  int v435; // r11d
  int v436; // r10d
  int v437; // r11d
  unsigned __int64 v438; // rax
  __m128i v439; // xmm2
  __m128i v440; // xmm1
  __m128i v441; // xmm0
  __m128i v442; // xmm1
  __m128i v443; // xmm1
  __m128i v444; // xmm1
  __m128i v445; // xmm1
  int *v446; // rcx
  HANDLE v447; // rax
  void *v448; // rdi
  HANDLE v449; // rax
  int v450; // r15d
  unsigned int v451; // r10d
  unsigned int v452; // r9d
  __int64 v453; // r9
  __int64 v454; // r8
  size_t v455; // rdx
  char *v456; // rcx
  unsigned int *v457; // rdi
  int v458; // ecx
  void *v459; // rax
  unsigned int *v460; // r10
  unsigned __int64 v461; // r10
  int v462; // eax
  unsigned int v463; // r9d
  HANDLE v464; // rax
  HANDLE v465; // rax
  HANDLE v466; // rax
  int v467; // r9d
  _DWORD *v468; // rax
  int v469; // eax
  int *v470; // rcx
  int v471; // edi
  unsigned int v472; // r9d
  int v473; // edi
  int *v474; // rax
  int *v475; // rcx
  unsigned int k; // edi
  unsigned int v477; // r9d
  int v478; // edi
  int *v479; // rax
  LPVOID v480; // rcx
  unsigned int m; // edi
  unsigned int v482; // r9d
  unsigned int v483; // edi
  __int64 v484; // r9
  int *v485; // rcx
  unsigned int n; // edi
  unsigned int v487; // r10d
  int v488; // edi
  int *v489; // rax
  unsigned int *v490; // rcx
  unsigned int ii; // edi
  const void *v492; // r9
  unsigned int v493; // r10d
  unsigned int v494; // edi
  unsigned int *v495; // rax
  int v496; // ecx
  void *v497; // rdi
  HANDLE v498; // rax
  void *v499; // rdi
  HANDLE v500; // rax
  HANDLE v501; // rax
  HANDLE v502; // rax
  void *v503; // rdi
  DWORD ModuleFileNameW; // eax
  unsigned int v505; // edi
  int v506; // eax
  char *v507; // r11
  int v508; // edi
  int v509; // esi
  int v510; // ebx
  _BYTE *v511; // r13
  unsigned __int8 *v512; // r12
  __int64 v513; // r15
  int v514; // r11d
  int v515; // r10d
  int v516; // r9d
  int v517; // ebx
  unsigned int v518; // r8d
  int v519; // ebx
  unsigned int v520; // r8d
  int v521; // ebx
  int v522; // r8d
  unsigned int v523; // ebx
  int v524; // r8d
  int v525; // ebx
  int v526; // r8d
  unsigned int v527; // ebx
  int v528; // ecx
  int v529; // ebx
  unsigned int v530; // esi
  int v531; // ebx
  int v532; // esi
  int v533; // ebx
  int v534; // esi
  unsigned int v535; // ebx
  int v536; // esi
  int v537; // ebx
  int v538; // esi
  unsigned int v539; // ebx
  int v540; // esi
  int v541; // ebx
  int v542; // esi
  int v543; // ebx
  int v544; // esi
  int v545; // ebx
  int v546; // esi
  int v547; // ebx
  int v548; // esi
  unsigned __int64 v549; // rax
  __m128i v550; // xmm2
  __m128i v551; // xmm1
  __m128i v552; // xmm0
  __m128i v553; // xmm1
  __m128i v554; // xmm1
  __m128i v555; // xmm1
  __m128i v556; // xmm1
  char kk; // cl
  const WCHAR *v558; // rax
  int v559; // ecx
  __int64 v560; // rcx
  HMODULE *v561; // r8
  __int64 v562; // rdx
  unsigned __int64 v563; // rdx
  unsigned int v564; // edx
  const CHAR *v565; // r10
  __int64 v566; // r9
  __int64 (__fastcall *v567)(); // rax
  int v568; // r9d
  HANDLE v569; // rax
  HANDLE v570; // rax
  HMODULE *v571; // rax
  __int64 v572; // rdx
  int v573; // eax
  char *v574; // r11
  int v575; // edi
  int v576; // ebx
  int v577; // esi
  _BYTE *v578; // r15
  unsigned __int8 *v579; // r13
  __int64 v580; // r12
  int v581; // r11d
  int v582; // r10d
  int v583; // r9d
  int v584; // esi
  unsigned int v585; // r8d
  int v586; // esi
  unsigned int v587; // r8d
  int v588; // esi
  int v589; // r8d
  unsigned int v590; // esi
  int v591; // r8d
  int v592; // esi
  int v593; // r8d
  unsigned int v594; // esi
  int v595; // r8d
  int v596; // esi
  unsigned int v597; // ebx
  int v598; // esi
  int v599; // ebx
  int v600; // esi
  int v601; // ebx
  unsigned int v602; // esi
  int v603; // ebx
  int v604; // esi
  int v605; // ebx
  unsigned int v606; // esi
  int v607; // ebx
  int v608; // esi
  int v609; // ebx
  int v610; // esi
  int v611; // ebx
  int v612; // esi
  int v613; // ebx
  int v614; // esi
  int v615; // ebx
  unsigned __int64 v616; // rax
  __m128i v617; // xmm1
  __m128i v618; // xmm2
  __m128i v619; // xmm0
  __m128i v620; // xmm1
  __m128i v621; // xmm1
  __m128i v622; // xmm1
  __m128i v623; // xmm1
  char nn; // cl
  const WCHAR *v625; // rax
  int v626; // ecx
  __int64 v627; // rcx
  HMODULE *v628; // r8
  __int64 v629; // rdx
  unsigned __int64 v630; // rdx
  unsigned int v631; // edx
  const CHAR *v632; // r10
  __int64 v633; // r9
  __int64 (__fastcall *v634)(); // rax
  int v635; // r9d
  HANDLE v636; // rax
  HANDLE v637; // rax
  HMODULE *v638; // rax
  __int64 v639; // rdx
  signed int v640; // eax
  signed int v641; // edi
  _DWORD *v642; // rdi
  signed int v643; // eax
  bool v644; // sf
  _DWORD *v645; // rax
  char *v646; // rdi
  _DWORD *v647; // rsi
  unsigned int i3; // ebx
  __int64 v649; // rax
  unsigned int v650; // ecx
  unsigned int v651; // r10d
  unsigned int *v652; // r8
  __int64 v653; // r9
  unsigned int v654; // edx
  __int64 v655; // rdi
  __int64 v656; // rax
  wchar_t *v657; // rcx
  __int64 v658; // rax
  __int64 v659; // rcx
  __int64 v660; // rax
  __int64 v661; // rdx
  __int64 v662; // rax
  __int64 v663; // rcx
  __int64 v664; // rax
  __int64 v665; // rdx
  __int64 v666; // rax
  __int64 v667; // rcx
  __int64 v668; // rax
  __int64 v669; // rdx
  __int64 v670; // rax
  __int64 v671; // rcx
  __int64 v672; // rax
  __int64 v673; // rdx
  __int64 v674; // rax
  __int64 v675; // rcx
  __int64 v676; // rax
  __int64 v677; // rdx
  __int64 v678; // rax
  __int64 v679; // rcx
  __int64 v680; // rax
  __int64 v681; // rdx
  __int64 v682; // rax
  __int64 v683; // rcx
  __int64 v684; // rax
  __int64 v685; // rdx
  __int64 v686; // rax
  __int64 v687; // rcx
  __int64 v688; // rax
  __int64 v689; // rdx
  __int64 v690; // rax
  char *v691; // rax
  int v692; // r15d
  int v693; // ebx
  int v694; // r10d
  _BYTE *v695; // rsi
  unsigned __int8 *v696; // r12
  __int64 v697; // r13
  int v698; // r11d
  int v699; // r9d
  int v700; // r8d
  int v701; // r10d
  unsigned int v702; // edi
  int v703; // r10d
  unsigned int v704; // edi
  int v705; // r10d
  int v706; // edi
  unsigned int v707; // r10d
  int v708; // edi
  int v709; // r10d
  int v710; // edi
  unsigned int v711; // r10d
  int v712; // ecx
  int v713; // r10d
  unsigned int v714; // ebx
  int v715; // r10d
  int v716; // ebx
  int v717; // r10d
  int v718; // ebx
  unsigned int v719; // r10d
  int v720; // ebx
  int v721; // r10d
  int v722; // ebx
  unsigned int v723; // r10d
  int v724; // ebx
  int v725; // r10d
  int v726; // ebx
  int v727; // r10d
  int v728; // ebx
  int v729; // r10d
  int v730; // ebx
  int v731; // r10d
  int v732; // ebx
  unsigned __int64 v733; // rax
  __m128i v734; // xmm1
  __m128i v735; // xmm2
  __m128i v736; // xmm0
  __m128i v737; // xmm1
  __m128i v738; // xmm1
  __m128i v739; // xmm1
  __m128i v740; // xmm1
  char i4; // cl
  HANDLE v742; // rax
  _BYTE *v743; // rdi
  __int64 *v744; // rax
  __int64 v745; // r8
  __int64 v746; // rdx
  char *v747; // rdi
  __int64 v748; // rdx
  __int64 v749; // rdi
  __int64 v750; // rdx
  __int64 v751; // rdi
  __int64 v752; // rdx
  __int64 v753; // rdi
  __int64 v754; // rdx
  __int64 v755; // rdi
  __int64 v756; // rdx
  __int64 v757; // rdi
  __int64 v758; // rdx
  __int64 v759; // rdi
  __int64 v760; // rdx
  __int64 v761; // rdi
  __int64 v762; // rdx
  __int64 v763; // rdi
  __int64 v764; // rdx
  __int64 v765; // rdi
  __int64 v766; // rdx
  __int64 v767; // rdi
  __int64 v768; // rdx
  __int64 v769; // rdi
  __int64 v770; // rdx
  __int64 v771; // rdi
  __int64 v772; // rdx
  __int64 v773; // rdi
  __int64 v774; // rdx
  __int64 v775; // rdi
  __int64 v776; // rdx
  __int64 v777; // rdi
  __int64 v778; // rdx
  __int64 v779; // rdi
  __int64 v780; // rdx
  __int64 v781; // rdi
  __int64 v782; // rdx
  __int64 v783; // rdi
  __int64 v784; // rdx
  __int64 v785; // rdi
  __int64 v786; // rdx
  __int64 v787; // rdi
  __int64 v788; // rdx
  __int64 v789; // rdi
  __int64 v790; // rdx
  __int64 v791; // rdi
  __int64 v792; // rdx
  __int64 v793; // rdi
  __int64 v794; // rdx
  __int64 v795; // rdi
  __int64 v796; // rdx
  __int64 v797; // rdi
  __int64 v798; // rdx
  __int64 v799; // rdi
  __int64 v800; // rdx
  __int64 v801; // rdi
  __int64 v802; // rdx
  __int64 v803; // rdi
  __int64 v804; // rdx
  __int64 v805; // rdi
  __int64 v806; // rdx
  __int64 v807; // rdi
  __int64 v808; // rdx
  __int64 v809; // rdi
  __int64 v810; // rdx
  __int64 v811; // rdi
  __int64 v812; // rdx
  __int64 v813; // rdi
  __int64 v814; // rdx
  __int64 v815; // rdi
  __int64 v816; // rdx
  __int64 v817; // rdi
  __int64 v818; // rdx
  __int64 v819; // rdi
  __int64 v820; // rdx
  void **v821; // rdi
  unsigned int v822; // r8d
  void **v823; // rdx
  __int16 *v824; // rcx
  __int64 v825; // rax
  __int16 v826; // r9
  _WORD *v827; // rcx
  void *v828; // rcx
  __int64 v829; // rax
  int v830; // eax
  LPVOID v831; // rax
  __int64 v832; // rcx
  signed int v833; // eax
  bool v834; // sf
  signed int v835; // eax
  bool v836; // sf
  __int64 v837; // rcx
  __int64 v838; // rcx
  void *v839; // rdi
  HANDLE v840; // rax
  signed int v841; // eax
  int v842; // eax
  int v843; // eax
  int v844; // ecx
  LPCWSTR v845; // rax
  signed int v846; // eax
  __int64 v847; // rax
  signed int v848; // eax
  const WCHAR *v849; // rax
  signed int v850; // eax
  __int64 v851; // rax
  signed int v852; // eax
  int v853; // ecx
  unsigned int v854; // edi
  int v855; // edx
  unsigned int v856; // eax
  __int64 v857; // rdi
  int v858; // eax
  __int64 v859; // rdi
  int v860; // eax
  int v861; // edi
  __int64 v862; // rdx
  int v863; // ecx
  signed int v864; // eax
  __int64 v865; // rax
  signed int v866; // eax
  __int64 v867; // rdi
  int v868; // eax
  int v869; // eax
  int v870; // edi
  int v871; // ecx
  int v872; // ecx
  __int64 v873; // rax
  int v874; // edx
  int v875; // ecx
  int v876; // eax
  HMODULE *v877; // rax
  __int64 v878; // rdx
  __int64 v879; // rax
  unsigned int v880; // edi
  __int64 v881; // rax
  BOOL v882; // eax
  int v883; // edi
  __int64 v884; // rcx
  int v885; // eax
  __int64 v886; // rax
  __int64 v887; // rax
  signed int v888; // edi
  __int64 v889; // rax
  signed int v890; // eax
  int v891; // eax
  char *v892; // rcx
  __int64 v893; // rax
  int v894; // r9d
  int v895; // edx
  int v896; // r11d
  int v897; // ecx
  int v898; // r8d
  int v899; // r10d
  char *v900; // rdi
  __int64 v901; // r9
  char *v902; // rax
  __int64 v903; // r12
  __int64 v904; // r13
  int v905; // ebx
  unsigned __int8 *v906; // r9
  signed __int64 v907; // r11
  int v908; // r8d
  __int64 v909; // rax
  __int64 v910; // rax
  signed int v911; // edi
  __int64 v912; // rax
  signed int v913; // eax
  int v914; // eax
  char *v915; // rcx
  __int64 v916; // rax
  int v917; // eax
  int v918; // r9d
  int v919; // edx
  int v920; // r11d
  int v921; // ecx
  int v922; // r8d
  int v923; // r10d
  char *v924; // rdi
  char *v925; // rax
  __int64 v926; // rsi
  __int64 v927; // r13
  int v928; // ebx
  unsigned __int8 *v929; // r9
  signed __int64 v930; // r11
  int v931; // r8d
  void *v932; // rdi
  char v933; // al
  int v934; // edx
  int v935; // edi
  int v936; // ecx
  unsigned __int64 v937; // kr00_8
  int v938; // edi
  SIZE_T v939; // rax
  __int64 v940; // rax
  void *v941; // rcx
  unsigned int v942; // edi
  const WCHAR *v943; // rax
  signed int v944; // eax
  bool v945; // sf
  LPVOID v946; // rdi
  int v947; // eax
  void *v948; // rcx
  __int64 v949; // rax
  int v950; // r8d
  int v951; // edx
  int v952; // r10d
  int v953; // ecx
  int v954; // r9d
  int v955; // r11d
  unsigned __int8 *v956; // rdi
  char *v957; // rax
  __int64 v958; // r15
  __int64 v959; // r13
  int v960; // r8d
  unsigned __int8 *v961; // r9
  signed __int64 v962; // r10
  int v963; // r8d
  __int64 v964; // rax
  __int64 v965; // rcx
  signed int v966; // edi
  __int64 v967; // rax
  signed int v968; // eax
  int v969; // eax
  char *v970; // rcx
  __int64 v971; // rax
  int v972; // eax
  int v973; // edx
  int v974; // r9d
  int v975; // r8d
  int v976; // r11d
  int v977; // ecx
  int v978; // r10d
  const WCHAR *v979; // rdi
  __int64 v980; // rdx
  char *v981; // rax
  int v982; // ebx
  __int64 v983; // rsi
  __int64 v984; // r12
  int v985; // r8d
  unsigned __int8 *v986; // r9
  __int64 v987; // r11
  int v988; // r8d
  __int64 v989; // rcx
  void *v990; // rdi
  HANDLE v991; // rax
  __int64 v992; // rcx
  void *v993; // rdi
  HANDLE v994; // rax
  __int64 v995; // rcx
  void *v996; // rdi
  HANDLE v997; // rax
  __int64 v998; // rcx
  int v999; // eax
  HMODULE *v1000; // rdi
  __int64 v1001; // rax
  int v1002; // eax
  const WCHAR *v1003; // rax
  int v1004; // esi
  int v1005; // r13d
  int v1006; // r11d
  int v1007; // r10d
  _BYTE *v1008; // rbx
  unsigned __int8 *v1009; // r12
  __int64 v1010; // r15
  int v1011; // r9d
  int v1012; // r8d
  int v1013; // r10d
  unsigned int v1014; // edi
  int v1015; // r10d
  unsigned int v1016; // edi
  int v1017; // r10d
  int v1018; // edi
  unsigned int v1019; // r10d
  int v1020; // edi
  int v1021; // r10d
  int v1022; // edi
  unsigned int v1023; // r10d
  int v1024; // ecx
  int v1025; // r10d
  unsigned int v1026; // r11d
  int v1027; // r10d
  int v1028; // r11d
  int v1029; // r10d
  int v1030; // r11d
  unsigned int v1031; // r10d
  int v1032; // r11d
  int v1033; // r10d
  int v1034; // r11d
  unsigned int v1035; // r10d
  int v1036; // r11d
  int v1037; // r10d
  int v1038; // r11d
  int v1039; // r10d
  int v1040; // r11d
  int v1041; // r10d
  int v1042; // r11d
  int v1043; // r10d
  int v1044; // r11d
  unsigned __int64 v1045; // rax
  __m128i v1046; // xmm2
  __m128i v1047; // xmm1
  WCHAR *v1048; // rdi
  __m128i v1049; // xmm0
  __m128i v1050; // xmm1
  __m128i v1051; // xmm1
  __m128i v1052; // xmm1
  __m128i v1053; // xmm1
  char i2; // cl
  const WCHAR *v1055; // rdx
  __int64 v1056; // rax
  WCHAR *v1057; // rdi
  int v1058; // ecx
  LPCWSTR v1059; // r8
  __int64 v1060; // rdx
  unsigned __int64 v1061; // rdx
  unsigned int v1062; // edx
  const CHAR *v1063; // r9
  __int64 v1064; // rax
  __int64 (__fastcall *v1065)(); // rax
  HANDLE v1066; // rax
  HANDLE v1067; // rax
  HMODULE *v1068; // rdi
  __int64 v1069; // rax
  int v1070; // eax
  HMODULE *v1071; // rdi
  __int64 v1072; // rax
  HANDLE v1073; // rax
  _OWORD *v1074; // rax
  _OWORD *v1075; // rcx
  HANDLE v1076; // rax
  WCHAR *v1077; // rax
  unsigned int v1078; // edi
  HANDLE v1079; // rax
  _DWORD *v1080; // rax
  _DWORD *v1081; // rdi
  __int64 v1082; // r9
  unsigned int v1083; // r10d
  _DWORD *v1084; // rdi
  int v1085; // r9d
  unsigned int v1086; // r10d
  _OWORD *v1087; // rax
  _OWORD *v1088; // rcx
  unsigned int v1089; // edi
  unsigned int *v1090; // r9
  __int64 v1091; // r9
  int v1092; // r10d
  _DWORD *v1093; // r9
  unsigned int v1094; // edi
  unsigned int *v1095; // r9
  __int64 v1096; // r9
  int v1097; // r10d
  _DWORD *v1098; // r9
  __int64 v1099; // rcx
  unsigned int v1100; // edi
  int v1101; // edi
  WCHAR *v1102; // r9
  unsigned int v1103; // ecx
  unsigned int v1104; // edi
  HANDLE v1105; // rax
  WCHAR *v1106; // rax
  unsigned int v1107; // r10d
  void *v1108; // rcx
  __int64 v1109; // r9
  WCHAR *v1110; // rcx
  HANDLE v1111; // rax
  int v1112; // edi
  int v1113; // edi
  unsigned __int64 v1114; // rdi
  char *v1115; // rdx
  unsigned __int8 v1116; // al
  int v1117; // r11d
  unsigned __int64 v1118; // rcx
  unsigned __int8 *v1119; // r8
  __m128i v1120; // xmm1
  __m128i v1121; // xmm2
  __m128i v1122; // xmm0
  __m128i v1123; // xmm1
  __m128i v1124; // xmm1
  __m128i v1125; // xmm1
  __m128i v1126; // xmm1
  char *v1127; // rcx
  signed int v1128; // r10d
  int v1129; // r9d
  unsigned int v1130; // eax
  char v1131; // r9
  int v1132; // edx
  unsigned int v1133; // ecx
  unsigned int v1134; // r9d
  unsigned int v1135; // ecx
  int v1136; // edx
  int v1137; // r11d
  _BYTE *v1138; // rsi
  char v1139; // bl
  int v1140; // r11d
  unsigned __int8 *v1141; // rcx
  int v1142; // esi
  unsigned __int64 v1143; // r13
  int v1144; // r12d
  int v1145; // r15d
  unsigned int v1146; // r14d
  int v1147; // r8d
  int v1148; // edi
  int v1149; // r9d
  int v1150; // r10d
  int v1151; // r9d
  int v1152; // r10d
  int v1153; // r9d
  unsigned int v1154; // r10d
  int v1155; // r9d
  int v1156; // r10d
  int v1157; // r9d
  int v1158; // r10d
  int v1159; // r9d
  int v1160; // r10d
  unsigned int v1161; // r9d
  unsigned int v1162; // r10d
  int v1163; // r9d
  int v1164; // r10d
  int v1165; // r9d
  int v1166; // r10d
  int v1167; // r9d
  int v1168; // r10d
  int v1169; // r9d
  int v1170; // r10d
  unsigned int v1171; // r9d
  int v1172; // r10d
  int v1173; // r9d
  int v1174; // r10d
  int v1175; // r9d
  int v1176; // r10d
  int v1177; // r9d
  int v1178; // r10d
  int v1179; // r9d
  int v1180; // r10d
  int v1181; // r9d
  unsigned int v1182; // edi
  HANDLE v1183; // rax
  _DWORD *v1184; // rax
  _DWORD *v1185; // rbx
  HANDLE v1186; // rax
  void *v1187; // rax
  HANDLE v1188; // rax
  _OWORD *v1189; // rax
  HANDLE v1190; // rax
  _QWORD *v1191; // rax
  void *v1192; // rdi
  HANDLE v1193; // rax
  void *v1194; // rdi
  HANDLE v1195; // rax
  void *v1196; // rdi
  HANDLE v1197; // rax
  HANDLE v1198; // rax
  HANDLE v1199; // rax
  HANDLE v1200; // rax
  HANDLE v1201; // rax
  HANDLE v1202; // rax
  HANDLE v1203; // rax
  const void **v1204; // rbx
  int v1205; // edi
  unsigned int *v1206; // r9
  unsigned int v1207; // r10d
  unsigned int v1208; // eax
  unsigned int v1209; // edi
  HANDLE v1210; // rax
  WCHAR *v1211; // rax
  void *v1212; // rcx
  void *v1213; // rcx
  void *v1214; // rdx
  HANDLE v1215; // rax
  unsigned int v1216; // ebx
  int v1217; // eax
  __int64 v1218; // rcx
  unsigned int v1219; // r9d
  unsigned int *v1220; // rcx
  int v1221; // r10d
  unsigned int v1222; // r10d
  unsigned int *v1223; // rax
  unsigned int *v1224; // rcx
  unsigned int v1225; // r9d
  int v1226; // r10d
  int v1227; // r10d
  unsigned int *v1228; // rax
  unsigned int v1229; // r10d
  unsigned int v1230; // eax
  void *v1231; // rcx
  int *v1232; // r9
  unsigned int v1233; // edi
  HANDLE v1234; // rax
  void *v1235; // rax
  signed int v1236; // eax
  unsigned int v1237; // r9d
  _QWORD *v1238; // rbx
  int v1239; // edi
  NTSTATUS (__stdcall *v1240)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG); // rax
  int v1241; // eax
  unsigned int *v1242; // rcx
  int v1243; // r9d
  SIZE_T v1244; // r10
  unsigned int *v1245; // rax
  unsigned int v1246; // r10d
  int v1247; // r9d
  int v1248; // r9d
  unsigned int v1249; // r10d
  unsigned int v1250; // r10d
  int v1251; // r9d
  int v1252; // r9d
  int v1253; // r9d
  int v1254; // r10d
  HANDLE v1255; // rax
  _QWORD *v1256; // rax
  _QWORD *v1257; // rdi
  HANDLE v1258; // rax
  void *v1259; // rax
  HANDLE v1260; // rax
  void *v1261; // rax
  HANDLE v1262; // rax
  void *v1263; // rax
  HANDLE v1264; // rax
  HANDLE v1265; // rax
  HANDLE v1266; // rax
  HANDLE v1267; // rax
  HANDLE v1268; // rax
  HANDLE v1269; // rax
  HANDLE v1270; // rax
  HANDLE v1271; // rax
  const WCHAR *v1272; // rdi
  __int64 v1273; // rax
  unsigned __int64 v1274; // rbx
  int *v1275; // rax
  int *v1276; // rcx
  const WCHAR *v1277; // r8
  int *v1278; // r9
  unsigned int v1279; // edi
  int v1280; // r10d
  int v1281; // edx
  char v1282; // r11
  int v1283; // eax
  int v1284; // ecx
  unsigned int v1285; // r10d
  unsigned int v1286; // edx
  unsigned int v1287; // eax
  int v1288; // ecx
  int v1289; // r11d
  char v1290; // si
  unsigned int v1291; // edx
  int v1292; // r15d
  _BYTE *v1293; // r14
  unsigned __int8 *v1294; // rcx
  int v1295; // ebx
  size_t v1296; // r13
  int v1297; // r12d
  int v1298; // r9d
  int v1299; // r8d
  int v1300; // r10d
  unsigned int v1301; // edi
  int v1302; // r10d
  unsigned int v1303; // edi
  int v1304; // r10d
  int v1305; // edi
  unsigned int v1306; // r10d
  int v1307; // edi
  int v1308; // r10d
  int v1309; // edi
  unsigned int v1310; // r10d
  int v1311; // edi
  int v1312; // r10d
  unsigned int v1313; // edx
  int v1314; // r10d
  int v1315; // edx
  int v1316; // r10d
  int v1317; // edx
  unsigned int v1318; // r10d
  int v1319; // edx
  int v1320; // r10d
  int v1321; // edx
  unsigned int v1322; // r10d
  unsigned int v1323; // edx
  int v1324; // r10d
  int v1325; // edx
  int v1326; // r10d
  int v1327; // edx
  int v1328; // r10d
  int v1329; // edx
  int v1330; // r10d
  int v1331; // edx
  unsigned __int64 v1332; // rax
  __m128i v1333; // xmm1
  __m128i v1334; // xmm2
  __m128i v1335; // xmm0
  __m128i v1336; // xmm1
  __m128i v1337; // xmm1
  __m128i v1338; // xmm1
  __m128i v1339; // xmm1
  unsigned __int8 v1340; // dl
  HANDLE v1341; // rax
  void *v1342; // rbx
  HANDLE v1343; // rax
  int v1344; // edi
  unsigned int v1345; // r9d
  unsigned int v1346; // r10d
  const WCHAR *v1347; // r10
  __int64 v1348; // rdx
  SIZE_T v1349; // rsi
  void *v1350; // rbx
  void *v1351; // rax
  int v1352; // ecx
  unsigned __int64 v1353; // r9
  unsigned __int64 v1354; // rsi
  unsigned int *v1355; // r9
  int v1356; // eax
  __int64 v1357; // r9
  unsigned int v1358; // r10d
  bool v1359; // zf
  HANDLE v1360; // rax
  void *v1361; // rbx
  HANDLE v1362; // rax
  void *v1363; // rsi
  HANDLE v1364; // rax
  void *v1365; // rsi
  HANDLE v1366; // rax
  void *v1367; // rsi
  HANDLE v1368; // rax
  HANDLE v1369; // rax
  HANDLE v1370; // rax
  HANDLE v1371; // rax
  _QWORD *v1372; // rsi
  void *v1373; // rbx
  HANDLE v1374; // rax
  void *v1375; // rbx
  HANDLE v1376; // rax
  HANDLE v1377; // rax
  HANDLE v1378; // rax
  HANDLE v1379; // rax
  void **v1380; // rdi
  int v1381; // r9d
  unsigned int v1382; // r10d
  int *v1383; // rax
  int v1384; // r9d
  int v1385; // edi
  void **v1386; // rax
  void *v1387; // rdi
  HANDLE v1388; // rax
  void *v1389; // rdi
  HANDLE v1390; // rax
  void *v1391; // rdi
  HANDLE v1392; // rax
  WCHAR *v1393; // rdi
  HANDLE v1394; // rax
  int v1395; // edi
  int v1396; // eax
  HMODULE *v1397; // rbx
  __int64 v1398; // rdi
  int v1399; // eax
  int v1400; // eax
  __int64 v1401; // rdi
  _QWORD *v1402; // rax
  int v1403; // eax
  int v1404; // eax
  __int64 v1405; // rdi
  LONG StagedPackageOrigin; // eax
  const WCHAR *StringRawBuffer; // rax
  WCHAR *v1408; // rdi
  const WCHAR *v1409; // rax
  LONG v1410; // eax
  __int64 v1411; // rbx
  _QWORD *v1412; // rax
  int v1413; // eax
  int v1414; // eax
  __int64 v1415; // rbx
  _QWORD *v1416; // rax
  int v1417; // eax
  int v1418; // eax
  __int64 v1419; // rbx
  unsigned int v1420; // ebx
  __int64 v1421; // rax
  unsigned int v1422; // eax
  int v1423; // r9d
  int v1424; // eax
  bool v1425; // al
  int v1426; // r9d
  int v1427; // edx
  int v1428; // edx
  int v1429; // r9d
  int v1430; // edx
  WCHAR *v1431; // [rsp+60h] [rbp-A0h]
  WCHAR *v1432; // [rsp+60h] [rbp-A0h]
  WCHAR *v1433; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1434; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1435; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1436; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1437; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1438; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1439; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1440; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1441; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1442; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1443; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1444; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1445; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1446; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1447; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1448; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1449; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1450; // [rsp+60h] [rbp-A0h]
  WCHAR *v1451; // [rsp+60h] [rbp-A0h]
  WCHAR *v1452; // [rsp+60h] [rbp-A0h]
  WCHAR *v1453; // [rsp+60h] [rbp-A0h]
  WCHAR *v1454; // [rsp+60h] [rbp-A0h]
  WCHAR *v1455; // [rsp+60h] [rbp-A0h]
  WCHAR *v1456; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1457; // [rsp+60h] [rbp-A0h]
  WCHAR *v1458; // [rsp+60h] [rbp-A0h]
  WCHAR *v1459; // [rsp+60h] [rbp-A0h]
  WCHAR *v1460; // [rsp+60h] [rbp-A0h]
  WCHAR *v1461; // [rsp+60h] [rbp-A0h]
  WCHAR *v1462; // [rsp+60h] [rbp-A0h]
  WCHAR *v1463; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1464; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1465; // [rsp+60h] [rbp-A0h]
  unsigned int v1466; // [rsp+68h] [rbp-98h]
  int v1467; // [rsp+68h] [rbp-98h]
  int v1468; // [rsp+68h] [rbp-98h]
  unsigned int v1469; // [rsp+68h] [rbp-98h]
  int v1470; // [rsp+68h] [rbp-98h]
  unsigned int v1471; // [rsp+68h] [rbp-98h]
  unsigned int v1472; // [rsp+68h] [rbp-98h]
  int v1473; // [rsp+68h] [rbp-98h]
  unsigned int v1474; // [rsp+68h] [rbp-98h]
  WCHAR *v1475; // [rsp+70h] [rbp-90h]
  LPCWSTR v1476; // [rsp+70h] [rbp-90h]
  LPCWSTR v1477; // [rsp+70h] [rbp-90h]
  WCHAR *v1478; // [rsp+70h] [rbp-90h]
  WCHAR *v1479; // [rsp+70h] [rbp-90h]
  LPCWSTR v1480; // [rsp+70h] [rbp-90h]
  LPCWSTR v1481; // [rsp+70h] [rbp-90h]
  LPCWSTR v1482; // [rsp+70h] [rbp-90h]
  LPCWSTR v1483; // [rsp+70h] [rbp-90h]
  LPCWSTR v1484; // [rsp+70h] [rbp-90h]
  LPCWSTR v1485; // [rsp+70h] [rbp-90h]
  signed int v1486; // [rsp+70h] [rbp-90h]
  int v1487; // [rsp+70h] [rbp-90h]
  int v1488; // [rsp+70h] [rbp-90h]
  int v1489; // [rsp+70h] [rbp-90h]
  unsigned int v1490; // [rsp+70h] [rbp-90h]
  unsigned int v1491; // [rsp+70h] [rbp-90h]
  unsigned int v1492; // [rsp+70h] [rbp-90h]
  int v1493; // [rsp+70h] [rbp-90h]
  int v1494; // [rsp+70h] [rbp-90h]
  unsigned int v1495; // [rsp+78h] [rbp-88h]
  int v1496; // [rsp+78h] [rbp-88h]
  int v1497; // [rsp+78h] [rbp-88h]
  int v1498; // [rsp+78h] [rbp-88h]
  unsigned int v1499; // [rsp+78h] [rbp-88h]
  unsigned int v1500; // [rsp+78h] [rbp-88h]
  int v1501; // [rsp+78h] [rbp-88h]
  int v1502; // [rsp+78h] [rbp-88h]
  int v1503; // [rsp+78h] [rbp-88h]
  int v1504; // [rsp+78h] [rbp-88h]
  _OWORD *v1505; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v1506; // [rsp+80h] [rbp-80h]
  _DWORD *v1507; // [rsp+80h] [rbp-80h]
  void **v1508; // [rsp+80h] [rbp-80h]
  __int64 v1509; // [rsp+80h] [rbp-80h]
  LPVOID v1510; // [rsp+80h] [rbp-80h]
  char *v1511; // [rsp+80h] [rbp-80h]
  char *v1512; // [rsp+80h] [rbp-80h]
  int v1513; // [rsp+80h] [rbp-80h]
  int v1514; // [rsp+80h] [rbp-80h]
  int v1515; // [rsp+80h] [rbp-80h]
  int v1516; // [rsp+80h] [rbp-80h]
  int v1517; // [rsp+80h] [rbp-80h]
  int v1518; // [rsp+80h] [rbp-80h]
  unsigned int v1519; // [rsp+80h] [rbp-80h]
  int v1520; // [rsp+80h] [rbp-80h]
  unsigned int j; // [rsp+88h] [rbp-78h]
  unsigned int v1522; // [rsp+88h] [rbp-78h]
  int v1523; // [rsp+88h] [rbp-78h]
  int v1524; // [rsp+88h] [rbp-78h]
  int v1525; // [rsp+88h] [rbp-78h]
  int v1526; // [rsp+88h] [rbp-78h]
  int v1527; // [rsp+88h] [rbp-78h]
  int v1528; // [rsp+88h] [rbp-78h]
  void *v1529; // [rsp+90h] [rbp-70h]
  char *v1530; // [rsp+90h] [rbp-70h]
  __int64 v1531; // [rsp+90h] [rbp-70h]
  char *v1532; // [rsp+90h] [rbp-70h]
  _BYTE *v1533; // [rsp+90h] [rbp-70h]
  void **v1534; // [rsp+90h] [rbp-70h]
  LPCWSTR v1535; // [rsp+90h] [rbp-70h]
  LPVOID v1536; // [rsp+90h] [rbp-70h]
  LPVOID v1537; // [rsp+90h] [rbp-70h]
  int v1538; // [rsp+90h] [rbp-70h]
  int v1539; // [rsp+90h] [rbp-70h]
  int v1540; // [rsp+90h] [rbp-70h]
  int v1541; // [rsp+90h] [rbp-70h]
  int v1542; // [rsp+90h] [rbp-70h]
  unsigned __int8 v1543; // [rsp+90h] [rbp-70h]
  unsigned int v1544; // [rsp+90h] [rbp-70h]
  int v1545; // [rsp+90h] [rbp-70h]
  int v1546; // [rsp+90h] [rbp-70h]
  _BYTE *v1547; // [rsp+98h] [rbp-68h]
  void *v1548; // [rsp+98h] [rbp-68h]
  void *v1549; // [rsp+98h] [rbp-68h]
  void *v1550; // [rsp+98h] [rbp-68h]
  void *v1551; // [rsp+98h] [rbp-68h]
  unsigned int *v1552; // [rsp+98h] [rbp-68h]
  void *v1553; // [rsp+98h] [rbp-68h]
  void *v1554; // [rsp+98h] [rbp-68h]
  void *v1555; // [rsp+98h] [rbp-68h]
  void *v1556; // [rsp+98h] [rbp-68h]
  void *v1557; // [rsp+98h] [rbp-68h]
  void *v1558; // [rsp+98h] [rbp-68h]
  SIZE_T v1559; // [rsp+98h] [rbp-68h]
  SIZE_T v1560; // [rsp+98h] [rbp-68h]
  SIZE_T v1561; // [rsp+98h] [rbp-68h]
  WCHAR *v1562; // [rsp+98h] [rbp-68h]
  WCHAR *v1563; // [rsp+98h] [rbp-68h]
  unsigned int v1564; // [rsp+A0h] [rbp-60h]
  unsigned int v1565; // [rsp+A0h] [rbp-60h]
  unsigned int v1566; // [rsp+A0h] [rbp-60h]
  unsigned int v1567; // [rsp+A0h] [rbp-60h]
  unsigned int v1568; // [rsp+A0h] [rbp-60h]
  unsigned int v1569; // [rsp+A0h] [rbp-60h]
  unsigned int v1570; // [rsp+A0h] [rbp-60h]
  unsigned int i1; // [rsp+A0h] [rbp-60h]
  unsigned int v1572; // [rsp+A0h] [rbp-60h]
  unsigned int v1573; // [rsp+A0h] [rbp-60h]
  unsigned int v1574; // [rsp+A0h] [rbp-60h]
  int v1575; // [rsp+A0h] [rbp-60h]
  int v1576; // [rsp+A0h] [rbp-60h]
  _BYTE *v1577; // [rsp+A0h] [rbp-60h]
  _BYTE *v1578; // [rsp+A8h] [rbp-58h]
  char *v1579; // [rsp+A8h] [rbp-58h]
  SIZE_T v1580; // [rsp+A8h] [rbp-58h]
  SIZE_T v1581; // [rsp+A8h] [rbp-58h]
  SIZE_T v1582; // [rsp+A8h] [rbp-58h]
  SIZE_T v1583; // [rsp+A8h] [rbp-58h]
  SIZE_T v1584; // [rsp+A8h] [rbp-58h]
  SIZE_T v1585; // [rsp+A8h] [rbp-58h]
  SIZE_T v1586; // [rsp+A8h] [rbp-58h]
  SIZE_T v1587; // [rsp+A8h] [rbp-58h]
  SIZE_T v1588; // [rsp+A8h] [rbp-58h]
  SIZE_T v1589; // [rsp+A8h] [rbp-58h]
  SIZE_T v1590; // [rsp+A8h] [rbp-58h]
  SIZE_T v1591; // [rsp+A8h] [rbp-58h]
  SIZE_T v1592; // [rsp+A8h] [rbp-58h]
  SIZE_T v1593; // [rsp+A8h] [rbp-58h]
  size_t Size; // [rsp+B0h] [rbp-50h]
  unsigned int Sizea; // [rsp+B0h] [rbp-50h]
  int Sizeb; // [rsp+B0h] [rbp-50h]
  int Sizec; // [rsp+B0h] [rbp-50h]
  unsigned int Sized; // [rsp+B0h] [rbp-50h]
  int Sizee; // [rsp+B0h] [rbp-50h]
  unsigned int Sizef; // [rsp+B0h] [rbp-50h]
  int Sizeg; // [rsp+B0h] [rbp-50h]
  int Sizeh; // [rsp+B0h] [rbp-50h]
  size_t Sizei; // [rsp+B0h] [rbp-50h]
  int v1604; // [rsp+B8h] [rbp-48h]
  unsigned int v1605; // [rsp+B8h] [rbp-48h]
  int v1606; // [rsp+B8h] [rbp-48h]
  char v1607; // [rsp+B8h] [rbp-48h]
  unsigned int mm; // [rsp+C0h] [rbp-40h]
  int v1609; // [rsp+C0h] [rbp-40h]
  int v1610; // [rsp+C0h] [rbp-40h]
  int v1611; // [rsp+C0h] [rbp-40h]
  int v1612; // [rsp+C0h] [rbp-40h]
  unsigned int v1613; // [rsp+C8h] [rbp-38h]
  unsigned int v1614; // [rsp+C8h] [rbp-38h]
  int v1615; // [rsp+C8h] [rbp-38h]
  signed int v1616; // [rsp+C8h] [rbp-38h]
  int v1617; // [rsp+C8h] [rbp-38h]
  int v1618; // [rsp+C8h] [rbp-38h]
  int v1619; // [rsp+C8h] [rbp-38h]
  int v1620; // [rsp+C8h] [rbp-38h]
  int v1621; // [rsp+C8h] [rbp-38h]
  char *v1622; // [rsp+C8h] [rbp-38h]
  _QWORD *v1623; // [rsp+D0h] [rbp-30h]
  LPVOID v1624; // [rsp+D0h] [rbp-30h]
  _WORD *v1625; // [rsp+D0h] [rbp-30h]
  int v1626; // [rsp+D0h] [rbp-30h]
  int v1627; // [rsp+D0h] [rbp-30h]
  unsigned int v1628; // [rsp+D0h] [rbp-30h]
  int v1629; // [rsp+D0h] [rbp-30h]
  int v1630; // [rsp+D0h] [rbp-30h]
  void *v1631; // [rsp+D8h] [rbp-28h]
  const WCHAR *v1632; // [rsp+D8h] [rbp-28h]
  void *v1633; // [rsp+D8h] [rbp-28h]
  char *v1634; // [rsp+D8h] [rbp-28h]
  char *v1635; // [rsp+D8h] [rbp-28h]
  char *v1636; // [rsp+D8h] [rbp-28h]
  char *v1637; // [rsp+D8h] [rbp-28h]
  char *v1638; // [rsp+D8h] [rbp-28h]
  char *v1639; // [rsp+D8h] [rbp-28h]
  unsigned int v1640; // [rsp+E0h] [rbp-20h] BYREF
  int v1641; // [rsp+E4h] [rbp-1Ch]
  unsigned int v1642; // [rsp+E8h] [rbp-18h]
  LPVOID v1643; // [rsp+F0h] [rbp-10h]
  char v1644[8]; // [rsp+F8h] [rbp-8h] BYREF
  LPCWSTR v1645; // [rsp+100h] [rbp+0h]
  LPVOID v1646; // [rsp+108h] [rbp+8h]
  LPVOID v1647; // [rsp+110h] [rbp+10h]
  void *Src; // [rsp+118h] [rbp+18h]
  void *v1649; // [rsp+120h] [rbp+20h]
  LPVOID v1650; // [rsp+128h] [rbp+28h]
  SIZE_T v1651; // [rsp+130h] [rbp+30h]
  int v1652; // [rsp+138h] [rbp+38h] BYREF
  int v1653; // [rsp+13Ch] [rbp+3Ch]
  SIZE_T v1654; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v1655; // [rsp+148h] [rbp+48h] BYREF
  void **jj; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1657; // [rsp+158h] [rbp+58h] BYREF
  int v1658; // [rsp+15Ch] [rbp+5Ch]
  int v1659; // [rsp+160h] [rbp+60h]
  int v1660; // [rsp+164h] [rbp+64h]
  unsigned int v1661; // [rsp+168h] [rbp+68h]
  int v1662; // [rsp+16Ch] [rbp+6Ch]
  unsigned int v1663; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1664; // [rsp+174h] [rbp+74h] BYREF
  int v1665; // [rsp+178h] [rbp+78h]
  int v1666; // [rsp+17Ch] [rbp+7Ch]
  unsigned int dwBytes; // [rsp+180h] [rbp+80h] BYREF
  unsigned int dwBytes_4; // [rsp+184h] [rbp+84h] BYREF
  unsigned int v1669; // [rsp+188h] [rbp+88h]
  unsigned int v1670; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1671; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1672; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v1673; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1674; // [rsp+19Ch] [rbp+9Ch] BYREF
  unsigned int v1675; // [rsp+1A0h] [rbp+A0h] BYREF
  int v1676; // [rsp+1A8h] [rbp+A8h]
  unsigned int v1677; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1678; // [rsp+1B4h] [rbp+B4h]
  unsigned int v1679; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1680; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1681; // [rsp+1C0h] [rbp+C0h]
  unsigned int v1682; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1683; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1684; // [rsp+1CCh] [rbp+CCh]
  unsigned int v1685; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1686; // [rsp+1D4h] [rbp+D4h] BYREF
  unsigned int v1687; // [rsp+1D8h] [rbp+D8h]
  unsigned int v1688; // [rsp+1DCh] [rbp+DCh] BYREF
  int v1689; // [rsp+1E0h] [rbp+E0h]
  unsigned int v1690; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1691; // [rsp+1ECh] [rbp+ECh]
  unsigned int v1692; // [rsp+1F0h] [rbp+F0h] BYREF
  int v1693; // [rsp+1F8h] [rbp+F8h]
  unsigned int v1694; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1695; // [rsp+204h] [rbp+104h]
  unsigned int v1696; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1697; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1698; // [rsp+210h] [rbp+110h]
  unsigned int v1699; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v1700; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1701; // [rsp+21Ch] [rbp+11Ch] BYREF
  unsigned int v1702; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1703; // [rsp+224h] [rbp+124h] BYREF
  SIZE_T v1704; // [rsp+228h] [rbp+128h]
  unsigned int v1705; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1706; // [rsp+234h] [rbp+134h] BYREF
  int v1707; // [rsp+238h] [rbp+138h]
  unsigned int v1708; // [rsp+23Ch] [rbp+13Ch]
  int v1709; // [rsp+240h] [rbp+140h]
  unsigned int v1710; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1711; // [rsp+248h] [rbp+148h]
  unsigned int v1712; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1713; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1714; // [rsp+254h] [rbp+154h]
  unsigned int v1715; // [rsp+258h] [rbp+158h] BYREF
  _DWORD v1716[2]; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1717; // [rsp+264h] [rbp+164h] BYREF
  int v1718; // [rsp+268h] [rbp+168h]
  int v1719; // [rsp+26Ch] [rbp+16Ch]
  int v1720; // [rsp+270h] [rbp+170h]
  int v1721; // [rsp+274h] [rbp+174h]
  unsigned int v1722; // [rsp+278h] [rbp+178h]
  int v1723; // [rsp+27Ch] [rbp+17Ch]
  int v1724; // [rsp+280h] [rbp+180h]
  unsigned int v1725; // [rsp+284h] [rbp+184h]
  int v1726; // [rsp+288h] [rbp+188h]
  unsigned int v1727; // [rsp+28Ch] [rbp+18Ch] BYREF
  unsigned int v1728; // [rsp+290h] [rbp+190h] BYREF
  unsigned int v1729; // [rsp+294h] [rbp+194h] BYREF
  unsigned int v1730; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v1731; // [rsp+29Ch] [rbp+19Ch] BYREF
  _DWORD v1732[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v1733; // [rsp+2A8h] [rbp+1A8h]
  unsigned int v1734; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int v1735; // [rsp+2B4h] [rbp+1B4h]
  unsigned int v1736; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v1737; // [rsp+2BCh] [rbp+1BCh] BYREF
  unsigned int v1738; // [rsp+2C0h] [rbp+1C0h]
  unsigned int v1739; // [rsp+2C4h] [rbp+1C4h] BYREF
  unsigned int v1740; // [rsp+2C8h] [rbp+1C8h] BYREF
  unsigned int v1741; // [rsp+2CCh] [rbp+1CCh]
  unsigned int v1742; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int v1743; // [rsp+2D4h] [rbp+1D4h] BYREF
  unsigned int v1744; // [rsp+2D8h] [rbp+1D8h] BYREF
  _DWORD v1745[2]; // [rsp+2DCh] [rbp+1DCh] BYREF
  SIZE_T v1746; // [rsp+2E4h] [rbp+1E4h]
  unsigned int v1747; // [rsp+2ECh] [rbp+1ECh] BYREF
  unsigned int v1748; // [rsp+2F0h] [rbp+1F0h] BYREF
  int v1749; // [rsp+2F4h] [rbp+1F4h]
  unsigned int v1750; // [rsp+2F8h] [rbp+1F8h]
  int v1751; // [rsp+2FCh] [rbp+1FCh]
  unsigned int v1752; // [rsp+300h] [rbp+200h] BYREF
  unsigned int v1753; // [rsp+304h] [rbp+204h]
  unsigned int v1754; // [rsp+308h] [rbp+208h] BYREF
  unsigned int v1755; // [rsp+30Ch] [rbp+20Ch] BYREF
  unsigned int v1756; // [rsp+310h] [rbp+210h]
  _DWORD v1757[2]; // [rsp+314h] [rbp+214h] BYREF
  _DWORD v1758[2]; // [rsp+31Ch] [rbp+21Ch] BYREF
  int v1759; // [rsp+324h] [rbp+224h]
  int v1760; // [rsp+328h] [rbp+228h]
  unsigned int v1761; // [rsp+32Ch] [rbp+22Ch]
  PackageOrigin origin; // [rsp+330h] [rbp+230h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+334h] [rbp+234h] BYREF
  int v1764; // [rsp+338h] [rbp+238h] BYREF
  unsigned int v1765; // [rsp+33Ch] [rbp+23Ch] BYREF
  _DWORD *v1766; // [rsp+340h] [rbp+240h] BYREF
  LPVOID v1767; // [rsp+348h] [rbp+248h]
  bool *v1768; // [rsp+350h] [rbp+250h]
  __int64 v1769; // [rsp+358h] [rbp+258h]
  __int64 v1770; // [rsp+360h] [rbp+260h] BYREF
  int *v1771; // [rsp+368h] [rbp+268h] BYREF
  __int64 v1772; // [rsp+370h] [rbp+270h]
  LPVOID lpMem; // [rsp+378h] [rbp+278h]
  __int64 v1774; // [rsp+380h] [rbp+280h]
  wchar_t *String1; // [rsp+388h] [rbp+288h] BYREF
  wchar_t *v1776; // [rsp+390h] [rbp+290h] BYREF
  __int64 v1777; // [rsp+398h] [rbp+298h] BYREF
  __int64 v1778; // [rsp+3A0h] [rbp+2A0h] BYREF
  _OWORD *v1779; // [rsp+3A8h] [rbp+2A8h]
  _QWORD *v1780; // [rsp+3B0h] [rbp+2B0h]
  unsigned __int64 v1781; // [rsp+3B8h] [rbp+2B8h]
  __int64 v1782; // [rsp+3C0h] [rbp+2C0h] BYREF
  unsigned int *v1783; // [rsp+3C8h] [rbp+2C8h] BYREF
  unsigned int *v1784; // [rsp+3D0h] [rbp+2D0h] BYREF
  unsigned __int64 v1785; // [rsp+3D8h] [rbp+2D8h]
  unsigned int *v1786; // [rsp+3E0h] [rbp+2E0h] BYREF
  void *v1787; // [rsp+3E8h] [rbp+2E8h] BYREF
  unsigned __int64 v1788; // [rsp+3F0h] [rbp+2F0h]
  int (__fastcall ***v1789)(_QWORD, void *, __int64 *); // [rsp+3F8h] [rbp+2F8h] BYREF
  int *v1790; // [rsp+400h] [rbp+300h]
  SIZE_T v1791; // [rsp+408h] [rbp+308h]
  __int64 *v1792; // [rsp+410h] [rbp+310h]
  __int64 v1793; // [rsp+418h] [rbp+318h]
  _OWORD *v1794; // [rsp+420h] [rbp+320h]
  __int64 v1795; // [rsp+428h] [rbp+328h]
  void *v1796; // [rsp+430h] [rbp+330h] BYREF
  unsigned int *v1797; // [rsp+438h] [rbp+338h]
  _DWORD *v1798; // [rsp+440h] [rbp+340h]
  unsigned int *v1799; // [rsp+448h] [rbp+348h] BYREF
  _DWORD *v1800; // [rsp+450h] [rbp+350h] BYREF
  HMODULE phModule; // [rsp+458h] [rbp+358h] BYREF
  void *v1802; // [rsp+460h] [rbp+360h] BYREF
  LPVOID v1803; // [rsp+468h] [rbp+368h]
  __int64 v1804[2]; // [rsp+470h] [rbp+370h] BYREF
  void *v1805; // [rsp+480h] [rbp+380h] BYREF
  unsigned __int64 v1806; // [rsp+488h] [rbp+388h] BYREF
  unsigned __int64 v1807; // [rsp+490h] [rbp+390h] BYREF
  unsigned int *v1808; // [rsp+498h] [rbp+398h] BYREF
  _DWORD *v1809; // [rsp+4A0h] [rbp+3A0h] BYREF
  _DWORD *v1810; // [rsp+4A8h] [rbp+3A8h]
  int *v1811; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int64 v1812; // [rsp+4B8h] [rbp+3B8h] BYREF
  __int64 v1813; // [rsp+4C0h] [rbp+3C0h]
  int *v1814; // [rsp+4C8h] [rbp+3C8h] BYREF
  int *v1815; // [rsp+4D0h] [rbp+3D0h]
  _QWORD v1816[2]; // [rsp+4D8h] [rbp+3D8h] BYREF
  int *v1817; // [rsp+4E8h] [rbp+3E8h] BYREF
  int *v1818; // [rsp+4F0h] [rbp+3F0h]
  unsigned int *v1819; // [rsp+4F8h] [rbp+3F8h] BYREF
  unsigned int *v1820; // [rsp+500h] [rbp+400h]
  __int64 v1821; // [rsp+508h] [rbp+408h] BYREF
  LPVOID v1822; // [rsp+510h] [rbp+410h]
  __int64 v1823; // [rsp+518h] [rbp+418h]
  void **v1824; // [rsp+520h] [rbp+420h] BYREF
  LPVOID v1825; // [rsp+528h] [rbp+428h]
  __int64 v1826; // [rsp+530h] [rbp+430h]
  _DWORD *v1827; // [rsp+538h] [rbp+438h] BYREF
  void *v1828; // [rsp+540h] [rbp+440h] BYREF
  unsigned __int64 v1829; // [rsp+548h] [rbp+448h]
  void **v1830; // [rsp+550h] [rbp+450h] BYREF
  LPVOID v1831; // [rsp+558h] [rbp+458h] BYREF
  void *v1832; // [rsp+560h] [rbp+460h]
  __int64 v1833; // [rsp+568h] [rbp+468h]
  __int64 v1834; // [rsp+570h] [rbp+470h] BYREF
  __int64 v1835; // [rsp+578h] [rbp+478h] BYREF
  __int64 v1836; // [rsp+580h] [rbp+480h] BYREF
  unsigned int *v1837; // [rsp+588h] [rbp+488h] BYREF
  __int64 v1838; // [rsp+590h] [rbp+490h] BYREF
  unsigned int *v1839; // [rsp+598h] [rbp+498h] BYREF
  unsigned int *v1840; // [rsp+5A0h] [rbp+4A0h] BYREF
  __int64 v1841; // [rsp+5A8h] [rbp+4A8h] BYREF
  LPVOID v1842; // [rsp+5B0h] [rbp+4B0h]
  __int64 v1843; // [rsp+5B8h] [rbp+4B8h]
  _OWORD *v1844; // [rsp+5C0h] [rbp+4C0h]
  _QWORD *v1845; // [rsp+5C8h] [rbp+4C8h]
  unsigned __int64 v1846; // [rsp+5D0h] [rbp+4D0h]
  _DWORD *v1847; // [rsp+5D8h] [rbp+4D8h] BYREF
  unsigned int *v1848; // [rsp+5E0h] [rbp+4E0h] BYREF
  unsigned __int64 v1849; // [rsp+5E8h] [rbp+4E8h]
  unsigned int *v1850; // [rsp+5F0h] [rbp+4F0h] BYREF
  LPVOID v1851; // [rsp+5F8h] [rbp+4F8h]
  unsigned __int64 v1852; // [rsp+600h] [rbp+500h]
  void *v1853; // [rsp+608h] [rbp+508h] BYREF
  WCHAR *v1854; // [rsp+610h] [rbp+510h]
  void *v1855[6]; // [rsp+618h] [rbp+518h] BYREF
  void *v1856; // [rsp+648h] [rbp+548h] BYREF
  unsigned int *v1857; // [rsp+650h] [rbp+550h]
  unsigned int *v1858; // [rsp+658h] [rbp+558h]
  unsigned int *v1859; // [rsp+660h] [rbp+560h] BYREF
  unsigned int *v1860; // [rsp+668h] [rbp+568h] BYREF
  HMODULE hModule; // [rsp+670h] [rbp+570h] BYREF
  void *v1862; // [rsp+678h] [rbp+578h] BYREF
  LPVOID v1863; // [rsp+680h] [rbp+580h]
  unsigned __int64 v1864; // [rsp+688h] [rbp+588h]
  void *v1865; // [rsp+690h] [rbp+590h] BYREF
  unsigned __int64 v1866; // [rsp+698h] [rbp+598h] BYREF
  unsigned __int64 v1867; // [rsp+6A0h] [rbp+5A0h] BYREF
  unsigned __int64 v1868; // [rsp+6A8h] [rbp+5A8h] BYREF
  _QWORD v1869[2]; // [rsp+6B0h] [rbp+5B0h] BYREF
  _QWORD v1870[3]; // [rsp+6C0h] [rbp+5C0h] BYREF
  __int64 (__fastcall ***v1871)(_QWORD, _QWORD, _QWORD); // [rsp+6D8h] [rbp+5D8h] BYREF
  __int64 v1872; // [rsp+6E0h] [rbp+5E0h] BYREF
  __int64 (__fastcall ***v1873)(_QWORD, _QWORD, _QWORD); // [rsp+6E8h] [rbp+5E8h] BYREF
  __int64 v1874; // [rsp+6F0h] [rbp+5F0h] BYREF
  HSTRING v1875; // [rsp+6F8h] [rbp+5F8h] BYREF
  PWSTR packageFamilyName; // [rsp+700h] [rbp+600h] BYREF
  __int64 (__fastcall ***v1877)(_QWORD, _QWORD, _QWORD); // [rsp+708h] [rbp+608h] BYREF
  __int64 v1878[2]; // [rsp+710h] [rbp+610h] BYREF
  _OWORD *v1879; // [rsp+720h] [rbp+620h] BYREF
  unsigned __int64 *v1880; // [rsp+730h] [rbp+630h] BYREF
  _QWORD *v1881; // [rsp+740h] [rbp+640h] BYREF
  _OWORD *v1882; // [rsp+750h] [rbp+650h] BYREF
  unsigned int v1883; // [rsp+758h] [rbp+658h]
  _DWORD v1884[3]; // [rsp+75Ch] [rbp+65Ch] BYREF
  LPVOID v1885[2]; // [rsp+768h] [rbp+668h]
  _DWORD *v1886; // [rsp+780h] [rbp+680h] BYREF
  __int128 v1887; // [rsp+788h] [rbp+688h] BYREF
  _QWORD *v1888; // [rsp+7A0h] [rbp+6A0h] BYREF
  unsigned __int64 *v1889; // [rsp+7B0h] [rbp+6B0h] BYREF
  void *v1890; // [rsp+7C0h] [rbp+6C0h] BYREF
  int *v1891; // [rsp+7D0h] [rbp+6D0h] BYREF
  _DWORD *v1892; // [rsp+7E0h] [rbp+6E0h] BYREF
  __int128 v1893; // [rsp+7E8h] [rbp+6E8h]
  __int128 v1894; // [rsp+7F8h] [rbp+6F8h]
  int *v1895; // [rsp+810h] [rbp+710h] BYREF
  LPVOID v1896[2]; // [rsp+818h] [rbp+718h]
  unsigned int v1897; // [rsp+828h] [rbp+728h]
  _DWORD v1898[3]; // [rsp+82Ch] [rbp+72Ch] BYREF
  __int128 v1899; // [rsp+838h] [rbp+738h]
  __int128 v1900; // [rsp+848h] [rbp+748h]
  __int64 v1901; // [rsp+858h] [rbp+758h] BYREF
  unsigned __int64 v1902; // [rsp+860h] [rbp+760h]
  __int64 *v1903; // [rsp+868h] [rbp+768h]
  unsigned int v1904; // [rsp+870h] [rbp+770h] BYREF
  char v1905; // [rsp+874h] [rbp+774h]
  _QWORD v1906[2]; // [rsp+878h] [rbp+778h] BYREF
  int v1907; // [rsp+888h] [rbp+788h]
  unsigned int v1908; // [rsp+88Ch] [rbp+78Ch]
  int v1909; // [rsp+890h] [rbp+790h]
  _QWORD v1910[2]; // [rsp+898h] [rbp+798h] BYREF
  int v1911; // [rsp+8A8h] [rbp+7A8h]
  unsigned int v1912; // [rsp+8ACh] [rbp+7ACh]
  int v1913; // [rsp+8B0h] [rbp+7B0h]
  _QWORD v1914[14]; // [rsp+8C0h] [rbp+7C0h] BYREF
  _QWORD v1915[14]; // [rsp+930h] [rbp+830h] BYREF
  _QWORD v1916[14]; // [rsp+9A0h] [rbp+8A0h] BYREF
  _QWORD v1917[14]; // [rsp+A10h] [rbp+910h] BYREF
  _QWORD v1918[14]; // [rsp+A80h] [rbp+980h] BYREF
  _QWORD v1919[14]; // [rsp+AF0h] [rbp+9F0h] BYREF
  _QWORD v1920[14]; // [rsp+B60h] [rbp+A60h] BYREF
  _QWORD v1921[14]; // [rsp+BD0h] [rbp+AD0h] BYREF
  _QWORD v1922[28]; // [rsp+C40h] [rbp+B40h] BYREF
  __int64 v1923; // [rsp+D20h] [rbp+C20h]
  unsigned __int64 v1924; // [rsp+D28h] [rbp+C28h]
  unsigned __int64 v1925; // [rsp+D30h] [rbp+C30h]
  __int64 v1926; // [rsp+D38h] [rbp+C38h]
  __int128 v1927; // [rsp+D40h] [rbp+C40h] BYREF
  _DWORD v1928[2]; // [rsp+D50h] [rbp+C50h] BYREF
  unsigned __int64 v1929; // [rsp+D58h] [rbp+C58h]
  __int128 v1930; // [rsp+D60h] [rbp+C60h] BYREF
  __int128 v1931; // [rsp+D70h] [rbp+C70h] BYREF
  __int128 v1932; // [rsp+D80h] [rbp+C80h] BYREF
  char v1933[12]; // [rsp+D90h] [rbp+C90h] BYREF
  unsigned int v1934; // [rsp+D9Ch] [rbp+C9Ch]
  HSTRING string; // [rsp+DB0h] [rbp+CB0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+DB8h] [rbp+CB8h] BYREF
  HSTRING v1937; // [rsp+DD0h] [rbp+CD0h] BYREF
  HSTRING v1938; // [rsp+DF0h] [rbp+CF0h] BYREF
  HSTRING v1939; // [rsp+E10h] [rbp+D10h] BYREF
  __int128 v1940; // [rsp+E30h] [rbp+D30h] BYREF
  __int128 v1941; // [rsp+E40h] [rbp+D40h] BYREF
  __int64 v1942; // [rsp+E50h] [rbp+D50h]
  __int128 v1943; // [rsp+E58h] [rbp+D58h] BYREF
  __int128 v1944; // [rsp+E68h] [rbp+D68h] BYREF
  __int64 v1945; // [rsp+E78h] [rbp+D78h]
  __int128 v1946; // [rsp+E80h] [rbp+D80h] BYREF
  __int128 v1947; // [rsp+E90h] [rbp+D90h]
  __int64 v1948; // [rsp+EA0h] [rbp+DA0h]
  int v1949; // [rsp+EA8h] [rbp+DA8h]
  __int128 v1950; // [rsp+EB0h] [rbp+DB0h] BYREF
  __int128 v1951; // [rsp+EC0h] [rbp+DC0h]
  __int64 v1952; // [rsp+ED0h] [rbp+DD0h]
  int v1953; // [rsp+ED8h] [rbp+DD8h]
  __int128 v1954; // [rsp+EE0h] [rbp+DE0h] BYREF
  __int128 v1955; // [rsp+EF0h] [rbp+DF0h]
  __int64 v1956; // [rsp+F00h] [rbp+E00h]
  int v1957; // [rsp+F08h] [rbp+E08h]
  __int128 v1958; // [rsp+F10h] [rbp+E10h] BYREF
  __int128 v1959; // [rsp+F20h] [rbp+E20h]
  __int64 v1960; // [rsp+F30h] [rbp+E30h]
  int v1961; // [rsp+F38h] [rbp+E38h]
  __int128 v1962; // [rsp+F40h] [rbp+E40h] BYREF
  __int128 v1963; // [rsp+F50h] [rbp+E50h]
  __int64 v1964; // [rsp+F60h] [rbp+E60h]
  int v1965; // [rsp+F68h] [rbp+E68h]
  _DWORD v1966[24]; // [rsp+F70h] [rbp+E70h] BYREF
  _DWORD v1967[24]; // [rsp+FD0h] [rbp+ED0h] BYREF
  _DWORD v1968[24]; // [rsp+1030h] [rbp+F30h] BYREF
  _DWORD v1969[56]; // [rsp+1090h] [rbp+F90h] BYREF
  _QWORD v1970[6]; // [rsp+1170h] [rbp+1070h] BYREF
  int v1971; // [rsp+11A0h] [rbp+10A0h] BYREF
  __int128 v1972; // [rsp+11A8h] [rbp+10A8h]
  __int128 v1973; // [rsp+11B8h] [rbp+10B8h]
  __int128 v1974; // [rsp+11C8h] [rbp+10C8h]
  __int64 v1975; // [rsp+11D8h] [rbp+10D8h]
  _QWORD v1976[20]; // [rsp+11E0h] [rbp+10E0h]
  _WORD v1977[8]; // [rsp+1280h] [rbp+1180h] BYREF
  _BYTE v1978[176]; // [rsp+1290h] [rbp+1190h] BYREF
  WCHAR Filename[264]; // [rsp+1340h] [rbp+1240h] BYREF
  _UNKNOWN *retaddr; // [rsp+1588h] [rbp+1488h]

  v3 = a3;
  v1768 = a3;
  v4 = a1;
  v1769 = a1;
  *a3 = 0;
  v5 = 0LL;
  v1770 = 0LL;
  if ( WindowsCreateStringReference(L"windows.mediaPlayback", 0x15u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  MediaComponentPackageInfo = GetMediaComponentPackageInfo(0LL, string, &v1770);
  v7 = MediaComponentPackageInfo;
  if ( MediaComponentPackageInfo < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      264,
      (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      MediaComponentPackageInfo);
    goto LABEL_13;
  }
  v1657 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1770 + 56LL))(v1770, &v1657);
  v7 = v8;
  if ( v8 < 0 )
  {
    sub_18004BD84((int)retaddr, 267, (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h", v8);
    goto LABEL_13;
  }
  v1658 = 0;
  v1771 = 0LL;
  v7 = 0;
  v1659 = 0;
  v1660 = 0;
  v1661 = 0;
  v1654 = 0LL;
  v1662 = 0;
  while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
    ;
  v1772 = 4LL;
  v1653 = -1;
  v12 = dword_18019E4C8;
  if ( dword_18019E4C8 )
    goto LABEL_63;
  v1641 = 0;
  v1564 = 0;
  lpMem = 0LL;
  v13 = (char *)sub_180055F40(0x338uLL);
  v1475 = (WCHAR *)v13;
  if ( v13 )
  {
    v14 = -1;
    v15 = 0;
    v16 = 0;
    v17 = v13 + 7;
    v18 = (unsigned __int8 *)&unk_18015F1E2;
    v19 = 103LL;
    v20 = 0;
    do
    {
      v21 = v18[1] | ((*v18 | ((*(v18 - 1) | (*(v18 - 2) << 8)) << 8)) << 8);
      v22 = v18[5] | ((v18[4] | ((v18[3] | (v18[2] << 8)) << 8)) << 8);
      v23 = v21 ^ v16;
      v18 += 8;
      v24 = v23 ^ v22 ^ v15 ^ 0xAC987321;
      v25 = (4991 * __ROL4__(v24 + 1419157410, 5) + __ROL4__(v24, 10)) ^ v23;
      v26 = (43881 * __ROR4__(v25 + 133239679, 9) - __ROL4__(v25, 2)) ^ v24;
      v27 = (24670 * v26 - (v26 >> 13) - 123127970) ^ v25;
      v28 = (2033 * __ROL4__(v27 ^ 0xAB69, 6) - __ROL4__(v27, 2)) ^ v26;
      v29 = (133239679 - (v28 ^ 0xAB69605E)) ^ v27;
      v30 = (43881 * (v29 ^ 0x137F)) ^ __ROR4__(v29, 6) ^ v28;
      v31 = (24670 * __ROR4__(v30 + 133239679, 15) + __ROL4__(v30, 2)) ^ v29;
      v32 = (2033 * __ROR4__(v31 + 1419157410, 14) - __ROL4__(v31, 8)) ^ v30;
      v33 = (4991 * __ROR4__(v32 ^ 0xAB69605E, 12)) ^ __ROR4__(v32, 10) ^ v31;
      v34 = (v33 >> 10) ^ (43881 * (v33 ^ 0x7F1)) ^ v32;
      v35 = (2033 * (__ROR4__(~v34, 5) + 24670)) ^ v33;
      v36 = v34 ^ (v35 - 2033) ^ 0xAB69605E;
      v37 = ((v36 >> 2) + 4991 * __ROL4__(v34 ^ (v35 - 2033) ^ 0xAB6967AF, 2)) ^ v35;
      v38 = (43881 * __ROR4__(v37 - 133239679, 6) + __ROL4__(v37, 7)) ^ v36;
      v39 = (24670 * (v38 ^ 0x137F) + __ROR4__(v38, 9)) ^ v37;
      v40 = (2033 * __ROL4__(v39 ^ 0xAB69, 5) + __ROL4__(v39, 7)) ^ v38;
      v41 = v40 ^ v39 ^ 0xAC987321;
      v42 = (4991 * __ROR4__(v41, 3) - 219010071) ^ v40;
      v43 = (24670 * __ROR4__(v42 - 133239679, 1) - __ROR4__(v42, 6)) ^ v41;
      v44 = (2033 * __ROL4__(v43 - 1419157410, 3) + __ROL4__(v43, 14)) ^ v42;
      v45 = (4991 * __ROL4__(v44 - 1419157410, 15) - __ROR4__(v44, 14)) ^ v43;
      v46 = (v45 >> 3) ^ (43881 * (v45 ^ 0x605E)) ^ v44;
      v47 = v20 ^ (24670 * __ROL4__(v46 ^ 0x7F1137F, 4)) ^ __ROL4__(v46, 2) ^ v45;
      v48 = v14 ^ v46;
      *(v17 - 4) = v47;
      v49 = __ROR4__(v47, 8);
      *v17 = v48;
      v50 = __ROR4__(v48, 8);
      *(v17 - 5) = v49;
      v51 = __ROR4__(v49, 8);
      *(v17 - 1) = v50;
      v52 = __ROR4__(v50, 8);
      *(v17 - 6) = v51;
      v53 = __ROR4__(v51, 8);
      *(v17 - 2) = v52;
      v54 = __ROR4__(v52, 8);
      *(v17 - 7) = v53;
      *(v17 - 3) = v54;
      v16 = __ROR4__(v53, 8);
      v15 = __ROR4__(v54, 8);
      v20 = v21;
      v14 = v22;
      v17 += 8;
      --v19;
    }
    while ( v19 );
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v7 = 0;
    v3 = v1768;
    v4 = v1769;
    v58 = v1475;
    v59 = 0;
    do
    {
      v56 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v1475 + v55)), v56);
      v60 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v1475 + v55 + 16)), v57);
      v57 = v60;
      v55 += 32LL;
    }
    while ( v55 < 0x320 );
    v61 = _mm_xor_si128(v60, v56);
    v62 = _mm_xor_si128(v61, _mm_srli_si128(v61, 8));
    v63 = _mm_xor_si128(v62, _mm_srli_si128(v62, 4));
    v64 = _mm_xor_si128(v63, _mm_srli_si128(v63, 2));
    for ( i = _mm_cvtsi128_si32(_mm_xor_si128(v64, _mm_srli_si128(v64, 1))); v55 < 0x338; ++v55 )
      i ^= *((_BYTE *)v1475 + v55);
    if ( i == 64LL )
    {
      lpMem = v1475;
      v1774 = 824LL;
      *((_BYTE *)v1475 + 823) = 0;
      v66 = (HMODULE *)&unk_18019EA60;
      memset(&unk_18019EA60, 0, 0x60uLL);
      if ( !*(_BYTE *)v1475 )
        goto LABEL_54;
      while ( 1 )
      {
        v67 = v58;
        v68 = -1LL;
        do
          ++v68;
        while ( v58[v68] );
        v69 = &v58[v68];
        v70 = (char *)&unk_18019EA60 + 24 * v1564;
        if ( !GetModuleHandleExW(0, v67, (HMODULE *)v70) )
          break;
        v59 = 0;
        if ( **(_WORD **)v70 == 23117 )
        {
          v71 = *(int *)(*(_QWORD *)v70 + 60LL);
          if ( (unsigned int)v71 < 0x10000000 )
          {
            v72 = *(_QWORD *)v70 + v71;
            if ( v72 >= *(_QWORD *)v70 )
            {
              if ( *(_DWORD *)v72 == 17744 )
              {
                if ( ((*(_WORD *)(v72 + 24) - 267) & 0xFEFF) != 0 )
                {
                  v59 = -1073741811;
                }
                else
                {
                  *(_QWORD *)(v70 + 12) = *(_QWORD *)(v72 + 136);
                  *((_DWORD *)v70 + 2) = *(_DWORD *)(v72 + 80);
                }
              }
              else
              {
                v59 = -1073741701;
              }
            }
            else
            {
              v59 = -1073741701;
            }
          }
          else
          {
            v59 = -1073741701;
          }
        }
        else
        {
          v59 = -1073741701;
        }
        v1642 = *(_DWORD *)(v69 + 1);
        v58 = v69 + 3;
        v73 = 0;
        for ( j = 0; v73 < v1642; j = v73 )
        {
          v74 = (const CHAR *)v58;
          v75 = -1LL;
          do
            ++v75;
          while ( *((_BYTE *)v58 + v75) );
          v58 = (WCHAR *)((char *)v58 + v75 + 1);
          if ( v59 >= 0 )
          {
            ProcAddress = GetProcAddress(*(HMODULE *)v70, v74);
            if ( !ProcAddress )
              goto LABEL_53;
            off_18019C000[v1641] = ProcAddress;
            v73 = j;
          }
          ++v1641;
          ++v73;
        }
        ++v1564;
        if ( !*(_BYTE *)v58 )
          goto LABEL_53;
      }
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v1475);
    }
  }
  v59 = -1073741702;
LABEL_53:
  v66 = (HMODULE *)&unk_18019EA60;
LABEL_54:
  if ( lpMem )
  {
    v78 = GetProcessHeap();
    HeapFree(v78, 0, lpMem);
  }
  if ( v59 >= 0 )
  {
    v12 = dword_18019E4C8;
    v5 = 0LL;
LABEL_63:
    dword_18019E4C8 = v12 + 1;
    goto LABEL_64;
  }
  v5 = 4LL;
  do
  {
    if ( *v66 )
      FreeLibrary(*v66);
    v66 += 3;
    --v5;
  }
  while ( v5 );
  memset(&unk_18019EA60, 0, 0x60uLL);
  off_18019C000[0] = sub_180138200;
  off_18019C008[0] = sub_180138200;
  off_18019C010[0] = sub_180138200;
  off_18019C018[0] = sub_180138200;
  off_18019C020[0] = sub_180138200;
  off_18019C028[0] = sub_180138200;
  off_18019C030[0] = sub_180138200;
  off_18019C038[0] = sub_180138200;
  off_18019C040[0] = sub_18004CB50;
  off_18019C048[0] = sub_18004CB50;
  off_18019C050[0] = sub_180138200;
  off_18019C058[0] = sub_180138200;
  off_18019C060[0] = sub_180138200;
  off_18019C068[0] = sub_180138200;
  off_18019C070[0] = sub_180138200;
  off_18019C078[0] = sub_180138200;
  off_18019C080[0] = sub_18004CB50;
  off_18019C088[0] = sub_180138200;
  off_18019C090[0] = sub_180138200;
  off_18019C098[0] = sub_180138200;
  off_18019C0A0[0] = sub_180138200;
  off_18019C0A8[0] = sub_180138200;
  off_18019C0B0[0] = sub_180138200;
  off_18019C0B8[0] = sub_18004DA20;
  off_18019C0C0[0] = sub_180138200;
  off_18019C0C8 = sub_180138200;
  qword_18019C0D0 = 0LL;
  off_18019C0D8[0] = sub_18004CB50;
  off_18019C0E0[0] = sub_180138200;
  off_18019C0E8[0] = sub_180138200;
  off_18019C0F0[0] = sub_180138200;
  off_18019C0F8[0] = sub_180138200;
  off_18019C100[0] = sub_180138200;
  off_18019C108[0] = sub_18004CB50;
  off_18019C110[0] = sub_180138200;
  off_18019C118[0] = sub_180138200;
  off_18019C120[0] = sub_180138200;
  off_18019C128[0] = sub_180138200;
  off_18019C130[0] = sub_180138200;
  off_18019C138[0] = sub_180138200;
  off_18019C140[0] = sub_18004CB50;
  off_18019C148[0] = sub_18004CB50;
  off_18019C150 = sub_18004CB50;
  off_18019C158[0] = sub_18004CB50;
  off_18019C160[0] = sub_180138200;
  off_18019C168 = sub_180138200;
LABEL_64:
  _InterlockedExchange(&dword_18019EB40, 0);
  String1 = 0LL;
  v1776 = 0LL;
  v79 = 0;
  v80 = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_110;
  v81 = off_18019C110[0]();
  v1476 = (LPCWSTR)v81;
  if ( !v81 )
  {
    LastError = GetLastError();
    v80 = LastError;
    if ( LastError <= 0 )
      goto LABEL_68;
    goto LABEL_67;
  }
  v83 = 0LL;
  while ( 1 )
  {
    v1777 = v5;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))off_18019C130[0])(
           v81,
           2LL,
           v5,
           v83,
           &v1663) )
    {
      v1777 = 0LL;
      String1 = (wchar_t *)v5;
      goto LABEL_83;
    }
    v84 = GetLastError();
    if ( v84 != 122 )
      break;
    if ( v5 )
      goto LABEL_80;
    v5 = (__int64)sub_180055F40(v1663);
    sub_1800685D0(&v1777);
    if ( !v5 )
    {
      v1777 = 0LL;
      v80 = -2147024882;
      goto LABEL_84;
    }
    v83 = v1663;
    v81 = (__int64)v1476;
  }
  if ( !v84 )
  {
LABEL_80:
    v80 = -2147467259;
    goto LABEL_83;
  }
  if ( v84 > 0 )
    v80 = (unsigned __int16)v84 | 0x80070000;
  else
    v80 = v84;
LABEL_83:
  v5 = 0LL;
LABEL_84:
  sub_1800685D0(&v1777);
  if ( v80 >= 0 )
  {
    CurrentThreadId = GetCurrentThreadId();
    v86 = ((__int64 (__fastcall *)(_QWORD))off_18019C128[0])(CurrentThreadId);
    v1477 = (LPCWSTR)v86;
    if ( !v86 )
      goto LABEL_92;
    v80 = 0;
    v87 = 0LL;
    while ( 1 )
    {
      v1778 = v5;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))off_18019C130[0])(
             v86,
             2LL,
             v5,
             v87,
             &v1664) )
      {
        v1778 = 0LL;
        v1776 = (wchar_t *)v5;
        goto LABEL_101;
      }
      v88 = GetLastError();
      if ( v88 != 122 )
        break;
      if ( v5 )
        goto LABEL_98;
      v5 = (__int64)sub_180055F40(v1664);
      sub_1800685D0(&v1778);
      if ( !v5 )
      {
        v1778 = 0LL;
        v80 = -2147024882;
        goto LABEL_102;
      }
      v87 = v1664;
      v86 = (__int64)v1477;
    }
    if ( !v88 )
    {
LABEL_98:
      v80 = -2147467259;
      goto LABEL_101;
    }
    v80 = v88 > 0 ? (unsigned __int16)v88 | 0x80070000 : v88;
LABEL_101:
    v5 = 0LL;
LABEL_102:
    sub_1800685D0(&v1778);
    if ( v80 >= 0 )
    {
      if ( String1 && !wcscmp(String1, L"WinSta0") && v1776 && !wcscmp(v1776, L"Default") )
      {
        v1652 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1652) )
        {
          if ( (v1652 & 0xF) == 0 )
            v79 = 1;
          goto LABEL_110;
        }
LABEL_92:
        LastError = GetLastError();
        v80 = LastError;
        if ( LastError <= 0 )
        {
LABEL_68:
          if ( v80 >= 0 )
            v80 = -2147467259;
          goto LABEL_111;
        }
LABEL_67:
        v80 = (unsigned __int16)LastError | 0x80070000;
        goto LABEL_68;
      }
LABEL_110:
      v1662 = v79;
    }
  }
LABEL_111:
  sub_1800685D0(&v1776);
  sub_1800685D0(&String1);
  v90 = v1662;
  if ( v80 < 0 )
    v90 = 0;
  v1662 = v90;
  v91 = LocalAlloc(0x40u, 4uLL);
  v1631 = v91;
  sub_180067CF8(&v1654);
  if ( v91 )
  {
    v1654 = (SIZE_T)v91;
    v1478 = 0LL;
    v1529 = 0LL;
    *(_QWORD *)&v1884[1] = 0LL;
    v1665 = 0;
    *(_OWORD *)v1885 = 0LL;
    v1666 = 0;
    v1779 = &unk_18019D910;
    v95 = GetProcessHeap();
    v96 = HeapAlloc(v95, 8u, 0xA0uLL);
    v1505 = v96;
    if ( !v96 )
      goto LABEL_135;
    v97 = v1779;
    *v96 = *v1779;
    v96[1] = v97[1];
    v96[2] = v97[2];
    v96[3] = v97[3];
    v96[4] = v97[4];
    v96[5] = v97[5];
    v96[6] = v97[6];
    v96[7] = v97[7];
    v96[8] = v97[8];
    v96[9] = v97[9];
    v1478 = (WCHAR *)v96;
    v1780 = &unk_18019D850;
    v98 = GetProcessHeap();
    v99 = HeapAlloc(v98, 8u, 8uLL);
    v1623 = v99;
    if ( !v99 )
    {
LABEL_135:
      v92 = -1073741801;
      goto LABEL_138;
    }
    *v99 = *v1780;
    v1529 = v99;
    v1781 = __rdtsc();
    dwBytes = 0;
    v100 = sub_18005F608(4LL, 4LL, &dwBytes_4);
    v92 = v100;
    v1642 = v100;
    v101 = v1669;
    if ( v100 >= 0 )
      v101 = dwBytes_4;
    v1669 = v101;
    if ( v100 < 0 )
      goto LABEL_726;
    v102 = sub_18005F608(0LL, v101, &dwBytes);
    v92 = v102 | 0x10000000;
    v1642 = v102 | 0x10000000;
    if ( v102 < 0 )
      goto LABEL_726;
    v103 = sub_18005F608((unsigned int)v93, 160LL, &v1670);
    v92 = v103;
    v1642 = v103;
    if ( v103 >= 0 )
      v101 = v1670;
    v1669 = v101;
    if ( v103 < 0 )
      goto LABEL_726;
    v104 = sub_18005F608(dwBytes, v101, &dwBytes);
    v92 = v104 | 0x10000000;
    v1642 = v104 | 0x10000000;
    if ( v104 < 0 )
      goto LABEL_726;
    v105 = sub_18005F608((unsigned int)v93, 8LL, &v1671);
    v92 = v105;
    v1642 = v105;
    if ( v105 >= 0 )
      v101 = v1671;
    v1669 = v101;
    if ( v105 < 0 )
      goto LABEL_726;
    v106 = sub_18005F608(dwBytes, v101, &dwBytes);
    v92 = v106 | 0x10000000;
    v1642 = v106 | 0x10000000;
    if ( v106 < 0 )
      goto LABEL_726;
    v107 = sub_18005F608((unsigned int)v93, 8LL, &v1672);
    v92 = v107;
    v1642 = v107;
    if ( v107 >= 0 )
      v101 = v1672;
    v1669 = v101;
    if ( v107 < 0 )
      goto LABEL_726;
    v108 = sub_18005F608(dwBytes, v101, &dwBytes);
    v92 = v108 | 0x10000000;
    v1642 = v108 | 0x10000000;
    if ( v108 < 0 )
      goto LABEL_726;
    if ( (int)sub_18005F64C(v110, v109, &v1782) < 0 )
    {
      v92 = -1073741762;
LABEL_725:
      v1642 = v92;
      goto LABEL_726;
    }
    v111 = sub_18005F608((unsigned int)v93, (unsigned int)(2 * ++v1782), &v1673);
    v92 = v111;
    v1642 = v111;
    if ( v111 >= 0 )
      v101 = v1673;
    v1669 = v101;
    if ( v111 < 0 )
      goto LABEL_726;
    v112 = sub_18005F608(dwBytes, v101, &dwBytes);
    v92 = v112 | 0x10000000;
    v1642 = v112 | 0x10000000;
    if ( v112 < 0 )
      goto LABEL_726;
    v113 = sub_18005F608((unsigned int)v93, (unsigned int)v93, &v1674);
    v92 = v113;
    v1642 = v113;
    if ( v113 >= 0 )
      v101 = v1674;
    v1669 = v101;
    if ( v113 < 0 )
      goto LABEL_726;
    v114 = sub_18005F608(dwBytes, v101, &dwBytes);
    v92 = v114 | 0x10000000;
    v1642 = v114 | 0x10000000;
    if ( v114 < 0 )
      goto LABEL_726;
    v115 = sub_18005F608((unsigned int)v93, (unsigned int)v93, &v1675);
    v92 = v115;
    v1642 = v115;
    if ( v115 >= 0 )
      v101 = v1675;
    v1669 = v101;
    if ( v115 < 0 )
      goto LABEL_726;
    v116 = sub_18005F608(dwBytes, v101, &dwBytes);
    v92 = v116 | 0x10000000;
    v1642 = v116 | 0x10000000;
    if ( v116 < 0 )
      goto LABEL_726;
    v1884[0] = dwBytes;
    v117 = dwBytes;
    v118 = GetProcessHeap();
    v119 = HeapAlloc(v118, 8u, v117);
    v93 = 4LL;
    if ( !v119 )
    {
      v92 = -1073741801;
      goto LABEL_725;
    }
    *(_QWORD *)&v1884[1] = v119;
    v1883 = 0;
    v1676 = 0;
    v92 = sub_18005F628(v119, 4LL, &v1886);
    v1642 = v92;
    if ( v92 < 0 )
    {
LABEL_726:
      v94 = 1;
      goto LABEL_727;
    }
    if ( v120 + 2 > (_DWORD *)((char *)v120 + v1884[0]) )
    {
      v92 = -1073741789;
      v1642 = -1073741789;
      goto LABEL_726;
    }
    *v120 = v93;
    *v1886 = v1676;
    v121 = ++v1883;
    if ( *(_QWORD *)&v1884[1] )
    {
      v124 = *(unsigned int **)&v1884[1];
      v1783 = *(unsigned int **)&v1884[1];
      v1565 = 0;
      if ( v121 )
      {
        while ( 1 )
        {
          v125 = sub_18005F608((unsigned int)v93, *v124, &v1679);
          v92 = v125;
          v1642 = v125;
          if ( v125 >= 0 )
            v127 = v1679;
          v1678 = v127;
          if ( v125 < 0 )
            break;
          v92 = sub_18005F628(v126, v127, &v1783);
          v1642 = v92;
          if ( v92 < 0 )
            break;
          ++v1565;
          v124 = v1783;
          if ( v1565 >= v121 )
            goto LABEL_168;
        }
      }
      else
      {
LABEL_168:
        v92 = sub_18005F628(v124, v93, &v1879);
        v1642 = v92;
        if ( v92 >= 0 )
        {
          if ( (unsigned __int64)(v128 + 41) > *(_QWORD *)&v1884[1] + (unsigned __int64)v1884[0] )
            goto LABEL_724;
          *v128 = 160;
          v129 = v1879;
          *v1879 = *v1505;
          v129[1] = v1505[1];
          v129[2] = v1505[2];
          v129[3] = v1505[3];
          v129[4] = v1505[4];
          v129[5] = v1505[5];
          v129[6] = v1505[6];
          v129[7] = v1505[7];
          v129[8] = v1505[8];
          v129[9] = v1505[9];
          v121 = ++v1883;
        }
      }
    }
    else
    {
      v122 = sub_18005F608((unsigned int)v93, 160LL, &v1677);
      v92 = v122;
      v1642 = v122;
      v123 = v1678;
      if ( v122 >= 0 )
        v123 = v1677;
      v1678 = v123;
      if ( v122 >= 0 )
      {
        v92 = sub_18005F608(v1884[0], v123, v1884);
        v1642 = v92;
        v121 = v1883;
        if ( v92 >= 0 )
        {
          v121 = ++v1883;
          goto LABEL_172;
        }
      }
    }
    if ( v92 < 0 )
      goto LABEL_726;
LABEL_172:
    if ( *(_QWORD *)&v1884[1] )
    {
      v132 = *(unsigned int **)&v1884[1];
      v1784 = *(unsigned int **)&v1884[1];
      v1566 = 0;
      if ( v121 )
      {
        while ( 1 )
        {
          v133 = sub_18005F608((unsigned int)v93, *v132, &v1682);
          v92 = v133;
          v1642 = v133;
          if ( v133 >= 0 )
            v135 = v1682;
          v1681 = v135;
          if ( v133 < 0 )
            break;
          v92 = sub_18005F628(v134, v135, &v1784);
          v1642 = v92;
          if ( v92 < 0 )
            break;
          ++v1566;
          v132 = v1784;
          if ( v1566 >= v121 )
            goto LABEL_184;
        }
      }
      else
      {
LABEL_184:
        v92 = sub_18005F628(v132, v93, &v1888);
        v1642 = v92;
        if ( v92 >= 0 )
        {
          if ( (unsigned __int64)(v136 + 3) > *(_QWORD *)&v1884[1] + (unsigned __int64)v1884[0] )
            goto LABEL_724;
          *v136 = 8;
          *v1888 = *v1623;
          v121 = ++v1883;
        }
      }
    }
    else
    {
      v130 = sub_18005F608((unsigned int)v93, 8LL, &v1680);
      v92 = v130;
      v1642 = v130;
      v131 = v1681;
      if ( v130 >= 0 )
        v131 = v1680;
      v1681 = v131;
      if ( v130 >= 0 )
      {
        v92 = sub_18005F608(v1884[0], v131, v1884);
        v1642 = v92;
        v121 = v1883;
        if ( v92 >= 0 )
        {
          v121 = ++v1883;
          goto LABEL_188;
        }
      }
    }
    if ( v92 < 0 )
      goto LABEL_726;
LABEL_188:
    v1785 = v1781;
    if ( *(_QWORD *)&v1884[1] )
    {
      v140 = *(unsigned int **)&v1884[1];
      v1786 = *(unsigned int **)&v1884[1];
      v1567 = 0;
      if ( v121 )
      {
        while ( 1 )
        {
          v141 = sub_18005F608((unsigned int)v93, *v140, &v1685);
          v92 = v141;
          v1642 = v141;
          if ( v141 >= 0 )
            v143 = v1685;
          v1684 = v143;
          if ( v141 < 0 )
            break;
          v92 = sub_18005F628(v142, v143, &v1786);
          v1642 = v92;
          if ( v92 < 0 )
            break;
          ++v1567;
          v140 = v1786;
          if ( v1567 >= v121 )
            goto LABEL_200;
        }
      }
      else
      {
LABEL_200:
        v92 = sub_18005F628(v140, v93, &v1889);
        v1642 = v92;
        if ( v92 >= 0 )
        {
          if ( (unsigned __int64)(v144 + 3) > *(_QWORD *)&v1884[1] + (unsigned __int64)v1884[0] )
            goto LABEL_724;
          *v144 = 8;
          v138 = v1785;
          *v1889 = v1785;
          v121 = ++v1883;
        }
      }
    }
    else
    {
      v137 = sub_18005F608((unsigned int)v93, 8LL, &v1683);
      v92 = v137;
      v1642 = v137;
      v139 = v1684;
      if ( v137 >= 0 )
        v139 = v1683;
      v1684 = v139;
      if ( v137 >= 0 )
      {
        v92 = sub_18005F608(v1884[0], v139, v1884);
        v1642 = v92;
        v121 = v1883;
        if ( v92 >= 0 )
        {
          v121 = ++v1883;
          goto LABEL_204;
        }
      }
    }
    if ( v92 < 0 )
      goto LABEL_726;
LABEL_204:
    v145 = sub_18005F64C(v138, v139, v1870);
    v94 = 1;
    if ( v145 < 0 )
    {
      v92 = -1073741762;
      v1642 = -1073741762;
      goto LABEL_727;
    }
    v92 = sub_18005F628(v1870[0], 1LL, v1870);
    v1642 = v92;
    if ( v92 >= 0 )
    {
      if ( !(2 * LODWORD(v1870[0])) )
      {
        v92 = -1073741811;
        goto LABEL_227;
      }
      if ( *(_QWORD *)&v1884[1] )
      {
        v148 = *(unsigned int **)&v1884[1];
        v1840 = *(unsigned int **)&v1884[1];
        v1522 = 0;
        if ( v121 )
        {
          while ( 1 )
          {
            v149 = sub_18005F608((unsigned int)v93, *v148, &v1688);
            v92 = v149;
            v1642 = v149;
            if ( v149 >= 0 )
              v151 = v1688;
            v1687 = v151;
            if ( v149 < 0 )
              break;
            v92 = sub_18005F628(v150, v151, &v1840);
            v1642 = v92;
            if ( v92 < 0 )
              break;
            ++v1522;
            v148 = v1840;
            if ( v1522 >= v121 )
              goto LABEL_221;
          }
        }
        else
        {
LABEL_221:
          v92 = sub_18005F628(v148, v93, &v1890);
          v1642 = v92;
          if ( v92 >= 0 )
          {
            if ( (unsigned __int64)v152 + v153 + 4 > *(_QWORD *)&v1884[1] + (unsigned __int64)v1884[0] )
            {
              v92 = -1073741789;
              v94 = 1;
              goto LABEL_227;
            }
            *v152 = v153;
            memcpy(v1890, L"Kernel-OneCore-DeviceFamilyID", v153);
            v121 = ++v1883;
            v93 = 4LL;
          }
        }
        v94 = 1;
        goto LABEL_228;
      }
      v146 = sub_18005F608((unsigned int)v93, (unsigned int)(2 * LODWORD(v1870[0])), &v1686);
      v92 = v146;
      v1642 = v146;
      v147 = v1687;
      if ( v146 >= 0 )
        v147 = v1686;
      v1687 = v147;
      if ( v146 >= 0 )
      {
        v92 = sub_18005F608(v1884[0], v147, v1884);
        v1642 = v92;
        v121 = v1883;
        if ( v92 >= 0 )
        {
          v121 = ++v1883;
          v92 = 0;
LABEL_227:
          v1642 = v92;
        }
      }
    }
LABEL_228:
    if ( v92 < 0 )
      goto LABEL_727;
    v1689 = v1662;
    if ( *(_QWORD *)&v1884[1] )
    {
      v156 = *(unsigned int **)&v1884[1];
      v1839 = *(unsigned int **)&v1884[1];
      v1568 = 0;
      if ( v121 )
      {
        while ( 1 )
        {
          v157 = sub_18005F608((unsigned int)v93, *v156, &v1692);
          v92 = v157;
          v1642 = v157;
          if ( v157 >= 0 )
            v159 = v1692;
          v1691 = v159;
          if ( v157 < 0 )
            break;
          v92 = sub_18005F628(v158, v159, &v1839);
          v1642 = v92;
          if ( v92 < 0 )
            break;
          ++v1568;
          v156 = v1839;
          if ( v1568 >= v121 )
            goto LABEL_241;
        }
      }
      else
      {
LABEL_241:
        v92 = sub_18005F628(v156, v93, &v1891);
        v1642 = v92;
        if ( v92 >= 0 )
        {
          if ( (unsigned __int64)(v160 + 2) > *(_QWORD *)&v1884[1] + (unsigned __int64)v1884[0] )
            goto LABEL_724;
          *v160 = v93;
          *v1891 = v1689;
          v121 = ++v1883;
        }
      }
      v94 = 1;
    }
    else
    {
      v154 = sub_18005F608((unsigned int)v93, (unsigned int)v93, &v1690);
      v92 = v154;
      v1642 = v154;
      v155 = v1691;
      if ( v154 >= 0 )
        v155 = v1690;
      v1691 = v155;
      if ( v154 >= 0 )
      {
        v92 = sub_18005F608(v1884[0], v155, v1884);
        v1642 = v92;
        v121 = v1883;
        if ( v92 >= 0 )
        {
          v121 = ++v1883;
          goto LABEL_246;
        }
      }
    }
    if ( v92 < 0 )
      goto LABEL_727;
LABEL_246:
    v1693 = v93;
    if ( *(_QWORD *)&v1884[1] )
    {
      v163 = *(unsigned int **)&v1884[1];
      v1837 = *(unsigned int **)&v1884[1];
      v1569 = 0;
      if ( v121 )
      {
        while ( 1 )
        {
          v164 = sub_18005F608((unsigned int)v93, *v163, &v1696);
          v92 = v164;
          v1642 = v164;
          if ( v164 >= 0 )
            v166 = v1696;
          v1695 = v166;
          if ( v164 < 0 )
            break;
          v92 = sub_18005F628(v165, v166, &v1837);
          v1642 = v92;
          if ( v92 < 0 )
            break;
          ++v1569;
          v163 = v1837;
          if ( v1569 >= v121 )
            goto LABEL_258;
        }
      }
      else
      {
LABEL_258:
        v92 = sub_18005F628(v163, v93, &v1892);
        v1642 = v92;
        if ( v92 >= 0 )
        {
          if ( (unsigned __int64)(v167 + 2) > *(_QWORD *)&v1884[1] + (unsigned __int64)v1884[0] )
            goto LABEL_724;
          *v167 = v93;
          *v1892 = v1693;
          v121 = ++v1883;
        }
      }
      v94 = 1;
    }
    else
    {
      v161 = sub_18005F608((unsigned int)v93, (unsigned int)v93, &v1694);
      v92 = v161;
      v1642 = v161;
      v162 = v1695;
      if ( v161 >= 0 )
        v162 = v1694;
      v1695 = v162;
      if ( v161 >= 0 )
      {
        v92 = sub_18005F608(v1884[0], v162, v1884);
        v1642 = v92;
        v121 = v1883;
        if ( v92 >= 0 )
        {
          v121 = ++v1883;
          goto LABEL_263;
        }
      }
    }
    if ( v92 < 0 )
      goto LABEL_727;
LABEL_263:
    v168 = sub_18005F608((unsigned int)v93, (unsigned int)v93, &v1697);
    v92 = v168;
    v1642 = v168;
    v170 = v1698;
    if ( v168 >= 0 )
      v170 = v1697;
    v1698 = v170;
    if ( v168 >= 0 )
    {
      v1699 = v170;
      v171 = sub_18005F608(v169, 8LL, &v1700);
      v92 = v171;
      v1642 = v171;
      v173 = v172;
      if ( v171 >= 0 )
        v173 = v1700;
      v1698 = v173;
      if ( v171 >= 0 )
      {
        v92 = sub_18005F608(v172, v173, &v1699);
        v1642 = v92;
        if ( v92 >= 0 )
        {
          v174 = sub_18005F608((unsigned int)v93, (unsigned int)v93, &v1701);
          v92 = v174;
          v1642 = v174;
          if ( v174 >= 0 )
            v175 = v1701;
          v1698 = v175;
          if ( v174 >= 0 )
          {
            v92 = sub_18005F608(v1699, v175, &v1699);
            v1642 = v92;
            if ( v92 >= 0 )
            {
              v176 = sub_18005F608((unsigned int)v93, (unsigned int)v93, &v1702);
              v92 = v176;
              v1642 = v176;
              if ( v176 >= 0 )
                v177 = v1702;
              v1698 = v177;
              if ( v176 >= 0 )
              {
                v92 = sub_18005F608(v1699, v177, &v1699);
                v1642 = v92;
                if ( v92 >= 0 )
                {
                  v178 = sub_18005F608((unsigned int)v93, (unsigned int)v93, &v1703);
                  v92 = v178;
                  v1642 = v178;
                  if ( v178 >= 0 )
                    v179 = v1703;
                  v1698 = v179;
                  if ( v178 >= 0 )
                  {
                    v92 = sub_18005F608(v1699, v179, &v1699);
                    v1642 = v92;
                    if ( v92 >= 0 )
                    {
                      v180 = sub_18005F608((unsigned int)v93, (unsigned int)v93, &v1655);
                      v92 = v180;
                      v1642 = v180;
                      if ( v180 >= 0 )
                        v181 = v1655;
                      v1698 = v181;
                      if ( v180 >= 0 )
                      {
                        v92 = sub_18005F608(v1699, v181, &v1699);
                        v1642 = v92;
                        v182 = v1655;
                        if ( v92 >= 0 )
                          v182 = v1699;
                        v94 = 1;
LABEL_290:
                        v1570 = v182;
                        if ( v92 >= 0 )
                        {
                          v1506 = 0LL;
                          v1642 = 0;
                          v1767 = 0LL;
                          v1624 = 0LL;
                          v1523 = 0;
                          v1647 = 0LL;
                          v1704 = 0LL;
                          v1646 = 0LL;
                          v1578 = 0LL;
                          v1788 = __rdtsc();
                          v1705 = 8;
                          v185 = sub_18005F608(8LL, v1884[0], &v1705);
                          if ( v185 >= 0 )
                          {
                            v186 = (v1705 + 7) & 0xFFFFFFF8;
                            if ( v186 >= v1705 )
                            {
                              v1705 = (v1705 + 7) & 0xFFFFFFF8;
                              v187 = v186;
                              v188 = GetProcessHeap();
                              v189 = (char *)HeapAlloc(v188, 8u, v187);
                              v190 = v189;
                              if ( v189 )
                              {
                                v1787 = v189;
                                *(_DWORD *)v189 = v1883;
                                v185 = sub_18005F628(v189, 4LL, &v1787);
                                if ( v185 >= 0 )
                                {
                                  v192 = v1787;
                                  *(_DWORD *)v1787 = v1884[0];
                                  v185 = sub_18005F628(v192, v191, &v1787);
                                  if ( v185 >= 0 )
                                  {
                                    *(_QWORD *)&v190[v1705 - 8] = v1788;
                                    memcpy(v1787, *(const void **)&v1884[1], v1884[0]);
                                    v193 = v190;
                                    v1506 = (unsigned __int8 *)v190;
                                    LODWORD(v183) = v1705;
                                    v121 = v1883;
                                    v93 = 4LL;
                                    v184 = v1646;
                                    goto LABEL_302;
                                  }
                                }
                                v194 = GetProcessHeap();
                                HeapFree(v194, 0, v190);
                              }
                              else
                              {
                                v185 = -1073741801;
                              }
                              v183 = (char *)v1642;
                              v184 = (_QWORD *)v1642;
                              v93 = 4LL;
                              v121 = v1883;
                            }
                            else
                            {
                              v185 = -1073741675;
                            }
                          }
                          v193 = v183;
LABEL_302:
                          v92 = v185 | 0x10000000;
                          v1642 = v92;
                          if ( v92 < 0 )
                            goto LABEL_622;
                          v1832 = 0LL;
                          v195 = 0LL;
                          v1431 = 0LL;
                          if ( !v193 )
                          {
                            v196 = -1073741811;
                            goto LABEL_365;
                          }
                          v197 = (unsigned int)v183;
                          v1649 = (void *)(unsigned int)v183;
                          if ( (_DWORD)v183 )
                          {
                            v1651 = (unsigned int)v183 + 8LL;
                            v198 = sub_180055F40(v1651);
                            v199 = v198;
                            Src = v198;
                            if ( v198 )
                            {
                              LOBYTE(v198) = 0;
                              v1642 = (unsigned int)v198;
                              v200 = 0LL;
                              v201 = v1506;
                              if ( v197 )
                              {
                                if ( v197 >= 0x20 )
                                {
                                  v202 = 0LL;
                                  v203 = 0LL;
                                  do
                                  {
                                    v202 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1506[v200]), v202);
                                    v204 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1506[v200 + 16]), v203);
                                    v203 = v204;
                                    v200 += 32LL;
                                  }
                                  while ( v200 < (v197 & 0xFFFFFFE0) );
                                  v205 = _mm_xor_si128(v204, v202);
                                  v206 = _mm_xor_si128(v205, _mm_srli_si128(v205, 8));
                                  v207 = _mm_xor_si128(v206, _mm_srli_si128(v206, 4));
                                  v208 = _mm_xor_si128(v207, _mm_srli_si128(v207, 2));
                                  LODWORD(v198) = _mm_cvtsi128_si32(_mm_xor_si128(v208, _mm_srli_si128(v208, 1)));
                                  v1642 = (unsigned int)v198;
                                }
                                if ( v200 < v197 )
                                {
                                  do
                                    LOBYTE(v198) = v1506[v200++] ^ (unsigned __int8)v198;
                                  while ( v200 < v197 );
                                  v1642 = (unsigned int)v198;
                                }
                              }
                              v1925 = 0xC81ECB17B1B54A58uLL;
                              v209 = v199;
                              v210 = 0;
                              v211 = -1;
                              v1641 = 0;
                              mm = 0;
                              v212 = v197 & 7;
                              if ( (v197 & 7) != 0 )
                              {
                                v213 = 0;
                                v1641 = 0;
                                mm = 0;
                                v214 = 56;
                                do
                                {
                                  v215 = *v201++;
                                  if ( v210 >= 4 )
                                  {
                                    v213 |= v215 << v214;
                                    v216 = mm;
                                  }
                                  else
                                  {
                                    v216 = (v215 << (v214 - 32)) | mm;
                                    mm = v216;
                                  }
                                  ++v210;
                                  v214 -= 8;
                                }
                                while ( v210 < (int)v212 );
                                v1641 = v213;
                                v210 = v216 ^ 0xB17A307A;
                                v217 = v213 ^ 0x42F6B18D;
                                v218 = v216 ^ 0xB17A307A;
                                v219 = v217;
                                v220 = 0;
                                if ( (v197 & 7) != 0 )
                                {
                                  do
                                  {
                                    Size = (size_t)(v209 + 1);
                                    if ( v220 >= 4 )
                                    {
                                      v219 = __ROL4__(v219, 8);
                                      v222 = v219;
                                    }
                                    else
                                    {
                                      v218 = __ROL4__(v218, 8);
                                      v222 = v218;
                                    }
                                    *v209 = v222;
                                    ++v220;
                                    ++v209;
                                  }
                                  while ( v220 < (int)v212 );
                                  v221 = (_BYTE *)Size;
                                }
                                else
                                {
                                  v221 = v209;
                                }
                                if ( v212 <= 4 )
                                {
                                  v211 = 0;
                                  if ( v212 < 4 )
                                    v210 = (unsigned int)v210 >> (8 * (4 - v212)) << (8 * (4 - v212));
                                }
                                else
                                {
                                  v211 = v217 >> (8 * (8 - v212)) << (8 * (8 - v212));
                                }
                                v199 = Src;
                              }
                              else
                              {
                                v221 = v199;
                              }
                              v223 = v197 >> 3;
                              if ( v197 >> 3 )
                              {
                                v224 = HIDWORD(v1925);
                                v1547 = v221 + 7;
                                v225 = v201 + 2;
                                v226 = HIWORD(HIDWORD(v1925));
                                v227 = v1641;
                                v228 = mm;
                                v229 = HIDWORD(v1925) ^ 0xB1B54A58;
                                v230 = WORD2(v1925);
                                do
                                {
                                  v231 = v225[1] | ((*v225 | ((*(v225 - 1) | (*(v225 - 2) << 8)) << 8)) << 8);
                                  v232 = v225[5] | ((v225[4] | ((v225[3] | (v225[2] << 8)) << 8)) << 8);
                                  v233 = v232 ^ v211;
                                  v234 = v224 ^ v231 ^ (v233 - 19032) ^ v210;
                                  v235 = (__ROR4__(v224 ^ v234, 15) * WORD1(v1925) + __ROR4__(v234, 7)) ^ v233;
                                  v236 = (__ROR4__(v235 - 1313519016, 9) * v230 - __ROR4__(v235, 10)) ^ v234;
                                  v237 = (__ROL4__(v230 ^ v236, 4) * v226 + __ROL4__(v236, 5)) ^ v235;
                                  v238 = (HIDWORD(v1925) - (v237 ^ 0xB1B54A58)) ^ v236;
                                  v239 = (WORD1(v1925) * (v238 - 19032) - (v238 >> 6)) ^ v237;
                                  v240 = (19032 * (v230 ^ __ROR4__(v239, 15))) ^ v238;
                                  v241 = (v230 * (v226 + __ROR4__(~v240, 3))) ^ v239;
                                  v242 = (v241 - 19032 - HIDWORD(v1925)) ^ v240;
                                  v243 = (WORD1(v1925) * (v226 ^ v242)) ^ __ROR4__(v242, 10) ^ v241;
                                  v244 = (__ROL4__(v243 ^ 0x4A58, 6) * v230) ^ __ROR4__(v243, 3) ^ v242;
                                  v245 = (19032 * (__ROR4__(v244, 15) - v226)) ^ v243;
                                  v246 = (v245 >> 15) ^ (19032 * __ROL4__(v245 - v230, 3)) ^ (v245 >> 1) ^ (19032 * (v226 ^ v245)) ^ v244;
                                  v247 = (WORD1(v1925) * (v246 - v230) - (v246 >> 13)) ^ v245;
                                  v248 = (__ROR4__(-1313519016 - v247, 9) * v230) ^ __ROR4__(v247, 11) ^ v246;
                                  v249 = (v248 - v226 + 1313519016) ^ v247;
                                  v250 = (19032 * (v249 ^ WORD1(v1925)) - __ROR4__(v249, 7)) ^ v248;
                                  v251 = (__ROL4__(v250 ^ v226, 4) * WORD1(v1925) - __ROR4__(v250, 16)) ^ v249;
                                  v252 = (__ROR4__(-1313519016 - v251, 10) * v230 + __ROR4__(v251, 4)) ^ v250;
                                  v253 = (__ROR4__(v252 + 1313519016, 4) * v226) ^ __ROR4__(v252, 9) ^ v251;
                                  v254 = (19032 * __ROL4__(HIDWORD(v1925) ^ v253, 8) - __ROL4__(v253, 2)) ^ v252;
                                  v255 = (__ROR4__(HIDWORD(v1925) - v254, 11) * WORD1(v1925) - __ROR4__(v254, 12)) ^ v253;
                                  v256 = (v255 >> 8) ^ (v230 * (WORD1(v1925) ^ v255)) ^ v254;
                                  v257 = v229 ^ v256 ^ v255;
                                  v258 = v228 ^ v256;
                                  v259 = v227 ^ v257;
                                  *(v1547 - 4) = v258;
                                  v260 = __ROR4__(v258, 8);
                                  *v1547 = v259;
                                  v261 = __ROR4__(v259, 8);
                                  *(v1547 - 5) = v260;
                                  v262 = __ROR4__(v260, 8);
                                  *(v1547 - 1) = v261;
                                  v263 = __ROR4__(v261, 8);
                                  *(v1547 - 6) = v262;
                                  v264 = __ROR4__(v262, 8);
                                  *(v1547 - 2) = v263;
                                  v265 = __ROR4__(v263, 8);
                                  *(v1547 - 7) = v264;
                                  *(v1547 - 3) = v265;
                                  v210 = __ROR4__(v264, 8);
                                  v211 = __ROR4__(v265, 8);
                                  v228 = v231;
                                  v227 = v232;
                                  v1547 += 8;
                                  --v223;
                                  v224 = HIDWORD(v1925);
                                  v225 += 8;
                                }
                                while ( v223 );
                                v7 = v1659;
                                v3 = v1768;
                                v4 = v1769;
                                v197 = (unsigned __int64)v1649;
                                v199 = Src;
                              }
                              *(_QWORD *)&v199[v197] = (unsigned __int8)v1642;
                              v1832 = v199;
                              v266 = v1651;
                              v1791 = v1651;
                              v1792 = &qword_18019D900;
                              v1793 = 8LL;
                              v1794 = xmmword_18019D860;
                              v1795 = 160LL;
                              v267 = GetProcessHeap();
                              v268 = HeapAlloc(v267, 8u, 0x30uLL);
                              v269 = v268;
                              if ( v268 )
                              {
                                *v268 = v1651;
                                v270 = GetProcessHeap();
                                v271 = HeapAlloc(v270, 8u, v266);
                                if ( v271 )
                                {
                                  *((_QWORD *)v269 + 1) = v271;
                                  memcpy(v271, Src, v266);
                                  v269[4] = 160;
                                  v272 = GetProcessHeap();
                                  v273 = HeapAlloc(v272, 8u, 0xA0uLL);
                                  if ( v273 )
                                  {
                                    *((_QWORD *)v269 + 3) = v273;
                                    *v273 = xmmword_18019D860[0];
                                    v273[1] = xmmword_18019D860[1];
                                    v273[2] = xmmword_18019D860[2];
                                    v273[3] = xmmword_18019D860[3];
                                    v273[4] = xmmword_18019D860[4];
                                    v273[5] = xmmword_18019D860[5];
                                    v273[6] = xmmword_18019D860[6];
                                    v273[7] = xmmword_18019D860[7];
                                    v273[8] = xmmword_18019D860[8];
                                    v273[9] = xmmword_18019D860[9];
                                    v269[8] = 8;
                                    v274 = GetProcessHeap();
                                    v275 = HeapAlloc(v274, 8u, 8uLL);
                                    if ( v275 )
                                    {
                                      *((_QWORD *)v269 + 5) = v275;
                                      v196 = 0;
                                      *v275 = qword_18019D900;
                                      v195 = (WCHAR *)v269;
                                      v1431 = (WCHAR *)v269;
                                      goto LABEL_351;
                                    }
                                  }
                                }
                                v276 = (void *)*((_QWORD *)v269 + 1);
                                if ( v276 )
                                {
                                  v277 = GetProcessHeap();
                                  HeapFree(v277, 0, v276);
                                  *((_QWORD *)v269 + 1) = 0LL;
                                }
                                v278 = (void *)*((_QWORD *)v269 + 3);
                                if ( v278 )
                                {
                                  v279 = GetProcessHeap();
                                  HeapFree(v279, 0, v278);
                                  *((_QWORD *)v269 + 3) = 0LL;
                                }
                                v280 = (void *)*((_QWORD *)v269 + 5);
                                if ( v280 )
                                {
                                  v281 = GetProcessHeap();
                                  HeapFree(v281, 0, v280);
                                  *((_QWORD *)v269 + 5) = 0LL;
                                }
                                v282 = GetProcessHeap();
                                HeapFree(v282, 0, v269);
                              }
                              v195 = 0LL;
                              v196 = -1073741801;
LABEL_351:
                              v121 = v1883;
                              v93 = 4LL;
                              v184 = v1646;
                              if ( v196 >= 0 )
                              {
                                v1767 = v195;
                                v195 = 0LL;
                                v1431 = 0LL;
                              }
                              goto LABEL_355;
                            }
                            v121 = v1883;
                            v93 = 4LL;
                            v195 = 0LL;
                            v184 = 0LL;
                          }
                          v196 = -1073741823;
LABEL_355:
                          v1548 = v1832;
                          if ( v1832 )
                          {
                            v283 = GetProcessHeap();
                            HeapFree(v283, 0, v1548);
                            v1832 = 0LL;
                            v121 = v1883;
                            v93 = 4LL;
                            v195 = v1431;
                            v184 = v1646;
                          }
                          if ( v195 )
                          {
                            v1549 = (void *)*((_QWORD *)v1431 + 1);
                            if ( v1549 )
                            {
                              v284 = GetProcessHeap();
                              HeapFree(v284, 0, v1549);
                              *((_QWORD *)v1431 + 1) = 0LL;
                            }
                            v1550 = (void *)*((_QWORD *)v1431 + 3);
                            if ( v1550 )
                            {
                              v285 = GetProcessHeap();
                              HeapFree(v285, 0, v1550);
                              *((_QWORD *)v1431 + 3) = 0LL;
                            }
                            v1551 = (void *)*((_QWORD *)v1431 + 5);
                            if ( v1551 )
                            {
                              v286 = GetProcessHeap();
                              HeapFree(v286, 0, v1551);
                              *((_QWORD *)v1431 + 5) = 0LL;
                            }
                            v287 = GetProcessHeap();
                            HeapFree(v287, 0, v1431);
                            v121 = v1883;
                            v93 = 4LL;
                            v184 = v1646;
                          }
LABEL_365:
                          v92 = v196 | 0x10000000;
                          v1642 = v92;
                          if ( v92 >= 0 )
                          {
                            v1552 = (unsigned int *)v1767;
                            v1706 = v93;
                            v288 = sub_18005F608((unsigned int)v93, *(unsigned int *)v1767, &v1706);
                            if ( v288 < 0
                              || (v288 = sub_18005F608(v1706, (unsigned int)v93, &v1706), v288 < 0)
                              || (v288 = sub_18005F608(v1706, v289, &v1706), v288 < 0)
                              || (v288 = sub_18005F608(v1706, (unsigned int)v93, &v1706), v288 < 0) )
                            {
                              v291 = v1707;
                            }
                            else
                            {
                              v288 = sub_18005F608(v1706, v290, &v1706);
                              v291 = v1707;
                              if ( v288 >= 0 )
                                v291 = v1706;
                              v1707 = v291;
                            }
                            if ( v288 >= 0 )
                            {
                              v292 = v291;
                              v293 = GetProcessHeap();
                              v294 = HeapAlloc(v293, 8u, v292);
                              Src = v294;
                              if ( v294 )
                              {
                                v1796 = v294;
                                *v294 = *v1552;
                                v288 = sub_18005F628(v294, 4LL, &v1796);
                                if ( v288 >= 0 )
                                {
                                  memcpy(v1796, v295[1], *(unsigned int *)v295);
                                  v288 = sub_18005F628(v1796, *v1552, &v1796);
                                  if ( v288 >= 0 )
                                  {
                                    v297 = v1796;
                                    *(_DWORD *)v1796 = *(_DWORD *)(v296 + 16);
                                    v288 = sub_18005F628(v297, 4LL, &v1796);
                                    if ( v288 >= 0 )
                                    {
                                      memcpy(v1796, *(const void **)(v298 + 24), *(unsigned int *)(v298 + 16));
                                      v288 = sub_18005F628(v1796, v1552[4], &v1796);
                                      if ( v288 >= 0 )
                                      {
                                        v300 = v1796;
                                        *(_DWORD *)v1796 = *(_DWORD *)(v299 + 32);
                                        v288 = sub_18005F628(v300, 4LL, &v1796);
                                        if ( v288 >= 0 )
                                        {
                                          memcpy(v1796, *(const void **)(v301 + 40), *(unsigned int *)(v301 + 32));
                                          v288 = sub_18005F628(v1796, v1552[8], &v1796);
                                          if ( v288 >= 0 )
                                          {
                                            v302 = Src;
                                            v1624 = Src;
                                            v1523 = v1707;
                                            v121 = v1883;
                                            v93 = 4LL;
LABEL_387:
                                            v92 = v288 | 0x10000000;
                                            v1642 = v92;
                                            if ( v92 >= 0 )
                                            {
                                              v1797 = 0LL;
                                              v1708 = 0;
                                              v1798 = 0LL;
                                              v1709 = 0;
                                              v1710 = 8;
                                              v304 = sub_18005F608(8LL, v1570, &v1710);
                                              v92 = v304 | 0x10000000;
                                              v1642 = v304 | 0x10000000;
                                              if ( v304 >= 0 )
                                              {
                                                v306 = (v1710 + 7) & 0xFFFFFFF8;
                                                if ( (unsigned int)v306 >= v1710 )
                                                {
                                                  v1712 = (v1710 + 7) & 0xFFFFFFF8;
                                                  v92 = sub_18005F608(v306, 8LL, &v1712);
                                                  v1642 = v92;
                                                  v307 = v1711;
                                                  if ( v92 >= 0 )
                                                    v307 = v1712;
                                                  v1711 = v307;
                                                }
                                                else
                                                {
                                                  v92 = -1073741675;
                                                  v1642 = -1073741675;
                                                }
                                                if ( v92 < 0 )
                                                  goto LABEL_430;
                                                if ( *(_QWORD *)&v1884[1] == v305 )
                                                {
                                                  v92 = -1073741811;
                                                  v1642 = -1073741811;
                                                }
                                                else if ( v121 > 1 )
                                                {
                                                  v308 = *(unsigned int **)&v1884[1];
                                                  v1799 = *(unsigned int **)&v1884[1];
                                                  while ( 1 )
                                                  {
                                                    Sizea = *v308;
                                                    v92 = sub_18005F628(v308, v93, &v1799);
                                                    v1642 = v92;
                                                    if ( v92 < 0 )
                                                      break;
                                                    v92 = sub_18005F628(v1799, Sizea, &v1799);
                                                    v1642 = v92;
                                                    if ( v92 < 0 )
                                                      break;
                                                    v308 = v1799;
                                                    if ( v309 != -1 )
                                                    {
                                                      v92 = sub_18005F628(v1799, v93, &v1799);
                                                      v1642 = v92;
                                                      if ( v92 >= 0 )
                                                      {
                                                        v1708 = v310;
                                                        v311 = v1799;
                                                        if ( !v310 )
                                                          v311 = 0LL;
                                                        v1799 = v311;
                                                        v1797 = v311;
                                                      }
                                                      break;
                                                    }
                                                  }
                                                  if ( v92 < 0 )
                                                    goto LABEL_430;
                                                  if ( v121 > 2 )
                                                  {
                                                    v312 = *(_DWORD **)&v1884[1];
                                                    v1800 = *(_DWORD **)&v1884[1];
                                                    v313 = 0;
                                                    while ( 1 )
                                                    {
                                                      v92 = sub_18005F628(v312, v93, &v1800);
                                                      v1642 = v92;
                                                      if ( v92 < 0 )
                                                        break;
                                                      v92 = sub_18005F628(v1800, v315, &v1800);
                                                      v1642 = v92;
                                                      if ( v92 < 0 )
                                                        break;
                                                      ++v313;
                                                      v312 = v1800;
                                                      if ( v313 >= 2 )
                                                      {
                                                        v316 = *v1800;
                                                        v92 = sub_18005F628(v1800, v93, &v1800);
                                                        v1642 = v92;
                                                        if ( v92 >= 0 )
                                                        {
                                                          v1709 = v316;
                                                          v317 = v1800;
                                                          if ( !v316 )
                                                            v317 = 0LL;
                                                          v1800 = v317;
                                                          v1798 = v317;
                                                        }
                                                        break;
                                                      }
                                                    }
                                                    if ( v92 < 0 )
                                                      goto LABEL_430;
                                                    v1713 = v93;
                                                    v92 = sub_18005F608((unsigned int)v93, v314, &v1713);
                                                    v1642 = v92;
                                                    if ( v92 < 0
                                                      || (v92 = sub_18005F608(v1713, (unsigned int)v93, &v1713),
                                                          v1642 = v92,
                                                          v92 < 0)
                                                      || (v92 = sub_18005F608(v1713, v1708, &v1713), v1642 = v92, v92 < 0)
                                                      || (v92 = sub_18005F608(v1713, (unsigned int)v93, &v1713),
                                                          v1642 = v92,
                                                          v92 < 0) )
                                                    {
                                                      v319 = v1714;
                                                    }
                                                    else
                                                    {
                                                      v92 = sub_18005F608(v1713, v318, &v1713);
                                                      v1642 = v92;
                                                      v319 = v1714;
                                                      if ( v92 >= 0 )
                                                        v319 = v1713;
                                                      v1714 = v319;
                                                    }
                                                    if ( v92 < 0 )
                                                      goto LABEL_430;
                                                    if ( v319 > 0x400000 )
                                                    {
                                                      v92 = -2147418113;
                                                      v1642 = -2147418113;
                                                      goto LABEL_430;
                                                    }
                                                    LODWORD(v1704) = v319;
                                                  }
                                                  else
                                                  {
                                                    v92 = -1073741811;
                                                    v1642 = -1073741811;
                                                  }
                                                }
                                                else
                                                {
                                                  v92 = -1073741811;
                                                  v1642 = -1073741811;
                                                }
                                              }
                                              if ( v92 >= 0 )
                                              {
                                                v321 = v1704;
                                                v322 = GetProcessHeap();
                                                v323 = HeapAlloc(v322, 8u, v321);
                                                if ( v323 )
                                                {
                                                  v320 = v323;
                                                  v1647 = v323;
                                                  v92 = 0x10000000;
                                                }
                                                else
                                                {
                                                  v92 = -805306345;
                                                  v320 = v1647;
                                                }
                                                v1642 = v92;
                                                v302 = v1624;
                                                if ( v92 < 0 )
                                                  goto LABEL_439;
                                                if ( !v1624 )
                                                {
                                                  v92 = -2147024809;
                                                  v1642 = -2147024809;
LABEL_439:
                                                  v93 = 4LL;
                                                  v184 = v1646;
                                                  goto LABEL_460;
                                                }
                                                if ( !v320 )
                                                {
                                                  v92 = -2147024809;
                                                  v1642 = -2147024809;
                                                  v93 = 4LL;
                                                  v184 = v1646;
                                                  goto LABEL_460;
                                                }
                                                v1906[0] = v1624;
                                                v1907 = v1523;
                                                v1906[1] = v320;
                                                v1908 = v1704;
                                                v1909 = 0;
                                                if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
                                                {
                                                  NtQuerySystemInformation = (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))GetProcAddress(phModule, "NtQuerySystemInformation");
                                                  if ( NtQuerySystemInformation )
                                                  {
                                                    v328 = ((__int64 (__fastcall *)(__int64, _QWORD *))NtQuerySystemInformation)(
                                                             134LL,
                                                             v1906);
                                                    v92 = v328 | 0x10000000;
                                                    v1642 = v328 | 0x10000000;
                                                    v325 = v1704;
                                                    if ( v328 >= 0 )
                                                      v325 = v1908;
                                                    LODWORD(v1704) = v325;
                                                    goto LABEL_456;
                                                  }
                                                  v324 = GetLastError();
                                                  v92 = v324;
                                                  v1642 = v324;
                                                  if ( v324 <= 0 )
                                                  {
LABEL_445:
                                                    v325 = v1704;
                                                    if ( v92 >= 0 )
                                                    {
                                                      v92 = -2147467259;
                                                      v1642 = -2147467259;
                                                      goto LABEL_447;
                                                    }
LABEL_456:
                                                    if ( v92 == -805306333 )
                                                    {
                                                      v92 = -2147024774;
                                                      v1642 = -2147024774;
                                                      v93 = 4LL;
                                                      v184 = v1646;
                                                      goto LABEL_458;
                                                    }
LABEL_447:
                                                    v320 = v1647;
                                                    v93 = 4LL;
                                                    if ( v92 < 0 )
                                                    {
                                                      v184 = v1646;
                                                      goto LABEL_459;
                                                    }
                                                    v1715 = 0;
                                                    v1802 = v1647;
                                                    if ( v325 < 4 )
                                                    {
                                                      v326 = -1073741762;
                                                      v184 = 0LL;
                                                      goto LABEL_537;
                                                    }
                                                    Sizeb = *(_DWORD *)v1647;
                                                    v326 = sub_18005F628(v1647, 4LL, &v1802);
                                                    if ( v326 < 0 )
                                                      goto LABEL_536;
                                                    v326 = sub_18005F608(0LL, (unsigned int)v93, &v1715);
                                                    if ( v326 < 0 )
                                                    {
LABEL_485:
                                                      v184 = v344;
                                                      v320 = v1647;
                                                      goto LABEL_537;
                                                    }
                                                    if ( v325 - v1715 < (unsigned int)v345 )
                                                    {
                                                      v326 = -1073741762;
                                                      goto LABEL_485;
                                                    }
                                                    Src = v1802;
                                                    v1651 = v345;
                                                    v326 = sub_18005F628(v1802, v345, &v1802);
                                                    if ( v326 >= 0 )
                                                    {
                                                      v326 = sub_18005F608(v347, v346, &v1715);
                                                      if ( v326 >= 0 )
                                                      {
                                                        if ( v325 - v1715 < (unsigned int)v93 )
                                                          goto LABEL_534;
                                                        v1466 = *(_DWORD *)v1802;
                                                        v326 = sub_18005F628(v1802, v93, &v1802);
                                                        if ( v326 < 0 )
                                                          goto LABEL_535;
                                                        v326 = sub_18005F608(v348, (unsigned int)v93, &v1715);
                                                        if ( v326 < 0 )
                                                          goto LABEL_535;
                                                        if ( v325 - v1715 < v349 )
                                                          goto LABEL_534;
                                                        v1649 = v1802;
                                                        v326 = sub_18005F628(v1802, v349, &v1802);
                                                        if ( v326 < 0 )
                                                          goto LABEL_535;
                                                        v326 = sub_18005F608(v351, v350, &v1715);
                                                        if ( v326 < 0 )
                                                          goto LABEL_535;
                                                        if ( v325 - v1715 < (unsigned int)v93 )
                                                          goto LABEL_534;
                                                        v1495 = *(_DWORD *)v1802;
                                                        v326 = sub_18005F628(v1802, v93, &v1802);
                                                        if ( v326 < 0 )
                                                          goto LABEL_535;
                                                        v326 = sub_18005F608(v1715, (unsigned int)v93, &v1715);
                                                        if ( v326 < 0 )
                                                          goto LABEL_535;
                                                        if ( v325 - v1715 < v352 )
                                                          goto LABEL_534;
                                                        v326 = sub_18005F608(v1715, v352, &v1715);
                                                        if ( v326 >= 0 )
                                                        {
                                                          if ( v325 == v1715
                                                            && (unsigned int)(Sizeb + v354 + v353) + 12LL == v325 )
                                                          {
                                                            v355 = GetProcessHeap();
                                                            v356 = HeapAlloc(v355, 8u, 0x30uLL);
                                                            v357 = v356;
                                                            if ( !v356 )
                                                            {
                                                              v326 = -1073741801;
                                                              v357 = 0LL;
LABEL_523:
                                                              if ( v326 >= 0 )
                                                              {
                                                                v184 = v357;
                                                                v1646 = v357;
                                                                v93 = 4LL;
                                                                v320 = v1647;
                                                                goto LABEL_537;
                                                              }
                                                              if ( !v357 )
                                                              {
                                                                v93 = 4LL;
                                                                v184 = v1646;
                                                                v320 = v1647;
                                                                goto LABEL_537;
                                                              }
                                                              v1556 = (void *)v357[1];
                                                              if ( v1556 )
                                                              {
                                                                v372 = GetProcessHeap();
                                                                HeapFree(v372, 0, v1556);
                                                                v357[1] = 0LL;
                                                              }
                                                              v1557 = (void *)v357[3];
                                                              if ( v1557 )
                                                              {
                                                                v373 = GetProcessHeap();
                                                                HeapFree(v373, 0, v1557);
                                                                v357[3] = 0LL;
                                                              }
                                                              v1558 = (void *)v357[5];
                                                              if ( v1558 )
                                                              {
                                                                v374 = GetProcessHeap();
                                                                HeapFree(v374, 0, v1558);
                                                                v357[5] = 0LL;
                                                              }
                                                              v375 = GetProcessHeap();
                                                              HeapFree(v375, 0, v357);
                                                              v93 = 4LL;
                                                              goto LABEL_535;
                                                            }
                                                            if ( Src )
                                                            {
                                                              *(_DWORD *)v356 = Sizeb;
                                                              v358 = GetProcessHeap();
                                                              v359 = v1651;
                                                              v360 = HeapAlloc(v358, 8u, v1651);
                                                              if ( !v360 )
                                                                goto LABEL_514;
                                                              v357[1] = v360;
                                                              memcpy(v360, Src, v359);
                                                            }
                                                            else
                                                            {
                                                              *(_DWORD *)v356 = 0;
                                                              v356[1] = 0LL;
                                                            }
                                                            if ( v1649 )
                                                            {
                                                              *((_DWORD *)v357 + 4) = v1466;
                                                              v361 = GetProcessHeap();
                                                              v362 = HeapAlloc(v361, 8u, v1466);
                                                              if ( !v362 )
                                                                goto LABEL_514;
                                                              v357[3] = v362;
                                                              memcpy(v362, v1649, v1466);
                                                            }
                                                            else
                                                            {
                                                              *((_DWORD *)v357 + 4) = 0;
                                                              v357[3] = 0LL;
                                                            }
                                                            if ( !v1802 )
                                                            {
                                                              *((_DWORD *)v357 + 8) = 0;
                                                              v357[5] = 0LL;
                                                              goto LABEL_522;
                                                            }
                                                            *((_DWORD *)v357 + 8) = v1495;
                                                            v363 = GetProcessHeap();
                                                            v364 = HeapAlloc(v363, 8u, v1495);
                                                            if ( v364 )
                                                            {
                                                              v357[5] = v364;
                                                              memcpy(v364, v1802, v1495);
LABEL_522:
                                                              v326 = 0;
                                                              goto LABEL_523;
                                                            }
LABEL_514:
                                                            v365 = (void *)v357[1];
                                                            if ( v365 )
                                                            {
                                                              v366 = GetProcessHeap();
                                                              HeapFree(v366, 0, v365);
                                                              v357[1] = 0LL;
                                                            }
                                                            v367 = (void *)v357[3];
                                                            if ( v367 )
                                                            {
                                                              v368 = GetProcessHeap();
                                                              HeapFree(v368, 0, v367);
                                                              v357[3] = 0LL;
                                                            }
                                                            v369 = (void *)v357[5];
                                                            if ( v369 )
                                                            {
                                                              v370 = GetProcessHeap();
                                                              HeapFree(v370, 0, v369);
                                                              v357[5] = 0LL;
                                                            }
                                                            v371 = GetProcessHeap();
                                                            HeapFree(v371, 0, v357);
                                                            v326 = -1073741801;
                                                            v357 = 0LL;
                                                            goto LABEL_523;
                                                          }
LABEL_534:
                                                          v326 = -1073741762;
                                                        }
                                                      }
                                                    }
LABEL_535:
                                                    v320 = v1647;
LABEL_536:
                                                    v184 = v1646;
LABEL_537:
                                                    v92 = v326 | 0x10000000;
                                                    v1642 = v92;
                                                    if ( v92 < 0 )
                                                      goto LABEL_459;
                                                    v1803 = 0LL;
                                                    if ( !v184 )
                                                    {
                                                      v92 = -805306355;
                                                      v1642 = -805306355;
                                                      goto LABEL_459;
                                                    }
                                                    v376 = (unsigned __int8 *)v184[1];
                                                    v1559 = (SIZE_T)v376;
                                                    if ( !v376 )
                                                    {
                                                      v92 = -805306355;
                                                      v1642 = -805306355;
                                                      goto LABEL_459;
                                                    }
                                                    v377 = *(unsigned int *)v184;
                                                    if ( !(_DWORD)v377 )
                                                    {
                                                      v92 = -805306355;
                                                      v1642 = -805306355;
                                                      goto LABEL_459;
                                                    }
                                                    v378 = v377 - 8;
                                                    Src = (void *)(v377 - 8);
                                                    v379 = sub_180055F40(v377 - 8);
                                                    v380 = (SIZE_T)v379;
                                                    v1651 = (SIZE_T)v379;
                                                    if ( v379 )
                                                    {
                                                      v381 = 0;
                                                      v1926 = 0x7F1137FAB69605ELL;
                                                      v382 = v376;
                                                      v383 = v379;
                                                      v384 = v378 & 7;
                                                      if ( (v378 & 7) != 0 )
                                                      {
                                                        v385 = 0;
                                                        v1496 = 0;
                                                        v386 = 0;
                                                        v387 = 56;
                                                        do
                                                        {
                                                          v388 = *v382++;
                                                          if ( v386 >= 4 )
                                                          {
                                                            v385 |= v388 << v387;
                                                            v389 = v1496;
                                                          }
                                                          else
                                                          {
                                                            v389 = (v388 << (v387 - 32)) | v1496;
                                                            v1496 = v389;
                                                          }
                                                          ++v386;
                                                          v387 -= 8;
                                                        }
                                                        while ( v386 < (int)v384 );
                                                        v1467 = v385;
                                                        v390 = v389 ^ 0x92F65A5;
                                                        v391 = v385 ^ 0x699A899C;
                                                        v392 = v389 ^ 0x92F65A5;
                                                        v393 = v391;
                                                        v394 = 0;
                                                        if ( (v378 & 7) != 0 )
                                                        {
                                                          do
                                                          {
                                                            v1649 = v383 + 1;
                                                            if ( v394 >= 4 )
                                                            {
                                                              v393 = __ROL4__(v393, 8);
                                                              v395 = v393;
                                                            }
                                                            else
                                                            {
                                                              v392 = __ROL4__(v392, 8);
                                                              v395 = v392;
                                                            }
                                                            *v383 = v395;
                                                            ++v394;
                                                            v383 = v1649;
                                                          }
                                                          while ( v394 < (int)v384 );
                                                        }
                                                        if ( v384 <= 4 )
                                                        {
                                                          v396 = 0;
                                                          if ( v384 < 4 )
                                                            v390 = v390 >> (8 * (4 - v384)) << (8 * (4 - v384));
                                                        }
                                                        else
                                                        {
                                                          v396 = v391 >> (8 * (8 - v384)) << (8 * (8 - v384));
                                                        }
                                                        v380 = v1651;
                                                        v381 = 0;
                                                      }
                                                      else
                                                      {
                                                        v1496 = 0;
                                                        v1467 = -1;
                                                        v396 = 0;
                                                        v390 = 0;
                                                      }
                                                      v1649 = (void *)(v378 >> 3);
                                                      if ( v378 >> 3 )
                                                      {
                                                        v397 = HIDWORD(v1926);
                                                        v398 = HIWORD(HIDWORD(v1926));
                                                        v1604 = WORD2(v1926);
                                                        v399 = HIDWORD(v1926) ^ 0xAB69605E;
                                                        v1613 = HIDWORD(v1926) ^ 0xAB69605E;
                                                        mm = 24670;
                                                        v1432 = (WCHAR *)(v383 + 7);
                                                        v400 = v382 + 2;
                                                        v401 = (char *)v1649;
                                                        v402 = v1467;
                                                        v403 = v1496;
                                                        do
                                                        {
                                                          v404 = v400[1] | ((*v400 | ((*(v400 - 1) | (*(v400 - 2) << 8)) << 8)) << 8);
                                                          v405 = v400[5] | ((v400[4] | ((v400[3] | (v400[2] << 8)) << 8)) << 8);
                                                          v406 = v404 ^ v390;
                                                          v1649 = v400 + 8;
                                                          v407 = v399 ^ v406 ^ v405 ^ v396;
                                                          v408 = (v1604 * __ROL4__(v407 + 1419157410, 5)
                                                                + __ROL4__(v407, 10)) ^ v406;
                                                          v409 = (WORD1(v1926) * __ROR4__(v397 + v408, 9)
                                                                - __ROL4__(v408, 2)) ^ v407;
                                                          v410 = (24670 * (v409 - v1604) - (v409 >> 13)) ^ v408;
                                                          v411 = (__ROL4__(WORD1(v1926) ^ v410, 6) * v398
                                                                - __ROL4__(v410, 2)) ^ v409;
                                                          v412 = (v397 - (v411 ^ 0xAB69605E)) ^ v410;
                                                          v413 = (WORD1(v1926) * (v1604 ^ v412)) ^ __ROR4__(v412, 6) ^ v411;
                                                          v414 = (24670 * __ROR4__(v397 + v413, 15) + __ROL4__(v413, 2)) ^ v412;
                                                          v415 = (__ROR4__(v414 + 1419157410, 14) * v398
                                                                - __ROL4__(v414, 8)) ^ v413;
                                                          v416 = (v1604 * __ROR4__(v415 ^ 0xAB69605E, 12)) ^ __ROR4__(v415, 10) ^ v414;
                                                          v417 = (v416 >> 10) ^ (WORD1(v1926) * (v416 ^ v398)) ^ v415;
                                                          v418 = (v398 * (__ROR4__(~v417, 5) + 24670)) ^ v416;
                                                          v419 = v417 ^ (v418 - v398) ^ 0xAB69605E;
                                                          v420 = ((v419 >> 2) + v1604 * __ROL4__(v419 ^ v398, 2)) ^ v418;
                                                          v421 = (WORD1(v1926) * __ROR4__(v420 - v397, 6)
                                                                + __ROL4__(v420, 7)) ^ v419;
                                                          v422 = (24670 * (v1604 ^ v421) + __ROR4__(v421, 9)) ^ v420;
                                                          v423 = (v398 * __ROL4__(WORD1(v1926) ^ v422, 5)
                                                                + __ROL4__(v422, 7)) ^ v421;
                                                          v424 = v1613 ^ v423 ^ v422;
                                                          v425 = (v1604 * (__ROR4__(v424, 3) - WORD1(v1926))) ^ v423;
                                                          v426 = (24670 * __ROR4__(v425 - v397, 1) - __ROR4__(v425, 6)) ^ v424;
                                                          v427 = (v398 * __ROL4__(v426 - 1419157410, 3)
                                                                + __ROL4__(v426, 14)) ^ v425;
                                                          v428 = (v1604 * __ROL4__(v427 - 1419157410, 15)
                                                                - __ROR4__(v427, 14)) ^ v426;
                                                          v429 = (v428 >> 3) ^ (WORD1(v1926) * (v428 ^ 0x605E)) ^ v427;
                                                          v430 = v403 ^ (24670 * __ROL4__(v429 ^ v397, 4)) ^ __ROL4__(v429, 2) ^ v428;
                                                          v431 = v402 ^ v429;
                                                          *((_BYTE *)v1432 - 4) = v430;
                                                          v432 = __ROR4__(v430, 8);
                                                          *(_BYTE *)v1432 = v431;
                                                          v433 = __ROR4__(v431, 8);
                                                          *((_BYTE *)v1432 - 5) = v432;
                                                          v434 = __ROR4__(v432, 8);
                                                          *((_BYTE *)v1432 - 1) = v433;
                                                          v435 = __ROR4__(v433, 8);
                                                          *((_BYTE *)v1432 - 6) = v434;
                                                          v436 = __ROR4__(v434, 8);
                                                          *((_BYTE *)v1432 - 2) = v435;
                                                          v437 = __ROR4__(v435, 8);
                                                          *((_BYTE *)v1432 - 7) = v436;
                                                          *((_BYTE *)v1432 - 3) = v437;
                                                          v390 = __ROR4__(v436, 8);
                                                          v396 = __ROR4__(v437, 8);
                                                          v403 = v404;
                                                          v402 = v405;
                                                          v1432 += 4;
                                                          --v401;
                                                          v399 = v1613;
                                                          v400 = (unsigned __int8 *)v1649;
                                                        }
                                                        while ( v401 );
                                                        v7 = v1659;
                                                        v3 = v1768;
                                                        v4 = v1769;
                                                        v378 = (unsigned __int64)Src;
                                                        v380 = v1651;
                                                        v381 = 0;
                                                      }
                                                      v438 = 0LL;
                                                      if ( v378 )
                                                      {
                                                        if ( v378 >= 0x20 )
                                                        {
                                                          v439 = 0LL;
                                                          v440 = 0LL;
                                                          do
                                                          {
                                                            v439 = _mm_xor_si128(
                                                                     _mm_loadu_si128((const __m128i *)(v438 + v380)),
                                                                     v439);
                                                            v441 = _mm_xor_si128(
                                                                     _mm_loadu_si128((const __m128i *)(v438 + v380 + 16)),
                                                                     v440);
                                                            v440 = v441;
                                                            v438 += 32LL;
                                                          }
                                                          while ( v438 < (v378 & 0xFFFFFFFFFFFFFFE0uLL) );
                                                          v442 = _mm_xor_si128(v441, v439);
                                                          v443 = _mm_xor_si128(v442, _mm_srli_si128(v442, 8));
                                                          v444 = _mm_xor_si128(v443, _mm_srli_si128(v443, 4));
                                                          v445 = _mm_xor_si128(v444, _mm_srli_si128(v444, 2));
                                                          v381 = _mm_cvtsi128_si32(_mm_xor_si128(v445, _mm_srli_si128(v445, 1)));
                                                        }
                                                        for ( ; v438 < v378; ++v438 )
                                                          v381 ^= *(_BYTE *)(v438 + v380);
                                                      }
                                                      if ( v381 == *(_QWORD *)(v378 + v1559) )
                                                      {
                                                        v1804[1] = v378;
                                                        v446 = (int *)v380;
                                                        v1578 = (_BYTE *)v380;
                                                        HIDWORD(v1704) = v378;
                                                        v92 = 0x10000000;
                                                        v1642 = 0x10000000;
                                                        v93 = 4LL;
                                                        v184 = v1646;
                                                        goto LABEL_579;
                                                      }
                                                      v447 = GetProcessHeap();
                                                      HeapFree(v447, 0, (LPVOID)v1651);
                                                    }
                                                    v184 = v1646;
                                                    v93 = 4LL;
                                                    v448 = v1803;
                                                    v92 = -805306367;
                                                    v1642 = -805306367;
                                                    if ( v1803 )
                                                    {
                                                      v449 = GetProcessHeap();
                                                      HeapFree(v449, 0, v448);
                                                      v93 = 4LL;
                                                      v184 = v1646;
                                                    }
                                                    v446 = 0LL;
                                                    LODWORD(v378) = HIDWORD(v1704);
LABEL_579:
                                                    if ( v92 >= 0 )
                                                    {
                                                      v1716[0] = 0;
                                                      v1805 = v446;
                                                      if ( (unsigned int)v378 < 4 )
                                                      {
                                                        v450 = -1073741762;
LABEL_619:
                                                        v92 = v450 | 0x10000000;
                                                        v1642 = v92;
                                                        goto LABEL_458;
                                                      }
                                                      Sizec = *v446;
                                                      v450 = sub_18005F628(v446, 4LL, &v1805);
                                                      if ( v450 < 0 )
                                                        goto LABEL_619;
                                                      v450 = sub_18005F608(0LL, (unsigned int)v93, v1716);
                                                      if ( v450 < 0 )
                                                        goto LABEL_619;
                                                      if ( (unsigned int)(v378 - v1716[0]) >= 4 )
                                                      {
                                                        v1468 = *(_DWORD *)v1805;
                                                        v450 = sub_18005F628(v1805, v93, &v1805);
                                                        if ( v450 < 0 )
                                                          goto LABEL_618;
                                                        v450 = sub_18005F608(v451, (unsigned int)v93, v1716);
                                                        if ( v450 < 0 )
                                                          goto LABEL_618;
                                                        if ( (int)v378 - v1716[0] >= v452 )
                                                        {
                                                          v450 = sub_18005F608(v1716[0], v452, v1716);
                                                          if ( v450 < 0 )
                                                            goto LABEL_618;
                                                          v454 = (unsigned int)v378;
                                                          v455 = (unsigned int)v453;
                                                          v1560 = (unsigned int)v453;
                                                          v456 = &v1578[(unsigned int)v378];
                                                          v457 = (unsigned int *)v1805;
                                                          if ( v456 >= (char *)v1805 + v453
                                                            && v454
                                                             + v1578
                                                             - (_BYTE *)v1805
                                                             - (unsigned __int64)(unsigned int)v453 < 8 )
                                                          {
                                                            v458 = 0;
                                                            v459 = 0LL;
                                                            Src = 0LL;
                                                            v450 = 0;
                                                            v1497 = 0;
                                                            if ( !v1805 )
                                                            {
LABEL_606:
                                                              if ( (_DWORD)v453 )
                                                              {
                                                                v464 = GetProcessHeap();
                                                                v459 = HeapAlloc(v464, 8u, v1560);
                                                                Src = v459;
                                                                v93 = 4LL;
                                                                if ( !v459 )
                                                                {
                                                                  v450 = -1073741801;
                                                                  goto LABEL_614;
                                                                }
                                                                v450 = 0;
                                                                v455 = v1560;
                                                                v458 = v1497;
                                                              }
                                                              if ( v457 )
                                                              {
                                                                memcpy(v459, v457, v455);
                                                                v93 = 4LL;
                                                                v459 = Src;
                                                                v458 = v1497;
                                                              }
                                                              v1885[1] = v459;
                                                              LODWORD(v1885[0]) = v458;
LABEL_614:
                                                              if ( v450 >= 0 )
                                                              {
                                                                v184 = v1646;
                                                                if ( Sizec != LODWORD(v1885[0]) )
                                                                  v450 = -1073741762;
                                                                goto LABEL_619;
                                                              }
                                                              goto LABEL_618;
                                                            }
                                                            v450 = sub_18005F628(v1805, (unsigned int)v453, &v1806);
                                                            if ( v450 < 0 )
                                                              goto LABEL_614;
                                                            v460 = (unsigned int *)v1806;
                                                            if ( (unsigned __int64)v457 < v1806 )
                                                            {
                                                              while ( 1 )
                                                              {
                                                                v450 = sub_18005F628(v457, v93, &v1807);
                                                                if ( v450 < 0 )
                                                                  goto LABEL_614;
                                                                if ( v1807 > v461 )
                                                                  goto LABEL_609;
                                                                v462 = sub_18005F608((unsigned int)v93, *v457, &v1717);
                                                                v450 = v462;
                                                                if ( v462 >= 0 )
                                                                  v463 = v1717;
                                                                v1716[1] = v463;
                                                                if ( v462 < 0 )
                                                                  goto LABEL_614;
                                                                v450 = sub_18005F628(v457, v463, &v1808);
                                                                if ( v450 < 0 )
                                                                  goto LABEL_614;
                                                                v457 = v1808;
                                                                if ( v1808 > v460 )
                                                                  goto LABEL_609;
                                                                v458 = ++v1497;
                                                                if ( v1808 >= v460 )
                                                                {
                                                                  LODWORD(v453) = v1468;
                                                                  goto LABEL_604;
                                                                }
                                                              }
                                                            }
                                                            v458 = 0;
LABEL_604:
                                                            if ( v457 == v460 )
                                                            {
                                                              v457 = (unsigned int *)v1805;
                                                              v455 = v1560;
                                                              v459 = Src;
                                                              goto LABEL_606;
                                                            }
LABEL_609:
                                                            v450 = -1073741811;
LABEL_618:
                                                            v184 = v1646;
                                                            goto LABEL_619;
                                                          }
                                                        }
                                                      }
                                                      v450 = -1073741762;
                                                      goto LABEL_618;
                                                    }
LABEL_458:
                                                    v320 = v1647;
                                                    goto LABEL_459;
                                                  }
                                                }
                                                else
                                                {
                                                  v324 = GetLastError();
                                                  v92 = v324;
                                                  v1642 = v324;
                                                  if ( v324 <= 0 )
                                                    goto LABEL_445;
                                                }
                                                v92 = (unsigned __int16)v324 | 0x80070000;
                                                v1642 = v92;
                                                goto LABEL_445;
                                              }
LABEL_430:
                                              v184 = v1646;
                                              v320 = v1646;
LABEL_459:
                                              v302 = v1624;
                                              goto LABEL_460;
                                            }
                                            v184 = v1646;
                                            v320 = v1646;
LABEL_460:
                                            if ( v1506 )
                                            {
                                              v329 = GetProcessHeap();
                                              HeapFree(v329, 0, v1506);
                                              v93 = 4LL;
                                              v184 = v1646;
                                              v320 = v1647;
                                              v302 = v1624;
                                            }
                                            v330 = v1767;
                                            if ( v1767 )
                                            {
                                              v1553 = (void *)*((_QWORD *)v1767 + 1);
                                              if ( v1553 )
                                              {
                                                v331 = GetProcessHeap();
                                                HeapFree(v331, 0, v1553);
                                                v330[1] = 0LL;
                                              }
                                              v1554 = (void *)v330[3];
                                              if ( v1554 )
                                              {
                                                v332 = GetProcessHeap();
                                                HeapFree(v332, 0, v1554);
                                                v330[3] = 0LL;
                                              }
                                              v1555 = (void *)v330[5];
                                              if ( v1555 )
                                              {
                                                v333 = GetProcessHeap();
                                                HeapFree(v333, 0, v1555);
                                                v330[5] = 0LL;
                                              }
                                              v334 = GetProcessHeap();
                                              HeapFree(v334, 0, v330);
                                              v1767 = 0LL;
                                              v93 = 4LL;
                                              v184 = v1646;
                                              v320 = v1647;
                                              v302 = v1624;
                                            }
                                            if ( v302 )
                                            {
                                              v335 = GetProcessHeap();
                                              HeapFree(v335, 0, v1624);
                                              v93 = 4LL;
                                              v184 = v1646;
                                              v320 = v1647;
                                            }
                                            if ( v320 )
                                            {
                                              v336 = GetProcessHeap();
                                              HeapFree(v336, 0, v1647);
                                              v93 = 4LL;
                                              v184 = v1646;
                                            }
                                            if ( v184 )
                                            {
                                              v337 = (void *)v184[1];
                                              if ( v337 )
                                              {
                                                v338 = GetProcessHeap();
                                                HeapFree(v338, 0, v337);
                                                v184 = v1646;
                                                *((_QWORD *)v1646 + 1) = 0LL;
                                              }
                                              v339 = (void *)v184[3];
                                              if ( v339 )
                                              {
                                                v340 = GetProcessHeap();
                                                HeapFree(v340, 0, v339);
                                                v184 = v1646;
                                                *((_QWORD *)v1646 + 3) = 0LL;
                                              }
                                              v341 = (void *)v184[5];
                                              if ( v341 )
                                              {
                                                v342 = GetProcessHeap();
                                                HeapFree(v342, 0, v341);
                                                v343 = v1646;
                                                *((_QWORD *)v1646 + 5) = 0LL;
                                              }
                                              else
                                              {
                                                v343 = v1646;
                                              }
                                              v465 = GetProcessHeap();
                                              HeapFree(v465, 0, v343);
                                              v93 = 4LL;
                                            }
                                            if ( v1578 )
                                            {
                                              v466 = GetProcessHeap();
                                              HeapFree(v466, 0, v1578);
                                              v93 = 4LL;
                                            }
                                            if ( v92 < 0 )
                                              goto LABEL_726;
                                            if ( !LODWORD(v1885[0]) )
                                            {
                                              v92 = -1073425151;
                                              goto LABEL_725;
                                            }
                                            if ( v1885[1] )
                                            {
                                              v1809 = v1885[1];
                                              v92 = sub_18005F628(v1885[1], v93, &v1809);
                                              v1642 = v92;
                                              if ( v92 < 0 )
                                              {
                                                v467 = v1718;
                                                v468 = v1810;
                                              }
                                              else
                                              {
                                                v1718 = v467;
                                                v468 = v1809;
                                                if ( !v467 )
                                                  v468 = 0LL;
                                                v1809 = v468;
                                                v1810 = v468;
                                              }
                                              if ( v92 >= 0 )
                                              {
                                                if ( v467 != 4 )
                                                {
                                                  v92 = -1073741789;
                                                  v1642 = -1073741789;
                                                  goto LABEL_726;
                                                }
                                                v469 = *v468;
                                                v1666 = v469;
                                                goto LABEL_642;
                                              }
                                            }
                                            else
                                            {
                                              v92 = -1073741811;
                                              v1642 = -1073741811;
                                            }
                                            v469 = v1666;
LABEL_642:
                                            if ( v92 < 0 )
                                              goto LABEL_726;
                                            if ( v469 == -805306333 )
                                            {
                                              v1666 = -2147024774;
                                            }
                                            else if ( v469 != -2147024774 )
                                            {
                                              v92 = v469;
                                              v1642 = v469;
                                              if ( v469 < 0 )
                                                goto LABEL_726;
                                            }
                                            if ( LODWORD(v1885[0]) != 6 )
                                            {
                                              v92 = -1073425151;
                                              v1642 = -1073425151;
                                              goto LABEL_726;
                                            }
                                            if ( v1885[1] )
                                            {
                                              v470 = (int *)v1885[1];
                                              v1811 = (int *)v1885[1];
                                              v471 = 0;
                                              do
                                              {
                                                v92 = sub_18005F628(v470, v93, &v1811);
                                                v1642 = v92;
                                                if ( v92 < 0 )
                                                  goto LABEL_659;
                                                v92 = sub_18005F628(v1811, v472, &v1811);
                                                v1642 = v92;
                                                if ( v92 < 0 )
                                                  goto LABEL_659;
                                                ++v471;
                                                v470 = v1811;
                                              }
                                              while ( !v471 );
                                              v473 = *v1811;
                                              v92 = sub_18005F628(v1811, v93, &v1811);
                                              v1642 = v92;
                                              if ( v92 < 0 )
                                              {
LABEL_659:
                                                v473 = v1719;
                                                v474 = v1790;
                                                goto LABEL_660;
                                              }
                                              v1719 = v473;
                                              v474 = v1811;
                                              if ( !v473 )
                                                v474 = 0LL;
                                              v1811 = v474;
                                              v1790 = v474;
LABEL_660:
                                              if ( v92 >= 0 )
                                              {
                                                if ( v473 != 8 )
                                                  goto LABEL_724;
                                                v1813 = *(_QWORD *)v474;
                                              }
                                            }
                                            else
                                            {
                                              v92 = -1073741811;
                                              v1642 = -1073741811;
                                            }
                                            if ( v92 < 0 )
                                              goto LABEL_726;
                                            if ( v1885[1] )
                                            {
                                              v475 = (int *)v1885[1];
                                              v1814 = (int *)v1885[1];
                                              for ( k = 0; k < 2; ++k )
                                              {
                                                v92 = sub_18005F628(v475, v93, &v1814);
                                                v1642 = v92;
                                                if ( v92 < 0 )
                                                  goto LABEL_674;
                                                v92 = sub_18005F628(v1814, v477, &v1814);
                                                v1642 = v92;
                                                if ( v92 < 0 )
                                                  goto LABEL_674;
                                                v475 = v1814;
                                              }
                                              v478 = *v1814;
                                              v92 = sub_18005F628(v1814, v93, &v1814);
                                              v1642 = v92;
                                              if ( v92 < 0 )
                                              {
LABEL_674:
                                                v478 = v1720;
                                                v479 = v1815;
                                                goto LABEL_675;
                                              }
                                              v1720 = v478;
                                              v479 = v1814;
                                              if ( !v478 )
                                                v479 = 0LL;
                                              v1814 = v479;
                                              v1815 = v479;
LABEL_675:
                                              if ( v92 >= 0 )
                                              {
                                                if ( v478 != 4 )
                                                  goto LABEL_724;
                                                v1721 = *v479;
                                              }
                                            }
                                            else
                                            {
                                              v92 = -1073741811;
                                              v1642 = -1073741811;
                                            }
                                            if ( v92 < 0 )
                                              goto LABEL_726;
                                            if ( !v1885[1] )
                                            {
                                              v92 = -1073741811;
                                              v1642 = -1073741811;
                                              goto LABEL_726;
                                            }
                                            v480 = v1885[1];
                                            v1816[0] = v1885[1];
                                            for ( m = 0; m < 3; ++m )
                                            {
                                              v92 = sub_18005F628(v480, v93, v1816);
                                              v1642 = v92;
                                              if ( v92 < 0 )
                                                goto LABEL_689;
                                              v92 = sub_18005F628(v1816[0], v482, v1816);
                                              v1642 = v92;
                                              if ( v92 < 0 )
                                                goto LABEL_689;
                                              v480 = (LPVOID)v1816[0];
                                            }
                                            v483 = *(_DWORD *)v1816[0];
                                            Sized = *(_DWORD *)v1816[0];
                                            v92 = sub_18005F628(v1816[0], v93, v1816);
                                            v1642 = v92;
                                            if ( v92 < 0 )
                                            {
LABEL_689:
                                              Sized = v1722;
                                              goto LABEL_690;
                                            }
                                            v1722 = v483;
                                            v484 = v1816[0];
                                            if ( !v483 )
                                              v484 = 0LL;
                                            v1816[0] = v484;
                                            v1816[1] = v484;
LABEL_690:
                                            if ( v92 < 0 )
                                              goto LABEL_726;
                                            v485 = (int *)v1885[1];
                                            v1817 = (int *)v1885[1];
                                            for ( n = 0; n < 4; ++n )
                                            {
                                              v92 = sub_18005F628(v485, v93, &v1817);
                                              v1642 = v92;
                                              if ( v92 < 0 )
                                                goto LABEL_699;
                                              v92 = sub_18005F628(v1817, v487, &v1817);
                                              v1642 = v92;
                                              if ( v92 < 0 )
                                                goto LABEL_699;
                                              v485 = v1817;
                                            }
                                            v488 = *v1817;
                                            v92 = sub_18005F628(v1817, v93, &v1817);
                                            v1642 = v92;
                                            if ( v92 < 0 )
                                            {
LABEL_699:
                                              v488 = v1723;
                                              v489 = v1818;
                                              goto LABEL_700;
                                            }
                                            v1723 = v488;
                                            v489 = v1817;
                                            if ( !v488 )
                                              v489 = 0LL;
                                            v1817 = v489;
                                            v1818 = v489;
LABEL_700:
                                            if ( v92 >= 0 )
                                            {
                                              if ( v488 != 4 )
                                                goto LABEL_724;
                                              v1724 = *v489;
                                            }
                                            if ( v92 < 0 )
                                              goto LABEL_726;
                                            v490 = (unsigned int *)v1885[1];
                                            v1819 = (unsigned int *)v1885[1];
                                            for ( ii = 0; ii < 5; ++ii )
                                            {
                                              v1469 = *v490;
                                              v92 = sub_18005F628(v490, v93, &v1819);
                                              v1642 = v92;
                                              if ( v92 < 0 )
                                                goto LABEL_712;
                                              v92 = sub_18005F628(v1819, v1469, &v1819);
                                              v1642 = v92;
                                              if ( v92 < 0 )
                                                goto LABEL_712;
                                              v490 = v1819;
                                            }
                                            v494 = *v1819;
                                            v92 = sub_18005F628(v1819, v93, &v1819);
                                            v1642 = v92;
                                            if ( v92 < 0 )
                                            {
LABEL_712:
                                              v494 = v1725;
                                              v495 = v1820;
                                              goto LABEL_713;
                                            }
                                            v1725 = v494;
                                            v495 = v1819;
                                            if ( !v494 )
                                              v495 = 0LL;
                                            v1819 = v495;
                                            v1820 = v495;
LABEL_713:
                                            if ( v92 < 0 )
                                            {
                                              v496 = v1665;
                                              goto LABEL_717;
                                            }
                                            if ( v494 == 4 )
                                            {
                                              v496 = *v495;
                                              v1665 = *v495;
LABEL_717:
                                              if ( v92 < 0 )
                                                goto LABEL_726;
                                              if ( v1781 != v1813 )
                                              {
                                                v92 = -1073425151;
                                                goto LABEL_725;
                                              }
                                              v1661 = v493;
                                              v1662 = v496;
                                              v1660 = v1721;
                                              if ( v493 > 4 )
                                              {
                                                v92 = -2147024774;
                                                goto LABEL_725;
                                              }
                                              if ( Sized > 4 )
                                              {
                                                v92 = -2147024774;
                                                goto LABEL_725;
                                              }
                                              memcpy(v1631, v492, Sized);
                                              if ( v1666 )
                                                v92 = v1666;
LABEL_138:
                                              v93 = 4LL;
                                              goto LABEL_725;
                                            }
LABEL_724:
                                            v92 = -1073741789;
                                            goto LABEL_725;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                v303 = GetProcessHeap();
                                HeapFree(v303, 0, Src);
                              }
                              else
                              {
                                v288 = -1073741801;
                              }
                              v93 = 4LL;
                              v121 = v1883;
                            }
                            v302 = 0LL;
                            goto LABEL_387;
                          }
LABEL_622:
                          v320 = v1647;
                          v302 = v1647;
                          goto LABEL_460;
                        }
LABEL_727:
                        v1884[0] = 0;
                        v1883 = 0;
                        v497 = *(void **)&v1884[1];
                        if ( *(_QWORD *)&v1884[1] )
                        {
                          v498 = GetProcessHeap();
                          HeapFree(v498, 0, v497);
                          LODWORD(v497) = 0;
                          *(_QWORD *)&v1884[1] = 0LL;
                          v93 = 4LL;
                          v94 = 1;
                        }
                        HIDWORD(v1885[0]) = (_DWORD)v497;
                        LODWORD(v1885[0]) = (_DWORD)v497;
                        v499 = v1885[1];
                        if ( v1885[1] )
                        {
                          v500 = GetProcessHeap();
                          HeapFree(v500, 0, v499);
                          v1885[1] = 0LL;
                          v93 = 4LL;
                          v94 = 1;
                        }
                        if ( v1478 )
                        {
                          v501 = GetProcessHeap();
                          HeapFree(v501, 0, v1478);
                          v93 = 4LL;
                          v94 = 1;
                        }
                        if ( v1529 )
                        {
                          v502 = GetProcessHeap();
                          HeapFree(v502, 0, v1529);
                          v93 = 4LL;
                          v94 = 1;
                        }
                        if ( v92 < 0 )
                        {
                          v5 = 0LL;
                          goto LABEL_1962;
                        }
                        if ( !v1662 )
                        {
                          v5 = 0LL;
                          goto LABEL_1958;
                        }
                        v503 = 0LL;
                        v1821 = 0LL;
                        dword_18019E438 = v1662;
                        ModuleFileNameW = GetModuleFileNameW(&_ImageBase, &Filename, 0x104u);
                        if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
                        {
LABEL_1538:
                          sub_180074180(&v1821);
                          if ( !v1662 )
                          {
                            v5 = 0LL;
                            goto LABEL_1956;
                          }
                          v1643 = v503;
                          v1645 = (LPCWSTR)v503;
                          *(_QWORD *)&v1898[1] = v503;
                          *(_OWORD *)v1896 = 0LL;
                          v1844 = &unk_18019D910;
                          v1073 = GetProcessHeap();
                          v1074 = HeapAlloc(v1073, 8u, 0xA0uLL);
                          v1650 = v1074;
                          if ( !v1074 )
                          {
                            v93 = 4LL;
                            goto LABEL_1947;
                          }
                          v1075 = v1844;
                          *v1074 = *v1844;
                          v1074[1] = v1075[1];
                          v1074[2] = v1075[2];
                          v1074[3] = v1075[3];
                          v1074[4] = v1075[4];
                          v1074[5] = v1075[5];
                          v1074[6] = v1075[6];
                          v1074[7] = v1075[7];
                          v1074[8] = v1075[8];
                          v1074[9] = v1075[9];
                          v1643 = v1074;
                          v1845 = &unk_18019D850;
                          v1076 = GetProcessHeap();
                          v1077 = (WCHAR *)HeapAlloc(v1076, 8u, 8uLL);
                          v1562 = v1077;
                          v93 = 4LL;
                          if ( !v1077 )
                            goto LABEL_1947;
                          *(_QWORD *)v1077 = *v1845;
                          v1645 = v1077;
                          v1846 = __rdtsc();
                          v1728 = (unsigned int)v503;
                          if ( (int)sub_18005F608(4LL, 4LL, &v1729) < 0 )
                            goto LABEL_1947;
                          if ( (int)sub_18005F608(0LL, v1729, &v1728) < 0 )
                            goto LABEL_1947;
                          if ( (int)sub_18005F608((unsigned int)v93, 160LL, &v1730) < 0 )
                            goto LABEL_1947;
                          if ( (int)sub_18005F608(v1728, v1730, &v1728) < 0 )
                            goto LABEL_1947;
                          if ( (int)sub_18005F608((unsigned int)v93, (unsigned int)(v93 + 4), &v1731) < 0 )
                            goto LABEL_1947;
                          if ( (int)sub_18005F608(v1728, v1731, &v1728) < 0 )
                            goto LABEL_1947;
                          if ( (int)sub_18005F608((unsigned int)v93, (unsigned int)(v93 + 4), v1732) < 0 )
                            goto LABEL_1947;
                          v1732[1] = v1732[0];
                          if ( (int)sub_18005F608(v1728, v1732[0], &v1728) < 0 )
                            goto LABEL_1947;
                          v1898[0] = v1728;
                          v1078 = v1728;
                          v1079 = GetProcessHeap();
                          v1080 = HeapAlloc(v1079, 8u, v1078);
                          v1081 = v1080;
                          v93 = 4LL;
                          if ( !v1080 )
                            goto LABEL_1947;
                          *(_QWORD *)&v1898[1] = v1080;
                          v1897 = 0;
                          v1733 = 4;
                          if ( (int)sub_18005F628(v1080, 4LL, &v1895) < 0
                            || v1081 + 2 > (_DWORD *)((char *)v1081 + v1898[0]) )
                          {
                            goto LABEL_1947;
                          }
                          *v1081 = v93;
                          *v1895 = v1733;
                          v1083 = ++v1897;
                          if ( *(_QWORD *)&v1898[1] == v1082 )
                          {
                            if ( (int)sub_18005F608((unsigned int)v93, 160LL, &v1734) < 0 )
                              goto LABEL_1947;
                            v1735 = v1734;
                            if ( (int)sub_18005F608(v1898[0], v1734, v1898) < 0 )
                              goto LABEL_1947;
                          }
                          else
                          {
                            v1084 = *(_DWORD **)&v1898[1];
                            v1847 = *(_DWORD **)&v1898[1];
                            if ( v1083 )
                            {
                              while ( (int)sub_18005F608((unsigned int)v93, (unsigned int)*v1084, &v1736) >= 0 )
                              {
                                v1735 = v1736;
                                if ( (int)sub_18005F628(v1084, v1736, &v1847) < 0 )
                                  break;
                                v1084 = v1847;
                                if ( v1085 + 1 >= v1086 )
                                  goto LABEL_1560;
                              }
                              goto LABEL_1947;
                            }
LABEL_1560:
                            if ( (int)sub_18005F628(v1084, v93, &v1882) < 0
                              || (unsigned __int64)(v1084 + 41) > *(_QWORD *)&v1898[1] + (unsigned __int64)v1898[0] )
                            {
                              goto LABEL_1947;
                            }
                            *v1084 = 160;
                            v1087 = v1882;
                            v1088 = v1650;
                            *v1882 = *(_OWORD *)v1650;
                            v1087[1] = v1088[1];
                            v1087[2] = v1088[2];
                            v1087[3] = v1088[3];
                            v1087[4] = v1088[4];
                            v1087[5] = v1088[5];
                            v1087[6] = v1088[6];
                            v1087[7] = v1088[7];
                            v1087[8] = v1088[8];
                            v1087[9] = v1088[9];
                          }
                          v1089 = ++v1897;
                          if ( *(_QWORD *)&v1898[1] )
                          {
                            v1090 = *(unsigned int **)&v1898[1];
                            v1848 = *(unsigned int **)&v1898[1];
                            if ( v1089 )
                            {
                              while ( (int)sub_18005F608((unsigned int)v93, *v1090, &v1739) >= 0 )
                              {
                                v1738 = v1739;
                                if ( (int)sub_18005F628(v1091, v1739, &v1848) < 0 )
                                  break;
                                v1090 = v1848;
                                if ( v1092 + 1 >= v1089 )
                                  goto LABEL_1571;
                              }
                              goto LABEL_1947;
                            }
LABEL_1571:
                            if ( (int)sub_18005F628(v1090, v93, &v1881) < 0
                              || (unsigned __int64)(v1093 + 3) > *(_QWORD *)&v1898[1] + (unsigned __int64)v1898[0] )
                            {
                              goto LABEL_1947;
                            }
                            *v1093 = 8;
                            *v1881 = *(_QWORD *)v1562;
                          }
                          else
                          {
                            if ( (int)sub_18005F608((unsigned int)v93, 8LL, &v1737) < 0 )
                              goto LABEL_1947;
                            v1738 = v1737;
                            if ( (int)sub_18005F608(v1898[0], v1737, v1898) < 0 )
                              goto LABEL_1947;
                          }
                          v1094 = ++v1897;
                          v1849 = v1846;
                          if ( !*(_QWORD *)&v1898[1] )
                          {
                            if ( (int)sub_18005F608((unsigned int)v93, 8LL, &v1740) < 0 )
                              goto LABEL_1947;
                            v1741 = v1740;
                            if ( (int)sub_18005F608(v1898[0], v1740, v1898) < 0 )
                              goto LABEL_1947;
                            goto LABEL_1585;
                          }
                          v1095 = *(unsigned int **)&v1898[1];
                          v1850 = *(unsigned int **)&v1898[1];
                          if ( v1094 )
                          {
                            while ( (int)sub_18005F608((unsigned int)v93, *v1095, &v1742) >= 0 )
                            {
                              v1741 = v1742;
                              if ( (int)sub_18005F628(v1096, v1742, &v1850) < 0 )
                                break;
                              v1095 = v1850;
                              if ( v1097 + 1 >= v1094 )
                                goto LABEL_1582;
                            }
                            goto LABEL_1947;
                          }
LABEL_1582:
                          if ( (int)sub_18005F628(v1095, v93, &v1880) >= 0
                            && (unsigned __int64)(v1098 + 3) <= *(_QWORD *)&v1898[1] + (unsigned __int64)v1898[0] )
                          {
                            *v1098 = 8;
                            *v1880 = v1849;
LABEL_1585:
                            ++v1897;
                            if ( (int)sub_18005F608((unsigned int)v93, (unsigned int)v93, &v1743) >= 0 )
                            {
                              v1100 = v1743;
                              v1744 = v1743;
                              if ( (int)sub_18005F608(v1099, 8LL, v1745) >= 0 )
                              {
                                v1745[1] = v1745[0];
                                if ( (int)sub_18005F608(v1100, v1745[0], &v1744) >= 0 )
                                {
                                  v1490 = v1744;
                                  v1650 = 0LL;
                                  v1851 = 0LL;
                                  v1563 = 0LL;
                                  v1518 = 0;
                                  Src = 0LL;
                                  v1746 = 0LL;
                                  v1651 = 0LL;
                                  v1649 = 0LL;
                                  v1852 = __rdtsc();
                                  v1747 = 8;
                                  v1101 = sub_18005F608(8LL, v1898[0], &v1747);
                                  if ( v1101 >= 0 )
                                  {
                                    v1103 = (v1747 + 7) & 0xFFFFFFF8;
                                    if ( v1103 >= v1747 )
                                    {
                                      v1747 = (v1747 + 7) & 0xFFFFFFF8;
                                      v1104 = v1103;
                                      v1105 = GetProcessHeap();
                                      v1106 = (WCHAR *)HeapAlloc(v1105, 8u, v1104);
                                      v1451 = v1106;
                                      if ( v1106 )
                                      {
                                        v1853 = v1106;
                                        *(_DWORD *)v1106 = v1897;
                                        v1101 = sub_18005F628(v1106, 4LL, &v1853);
                                        if ( v1101 >= 0 )
                                        {
                                          v1108 = v1853;
                                          *(_DWORD *)v1853 = v1898[0];
                                          v1101 = sub_18005F628(v1108, v1107, &v1853);
                                          if ( v1101 >= 0 )
                                          {
                                            *(_QWORD *)(v1747 + v1109 - 8) = v1852;
                                            memcpy(v1853, *(const void **)&v1898[1], v1898[0]);
                                            v1110 = v1451;
                                            v1650 = v1451;
                                            LODWORD(v1102) = v1747;
                                            v93 = 4LL;
                                            goto LABEL_1599;
                                          }
                                        }
                                        v1111 = GetProcessHeap();
                                        HeapFree(v1111, 0, v1451);
                                      }
                                      else
                                      {
                                        v1101 = -1073741801;
                                      }
                                      v1102 = 0LL;
                                      v93 = 4LL;
                                    }
                                    else
                                    {
                                      v1101 = -1073741675;
                                    }
                                  }
                                  v1110 = v1102;
LABEL_1599:
                                  v1112 = v1101 | 0x10000000;
                                  if ( v1112 < 0 )
                                    goto LABEL_1898;
                                  v1854 = 0LL;
                                  if ( !v1110 )
                                  {
                                    v1113 = -1073741811;
                                    goto LABEL_1663;
                                  }
                                  v1114 = (unsigned int)v1102;
                                  v1590 = (unsigned int)v1102;
                                  if ( (_DWORD)v1102 )
                                  {
                                    v1654 = (unsigned int)v1102 + 8LL;
                                    v1115 = (char *)sub_180055F40(v1654);
                                    v1622 = v1115;
                                    if ( v1115 )
                                    {
                                      v1116 = 0;
                                      v1543 = 0;
                                      v1117 = 0;
                                      v1118 = 0LL;
                                      v1119 = (unsigned __int8 *)v1650;
                                      if ( v1114 )
                                      {
                                        if ( v1114 >= 0x20 )
                                        {
                                          v1120 = 0LL;
                                          v1121 = 0LL;
                                          do
                                          {
                                            v1120 = _mm_xor_si128(
                                                      _mm_loadu_si128((const __m128i *)((char *)v1650 + v1118)),
                                                      v1120);
                                            v1122 = _mm_xor_si128(
                                                      _mm_loadu_si128((const __m128i *)((char *)v1650 + v1118 + 16)),
                                                      v1121);
                                            v1121 = v1122;
                                            v1118 += 32LL;
                                          }
                                          while ( v1118 < (v1114 & 0xFFFFFFE0) );
                                          v1123 = _mm_xor_si128(v1120, v1122);
                                          v1124 = _mm_xor_si128(v1123, _mm_srli_si128(v1123, 8));
                                          v1125 = _mm_xor_si128(v1124, _mm_srli_si128(v1124, 4));
                                          v1126 = _mm_xor_si128(v1125, _mm_srli_si128(v1125, 2));
                                          v1116 = _mm_cvtsi128_si32(_mm_xor_si128(v1126, _mm_srli_si128(v1126, 1)));
                                          v1543 = v1116;
                                        }
                                        if ( v1118 < v1114 )
                                        {
                                          do
                                            v1116 ^= *((_BYTE *)v1650 + v1118++);
                                          while ( v1118 < v1114 );
                                          v1543 = v1116;
                                        }
                                      }
                                      v1924 = 0xC81ECB17B1B54A58uLL;
                                      v1127 = v1115;
                                      v1646 = v1115;
                                      v1128 = 0;
                                      v1129 = -1;
                                      v1629 = 0;
                                      LODWORD(v1647) = 0;
                                      v1130 = v1114 & 7;
                                      if ( (v1114 & 7) == 0 )
                                      {
LABEL_1632:
                                        if ( v1114 >> 3 )
                                        {
                                          v1140 = HIDWORD(v1924);
                                          LODWORD(v1646) = HIWORD(HIDWORD(v1924));
                                          v1504 = WORD2(v1924);
                                          v1577 = v1127 + 7;
                                          v1141 = v1119 + 2;
                                          v1142 = HIWORD(HIDWORD(v1924));
                                          v1143 = v1114 >> 3;
                                          v1144 = v1629;
                                          v1145 = (int)v1647;
                                          v1146 = HIDWORD(v1924) ^ 0xB1B54A58;
                                          do
                                          {
                                            v1147 = v1141[1] | ((*v1141 | ((*(v1141 - 1) | (*(v1141 - 2) << 8)) << 8)) << 8);
                                            v1148 = v1141[5] | ((v1141[4] | ((v1141[3] | (v1141[2] << 8)) << 8)) << 8);
                                            v1149 = v1148 ^ v1129;
                                            v1150 = v1140 ^ v1147 ^ (v1149 - 19032) ^ v1128;
                                            v1151 = (__ROR4__(v1140 ^ v1150, 15) * WORD1(v1924) + __ROR4__(v1150, 7)) ^ v1149;
                                            v1152 = (__ROR4__(v1151 - 1313519016, 9) * v1504 - __ROR4__(v1151, 10)) ^ v1150;
                                            v1153 = (v1142 * __ROL4__(v1504 ^ v1152, 4) + __ROL4__(v1152, 5)) ^ v1151;
                                            v1154 = (v1140 - (v1153 ^ 0xB1B54A58)) ^ v1152;
                                            v1155 = (WORD1(v1924) * (v1154 - 19032) - (v1154 >> 6)) ^ v1153;
                                            v1156 = (19032 * (v1504 ^ __ROR4__(v1155, 15))) ^ v1154;
                                            v1157 = (v1504 * (v1142 + __ROR4__(~v1156, 3))) ^ v1155;
                                            v1158 = (v1157 - 19032 - v1140) ^ v1156;
                                            v1159 = (WORD1(v1924) * (v1142 ^ v1158)) ^ __ROR4__(v1158, 10) ^ v1157;
                                            v1160 = (__ROL4__(v1159 ^ 0x4A58, 6) * v1504) ^ __ROR4__(v1159, 3) ^ v1158;
                                            v1161 = (19032 * (__ROR4__(v1160, 15) - v1142)) ^ v1159;
                                            v1162 = (v1161 >> 15) ^ (19032 * __ROL4__(v1161 - v1504, 3)) ^ (v1161 >> 1) ^ (19032 * (v1142 ^ v1161)) ^ v1160;
                                            v1163 = (WORD1(v1924) * (v1162 - v1504) - (v1162 >> 13)) ^ v1161;
                                            v1164 = (__ROR4__(-1313519016 - v1163, 9) * v1504) ^ __ROR4__(v1163, 11) ^ v1162;
                                            v1165 = (v1164 + 1313519016 - v1142) ^ v1163;
                                            v1166 = (19032 * (v1165 ^ WORD1(v1924)) - __ROR4__(v1165, 7)) ^ v1164;
                                            v1167 = (__ROL4__(v1142 ^ v1166, 4) * WORD1(v1924) - __ROR4__(v1166, 16)) ^ v1165;
                                            v1168 = (__ROR4__(-1313519016 - v1167, 10) * v1504 + __ROR4__(v1167, 4)) ^ v1166;
                                            v1169 = (v1142 * __ROR4__(v1168 + 1313519016, 4)) ^ __ROR4__(v1168, 9) ^ v1167;
                                            v1170 = (19032 * __ROL4__(v1140 ^ v1169, 8) - __ROL4__(v1169, 2)) ^ v1168;
                                            v1171 = (__ROR4__(v1140 - v1170, 11) * WORD1(v1924) - __ROR4__(v1170, 12)) ^ v1169;
                                            v1172 = (v1171 >> 8) ^ (v1504 * (WORD1(v1924) ^ v1171)) ^ v1170;
                                            v1173 = v1146 ^ v1172 ^ v1171;
                                            v1174 = v1145 ^ v1172;
                                            v1175 = v1144 ^ v1173;
                                            *(v1577 - 4) = v1174;
                                            v1176 = __ROR4__(v1174, 8);
                                            *v1577 = v1175;
                                            v1177 = __ROR4__(v1175, 8);
                                            *(v1577 - 5) = v1176;
                                            v1178 = __ROR4__(v1176, 8);
                                            *(v1577 - 1) = v1177;
                                            v1179 = __ROR4__(v1177, 8);
                                            *(v1577 - 6) = v1178;
                                            v1180 = __ROR4__(v1178, 8);
                                            *(v1577 - 2) = v1179;
                                            v1181 = __ROR4__(v1179, 8);
                                            *(v1577 - 7) = v1180;
                                            *(v1577 - 3) = v1181;
                                            v1128 = __ROR4__(v1180, 8);
                                            v1129 = __ROR4__(v1181, 8);
                                            v1145 = v1147;
                                            v1144 = v1148;
                                            v1577 += 8;
                                            --v1143;
                                            v1141 += 8;
                                          }
                                          while ( v1143 );
                                          v7 = v1659;
                                          v3 = v1768;
                                          v4 = v1769;
                                          v92 = v1642;
                                          v1114 = v1590;
                                          v1115 = v1622;
                                        }
                                        *(_QWORD *)&v1115[v1114] = v1543;
                                        v1854 = (WCHAR *)v1115;
                                        v1182 = v1654;
                                        v1855[1] = (void *)v1654;
                                        v1855[2] = &qword_18019D900;
                                        v1855[3] = (void *)8;
                                        v1855[4] = xmmword_18019D860;
                                        v1855[5] = (void *)160;
                                        v1183 = GetProcessHeap();
                                        v1184 = HeapAlloc(v1183, 8u, 0x30uLL);
                                        v1185 = v1184;
                                        if ( v1184 )
                                        {
                                          *v1184 = v1182;
                                          v1186 = GetProcessHeap();
                                          v1187 = HeapAlloc(v1186, 8u, v1182);
                                          if ( v1187 )
                                          {
                                            *((_QWORD *)v1185 + 1) = v1187;
                                            memcpy(v1187, v1622, v1182);
                                            v1185[4] = 160;
                                            v1188 = GetProcessHeap();
                                            v1189 = HeapAlloc(v1188, 8u, 0xA0uLL);
                                            if ( v1189 )
                                            {
                                              *((_QWORD *)v1185 + 3) = v1189;
                                              *v1189 = xmmword_18019D860[0];
                                              v1189[1] = xmmword_18019D860[1];
                                              v1189[2] = xmmword_18019D860[2];
                                              v1189[3] = xmmword_18019D860[3];
                                              v1189[4] = xmmword_18019D860[4];
                                              v1189[5] = xmmword_18019D860[5];
                                              v1189[6] = xmmword_18019D860[6];
                                              v1189[7] = xmmword_18019D860[7];
                                              v1189[8] = xmmword_18019D860[8];
                                              v1189[9] = xmmword_18019D860[9];
                                              v1185[8] = 8;
                                              v1190 = GetProcessHeap();
                                              v1191 = HeapAlloc(v1190, 8u, 8uLL);
                                              if ( v1191 )
                                              {
                                                *((_QWORD *)v1185 + 5) = v1191;
                                                v1113 = 0;
                                                *v1191 = qword_18019D900;
                                                goto LABEL_1649;
                                              }
                                            }
                                          }
                                          v1192 = (void *)*((_QWORD *)v1185 + 1);
                                          if ( v1192 )
                                          {
                                            v1193 = GetProcessHeap();
                                            HeapFree(v1193, 0, v1192);
                                            *((_QWORD *)v1185 + 1) = 0LL;
                                          }
                                          v1194 = (void *)*((_QWORD *)v1185 + 3);
                                          if ( v1194 )
                                          {
                                            v1195 = GetProcessHeap();
                                            HeapFree(v1195, 0, v1194);
                                            *((_QWORD *)v1185 + 3) = 0LL;
                                          }
                                          v1196 = (void *)*((_QWORD *)v1185 + 5);
                                          if ( v1196 )
                                          {
                                            v1197 = GetProcessHeap();
                                            HeapFree(v1197, 0, v1196);
                                            *((_QWORD *)v1185 + 5) = 0LL;
                                          }
                                          v1198 = GetProcessHeap();
                                          HeapFree(v1198, 0, v1185);
                                        }
                                        v1185 = 0LL;
                                        v1113 = -1073741801;
LABEL_1649:
                                        v93 = 4LL;
                                        if ( v1113 >= 0 )
                                        {
                                          v1851 = v1185;
                                          v1185 = 0LL;
                                        }
                                        goto LABEL_1653;
                                      }
                                      LODWORD(v1647) = 0;
                                      v1131 = 56;
                                      do
                                      {
                                        v1132 = *v1119++;
                                        if ( v1128 >= 4 )
                                        {
                                          v1117 |= v1132 << v1131;
                                          v1133 = (unsigned int)v1647;
                                        }
                                        else
                                        {
                                          v1133 = (v1132 << (v1131 - 32)) | (unsigned int)v1647;
                                          LODWORD(v1647) = v1133;
                                        }
                                        ++v1128;
                                        v1131 -= 8;
                                      }
                                      while ( v1128 < (int)v1130 );
                                      v1629 = v1117;
                                      v1128 = v1133 ^ 0xB17A307A;
                                      v1134 = v1117 ^ 0x42F6B18D;
                                      v1135 = v1133 ^ 0xB17A307A;
                                      v1136 = v1117 ^ 0x42F6B18D;
                                      v1137 = 0;
                                      if ( (v1114 & 7) != 0 )
                                      {
                                        v1138 = v1646;
                                        do
                                        {
                                          v1646 = v1138 + 1;
                                          if ( v1137 >= 4 )
                                          {
                                            v1136 = __ROL4__(v1136, 8);
                                            v1139 = v1136;
                                          }
                                          else
                                          {
                                            v1135 = __ROL4__(v1135, 8);
                                            v1139 = v1135;
                                          }
                                          *v1138 = v1139;
                                          ++v1137;
                                          v1138 = v1646;
                                        }
                                        while ( v1137 < (int)v1130 );
                                        v1127 = (char *)v1646;
                                      }
                                      else
                                      {
                                        v1127 = (char *)v1646;
                                      }
                                      if ( v1130 <= 4 )
                                      {
                                        v1129 = 0;
                                        if ( v1130 >= 4 )
                                        {
LABEL_1631:
                                          v1115 = v1622;
                                          goto LABEL_1632;
                                        }
                                        v1128 = (unsigned int)v1128 >> (8 * (4 - v1130)) << (8 * (4 - v1130));
                                      }
                                      else
                                      {
                                        v1129 = v1134 >> (8 * (8 - v1130)) << (8 * (8 - v1130));
                                      }
                                      v1127 = (char *)v1646;
                                      goto LABEL_1631;
                                    }
                                    v93 = 4LL;
                                  }
                                  v1113 = -1073741823;
                                  v1185 = 0LL;
LABEL_1653:
                                  v1452 = v1854;
                                  if ( v1854 )
                                  {
                                    v1199 = GetProcessHeap();
                                    HeapFree(v1199, 0, v1452);
                                    v1854 = 0LL;
                                    v93 = 4LL;
                                  }
                                  if ( v1185 )
                                  {
                                    v1453 = (WCHAR *)*((_QWORD *)v1185 + 1);
                                    if ( v1453 )
                                    {
                                      v1200 = GetProcessHeap();
                                      HeapFree(v1200, 0, v1453);
                                      *((_QWORD *)v1185 + 1) = 0LL;
                                    }
                                    v1454 = (WCHAR *)*((_QWORD *)v1185 + 3);
                                    if ( v1454 )
                                    {
                                      v1201 = GetProcessHeap();
                                      HeapFree(v1201, 0, v1454);
                                      *((_QWORD *)v1185 + 3) = 0LL;
                                    }
                                    v1455 = (WCHAR *)*((_QWORD *)v1185 + 5);
                                    if ( v1455 )
                                    {
                                      v1202 = GetProcessHeap();
                                      HeapFree(v1202, 0, v1455);
                                      *((_QWORD *)v1185 + 5) = 0LL;
                                    }
                                    v1203 = GetProcessHeap();
                                    HeapFree(v1203, 0, v1185);
                                    v93 = 4LL;
                                  }
LABEL_1663:
                                  v1112 = v1113 | 0x10000000;
                                  if ( v1112 >= 0 )
                                  {
                                    v1204 = (const void **)v1851;
                                    v1748 = v93;
                                    v1205 = sub_18005F608((unsigned int)v93, *(unsigned int *)v1851, &v1748);
                                    if ( v1205 < 0
                                      || (v1205 = sub_18005F608(v1748, (unsigned int)v93, &v1748), v1205 < 0)
                                      || (v1205 = sub_18005F608(v1748, *((unsigned int *)v1204 + 4), &v1748), v1205 < 0)
                                      || (v1205 = sub_18005F608(v1748, (unsigned int)v93, &v1748), v1205 < 0) )
                                    {
                                      v1208 = v1749;
                                    }
                                    else
                                    {
                                      v1205 = sub_18005F608(v1748, *((unsigned int *)v1204 + 8), &v1748);
                                      v1208 = v1749;
                                      if ( v1205 >= 0 )
                                        v1208 = v1748;
                                      v1749 = v1208;
                                    }
                                    if ( v1205 >= 0 )
                                    {
                                      v1209 = v1208;
                                      v1210 = GetProcessHeap();
                                      v1211 = (WCHAR *)HeapAlloc(v1210, 8u, v1209);
                                      v1456 = v1211;
                                      if ( v1211 )
                                      {
                                        v1856 = v1211;
                                        *(_DWORD *)v1211 = *(_DWORD *)v1204;
                                        v1205 = sub_18005F628(v1211, 4LL, &v1856);
                                        if ( v1205 >= 0 )
                                        {
                                          memcpy(v1856, v1204[1], *(unsigned int *)v1204);
                                          v1205 = sub_18005F628(v1856, *(unsigned int *)v1204, &v1856);
                                          if ( v1205 >= 0 )
                                          {
                                            v1212 = v1856;
                                            *(_DWORD *)v1856 = *((_DWORD *)v1204 + 4);
                                            v1205 = sub_18005F628(v1212, 4LL, &v1856);
                                            if ( v1205 >= 0 )
                                            {
                                              memcpy(v1856, v1204[3], *((unsigned int *)v1204 + 4));
                                              v1205 = sub_18005F628(v1856, *((unsigned int *)v1204 + 4), &v1856);
                                              if ( v1205 >= 0 )
                                              {
                                                v1213 = v1856;
                                                *(_DWORD *)v1856 = *((_DWORD *)v1204 + 8);
                                                v1205 = sub_18005F628(v1213, 4LL, &v1856);
                                                if ( v1205 >= 0 )
                                                {
                                                  memcpy(v1856, v1204[5], *((unsigned int *)v1204 + 8));
                                                  v1205 = sub_18005F628(v1856, *((unsigned int *)v1204 + 8), &v1856);
                                                  if ( v1205 >= 0 )
                                                  {
                                                    v1214 = v1456;
                                                    v1563 = v1456;
                                                    v1518 = v1749;
                                                    v93 = 4LL;
                                                    v1207 = v1490;
                                                    v1206 = 0LL;
                                                    goto LABEL_1685;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        v1215 = GetProcessHeap();
                                        HeapFree(v1215, 0, v1456);
                                      }
                                      else
                                      {
                                        v1205 = -1073741801;
                                      }
                                      v1206 = 0LL;
                                      v1207 = v1490;
                                      v93 = 4LL;
                                    }
                                    v1214 = 0LL;
LABEL_1685:
                                    v1112 = v1205 | 0x10000000;
                                    if ( v1112 < 0 )
                                    {
                                      v1231 = Src;
                                      v1232 = (int *)Src;
                                      goto LABEL_1903;
                                    }
                                    v1857 = v1206;
                                    v1216 = (unsigned int)v1206;
                                    v1750 = (unsigned int)v1206;
                                    v1858 = v1206;
                                    v1751 = (int)v1206;
                                    v1752 = 8;
                                    v1217 = sub_18005F608(8LL, v1207, &v1752);
                                    v1112 = v1217 | 0x10000000;
                                    if ( v1217 >= 0 )
                                    {
                                      v1218 = (v1752 + 7) & 0xFFFFFFF8;
                                      if ( (unsigned int)v1218 >= v1752 )
                                      {
                                        v1754 = (v1752 + 7) & 0xFFFFFFF8;
                                        v1112 = sub_18005F608(v1218, 8LL, &v1754);
                                        v1219 = v1753;
                                        if ( v1112 >= 0 )
                                          v1219 = v1754;
                                        v1753 = v1219;
                                      }
                                      else
                                      {
                                        v1112 = -1073741675;
                                      }
                                      if ( v1112 < 0 )
                                        goto LABEL_1728;
                                      if ( *(_QWORD *)&v1898[1] )
                                      {
                                        if ( v1897 > 1 )
                                        {
                                          v1220 = *(unsigned int **)&v1898[1];
                                          v1859 = *(unsigned int **)&v1898[1];
                                          while ( 1 )
                                          {
                                            v1491 = *v1220;
                                            v1112 = sub_18005F628(v1220, v93, &v1859);
                                            if ( v1112 < 0 )
                                              break;
                                            v1112 = sub_18005F628(v1859, v1491, &v1859);
                                            if ( v1112 < 0 )
                                              break;
                                            v1220 = v1859;
                                            if ( v1221 != -1 )
                                            {
                                              v1112 = sub_18005F628(v1859, v93, &v1859);
                                              if ( v1112 >= 0 )
                                              {
                                                v1216 = v1222;
                                                v1750 = v1222;
                                                v1223 = v1859;
                                                if ( !v1222 )
                                                  v1223 = 0LL;
                                                v1859 = v1223;
                                                v1857 = v1223;
                                              }
                                              break;
                                            }
                                          }
                                          if ( v1112 < 0 )
                                            goto LABEL_1728;
                                          if ( v1897 > 2 )
                                          {
                                            v1224 = *(unsigned int **)&v1898[1];
                                            v1860 = *(unsigned int **)&v1898[1];
                                            while ( 1 )
                                            {
                                              v1492 = *v1224;
                                              v1112 = sub_18005F628(v1224, v93, &v1860);
                                              if ( v1112 < 0 )
                                                break;
                                              v1112 = sub_18005F628(v1860, v1492, &v1860);
                                              if ( v1112 < 0 )
                                                break;
                                              v1224 = v1860;
                                              if ( (unsigned int)(v1226 + 1) >= 2 )
                                              {
                                                v1112 = sub_18005F628(v1860, v93, &v1860);
                                                if ( v1112 >= 0 )
                                                {
                                                  v1751 = v1227;
                                                  v1228 = v1860;
                                                  if ( !v1227 )
                                                    v1228 = 0LL;
                                                  v1860 = v1228;
                                                  v1858 = v1228;
                                                }
                                                break;
                                              }
                                            }
                                            if ( v1112 < 0 )
                                              goto LABEL_1728;
                                            v1755 = v93;
                                            v1112 = sub_18005F608((unsigned int)v93, v1225, &v1755);
                                            if ( v1112 < 0
                                              || (v1112 = sub_18005F608(v1755, (unsigned int)v93, &v1755), v1112 < 0)
                                              || (v1112 = sub_18005F608(v1755, v1216, &v1755), v1112 < 0)
                                              || (v1112 = sub_18005F608(v1755, (unsigned int)v93, &v1755), v1112 < 0) )
                                            {
                                              v1230 = v1756;
                                            }
                                            else
                                            {
                                              v1112 = sub_18005F608(v1755, v1229, &v1755);
                                              v1230 = v1756;
                                              if ( v1112 >= 0 )
                                                v1230 = v1755;
                                              v1756 = v1230;
                                            }
                                            if ( v1112 < 0 )
                                              goto LABEL_1728;
                                            if ( v1230 > 0x400000 )
                                            {
                                              v1112 = -2147418113;
                                              goto LABEL_1728;
                                            }
                                            LODWORD(v1746) = v1230;
                                          }
                                          else
                                          {
                                            v1112 = -1073741811;
                                          }
                                        }
                                        else
                                        {
                                          v1112 = -1073741811;
                                        }
                                      }
                                      else
                                      {
                                        v1112 = -1073741811;
                                      }
                                    }
                                    if ( v1112 >= 0 )
                                    {
                                      v1233 = v1746;
                                      v1234 = GetProcessHeap();
                                      v1235 = HeapAlloc(v1234, 8u, v1233);
                                      if ( v1235 )
                                      {
                                        v1231 = v1235;
                                        Src = v1235;
                                        v1112 = 0x10000000;
                                      }
                                      else
                                      {
                                        v1112 = -805306345;
                                        v1231 = Src;
                                      }
                                      v1214 = v1563;
                                      if ( v1112 >= 0 )
                                      {
                                        if ( v1563 && v1231 )
                                        {
                                          v1910[0] = v1563;
                                          v1911 = v1518;
                                          v1910[1] = v1231;
                                          v1912 = v1746;
                                          v1913 = 0;
                                          if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule) )
                                          {
                                            v1240 = (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))GetProcAddress(hModule, "NtQuerySystemInformation");
                                            if ( v1240 )
                                            {
                                              v1241 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1240)(134LL, v1910);
                                              v1112 = v1241 | 0x10000000;
                                              v1237 = v1746;
                                              if ( v1241 >= 0 )
                                                v1237 = v1912;
                                              LODWORD(v1746) = v1237;
                                              goto LABEL_1753;
                                            }
                                            v1236 = GetLastError();
                                            v1112 = v1236;
                                            if ( v1236 <= 0 )
                                            {
LABEL_1740:
                                              v1237 = v1746;
                                              if ( v1112 >= 0 )
                                              {
                                                v1112 = -2147467259;
                                                goto LABEL_1742;
                                              }
LABEL_1753:
                                              if ( v1112 == -805306333 )
                                              {
                                                v1112 = -2147024774;
                                                v93 = 4LL;
                                                v1231 = Src;
                                                goto LABEL_1901;
                                              }
LABEL_1742:
                                              v1231 = Src;
                                              v93 = 4LL;
                                              if ( v1112 < 0 )
                                                goto LABEL_1901;
                                              v1238 = 0LL;
                                              v1765 = 0;
                                              v1862 = Src;
                                              if ( v1237 < 4 )
                                              {
                                                v1239 = -1073741762;
LABEL_1810:
                                                v1245 = 0LL;
                                                goto LABEL_1811;
                                              }
                                              v1493 = *(_DWORD *)Src;
                                              v1239 = sub_18005F628(Src, 4LL, &v1862);
                                              if ( v1239 < 0 )
                                                goto LABEL_1810;
                                              v1239 = sub_18005F608(0LL, (unsigned int)v93, &v1765);
                                              if ( v1239 < 0 )
                                              {
LABEL_1759:
                                                v1245 = v1242;
                                                v1231 = Src;
                                                goto LABEL_1811;
                                              }
                                              if ( v1243 - v1765 < (unsigned int)v1244 )
                                              {
                                                v1239 = -1073741762;
                                                goto LABEL_1759;
                                              }
                                              v1457 = (LPCWSTR)v1862;
                                              v1591 = v1244;
                                              v1239 = sub_18005F628(v1862, v1244, &v1862);
                                              if ( v1239 >= 0 )
                                              {
                                                v1239 = sub_18005F608(v1765, v1246, &v1765);
                                                if ( v1239 >= 0 )
                                                {
                                                  if ( v1247 - v1765 < (unsigned int)v93 )
                                                    goto LABEL_1808;
                                                  v1544 = *(_DWORD *)v1862;
                                                  v1239 = sub_18005F628(v1862, v93, &v1862);
                                                  if ( v1239 < 0 )
                                                    goto LABEL_1809;
                                                  v1239 = sub_18005F608(v1765, (unsigned int)v93, &v1765);
                                                  if ( v1239 < 0 )
                                                    goto LABEL_1809;
                                                  if ( v1248 - v1765 < v1249 )
                                                    goto LABEL_1808;
                                                  v1654 = (SIZE_T)v1862;
                                                  v1239 = sub_18005F628(v1862, v1249, &v1862);
                                                  if ( v1239 < 0 )
                                                    goto LABEL_1809;
                                                  v1239 = sub_18005F608(v1765, v1250, &v1765);
                                                  if ( v1239 < 0 )
                                                    goto LABEL_1809;
                                                  if ( v1251 - v1765 < (unsigned int)v93 )
                                                    goto LABEL_1808;
                                                  v1519 = *(_DWORD *)v1862;
                                                  v1239 = sub_18005F628(v1862, v93, &v1862);
                                                  if ( v1239 < 0 )
                                                    goto LABEL_1809;
                                                  v1239 = sub_18005F608(v1765, (unsigned int)v93, &v1765);
                                                  if ( v1239 < 0 )
                                                    goto LABEL_1809;
                                                  if ( v1252 - v1765 < v1519 )
                                                    goto LABEL_1808;
                                                  v1239 = sub_18005F608(v1765, v1519, &v1765);
                                                  if ( v1239 >= 0 )
                                                  {
                                                    if ( v1253 == v1765 && v1493 + v1254 + v1519 + 12LL == v1253 )
                                                    {
                                                      v1255 = GetProcessHeap();
                                                      v1256 = HeapAlloc(v1255, 8u, 0x30uLL);
                                                      v1257 = v1256;
                                                      if ( !v1256 )
                                                      {
                                                        v1239 = -1073741801;
                                                        goto LABEL_1797;
                                                      }
                                                      if ( v1457 )
                                                      {
                                                        *(_DWORD *)v1256 = v1493;
                                                        v1258 = GetProcessHeap();
                                                        v1259 = HeapAlloc(v1258, 8u, v1591);
                                                        if ( !v1259 )
                                                          goto LABEL_1788;
                                                        v1257[1] = v1259;
                                                        memcpy(v1259, v1457, v1591);
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)v1256 = 0;
                                                        v1256[1] = 0LL;
                                                      }
                                                      if ( v1654 )
                                                      {
                                                        *((_DWORD *)v1257 + 4) = v1544;
                                                        v1260 = GetProcessHeap();
                                                        v1261 = HeapAlloc(v1260, 8u, v1544);
                                                        if ( !v1261 )
                                                          goto LABEL_1788;
                                                        v1257[3] = v1261;
                                                        memcpy(v1261, (const void *)v1654, v1544);
                                                      }
                                                      else
                                                      {
                                                        *((_DWORD *)v1257 + 4) = 0;
                                                        v1257[3] = 0LL;
                                                      }
                                                      if ( !v1862 )
                                                      {
                                                        *((_DWORD *)v1257 + 8) = 0;
                                                        v1257[5] = 0LL;
                                                        goto LABEL_1796;
                                                      }
                                                      *((_DWORD *)v1257 + 8) = v1519;
                                                      v1262 = GetProcessHeap();
                                                      v1263 = HeapAlloc(v1262, 8u, v1519);
                                                      if ( v1263 )
                                                      {
                                                        v1257[5] = v1263;
                                                        memcpy(v1263, v1862, v1519);
LABEL_1796:
                                                        v1238 = v1257;
                                                        v1239 = 0;
LABEL_1797:
                                                        if ( v1239 < 0 )
                                                        {
                                                          if ( v1238 )
                                                          {
                                                            v1461 = (WCHAR *)v1238[1];
                                                            if ( v1461 )
                                                            {
                                                              v1268 = GetProcessHeap();
                                                              HeapFree(v1268, 0, v1461);
                                                              v1238[1] = 0LL;
                                                            }
                                                            v1462 = (WCHAR *)v1238[3];
                                                            if ( v1462 )
                                                            {
                                                              v1269 = GetProcessHeap();
                                                              HeapFree(v1269, 0, v1462);
                                                              v1238[3] = 0LL;
                                                            }
                                                            v1463 = (WCHAR *)v1238[5];
                                                            if ( v1463 )
                                                            {
                                                              v1270 = GetProcessHeap();
                                                              HeapFree(v1270, 0, v1463);
                                                              v1238[5] = 0LL;
                                                            }
                                                            v1271 = GetProcessHeap();
                                                            HeapFree(v1271, 0, v1238);
                                                            v93 = 4LL;
                                                            v1245 = (unsigned int *)v1651;
                                                            v1231 = Src;
                                                          }
                                                          else
                                                          {
                                                            v93 = 4LL;
                                                            v1245 = (unsigned int *)v1651;
                                                            v1231 = Src;
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v1245 = (unsigned int *)v1238;
                                                          v1651 = (SIZE_T)v1238;
                                                          v93 = 4LL;
                                                          v1231 = Src;
                                                        }
LABEL_1811:
                                                        v1112 = v1239 | 0x10000000;
                                                        if ( v1112 >= 0 )
                                                        {
                                                          v1863 = 0LL;
                                                          if ( v1245 )
                                                          {
                                                            v1272 = (const WCHAR *)*((_QWORD *)v1245 + 1);
                                                            v1464 = v1272;
                                                            if ( v1272 )
                                                            {
                                                              v1273 = *v1245;
                                                              if ( (_DWORD)v1273 )
                                                              {
                                                                v1274 = v1273 - 8;
                                                                v1592 = v1273 - 8;
                                                                v1275 = (int *)sub_180055F40(v1273 - 8);
                                                                v1276 = v1275;
                                                                v1654 = (SIZE_T)v1275;
                                                                if ( !v1275 )
                                                                  goto LABEL_1851;
                                                                v1923 = 0x7F1137FAB69605ELL;
                                                                v1277 = v1272;
                                                                v1278 = v1275;
                                                                v1279 = v1274 & 7;
                                                                if ( (v1274 & 7) == 0 )
                                                                {
                                                                  v1545 = 0;
                                                                  v1291 = 0;
                                                                  v1285 = 0;
                                                                  v93 = 4LL;
                                                                  goto LABEL_1831;
                                                                }
                                                                v1653 = 0;
                                                                v1280 = 0;
                                                                v1281 = 0;
                                                                v1282 = 56;
                                                                do
                                                                {
                                                                  v1283 = *(unsigned __int8 *)v1277;
                                                                  v1277 = (const WCHAR *)((char *)v1277 + 1);
                                                                  if ( v1281 >= 4 )
                                                                  {
                                                                    v1284 = (v1283 << v1282) | v1653;
                                                                    v1653 = v1284;
                                                                  }
                                                                  else
                                                                  {
                                                                    v1280 |= v1283 << (v1282 - 32);
                                                                    v1284 = v1653;
                                                                  }
                                                                  ++v1281;
                                                                  v1282 -= 8;
                                                                }
                                                                while ( v1281 < (int)v1279 );
                                                                v1545 = v1280;
                                                                v1285 = v1280 ^ 0x92F65A5;
                                                                v1286 = v1284 ^ 0x699A899C;
                                                                v1287 = v1285;
                                                                v1288 = v1284 ^ 0x699A899C;
                                                                v1289 = 0;
                                                                if ( (v1274 & 7) != 0 )
                                                                {
                                                                  do
                                                                  {
                                                                    if ( v1289 >= 4 )
                                                                    {
                                                                      v1288 = __ROL4__(v1288, 8);
                                                                      v1290 = v1288;
                                                                    }
                                                                    else
                                                                    {
                                                                      v1287 = __ROL4__(v1287, 8);
                                                                      v1290 = v1287;
                                                                    }
                                                                    *(_BYTE *)v1278 = v1290;
                                                                    ++v1289;
                                                                    v1278 = (int *)((char *)v1278 + 1);
                                                                  }
                                                                  while ( v1289 < (int)v1279 );
                                                                }
                                                                if ( v1279 <= 4 )
                                                                {
                                                                  v1291 = 0;
                                                                  if ( v1279 < 4 )
                                                                  {
                                                                    v93 = 4LL;
                                                                    v1285 = v1285 >> (8 * (4 - v1279)) << (8 * (4 - v1279));
                                                                    goto LABEL_1830;
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  v1291 = v1286 >> (8 * (8 - v1279)) << (8 * (8 - v1279));
                                                                }
                                                                v93 = 4LL;
LABEL_1830:
                                                                v1276 = (int *)v1654;
LABEL_1831:
                                                                Sizei = v1274 >> 3;
                                                                if ( v1274 >> 3 )
                                                                {
                                                                  v1292 = HIDWORD(v1923);
                                                                  v1630 = WORD2(v1923);
                                                                  LODWORD(v1647) = 24670;
                                                                  LODWORD(v1646) = WORD1(v1923);
                                                                  v1293 = (char *)v1278 + 7;
                                                                  v1294 = (unsigned __int8 *)(v1277 + 1);
                                                                  v1295 = HIWORD(HIDWORD(v1923));
                                                                  v1296 = Sizei;
                                                                  v1297 = v1545;
                                                                  do
                                                                  {
                                                                    v1298 = v1294[1] | ((*v1294 | ((*(v1294 - 1) | (*(v1294 - 2) << 8)) << 8)) << 8);
                                                                    v1299 = v1294[5] | ((v1294[4] | ((v1294[3] | (v1294[2] << 8)) << 8)) << 8);
                                                                    v1300 = v1298 ^ v1285;
                                                                    v1301 = v1300 ^ v1299 ^ v1291 ^ v1292 ^ 0xAB69605E;
                                                                    v1302 = (__ROL4__(v1301 + 1419157410, 5) * v1630
                                                                           + __ROL4__(v1301, 10)) ^ v1300;
                                                                    v1303 = (WORD1(v1923) * __ROR4__(v1302 + v1292, 9)
                                                                           - __ROL4__(v1302, 2)) ^ v1301;
                                                                    v1304 = ((_DWORD)v1647 * (v1303 - v1630)
                                                                           - (v1303 >> 13)) ^ v1302;
                                                                    v1305 = (v1295 * __ROL4__(WORD1(v1923) ^ v1304, 6)
                                                                           - __ROL4__(v1304, 2)) ^ v1303;
                                                                    v1306 = (v1292 - (v1305 ^ 0xAB69605E)) ^ v1304;
                                                                    v1307 = (WORD1(v1923) * (v1630 ^ v1306)) ^ __ROR4__(v1306, 6) ^ v1305;
                                                                    v1308 = ((_DWORD)v1647 * __ROR4__(v1307 + v1292, 15)
                                                                           + __ROL4__(v1307, 2)) ^ v1306;
                                                                    v1309 = (v1295 * __ROR4__(v1308 + 1419157410, 14)
                                                                           - __ROL4__(v1308, 8)) ^ v1307;
                                                                    v1310 = (__ROR4__(v1309 ^ 0xAB69605E, 12) * v1630) ^ __ROR4__(v1309, 10) ^ v1308;
                                                                    v1311 = (v1310 >> 10) ^ (WORD1(v1923)
                                                                                           * (v1295 ^ v1310)) ^ v1309;
                                                                    v1312 = (v1295
                                                                           * ((_DWORD)v1647 + __ROR4__(~v1311, 5))) ^ v1310;
                                                                    v1313 = v1311 ^ (v1312 - v1295) ^ 0xAB69605E;
                                                                    v1314 = ((v1313 >> 2)
                                                                           + __ROL4__(v1295 ^ v1313, 2) * v1630) ^ v1312;
                                                                    v1315 = ((_DWORD)v1646 * __ROR4__(v1314 - v1292, 6)
                                                                           + __ROL4__(v1314, 7)) ^ v1313;
                                                                    v1316 = ((_DWORD)v1647 * (v1630 ^ v1315)
                                                                           + __ROR4__(v1315, 9)) ^ v1314;
                                                                    v1317 = (v1295 * __ROL4__(WORD1(v1923) ^ v1316, 5)
                                                                           + __ROL4__(v1316, 7)) ^ v1315;
                                                                    v1318 = v1292 ^ v1317 ^ v1316 ^ 0xAB69605E;
                                                                    v1319 = (v1630 * (__ROR4__(v1318, 3) - WORD1(v1923))) ^ v1317;
                                                                    v1320 = ((_DWORD)v1647 * __ROR4__(v1319 - v1292, 1)
                                                                           - __ROR4__(v1319, 6)) ^ v1318;
                                                                    v1321 = (v1295 * __ROL4__(v1320 - 1419157410, 3)
                                                                           + __ROL4__(v1320, 14)) ^ v1319;
                                                                    v1322 = (v1630 * __ROL4__(v1321 - 1419157410, 15)
                                                                           - __ROR4__(v1321, 14)) ^ v1320;
                                                                    v1323 = (v1322 >> 3) ^ (WORD1(v1923)
                                                                                          * (v1322 ^ (unsigned int)v1647)) ^ v1321;
                                                                    v1324 = v1297 ^ ((_DWORD)v1647
                                                                                   * __ROL4__(v1292 ^ v1323, 4)) ^ __ROL4__(v1323, 2) ^ v1322;
                                                                    v1325 = v1653 ^ v1323;
                                                                    *(v1293 - 4) = v1324;
                                                                    v1326 = __ROR4__(v1324, 8);
                                                                    *v1293 = v1325;
                                                                    v1327 = __ROR4__(v1325, 8);
                                                                    *(v1293 - 5) = v1326;
                                                                    v1328 = __ROR4__(v1326, 8);
                                                                    *(v1293 - 1) = v1327;
                                                                    v1329 = __ROR4__(v1327, 8);
                                                                    *(v1293 - 6) = v1328;
                                                                    v1330 = __ROR4__(v1328, 8);
                                                                    *(v1293 - 2) = v1329;
                                                                    v1331 = __ROR4__(v1329, 8);
                                                                    *(v1293 - 7) = v1330;
                                                                    *(v1293 - 3) = v1331;
                                                                    v1285 = __ROR4__(v1330, 8);
                                                                    v1291 = __ROR4__(v1331, 8);
                                                                    v1297 = v1298;
                                                                    v1653 = v1299;
                                                                    v1293 += 8;
                                                                    --v1296;
                                                                    v1294 += 8;
                                                                  }
                                                                  while ( v1296 );
                                                                  v7 = v1659;
                                                                  v3 = v1768;
                                                                  v4 = v1769;
                                                                  v92 = v1642;
                                                                  v1274 = v1592;
                                                                  v1276 = (int *)v1654;
                                                                }
                                                                v1332 = 0LL;
                                                                if ( v1274 )
                                                                {
                                                                  if ( v1274 < 0x20 )
                                                                  {
                                                                    v1340 = 0;
                                                                  }
                                                                  else
                                                                  {
                                                                    v1333 = 0LL;
                                                                    v1334 = 0LL;
                                                                    do
                                                                    {
                                                                      v1333 = _mm_xor_si128(
                                                                                _mm_loadu_si128((const __m128i *)((char *)v1276 + v1332)),
                                                                                v1333);
                                                                      v1335 = _mm_xor_si128(
                                                                                _mm_loadu_si128((const __m128i *)((char *)v1276 + v1332 + 16)),
                                                                                v1334);
                                                                      v1334 = v1335;
                                                                      v1332 += 32LL;
                                                                    }
                                                                    while ( v1332 < (v1274 & 0xFFFFFFFFFFFFFFE0uLL) );
                                                                    v1336 = _mm_xor_si128(v1333, v1335);
                                                                    v1337 = _mm_xor_si128(
                                                                              v1336,
                                                                              _mm_srli_si128(v1336, 8));
                                                                    v1338 = _mm_xor_si128(
                                                                              v1337,
                                                                              _mm_srli_si128(v1337, 4));
                                                                    v1339 = _mm_xor_si128(
                                                                              v1338,
                                                                              _mm_srli_si128(v1338, 2));
                                                                    v1340 = _mm_cvtsi128_si32(
                                                                              _mm_xor_si128(
                                                                                v1339,
                                                                                _mm_srli_si128(v1339, 1)));
                                                                  }
                                                                  for ( ; v1332 < v1274; ++v1332 )
                                                                    v1340 ^= *((_BYTE *)v1276 + v1332);
                                                                }
                                                                else
                                                                {
                                                                  v1340 = 0;
                                                                }
                                                                if ( v1340 == *(_QWORD *)((char *)v1464 + v1274) )
                                                                {
                                                                  v1864 = v1274;
                                                                  v1232 = v1276;
                                                                  v1649 = v1276;
                                                                  HIDWORD(v1746) = v1274;
                                                                  v1112 = 0x10000000;
LABEL_1854:
                                                                  if ( v1112 < 0 )
                                                                  {
LABEL_1897:
                                                                    v1231 = Src;
                                                                    goto LABEL_1902;
                                                                  }
                                                                  v1757[0] = 0;
                                                                  v1865 = v1232;
                                                                  if ( (unsigned int)v1274 < 4 )
                                                                    goto LABEL_1877;
                                                                  v1494 = *v1232;
                                                                  v1344 = sub_18005F628(v1232, 4LL, &v1865);
                                                                  if ( v1344 < 0 )
                                                                    goto LABEL_1896;
                                                                  v1344 = sub_18005F608(0LL, (unsigned int)v93, v1757);
                                                                  if ( v1344 < 0 )
                                                                    goto LABEL_1896;
                                                                  if ( (unsigned int)(v1274 - v1757[0]) < 4 )
                                                                    goto LABEL_1894;
                                                                  v1546 = *(_DWORD *)v1865;
                                                                  v1344 = sub_18005F628(v1865, v93, &v1865);
                                                                  if ( v1344 < 0 )
                                                                    goto LABEL_1895;
                                                                  v1344 = sub_18005F608(v1345, (unsigned int)v93, v1757);
                                                                  if ( v1344 < 0 )
                                                                    goto LABEL_1895;
                                                                  if ( (int)v1274 - v1757[0] < v1346 )
                                                                  {
LABEL_1894:
                                                                    v1344 = -1073741762;
                                                                  }
                                                                  else
                                                                  {
                                                                    v1344 = sub_18005F608(v1757[0], v1346, v1757);
                                                                    if ( v1344 >= 0 )
                                                                    {
                                                                      v1348 = (unsigned int)v1274;
                                                                      v1349 = (unsigned int)v1347;
                                                                      v1465 = v1347;
                                                                      v1350 = v1865;
                                                                      v1232 = (int *)v1649;
                                                                      if ( (char *)((unsigned __int64)v1649 + v1348) >= (char *)v1865 + (unsigned __int64)v1347
                                                                        && (unsigned __int64)(v1348
                                                                                            + (_BYTE *)v1649
                                                                                            - (_BYTE *)v1347
                                                                                            - (_QWORD)v1865) < 8 )
                                                                      {
                                                                        v1351 = 0LL;
                                                                        v1593 = 0LL;
                                                                        v1344 = 0;
                                                                        v1352 = 0;
                                                                        v1520 = 0;
                                                                        if ( v1865 )
                                                                        {
                                                                          v1344 = sub_18005F628(
                                                                                    v1865,
                                                                                    (unsigned int)v1347,
                                                                                    &v1866);
                                                                          if ( v1344 < 0 )
                                                                          {
LABEL_1882:
                                                                            v1232 = (int *)v1649;
LABEL_1891:
                                                                            if ( v1344 >= 0
                                                                              && v1494 != LODWORD(v1896[0]) )
                                                                            {
                                                                              v1344 = -1073741762;
                                                                            }
                                                                            goto LABEL_1896;
                                                                          }
                                                                          v1354 = v1866;
                                                                          if ( (unsigned __int64)v1350 < v1866 )
                                                                          {
                                                                            while ( 1 )
                                                                            {
                                                                              v1344 = sub_18005F628(v1353, v93, &v1867);
                                                                              if ( v1344 < 0 )
                                                                                goto LABEL_1882;
                                                                              if ( v1867 > v1354 )
                                                                                goto LABEL_1878;
                                                                              v1356 = sub_18005F608(
                                                                                        (unsigned int)v93,
                                                                                        *v1355,
                                                                                        v1758);
                                                                              v1344 = v1356;
                                                                              if ( v1356 >= 0 )
                                                                                v1358 = v1758[0];
                                                                              v1757[1] = v1358;
                                                                              if ( v1356 < 0 )
                                                                                goto LABEL_1882;
                                                                              v1344 = sub_18005F628(
                                                                                        v1357,
                                                                                        v1358,
                                                                                        &v1868);
                                                                              if ( v1344 < 0 )
                                                                                goto LABEL_1882;
                                                                              v1353 = v1868;
                                                                              if ( v1868 > v1354 )
                                                                              {
LABEL_1878:
                                                                                v1344 = -1073741811;
                                                                                goto LABEL_1895;
                                                                              }
                                                                              v1352 = ++v1520;
                                                                              if ( v1868 >= v1354 )
                                                                              {
                                                                                LODWORD(v1347) = v1546;
                                                                                goto LABEL_1880;
                                                                              }
                                                                            }
                                                                          }
                                                                          v1352 = 0;
LABEL_1880:
                                                                          v1359 = v1353 == v1354;
                                                                          v1232 = (int *)v1649;
                                                                          if ( !v1359 )
                                                                          {
                                                                            v1344 = -1073741811;
                                                                            goto LABEL_1896;
                                                                          }
                                                                          v1349 = (SIZE_T)v1465;
                                                                          v1351 = 0LL;
                                                                        }
                                                                        if ( (_DWORD)v1347 )
                                                                        {
                                                                          v1360 = GetProcessHeap();
                                                                          v1351 = HeapAlloc(v1360, 8u, v1349);
                                                                          v1593 = (SIZE_T)v1351;
                                                                          v93 = 4LL;
                                                                          v1232 = (int *)v1649;
                                                                          if ( !v1351 )
                                                                          {
                                                                            v1344 = -1073741801;
                                                                            goto LABEL_1891;
                                                                          }
                                                                          v1344 = 0;
                                                                          v1352 = v1520;
                                                                        }
                                                                        if ( v1350 )
                                                                        {
                                                                          memcpy(v1351, v1350, v1349);
                                                                          v93 = 4LL;
                                                                          v1351 = (void *)v1593;
                                                                          v1352 = v1520;
                                                                          v1232 = (int *)v1649;
                                                                        }
                                                                        v1896[1] = v1351;
                                                                        LODWORD(v1896[0]) = v1352;
                                                                        goto LABEL_1891;
                                                                      }
LABEL_1877:
                                                                      v1344 = -1073741762;
LABEL_1896:
                                                                      v1112 = v1344 | 0x10000000;
                                                                      goto LABEL_1897;
                                                                    }
                                                                  }
LABEL_1895:
                                                                  v1232 = (int *)v1649;
                                                                  goto LABEL_1896;
                                                                }
                                                                v1341 = GetProcessHeap();
                                                                HeapFree(v1341, 0, (LPVOID)v1654);
LABEL_1851:
                                                                v93 = 4LL;
                                                                v1342 = v1863;
                                                                v1112 = -805306367;
                                                                if ( v1863 )
                                                                {
                                                                  v1343 = GetProcessHeap();
                                                                  HeapFree(v1343, 0, v1342);
                                                                  v93 = 4LL;
                                                                }
                                                                v1232 = (int *)v1649;
                                                                LODWORD(v1274) = HIDWORD(v1746);
                                                                goto LABEL_1854;
                                                              }
                                                            }
                                                          }
                                                          v1112 = -805306355;
                                                        }
LABEL_1901:
                                                        v1232 = (int *)v1649;
                                                        goto LABEL_1902;
                                                      }
LABEL_1788:
                                                      v1458 = (WCHAR *)v1257[1];
                                                      if ( v1458 )
                                                      {
                                                        v1264 = GetProcessHeap();
                                                        HeapFree(v1264, 0, v1458);
                                                        v1257[1] = 0LL;
                                                      }
                                                      v1459 = (WCHAR *)v1257[3];
                                                      if ( v1459 )
                                                      {
                                                        v1265 = GetProcessHeap();
                                                        HeapFree(v1265, 0, v1459);
                                                        v1257[3] = 0LL;
                                                      }
                                                      v1460 = (WCHAR *)v1257[5];
                                                      if ( v1460 )
                                                      {
                                                        v1266 = GetProcessHeap();
                                                        HeapFree(v1266, 0, v1460);
                                                        v1257[5] = 0LL;
                                                      }
                                                      v1267 = GetProcessHeap();
                                                      HeapFree(v1267, 0, v1257);
                                                      v1239 = -1073741801;
                                                      goto LABEL_1797;
                                                    }
LABEL_1808:
                                                    v1239 = -1073741762;
                                                  }
                                                }
                                              }
LABEL_1809:
                                              v1231 = Src;
                                              goto LABEL_1810;
                                            }
                                          }
                                          else
                                          {
                                            v1236 = GetLastError();
                                            v1112 = v1236;
                                            if ( v1236 <= 0 )
                                              goto LABEL_1740;
                                          }
                                          v1112 = (unsigned __int16)v1236 | 0x80070000;
                                          goto LABEL_1740;
                                        }
                                        v1112 = -2147024809;
                                      }
                                      v93 = 4LL;
                                      v1232 = (int *)v1649;
                                      goto LABEL_1903;
                                    }
LABEL_1728:
                                    v1231 = Src;
                                    v1232 = (int *)Src;
LABEL_1902:
                                    v1214 = v1563;
LABEL_1903:
                                    v1361 = v1650;
                                    if ( v1650 )
                                    {
                                      v1362 = GetProcessHeap();
                                      HeapFree(v1362, 0, v1361);
                                      v93 = 4LL;
                                      v1231 = Src;
                                      v1232 = (int *)v1649;
                                      v1214 = v1563;
                                    }
                                    v5 = (__int64)v1851;
                                    if ( v1851 )
                                    {
                                      v1363 = (void *)*((_QWORD *)v1851 + 1);
                                      if ( v1363 )
                                      {
                                        v1364 = GetProcessHeap();
                                        HeapFree(v1364, 0, v1363);
                                        *(_QWORD *)(v5 + 8) = 0LL;
                                      }
                                      v1365 = *(void **)(v5 + 24);
                                      if ( v1365 )
                                      {
                                        v1366 = GetProcessHeap();
                                        HeapFree(v1366, 0, v1365);
                                        *(_QWORD *)(v5 + 24) = 0LL;
                                      }
                                      v1367 = *(void **)(v5 + 40);
                                      if ( v1367 )
                                      {
                                        v1368 = GetProcessHeap();
                                        HeapFree(v1368, 0, v1367);
                                        *(_QWORD *)(v5 + 40) = 0LL;
                                      }
                                      v1369 = GetProcessHeap();
                                      HeapFree(v1369, 0, (LPVOID)v5);
                                      v5 = 0LL;
                                      v1851 = 0LL;
                                      v93 = 4LL;
                                      v1231 = Src;
                                      v1232 = (int *)v1649;
                                      v1214 = v1563;
                                    }
                                    if ( v1214 )
                                    {
                                      v1370 = GetProcessHeap();
                                      HeapFree(v1370, 0, v1563);
                                      v93 = 4LL;
                                      v1231 = Src;
                                      v1232 = (int *)v1649;
                                    }
                                    if ( v1231 )
                                    {
                                      v1371 = GetProcessHeap();
                                      HeapFree(v1371, 0, Src);
                                      v93 = 4LL;
                                      v1232 = (int *)v1649;
                                    }
                                    v1372 = (_QWORD *)v1651;
                                    if ( v1651 )
                                    {
                                      v1373 = *(void **)(v1651 + 8);
                                      if ( v1373 )
                                      {
                                        v1374 = GetProcessHeap();
                                        HeapFree(v1374, 0, v1373);
                                        v1372[1] = 0LL;
                                      }
                                      v1375 = (void *)v1372[3];
                                      if ( v1375 )
                                      {
                                        v1376 = GetProcessHeap();
                                        HeapFree(v1376, 0, v1375);
                                        v1372[3] = 0LL;
                                      }
                                      v5 = v1372[5];
                                      if ( v5 )
                                      {
                                        v1377 = GetProcessHeap();
                                        HeapFree(v1377, 0, (LPVOID)v5);
                                        v5 = 0LL;
                                        v1372[5] = 0LL;
                                      }
                                      v1378 = GetProcessHeap();
                                      HeapFree(v1378, 0, v1372);
                                      v93 = 4LL;
                                      v1232 = (int *)v1649;
                                    }
                                    if ( v1232 )
                                    {
                                      v1379 = GetProcessHeap();
                                      HeapFree(v1379, 0, v1649);
                                      v93 = 4LL;
                                    }
                                    if ( v1112 >= 0 )
                                    {
                                      if ( LODWORD(v1896[0]) )
                                      {
                                        v1380 = (void **)v1896[1];
                                        if ( v1896[1] )
                                        {
                                          v1869[0] = v1896[1];
                                          if ( (int)sub_18005F628(v1896[1], v93, v1869) >= 0 )
                                          {
                                            v1758[1] = v1381;
                                            v1383 = (int *)v1869[0];
                                            if ( !v1381 )
                                              v1383 = (int *)v5;
                                            v1869[0] = v1383;
                                            v1869[1] = v1383;
                                            if ( v1381 == 4 )
                                            {
                                              v1759 = *v1383;
                                              if ( v1759 >= 0 && v1382 > 1 )
                                              {
                                                for ( jj = v1380;
                                                      (int)sub_18005F628(v1380, v93, &jj) >= 0
                                                   && (int)sub_18005F628(jj, *(unsigned int *)v1380, &jj) >= 0;
                                                      v1380 = jj )
                                                {
                                                  if ( v1384 != -1 )
                                                  {
                                                    v1385 = *(_DWORD *)jj;
                                                    if ( (int)sub_18005F628(jj, v93, &jj) >= 0 )
                                                    {
                                                      v1760 = v1385;
                                                      v1386 = jj;
                                                      if ( !v1385 )
                                                        v1386 = (void **)v5;
                                                      jj = v1386;
                                                      v1870[1] = v1386;
                                                      if ( v1385 == 8 )
                                                        v1870[2] = *v1386;
                                                    }
                                                    goto LABEL_1948;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    goto LABEL_1948;
                                  }
LABEL_1898:
                                  v1231 = Src;
                                  v1232 = (int *)Src;
                                  v1214 = Src;
                                  goto LABEL_1903;
                                }
                              }
                            }
                          }
LABEL_1947:
                          v5 = 0LL;
LABEL_1948:
                          v1898[0] = v5;
                          v1897 = v5;
                          v1387 = *(void **)&v1898[1];
                          if ( *(_QWORD *)&v1898[1] )
                          {
                            v1388 = GetProcessHeap();
                            HeapFree(v1388, 0, v1387);
                            *(_QWORD *)&v1898[1] = v5;
                            v93 = 4LL;
                          }
                          HIDWORD(v1896[0]) = v5;
                          LODWORD(v1896[0]) = v5;
                          v1389 = v1896[1];
                          if ( v1896[1] )
                          {
                            v1390 = GetProcessHeap();
                            HeapFree(v1390, 0, v1389);
                            v1896[1] = (LPVOID)v5;
                            v93 = 4LL;
                          }
                          v1391 = v1643;
                          if ( v1643 )
                          {
                            v1392 = GetProcessHeap();
                            HeapFree(v1392, 0, v1391);
                            v93 = 4LL;
                          }
                          v1393 = (WCHAR *)v1645;
                          if ( !v1645 )
                            goto LABEL_1957;
                          v1394 = GetProcessHeap();
                          HeapFree(v1394, 0, v1393);
LABEL_1956:
                          v93 = 4LL;
LABEL_1957:
                          v94 = 1;
LABEL_1958:
                          v1761 = v1661;
                          v1395 = v1660;
                          v1654 = v5;
                          v1771 = (int *)v1631;
                          goto LABEL_1963;
                        }
                        v1561 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0F8[0])(0LL, 0LL, 1027LL);
                        if ( !v1561 )
                        {
                          GetLastError();
                          goto LABEL_1538;
                        }
                        qword_18019E4C0 = off_18019C098[0]();
                        v505 = dword_18019E438;
                        Sizee = dword_18019E438;
                        memset(&v1922[14], 0, 0x70uLL);
                        v1893 = 0LL;
                        v1726 = 1;
                        Src = 0LL;
                        v1651 = 0LL;
                        v1946 = 0LL;
                        v1947 = 0LL;
                        v1948 = 0LL;
                        v1949 = 0;
                        v1649 = 0LL;
                        while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
                          ;
                        v506 = dword_18019E4C8;
                        if ( dword_18019E4C8 )
                          goto LABEL_791;
                        v1470 = 0;
                        v1498 = 0;
                        v1605 = 0;
                        v1822 = 0LL;
                        v507 = (char *)sub_180055F40(0x338uLL);
                        v1433 = (WCHAR *)v507;
                        if ( v507 )
                        {
                          v508 = -1;
                          v509 = 0;
                          v510 = 0;
                          v511 = v507 + 7;
                          v512 = (unsigned __int8 *)&unk_18015F1E2;
                          v513 = 103LL;
                          v514 = 0;
                          do
                          {
                            v515 = v512[1] | ((*v512 | ((*(v512 - 1) | (*(v512 - 2) << 8)) << 8)) << 8);
                            v516 = v512[5] | ((v512[4] | ((v512[3] | (v512[2] << 8)) << 8)) << 8);
                            v517 = v515 ^ v510;
                            v512 += 8;
                            v518 = v516 ^ v509 ^ v517 ^ 0xAC987321;
                            v519 = (4991 * __ROL4__(v518 + 1419157410, 5) + __ROL4__(v518, 10)) ^ v517;
                            v520 = (43881 * __ROR4__(v519 + 133239679, 9) - __ROL4__(v519, 2)) ^ v518;
                            v521 = (24670 * v520 - (v520 >> 13) - 123127970) ^ v519;
                            v522 = (2033 * __ROL4__(v521 ^ 0xAB69, 6) - __ROL4__(v521, 2)) ^ v520;
                            v523 = (133239679 - (v522 ^ 0xAB69605E)) ^ v521;
                            v524 = (43881 * (v523 ^ 0x137F)) ^ __ROR4__(v523, 6) ^ v522;
                            v525 = (24670 * __ROR4__(v524 + 133239679, 15) + __ROL4__(v524, 2)) ^ v523;
                            v526 = (2033 * __ROR4__(v525 + 1419157410, 14) - __ROL4__(v525, 8)) ^ v524;
                            v527 = (4991 * __ROR4__(v526 ^ 0xAB69605E, 12)) ^ __ROR4__(v526, 10) ^ v525;
                            v528 = v526 ^ (v527 >> 10) ^ (43881 * (v527 ^ 0x7F1));
                            v529 = (2033 * (__ROR4__(~v528, 5) + 24670)) ^ v527;
                            v530 = v528 ^ (v529 - 2033) ^ 0xAB69605E;
                            v531 = ((v530 >> 2) + 4991 * __ROL4__(v528 ^ (v529 - 2033) ^ 0xAB6967AF, 2)) ^ v529;
                            v532 = (43881 * __ROR4__(v531 - 133239679, 6) + __ROL4__(v531, 7)) ^ v530;
                            v533 = (24670 * (v532 ^ 0x137F) + __ROR4__(v532, 9)) ^ v531;
                            v534 = (2033 * __ROL4__(v533 ^ 0xAB69, 5) + __ROL4__(v533, 7)) ^ v532;
                            v535 = v534 ^ v533 ^ 0xAC987321;
                            v536 = (4991 * __ROR4__(v535, 3) - 219010071) ^ v534;
                            v537 = (24670 * __ROR4__(v536 - 133239679, 1) - __ROR4__(v536, 6)) ^ v535;
                            v538 = (2033 * __ROL4__(v537 - 1419157410, 3) + __ROL4__(v537, 14)) ^ v536;
                            v539 = (4991 * __ROL4__(v538 - 1419157410, 15) - __ROR4__(v538, 14)) ^ v537;
                            v540 = (v539 >> 3) ^ (43881 * (v539 ^ 0x605E)) ^ v538;
                            v541 = v514 ^ (24670 * __ROL4__(v540 ^ 0x7F1137F, 4)) ^ __ROL4__(v540, 2) ^ v539;
                            v542 = v508 ^ v540;
                            *(v511 - 4) = v541;
                            v543 = __ROR4__(v541, 8);
                            *v511 = v542;
                            v544 = __ROR4__(v542, 8);
                            *(v511 - 5) = v543;
                            v545 = __ROR4__(v543, 8);
                            *(v511 - 1) = v544;
                            v546 = __ROR4__(v544, 8);
                            *(v511 - 6) = v545;
                            v547 = __ROR4__(v545, 8);
                            *(v511 - 2) = v546;
                            v548 = __ROR4__(v546, 8);
                            *(v511 - 7) = v547;
                            *(v511 - 3) = v548;
                            v510 = __ROR4__(v547, 8);
                            v509 = __ROR4__(v548, 8);
                            v514 = v515;
                            v508 = v516;
                            v511 += 8;
                            --v513;
                          }
                          while ( v513 );
                          v549 = 0LL;
                          v550 = 0LL;
                          v551 = 0LL;
                          v505 = Sizee;
                          v3 = v1768;
                          v4 = v1769;
                          v92 = v1642;
                          do
                          {
                            v550 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v1433 + v549)), v550);
                            v552 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v1433 + v549 + 16)), v551);
                            v551 = v552;
                            v549 += 32LL;
                          }
                          while ( v549 < 0x320 );
                          v553 = _mm_xor_si128(v552, v550);
                          v554 = _mm_xor_si128(v553, _mm_srli_si128(v553, 8));
                          v555 = _mm_xor_si128(v554, _mm_srli_si128(v554, 4));
                          v556 = _mm_xor_si128(v555, _mm_srli_si128(v555, 2));
                          for ( kk = _mm_cvtsi128_si32(_mm_xor_si128(v556, _mm_srli_si128(v556, 1))); v549 < 0x338; ++v549 )
                            kk ^= *((_BYTE *)v1433 + v549);
                          if ( kk == 64LL )
                          {
                            v1822 = v1433;
                            v1823 = 824LL;
                            *((_BYTE *)v1433 + 823) = 0;
                            memset(&unk_18019EA60, 0, 0x60uLL);
                            v558 = v1433;
                            if ( *(_BYTE *)v1433 )
                            {
                              while ( 1 )
                              {
                                v560 = -1LL;
                                do
                                  ++v560;
                                while ( v558[v560] );
                                v1434 = &v558[v560 + 1];
                                v1579 = (char *)&unk_18019EA60 + 24 * v1605;
                                if ( !GetModuleHandleExW(0, v558, (HMODULE *)v1579) )
                                  break;
                                v559 = 0;
                                v1498 = 0;
                                v561 = (HMODULE *)((char *)&unk_18019EA60 + 24 * v1605);
                                if ( **(_WORD **)v1579 == 23117 )
                                {
                                  v562 = *(int *)(*(_QWORD *)v1579 + 60LL);
                                  if ( (unsigned int)v562 < 0x10000000 )
                                  {
                                    v563 = *(_QWORD *)v1579 + v562;
                                    if ( v563 >= *(_QWORD *)v1579 )
                                    {
                                      if ( *(_DWORD *)v563 == 17744 )
                                      {
                                        if ( ((*(_WORD *)(v563 + 24) - 267) & 0xFEFF) != 0 )
                                        {
                                          v559 = -1073741811;
                                          v1498 = -1073741811;
                                        }
                                        else
                                        {
                                          *(_QWORD *)(v1579 + 12) = *(_QWORD *)(v563 + 136);
                                          *((_DWORD *)v1579 + 2) = *(_DWORD *)(v563 + 80);
                                        }
                                      }
                                      else
                                      {
                                        v559 = -1073741701;
                                        v1498 = -1073741701;
                                      }
                                    }
                                    else
                                    {
                                      v559 = -1073741701;
                                      v1498 = -1073741701;
                                    }
                                  }
                                  else
                                  {
                                    v559 = -1073741701;
                                    v1498 = -1073741701;
                                  }
                                }
                                else
                                {
                                  v559 = -1073741701;
                                  v1498 = -1073741701;
                                }
                                v1614 = *(_DWORD *)v1434;
                                v558 = v1434 + 2;
                                v564 = 0;
                                for ( mm = 0; v564 < v1614; mm = v564 )
                                {
                                  v565 = (const CHAR *)v558;
                                  v566 = -1LL;
                                  do
                                    ++v566;
                                  while ( *((_BYTE *)v558 + v566) );
                                  v558 = (const WCHAR *)((char *)v558 + v566 + 1);
                                  v1435 = v558;
                                  if ( v559 < 0 )
                                  {
                                    v568 = v1470;
                                  }
                                  else
                                  {
                                    v567 = GetProcAddress(*v561, v565);
                                    v559 = v1498;
                                    if ( !v567 )
                                      goto LABEL_782;
                                    v568 = v1470;
                                    off_18019C000[v1470] = v567;
                                    v558 = v1435;
                                    v561 = (HMODULE *)((char *)&unk_18019EA60 + 24 * v1605);
                                    v564 = mm;
                                  }
                                  v1470 = v568 + 1;
                                  ++v564;
                                }
                                ++v1605;
                                if ( !*(_BYTE *)v558 )
                                  goto LABEL_782;
                              }
                              v559 = -1073741702;
                              v1498 = -1073741702;
                            }
                            else
                            {
                              v559 = 0;
                            }
                            goto LABEL_782;
                          }
                          v569 = GetProcessHeap();
                          HeapFree(v569, 0, v1433);
                        }
                        v559 = -1073741702;
                        v1498 = -1073741702;
LABEL_782:
                        if ( v1822 )
                        {
                          v570 = GetProcessHeap();
                          HeapFree(v570, 0, v1822);
                          v559 = v1498;
                        }
                        if ( v559 < 0 )
                        {
                          v571 = (HMODULE *)&unk_18019EA60;
                          v1436 = (LPCWSTR)&unk_18019EA60;
                          v572 = 4LL;
                          v1580 = 4LL;
                          do
                          {
                            if ( *v571 )
                            {
                              FreeLibrary(*v571);
                              v571 = (HMODULE *)v1436;
                              v572 = v1580;
                            }
                            v571 += 3;
                            v1436 = (LPCWSTR)v571;
                            v1580 = --v572;
                          }
                          while ( v572 );
                          memset(&unk_18019EA60, 0, 0x60uLL);
                          off_18019C000[0] = sub_180138200;
                          off_18019C008[0] = sub_180138200;
                          off_18019C010[0] = sub_180138200;
                          off_18019C018[0] = sub_180138200;
                          off_18019C020[0] = sub_180138200;
                          off_18019C028[0] = sub_180138200;
                          off_18019C030[0] = sub_180138200;
                          off_18019C038[0] = sub_180138200;
                          off_18019C040[0] = sub_18004CB50;
                          off_18019C048[0] = sub_18004CB50;
                          off_18019C050[0] = sub_180138200;
                          off_18019C058[0] = sub_180138200;
                          off_18019C060[0] = sub_180138200;
                          off_18019C068[0] = sub_180138200;
                          off_18019C070[0] = sub_180138200;
                          off_18019C078[0] = sub_180138200;
                          off_18019C080[0] = sub_18004CB50;
                          off_18019C088[0] = sub_180138200;
                          off_18019C090[0] = sub_180138200;
                          off_18019C098[0] = sub_180138200;
                          off_18019C0A0[0] = sub_180138200;
                          off_18019C0A8[0] = sub_180138200;
                          off_18019C0B0[0] = sub_180138200;
                          off_18019C0B8[0] = sub_18004DA20;
                          off_18019C0C0[0] = sub_180138200;
                          off_18019C0C8 = sub_180138200;
                          qword_18019C0D0 = 0LL;
                          off_18019C0D8[0] = sub_18004CB50;
                          off_18019C0E0[0] = sub_180138200;
                          off_18019C0E8[0] = sub_180138200;
                          off_18019C0F0[0] = sub_180138200;
                          off_18019C0F8[0] = sub_180138200;
                          off_18019C100[0] = sub_180138200;
                          off_18019C108[0] = sub_18004CB50;
                          off_18019C110[0] = sub_180138200;
                          off_18019C118[0] = sub_180138200;
                          off_18019C120[0] = sub_180138200;
                          off_18019C128[0] = sub_180138200;
                          off_18019C130[0] = sub_180138200;
                          off_18019C138[0] = sub_180138200;
                          off_18019C140[0] = sub_18004CB50;
                          off_18019C148[0] = sub_18004CB50;
                          off_18019C150 = sub_18004CB50;
                          off_18019C158[0] = sub_18004CB50;
                          off_18019C160[0] = sub_180138200;
                          off_18019C168 = sub_180138200;
LABEL_792:
                          _InterlockedExchange(&dword_18019EB40, 0);
                          v1471 = 0;
                          v1499 = 0;
                          v1824 = 0LL;
                          v1437 = 0LL;
                          v1581 = 0LL;
                          v1632 = 0LL;
                          v1894 = 0LL;
                          while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
                            ;
                          v573 = dword_18019E4C8;
                          if ( dword_18019E4C8 )
                            goto LABEL_841;
                          v1606 = 0;
                          v1615 = 0;
                          mm = 0;
                          v1825 = 0LL;
                          v574 = (char *)sub_180055F40(0x338uLL);
                          v1479 = (WCHAR *)v574;
                          if ( v574 )
                          {
                            v575 = 0;
                            v576 = 0;
                            v577 = 0;
                            v578 = v574 + 7;
                            v579 = (unsigned __int8 *)&unk_18015F1E2;
                            v580 = 103LL;
                            v581 = -1;
                            do
                            {
                              v582 = v579[1] | ((*v579 | ((*(v579 - 1) | (*(v579 - 2) << 8)) << 8)) << 8);
                              v583 = v579[5] | ((v579[4] | ((v579[3] | (v579[2] << 8)) << 8)) << 8);
                              v584 = v582 ^ v577;
                              v579 += 8;
                              v585 = v584 ^ v576 ^ v583 ^ 0xAC987321;
                              v586 = (4991 * __ROL4__(v585 + 1419157410, 5) + __ROL4__(v585, 10)) ^ v584;
                              v587 = (43881 * __ROR4__(v586 + 133239679, 9) - __ROL4__(v586, 2)) ^ v585;
                              v588 = (24670 * v587 - (v587 >> 13) - 123127970) ^ v586;
                              v589 = (2033 * __ROL4__(v588 ^ 0xAB69, 6) - __ROL4__(v588, 2)) ^ v587;
                              v590 = (133239679 - (v589 ^ 0xAB69605E)) ^ v588;
                              v591 = (43881 * (v590 ^ 0x137F)) ^ __ROR4__(v590, 6) ^ v589;
                              v592 = (24670 * __ROR4__(v591 + 133239679, 15) + __ROL4__(v591, 2)) ^ v590;
                              v593 = (2033 * __ROR4__(v592 + 1419157410, 14) - __ROL4__(v592, 8)) ^ v591;
                              v594 = (4991 * __ROR4__(v593 ^ 0xAB69605E, 12)) ^ __ROR4__(v593, 10) ^ v592;
                              v595 = (v594 >> 10) ^ (43881 * (v594 ^ 0x7F1)) ^ v593;
                              v596 = (2033 * (__ROR4__(~v595, 5) + 24670)) ^ v594;
                              v597 = v595 ^ (v596 - 2033) ^ 0xAB69605E;
                              v598 = (4991 * __ROL4__(v595 ^ (v596 - 2033) ^ 0xAB6967AF, 2) + (v597 >> 2)) ^ v596;
                              v599 = (43881 * __ROR4__(v598 - 133239679, 6) + __ROL4__(v598, 7)) ^ v597;
                              v600 = (24670 * (v599 ^ 0x137F) + __ROR4__(v599, 9)) ^ v598;
                              v601 = (2033 * __ROL4__(v600 ^ 0xAB69, 5) + __ROL4__(v600, 7)) ^ v599;
                              v602 = v601 ^ v600 ^ 0xAC987321;
                              v603 = (4991 * __ROR4__(v602, 3) - 219010071) ^ v601;
                              v604 = (24670 * __ROR4__(v603 - 133239679, 1) - __ROR4__(v603, 6)) ^ v602;
                              v605 = (2033 * __ROL4__(v604 - 1419157410, 3) + __ROL4__(v604, 14)) ^ v603;
                              v606 = (4991 * __ROL4__(v605 - 1419157410, 15) - __ROR4__(v605, 14)) ^ v604;
                              v607 = (v606 >> 3) ^ (43881 * (v606 ^ 0x605E)) ^ v605;
                              v608 = v575 ^ (24670 * __ROL4__(v607 ^ 0x7F1137F, 4)) ^ __ROL4__(v607, 2) ^ v606;
                              v609 = v581 ^ v607;
                              *(v578 - 4) = v608;
                              v610 = __ROR4__(v608, 8);
                              *v578 = v609;
                              v611 = __ROR4__(v609, 8);
                              *(v578 - 5) = v610;
                              v612 = __ROR4__(v610, 8);
                              *(v578 - 1) = v611;
                              v613 = __ROR4__(v611, 8);
                              *(v578 - 6) = v612;
                              v614 = __ROR4__(v612, 8);
                              *(v578 - 2) = v613;
                              v615 = __ROR4__(v613, 8);
                              *(v578 - 7) = v614;
                              *(v578 - 3) = v615;
                              v577 = __ROR4__(v614, 8);
                              v576 = __ROR4__(v615, 8);
                              v575 = v582;
                              v581 = v583;
                              v578 += 8;
                              --v580;
                            }
                            while ( v580 );
                            v616 = 0LL;
                            v617 = 0LL;
                            v618 = 0LL;
                            v505 = Sizee;
                            v3 = v1768;
                            v4 = v1769;
                            v92 = v1642;
                            do
                            {
                              v617 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v1479 + v616)), v617);
                              v619 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v1479 + v616 + 16)), v618);
                              v618 = v619;
                              v616 += 32LL;
                            }
                            while ( v616 < 0x320 );
                            v620 = _mm_xor_si128(v617, v619);
                            v621 = _mm_xor_si128(v620, _mm_srli_si128(v620, 8));
                            v622 = _mm_xor_si128(v621, _mm_srli_si128(v621, 4));
                            v623 = _mm_xor_si128(v622, _mm_srli_si128(v622, 2));
                            for ( nn = _mm_cvtsi128_si32(_mm_xor_si128(v623, _mm_srli_si128(v623, 1))); v616 < 0x338; ++v616 )
                              nn ^= *((_BYTE *)v1479 + v616);
                            if ( nn == 64LL )
                            {
                              v1825 = v1479;
                              v1826 = 824LL;
                              *((_BYTE *)v1479 + 823) = 0;
                              memset(&unk_18019EA60, 0, 0x60uLL);
                              v625 = v1479;
                              if ( *(_BYTE *)v1479 )
                              {
                                while ( 1 )
                                {
                                  v627 = -1LL;
                                  do
                                    ++v627;
                                  while ( v625[v627] );
                                  v1480 = &v625[v627 + 1];
                                  v1530 = (char *)&unk_18019EA60 + 24 * mm;
                                  if ( !GetModuleHandleExW(0, v625, (HMODULE *)v1530) )
                                    break;
                                  v626 = 0;
                                  v1615 = 0;
                                  v628 = (HMODULE *)((char *)&unk_18019EA60 + 24 * mm);
                                  if ( **(_WORD **)v1530 == 23117 )
                                  {
                                    v629 = *(int *)(*(_QWORD *)v1530 + 60LL);
                                    if ( (unsigned int)v629 < 0x10000000 )
                                    {
                                      v630 = *(_QWORD *)v1530 + v629;
                                      if ( v630 >= *(_QWORD *)v1530 )
                                      {
                                        if ( *(_DWORD *)v630 == 17744 )
                                        {
                                          if ( ((*(_WORD *)(v630 + 24) - 267) & 0xFEFF) != 0 )
                                          {
                                            v626 = -1073741811;
                                            v1615 = -1073741811;
                                          }
                                          else
                                          {
                                            *(_QWORD *)(v1530 + 12) = *(_QWORD *)(v630 + 136);
                                            *((_DWORD *)v1530 + 2) = *(_DWORD *)(v630 + 80);
                                          }
                                        }
                                        else
                                        {
                                          v626 = -1073741701;
                                          v1615 = -1073741701;
                                        }
                                      }
                                      else
                                      {
                                        v626 = -1073741701;
                                        v1615 = -1073741701;
                                      }
                                    }
                                    else
                                    {
                                      v626 = -1073741701;
                                      v1615 = -1073741701;
                                    }
                                  }
                                  else
                                  {
                                    v626 = -1073741701;
                                    v1615 = -1073741701;
                                  }
                                  Sizef = *(_DWORD *)v1480;
                                  v625 = v1480 + 2;
                                  v631 = 0;
                                  for ( i1 = 0; v631 < Sizef; i1 = v631 )
                                  {
                                    v632 = (const CHAR *)v625;
                                    v633 = -1LL;
                                    do
                                      ++v633;
                                    while ( *((_BYTE *)v625 + v633) );
                                    v625 = (const WCHAR *)((char *)v625 + v633 + 1);
                                    v1481 = v625;
                                    if ( v626 < 0 )
                                    {
                                      v635 = v1606;
                                    }
                                    else
                                    {
                                      v634 = GetProcAddress(*v628, v632);
                                      v626 = v1615;
                                      if ( !v634 )
                                        goto LABEL_832;
                                      v635 = v1606;
                                      off_18019C000[v1606] = v634;
                                      v625 = v1481;
                                      v628 = (HMODULE *)((char *)&unk_18019EA60 + 24 * mm);
                                      v631 = i1;
                                    }
                                    v1606 = v635 + 1;
                                    ++v631;
                                  }
                                  ++mm;
                                  if ( !*(_BYTE *)v625 )
                                    goto LABEL_832;
                                }
                                v626 = -1073741702;
                                v1615 = -1073741702;
                              }
                              else
                              {
                                v626 = 0;
                              }
                              goto LABEL_832;
                            }
                            v636 = GetProcessHeap();
                            HeapFree(v636, 0, v1479);
                          }
                          v626 = -1073741702;
                          v1615 = -1073741702;
LABEL_832:
                          if ( v1825 )
                          {
                            v637 = GetProcessHeap();
                            HeapFree(v637, 0, v1825);
                            v626 = v1615;
                          }
                          if ( v626 < 0 )
                          {
                            v638 = (HMODULE *)&unk_18019EA60;
                            v1482 = (LPCWSTR)&unk_18019EA60;
                            v639 = 4LL;
                            v1531 = 4LL;
                            do
                            {
                              if ( *v638 )
                              {
                                FreeLibrary(*v638);
                                v638 = (HMODULE *)v1482;
                                v639 = v1531;
                              }
                              v638 += 3;
                              v1482 = (LPCWSTR)v638;
                              v1531 = --v639;
                            }
                            while ( v639 );
                            memset(&unk_18019EA60, 0, 0x60uLL);
                            off_18019C000[0] = sub_180138200;
                            off_18019C008[0] = sub_180138200;
                            off_18019C010[0] = sub_180138200;
                            off_18019C018[0] = sub_180138200;
                            off_18019C020[0] = sub_180138200;
                            off_18019C028[0] = sub_180138200;
                            off_18019C030[0] = sub_180138200;
                            off_18019C038[0] = sub_180138200;
                            off_18019C040[0] = sub_18004CB50;
                            off_18019C048[0] = sub_18004CB50;
                            off_18019C050[0] = sub_180138200;
                            off_18019C058[0] = sub_180138200;
                            off_18019C060[0] = sub_180138200;
                            off_18019C068[0] = sub_180138200;
                            off_18019C070[0] = sub_180138200;
                            off_18019C078[0] = sub_180138200;
                            off_18019C080[0] = sub_18004CB50;
                            off_18019C088[0] = sub_180138200;
                            off_18019C090[0] = sub_180138200;
                            off_18019C098[0] = sub_180138200;
                            off_18019C0A0[0] = sub_180138200;
                            off_18019C0A8[0] = sub_180138200;
                            off_18019C0B0[0] = sub_180138200;
                            off_18019C0B8[0] = sub_18004DA20;
                            off_18019C0C0[0] = sub_180138200;
                            off_18019C0C8 = sub_180138200;
                            qword_18019C0D0 = 0LL;
                            off_18019C0D8[0] = sub_18004CB50;
                            off_18019C0E0[0] = sub_180138200;
                            off_18019C0E8[0] = sub_180138200;
                            off_18019C0F0[0] = sub_180138200;
                            off_18019C0F8[0] = sub_180138200;
                            off_18019C100[0] = sub_180138200;
                            off_18019C108[0] = sub_18004CB50;
                            off_18019C110[0] = sub_180138200;
                            off_18019C118[0] = sub_180138200;
                            off_18019C120[0] = sub_180138200;
                            off_18019C128[0] = sub_180138200;
                            off_18019C130[0] = sub_180138200;
                            off_18019C138[0] = sub_180138200;
                            off_18019C140[0] = sub_18004CB50;
                            off_18019C148[0] = sub_18004CB50;
                            off_18019C150 = sub_18004CB50;
                            off_18019C158[0] = sub_18004CB50;
                            off_18019C160[0] = sub_180138200;
                            off_18019C168 = sub_180138200;
LABEL_842:
                            _InterlockedExchange(&dword_18019EB40, 0);
                            v1893 = 0LL;
                            Sizeg = v505 & 0xF;
                            v1977[0] = (v505 >> 4) & 0xF;
                            v1977[1] = (v505 >> 8) & 0xF;
                            v1977[2] = (v505 >> 12) & 0xF;
                            v1483 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0F8[0])(
                                               0LL,
                                               0LL,
                                               1027LL);
                            v1607 = -1;
                            if ( !v1483 )
                            {
                              v640 = GetLastError();
                              v641 = v640;
                              if ( v640 > 0 )
                                v641 = (unsigned __int16)v640 | 0x80070000;
                              if ( v641 >= 0 )
                                v641 = -2147467259;
LABEL_1226:
                              while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
                                ;
                              v876 = dword_18019E4C8;
                              if ( dword_18019E4C8 > 0 )
                              {
                                --dword_18019E4C8;
                                if ( v876 == 1 )
                                {
                                  v877 = (HMODULE *)&unk_18019EA60;
                                  v1443 = (LPCWSTR)&unk_18019EA60;
                                  v878 = 4LL;
                                  v1582 = 4LL;
                                  do
                                  {
                                    if ( *v877 )
                                    {
                                      FreeLibrary(*v877);
                                      v877 = (HMODULE *)v1443;
                                      v878 = v1582;
                                    }
                                    v877 += 3;
                                    v1443 = (LPCWSTR)v877;
                                    v1582 = --v878;
                                  }
                                  while ( v878 );
                                  memset(&unk_18019EA60, 0, 0x60uLL);
                                  off_18019C000[0] = sub_180138200;
                                  off_18019C008[0] = sub_180138200;
                                  off_18019C010[0] = sub_180138200;
                                  off_18019C018[0] = sub_180138200;
                                  off_18019C020[0] = sub_180138200;
                                  off_18019C028[0] = sub_180138200;
                                  off_18019C030[0] = sub_180138200;
                                  off_18019C038[0] = sub_180138200;
                                  off_18019C040[0] = sub_18004CB50;
                                  off_18019C048[0] = sub_18004CB50;
                                  off_18019C050[0] = sub_180138200;
                                  off_18019C058[0] = sub_180138200;
                                  off_18019C060[0] = sub_180138200;
                                  off_18019C068[0] = sub_180138200;
                                  off_18019C070[0] = sub_180138200;
                                  off_18019C078[0] = sub_180138200;
                                  off_18019C080[0] = sub_18004CB50;
                                  off_18019C088[0] = sub_180138200;
                                  off_18019C090[0] = sub_180138200;
                                  off_18019C098[0] = sub_180138200;
                                  off_18019C0A0[0] = sub_180138200;
                                  off_18019C0A8[0] = sub_180138200;
                                  off_18019C0B0[0] = sub_180138200;
                                  off_18019C0B8[0] = sub_18004DA20;
                                  off_18019C0C0[0] = sub_180138200;
                                  off_18019C0C8 = sub_180138200;
                                  qword_18019C0D0 = 0LL;
                                  off_18019C0D8[0] = sub_18004CB50;
                                  off_18019C0E0[0] = sub_180138200;
                                  off_18019C0E8[0] = sub_180138200;
                                  off_18019C0F0[0] = sub_180138200;
                                  off_18019C0F8[0] = sub_180138200;
                                  off_18019C100[0] = sub_180138200;
                                  off_18019C108[0] = sub_18004CB50;
                                  off_18019C110[0] = sub_180138200;
                                  off_18019C118[0] = sub_180138200;
                                  off_18019C120[0] = sub_180138200;
                                  off_18019C128[0] = sub_180138200;
                                  off_18019C130[0] = sub_180138200;
                                  off_18019C138[0] = sub_180138200;
                                  off_18019C140[0] = sub_18004CB50;
                                  off_18019C148[0] = sub_18004CB50;
                                  off_18019C150 = sub_18004CB50;
                                  off_18019C158[0] = sub_18004CB50;
                                  off_18019C160[0] = sub_180138200;
                                  off_18019C168 = sub_180138200;
                                }
                              }
                              _InterlockedExchange(&dword_18019EB40, 0);
                              unknown_libname_376(&v1824);
                              if ( v641 < 0 )
                              {
LABEL_1451:
                                if ( v1922[15] )
                                {
                                  v989 = -1LL;
                                  do
                                    ++v989;
                                  while ( *(_WORD *)(v1922[15] + 2 * v989) );
                                  memset((void *)v1922[15], 0, 2 * v989 + 2);
                                  v990 = (void *)v1922[15];
                                  v991 = GetProcessHeap();
                                  HeapFree(v991, 0, v990);
                                  v1922[15] = 0LL;
                                }
                                if ( v1922[16] )
                                {
                                  v992 = -1LL;
                                  do
                                    ++v992;
                                  while ( *(_WORD *)(v1922[16] + 2 * v992) );
                                  memset((void *)v1922[16], 0, 2 * v992 + 2);
                                  v993 = (void *)v1922[16];
                                  v994 = GetProcessHeap();
                                  HeapFree(v994, 0, v993);
                                  v1922[16] = 0LL;
                                }
                                v503 = (void *)v1922[17];
                                if ( v1922[17] )
                                {
                                  v995 = -1LL;
                                  do
                                    ++v995;
                                  while ( *(_WORD *)(v1922[17] + 2 * v995) );
                                  memset((void *)v1922[17], 0, 2 * v995 + 2);
                                  v996 = (void *)v1922[17];
                                  v997 = GetProcessHeap();
                                  HeapFree(v997, 0, v996);
                                  v503 = 0LL;
                                  v1922[17] = 0LL;
                                }
                                if ( v1922[18] )
                                {
                                  off_18019C038[0]();
                                  v1922[18] = v503;
                                }
                                if ( v1922[19] )
                                {
                                  off_18019C038[0]();
                                  v1922[19] = v503;
                                }
                                if ( v1922[20] )
                                {
                                  off_18019C038[0]();
                                  v1922[20] = v503;
                                }
                                v998 = 1LL;
                                while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
                                  ;
                                v999 = dword_18019E4C8;
                                if ( dword_18019E4C8 > 0 )
                                {
                                  --dword_18019E4C8;
                                  if ( v999 == 1 )
                                  {
                                    v1000 = (HMODULE *)&unk_18019EA60;
                                    v1001 = 4LL;
                                    v1643 = (LPVOID)4;
                                    do
                                    {
                                      if ( *v1000 )
                                      {
                                        FreeLibrary(*v1000);
                                        v1001 = (__int64)v1643;
                                      }
                                      v1000 += 3;
                                      v1643 = (LPVOID)--v1001;
                                    }
                                    while ( v1001 );
                                    memset(&unk_18019EA60, 0, 0x60uLL);
                                    off_18019C000[0] = sub_180138200;
                                    off_18019C008[0] = sub_180138200;
                                    off_18019C010[0] = sub_180138200;
                                    off_18019C018[0] = sub_180138200;
                                    off_18019C020[0] = sub_180138200;
                                    off_18019C028[0] = sub_180138200;
                                    off_18019C030[0] = sub_180138200;
                                    off_18019C038[0] = sub_180138200;
                                    off_18019C040[0] = sub_18004CB50;
                                    off_18019C048[0] = sub_18004CB50;
                                    off_18019C050[0] = sub_180138200;
                                    off_18019C058[0] = sub_180138200;
                                    off_18019C060[0] = sub_180138200;
                                    off_18019C068[0] = sub_180138200;
                                    off_18019C070[0] = sub_180138200;
                                    off_18019C078[0] = sub_180138200;
                                    off_18019C080[0] = sub_18004CB50;
                                    off_18019C088[0] = sub_180138200;
                                    off_18019C090[0] = sub_180138200;
                                    off_18019C098[0] = sub_180138200;
                                    off_18019C0A0[0] = sub_180138200;
                                    off_18019C0A8[0] = sub_180138200;
                                    off_18019C0B0[0] = sub_180138200;
                                    off_18019C0B8[0] = sub_18004DA20;
                                    off_18019C0C0[0] = sub_180138200;
                                    off_18019C0C8 = sub_180138200;
                                    v503 = 0LL;
                                    qword_18019C0D0 = 0LL;
                                    off_18019C0D8[0] = sub_18004CB50;
                                    off_18019C0E0[0] = sub_180138200;
                                    off_18019C0E8[0] = sub_180138200;
                                    off_18019C0F0[0] = sub_180138200;
                                    off_18019C0F8[0] = sub_180138200;
                                    off_18019C100[0] = sub_180138200;
                                    off_18019C108[0] = sub_18004CB50;
                                    off_18019C110[0] = sub_180138200;
                                    off_18019C118[0] = sub_180138200;
                                    off_18019C120[0] = sub_180138200;
                                    off_18019C128[0] = sub_180138200;
                                    off_18019C130[0] = sub_180138200;
                                    off_18019C138[0] = sub_180138200;
                                    off_18019C140[0] = sub_18004CB50;
                                    off_18019C148[0] = sub_18004CB50;
                                    off_18019C150 = sub_18004CB50;
                                    off_18019C158[0] = sub_18004CB50;
                                    off_18019C160[0] = sub_180138200;
                                    off_18019C168 = sub_180138200;
                                  }
                                }
                                _InterlockedExchange(&dword_18019EB40, (__int32)v503);
                                v1489 = dword_18019E438;
                                v1643 = (LPVOID)(((unsigned int (__fastcall *)(__int64))off_18019C098[0])(v998)
                                               - (unsigned int)qword_18019E4C0);
                                v1972 = 0LL;
                                v1973 = 0LL;
                                v1974 = 0LL;
                                v1975 = 0LL;
                                while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
                                  ;
                                v1002 = dword_18019E4C8;
                                if ( dword_18019E4C8 )
                                  goto LABEL_1527;
                                v1542 = (int)v503;
                                v1517 = (int)v503;
                                v1628 = (unsigned int)v503;
                                v1842 = v503;
                                v1003 = (const WCHAR *)sub_180055F40(0x338uLL);
                                v1645 = v1003;
                                if ( v1003 )
                                {
                                  v1004 = (int)v503;
                                  v1005 = -1;
                                  v1006 = (int)v503;
                                  v1007 = (int)v503;
                                  v1008 = (char *)v1003 + 7;
                                  v1009 = (unsigned __int8 *)&unk_18015F1E2;
                                  v1010 = 103LL;
                                  do
                                  {
                                    v1011 = v1009[1] | ((*v1009 | ((*(v1009 - 1) | (*(v1009 - 2) << 8)) << 8)) << 8);
                                    v1012 = v1009[5] | ((v1009[4] | ((v1009[3] | (v1009[2] << 8)) << 8)) << 8);
                                    v1013 = v1011 ^ v1007;
                                    v1009 += 8;
                                    v1014 = v1012 ^ v1006 ^ v1013 ^ 0xAC987321;
                                    v1015 = (4991 * __ROL4__(v1014 + 1419157410, 5) + __ROL4__(v1014, 10)) ^ v1013;
                                    v1016 = (43881 * __ROR4__(v1015 + 133239679, 9) - __ROL4__(v1015, 2)) ^ v1014;
                                    v1017 = (24670 * v1016 - (v1016 >> 13) - 123127970) ^ v1015;
                                    v1018 = (2033 * __ROL4__(v1017 ^ 0xAB69, 6) - __ROL4__(v1017, 2)) ^ v1016;
                                    v1019 = (133239679 - (v1018 ^ 0xAB69605E)) ^ v1017;
                                    v1020 = (43881 * (v1019 ^ 0x137F)) ^ __ROR4__(v1019, 6) ^ v1018;
                                    v1021 = (24670 * __ROR4__(v1020 + 133239679, 15) + __ROL4__(v1020, 2)) ^ v1019;
                                    v1022 = (2033 * __ROR4__(v1021 + 1419157410, 14) - __ROL4__(v1021, 8)) ^ v1020;
                                    v1023 = (4991 * __ROR4__(v1022 ^ 0xAB69605E, 12)) ^ __ROR4__(v1022, 10) ^ v1021;
                                    v1024 = v1022 ^ (v1023 >> 10) ^ (43881 * (v1023 ^ 0x7F1));
                                    v1025 = (2033 * (__ROR4__(~v1024, 5) + 24670)) ^ v1023;
                                    v1026 = v1024 ^ (v1025 - 2033) ^ 0xAB69605E;
                                    v1027 = ((v1026 >> 2) + 4991 * __ROL4__(v1024 ^ (v1025 - 2033) ^ 0xAB6967AF, 2)) ^ v1025;
                                    v1028 = (43881 * __ROR4__(v1027 - 133239679, 6) + __ROL4__(v1027, 7)) ^ v1026;
                                    v1029 = (24670 * (v1028 ^ 0x137F) + __ROR4__(v1028, 9)) ^ v1027;
                                    v1030 = (2033 * __ROL4__(v1029 ^ 0xAB69, 5) + __ROL4__(v1029, 7)) ^ v1028;
                                    v1031 = v1030 ^ v1029 ^ 0xAC987321;
                                    v1032 = (4991 * __ROR4__(v1031, 3) - 219010071) ^ v1030;
                                    v1033 = (24670 * __ROR4__(v1032 - 133239679, 1) - __ROR4__(v1032, 6)) ^ v1031;
                                    v1034 = (2033 * __ROL4__(v1033 - 1419157410, 3) + __ROL4__(v1033, 14)) ^ v1032;
                                    v1035 = (4991 * __ROL4__(v1034 - 1419157410, 15) - __ROR4__(v1034, 14)) ^ v1033;
                                    v1036 = (v1035 >> 3) ^ (43881 * (v1035 ^ 0x605E)) ^ v1034;
                                    v1037 = v1004 ^ (24670 * __ROL4__(v1036 ^ 0x7F1137F, 4)) ^ __ROL4__(v1036, 2) ^ v1035;
                                    v1038 = v1005 ^ v1036;
                                    *(v1008 - 4) = v1037;
                                    v1039 = __ROR4__(v1037, 8);
                                    *v1008 = v1038;
                                    v1040 = __ROR4__(v1038, 8);
                                    *(v1008 - 5) = v1039;
                                    v1041 = __ROR4__(v1039, 8);
                                    *(v1008 - 1) = v1040;
                                    v1042 = __ROR4__(v1040, 8);
                                    *(v1008 - 6) = v1041;
                                    v1043 = __ROR4__(v1041, 8);
                                    *(v1008 - 2) = v1042;
                                    v1044 = __ROR4__(v1042, 8);
                                    *(v1008 - 7) = v1043;
                                    *(v1008 - 3) = v1044;
                                    v1007 = __ROR4__(v1043, 8);
                                    v1006 = __ROR4__(v1044, 8);
                                    v1004 = v1011;
                                    v1005 = v1012;
                                    v1008 += 8;
                                    --v1010;
                                  }
                                  while ( v1010 );
                                  v1045 = 0LL;
                                  v1046 = 0LL;
                                  v1047 = 0LL;
                                  v1048 = (WCHAR *)v1645;
                                  v3 = v1768;
                                  v4 = v1769;
                                  v92 = v1642;
                                  do
                                  {
                                    v1046 = _mm_xor_si128(
                                              _mm_loadu_si128((const __m128i *)((char *)v1645 + v1045)),
                                              v1046);
                                    v1049 = _mm_xor_si128(
                                              _mm_loadu_si128((const __m128i *)((char *)v1645 + v1045 + 16)),
                                              v1047);
                                    v1047 = v1049;
                                    v1045 += 32LL;
                                  }
                                  while ( v1045 < 0x320 );
                                  v1050 = _mm_xor_si128(v1049, v1046);
                                  v1051 = _mm_xor_si128(v1050, _mm_srli_si128(v1050, 8));
                                  v1052 = _mm_xor_si128(v1051, _mm_srli_si128(v1051, 4));
                                  v1053 = _mm_xor_si128(v1052, _mm_srli_si128(v1052, 2));
                                  for ( i2 = _mm_cvtsi128_si32(_mm_xor_si128(v1053, _mm_srli_si128(v1053, 1)));
                                        v1045 < 0x338;
                                        ++v1045 )
                                  {
                                    i2 ^= *((_BYTE *)v1645 + v1045);
                                  }
                                  if ( i2 == 64LL )
                                  {
                                    v1842 = (LPVOID)v1645;
                                    v1843 = 824LL;
                                    *((_BYTE *)v1645 + 823) = 0;
                                    memset(&unk_18019EA60, 0, 0x60uLL);
                                    if ( *(_BYTE *)v1048 )
                                    {
                                      while ( 1 )
                                      {
                                        v1055 = v1048;
                                        v1056 = -1LL;
                                        do
                                          ++v1056;
                                        while ( v1048[v1056] );
                                        v1057 = &v1048[v1056];
                                        v1645 = (LPCWSTR)((char *)&unk_18019EA60 + 24 * v1628);
                                        if ( !GetModuleHandleExW(0, v1055, (HMODULE *)v1645) )
                                          break;
                                        v1058 = 0;
                                        v1517 = 0;
                                        v1059 = v1645;
                                        if ( **(_WORD **)v1645 == 23117 )
                                        {
                                          v1060 = *(int *)(*(_QWORD *)v1645 + 60LL);
                                          if ( (unsigned int)v1060 < 0x10000000 )
                                          {
                                            v1061 = *(_QWORD *)v1645 + v1060;
                                            if ( v1061 >= *(_QWORD *)v1645 )
                                            {
                                              if ( *(_DWORD *)v1061 == 17744 )
                                              {
                                                if ( ((*(_WORD *)(v1061 + 24) - 267) & 0xFEFF) != 0 )
                                                {
                                                  v1058 = -1073741811;
                                                  v1517 = -1073741811;
                                                }
                                                else
                                                {
                                                  *(_QWORD *)(v1645 + 6) = *(_QWORD *)(v1061 + 136);
                                                  *((_DWORD *)v1059 + 2) = *(_DWORD *)(v1061 + 80);
                                                }
                                              }
                                              else
                                              {
                                                v1058 = -1073741701;
                                                v1517 = -1073741701;
                                              }
                                            }
                                            else
                                            {
                                              v1058 = -1073741701;
                                              v1517 = -1073741701;
                                            }
                                          }
                                          else
                                          {
                                            v1058 = -1073741701;
                                            v1517 = -1073741701;
                                          }
                                        }
                                        else
                                        {
                                          v1058 = -1073741701;
                                          v1517 = -1073741701;
                                        }
                                        LODWORD(v1647) = *(_DWORD *)(v1057 + 1);
                                        v1048 = v1057 + 3;
                                        v1062 = 0;
                                        for ( LODWORD(v1646) = 0; v1062 < (unsigned int)v1647; LODWORD(v1646) = v1062 )
                                        {
                                          v1063 = (const CHAR *)v1048;
                                          v1064 = -1LL;
                                          do
                                            ++v1064;
                                          while ( *((_BYTE *)v1048 + v1064) );
                                          v1048 = (WCHAR *)((char *)v1048 + v1064 + 1);
                                          if ( v1058 >= 0 )
                                          {
                                            v1065 = GetProcAddress(*(HMODULE *)v1059, v1063);
                                            if ( !v1065 )
                                              goto LABEL_1516;
                                            off_18019C000[v1542] = v1065;
                                            v1058 = v1517;
                                            v1059 = v1645;
                                            v1062 = (unsigned int)v1646;
                                          }
                                          ++v1542;
                                          ++v1062;
                                        }
                                        ++v1628;
                                        if ( !*(_BYTE *)v1048 )
                                          goto LABEL_1517;
                                      }
                                      v1058 = -1073741702;
                                      v1517 = -1073741702;
                                    }
                                    else
                                    {
LABEL_1516:
                                      v1058 = v1517;
                                    }
LABEL_1517:
                                    v503 = 0LL;
                                    goto LABEL_1518;
                                  }
                                  v1066 = GetProcessHeap();
                                  HeapFree(v1066, 0, v1048);
                                  v503 = 0LL;
                                }
                                v1058 = -1073741702;
                                v1517 = -1073741702;
LABEL_1518:
                                if ( v1842 )
                                {
                                  v1067 = GetProcessHeap();
                                  HeapFree(v1067, 0, v1842);
                                  v1058 = v1517;
                                }
                                if ( v1058 < 0 )
                                {
                                  v1068 = (HMODULE *)&unk_18019EA60;
                                  v1069 = 4LL;
                                  v1645 = (LPCWSTR)4;
                                  do
                                  {
                                    if ( *v1068 )
                                    {
                                      FreeLibrary(*v1068);
                                      v1069 = (__int64)v1645;
                                    }
                                    v1068 += 3;
                                    v1645 = (LPCWSTR)--v1069;
                                  }
                                  while ( v1069 );
                                  memset(&unk_18019EA60, 0, 0x60uLL);
                                  off_18019C000[0] = sub_180138200;
                                  off_18019C008[0] = sub_180138200;
                                  off_18019C010[0] = sub_180138200;
                                  off_18019C018[0] = sub_180138200;
                                  off_18019C020[0] = sub_180138200;
                                  off_18019C028[0] = sub_180138200;
                                  off_18019C030[0] = sub_180138200;
                                  off_18019C038[0] = sub_180138200;
                                  off_18019C040[0] = sub_18004CB50;
                                  off_18019C048[0] = sub_18004CB50;
                                  off_18019C050[0] = sub_180138200;
                                  off_18019C058[0] = sub_180138200;
                                  off_18019C060[0] = sub_180138200;
                                  off_18019C068[0] = sub_180138200;
                                  off_18019C070[0] = sub_180138200;
                                  off_18019C078[0] = sub_180138200;
                                  off_18019C080[0] = sub_18004CB50;
                                  off_18019C088[0] = sub_180138200;
                                  off_18019C090[0] = sub_180138200;
                                  off_18019C098[0] = sub_180138200;
                                  off_18019C0A0[0] = sub_180138200;
                                  off_18019C0A8[0] = sub_180138200;
                                  off_18019C0B0[0] = sub_180138200;
                                  off_18019C0B8[0] = sub_18004DA20;
                                  off_18019C0C0[0] = sub_180138200;
                                  off_18019C0C8 = sub_180138200;
                                  v503 = 0LL;
                                  qword_18019C0D0 = 0LL;
                                  off_18019C0D8[0] = sub_18004CB50;
                                  off_18019C0E0[0] = sub_180138200;
                                  off_18019C0E8[0] = sub_180138200;
                                  off_18019C0F0[0] = sub_180138200;
                                  off_18019C0F8[0] = sub_180138200;
                                  off_18019C100[0] = sub_180138200;
                                  off_18019C108[0] = sub_18004CB50;
                                  off_18019C110[0] = sub_180138200;
                                  off_18019C118[0] = sub_180138200;
                                  off_18019C120[0] = sub_180138200;
                                  off_18019C128[0] = sub_180138200;
                                  off_18019C130[0] = sub_180138200;
                                  off_18019C138[0] = sub_180138200;
                                  off_18019C140[0] = sub_18004CB50;
                                  off_18019C148[0] = sub_18004CB50;
                                  off_18019C150 = sub_18004CB50;
                                  off_18019C158[0] = sub_18004CB50;
                                  off_18019C160[0] = sub_180138200;
                                  off_18019C168 = sub_180138200;
                                  goto LABEL_1528;
                                }
                                v1002 = dword_18019E4C8;
LABEL_1527:
                                dword_18019E4C8 = v1002 + 1;
LABEL_1528:
                                _InterlockedExchange(&dword_18019EB40, (__int32)v503);
                                LODWORD(v1972) = (_DWORD)v1643;
                                v1971 = 1;
                                LODWORD(v1973) = -1721306479;
                                DWORD2(v1972) = 1;
                                LODWORD(v1974) = 1;
                                DWORD2(v1973) = 1;
                                LODWORD(v1975) = v1489;
                                DWORD2(v1974) = 1;
                                ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_18019C0D0)(
                                  0LL,
                                  8225LL,
                                  4LL,
                                  &v1971);
                                while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
                                  ;
                                v1070 = dword_18019E4C8;
                                if ( dword_18019E4C8 > 0 )
                                {
                                  --dword_18019E4C8;
                                  if ( v1070 == 1 )
                                  {
                                    v1071 = (HMODULE *)&unk_18019EA60;
                                    v1072 = 4LL;
                                    v1643 = (LPVOID)4;
                                    do
                                    {
                                      if ( *v1071 )
                                      {
                                        FreeLibrary(*v1071);
                                        v1072 = (__int64)v1643;
                                      }
                                      v1071 += 3;
                                      v1643 = (LPVOID)--v1072;
                                    }
                                    while ( v1072 );
                                    memset(&unk_18019EA60, 0, 0x60uLL);
                                    off_18019C000[0] = sub_180138200;
                                    off_18019C008[0] = sub_180138200;
                                    off_18019C010[0] = sub_180138200;
                                    off_18019C018[0] = sub_180138200;
                                    off_18019C020[0] = sub_180138200;
                                    off_18019C028[0] = sub_180138200;
                                    off_18019C030[0] = sub_180138200;
                                    off_18019C038[0] = sub_180138200;
                                    off_18019C040[0] = sub_18004CB50;
                                    off_18019C048[0] = sub_18004CB50;
                                    off_18019C050[0] = sub_180138200;
                                    off_18019C058[0] = sub_180138200;
                                    off_18019C060[0] = sub_180138200;
                                    off_18019C068[0] = sub_180138200;
                                    off_18019C070[0] = sub_180138200;
                                    off_18019C078[0] = sub_180138200;
                                    off_18019C080[0] = sub_18004CB50;
                                    off_18019C088[0] = sub_180138200;
                                    off_18019C090[0] = sub_180138200;
                                    off_18019C098[0] = sub_180138200;
                                    off_18019C0A0[0] = sub_180138200;
                                    off_18019C0A8[0] = sub_180138200;
                                    off_18019C0B0[0] = sub_180138200;
                                    off_18019C0B8[0] = sub_18004DA20;
                                    off_18019C0C0[0] = sub_180138200;
                                    off_18019C0C8 = sub_180138200;
                                    v503 = 0LL;
                                    qword_18019C0D0 = 0LL;
                                    off_18019C0D8[0] = sub_18004CB50;
                                    off_18019C0E0[0] = sub_180138200;
                                    off_18019C0E8[0] = sub_180138200;
                                    off_18019C0F0[0] = sub_180138200;
                                    off_18019C0F8[0] = sub_180138200;
                                    off_18019C100[0] = sub_180138200;
                                    off_18019C108[0] = sub_18004CB50;
                                    off_18019C110[0] = sub_180138200;
                                    off_18019C118[0] = sub_180138200;
                                    off_18019C120[0] = sub_180138200;
                                    off_18019C128[0] = sub_180138200;
                                    off_18019C130[0] = sub_180138200;
                                    off_18019C138[0] = sub_180138200;
                                    off_18019C140[0] = sub_18004CB50;
                                    off_18019C148[0] = sub_18004CB50;
                                    off_18019C150 = sub_18004CB50;
                                    off_18019C158[0] = sub_18004CB50;
                                    off_18019C160[0] = sub_180138200;
                                    off_18019C168 = sub_180138200;
                                  }
                                }
                                _InterlockedExchange(&dword_18019EB40, (__int32)v503);
                                ((void (__fastcall *)(_QWORD, SIZE_T))off_18019C160[0])(0LL, v1561);
                                v1631 = (void *)v1654;
                                goto LABEL_1538;
                              }
                              v880 = v1893;
                              v1833 = v1893;
                              memset(v1916, 0, 0x68uLL);
                              v881 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_18019C050[0])(v1561, 7LL);
                              v882 = v881
                                  && ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(
                                       v881,
                                       104LL,
                                       v1916)
                                  && WORD1(v1916[2]) == 32
                                  && v1916[3]
                                  && SHIDWORD(v1916[0]) > 0
                                  && SLODWORD(v1916[1]) > 0;
                              v1726 = v882;
                              if ( v882 || Sizeg == 1 )
                              {
                                ((void (__fastcall *)(char *, _QWORD, _QWORD))off_18019C150)(
                                  (char *)&v1922[21] + 4,
                                  v880,
                                  HIDWORD(v1833));
                                ((void (__fastcall *)(char *, _QWORD, _QWORD))off_18019C150)(
                                  (char *)&v1922[23] + 4,
                                  v880,
                                  HIDWORD(v1833));
                                v883 = Sizeg;
                                if ( Sizeg == 1 )
                                {
                                  v884 = 11691808LL;
                                  if ( HIDWORD(v1922[14]) )
                                    v884 = 0LL;
                                  v1649 = (void *)((__int64 (__fastcall *)(__int64))off_18019C028[0])(v884);
                                }
                                v92 = v1642;
                              }
                              else
                              {
                                v883 = Sizeg;
                              }
                              v1474 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_18019C080[0])(v1561, 1LL);
                              v885 = 2064;
                              if ( LODWORD(v1922[14]) )
                                v885 = 133138;
                              v1502 = v885;
                              if ( v1726 )
                              {
                                v1617 = HIDWORD(v1922[14]);
                                v1444 = (LPCWSTR)v1922[18];
                                v1583 = v1922[15];
                                memset(v1917, 0, 0x68uLL);
                                memset(v1918, 0, 0x68uLL);
                                v1634 = 0LL;
                                v1610 = 0;
                                v1575 = 0;
                                v1950 = 0LL;
                                v1951 = 0LL;
                                v1952 = 0LL;
                                v1953 = 0;
                                v1927 = 0LL;
                                if ( !v1922[15] )
                                  goto LABEL_1449;
                                v886 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_18019C050[0])(v1561, 7LL);
                                if ( !v886 )
                                  goto LABEL_1344;
                                if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(
                                       v886,
                                       104LL,
                                       v1917) )
                                {
                                  v1634 = (char *)v1917[3];
                                  v1610 = HIDWORD(v1917[0]);
                                  v1575 = v1917[1];
                                }
                                v887 = ((__int64 (__fastcall *)(SIZE_T))off_18019C010[0])(v1561);
                                v1484 = (LPCWSTR)v887;
                                if ( !v887 )
                                  goto LABEL_1344;
                                v1834 = 0LL;
                                v888 = 0;
                                v1951 = 0LL;
                                v1952 = 0LL;
                                v1953 = 0;
                                LODWORD(v1950) = 40;
                                DWORD1(v1950) = HIDWORD(v1922[22]) - HIDWORD(v1922[21]);
                                DWORD2(v1950) = LODWORD(v1922[22]) - LODWORD(v1922[23]);
                                HIDWORD(v1950) = 2097153;
                                v889 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_18019C018[0])(
                                         v887,
                                         &v1950,
                                         0LL,
                                         &v1834,
                                         0LL,
                                         0);
                                v1536 = (LPVOID)v889;
                                if ( v889 )
                                {
                                  v891 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(
                                           v889,
                                           104LL,
                                           v1918);
                                  v892 = 0LL;
                                  if ( v891 )
                                    v892 = (char *)v1918[3];
                                  v1511 = v892;
                                  DWORD2(v1927) = HIDWORD(v1922[22]) - HIDWORD(v1922[21]);
                                  HIDWORD(v1927) = LODWORD(v1922[23]) - LODWORD(v1922[22]);
                                  ((void (__fastcall *)(LPCWSTR, LPVOID))off_18019C078[0])(v1484, v1536);
                                  ((void (__fastcall *)(LPCWSTR, __int64))off_18019C080[0])(v1484, 1LL);
                                  v1445 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, LPCWSTR))off_18019C078[0])(
                                                     v1484,
                                                     v1444);
                                  v893 = ((__int64 (__fastcall *)(_QWORD))off_18019C070[0])(0LL);
                                  ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))off_18019C0E8[0])(
                                    v1484,
                                    &v1927,
                                    v893);
                                  ((void (__fastcall *)(LPCWSTR, SIZE_T, __int64, __int128 *, int, _QWORD))off_18019C0D8[0])(
                                    v1484,
                                    v1583,
                                    0xFFFFFFFFLL,
                                    &v1927,
                                    v1502,
                                    0LL);
                                  if ( Sizeg == 1 )
                                  {
                                    if ( v1617 )
                                      v1618 = ((__int64 (__fastcall *)(__int64))off_18019C118[0])(8LL);
                                    else
                                      v1618 = 0xFFFFFF;
                                  }
                                  else
                                  {
                                    v1618 = -5723992;
                                  }
                                  v894 = -HIDWORD(v1922[21]);
                                  v895 = 0;
                                  if ( v1922[21] >= 0 )
                                    v894 = 0;
                                  v896 = 0;
                                  if ( v1922[21] >= 0 )
                                    v896 = HIDWORD(v1922[21]);
                                  v897 = -LODWORD(v1922[22]);
                                  if ( SLODWORD(v1922[22]) >= 0 )
                                  {
                                    v897 = 0;
                                    v895 = v1922[22];
                                  }
                                  v898 = DWORD2(v1927) - v894;
                                  if ( DWORD2(v1927) - v894 >= v1610 - v896 )
                                    v898 = v1610 - v896;
                                  v1641 = v898;
                                  v899 = HIDWORD(v1927) - v897;
                                  if ( HIDWORD(v1927) - v897 >= v1575 - v895 )
                                    v899 = v1575 - v895;
                                  if ( v898 > 0 && v899 > 0 )
                                  {
                                    v900 = &v1511[4 * v894 + 4 * (__int64)(DWORD2(v1927) * v897)];
                                    v1584 = (SIZE_T)v900;
                                    v901 = v1610;
                                    v902 = &v1634[4 * v896 + 4 * (__int64)(v1610 * v895)];
                                    v1635 = v902;
                                    v1611 = 0;
                                    v903 = 4LL * SDWORD2(v1927);
                                    v904 = 4 * v901;
                                    do
                                    {
                                      v905 = 0;
                                      v906 = (unsigned __int8 *)(v900 + 2);
                                      v907 = v902 - v900;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v906 + *(v906 - 2) + 2 * (unsigned int)*(v906 - 1)) >> 2) != 0xFF )
                                        {
                                          v908 = (unsigned __int8)~((*v906 + *(v906 - 2) + 2 * (unsigned int)*(v906 - 1)) >> 2);
                                          v906[v907] -= ~((*v906 + *(v906 - 2) + 2 * (unsigned int)*(v906 - 1)) >> 2)
                                                      * (v1618 - v906[v907]);
                                          v906[v907 - 1] -= v908 * (BYTE1(v1618) - v906[v907 - 1]);
                                          v906[v907 - 2] -= v908 * (BYTE2(v1618) - v906[v907 - 2]);
                                          v906[v907 + 1] += v908 * (255 - v906[v907 + 1]) / 255;
                                          v898 = v1641;
                                        }
                                        v906 += 4;
                                        ++v905;
                                      }
                                      while ( v905 < v898 );
                                      v900 = (char *)(v903 + v1584);
                                      v1584 += v903;
                                      v902 = &v1635[v904];
                                      v1635 += v904;
                                      ++v1611;
                                    }
                                    while ( v1611 < v899 );
                                    v3 = v1768;
                                    v4 = v1769;
                                    v92 = v1642;
                                    v888 = 0;
                                  }
                                  ((void (__fastcall *)(LPVOID))off_18019C038[0])(v1536);
                                  if ( v1445 )
                                    ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_18019C078[0])(v1484, v1445);
                                }
                                else
                                {
                                  v890 = GetLastError();
                                  v888 = v890;
                                  if ( v890 > 0 )
                                    v888 = (unsigned __int16)v890 | 0x80070000;
                                  if ( v888 >= 0 )
                                    v888 = -2147467259;
                                }
                                ((void (__fastcall *)(LPCWSTR))off_18019C030[0])(v1484);
                                if ( v888 < 0 )
                                  goto LABEL_1449;
                                v1619 = HIDWORD(v1922[14]);
                                v1446 = (LPCWSTR)v1922[19];
                                v1585 = v1922[16];
                                memset(v1914, 0, 0x68uLL);
                                memset(v1919, 0, 0x68uLL);
                                v1636 = 0LL;
                                v1612 = 0;
                                v1576 = 0;
                                v1954 = 0LL;
                                v1955 = 0LL;
                                v1956 = 0LL;
                                v1957 = 0;
                                v1932 = 0LL;
                                if ( !v1922[16] )
                                  goto LABEL_1449;
                                v909 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_18019C050[0])(v1561, 7LL);
                                if ( !v909 )
                                  goto LABEL_1344;
                                if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(
                                       v909,
                                       104LL,
                                       v1914) )
                                {
                                  v1636 = (char *)v1914[3];
                                  v1612 = HIDWORD(v1914[0]);
                                  v1576 = v1914[1];
                                }
                                v910 = ((__int64 (__fastcall *)(SIZE_T))off_18019C010[0])(v1561);
                                v1485 = (LPCWSTR)v910;
                                if ( !v910 )
                                  goto LABEL_1344;
                                v1835 = 0LL;
                                v911 = 0;
                                v1955 = 0LL;
                                v1956 = 0LL;
                                v1957 = 0;
                                LODWORD(v1954) = 40;
                                DWORD1(v1954) = HIDWORD(v1922[24]) - HIDWORD(v1922[23]);
                                DWORD2(v1954) = LODWORD(v1922[24]) - LODWORD(v1922[25]);
                                HIDWORD(v1954) = 2097153;
                                v912 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_18019C018[0])(
                                         v910,
                                         &v1954,
                                         0LL,
                                         &v1835,
                                         0LL,
                                         0);
                                v1537 = (LPVOID)v912;
                                if ( !v912 )
                                {
                                  v913 = GetLastError();
                                  v911 = v913;
                                  if ( v913 > 0 )
                                    v911 = (unsigned __int16)v913 | 0x80070000;
                                  if ( v911 >= 0 )
                                    v911 = -2147467259;
LABEL_1338:
                                  ((void (__fastcall *)(LPCWSTR))off_18019C030[0])(v1485);
                                  if ( v911 < 0 )
                                    goto LABEL_1449;
                                  v932 = Src;
                                  goto LABEL_1442;
                                }
                                v914 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(
                                         v912,
                                         104LL,
                                         v1919);
                                v915 = 0LL;
                                if ( v914 )
                                  v915 = (char *)v1919[3];
                                v1512 = v915;
                                DWORD2(v1932) = HIDWORD(v1922[24]) - HIDWORD(v1922[23]);
                                HIDWORD(v1932) = LODWORD(v1922[25]) - LODWORD(v1922[24]);
                                ((void (__fastcall *)(LPCWSTR, LPVOID))off_18019C078[0])(v1485, v1537);
                                ((void (__fastcall *)(LPCWSTR, __int64))off_18019C080[0])(v1485, 1LL);
                                v1447 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, LPCWSTR))off_18019C078[0])(
                                                   v1485,
                                                   v1446);
                                v916 = ((__int64 (__fastcall *)(_QWORD))off_18019C070[0])(0LL);
                                ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))off_18019C0E8[0])(
                                  v1485,
                                  &v1932,
                                  v916);
                                ((void (__fastcall *)(LPCWSTR, SIZE_T, __int64, __int128 *, int, _QWORD))off_18019C0D8[0])(
                                  v1485,
                                  v1585,
                                  0xFFFFFFFFLL,
                                  &v1932,
                                  v1502,
                                  0LL);
                                if ( Sizeg == 1 )
                                {
                                  if ( !v1619 )
                                  {
                                    Sizeh = 0xFFFFFF;
LABEL_1317:
                                    v918 = -HIDWORD(v1922[23]);
                                    v919 = 0;
                                    if ( v1922[23] >= 0 )
                                      v918 = 0;
                                    v920 = 0;
                                    if ( v1922[23] >= 0 )
                                      v920 = HIDWORD(v1922[23]);
                                    v921 = -LODWORD(v1922[24]);
                                    if ( SLODWORD(v1922[24]) >= 0 )
                                    {
                                      v921 = 0;
                                      v919 = v1922[24];
                                    }
                                    v922 = DWORD2(v1932) - v918;
                                    if ( DWORD2(v1932) - v918 >= v1612 - v920 )
                                      v922 = v1612 - v920;
                                    v1503 = v922;
                                    v923 = HIDWORD(v1932) - v921;
                                    if ( HIDWORD(v1932) - v921 >= v1576 - v919 )
                                      v923 = v1576 - v919;
                                    if ( v922 > 0 && v923 > 0 )
                                    {
                                      v924 = &v1512[4 * v918 + 4 * (__int64)(DWORD2(v1932) * v921)];
                                      v1586 = (SIZE_T)v924;
                                      v925 = &v1636[4 * v920 + 4 * (__int64)(v1612 * v919)];
                                      v1637 = v925;
                                      v1620 = 0;
                                      v926 = 4LL * SDWORD2(v1932);
                                      v927 = 4LL * v1612;
                                      do
                                      {
                                        v928 = 0;
                                        v929 = (unsigned __int8 *)(v924 + 2);
                                        v930 = v925 - v924;
                                        do
                                        {
                                          if ( (unsigned __int8)((*v929 + *(v929 - 2) + 2 * (unsigned int)*(v929 - 1)) >> 2) != 0xFF )
                                          {
                                            v931 = (unsigned __int8)~((*v929
                                                                     + *(v929 - 2)
                                                                     + 2 * (unsigned int)*(v929 - 1)) >> 2);
                                            v929[v930] -= ~((*v929 + *(v929 - 2) + 2 * (unsigned int)*(v929 - 1)) >> 2)
                                                        * (v1607 - v929[v930]);
                                            v929[v930 - 1] -= v931 * (BYTE1(Sizeh) - v929[v930 - 1]);
                                            v929[v930 - 2] -= v931 * (BYTE2(Sizeh) - v929[v930 - 2]);
                                            v929[v930 + 1] += v931 * (255 - v929[v930 + 1]) / 255;
                                            v922 = v1503;
                                          }
                                          v929 += 4;
                                          ++v928;
                                        }
                                        while ( v928 < v922 );
                                        v924 = (char *)(v926 + v1586);
                                        v1586 += v926;
                                        v925 = &v1637[v927];
                                        v1637 += v927;
                                        ++v1620;
                                      }
                                      while ( v1620 < v923 );
                                      v3 = v1768;
                                      v4 = v1769;
                                      v92 = v1642;
                                      v911 = 0;
                                    }
                                    ((void (__fastcall *)(LPVOID))off_18019C038[0])(v1537);
                                    if ( v1447 )
                                      ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_18019C078[0])(v1485, v1447);
                                    goto LABEL_1338;
                                  }
                                  v917 = ((__int64 (__fastcall *)(__int64))off_18019C118[0])(8LL);
                                }
                                else
                                {
                                  v917 = -5723992;
                                }
                                Sizeh = v917;
                                v1607 = v917;
                                goto LABEL_1317;
                              }
                              if ( HIDWORD(v1922[14]) || (v933 = -64, v883 == 1) )
                                v933 = -1;
                              LOWORD(v1621) = 0;
                              BYTE2(v1621) = v933;
                              HIBYTE(v1621) = 1;
                              *(_QWORD *)&v1899 = 0LL;
                              LODWORD(v1900) = 0;
                              Src = (void *)((__int64 (__fastcall *)(SIZE_T))off_18019C010[0])(v1561);
                              if ( !Src )
                              {
LABEL_1344:
                                GetLastError();
LABEL_1449:
                                if ( v1649 )
                                  ((void (__fastcall *)(void *))off_18019C038[0])(v1649);
                                goto LABEL_1451;
                              }
                              if ( v883 == 1 )
                              {
                                v934 = HIDWORD(v1922[24]) - HIDWORD(v1922[23]);
                                if ( HIDWORD(v1922[24]) - HIDWORD(v1922[23]) <= HIDWORD(v1922[22]) - HIDWORD(v1922[21]) )
                                  v934 = HIDWORD(v1922[22]) - HIDWORD(v1922[21]);
                                v935 = 0;
                                v936 = 0;
                                v937 = __PAIR64__(LODWORD(v1922[25]) - LODWORD(v1922[22]), v934);
                                if ( LODWORD(v1922[14]) )
                                {
                                  LODWORD(v1899) = HIDWORD(v1922[21]) + v934 - HIDWORD(v1922[22]);
                                  LODWORD(v1900) = HIDWORD(v1922[23]) + v934 - HIDWORD(v1922[24]);
                                  v935 = v1899;
                                  v936 = v1900;
                                }
                                v938 = HIDWORD(v1922[22]) + v935 - HIDWORD(v1922[21]);
                                DWORD2(v1899) = v938;
                                v1526 = LODWORD(v1922[23]) - LODWORD(v1922[22]);
                                HIDWORD(v1899) = LODWORD(v1922[23]) - LODWORD(v1922[22]);
                                v1641 = HIDWORD(v1922[24]) + v936 - HIDWORD(v1922[23]);
                                DWORD2(v1900) = v1641;
                                LODWORD(v1646) = LODWORD(v1922[24]) - LODWORD(v1922[22]);
                                DWORD1(v1900) = LODWORD(v1922[24]) - LODWORD(v1922[22]);
                                LODWORD(v1647) = LODWORD(v1922[25]) - LODWORD(v1922[22]);
                                HIDWORD(v1900) = LODWORD(v1922[25]) - LODWORD(v1922[22]);
                              }
                              else
                              {
                                v934 = DWORD2(v1893);
                                v937 = *((_QWORD *)&v1893 + 1);
                                v1899 = *(_OWORD *)((char *)&v1922[21] + 4);
                                v1900 = *(_OWORD *)((char *)&v1922[23] + 4);
                                v1526 = v1922[23];
                                v938 = HIDWORD(v1922[22]);
                                LODWORD(v1647) = v1922[25];
                                v1641 = HIDWORD(v1922[24]);
                                LODWORD(v1646) = v1922[24];
                              }
                              v1836 = 0LL;
                              v1947 = 0LL;
                              v1948 = 0LL;
                              v1949 = 0;
                              LODWORD(v1946) = 40;
                              DWORD1(v1946) = v934;
                              DWORD2(v1946) = -HIDWORD(v937);
                              HIDWORD(v1946) = 2097153;
                              v939 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_18019C018[0])(
                                       Src,
                                       &v1946,
                                       0LL,
                                       &v1836,
                                       0LL,
                                       0);
                              v1651 = v939;
                              if ( !v939 )
                              {
                                GetLastError();
                                v932 = Src;
LABEL_1447:
                                if ( v932 )
                                  ((void (__fastcall *)(void *))off_18019C030[0])(v932);
                                goto LABEL_1449;
                              }
                              ((void (__fastcall *)(void *, SIZE_T))off_18019C078[0])(Src, v939);
                              if ( Sizeg == 1 && v1649 )
                              {
                                v1928[0] = 0;
                                v1928[1] = 0;
                                v1929 = v937;
                                ((void (__fastcall *)(void *, _DWORD *))off_18019C0E8[0])(Src, v1928);
                              }
                              v1626 = HIDWORD(v1922[14]);
                              v1448 = (LPCWSTR)v1922[18];
                              v1587 = v1922[15];
                              memset(v1915, 0, 0x68uLL);
                              memset(v1920, 0, 0x68uLL);
                              v1638 = 0LL;
                              v1513 = 0;
                              v1538 = 0;
                              v1958 = 0LL;
                              v1959 = 0LL;
                              v1960 = 0LL;
                              v1961 = 0;
                              v1930 = 0LL;
                              if ( !v1922[15] )
                              {
LABEL_1444:
                                v932 = Src;
LABEL_1445:
                                if ( v1651 )
                                  ((void (__fastcall *)(SIZE_T))off_18019C038[0])(v1651);
                                goto LABEL_1447;
                              }
                              v940 = ((__int64 (__fastcall *)(void *, __int64))off_18019C050[0])(Src, 7LL);
                              if ( !v940 )
                                goto LABEL_1443;
                              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(
                                     v940,
                                     104LL,
                                     v1915) )
                              {
                                v1638 = (char *)v1915[3];
                                v1513 = HIDWORD(v1915[0]);
                                v1538 = v1915[1];
                              }
                              v941 = (void *)((__int64 (__fastcall *)(void *))off_18019C010[0])(Src);
                              v1650 = v941;
                              if ( !v941 )
                              {
LABEL_1443:
                                GetLastError();
                                goto LABEL_1444;
                              }
                              v1527 = v1526 - DWORD1(v1899);
                              v942 = v938 - v1899;
                              v1838 = 0LL;
                              v1486 = 0;
                              v1959 = 0LL;
                              v1960 = 0LL;
                              v1961 = 0;
                              LODWORD(v1958) = 40;
                              DWORD1(v1958) = v942;
                              DWORD2(v1958) = -v1527;
                              HIDWORD(v1958) = 2097153;
                              v943 = (const WCHAR *)((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_18019C018[0])(
                                                      v941,
                                                      &v1958,
                                                      0LL,
                                                      &v1838,
                                                      0LL,
                                                      0);
                              v1645 = v943;
                              if ( v943 )
                              {
                                v947 = ((__int64 (__fastcall *)(const WCHAR *, __int64, _QWORD *))off_18019C068[0])(
                                         v943,
                                         104LL,
                                         v1920);
                                v948 = 0LL;
                                if ( v947 )
                                  v948 = (void *)v1920[3];
                                v1643 = v948;
                                *((_QWORD *)&v1930 + 1) = __PAIR64__(v1527, v942);
                                v946 = v1650;
                                ((void (__fastcall *)(LPVOID, LPCWSTR))off_18019C078[0])(v1650, v1645);
                                ((void (__fastcall *)(LPVOID, __int64))off_18019C080[0])(v946, 1LL);
                                v1449 = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, LPCWSTR))off_18019C078[0])(
                                                   v946,
                                                   v1448);
                                v949 = ((__int64 (__fastcall *)(_QWORD))off_18019C070[0])(0LL);
                                ((void (__fastcall *)(LPVOID, __int128 *, __int64))off_18019C0E8[0])(v946, &v1930, v949);
                                ((void (__fastcall *)(LPVOID, SIZE_T, __int64, __int128 *, int, _QWORD))off_18019C0D8[0])(
                                  v946,
                                  v1587,
                                  0xFFFFFFFFLL,
                                  &v1930,
                                  v1502,
                                  0LL);
                                if ( Sizeg == 1 )
                                {
                                  if ( v1626 )
                                    v1627 = ((__int64 (__fastcall *)(__int64))off_18019C118[0])(8LL);
                                  else
                                    v1627 = 0xFFFFFF;
                                }
                                else
                                {
                                  v1627 = -5723992;
                                }
                                v950 = -(int)v1899;
                                v951 = 0;
                                if ( (int)v1899 >= 0 )
                                  v950 = 0;
                                v952 = 0;
                                if ( (int)v1899 >= 0 )
                                  v952 = v1899;
                                v953 = -DWORD1(v1899);
                                if ( (SDWORD1(v1899) & 0x80000000) == 0 )
                                {
                                  v953 = 0;
                                  v951 = DWORD1(v1899);
                                }
                                v954 = DWORD2(v1930) - v950;
                                if ( DWORD2(v1930) - v950 >= v1513 - v952 )
                                  v954 = v1513 - v952;
                                v1528 = v954;
                                v955 = HIDWORD(v1930) - v953;
                                if ( HIDWORD(v1930) - v953 >= v1538 - v951 )
                                  v955 = v1538 - v951;
                                if ( v954 > 0 && v955 > 0 )
                                {
                                  v956 = (unsigned __int8 *)v1643 + 4 * v950 + 4 * (__int64)(DWORD2(v1930) * v953);
                                  v1643 = v956;
                                  v957 = &v1638[4 * v952 + 4 * (__int64)(v1513 * v951)];
                                  v1588 = (SIZE_T)v957;
                                  v1539 = 0;
                                  v958 = 4LL * SDWORD2(v1930);
                                  v959 = 4LL * v1513;
                                  do
                                  {
                                    v960 = 0;
                                    v1514 = 0;
                                    v961 = v956 + 2;
                                    v962 = v957 - (char *)v956;
                                    do
                                    {
                                      if ( (unsigned __int8)((*v961 + *(v961 - 2) + 2 * (unsigned int)*(v961 - 1)) >> 2) != 0xFF )
                                      {
                                        v963 = (unsigned __int8)~((*v961 + *(v961 - 2) + 2 * (unsigned int)*(v961 - 1)) >> 2);
                                        v961[v962] -= ~((*v961 + *(v961 - 2) + 2 * (unsigned int)*(v961 - 1)) >> 2)
                                                    * (v1627 - v961[v962]);
                                        v961[v962 - 1] -= v963 * (BYTE1(v1627) - v961[v962 - 1]);
                                        v961[v962 - 2] -= v963 * (BYTE2(v1627) - v961[v962 - 2]);
                                        v961[v962 + 1] += v963 * (255 - v961[v962 + 1]) / 255;
                                        v960 = v1514;
                                      }
                                      v961 += 4;
                                      v1514 = ++v960;
                                    }
                                    while ( v960 < v1528 );
                                    v956 = (unsigned __int8 *)v1643 + v958;
                                    v1643 = (char *)v1643 + v958;
                                    v957 = (char *)(v959 + v1588);
                                    v1588 += v959;
                                    ++v1539;
                                  }
                                  while ( v1539 < v955 );
                                  v3 = v1768;
                                  v4 = v1769;
                                  v92 = v1642;
                                  v946 = v1650;
                                }
                                ((void (__fastcall *)(LPCWSTR))off_18019C038[0])(v1645);
                                if ( v1449 )
                                  ((void (__fastcall *)(LPVOID, LPCWSTR))off_18019C078[0])(v946, v1449);
                              }
                              else
                              {
                                v944 = GetLastError();
                                v1486 = v944;
                                v945 = v944 < 0;
                                if ( v944 > 0 )
                                {
                                  v1486 = (unsigned __int16)v944 | 0x80070000;
                                  v945 = 1;
                                }
                                v946 = v1650;
                                if ( !v945 )
                                  v1486 = -2147467259;
                              }
                              ((void (__fastcall *)(LPVOID))off_18019C030[0])(v946);
                              if ( v1486 < 0 )
                                goto LABEL_1444;
                              v1487 = HIDWORD(v1922[14]);
                              v1643 = (LPVOID)v1922[19];
                              v1645 = (LPCWSTR)v1922[16];
                              memset(v1921, 0, 0x68uLL);
                              memset(v1922, 0, 0x68uLL);
                              v1650 = 0LL;
                              v1540 = 0;
                              v1515 = 0;
                              v1962 = 0LL;
                              v1963 = 0LL;
                              v1964 = 0LL;
                              v1965 = 0;
                              v1931 = 0LL;
                              if ( !v1922[16] )
                                goto LABEL_1444;
                              v932 = Src;
                              v964 = ((__int64 (__fastcall *)(void *, __int64))off_18019C050[0])(Src, 7LL);
                              if ( !v964 )
                                goto LABEL_1398;
                              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(
                                     v964,
                                     104LL,
                                     v1921) )
                              {
                                v1650 = (LPVOID)v1921[3];
                                v1540 = HIDWORD(v1921[0]);
                                v1515 = v1921[1];
                              }
                              v965 = ((__int64 (__fastcall *)(void *))off_18019C010[0])(v932);
                              v1450 = (LPCWSTR)v965;
                              if ( !v965 )
                              {
LABEL_1398:
                                GetLastError();
                                goto LABEL_1445;
                              }
                              LODWORD(v1647) = (_DWORD)v1647 - (_DWORD)v1646;
                              v1641 -= v1900;
                              v1841 = 0LL;
                              v966 = 0;
                              v1963 = 0LL;
                              v1964 = 0LL;
                              v1965 = 0;
                              LODWORD(v1962) = 40;
                              DWORD1(v1962) = v1641;
                              DWORD2(v1962) = -(int)v1647;
                              HIDWORD(v1962) = 2097153;
                              v967 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_18019C018[0])(
                                       v965,
                                       &v1962,
                                       0LL,
                                       &v1841,
                                       0LL,
                                       0);
                              v1589 = v967;
                              if ( !v967 )
                              {
                                v968 = GetLastError();
                                v966 = v968;
                                if ( v968 > 0 )
                                  v966 = (unsigned __int16)v968 | 0x80070000;
                                if ( v966 >= 0 )
                                  v966 = -2147467259;
                                goto LABEL_1438;
                              }
                              v969 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(
                                       v967,
                                       104LL,
                                       v1922);
                              v970 = 0LL;
                              if ( v969 )
                                v970 = (char *)v1922[3];
                              v1639 = v970;
                              *((_QWORD *)&v1931 + 1) = __PAIR64__((unsigned int)v1647, v1641);
                              ((void (__fastcall *)(LPCWSTR, SIZE_T))off_18019C078[0])(v1450, v1589);
                              ((void (__fastcall *)(LPCWSTR, __int64))off_18019C080[0])(v1450, 1LL);
                              v1643 = (LPVOID)((__int64 (__fastcall *)(LPCWSTR, LPVOID))off_18019C078[0])(v1450, v1643);
                              v971 = ((__int64 (__fastcall *)(_QWORD))off_18019C070[0])(0LL);
                              ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))off_18019C0E8[0])(v1450, &v1931, v971);
                              ((void (__fastcall *)(LPCWSTR, LPCWSTR, __int64, __int128 *, int, _QWORD))off_18019C0D8[0])(
                                v1450,
                                v1645,
                                0xFFFFFFFFLL,
                                &v1931,
                                v1502,
                                0LL);
                              if ( Sizeg == 1 )
                              {
                                if ( !v1487 )
                                {
                                  v1488 = 0xFFFFFF;
LABEL_1415:
                                  v973 = -(int)v1900;
                                  if ( (int)v1900 >= 0 )
                                    v973 = 0;
                                  v974 = 0;
                                  if ( (int)v1900 >= 0 )
                                    v974 = v1900;
                                  v975 = -(int)v1646;
                                  if ( (int)v1646 >= 0 )
                                    v975 = 0;
                                  v976 = 0;
                                  if ( (int)v1646 >= 0 )
                                    v976 = (int)v1646;
                                  v977 = DWORD2(v1931) - v973;
                                  if ( DWORD2(v1931) - v973 >= v1540 - v974 )
                                    v977 = v1540 - v974;
                                  LODWORD(v1647) = v977;
                                  v978 = HIDWORD(v1931) - v975;
                                  if ( HIDWORD(v1931) - v975 >= v1515 - v976 )
                                    v978 = v1515 - v976;
                                  if ( v977 > 0 && v978 > 0 )
                                  {
                                    v979 = (const WCHAR *)&v1639[4 * v973 + 4 * (__int64)(v975 * DWORD2(v1931))];
                                    v1645 = v979;
                                    v980 = v1540;
                                    v981 = (char *)v1650 + 4 * v974 + 4 * (__int64)(v976 * v1540);
                                    v1650 = v981;
                                    v1541 = 0;
                                    v982 = (int)v1647;
                                    v983 = 2LL * SDWORD2(v1931);
                                    v984 = 4 * v980;
                                    do
                                    {
                                      v985 = 0;
                                      v1516 = 0;
                                      v986 = (unsigned __int8 *)(v979 + 1);
                                      v987 = v981 - (char *)v979;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v986 + *(v986 - 2) + 2 * (unsigned int)*(v986 - 1)) >> 2) != 0xFF )
                                        {
                                          v988 = (unsigned __int8)~((*v986 + *(v986 - 2) + 2 * (unsigned int)*(v986 - 1)) >> 2);
                                          v986[v987] -= ~((*v986 + *(v986 - 2) + 2 * (unsigned int)*(v986 - 1)) >> 2)
                                                      * (v1607 - v986[v987]);
                                          v986[v987 - 1] -= v988 * (BYTE1(v1488) - v986[v987 - 1]);
                                          v986[v987 - 2] -= v988 * (BYTE2(v1488) - v986[v987 - 2]);
                                          v986[v987 + 1] += v988 * (255 - v986[v987 + 1]) / 255;
                                          v985 = v1516;
                                        }
                                        v986 += 4;
                                        v1516 = ++v985;
                                      }
                                      while ( v985 < v982 );
                                      v979 = &v1645[v983];
                                      v1645 = (LPCWSTR)((char *)v1645 + v983 * 2);
                                      v981 = (char *)v1650 + v984;
                                      v1650 = (char *)v1650 + v984;
                                      ++v1541;
                                    }
                                    while ( v1541 < v978 );
                                    v3 = v1768;
                                    v4 = v1769;
                                    v92 = v1642;
                                    v966 = 0;
                                  }
                                  ((void (__fastcall *)(SIZE_T))off_18019C038[0])(v1589);
                                  if ( v1643 )
                                    ((void (__fastcall *)(LPCWSTR, LPVOID))off_18019C078[0])(v1450, v1643);
LABEL_1438:
                                  ((void (__fastcall *)(LPCWSTR))off_18019C030[0])(v1450);
                                  if ( v966 >= 0 )
                                  {
                                    v932 = Src;
                                    if ( Sizeg == 1 )
                                      ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, int))off_18019C000[0])(
                                        v1561,
                                        HIDWORD(v1922[21]),
                                        LODWORD(v1922[22]),
                                        (unsigned int)v937,
                                        HIDWORD(v937),
                                        Src,
                                        0,
                                        0,
                                        13369376);
                                    else
                                      ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, _DWORD, _DWORD, int))off_18019C040[0])(
                                        v1561,
                                        (unsigned int)v1893,
                                        DWORD1(v1893),
                                        (unsigned int)v937,
                                        HIDWORD(v937),
                                        Src,
                                        0,
                                        0,
                                        v937,
                                        HIDWORD(v937),
                                        v1621);
LABEL_1442:
                                    ((void (__fastcall *)(SIZE_T, _QWORD))off_18019C080[0])(v1561, v1474);
                                    goto LABEL_1445;
                                  }
                                  goto LABEL_1444;
                                }
                                v972 = ((__int64 (__fastcall *)(__int64))off_18019C118[0])(8LL);
                              }
                              else
                              {
                                v972 = -5723992;
                              }
                              v1488 = v972;
                              v1607 = v972;
                              goto LABEL_1415;
                            }
                            v642 = 0LL;
                            v1827 = 0LL;
                            v1828 = 0LL;
                            v1829 = 0LL;
                            v1830 = 0LL;
                            v1831 = 0LL;
                            v1766 = 0LL;
                            v1616 = 0;
                            v1727 = 0;
                            if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_18019C0A0[0])(
                                   8LL,
                                   &v1640,
                                   0LL,
                                   &v1727) )
                            {
                              v1532 = (char *)sub_180055F40(2LL * v1727);
                              unknown_libname_376(&v1831);
                              if ( !v1532 )
                              {
                                v1831 = 0LL;
                                v1616 = -2147024882;
                                goto LABEL_866;
                              }
                              v1831 = v1532;
                              v1507 = sub_180055F40(4LL * (v1640 + 1));
                              unknown_libname_376(&v1766);
                              if ( !v1507 )
                              {
                                v1766 = 0LL;
                                v1616 = -2147024882;
                                goto LABEL_866;
                              }
                              v1766 = v1507;
                              if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_18019C0A0[0])(
                                     8LL,
                                     &v1640,
                                     v1532,
                                     &v1727) )
                              {
                                v645 = v1507;
                                if ( v1640 )
                                {
                                  v646 = v1532;
                                  v647 = v1507;
                                  for ( i3 = 0; i3 < v1640; ++i3 )
                                  {
                                    *v647 = ((__int64 (__fastcall *)(char *, _QWORD))off_18019C0B0[0])(v646, 0LL);
                                    v649 = -1LL;
                                    do
                                      ++v649;
                                    while ( *(_WORD *)&v646[2 * v649] );
                                    v646 += 2 * v649 + 2;
                                    ++v647;
                                  }
                                  v1766 = v647;
                                  v645 = v647;
                                }
                                *v645 = 1033;
                                v1766 = 0LL;
                                v642 = v1507;
                                v1827 = v1507;
                                mm = v1640 + 1;
LABEL_866:
                                unknown_libname_376(&v1766);
                                unknown_libname_376(&v1831);
                                if ( v1616 < 0 )
                                  goto LABEL_1112;
                                v650 = 0;
                                v1572 = 0;
                                v651 = 0;
                                v652 = dword_180178130;
                                if ( mm )
                                {
                                  v653 = 0LL;
LABEL_869:
                                  v654 = 0;
                                  while ( v642[v653] != *v652 )
                                  {
                                    ++v654;
                                    ++v652;
                                    if ( v654 >= 0x26 )
                                    {
                                      ++v651;
                                      ++v653;
                                      if ( v651 >= mm )
                                        goto LABEL_875;
                                      v652 = dword_180178130;
                                      goto LABEL_869;
                                    }
                                  }
                                  v650 = v654;
                                  v1572 = v654;
                                }
LABEL_875:
                                v655 = v650;
                                v1609 = 0;
                                if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_18019C0A8[0])(
                                       dword_180178130[v650],
                                       v1978,
                                       85LL)
                                  && ((int (__fastcall *)(_BYTE *, __int64, char *))off_18019C090[0])(
                                       v1978,
                                       88LL,
                                       &v1933) > 0 )
                                {
                                  v1609 = (v1934 >> 27) & 1;
                                }
                                v1976[0] = L"Segoe UI Light";
                                v656 = -1LL;
                                do
                                  ++v656;
                                while ( aSegoeUiLight[v656] );
                                v657 = &aSegoeUiLight[v656 + 1];
                                v1976[1] = v657;
                                v658 = -1LL;
                                do
                                  ++v658;
                                while ( v657[v658] );
                                v659 = (__int64)&v657[v658 + 1];
                                v1976[2] = v659;
                                v660 = -1LL;
                                do
                                  ++v660;
                                while ( *(_WORD *)(v659 + 2 * v660) );
                                v661 = v659 + 2 * (v660 + 1);
                                v1976[3] = v661;
                                v662 = -1LL;
                                do
                                  ++v662;
                                while ( *(_WORD *)(v661 + 2 * v662) );
                                v663 = v661 + 2 * (v662 + 1);
                                v1976[4] = v663;
                                v664 = -1LL;
                                do
                                  ++v664;
                                while ( *(_WORD *)(v663 + 2 * v664) );
                                v665 = v663 + 2 * (v664 + 1);
                                v1976[5] = v665;
                                v666 = -1LL;
                                do
                                  ++v666;
                                while ( *(_WORD *)(v665 + 2 * v666) );
                                v667 = v665 + 2 * (v666 + 1);
                                v1976[6] = v667;
                                v668 = -1LL;
                                do
                                  ++v668;
                                while ( *(_WORD *)(v667 + 2 * v668) );
                                v669 = v667 + 2 * (v668 + 1);
                                v1976[7] = v669;
                                v670 = -1LL;
                                do
                                  ++v670;
                                while ( *(_WORD *)(v669 + 2 * v670) );
                                v671 = v669 + 2 * (v670 + 1);
                                v1976[8] = v671;
                                v672 = -1LL;
                                do
                                  ++v672;
                                while ( *(_WORD *)(v671 + 2 * v672) );
                                v673 = v671 + 2 * (v672 + 1);
                                v1976[9] = v673;
                                v674 = -1LL;
                                do
                                  ++v674;
                                while ( *(_WORD *)(v673 + 2 * v674) );
                                v675 = v673 + 2 * (v674 + 1);
                                v1976[10] = v675;
                                v676 = -1LL;
                                do
                                  ++v676;
                                while ( *(_WORD *)(v675 + 2 * v676) );
                                v677 = v675 + 2 * (v676 + 1);
                                v1976[11] = v677;
                                v678 = -1LL;
                                do
                                  ++v678;
                                while ( *(_WORD *)(v677 + 2 * v678) );
                                v679 = v677 + 2 * (v678 + 1);
                                v1976[12] = v679;
                                v680 = -1LL;
                                do
                                  ++v680;
                                while ( *(_WORD *)(v679 + 2 * v680) );
                                v681 = v679 + 2 * (v680 + 1);
                                v1976[13] = v681;
                                v682 = -1LL;
                                do
                                  ++v682;
                                while ( *(_WORD *)(v681 + 2 * v682) );
                                v683 = v681 + 2 * (v682 + 1);
                                v1976[14] = v683;
                                v684 = -1LL;
                                do
                                  ++v684;
                                while ( *(_WORD *)(v683 + 2 * v684) );
                                v685 = v683 + 2 * (v684 + 1);
                                v1976[15] = v685;
                                v686 = -1LL;
                                do
                                  ++v686;
                                while ( *(_WORD *)(v685 + 2 * v686) );
                                v687 = v685 + 2 * (v686 + 1);
                                v1976[16] = v687;
                                v688 = -1LL;
                                do
                                  ++v688;
                                while ( *(_WORD *)(v687 + 2 * v688) );
                                v689 = v687 + 2 * (v688 + 1);
                                v1976[17] = v689;
                                v690 = -1LL;
                                do
                                  ++v690;
                                while ( *(_WORD *)(v689 + 2 * v690) );
                                v1976[18] = v689 + 2 + 2 * v690;
                                v1437 = (LPCWSTR)v1976[byte_1801608D0[3 * v655]];
                                v1581 = v1976[byte_1801608D0[3 * v655 + 1]];
                                v1632 = (const WCHAR *)v1976[byte_1801608D0[3 * v655 + 2]];
                                v1616 = 0;
                                v691 = (char *)sub_180055F40(0x1C90uLL);
                                v1533 = v691;
                                if ( !v691 )
                                {
                                  v1616 = -2147024882;
                                  goto LABEL_1112;
                                }
                                v692 = 0;
                                v693 = 0;
                                v694 = 0;
                                v695 = v691 + 7;
                                v696 = (unsigned __int8 *)&unk_180176492;
                                v697 = 914LL;
                                v698 = -1;
                                do
                                {
                                  v699 = v696[1] | ((*v696 | ((*(v696 - 1) | (*(v696 - 2) << 8)) << 8)) << 8);
                                  v700 = v696[5] | ((v696[4] | ((v696[3] | (v696[2] << 8)) << 8)) << 8);
                                  v701 = v699 ^ v694;
                                  v696 += 8;
                                  v702 = v701 ^ v693 ^ v700 ^ 0xAC987321;
                                  v703 = (4991 * __ROL4__(v702 + 1419157410, 5) + __ROL4__(v702, 10)) ^ v701;
                                  v704 = (43881 * __ROR4__(v703 + 133239679, 9) - __ROL4__(v703, 2)) ^ v702;
                                  v705 = (24670 * v704 - (v704 >> 13) - 123127970) ^ v703;
                                  v706 = (2033 * __ROL4__(v705 ^ 0xAB69, 6) - __ROL4__(v705, 2)) ^ v704;
                                  v707 = (133239679 - (v706 ^ 0xAB69605E)) ^ v705;
                                  v708 = (43881 * (v707 ^ 0x137F)) ^ __ROR4__(v707, 6) ^ v706;
                                  v709 = (24670 * __ROR4__(v708 + 133239679, 15) + __ROL4__(v708, 2)) ^ v707;
                                  v710 = (2033 * __ROR4__(v709 + 1419157410, 14) - __ROL4__(v709, 8)) ^ v708;
                                  v711 = (4991 * __ROR4__(v710 ^ 0xAB69605E, 12)) ^ __ROR4__(v710, 10) ^ v709;
                                  v712 = v710 ^ (v711 >> 10) ^ (43881 * (v711 ^ 0x7F1));
                                  v713 = (2033 * (__ROR4__(~v712, 5) + 24670)) ^ v711;
                                  v714 = v712 ^ (v713 - 2033) ^ 0xAB69605E;
                                  v715 = ((v714 >> 2) + 4991 * __ROL4__(v712 ^ (v713 - 2033) ^ 0xAB6967AF, 2)) ^ v713;
                                  v716 = (43881 * __ROR4__(v715 - 133239679, 6) + __ROL4__(v715, 7)) ^ v714;
                                  v717 = (24670 * (v716 ^ 0x137F) + __ROR4__(v716, 9)) ^ v715;
                                  v718 = (2033 * __ROL4__(v717 ^ 0xAB69, 5) + __ROL4__(v717, 7)) ^ v716;
                                  v719 = v718 ^ v717 ^ 0xAC987321;
                                  v720 = (4991 * __ROR4__(v719, 3) - 219010071) ^ v718;
                                  v721 = (24670 * __ROR4__(v720 - 133239679, 1) - __ROR4__(v720, 6)) ^ v719;
                                  v722 = (2033 * __ROL4__(v721 - 1419157410, 3) + __ROL4__(v721, 14)) ^ v720;
                                  v723 = (4991 * __ROL4__(v722 - 1419157410, 15) - __ROR4__(v722, 14)) ^ v721;
                                  v724 = (v723 >> 3) ^ (43881 * (v723 ^ 0x605E)) ^ v722;
                                  v725 = v692 ^ (24670 * __ROL4__(v724 ^ 0x7F1137F, 4)) ^ __ROL4__(v724, 2) ^ v723;
                                  v726 = v698 ^ v724;
                                  *(v695 - 4) = v725;
                                  v727 = __ROR4__(v725, 8);
                                  *v695 = v726;
                                  v728 = __ROR4__(v726, 8);
                                  *(v695 - 5) = v727;
                                  v729 = __ROR4__(v727, 8);
                                  *(v695 - 1) = v728;
                                  v730 = __ROR4__(v728, 8);
                                  *(v695 - 6) = v729;
                                  v731 = __ROR4__(v729, 8);
                                  *(v695 - 2) = v730;
                                  v732 = __ROR4__(v730, 8);
                                  *(v695 - 7) = v731;
                                  *(v695 - 3) = v732;
                                  v694 = __ROR4__(v731, 8);
                                  v693 = __ROR4__(v732, 8);
                                  v692 = v699;
                                  v698 = v700;
                                  v695 += 8;
                                  --v697;
                                }
                                while ( v697 );
                                v733 = 0LL;
                                v734 = 0LL;
                                v735 = 0LL;
                                v3 = v1768;
                                v4 = v1769;
                                v92 = v1642;
                                do
                                {
                                  v734 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1533[v733]), v734);
                                  v736 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1533[v733 + 16]), v735);
                                  v735 = v736;
                                  v733 += 32LL;
                                }
                                while ( v733 < 0x1C80 );
                                v737 = _mm_xor_si128(v734, v736);
                                v738 = _mm_xor_si128(v737, _mm_srli_si128(v737, 8));
                                v739 = _mm_xor_si128(v738, _mm_srli_si128(v738, 4));
                                v740 = _mm_xor_si128(v739, _mm_srli_si128(v739, 2));
                                for ( i4 = _mm_cvtsi128_si32(_mm_xor_si128(v740, _mm_srli_si128(v740, 1)));
                                      v733 < 0x1C90;
                                      ++v733 )
                                {
                                  i4 ^= v1533[v733];
                                }
                                if ( i4 == 127LL )
                                {
                                  v1828 = v1533;
                                  v1829 = 7312LL;
                                }
                                else
                                {
                                  v1616 = -1073425151;
                                  v742 = GetProcessHeap();
                                  HeapFree(v742, 0, v1533);
                                }
                                if ( v1616 < 0 )
                                {
LABEL_1112:
                                  if ( v1828 )
                                    memset(v1828, 0, v1829);
                                  unknown_libname_376(&v1830);
                                  unknown_libname_376(&v1828);
                                  unknown_libname_376(&v1827);
                                  v641 = v1616;
                                  if ( v1616 < 0 )
                                    goto LABEL_1225;
                                  v1922[15] = *v1824;
                                  v1922[16] = v1824[1];
                                  v1922[17] = v1824[2];
                                  v1887 = 0LL;
                                  v641 = 0;
                                  LODWORD(v1887) = 16;
                                  if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_18019C168)(
                                                       66LL,
                                                       0LL,
                                                       &v1887,
                                                       0LL) )
                                  {
                                    v842 = BYTE4(v1887) & 1;
                                  }
                                  else
                                  {
                                    v841 = GetLastError();
                                    v641 = v841;
                                    if ( v841 > 0 )
                                      v641 = (unsigned __int16)v841 | 0x80070000;
                                    v842 = 0;
                                    if ( v641 >= 0 )
                                      v641 = -2147467259;
                                  }
                                  HIDWORD(v1922[14]) = v842;
                                  if ( v641 < 0 )
                                    goto LABEL_1225;
                                  v843 = 42;
                                  if ( Sizeg != 1 )
                                  {
                                    if ( Sizeg == 2 )
                                    {
                                      v1471 = 15;
                                      v1499 = 11;
                                    }
                                    else if ( Sizeg == 3 )
                                    {
                                      v843 = 225;
                                      v1499 = 225;
LABEL_1128:
                                      v1471 = v843;
                                    }
                                    v1574 = 96;
                                    memset(v1969, 0, 0xDCuLL);
                                    LOWORD(v1969[17]) = 220;
                                    if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _DWORD *))off_18019C0E0[0])(
                                           0LL,
                                           0xFFFFFFFFLL,
                                           v1969) )
                                    {
                                      v844 = HIWORD(v1969[41]);
                                      *((_QWORD *)&v1894 + 1) = *(_QWORD *)&v1969[43];
                                      if ( HIWORD(v1969[41]) < 0x60u )
                                        v844 = 96;
                                      v1574 = v844;
                                    }
                                    v845 = v1437;
                                    if ( Sizeg != 1 )
                                      v845 = v1632;
                                    v1535 = v845;
                                    memset(v1968, 0, 0x5CuLL);
                                    v641 = 0;
                                    v1510 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0F8[0])(
                                                      0LL,
                                                      0LL,
                                                      1027LL);
                                    if ( v1510 )
                                    {
                                      v1968[0] = -((int (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                                    v1471,
                                                    v1574,
                                                    72LL);
                                      v1968[4] = 400;
                                      BYTE2(v1968[6]) = 5;
                                      sub_180057300(&v1968[7], 32LL, (__int64)v1535);
                                      v847 = ((__int64 (__fastcall *)(_DWORD *))off_18019C020[0])(v1968);
                                      if ( v847 )
                                      {
                                        v1922[18] = v847;
                                      }
                                      else
                                      {
                                        v848 = GetLastError();
                                        v641 = v848;
                                        if ( v848 > 0 )
                                          v641 = (unsigned __int16)v848 | 0x80070000;
                                        if ( v641 >= 0 )
                                          v641 = -2147467259;
                                      }
                                      ((void (__fastcall *)(_QWORD, LPVOID))off_18019C160[0])(0LL, v1510);
                                    }
                                    else
                                    {
                                      v846 = GetLastError();
                                      v641 = v846;
                                      if ( v846 > 0 )
                                        v641 = (unsigned __int16)v846 | 0x80070000;
                                      if ( v641 < 0 )
                                        goto LABEL_1225;
                                      v641 = -2147467259;
                                    }
                                    if ( v641 < 0 )
                                      goto LABEL_1225;
                                    v849 = v1437;
                                    if ( Sizeg != 1 )
                                      v849 = v1632;
                                    v1438 = v849;
                                    memset(v1966, 0, 0x5CuLL);
                                    v641 = 0;
                                    v1633 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0F8[0])(
                                                      0LL,
                                                      0LL,
                                                      1027LL);
                                    if ( v1633 )
                                    {
                                      v1966[0] = -((int (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                                    v1499,
                                                    v1574,
                                                    72LL);
                                      v1966[4] = 400;
                                      BYTE2(v1966[6]) = 5;
                                      sub_180057300(&v1966[7], 32LL, (__int64)v1438);
                                      v851 = ((__int64 (__fastcall *)(_DWORD *))off_18019C020[0])(v1966);
                                      if ( v851 )
                                      {
                                        v1922[19] = v851;
                                      }
                                      else
                                      {
                                        v852 = GetLastError();
                                        v641 = v852;
                                        if ( v852 > 0 )
                                          v641 = (unsigned __int16)v852 | 0x80070000;
                                        if ( v641 >= 0 )
                                          v641 = -2147467259;
                                      }
                                      ((void (__fastcall *)(_QWORD, void *))off_18019C160[0])(0LL, v1633);
                                    }
                                    else
                                    {
                                      v850 = GetLastError();
                                      v641 = v850;
                                      if ( v850 > 0 )
                                        v641 = (unsigned __int16)v850 | 0x80070000;
                                      if ( v641 < 0 )
                                        goto LABEL_1225;
                                      v641 = -2147467259;
                                    }
                                    if ( v641 < 0 )
                                      goto LABEL_1225;
                                    v853 = 0;
                                    v854 = 0;
                                    if ( Sizeg != 1 )
                                    {
                                      if ( Sizeg == 2 )
                                      {
                                        v853 = SDWORD2(v1894) / 4;
LABEL_1167:
                                        *((_QWORD *)&v1893 + 1) = __PAIR64__(v854, v853);
                                        if ( Sizeg == 1 )
                                        {
                                          v855 = 150;
                                          v1525 = 32;
                                        }
                                        else
                                        {
                                          if ( (unsigned int)(Sizeg - 2) > 1 )
                                          {
                                            v1525 = v1640;
                                            v856 = v1640;
                                            v855 = v1640;
LABEL_1174:
                                            v1472 = v855;
                                            v1500 = v856;
                                            v1641 = v853 - v855 - v856;
                                            HIDWORD(v1922[24]) = v1641;
                                            HIDWORD(v1922[22]) = v1641;
                                            v857 = v1922[15];
                                            v1439 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, _QWORD))off_18019C078[0])(
                                                               v1483,
                                                               v1922[18]);
                                            v858 = ((__int64 (__fastcall *)(LPCWSTR, __int64, __int64, char *, int, _QWORD))off_18019C0D8[0])(
                                                     v1483,
                                                     v857,
                                                     0xFFFFFFFFLL,
                                                     (char *)&v1922[21] + 4,
                                                     3152,
                                                     0LL);
                                            v641 = 0;
                                            if ( !v858 )
                                              v641 = -2147467259;
                                            if ( v1439 )
                                              ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_18019C078[0])(v1483, v1439);
                                            if ( v641 < 0 )
                                              goto LABEL_1225;
                                            v859 = v1922[16];
                                            v1440 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, _QWORD))off_18019C078[0])(
                                                               v1483,
                                                               v1922[19]);
                                            v860 = ((__int64 (__fastcall *)(LPCWSTR, __int64, __int64, char *, int, _QWORD))off_18019C0D8[0])(
                                                     v1483,
                                                     v859,
                                                     0xFFFFFFFFLL,
                                                     (char *)&v1922[23] + 4,
                                                     3152,
                                                     0LL);
                                            v641 = 0;
                                            if ( !v860 )
                                              v641 = -2147467259;
                                            if ( v1440 )
                                              ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_18019C078[0])(v1483, v1440);
                                            if ( v641 < 0 )
                                              goto LABEL_1225;
                                            if ( (unsigned int)(Sizeg - 2) > 1 )
                                            {
                                              v861 = v1641;
                                            }
                                            else
                                            {
                                              v861 = HIDWORD(v1922[24]);
                                              if ( SHIDWORD(v1922[22]) > SHIDWORD(v1922[24]) )
                                                v861 = HIDWORD(v1922[22]);
                                              v1641 = v861;
                                            }
                                            if ( LODWORD(v1922[14]) )
                                            {
                                              off_18019C150();
                                              v862 = v861 + v1500 - HIDWORD(v1922[24]);
                                            }
                                            else
                                            {
                                              off_18019C150();
                                              v862 = v1472;
                                            }
                                            ((void (__fastcall *)(char *, __int64, _QWORD))off_18019C150)(
                                              (char *)&v1922[23] + 4,
                                              v862,
                                              (unsigned int)(LODWORD(v1922[23]) + v1525));
                                            v863 = Sizeg;
                                            if ( (unsigned int)(Sizeg - 2) <= 1 )
                                            {
                                              *((_QWORD *)&v1893 + 1) = __PAIR64__(v1922[25], v861);
                                              LODWORD(v1922[21]) = -5723992;
                                              goto LABEL_1216;
                                            }
                                            if ( Sizeg != 1 )
                                              goto LABEL_1216;
                                            LODWORD(v1922[21]) = 0xFFFFFF;
                                            memset(v1967, 0, 0x5CuLL);
                                            v641 = 0;
                                            v1441 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0F8[0])(
                                                               0LL,
                                                               0LL,
                                                               1027LL);
                                            if ( v1441 )
                                            {
                                              v1967[0] = -((int (__fastcall *)(__int64, _QWORD))off_18019C0B8[0])(
                                                            11LL,
                                                            v1574);
                                              v1967[4] = 400;
                                              BYTE2(v1967[6]) = 5;
                                              sub_180057300(&v1967[7], 32LL, v1581);
                                              v865 = ((__int64 (__fastcall *)(_DWORD *))off_18019C020[0])(v1967);
                                              if ( v865 )
                                              {
                                                v1922[20] = v865;
                                              }
                                              else
                                              {
                                                v866 = GetLastError();
                                                v641 = v866;
                                                if ( v866 > 0 )
                                                  v641 = (unsigned __int16)v866 | 0x80070000;
                                                if ( v641 >= 0 )
                                                  v641 = -2147467259;
                                              }
                                              ((void (__fastcall *)(_QWORD, LPCWSTR))off_18019C160[0])(0LL, v1441);
                                            }
                                            else
                                            {
                                              v864 = GetLastError();
                                              v641 = v864;
                                              if ( v864 > 0 )
                                                v641 = (unsigned __int16)v864 | 0x80070000;
                                              if ( v641 < 0 )
                                                goto LABEL_1225;
                                              v641 = -2147467259;
                                            }
                                            if ( v641 >= 0 )
                                            {
                                              HIDWORD(v1922[26]) = v1641;
                                              v867 = v1922[17];
                                              v1442 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, _QWORD))off_18019C078[0])(
                                                                 v1483,
                                                                 v1922[20]);
                                              v868 = ((__int64 (__fastcall *)(LPCWSTR, __int64, __int64, char *, int, _QWORD))off_18019C0D8[0])(
                                                       v1483,
                                                       v867,
                                                       0xFFFFFFFFLL,
                                                       (char *)&v1922[25] + 4,
                                                       1120,
                                                       0LL);
                                              v641 = 0;
                                              if ( !v868 )
                                                v641 = -2147467259;
                                              if ( v1442 )
                                                ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_18019C078[0])(v1483, v1442);
                                              if ( v641 >= 0 )
                                              {
                                                v869 = HIDWORD(v1922[26]) + 24;
                                                if ( HIDWORD(v1922[26]) + 24 < 90 )
                                                  v869 = 90;
                                                HIDWORD(v1922[26]) = v869;
                                                LODWORD(v1922[27]) = 32;
                                                HIDWORD(v1922[25]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                                                       HIDWORD(v1922[25]),
                                                                       v1574,
                                                                       96LL);
                                                LODWORD(v1922[26]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                                                       LODWORD(v1922[26]),
                                                                       v1574,
                                                                       96LL);
                                                HIDWORD(v1922[26]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                                                       HIDWORD(v1922[26]),
                                                                       v1574,
                                                                       96LL);
                                                LODWORD(v1922[27]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                                                       LODWORD(v1922[27]),
                                                                       v1574,
                                                                       96LL);
                                                off_18019C150();
                                                v863 = Sizeg;
LABEL_1216:
                                                v1473 = v1922[14];
                                                v1501 = HIDWORD(v1893);
                                                v870 = DWORD2(v1893);
                                                v871 = v863 - 1;
                                                if ( !v871 )
                                                {
                                                  *(_QWORD *)&v1893 = 0LL;
                                                  goto LABEL_1224;
                                                }
                                                v872 = v871 - 1;
                                                if ( v872 )
                                                {
                                                  if ( v872 != 1 )
                                                    goto LABEL_1224;
                                                  v1940 = 0LL;
                                                  v1941 = 0LL;
                                                  v1942 = 0LL;
                                                  v873 = ((__int64 (__fastcall *)(_QWORD, __int64))off_18019C148[0])(
                                                           0LL,
                                                           1LL);
                                                  LODWORD(v1940) = 40;
                                                  if ( !((unsigned int (__fastcall *)(__int64, __int128 *))off_18019C108[0])(
                                                          v873,
                                                          &v1940) )
                                                    goto LABEL_1224;
                                                  ((void (__fastcall *)(_QWORD, char *))off_18019C140[0])(
                                                    0LL,
                                                    (char *)&v1941 + 4);
                                                  ((void (__fastcall *)(_QWORD, char *))off_18019C140[0])(
                                                    0LL,
                                                    (char *)&v1941 + 12);
                                                  v874 = 50 * (HIDWORD(v1941) - v870) / 100;
                                                  v875 = 50 * (v1942 - v1501);
                                                }
                                                else
                                                {
                                                  v1943 = 0LL;
                                                  v1944 = 0LL;
                                                  v1945 = 0LL;
                                                  v879 = ((__int64 (__fastcall *)(_QWORD, __int64))off_18019C148[0])(
                                                           0LL,
                                                           1LL);
                                                  LODWORD(v1943) = 40;
                                                  if ( !((unsigned int (__fastcall *)(__int64, __int128 *))off_18019C108[0])(
                                                          v879,
                                                          &v1943) )
                                                    goto LABEL_1224;
                                                  ((void (__fastcall *)(_QWORD, char *))off_18019C140[0])(
                                                    0LL,
                                                    (char *)&v1944 + 4);
                                                  ((void (__fastcall *)(_QWORD, char *))off_18019C140[0])(
                                                    0LL,
                                                    (char *)&v1944 + 12);
                                                  if ( v1473 )
                                                    v874 = DWORD1(v1944) + 5 * HIDWORD(v1944) / 100;
                                                  else
                                                    v874 = 95 * (HIDWORD(v1944) - v870) / 100;
                                                  v875 = 95 * (v1945 - v1501);
                                                }
                                                LODWORD(v1893) = v874;
                                                DWORD1(v1893) = v875 / 100;
LABEL_1224:
                                                v641 = 0;
                                              }
                                            }
LABEL_1225:
                                            ((void (__fastcall *)(_QWORD, LPCWSTR))off_18019C160[0])(0LL, v1483);
                                            goto LABEL_1226;
                                          }
                                          v855 = 0;
                                          v1525 = 0;
                                        }
                                        v856 = 0;
                                        goto LABEL_1174;
                                      }
                                      if ( Sizeg != 3 )
                                        goto LABEL_1167;
                                    }
                                    v853 = DWORD2(v1894);
                                    v854 = HIDWORD(v1894);
                                    goto LABEL_1167;
                                  }
                                  v1499 = 11;
                                  goto LABEL_1128;
                                }
                                v743 = v1828;
                                v744 = v1970;
                                v745 = 6LL;
                                do
                                {
                                  if ( !v1572 )
                                    *v744 = (__int64)v743;
                                  v746 = -1LL;
                                  do
                                    ++v746;
                                  while ( v743[v746] );
                                  v747 = &v743[v746 + 1];
                                  if ( v1572 == 1 )
                                    *v744 = (__int64)v747;
                                  v748 = -1LL;
                                  do
                                    ++v748;
                                  while ( v747[v748] );
                                  v749 = (__int64)&v747[v748 + 1];
                                  if ( v1572 == 2 )
                                    *v744 = v749;
                                  v750 = -1LL;
                                  do
                                    ++v750;
                                  while ( *(_BYTE *)(v749 + v750) );
                                  v751 = v750 + v749 + 1;
                                  if ( v1572 == 3 )
                                    *v744 = v751;
                                  v752 = -1LL;
                                  do
                                    ++v752;
                                  while ( *(_BYTE *)(v751 + v752) );
                                  v753 = v752 + v751 + 1;
                                  if ( v1572 == 4 )
                                    *v744 = v753;
                                  v754 = -1LL;
                                  do
                                    ++v754;
                                  while ( *(_BYTE *)(v753 + v754) );
                                  v755 = v754 + v753 + 1;
                                  if ( v1572 == 5 )
                                    *v744 = v755;
                                  v756 = -1LL;
                                  do
                                    ++v756;
                                  while ( *(_BYTE *)(v755 + v756) );
                                  v757 = v756 + v755 + 1;
                                  if ( v1572 == 6 )
                                    *v744 = v757;
                                  v758 = -1LL;
                                  do
                                    ++v758;
                                  while ( *(_BYTE *)(v757 + v758) );
                                  v759 = v758 + v757 + 1;
                                  if ( v1572 == 7 )
                                    *v744 = v759;
                                  v760 = -1LL;
                                  do
                                    ++v760;
                                  while ( *(_BYTE *)(v759 + v760) );
                                  v761 = v760 + v759 + 1;
                                  if ( v1572 == 8 )
                                    *v744 = v761;
                                  v762 = -1LL;
                                  do
                                    ++v762;
                                  while ( *(_BYTE *)(v761 + v762) );
                                  v763 = v762 + v761 + 1;
                                  if ( v1572 == 9 )
                                    *v744 = v763;
                                  v764 = -1LL;
                                  do
                                    ++v764;
                                  while ( *(_BYTE *)(v763 + v764) );
                                  v765 = v764 + v763 + 1;
                                  if ( v1572 == 10 )
                                    *v744 = v765;
                                  v766 = -1LL;
                                  do
                                    ++v766;
                                  while ( *(_BYTE *)(v765 + v766) );
                                  v767 = v766 + v765 + 1;
                                  if ( v1572 == 11 )
                                    *v744 = v767;
                                  v768 = -1LL;
                                  do
                                    ++v768;
                                  while ( *(_BYTE *)(v767 + v768) );
                                  v769 = v768 + v767 + 1;
                                  if ( v1572 == 12 )
                                    *v744 = v769;
                                  v770 = -1LL;
                                  do
                                    ++v770;
                                  while ( *(_BYTE *)(v769 + v770) );
                                  v771 = v770 + v769 + 1;
                                  if ( v1572 == 13 )
                                    *v744 = v771;
                                  v772 = -1LL;
                                  do
                                    ++v772;
                                  while ( *(_BYTE *)(v771 + v772) );
                                  v773 = v772 + v771 + 1;
                                  if ( v1572 == 14 )
                                    *v744 = v773;
                                  v774 = -1LL;
                                  do
                                    ++v774;
                                  while ( *(_BYTE *)(v773 + v774) );
                                  v775 = v774 + v773 + 1;
                                  if ( v1572 == 15 )
                                    *v744 = v775;
                                  v776 = -1LL;
                                  do
                                    ++v776;
                                  while ( *(_BYTE *)(v775 + v776) );
                                  v777 = v776 + v775 + 1;
                                  if ( v1572 == 16 )
                                    *v744 = v777;
                                  v778 = -1LL;
                                  do
                                    ++v778;
                                  while ( *(_BYTE *)(v777 + v778) );
                                  v779 = v778 + v777 + 1;
                                  if ( v1572 == 17 )
                                    *v744 = v779;
                                  v780 = -1LL;
                                  do
                                    ++v780;
                                  while ( *(_BYTE *)(v779 + v780) );
                                  v781 = v780 + v779 + 1;
                                  if ( v1572 == 18 )
                                    *v744 = v781;
                                  v782 = -1LL;
                                  do
                                    ++v782;
                                  while ( *(_BYTE *)(v781 + v782) );
                                  v783 = v782 + v781 + 1;
                                  if ( v1572 == 19 )
                                    *v744 = v783;
                                  v784 = -1LL;
                                  do
                                    ++v784;
                                  while ( *(_BYTE *)(v783 + v784) );
                                  v785 = v784 + v783 + 1;
                                  if ( v1572 == 20 )
                                    *v744 = v785;
                                  v786 = -1LL;
                                  do
                                    ++v786;
                                  while ( *(_BYTE *)(v785 + v786) );
                                  v787 = v786 + v785 + 1;
                                  if ( v1572 == 21 )
                                    *v744 = v787;
                                  v788 = -1LL;
                                  do
                                    ++v788;
                                  while ( *(_BYTE *)(v787 + v788) );
                                  v789 = v788 + v787 + 1;
                                  if ( v1572 == 22 )
                                    *v744 = v789;
                                  v790 = -1LL;
                                  do
                                    ++v790;
                                  while ( *(_BYTE *)(v789 + v790) );
                                  v791 = v790 + v789 + 1;
                                  if ( v1572 == 23 )
                                    *v744 = v791;
                                  v792 = -1LL;
                                  do
                                    ++v792;
                                  while ( *(_BYTE *)(v791 + v792) );
                                  v793 = v792 + v791 + 1;
                                  if ( v1572 == 24 )
                                    *v744 = v793;
                                  v794 = -1LL;
                                  do
                                    ++v794;
                                  while ( *(_BYTE *)(v793 + v794) );
                                  v795 = v794 + v793 + 1;
                                  if ( v1572 == 25 )
                                    *v744 = v795;
                                  v796 = -1LL;
                                  do
                                    ++v796;
                                  while ( *(_BYTE *)(v795 + v796) );
                                  v797 = v796 + v795 + 1;
                                  if ( v1572 == 26 )
                                    *v744 = v797;
                                  v798 = -1LL;
                                  do
                                    ++v798;
                                  while ( *(_BYTE *)(v797 + v798) );
                                  v799 = v798 + v797 + 1;
                                  if ( v1572 == 27 )
                                    *v744 = v799;
                                  v800 = -1LL;
                                  do
                                    ++v800;
                                  while ( *(_BYTE *)(v799 + v800) );
                                  v801 = v800 + v799 + 1;
                                  if ( v1572 == 28 )
                                    *v744 = v801;
                                  v802 = -1LL;
                                  do
                                    ++v802;
                                  while ( *(_BYTE *)(v801 + v802) );
                                  v803 = v802 + v801 + 1;
                                  if ( v1572 == 29 )
                                    *v744 = v803;
                                  v804 = -1LL;
                                  do
                                    ++v804;
                                  while ( *(_BYTE *)(v803 + v804) );
                                  v805 = v804 + v803 + 1;
                                  if ( v1572 == 30 )
                                    *v744 = v805;
                                  v806 = -1LL;
                                  do
                                    ++v806;
                                  while ( *(_BYTE *)(v805 + v806) );
                                  v807 = v806 + v805 + 1;
                                  if ( v1572 == 31 )
                                    *v744 = v807;
                                  v808 = -1LL;
                                  do
                                    ++v808;
                                  while ( *(_BYTE *)(v807 + v808) );
                                  v809 = v808 + v807 + 1;
                                  if ( v1572 == 32 )
                                    *v744 = v809;
                                  v810 = -1LL;
                                  do
                                    ++v810;
                                  while ( *(_BYTE *)(v809 + v810) );
                                  v811 = v810 + v809 + 1;
                                  if ( v1572 == 33 )
                                    *v744 = v811;
                                  v812 = -1LL;
                                  do
                                    ++v812;
                                  while ( *(_BYTE *)(v811 + v812) );
                                  v813 = v812 + v811 + 1;
                                  if ( v1572 == 34 )
                                    *v744 = v813;
                                  v814 = -1LL;
                                  do
                                    ++v814;
                                  while ( *(_BYTE *)(v813 + v814) );
                                  v815 = v814 + v813 + 1;
                                  if ( v1572 == 35 )
                                    *v744 = v815;
                                  v816 = -1LL;
                                  do
                                    ++v816;
                                  while ( *(_BYTE *)(v815 + v816) );
                                  v817 = v816 + v815 + 1;
                                  if ( v1572 == 36 )
                                    *v744 = v817;
                                  v818 = -1LL;
                                  do
                                    ++v818;
                                  while ( *(_BYTE *)(v817 + v818) );
                                  v819 = v818 + v817 + 1;
                                  if ( v1572 == 37 )
                                    *v744 = v819;
                                  v820 = -1LL;
                                  do
                                    ++v820;
                                  while ( *(_BYTE *)(v819 + v820) );
                                  v743 = (_BYTE *)(v820 + v819 + 1);
                                  ++v744;
                                  --v745;
                                }
                                while ( v745 );
                                v821 = (void **)sub_180055F40(0x18uLL);
                                v1534 = v821;
                                unknown_libname_376(&v1830);
                                if ( !v821 )
                                {
                                  v1830 = 0LL;
                                  v1616 = -2147024882;
                                  goto LABEL_1112;
                                }
                                v1830 = v821;
                                *(_OWORD *)v821 = 0LL;
                                v821[2] = 0LL;
                                v822 = 0;
                                v1573 = 0;
                                v823 = v821;
                                v1508 = v821;
                                v824 = v1977;
                                v1625 = v1977;
                                while ( 2 )
                                {
                                  v825 = 0LL;
                                  v826 = *v824;
                                  v827 = &unk_1801781C8;
                                  while ( v826 != *v827 )
                                  {
                                    v825 = (unsigned int)(v825 + 1);
                                    ++v827;
                                    if ( (unsigned int)v825 >= 6 )
                                      goto LABEL_1095;
                                  }
                                  v828 = (void *)v1970[v825];
                                  v1647 = v828;
                                  v829 = -1LL;
                                  do
                                    ++v829;
                                  while ( *((_BYTE *)v828 + v829) );
                                  v830 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD, _QWORD, _DWORD))off_18019C0C0[0])(
                                           65001LL,
                                           0LL,
                                           v828,
                                           (unsigned int)(v829 + 1),
                                           0LL,
                                           0);
                                  v1524 = v830;
                                  if ( v830 )
                                  {
                                    v831 = sub_180055F40(2LL * v830);
                                    *v1508 = v831;
                                    if ( !v831 )
                                    {
                                      v1616 = -2147024882;
                                      goto LABEL_1106;
                                    }
                                    v832 = -1LL;
                                    do
                                      ++v832;
                                    while ( *((_BYTE *)v1647 + v832) );
                                    if ( ((unsigned int (__fastcall *)(__int64, _QWORD, LPVOID, _QWORD, LPVOID, int))off_18019C0C0[0])(
                                           65001LL,
                                           0LL,
                                           v1647,
                                           (unsigned int)(v832 + 1),
                                           v831,
                                           v1524) )
                                    {
                                      v823 = v1508;
                                      v822 = v1573;
LABEL_1095:
                                      v1573 = ++v822;
                                      v824 = ++v1625;
                                      v1508 = ++v823;
                                      if ( v822 < 3 )
                                        continue;
                                      v1830 = 0LL;
                                      v1824 = v821;
                                      LODWORD(v1922[14]) = v1609;
                                      goto LABEL_1112;
                                    }
                                    v833 = GetLastError();
                                    v1616 = v833;
                                    v834 = v833 < 0;
                                    if ( v833 > 0 )
                                    {
                                      v1616 = (unsigned __int16)v833 | 0x80070000;
                                      v834 = 1;
                                    }
                                    if ( v834 )
                                    {
LABEL_1106:
                                      v837 = 3LL;
                                      v1509 = 3LL;
                                      do
                                      {
                                        if ( *v821 )
                                        {
                                          v838 = -1LL;
                                          do
                                            ++v838;
                                          while ( *((_WORD *)*v821 + v838) );
                                          memset(*v821, 0, 2 * v838 + 2);
                                          v839 = *v1534;
                                          v840 = GetProcessHeap();
                                          HeapFree(v840, 0, v839);
                                          v821 = v1534;
                                          v837 = v1509;
                                        }
                                        v1534 = ++v821;
                                        v1509 = --v837;
                                      }
                                      while ( v837 );
                                      goto LABEL_1112;
                                    }
                                  }
                                  else
                                  {
                                    v835 = GetLastError();
                                    v1616 = v835;
                                    v836 = v835 < 0;
                                    if ( v835 > 0 )
                                    {
                                      v1616 = (unsigned __int16)v835 | 0x80070000;
                                      v836 = 1;
                                    }
                                    if ( v836 )
                                      goto LABEL_1106;
                                  }
                                  break;
                                }
                                v1616 = -2147467259;
                                goto LABEL_1106;
                              }
                              v643 = GetLastError();
                              v1616 = v643;
                              v644 = v643 < 0;
                              if ( v643 <= 0 )
                              {
LABEL_850:
                                if ( !v644 )
                                  v1616 = -2147467259;
                                goto LABEL_866;
                              }
                            }
                            else
                            {
                              v643 = GetLastError();
                              v1616 = v643;
                              v644 = v643 < 0;
                              if ( v643 <= 0 )
                                goto LABEL_850;
                            }
                            v1616 = (unsigned __int16)v643 | 0x80070000;
                            v644 = 1;
                            goto LABEL_850;
                          }
                          v573 = dword_18019E4C8;
LABEL_841:
                          dword_18019E4C8 = v573 + 1;
                          goto LABEL_842;
                        }
                        v506 = dword_18019E4C8;
LABEL_791:
                        dword_18019E4C8 = v506 + 1;
                        goto LABEL_792;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v94 = 1;
    }
    v182 = v1655;
    goto LABEL_290;
  }
  v1654 = 0LL;
  v92 = -2147024882;
  v93 = 4LL;
  v94 = 1;
LABEL_1962:
  v1395 = v1652;
LABEL_1963:
  while ( _InterlockedCompareExchange(&dword_18019EB40, v94, 0) )
    ;
  v1396 = dword_18019E4C8;
  if ( dword_18019E4C8 > 0 )
  {
    --dword_18019E4C8;
    if ( v1396 == 1 )
    {
      v1397 = (HMODULE *)&unk_18019EA60;
      do
      {
        if ( *v1397 )
        {
          FreeLibrary(*v1397);
          v93 = v1772;
        }
        v1397 += 3;
        v1772 = --v93;
      }
      while ( v93 );
      memset(&unk_18019EA60, 0, 0x60uLL);
      off_18019C000[0] = sub_180138200;
      off_18019C008[0] = sub_180138200;
      off_18019C010[0] = sub_180138200;
      off_18019C018[0] = sub_180138200;
      off_18019C020[0] = sub_180138200;
      off_18019C028[0] = sub_180138200;
      off_18019C030[0] = sub_180138200;
      off_18019C038[0] = sub_180138200;
      off_18019C040[0] = sub_18004CB50;
      off_18019C048[0] = sub_18004CB50;
      off_18019C050[0] = sub_180138200;
      off_18019C058[0] = sub_180138200;
      off_18019C060[0] = sub_180138200;
      off_18019C068[0] = sub_180138200;
      off_18019C070[0] = sub_180138200;
      off_18019C078[0] = sub_180138200;
      off_18019C080[0] = sub_18004CB50;
      off_18019C088[0] = sub_180138200;
      off_18019C090[0] = sub_180138200;
      off_18019C098[0] = sub_180138200;
      off_18019C0A0[0] = sub_180138200;
      off_18019C0A8[0] = sub_180138200;
      off_18019C0B0[0] = sub_180138200;
      off_18019C0B8[0] = sub_18004DA20;
      off_18019C0C0[0] = sub_180138200;
      off_18019C0C8 = sub_180138200;
      v5 = 0LL;
      qword_18019C0D0 = 0LL;
      off_18019C0D8[0] = sub_18004CB50;
      off_18019C0E0[0] = sub_180138200;
      off_18019C0E8[0] = sub_180138200;
      off_18019C0F0[0] = sub_180138200;
      off_18019C0F8[0] = sub_180138200;
      off_18019C100[0] = sub_180138200;
      off_18019C108[0] = sub_18004CB50;
      off_18019C110[0] = sub_180138200;
      off_18019C118[0] = sub_180138200;
      off_18019C120[0] = sub_180138200;
      off_18019C128[0] = sub_180138200;
      off_18019C130[0] = sub_180138200;
      off_18019C138[0] = sub_180138200;
      off_18019C140[0] = sub_18004CB50;
      off_18019C148[0] = sub_18004CB50;
      off_18019C150 = sub_18004CB50;
      off_18019C158[0] = sub_18004CB50;
      off_18019C160[0] = sub_180138200;
      off_18019C168 = sub_180138200;
    }
  }
  _InterlockedExchange(&dword_18019EB40, v5);
  sub_180067CF8(&v1654);
  if ( v92 >= 0 )
  {
    if ( v1395 == 4 )
    {
      v9 = v1771;
      if ( !v1771 )
        v9 = (int *)v5;
      v1658 = *v9;
    }
    else
    {
      v7 = -1073418210;
    }
  }
  else
  {
    switch ( v92 )
    {
      case -805306316:
        v7 = -1073418222;
        break;
      case -805306139:
      case -1073425151:
        v7 = -1073418201;
        break;
      case -805306306:
        v7 = -1073418200;
        break;
      default:
        v7 = v92;
        if ( v92 == -2147024774 )
          v7 = -1073418210;
        break;
    }
  }
  sub_180067CF8(&v1771);
  if ( v7 < 0 )
  {
    sub_18004BD84((int)retaddr, 270, (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h", v7);
  }
  else
  {
    v10 = v5;
    if ( v1657 )
    {
      while ( 1 )
      {
        v1871 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v5;
        v1398 = v1770;
        sub_1800CB144(&v1871);
        v1399 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1398 + 48LL))(v1398, v10, &v1871);
        v7 = v1399;
        if ( v1399 < 0 )
          break;
        v1872 = v5;
        sub_1800CB144(&v1872);
        v1400 = (**v1871)(v1871, &unk_18015F1A8, &v1872);
        v7 = v1400;
        if ( v1400 < 0 )
        {
          sub_18004BD84(
            (int)retaddr,
            279,
            (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
            v1400);
          goto LABEL_2043;
        }
        v1873 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v5;
        v1401 = v1872;
        sub_1800CB144(&v1873);
        v1402 = (_QWORD *)sub_180133660(&v1937);
        v1403 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1401 + 48LL))(v1401, *v1402, &v1873);
        v7 = v1403;
        if ( v1403 < 0 )
        {
          sub_18004BD84(
            (int)retaddr,
            283,
            (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
            v1403);
          goto LABEL_2041;
        }
        v1874 = v5;
        sub_1800CB144(&v1874);
        v1404 = (**v1873)(v1873, &unk_18015DC88, &v1874);
        v7 = v1404;
        if ( v1404 < 0 )
        {
          sub_18004BD84(
            (int)retaddr,
            286,
            (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
            v1404);
          goto LABEL_2039;
        }
        v1875 = (HSTRING)v5;
        v1405 = v1874;
        WindowsDeleteString((HSTRING)v5);
        v1875 = (HSTRING)v5;
        StagedPackageOrigin = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v1405 + 152LL))(v1405, &v1875);
        v7 = StagedPackageOrigin;
        if ( StagedPackageOrigin < 0 )
        {
          v1428 = 289;
          goto LABEL_2036;
        }
        if ( v1658 == 5 || (unsigned int)(v1658 - 11) <= 1 )
          goto LABEL_1992;
        origin = (int)v5;
        StringRawBuffer = WindowsGetStringRawBuffer(v1875, 0LL);
        StagedPackageOrigin = GetStagedPackageOrigin(StringRawBuffer, &origin);
        v7 = StagedPackageOrigin;
        if ( StagedPackageOrigin < 0 )
        {
          v1428 = 297;
LABEL_2036:
          sub_18004BD84(
            (int)retaddr,
            v1428,
            (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
            StagedPackageOrigin);
          goto LABEL_2037;
        }
        if ( origin == PackageOrigin_Store )
        {
LABEL_1992:
          sub_18005FD7C(&packageFamilyName, 0LL, 64LL);
          v1408 = packageFamilyName;
          if ( !packageFamilyName )
          {
            sub_18004BD84(
              (int)retaddr,
              308,
              (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
              -2147024882);
            v7 = -2147024882;
            goto LABEL_2032;
          }
          packageFamilyNameLength = 65;
          v1409 = WindowsGetStringRawBuffer(v1875, 0LL);
          v1410 = PackageFamilyNameFromFullName(v1409, &packageFamilyNameLength, v1408);
          v7 = v1410;
          if ( v1410 < 0 )
          {
            sub_18004BD84(
              (int)retaddr,
              317,
              (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
              v1410);
            goto LABEL_2032;
          }
          v1877 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v5;
          v1411 = v1872;
          sub_1800CB144(&v1877);
          v1412 = (_QWORD *)sub_1801336B8(&v1938);
          v1413 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1411 + 48LL))(v1411, *v1412, &v1877);
          v7 = v1413;
          if ( v1413 < 0 )
          {
            sub_18004BD84(
              (int)retaddr,
              321,
              (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
              v1413);
            v5 = 0LL;
            goto LABEL_2029;
          }
          v5 = 0LL;
          v1878[0] = 0LL;
          sub_1800CB144(v1878);
          v1414 = (**v1877)(v1877, &unk_18015F1A8, v1878);
          v7 = v1414;
          if ( v1414 < 0 )
          {
            sub_18004BD84(
              (int)retaddr,
              324,
              (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
              v1414);
            goto LABEL_2027;
          }
          v1789 = 0LL;
          v1415 = v1878[0];
          sub_1800CB144(&v1789);
          v1416 = (_QWORD *)sub_180133608(&v1939, L"Codec");
          v1417 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1415 + 48LL))(v1415, *v1416, &v1789);
          v7 = v1417;
          if ( v1417 < 0 )
          {
            sub_18004BD84(
              (int)retaddr,
              328,
              (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
              v1417);
            v5 = 0LL;
            goto LABEL_2025;
          }
          v5 = 0LL;
          v1804[0] = 0LL;
          sub_1800CB144(v1804);
          if ( (**v1789)(v1789, &unk_18015DC88, v1804) < 0 )
          {
            jj = v1855;
            sub_180048790(v1855, (__int64)v1789);
            v1418 = sub_18013698C((unsigned int)v1855, (_DWORD)v1408, v4, v1426, (__int64)v3);
            v7 = v1418;
            if ( v1418 < 0 )
            {
              v1427 = 353;
LABEL_2022:
              sub_18004BD84(
                (int)retaddr,
                v1427,
                (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
                v1418);
              goto LABEL_2023;
            }
          }
          else
          {
            v1418 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v1804[0] + 48LL))(v1804[0], &v1764);
            v7 = v1418;
            if ( v1418 < 0 )
            {
              v1427 = 335;
              goto LABEL_2022;
            }
            if ( v1764 == 1037 )
            {
              v1901 = 0LL;
              v1902 = 0LL;
              v1419 = v1804[0];
              v1903 = &v1901;
              v1904 = 0;
              v1905 = 1;
              sub_1801380EC(&v1901);
              v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v1419 + 304LL))(
                     v1419,
                     &v1904,
                     &v1901);
              if ( v1905 )
                v1903[1] = v1904;
              if ( v7 < 0 )
              {
                v1429 = v7;
                v1430 = 340;
                goto LABEL_2020;
              }
              v1420 = 0;
              if ( v1902 )
              {
                v1421 = 0LL;
                while ( 1 )
                {
                  v1644 = 0;
                  jj = (void **)&v1812;
                  v1422 = (unsigned int)sub_180048790(&v1812, *(_QWORD *)(v1901 + 8 * v1421));
                  v1424 = sub_18013698C(v1422, (_DWORD)v1408, v4, v1423, (__int64)&v1644);
                  v7 = v1424;
                  if ( v1424 < 0 )
                    break;
                  v1425 = *v3 || v1644;
                  *v3 = v1425;
                  v1421 = ++v1420;
                  if ( v1420 >= v1902 )
                    goto LABEL_2011;
                }
                v1429 = v1424;
                v1430 = 345;
LABEL_2020:
                sub_18004BD84(
                  (int)retaddr,
                  v1430,
                  (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
                  v1429);
                sub_1801380EC(&v1901);
                v5 = 0LL;
LABEL_2023:
                sub_18000F708(v1804);
LABEL_2025:
                sub_18000F708((__int64 *)&v1789);
LABEL_2027:
                sub_18000F708(v1878);
LABEL_2029:
                sub_18000F708((__int64 *)&v1877);
LABEL_2032:
                if ( v1408 )
                  CoTaskMemFree(v1408);
LABEL_2037:
                WindowsDeleteString(v1875);
                v1875 = (HSTRING)v5;
LABEL_2039:
                sub_18000F708(&v1874);
LABEL_2041:
                sub_18000F708((__int64 *)&v1873);
LABEL_2043:
                sub_18000F708(&v1872);
                goto LABEL_2045;
              }
LABEL_2011:
              sub_1801380EC(&v1901);
              v5 = 0LL;
            }
          }
          sub_18000F708(v1804);
          sub_18000F708((__int64 *)&v1789);
          sub_18000F708(v1878);
          sub_18000F708((__int64 *)&v1877);
          CoTaskMemFree(v1408);
        }
        else
        {
          sub_180136F2C(&unk_18019EE28, 0LL);
        }
        WindowsDeleteString(v1875);
        v1875 = (HSTRING)v5;
        sub_18000F708(&v1874);
        sub_18000F708((__int64 *)&v1873);
        sub_18000F708(&v1872);
        sub_18000F708((__int64 *)&v1871);
        if ( ++v10 >= v1657 )
          goto LABEL_12;
      }
      sub_18004BD84((int)retaddr, 276, (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h", v1399);
LABEL_2045:
      sub_18000F708((__int64 *)&v1871);
    }
    else
    {
LABEL_12:
      v7 = v5;
    }
  }
LABEL_13:
  sub_18000F708(&v1770);
  return (unsigned int)v7;
}
