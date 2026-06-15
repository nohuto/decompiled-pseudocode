/*
 * XREFs of sub_180038C20 @ 0x180038C20
 * Callers:
 *     sub_180038AC8 @ 0x180038AC8 (sub_180038AC8.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_180009DE0 @ 0x180009DE0 (sub_180009DE0.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180038B58 @ 0x180038B58 (sub_180038B58.c)
 *     sub_180038BCC @ 0x180038BCC (sub_180038BCC.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_18005F608 @ 0x18005F608 (sub_18005F608.c)
 *     sub_18005F628 @ 0x18005F628 (sub_18005F628.c)
 *     sub_18005F64C @ 0x18005F64C (sub_18005F64C.c)
 *     sub_18005F6A4 @ 0x18005F6A4 (sub_18005F6A4.c)
 *     sub_180067CF8 @ 0x180067CF8 (sub_180067CF8.c)
 *     sub_1800685D0 @ 0x1800685D0 (sub_1800685D0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006A1BC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_180074180 @ 0x180074180 (sub_180074180.c)
 *     unknown_libname_376 @ 0x1800741B0 (unknown_libname_376.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     wcscmp @ 0x18007441B (wcscmp.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_180038C20(_QWORD *a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  char *v5; // r14
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // r11d
  _BYTE *v10; // r15
  unsigned __int8 *v11; // r12
  __int64 v12; // r13
  int v13; // r10d
  int v14; // r9d
  int v15; // r11d
  unsigned int v16; // r8d
  int v17; // r11d
  unsigned int v18; // r8d
  int v19; // r11d
  int v20; // r8d
  unsigned int v21; // r11d
  int v22; // r8d
  int v23; // r11d
  int v24; // r8d
  unsigned int v25; // r11d
  int v26; // edx
  int v27; // r11d
  unsigned int v28; // ebx
  int v29; // r11d
  int v30; // ebx
  int v31; // edx
  int v32; // ebx
  unsigned int v33; // r11d
  int v34; // ebx
  int v35; // r11d
  int v36; // ebx
  unsigned int v37; // r11d
  int v38; // ebx
  int v39; // r11d
  int v40; // ebx
  int v41; // r11d
  int v42; // ebx
  int v43; // r11d
  int v44; // ebx
  int v45; // r11d
  int v46; // ebx
  char v47; // al
  unsigned __int64 v48; // rcx
  int v49; // esi
  void *v50; // r14
  unsigned int v51; // r13d
  int v52; // edi
  LPCWSTR v53; // rdi
  const WCHAR *v54; // rdx
  __int64 v55; // rax
  const WCHAR *v56; // rdi
  char *v57; // rbx
  __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  unsigned int v60; // r15d
  unsigned int i; // r14d
  const CHAR *v62; // rdx
  __int64 v63; // rax
  __int64 (__fastcall *ProcAddress)(); // rcx
  HANDLE ProcessHeap; // rax
  HMODULE *v66; // rdi
  __int64 v67; // rbx
  int v68; // esi
  signed int LastError; // edi
  __int64 v70; // r14
  bool v71; // sf
  __int64 v72; // r9
  wchar_t *v73; // rbx
  signed int v74; // eax
  DWORD CurrentThreadId; // eax
  __int64 v76; // r14
  bool v77; // sf
  __int64 v78; // r9
  wchar_t *v79; // rbx
  signed int v80; // eax
  HANDLE CurrentProcess; // rax
  int v82; // eax
  HLOCAL v83; // rdi
  signed int v84; // r15d
  unsigned int v85; // ebx
  int v86; // eax
  HMODULE *v87; // rdi
  __int64 v88; // rsi
  void *v90; // r13
  _QWORD *v91; // r12
  HANDLE v92; // rax
  _OWORD *v93; // rbx
  _OWORD *v94; // rax
  HANDLE v95; // rax
  int v96; // eax
  unsigned int v97; // edi
  int v98; // eax
  unsigned int v99; // r10d
  int v100; // eax
  int v101; // eax
  unsigned int v102; // r10d
  int v103; // r11d
  int v104; // eax
  int v105; // eax
  unsigned int v106; // r10d
  int v107; // r11d
  int v108; // eax
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  int v112; // r11d
  unsigned int v113; // r10d
  int v114; // eax
  int v115; // eax
  unsigned int v116; // r10d
  int v117; // r11d
  int v118; // eax
  int v119; // eax
  unsigned int v120; // r10d
  int v121; // r11d
  int v122; // eax
  int v123; // eax
  int v124; // r11d
  unsigned int v125; // edi
  HANDLE v126; // rax
  void *v127; // r9
  unsigned int v128; // edi
  _DWORD *v129; // r9
  __int64 v130; // r10
  int v131; // eax
  __int64 v132; // rdx
  char *v133; // rdx
  __int64 v134; // r10
  int v135; // r11d
  unsigned int *v136; // r9
  __int64 v137; // rcx
  __int64 v138; // r9
  unsigned int v139; // r10d
  int v140; // r11d
  _DWORD *v141; // r9
  _OWORD *v142; // rax
  int v143; // eax
  __int64 v144; // rdx
  char *v145; // r9
  unsigned int v146; // ecx
  unsigned int v147; // eax
  _DWORD *v148; // r9
  int v149; // eax
  __int64 v150; // rdx
  unsigned __int64 v151; // rcx
  int v152; // r11d
  char *v153; // r9
  unsigned int v154; // eax
  _DWORD *v155; // r9
  int v156; // r11d
  __int64 v157; // r11
  __int64 v158; // r10
  int v159; // r11d
  int v160; // eax
  __int64 v161; // rdx
  _DWORD *v162; // rdi
  unsigned int v163; // ecx
  unsigned int v164; // eax
  __int64 v165; // r9
  __int64 v166; // rdx
  _DWORD *v167; // rdi
  unsigned int v168; // ecx
  unsigned int v169; // eax
  int v170; // eax
  __int64 v171; // rdx
  int v172; // r11d
  _DWORD *v173; // rdi
  unsigned int v174; // ecx
  unsigned int v175; // eax
  int v176; // r11d
  int v177; // eax
  __int64 v178; // rcx
  unsigned int v179; // r9d
  int v180; // eax
  unsigned int v181; // r9d
  unsigned int v182; // edi
  unsigned int v183; // r10d
  int v184; // eax
  unsigned int v185; // r10d
  int v186; // eax
  unsigned int v187; // r10d
  int v188; // eax
  unsigned int v189; // r10d
  int v190; // eax
  unsigned int v191; // eax
  unsigned __int8 *v192; // rdi
  unsigned int v193; // r12d
  unsigned int v194; // r13d
  int v195; // r15d
  unsigned int v196; // eax
  unsigned int v197; // edi
  HANDLE v198; // rax
  _DWORD *v199; // rdi
  unsigned int v200; // r10d
  void *v201; // rcx
  HANDLE v202; // rax
  WCHAR *v203; // rbx
  int v204; // r15d
  unsigned __int64 v205; // r15
  _BYTE *v206; // r13
  unsigned __int8 v207; // al
  int v208; // r11d
  unsigned __int64 j; // rcx
  unsigned __int8 *v210; // r8
  _BYTE *v211; // r12
  unsigned int v212; // r9d
  int v213; // r10d
  unsigned int v214; // edx
  int v215; // r10d
  char v216; // r9
  int v217; // edi
  int v218; // ecx
  unsigned int v219; // r10d
  unsigned int v220; // ecx
  int v221; // edi
  int v222; // r11d
  char v223; // r14
  unsigned __int64 v224; // r11
  _BYTE *v225; // rax
  unsigned __int8 *v226; // rdx
  int v227; // r14d
  int v228; // ebx
  int v229; // r12d
  int v230; // r15d
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
  unsigned int v257; // r10d
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
  _QWORD *v268; // rdi
  HANDLE v269; // rax
  void *v270; // rax
  HANDLE v271; // rax
  _OWORD *v272; // rax
  HANDLE v273; // rax
  _QWORD *v274; // rax
  void *v275; // r12
  HANDLE v276; // rax
  void *v277; // r12
  HANDLE v278; // rax
  void *v279; // r12
  HANDLE v280; // rax
  HANDLE v281; // rax
  void *v282; // rdi
  HANDLE v283; // rax
  void *v284; // rdi
  HANDLE v285; // rax
  void *v286; // rdi
  HANDLE v287; // rax
  void *v288; // rdi
  HANDLE v289; // rax
  HANDLE v290; // rax
  const void **v291; // rbx
  int v292; // r15d
  unsigned int v293; // r12d
  unsigned int v294; // eax
  unsigned int v295; // edi
  HANDLE v296; // rax
  _DWORD *v297; // rax
  void *v298; // rdi
  void *v299; // rcx
  void *v300; // rcx
  HANDLE v301; // rax
  int v302; // eax
  unsigned int v303; // ecx
  unsigned int v304; // eax
  unsigned int v305; // r9d
  unsigned int *v306; // rcx
  int v307; // edi
  unsigned int v308; // ebx
  unsigned int v309; // r9d
  unsigned int v310; // edi
  unsigned int *v311; // rax
  unsigned __int64 v312; // rcx
  int v313; // r8d
  unsigned __int64 v314; // rdi
  unsigned __int64 v315; // rdx
  int v316; // edi
  unsigned __int64 v317; // rax
  unsigned int v318; // ecx
  unsigned int v319; // r10d
  unsigned int v320; // r11d
  unsigned int v321; // eax
  unsigned int v322; // edi
  HANDLE v323; // rax
  unsigned int *v324; // rax
  unsigned int *v325; // rbx
  signed int v326; // eax
  unsigned int v327; // edi
  NTSTATUS (__stdcall *NtQuerySystemInformation)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG); // rax
  int v329; // eax
  int v330; // r15d
  unsigned int *v331; // rbx
  int *v332; // rdi
  SIZE_T v333; // r13
  unsigned int v334; // r10d
  unsigned int *v335; // rcx
  __int64 v336; // r10
  SIZE_T v337; // rbx
  unsigned int v338; // r10d
  __int64 v339; // r10
  SIZE_T v340; // r12
  unsigned int v341; // r10d
  unsigned int *v342; // r9
  HANDLE v343; // rax
  _QWORD *v344; // rdi
  void *v345; // r15
  HANDLE v346; // rax
  void *v347; // rax
  void *v348; // r15
  HANDLE v349; // rax
  void *v350; // rax
  void *v351; // rbx
  size_t v352; // r15
  HANDLE v353; // rax
  void *v354; // rax
  void *v355; // rbx
  HANDLE v356; // rax
  void *v357; // rbx
  HANDLE v358; // rax
  void *v359; // rbx
  HANDLE v360; // rax
  HANDLE v361; // rax
  _QWORD *v362; // rdi
  void *v363; // rbx
  HANDLE v364; // rax
  void *v365; // rbx
  HANDLE v366; // rax
  void *v367; // rbx
  HANDLE v368; // rax
  HANDLE v369; // rax
  SIZE_T v370; // r13
  __int64 v371; // rbx
  const WCHAR *v372; // rbx
  _BYTE *v373; // r15
  int v374; // r11d
  unsigned __int8 v375; // al
  unsigned __int8 *v376; // r8
  _BYTE *v377; // r13
  unsigned int v378; // edx
  int v379; // r10d
  char v380; // r9
  int v381; // edi
  int v382; // ecx
  unsigned int v383; // r10d
  unsigned int v384; // r11d
  int v385; // ecx
  unsigned int v386; // edi
  int v387; // r9d
  char v388; // si
  int v389; // eax
  int v390; // edi
  _BYTE *v391; // r15
  unsigned __int8 *v392; // rbx
  char *v393; // r13
  int v394; // esi
  int v395; // r12d
  int v396; // r9d
  int v397; // r8d
  int v398; // r10d
  unsigned int v399; // r11d
  int v400; // r10d
  unsigned int v401; // r11d
  int v402; // r10d
  int v403; // r11d
  unsigned int v404; // r10d
  int v405; // r11d
  int v406; // r10d
  int v407; // r11d
  unsigned int v408; // r10d
  int v409; // r11d
  int v410; // r10d
  unsigned int v411; // r11d
  int v412; // r10d
  int v413; // r11d
  int v414; // r10d
  int v415; // r11d
  unsigned int v416; // r10d
  int v417; // r11d
  int v418; // r10d
  int v419; // r11d
  unsigned int v420; // r10d
  int v421; // r11d
  int v422; // r10d
  int v423; // r11d
  int v424; // r10d
  int v425; // r11d
  int v426; // r10d
  int v427; // r11d
  int v428; // r10d
  int v429; // r11d
  unsigned __int64 v430; // rcx
  int v431; // ebx
  int *v432; // rbx
  HANDLE v433; // rax
  int v434; // r15d
  SIZE_T v435; // r13
  void *v436; // r11
  void *v437; // rbx
  void *v438; // rdi
  char *v439; // rdi
  int v440; // r9d
  int v441; // r10d
  void *v442; // r11
  bool k; // cf
  unsigned int v444; // eax
  char *v445; // rdx
  HANDLE v446; // rax
  void *v447; // rbx
  HANDLE v448; // rax
  _QWORD *v449; // rbx
  void *v450; // rdi
  HANDLE v451; // rax
  void *v452; // rdi
  HANDLE v453; // rax
  void *v454; // rdi
  HANDLE v455; // rax
  HANDLE v456; // rax
  HANDLE v457; // rax
  HANDLE v458; // rax
  void *v459; // rdi
  HANDLE v460; // rax
  void *v461; // rdi
  HANDLE v462; // rax
  void *v463; // rdi
  HANDLE v464; // rax
  HANDLE v465; // rax
  void *v466; // rdi
  HANDLE v467; // rax
  unsigned int v468; // r11d
  __int64 v469; // r10
  int v470; // r9d
  signed int *v471; // rax
  int *v472; // rcx
  unsigned int v473; // edi
  unsigned int v474; // r9d
  int v475; // edi
  int *v476; // rax
  unsigned __int64 v477; // rcx
  unsigned int v478; // r8d
  unsigned __int64 v479; // rdi
  unsigned __int64 v480; // rdx
  int v481; // edi
  _DWORD *v482; // rax
  unsigned __int64 v483; // rcx
  unsigned int m; // r8d
  unsigned __int64 v485; // rdi
  unsigned __int64 v486; // rdx
  unsigned int v487; // r11d
  void *v488; // r9
  unsigned __int64 v489; // rcx
  int v490; // r8d
  unsigned __int64 v491; // rdi
  unsigned __int64 v492; // rdx
  int v493; // edi
  unsigned int *v494; // rax
  unsigned int v495; // r10d
  unsigned __int64 v496; // rcx
  unsigned int n; // r8d
  unsigned __int64 v498; // rdi
  unsigned __int64 v499; // rdx
  int v500; // edi
  int *v501; // rax
  void *v502; // rdi
  HANDLE v503; // rax
  void *v504; // rdi
  HANDLE v505; // rax
  HANDLE v506; // rax
  HANDLE v507; // rax
  void *v508; // r13
  DWORD ModuleFileNameW; // eax
  unsigned int v510; // edi
  int v511; // eax
  __int64 v512; // r13
  int v513; // r12d
  int v514; // eax
  int v515; // esi
  int v516; // ebx
  _BYTE *v517; // r14
  unsigned __int8 *v518; // r15
  __int64 v519; // rdi
  int v520; // r11d
  int v521; // r10d
  int v522; // ebx
  unsigned int v523; // r9d
  int v524; // ebx
  unsigned int v525; // r9d
  int v526; // ebx
  int v527; // r9d
  unsigned int v528; // ebx
  int v529; // r9d
  int v530; // ebx
  int v531; // r9d
  unsigned int v532; // ebx
  int v533; // r9d
  int v534; // ebx
  unsigned int v535; // esi
  int v536; // ebx
  int v537; // esi
  int v538; // ebx
  int v539; // esi
  unsigned int v540; // ebx
  int v541; // esi
  int v542; // ebx
  int v543; // esi
  unsigned int v544; // ebx
  int v545; // esi
  int v546; // ebx
  int v547; // esi
  int v548; // ebx
  int v549; // esi
  int v550; // ebx
  int v551; // esi
  int v552; // ebx
  int v553; // esi
  unsigned __int64 v554; // rcx
  char v555; // al
  int v556; // r12d
  WCHAR *v557; // r13
  int v558; // ebx
  LPCWSTR v559; // rbx
  const WCHAR *v560; // rdx
  __int64 v561; // rax
  const WCHAR *v562; // rbx
  char *v563; // r13
  __int64 v564; // rcx
  unsigned __int64 v565; // rcx
  unsigned int v566; // ecx
  const CHAR *v567; // rdx
  __int64 v568; // rax
  __int64 (__fastcall *v569)(); // rcx
  HANDLE v570; // rax
  HMODULE *v571; // rbx
  __int64 v572; // r12
  int v573; // eax
  __int64 v574; // rax
  int v575; // edi
  int v576; // r12d
  int v577; // ebx
  _BYTE *v578; // rsi
  unsigned __int8 *v579; // r14
  __int64 v580; // r15
  int v581; // r11d
  int v582; // r10d
  int v583; // ebx
  unsigned int v584; // r9d
  int v585; // ebx
  unsigned int v586; // r9d
  int v587; // ebx
  int v588; // r9d
  unsigned int v589; // ebx
  int v590; // r9d
  int v591; // ebx
  int v592; // r9d
  unsigned int v593; // ebx
  int v594; // r9d
  int v595; // ebx
  unsigned int v596; // r13d
  int v597; // ebx
  int v598; // r13d
  int v599; // ebx
  int v600; // r13d
  unsigned int v601; // ebx
  int v602; // r13d
  int v603; // ebx
  int v604; // r13d
  unsigned int v605; // ebx
  int v606; // r13d
  int v607; // ebx
  int v608; // r13d
  int v609; // ebx
  int v610; // r13d
  int v611; // ebx
  int v612; // r13d
  int v613; // ebx
  int v614; // r13d
  unsigned __int64 v615; // rcx
  char v616; // al
  int v617; // r12d
  WCHAR *v618; // rdx
  int v619; // ebx
  LPCWSTR v620; // rbx
  const WCHAR *v621; // rdx
  __int64 v622; // rax
  const WCHAR *v623; // rbx
  char *v624; // r13
  __int64 v625; // rcx
  unsigned __int64 v626; // rcx
  unsigned int v627; // ecx
  const CHAR *v628; // rdx
  __int64 v629; // rax
  __int64 (__fastcall *v630)(); // rcx
  HANDLE v631; // rax
  HMODULE *v632; // rbx
  __int64 v633; // r12
  int v634; // r13d
  __int64 v635; // rdi
  signed int v636; // eax
  signed int v637; // r12d
  __int64 v638; // r13
  signed int v639; // eax
  __int64 v640; // rbx
  _DWORD *v641; // rdi
  unsigned int mm; // r14d
  __int64 v643; // rax
  unsigned int v644; // r10d
  unsigned int v645; // r9d
  __int64 v646; // r8
  unsigned int v647; // ecx
  _DWORD *v648; // rdx
  __int64 v649; // rdi
  const wchar_t *v650; // rcx
  const wchar_t **v651; // rdx
  __int64 v652; // r8
  __int64 v653; // rax
  void *v654; // rbx
  __int64 v655; // rax
  int v656; // r15d
  int v657; // ebx
  int v658; // r10d
  _BYTE *v659; // r13
  unsigned __int8 *v660; // rsi
  __int64 v661; // r14
  int v662; // r11d
  int v663; // r9d
  int v664; // r8d
  int v665; // r10d
  unsigned int v666; // edi
  int v667; // r10d
  unsigned int v668; // edi
  int v669; // r10d
  int v670; // edi
  unsigned int v671; // r10d
  int v672; // edi
  int v673; // r10d
  int v674; // edi
  unsigned int v675; // r10d
  int v676; // ecx
  int v677; // r10d
  unsigned int v678; // ebx
  int v679; // r10d
  int v680; // ebx
  int v681; // edx
  int v682; // ebx
  unsigned int v683; // r10d
  int v684; // ebx
  int v685; // r10d
  int v686; // ebx
  unsigned int v687; // r10d
  int v688; // ebx
  int v689; // r10d
  int v690; // ebx
  int v691; // r10d
  int v692; // ebx
  int v693; // r10d
  int v694; // ebx
  int v695; // r10d
  int v696; // ebx
  unsigned __int64 v697; // rax
  __m128i v698; // xmm1
  WCHAR *v699; // r11
  __m128i v700; // xmm0
  __m128i v701; // xmm1
  __m128i v702; // xmm1
  __m128i v703; // xmm1
  WCHAR *v704; // rdx
  WCHAR **v705; // rdi
  __int64 v706; // r8
  unsigned int nn; // ecx
  __int64 v708; // rax
  __int64 v709; // rdi
  void **v710; // rbx
  unsigned int v711; // r8d
  _QWORD *v712; // rdx
  __int16 *v713; // rcx
  __int64 v714; // rax
  __int16 v715; // r9
  _WORD *v716; // rcx
  __int64 v717; // rax
  int v718; // eax
  __int64 v719; // rcx
  __int64 v720; // rax
  int v721; // eax
  signed int v722; // eax
  _WORD *v723; // rdi
  __int64 v724; // rcx
  int v725; // edi
  signed int v726; // eax
  unsigned int v727; // edi
  __int64 v728; // r13
  signed int v729; // eax
  int v730; // ebx
  int v731; // eax
  HMODULE *v732; // rdi
  __int64 v733; // rbx
  unsigned int v734; // edi
  __int64 v735; // rax
  int v736; // r12d
  __int64 v737; // rax
  signed int v738; // eax
  void *v739; // rax
  __int64 v740; // rbx
  signed int v741; // eax
  __int64 v742; // rax
  signed int v743; // eax
  int v744; // ebx
  unsigned int v745; // edx
  int v746; // eax
  int v747; // r13d
  int v748; // ebx
  __int64 v749; // rdi
  __int64 v750; // rdi
  __int64 v751; // rdx
  __int64 v752; // rdi
  signed int v753; // eax
  unsigned int v754; // r13d
  __int64 v755; // rdi
  __int64 v756; // rbx
  int v757; // eax
  __int64 v758; // rax
  bool v759; // sf
  int v760; // r12d
  int v761; // ebx
  int v762; // edi
  __int64 v763; // rax
  int v764; // edx
  int v765; // ecx
  __int64 v766; // rax
  LPVOID v767; // rbx
  int v768; // eax
  __int64 v769; // rax
  __int64 v770; // rax
  __int64 v771; // r12
  signed int v772; // ebx
  __int64 v773; // rax
  __int64 v774; // rdi
  signed int v775; // eax
  int v776; // eax
  _BYTE *v777; // rcx
  __int64 v778; // rax
  int v779; // edi
  int v780; // r8d
  int v781; // r9d
  int v782; // ecx
  int v783; // edx
  int v784; // r11d
  char *v785; // rdx
  char *v786; // rax
  char v787; // si
  const WCHAR *v788; // r15
  int v789; // edi
  unsigned __int8 *v790; // r9
  char *v791; // r10
  int v792; // r8d
  LPVOID v793; // rbx
  __int64 v794; // rax
  __int64 v795; // rax
  __int64 v796; // r12
  signed int v797; // ebx
  __int64 v798; // rax
  __int64 v799; // rdi
  signed int v800; // eax
  int v801; // eax
  _BYTE *v802; // rcx
  __int64 v803; // rax
  __int64 v804; // rdx
  __int64 v805; // r8
  unsigned __int8 *v806; // r9
  int v807; // eax
  int v808; // edi
  __int64 v809; // r8
  int v810; // ecx
  __int64 v811; // rdx
  int v812; // eax
  int v813; // r13d
  int v814; // r11d
  char *v815; // rdi
  __int64 v816; // r9
  char *v817; // rax
  const WCHAR *v818; // rsi
  char *v819; // r10
  int v820; // edi
  int v821; // r8d
  int v822; // edx
  int v823; // edi
  LPVOID v824; // r12
  char v825; // al
  unsigned int v826; // ebx
  int v827; // edx
  int v828; // edi
  int v829; // r13d
  int v830; // edi
  int v831; // eax
  int v832; // r13d
  void *v833; // rax
  __int64 v834; // rax
  void *v835; // rcx
  int v836; // edi
  signed int v837; // r13d
  __int64 v838; // rax
  bool v839; // sf
  int v840; // eax
  SIZE_T v841; // rcx
  LPVOID v842; // rdi
  __int64 v843; // rax
  int v844; // eax
  int v845; // edx
  int v846; // r9d
  int v847; // r8d
  int v848; // r10d
  int v849; // ecx
  __int64 v850; // r11
  int v851; // r12d
  SIZE_T v852; // rdx
  char *v853; // rax
  char v854; // r14
  SIZE_T v855; // r15
  __int64 v856; // r13
  int v857; // edi
  unsigned __int8 *v858; // r9
  char *v859; // r10
  int v860; // r8d
  LPVOID v861; // rdi
  __int64 v862; // rax
  void *v863; // rcx
  int v864; // edi
  signed int v865; // r12d
  __int64 v866; // rax
  signed int v867; // eax
  int v868; // eax
  void *v869; // rcx
  LPVOID v870; // rdi
  __int64 v871; // rax
  int v872; // eax
  int v873; // edx
  int v874; // r9d
  int v875; // r8d
  int v876; // r10d
  int v877; // ecx
  int v878; // r11d
  unsigned __int8 *v879; // rdx
  const WCHAR *v880; // rax
  void *v881; // rsi
  int v882; // edi
  unsigned __int8 *v883; // r9
  signed __int64 v884; // r10
  int v885; // r8d
  __int64 v886; // rcx
  __int64 v887; // rcx
  __int64 v888; // rcx
  int v889; // eax
  HMODULE *v890; // rdi
  __int64 v891; // rbx
  int v892; // eax
  __int64 v893; // rax
  WCHAR *v894; // r13
  int v895; // esi
  int v896; // r14d
  int v897; // r10d
  int v898; // r11d
  _BYTE *v899; // r12
  unsigned __int8 *v900; // r15
  __int64 v901; // rbx
  int v902; // r9d
  int v903; // r8d
  int v904; // r11d
  unsigned int v905; // r10d
  int v906; // r11d
  unsigned int v907; // r10d
  int v908; // r11d
  int v909; // r10d
  unsigned int v910; // r11d
  int v911; // r10d
  int v912; // r11d
  int v913; // r10d
  unsigned int v914; // r11d
  int v915; // edx
  int v916; // r11d
  unsigned int v917; // r10d
  int v918; // r11d
  int v919; // r10d
  int v920; // r11d
  int v921; // r10d
  unsigned int v922; // r11d
  int v923; // r10d
  int v924; // r11d
  int v925; // r10d
  unsigned int v926; // r11d
  int v927; // r10d
  int v928; // r11d
  int v929; // r10d
  int v930; // r11d
  int v931; // r10d
  int v932; // r11d
  int v933; // r10d
  int v934; // r11d
  int v935; // r10d
  unsigned __int64 v936; // rcx
  char v937; // al
  int v938; // ebx
  int v939; // edi
  LPCWSTR v940; // rdi
  const WCHAR *v941; // rdx
  __int64 v942; // rax
  const WCHAR *v943; // rdi
  char *v944; // r12
  __int64 v945; // rcx
  unsigned __int64 v946; // rcx
  const CHAR *v947; // rdx
  __int64 v948; // rax
  __int64 (__fastcall *v949)(); // rcx
  HANDLE v950; // rax
  HMODULE *v951; // rdi
  __int64 v952; // rbx
  HMODULE *v953; // rdi
  __int64 v954; // rbx
  int v955; // eax
  void *v956; // r12
  HANDLE v957; // rax
  _OWORD *v958; // rax
  _OWORD *v959; // rbx
  _OWORD *v960; // rcx
  HANDLE v961; // rax
  _QWORD *v962; // rax
  _QWORD *v963; // r12
  unsigned int v964; // r9d
  int v965; // eax
  unsigned int v966; // r9d
  int v967; // r10d
  int v968; // eax
  unsigned int v969; // r9d
  int v970; // r10d
  int v971; // eax
  int v972; // r10d
  unsigned int v973; // edi
  HANDLE v974; // rax
  unsigned int *v975; // rax
  unsigned int *v976; // rdi
  unsigned int v977; // r9d
  void *v978; // r11
  int v979; // r10d
  unsigned int v980; // r9d
  void *v981; // r11
  int v982; // ebx
  unsigned int v983; // edi
  _DWORD *v984; // rdi
  int v985; // r9d
  unsigned int v986; // r10d
  _OWORD *v987; // rcx
  __int64 v988; // rax
  unsigned int v989; // r9d
  void *v990; // r11
  unsigned int v991; // edi
  unsigned int *v992; // r9
  __int64 v993; // r9
  int v994; // r10d
  _DWORD *v995; // r9
  unsigned int v996; // r9d
  unsigned int *v997; // r9
  __int64 v998; // r9
  int v999; // r10d
  _DWORD *v1000; // r9
  __int64 v1001; // rcx
  unsigned int v1002; // edi
  void *v1003; // r11
  _QWORD *v1004; // r12
  int *v1005; // r13
  int v1006; // edi
  unsigned int v1007; // r9d
  unsigned __int64 v1008; // r10
  void *v1009; // r11
  unsigned int v1010; // eax
  unsigned int v1011; // edi
  HANDLE v1012; // rax
  char *v1013; // rax
  char *v1014; // rbx
  unsigned int v1015; // r9d
  void *v1016; // rcx
  HANDLE v1017; // rax
  int v1018; // edi
  _QWORD *v1019; // r13
  int v1020; // edi
  unsigned __int64 v1021; // rbx
  _BYTE *v1022; // rdx
  signed int v1023; // r11d
  unsigned __int8 v1024; // al
  unsigned __int64 v1025; // rcx
  unsigned __int8 *v1026; // r8
  _BYTE *v1027; // r9
  int v1028; // r10d
  unsigned int v1029; // edx
  char v1030; // r10
  int v1031; // r14d
  int v1032; // edi
  int v1033; // ecx
  unsigned int v1034; // r10d
  unsigned int v1035; // ecx
  unsigned int v1036; // edi
  int v1037; // r14d
  char v1038; // si
  unsigned __int64 v1039; // rcx
  int v1040; // edi
  int v1041; // ebx
  _BYTE *v1042; // rax
  unsigned __int8 *v1043; // rdx
  unsigned __int64 v1044; // r14
  int v1045; // r12d
  int v1046; // r13d
  int v1047; // r9d
  int v1048; // r8d
  int v1049; // r10d
  int v1050; // r11d
  int v1051; // r10d
  int v1052; // r11d
  int v1053; // r10d
  unsigned int v1054; // r11d
  int v1055; // r10d
  int v1056; // r11d
  int v1057; // r10d
  int v1058; // r11d
  int v1059; // r10d
  int v1060; // r11d
  unsigned int v1061; // r10d
  unsigned int v1062; // r11d
  int v1063; // r10d
  int v1064; // r11d
  int v1065; // r10d
  int v1066; // r11d
  int v1067; // r10d
  int v1068; // r11d
  int v1069; // r10d
  int v1070; // r11d
  unsigned int v1071; // r10d
  int v1072; // r11d
  unsigned int v1073; // r10d
  int v1074; // r11d
  int v1075; // r10d
  int v1076; // r11d
  int v1077; // r10d
  int v1078; // r11d
  int v1079; // r10d
  int v1080; // r11d
  int v1081; // r10d
  void *v1082; // rdi
  unsigned int v1083; // esi
  HANDLE v1084; // rax
  _DWORD *v1085; // rax
  _DWORD *v1086; // rbx
  HANDLE v1087; // rax
  void *v1088; // rax
  HANDLE v1089; // rax
  _OWORD *v1090; // rax
  HANDLE v1091; // rax
  _QWORD *v1092; // rax
  void *v1093; // rsi
  HANDLE v1094; // rax
  void *v1095; // rsi
  HANDLE v1096; // rax
  void *v1097; // rsi
  HANDLE v1098; // rax
  HANDLE v1099; // rax
  void *v1100; // rbx
  HANDLE v1101; // rax
  void *v1102; // rbx
  HANDLE v1103; // rax
  void *v1104; // rbx
  HANDLE v1105; // rax
  void *v1106; // rbx
  HANDLE v1107; // rax
  HANDLE v1108; // rax
  const void **v1109; // rbx
  unsigned int v1110; // ecx
  int v1111; // edi
  unsigned int *v1112; // r11
  unsigned int v1113; // eax
  unsigned int v1114; // edi
  HANDLE v1115; // rax
  _DWORD *v1116; // rax
  void *v1117; // rsi
  void *v1118; // rcx
  void *v1119; // rcx
  HANDLE v1120; // rax
  int v1121; // eax
  unsigned int v1122; // ecx
  unsigned int v1123; // eax
  unsigned int v1124; // r9d
  unsigned int *v1125; // rcx
  int v1126; // ebx
  unsigned int v1127; // esi
  unsigned int v1128; // ebx
  unsigned int *v1129; // rax
  unsigned int *v1130; // rcx
  unsigned int v1131; // ebx
  unsigned int v1132; // esi
  unsigned int v1133; // r9d
  unsigned int v1134; // ebx
  unsigned int *v1135; // rax
  unsigned int v1136; // r9d
  unsigned int v1137; // r10d
  unsigned int v1138; // r9d
  unsigned int v1139; // r11d
  unsigned int v1140; // eax
  void *v1141; // rbx
  HANDLE v1142; // rax
  _QWORD *v1143; // rbx
  void *v1144; // rsi
  HANDLE v1145; // rax
  void *v1146; // rsi
  HANDLE v1147; // rax
  void *v1148; // rsi
  HANDLE v1149; // rax
  HANDLE v1150; // rax
  void *v1151; // rbx
  HANDLE v1152; // rax
  void *v1153; // rbx
  HANDLE v1154; // rax
  void *v1155; // rbx
  HANDLE v1156; // rax
  void *v1157; // rbx
  HANDLE v1158; // rax
  void *v1159; // rbx
  HANDLE v1160; // rax
  HANDLE v1161; // rax
  HANDLE v1162; // rax
  unsigned int *v1163; // rdi
  unsigned int v1164; // r9d
  int v1165; // r10d
  _DWORD *v1166; // r11
  _DWORD *v1167; // rax
  int v1168; // r9d
  unsigned int v1169; // edi
  HANDLE v1170; // rax
  int *v1171; // rax
  int *v1172; // rbx
  signed int v1173; // eax
  unsigned int v1174; // r9d
  NTSTATUS (__stdcall *v1175)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG); // rax
  int v1176; // eax
  int *v1177; // r11
  int v1178; // edi
  int v1179; // r9d
  SIZE_T v1180; // r10
  unsigned int v1181; // r10d
  int v1182; // r9d
  SIZE_T v1183; // rsi
  int v1184; // r9d
  int v1185; // r9d
  SIZE_T v1186; // r13
  int v1187; // r9d
  int v1188; // r9d
  int v1189; // r10d
  HANDLE v1190; // rax
  _QWORD *v1191; // rax
  _QWORD *v1192; // rbx
  void *v1193; // rdi
  HANDLE v1194; // rax
  size_t v1195; // r12
  void *v1196; // rax
  void *v1197; // rdi
  HANDLE v1198; // rax
  void *v1199; // rax
  void *v1200; // rdi
  HANDLE v1201; // rax
  void *v1202; // rax
  void *v1203; // rsi
  HANDLE v1204; // rax
  void *v1205; // rsi
  HANDLE v1206; // rax
  void *v1207; // rsi
  HANDLE v1208; // rax
  HANDLE v1209; // rax
  _QWORD *v1210; // rbx
  void *v1211; // rsi
  HANDLE v1212; // rax
  void *v1213; // rsi
  HANDLE v1214; // rax
  void *v1215; // rsi
  HANDLE v1216; // rax
  HANDLE v1217; // rax
  int *v1218; // rbx
  unsigned int v1219; // esi
  unsigned __int64 v1220; // r13
  void *v1221; // rdi
  unsigned __int8 v1222; // al
  const WCHAR *v1223; // r9
  _BYTE *v1224; // rbx
  int v1225; // edx
  int v1226; // r10d
  char v1227; // r14
  int v1228; // r8d
  int v1229; // ecx
  unsigned int v1230; // r10d
  unsigned int v1231; // r11d
  unsigned int v1232; // ecx
  unsigned int v1233; // r8d
  int v1234; // r14d
  char v1235; // r15
  int v1236; // eax
  int v1237; // edi
  unsigned int v1238; // r15d
  _BYTE *v1239; // r13
  unsigned __int8 *v1240; // r12
  int v1241; // esi
  char *v1242; // rbx
  int v1243; // r9d
  int v1244; // r8d
  int v1245; // r10d
  unsigned int v1246; // r11d
  int v1247; // r10d
  unsigned int v1248; // r11d
  int v1249; // r10d
  int v1250; // r11d
  unsigned int v1251; // r10d
  int v1252; // r11d
  int v1253; // r10d
  int v1254; // r11d
  unsigned int v1255; // r10d
  int v1256; // r11d
  int v1257; // r10d
  unsigned int v1258; // r11d
  int v1259; // r10d
  int v1260; // r11d
  int v1261; // r10d
  int v1262; // r11d
  int v1263; // r10d
  int v1264; // r11d
  int v1265; // r10d
  int v1266; // r11d
  unsigned int v1267; // r10d
  int v1268; // r11d
  int v1269; // r10d
  int v1270; // r11d
  int v1271; // r10d
  int v1272; // r11d
  int v1273; // r10d
  int v1274; // r11d
  int v1275; // r10d
  int v1276; // r11d
  unsigned __int64 jj; // rcx
  int v1278; // r14d
  HANDLE v1279; // rax
  int v1280; // edi
  unsigned int v1281; // r9d
  __int64 v1282; // r9
  SIZE_T v1283; // r13
  unsigned int v1284; // r9d
  void *v1285; // r11
  void *v1286; // rbx
  void *v1287; // rsi
  unsigned __int64 v1288; // r9
  unsigned __int64 v1289; // r11
  unsigned int *v1290; // r9
  unsigned __int64 v1291; // r11
  int v1292; // eax
  __int64 v1293; // r9
  unsigned int v1294; // r10d
  HANDLE v1295; // rax
  unsigned int v1296; // edi
  unsigned int *v1297; // r11
  unsigned int *v1298; // rax
  void *v1299; // rdi
  HANDLE v1300; // rax
  void *v1301; // rdi
  HANDLE v1302; // rax
  HANDLE v1303; // rax
  HANDLE v1304; // rax
  int v1305; // [rsp+60h] [rbp-A0h]
  int v1306; // [rsp+60h] [rbp-A0h]
  char v1307; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v1308; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v1309; // [rsp+64h] [rbp-9Ch]
  int v1310; // [rsp+68h] [rbp-98h]
  int v1311; // [rsp+68h] [rbp-98h]
  int v1312; // [rsp+68h] [rbp-98h]
  int v1313; // [rsp+68h] [rbp-98h]
  int v1314; // [rsp+68h] [rbp-98h]
  int v1315; // [rsp+68h] [rbp-98h]
  unsigned int v1316; // [rsp+68h] [rbp-98h]
  unsigned int v1317; // [rsp+68h] [rbp-98h]
  int v1318; // [rsp+68h] [rbp-98h]
  int v1319; // [rsp+68h] [rbp-98h]
  int v1320; // [rsp+68h] [rbp-98h]
  int v1321; // [rsp+68h] [rbp-98h]
  int v1322; // [rsp+68h] [rbp-98h]
  unsigned int v1323; // [rsp+68h] [rbp-98h]
  int v1324; // [rsp+68h] [rbp-98h]
  unsigned int kk; // [rsp+6Ch] [rbp-94h]
  unsigned int v1326; // [rsp+6Ch] [rbp-94h]
  int v1327; // [rsp+6Ch] [rbp-94h]
  int v1328; // [rsp+6Ch] [rbp-94h]
  int v1329; // [rsp+6Ch] [rbp-94h]
  int v1330; // [rsp+6Ch] [rbp-94h]
  int v1331; // [rsp+6Ch] [rbp-94h]
  int v1332; // [rsp+6Ch] [rbp-94h]
  int v1333; // [rsp+6Ch] [rbp-94h]
  int v1334; // [rsp+6Ch] [rbp-94h]
  __int64 v1335; // [rsp+70h] [rbp-90h]
  int v1336; // [rsp+70h] [rbp-90h]
  int v1337; // [rsp+70h] [rbp-90h]
  int v1338; // [rsp+70h] [rbp-90h]
  int v1339; // [rsp+70h] [rbp-90h]
  int v1340; // [rsp+78h] [rbp-88h]
  int v1341; // [rsp+78h] [rbp-88h]
  int v1342; // [rsp+78h] [rbp-88h]
  unsigned int v1343; // [rsp+7Ch] [rbp-84h]
  unsigned int v1344; // [rsp+7Ch] [rbp-84h]
  int v1345; // [rsp+7Ch] [rbp-84h]
  int v1346; // [rsp+7Ch] [rbp-84h]
  int v1347; // [rsp+7Ch] [rbp-84h]
  int v1348; // [rsp+7Ch] [rbp-84h]
  int v1349; // [rsp+7Ch] [rbp-84h]
  int v1350; // [rsp+7Ch] [rbp-84h]
  int v1351; // [rsp+7Ch] [rbp-84h]
  unsigned int v1352; // [rsp+7Ch] [rbp-84h]
  int v1353; // [rsp+7Ch] [rbp-84h]
  int v1354; // [rsp+80h] [rbp-80h]
  int v1355; // [rsp+80h] [rbp-80h]
  unsigned __int8 v1356; // [rsp+80h] [rbp-80h]
  int v1357; // [rsp+80h] [rbp-80h]
  void *v1358; // [rsp+88h] [rbp-78h]
  LPVOID v1359; // [rsp+88h] [rbp-78h]
  int v1360; // [rsp+88h] [rbp-78h]
  int v1361; // [rsp+88h] [rbp-78h]
  int v1362; // [rsp+88h] [rbp-78h]
  LPVOID v1363; // [rsp+88h] [rbp-78h]
  unsigned int v1364; // [rsp+90h] [rbp-70h]
  int v1365; // [rsp+90h] [rbp-70h]
  int v1366; // [rsp+90h] [rbp-70h]
  int v1367; // [rsp+90h] [rbp-70h]
  int v1368; // [rsp+90h] [rbp-70h]
  _QWORD *v1369; // [rsp+98h] [rbp-68h]
  LPVOID v1370; // [rsp+98h] [rbp-68h]
  LPVOID v1371; // [rsp+98h] [rbp-68h]
  char *v1372; // [rsp+98h] [rbp-68h]
  char *v1373; // [rsp+98h] [rbp-68h]
  int v1374; // [rsp+98h] [rbp-68h]
  unsigned int v1375; // [rsp+98h] [rbp-68h]
  int v1376; // [rsp+98h] [rbp-68h]
  void *v1377; // [rsp+A0h] [rbp-60h]
  LPVOID v1378; // [rsp+A0h] [rbp-60h]
  LPVOID v1379; // [rsp+A0h] [rbp-60h]
  LPVOID v1380; // [rsp+A0h] [rbp-60h]
  int v1381; // [rsp+A0h] [rbp-60h]
  int v1382; // [rsp+A0h] [rbp-60h]
  int v1383; // [rsp+A0h] [rbp-60h]
  int *v1384; // [rsp+A0h] [rbp-60h]
  _OWORD *v1385; // [rsp+A8h] [rbp-58h]
  _QWORD *v1386; // [rsp+A8h] [rbp-58h]
  int v1387; // [rsp+A8h] [rbp-58h]
  int v1388; // [rsp+A8h] [rbp-58h]
  int v1389; // [rsp+A8h] [rbp-58h]
  unsigned int Size; // [rsp+B0h] [rbp-50h]
  unsigned int Size_4; // [rsp+B4h] [rbp-4Ch] BYREF
  void *Src; // [rsp+B8h] [rbp-48h]
  __int64 v1393; // [rsp+C0h] [rbp-40h]
  const WCHAR *v1394; // [rsp+C8h] [rbp-38h]
  unsigned int v1395; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v1396; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v1397; // [rsp+D8h] [rbp-28h]
  SIZE_T dwBytes; // [rsp+E0h] [rbp-20h] BYREF
  LPVOID v1399; // [rsp+E8h] [rbp-18h]
  size_t v1400; // [rsp+F0h] [rbp-10h] BYREF
  void *v1401; // [rsp+F8h] [rbp-8h]
  LPVOID v1402; // [rsp+100h] [rbp+0h]
  void *v1403; // [rsp+108h] [rbp+8h]
  void *v1404; // [rsp+110h] [rbp+10h]
  unsigned int v1405; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v1406; // [rsp+11Ch] [rbp+1Ch] BYREF
  unsigned int v1407; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v1408; // [rsp+124h] [rbp+24h] BYREF
  unsigned int v1409; // [rsp+128h] [rbp+28h] BYREF
  void *v1410; // [rsp+130h] [rbp+30h]
  void *v1411; // [rsp+138h] [rbp+38h]
  unsigned int v1412; // [rsp+140h] [rbp+40h]
  unsigned int v1413; // [rsp+144h] [rbp+44h] BYREF
  SIZE_T v1414; // [rsp+148h] [rbp+48h]
  _BYTE *v1415; // [rsp+150h] [rbp+50h]
  int v1416; // [rsp+158h] [rbp+58h]
  unsigned int v1417; // [rsp+15Ch] [rbp+5Ch]
  void *v1418; // [rsp+160h] [rbp+60h] BYREF
  SIZE_T v1419; // [rsp+168h] [rbp+68h]
  void *v1420; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1421; // [rsp+178h] [rbp+78h]
  SIZE_T v1422; // [rsp+180h] [rbp+80h]
  unsigned int v1423; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1424; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1425; // [rsp+190h] [rbp+90h] BYREF
  LPVOID v1426; // [rsp+198h] [rbp+98h]
  int v1427; // [rsp+1A0h] [rbp+A0h]
  unsigned int v1428; // [rsp+1A4h] [rbp+A4h] BYREF
  void *v1429; // [rsp+1A8h] [rbp+A8h]
  _QWORD *v1430; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1431; // [rsp+1B8h] [rbp+B8h] BYREF
  void *v1432; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v1433; // [rsp+1C8h] [rbp+C8h] BYREF
  LPVOID v1434[2]; // [rsp+1D0h] [rbp+D0h]
  signed int v1435; // [rsp+1E0h] [rbp+E0h]
  int v1436; // [rsp+1E4h] [rbp+E4h]
  __int128 v1437; // [rsp+1E8h] [rbp+E8h]
  unsigned int *v1438; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int *ii; // [rsp+200h] [rbp+100h] BYREF
  int *v1440; // [rsp+208h] [rbp+108h] BYREF
  unsigned int *v1441; // [rsp+210h] [rbp+110h] BYREF
  unsigned int *v1442; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1443; // [rsp+220h] [rbp+120h]
  unsigned int v1444; // [rsp+224h] [rbp+124h]
  unsigned int v1445; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1446; // [rsp+22Ch] [rbp+12Ch]
  unsigned int v1447; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1448; // [rsp+234h] [rbp+134h]
  unsigned int v1449; // [rsp+238h] [rbp+138h]
  unsigned int v1450; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1451; // [rsp+240h] [rbp+140h]
  char v1452; // [rsp+248h] [rbp+148h]
  unsigned int v1453; // [rsp+250h] [rbp+150h] BYREF
  int *v1454; // [rsp+258h] [rbp+158h]
  int *v1455; // [rsp+260h] [rbp+160h]
  __int64 v1456; // [rsp+268h] [rbp+168h] BYREF
  __int64 v1457; // [rsp+270h] [rbp+170h] BYREF
  _QWORD *v1458; // [rsp+278h] [rbp+178h]
  unsigned int v1459; // [rsp+280h] [rbp+180h]
  unsigned int v1460; // [rsp+284h] [rbp+184h]
  int v1461; // [rsp+288h] [rbp+188h]
  int v1462; // [rsp+28Ch] [rbp+18Ch]
  unsigned int v1463; // [rsp+290h] [rbp+190h] BYREF
  unsigned int v1464; // [rsp+294h] [rbp+194h] BYREF
  unsigned int v1465; // [rsp+298h] [rbp+198h]
  unsigned int v1466; // [rsp+29Ch] [rbp+19Ch]
  unsigned int v1467; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v1468; // [rsp+2A4h] [rbp+1A4h]
  unsigned int v1469; // [rsp+2A8h] [rbp+1A8h] BYREF
  unsigned int v1470; // [rsp+2ACh] [rbp+1ACh] BYREF
  int v1471; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int v1472; // [rsp+2B4h] [rbp+1B4h]
  unsigned int v1473; // [rsp+2B8h] [rbp+1B8h]
  unsigned int v1474; // [rsp+2BCh] [rbp+1BCh]
  unsigned int v1475; // [rsp+2C0h] [rbp+1C0h]
  unsigned int v1476; // [rsp+2C4h] [rbp+1C4h]
  unsigned int v1477; // [rsp+2C8h] [rbp+1C8h] BYREF
  unsigned int v1478; // [rsp+2CCh] [rbp+1CCh]
  wchar_t *v1479; // [rsp+2D0h] [rbp+1D0h] BYREF
  wchar_t *v1480; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int128 v1481; // [rsp+2E0h] [rbp+1E0h]
  __int128 v1482; // [rsp+2F0h] [rbp+1F0h]
  __int64 v1483; // [rsp+300h] [rbp+200h] BYREF
  WCHAR *v1484; // [rsp+308h] [rbp+208h] BYREF
  LPCWSTR v1485; // [rsp+310h] [rbp+210h]
  void *v1486; // [rsp+318h] [rbp+218h] BYREF
  void *v1487; // [rsp+320h] [rbp+220h] BYREF
  LPVOID v1488; // [rsp+328h] [rbp+228h]
  void *v1489; // [rsp+330h] [rbp+230h] BYREF
  void *v1490; // [rsp+338h] [rbp+238h] BYREF
  _DWORD *v1491; // [rsp+340h] [rbp+240h] BYREF
  LPVOID v1492; // [rsp+348h] [rbp+248h]
  LPCWSTR lpModuleName; // [rsp+350h] [rbp+250h]
  __int64 v1494; // [rsp+358h] [rbp+258h] BYREF
  LPCWSTR v1495; // [rsp+360h] [rbp+260h]
  unsigned __int64 v1496; // [rsp+368h] [rbp+268h] BYREF
  void *v1497; // [rsp+370h] [rbp+270h] BYREF
  LPCWSTR v1498; // [rsp+378h] [rbp+278h]
  int *v1499; // [rsp+380h] [rbp+280h] BYREF
  unsigned int *v1500; // [rsp+388h] [rbp+288h] BYREF
  _QWORD *v1501; // [rsp+390h] [rbp+290h]
  LPVOID v1502[2]; // [rsp+398h] [rbp+298h]
  unsigned int v1503; // [rsp+3A8h] [rbp+2A8h] BYREF
  unsigned int v1504; // [rsp+3ACh] [rbp+2ACh] BYREF
  unsigned int v1505; // [rsp+3B0h] [rbp+2B0h]
  int v1506; // [rsp+3B4h] [rbp+2B4h]
  int v1507; // [rsp+3B8h] [rbp+2B8h]
  int v1508; // [rsp+3BCh] [rbp+2BCh]
  int v1509; // [rsp+3C0h] [rbp+2C0h]
  unsigned int v1510; // [rsp+3C4h] [rbp+2C4h]
  int v1511; // [rsp+3C8h] [rbp+2C8h]
  int v1512; // [rsp+3CCh] [rbp+2CCh]
  unsigned int v1513; // [rsp+3D0h] [rbp+2D0h]
  unsigned int v1514; // [rsp+3D4h] [rbp+2D4h] BYREF
  unsigned int v1515; // [rsp+3D8h] [rbp+2D8h] BYREF
  unsigned int v1516; // [rsp+3DCh] [rbp+2DCh] BYREF
  unsigned int v1517; // [rsp+3E0h] [rbp+2E0h] BYREF
  int v1518; // [rsp+3E8h] [rbp+2E8h]
  unsigned int v1519; // [rsp+3F0h] [rbp+2F0h] BYREF
  unsigned int v1520; // [rsp+3F4h] [rbp+2F4h] BYREF
  unsigned int v1521; // [rsp+3F8h] [rbp+2F8h]
  unsigned int v1522; // [rsp+3FCh] [rbp+2FCh] BYREF
  unsigned int v1523; // [rsp+400h] [rbp+300h] BYREF
  unsigned int v1524; // [rsp+404h] [rbp+304h]
  unsigned int v1525; // [rsp+408h] [rbp+308h] BYREF
  unsigned int v1526; // [rsp+40Ch] [rbp+30Ch] BYREF
  unsigned int v1527; // [rsp+410h] [rbp+310h]
  unsigned int v1528; // [rsp+414h] [rbp+314h] BYREF
  unsigned int v1529; // [rsp+418h] [rbp+318h]
  unsigned int v1530; // [rsp+41Ch] [rbp+31Ch]
  unsigned int v1531; // [rsp+420h] [rbp+320h] BYREF
  _DWORD v1532[3]; // [rsp+424h] [rbp+324h] BYREF
  unsigned int v1533; // [rsp+430h] [rbp+330h] BYREF
  unsigned int v1534; // [rsp+434h] [rbp+334h] BYREF
  unsigned int v1535; // [rsp+438h] [rbp+338h] BYREF
  unsigned int v1536; // [rsp+43Ch] [rbp+33Ch] BYREF
  wchar_t *v1537; // [rsp+440h] [rbp+340h] BYREF
  wchar_t *String1; // [rsp+448h] [rbp+348h] BYREF
  unsigned int *v1539; // [rsp+450h] [rbp+350h] BYREF
  LPVOID lpMem; // [rsp+458h] [rbp+358h]
  signed int *v1541; // [rsp+460h] [rbp+360h] BYREF
  _QWORD *v1542; // [rsp+468h] [rbp+368h] BYREF
  unsigned int v1543; // [rsp+470h] [rbp+370h] BYREF
  unsigned int v1544; // [rsp+474h] [rbp+374h] BYREF
  _DWORD *v1545; // [rsp+478h] [rbp+378h] BYREF
  unsigned int *v1546; // [rsp+480h] [rbp+380h] BYREF
  unsigned int *v1547; // [rsp+488h] [rbp+388h] BYREF
  LPVOID v1548; // [rsp+490h] [rbp+390h]
  _DWORD *v1549; // [rsp+498h] [rbp+398h] BYREF
  _DWORD *v1550; // [rsp+4A0h] [rbp+3A0h] BYREF
  unsigned int v1551; // [rsp+4A8h] [rbp+3A8h] BYREF
  int v1552; // [rsp+4B0h] [rbp+3B0h]
  unsigned int v1553; // [rsp+4B8h] [rbp+3B8h] BYREF
  unsigned int v1554; // [rsp+4BCh] [rbp+3BCh] BYREF
  unsigned int v1555; // [rsp+4C0h] [rbp+3C0h] BYREF
  unsigned int v1556; // [rsp+4C4h] [rbp+3C4h] BYREF
  unsigned int v1557; // [rsp+4C8h] [rbp+3C8h] BYREF
  unsigned int v1558; // [rsp+4CCh] [rbp+3CCh] BYREF
  int v1559; // [rsp+4D0h] [rbp+3D0h]
  unsigned int v1560; // [rsp+4D8h] [rbp+3D8h] BYREF
  int v1561; // [rsp+4E0h] [rbp+3E0h]
  unsigned int v1562; // [rsp+4E8h] [rbp+3E8h] BYREF
  unsigned int v1563; // [rsp+4ECh] [rbp+3ECh] BYREF
  unsigned int v1564; // [rsp+4F0h] [rbp+3F0h] BYREF
  unsigned __int64 v1565; // [rsp+4F8h] [rbp+3F8h]
  unsigned __int64 v1566; // [rsp+500h] [rbp+400h]
  unsigned __int64 v1567; // [rsp+508h] [rbp+408h]
  __int64 v1568; // [rsp+510h] [rbp+410h] BYREF
  __int64 v1569; // [rsp+518h] [rbp+418h]
  unsigned __int64 v1570; // [rsp+520h] [rbp+420h]
  unsigned __int64 v1571; // [rsp+528h] [rbp+428h]
  __int64 v1572; // [rsp+530h] [rbp+430h] BYREF
  unsigned __int64 v1573; // [rsp+538h] [rbp+438h]
  __int128 v1574; // [rsp+540h] [rbp+440h]
  __int64 v1575; // [rsp+550h] [rbp+450h]
  __int64 v1576; // [rsp+558h] [rbp+458h]
  _OWORD *v1577; // [rsp+560h] [rbp+460h]
  _QWORD *v1578; // [rsp+568h] [rbp+468h]
  unsigned __int64 v1579; // [rsp+570h] [rbp+470h]
  unsigned __int64 v1580; // [rsp+578h] [rbp+478h]
  unsigned int *v1581; // [rsp+580h] [rbp+480h]
  HMODULE phModule; // [rsp+588h] [rbp+488h] BYREF
  unsigned __int64 v1583; // [rsp+590h] [rbp+490h] BYREF
  signed int *v1584; // [rsp+598h] [rbp+498h]
  int *v1585; // [rsp+5A0h] [rbp+4A0h]
  _DWORD *v1586; // [rsp+5A8h] [rbp+4A8h]
  void *v1587; // [rsp+5B0h] [rbp+4B0h]
  unsigned int *v1588; // [rsp+5B8h] [rbp+4B8h]
  int *v1589; // [rsp+5C0h] [rbp+4C0h]
  __int64 v1590; // [rsp+5C8h] [rbp+4C8h]
  __int64 v1591; // [rsp+5D0h] [rbp+4D0h] BYREF
  __int64 v1592; // [rsp+5D8h] [rbp+4D8h] BYREF
  __int64 v1593; // [rsp+5E0h] [rbp+4E0h] BYREF
  __int64 v1594; // [rsp+5E8h] [rbp+4E8h] BYREF
  int v1595; // [rsp+5F0h] [rbp+4F0h]
  unsigned int v1596; // [rsp+5F4h] [rbp+4F4h]
  unsigned int v1597; // [rsp+5F8h] [rbp+4F8h]
  __int64 v1598; // [rsp+600h] [rbp+500h] BYREF
  __int64 v1599; // [rsp+608h] [rbp+508h] BYREF
  _OWORD *v1600; // [rsp+610h] [rbp+510h]
  _QWORD *v1601; // [rsp+618h] [rbp+518h]
  unsigned __int64 v1602; // [rsp+620h] [rbp+520h]
  unsigned __int64 v1603; // [rsp+628h] [rbp+528h]
  unsigned __int64 v1604; // [rsp+630h] [rbp+530h]
  unsigned int *v1605; // [rsp+638h] [rbp+538h]
  unsigned int *v1606; // [rsp+640h] [rbp+540h]
  HMODULE hModule; // [rsp+648h] [rbp+548h] BYREF
  unsigned __int64 v1608; // [rsp+650h] [rbp+550h] BYREF
  unsigned __int64 v1609; // [rsp+658h] [rbp+558h] BYREF
  unsigned __int64 v1610; // [rsp+660h] [rbp+560h] BYREF
  _DWORD *v1611; // [rsp+668h] [rbp+568h]
  unsigned int v1612; // [rsp+670h] [rbp+570h]
  unsigned int v1613; // [rsp+674h] [rbp+574h]
  int v1614; // [rsp+678h] [rbp+578h]
  __int128 v1615; // [rsp+680h] [rbp+580h] BYREF
  _QWORD v1616[2]; // [rsp+690h] [rbp+590h] BYREF
  unsigned int v1617; // [rsp+6A0h] [rbp+5A0h]
  unsigned int v1618; // [rsp+6A4h] [rbp+5A4h]
  int v1619; // [rsp+6A8h] [rbp+5A8h]
  _QWORD v1620[2]; // [rsp+6B0h] [rbp+5B0h] BYREF
  unsigned int v1621; // [rsp+6C0h] [rbp+5C0h]
  unsigned int v1622; // [rsp+6C4h] [rbp+5C4h]
  int v1623; // [rsp+6C8h] [rbp+5C8h]
  void *v1624; // [rsp+6D0h] [rbp+5D0h]
  __int64 v1625; // [rsp+6D8h] [rbp+5D8h]
  unsigned __int64 v1626; // [rsp+6E0h] [rbp+5E0h]
  char *v1627; // [rsp+6E8h] [rbp+5E8h]
  __int64 *v1628; // [rsp+6F0h] [rbp+5F0h]
  __int64 v1629; // [rsp+6F8h] [rbp+5F8h]
  void *v1630; // [rsp+700h] [rbp+600h]
  __int64 v1631; // [rsp+708h] [rbp+608h]
  _DWORD *v1632; // [rsp+710h] [rbp+610h]
  unsigned int *v1633; // [rsp+718h] [rbp+618h]
  __int64 v1634; // [rsp+720h] [rbp+620h]
  _QWORD *v1635; // [rsp+728h] [rbp+628h]
  __int64 v1636; // [rsp+730h] [rbp+630h]
  __int64 v1637; // [rsp+738h] [rbp+638h]
  SIZE_T v1638; // [rsp+740h] [rbp+640h]
  _DWORD *v1639; // [rsp+750h] [rbp+650h] BYREF
  _OWORD *v1640; // [rsp+760h] [rbp+660h] BYREF
  _QWORD *v1641; // [rsp+770h] [rbp+670h] BYREF
  unsigned __int64 *v1642; // [rsp+780h] [rbp+680h] BYREF
  void *v1643; // [rsp+790h] [rbp+690h] BYREF
  int *v1644; // [rsp+7A0h] [rbp+6A0h] BYREF
  _DWORD *v1645; // [rsp+7B0h] [rbp+6B0h] BYREF
  int *v1646; // [rsp+7C0h] [rbp+6C0h] BYREF
  _OWORD *v1647; // [rsp+7D0h] [rbp+6D0h] BYREF
  _QWORD *v1648; // [rsp+7E0h] [rbp+6E0h] BYREF
  _QWORD v1649[18]; // [rsp+7F0h] [rbp+6F0h] BYREF
  _QWORD v1650[14]; // [rsp+880h] [rbp+780h] BYREF
  _QWORD v1651[14]; // [rsp+8F0h] [rbp+7F0h] BYREF
  _QWORD v1652[14]; // [rsp+960h] [rbp+860h] BYREF
  _QWORD v1653[14]; // [rsp+9D0h] [rbp+8D0h] BYREF
  _QWORD v1654[14]; // [rsp+A40h] [rbp+940h] BYREF
  _QWORD v1655[14]; // [rsp+AB0h] [rbp+9B0h] BYREF
  _QWORD v1656[14]; // [rsp+B20h] [rbp+A20h] BYREF
  _QWORD v1657[14]; // [rsp+B90h] [rbp+A90h] BYREF
  _QWORD v1658[14]; // [rsp+C00h] [rbp+B00h] BYREF
  __int64 v1659; // [rsp+C70h] [rbp+B70h]
  unsigned __int64 v1660; // [rsp+C78h] [rbp+B78h]
  __int64 v1661; // [rsp+C80h] [rbp+B80h]
  unsigned __int64 v1662; // [rsp+C88h] [rbp+B88h]
  __int128 v1663; // [rsp+C90h] [rbp+B90h] BYREF
  __int128 v1664; // [rsp+CA0h] [rbp+BA0h] BYREF
  __int128 v1665; // [rsp+CB0h] [rbp+BB0h] BYREF
  __int128 v1666; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int64 v1667; // [rsp+CD0h] [rbp+BD0h] BYREF
  unsigned int v1668; // [rsp+CD8h] [rbp+BD8h]
  int v1669; // [rsp+CDCh] [rbp+BDCh]
  __int128 v1670; // [rsp+CE0h] [rbp+BE0h] BYREF
  __int128 v1671; // [rsp+CF0h] [rbp+BF0h]
  __int64 v1672; // [rsp+D00h] [rbp+C00h]
  int v1673; // [rsp+D08h] [rbp+C08h]
  __int128 v1674; // [rsp+D10h] [rbp+C10h] BYREF
  __int128 v1675; // [rsp+D20h] [rbp+C20h]
  __int64 v1676; // [rsp+D30h] [rbp+C30h]
  int v1677; // [rsp+D38h] [rbp+C38h]
  __int128 v1678; // [rsp+D40h] [rbp+C40h] BYREF
  __int128 v1679; // [rsp+D50h] [rbp+C50h]
  __int64 v1680; // [rsp+D60h] [rbp+C60h]
  int v1681; // [rsp+D68h] [rbp+C68h]
  __int128 v1682; // [rsp+D70h] [rbp+C70h] BYREF
  __int128 v1683; // [rsp+D80h] [rbp+C80h]
  __int64 v1684; // [rsp+D90h] [rbp+C90h]
  int v1685; // [rsp+D98h] [rbp+C98h]
  __int128 v1686; // [rsp+DA0h] [rbp+CA0h] BYREF
  __int128 v1687; // [rsp+DB0h] [rbp+CB0h]
  __int64 v1688; // [rsp+DC0h] [rbp+CC0h]
  int v1689; // [rsp+DC8h] [rbp+CC8h]
  __int128 v1690; // [rsp+DD0h] [rbp+CD0h] BYREF
  __int128 v1691; // [rsp+DE0h] [rbp+CE0h] BYREF
  __int64 v1692; // [rsp+DF0h] [rbp+CF0h]
  __int128 v1693; // [rsp+DF8h] [rbp+CF8h] BYREF
  __int128 v1694; // [rsp+E08h] [rbp+D08h] BYREF
  __int64 v1695; // [rsp+E18h] [rbp+D18h]
  _DWORD v1696[24]; // [rsp+E20h] [rbp+D20h] BYREF
  _DWORD v1697[24]; // [rsp+E80h] [rbp+D80h] BYREF
  _DWORD v1698[24]; // [rsp+EE0h] [rbp+DE0h] BYREF
  char v1699[12]; // [rsp+F40h] [rbp+E40h] BYREF
  unsigned int v1700; // [rsp+F4Ch] [rbp+E4Ch]
  _DWORD v1701[56]; // [rsp+F60h] [rbp+E60h] BYREF
  int v1702; // [rsp+1040h] [rbp+F40h] BYREF
  __int128 v1703; // [rsp+1048h] [rbp+F48h]
  __int128 v1704; // [rsp+1058h] [rbp+F58h]
  __int128 v1705; // [rsp+1068h] [rbp+F68h]
  __int64 v1706; // [rsp+1078h] [rbp+F78h]
  _QWORD v1707[6]; // [rsp+1080h] [rbp+F80h] BYREF
  _QWORD v1708[20]; // [rsp+10B0h] [rbp+FB0h] BYREF
  _WORD v1709[8]; // [rsp+1150h] [rbp+1050h] BYREF
  _BYTE v1710[176]; // [rsp+1160h] [rbp+1060h] BYREF
  WCHAR Filename[264]; // [rsp+1210h] [rbp+1110h] BYREF

  v1 = (__int64)a1;
  v1458 = a1;
  v1635 = a1;
  sub_180038B58(a1);
  *(_QWORD *)v1 = off_18014B218;
  *(_QWORD *)(v1 + 8) = off_18014B2A0;
  *(_QWORD *)(v1 + 16) = off_180148268;
  *(_QWORD *)(v1 + 40) = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v1 + 56), 0, 0);
  *(_WORD *)(v1 + 96) = 0;
  *(_BYTE *)(v1 + 98) = 0;
  *(_BYTE *)(v1 + 99) = 1;
  *(_BYTE *)(v1 + 100) = 0;
  *(_QWORD *)(v1 + 104) = 0LL;
  *(_QWORD *)(v1 + 112) = 0LL;
  *(_QWORD *)(v1 + 120) = 0LL;
  *(_QWORD *)(v1 + 128) = 0LL;
  *(_QWORD *)(v1 + 136) = 0LL;
  *(_OWORD *)(v1 + 168) = 0LL;
  *(_QWORD *)(v1 + 184) = 0LL;
  v1611 = (_DWORD *)(v1 + 192);
  *(_DWORD *)(v1 + 192) = 0;
  *(_QWORD *)(v1 + 200) = 0LL;
  *(_WORD *)(v1 + 208) = 0;
  *(_BYTE *)(v1 + 210) = 0;
  *(_DWORD *)(v1 + 212) = 0;
  *(_QWORD *)(v1 + 216) = 0LL;
  *(_DWORD *)(v1 + 224) = 0;
  *(_QWORD *)(v1 + 232) = 0LL;
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_WORD *)(v1 + 264) = 0;
  `eh vector constructor iterator'((void *)(v1 + 272), 0x20uLL, 6uLL, sub_180067BC0, sub_180067CA0);
  v1410 = (void *)(v1 + 464);
  v1452 = v1307;
  v1532[1] = 0;
  v1532[2] = 0;
  *(_DWORD *)(v1 + 464) = 0;
  *(_QWORD *)(v1 + 472) = 0LL;
  *(_QWORD *)(v1 + 480) = 0LL;
  v1501 = sub_180008EAC(0x38uLL);
  *v1501 = v1501;
  v1501[1] = v1501;
  *(_QWORD *)(v1 + 472) = v1501;
  v1575 = *(_QWORD *)(v1 + 472);
  *(_QWORD *)(v1 + 488) = 0LL;
  *(_QWORD *)(v1 + 496) = 0LL;
  *(_QWORD *)(v1 + 504) = 0LL;
  v1636 = 0x1FFFFFFFFFFFFFFFLL;
  v1637 = 0x7FFFFFFFFFFFFFFFLL;
  sub_180038BCC((_QWORD *)(v1 + 488), 0x10uLL);
  v1576 = v1 + 488;
  v2 = *(_QWORD **)(v1 + 488);
  v3 = 16LL;
  do
  {
    *v2++ = v1575;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)(v1 + 496) = v2;
  v1576 = 0LL;
  *(_QWORD *)(v1 + 512) = 7LL;
  *(_QWORD *)(v1 + 520) = 8LL;
  *(_DWORD *)(v1 + 464) = 1065353216;
  *(_QWORD *)(v1 + 528) = 0LL;
  *(_QWORD *)(v1 + 536) = 0LL;
  *(_QWORD *)(v1 + 544) = 0LL;
  *(_BYTE *)(v1 + 552) = 0;
  *(_QWORD *)(v1 + 144) = 0LL;
  *(_QWORD *)(v1 + 152) = 0LL;
  *(_QWORD *)(v1 + 160) = 0LL;
  v1550 = 0LL;
  if ( v1 == -192 )
    goto LABEL_114;
  v1468 = 0;
  v1467 = 0;
  v1430 = 0LL;
  v1416 = 0;
  while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
    ;
  v1427 = -1;
  v4 = dword_18019E4C8;
  if ( dword_18019E4C8 )
    goto LABEL_49;
  v1310 = 0;
  lpModuleName = 0LL;
  v1570 = 0LL;
  v5 = (char *)sub_180055F40(824LL);
  v1403 = v5;
  if ( v5 )
  {
    v6 = 0;
    v7 = -1;
    v8 = 0;
    v9 = 0;
    v10 = v5 + 7;
    v11 = (unsigned __int8 *)&unk_18015F1E2;
    v12 = 103LL;
    do
    {
      v13 = v11[1] | ((*v11 | ((*(v11 - 1) | (*(v11 - 2) << 8)) << 8)) << 8);
      v14 = v11[5] | ((v11[4] | ((v11[3] | (v11[2] << 8)) << 8)) << 8);
      v15 = v13 ^ v9;
      v11 += 8;
      v16 = v14 ^ v8 ^ v15 ^ 0xAC987321;
      v17 = (4991 * __ROL4__(v16 + 1419157410, 5) + __ROL4__(v16, 10)) ^ v15;
      v18 = (43881 * __ROR4__(v17 + 133239679, 9) - __ROL4__(v17, 2)) ^ v16;
      v19 = (24670 * v18 - (v18 >> 13) - 123127970) ^ v17;
      v20 = (2033 * __ROL4__(v19 ^ 0xAB69, 6) - __ROL4__(v19, 2)) ^ v18;
      v21 = (133239679 - (v20 ^ 0xAB69605E)) ^ v19;
      v22 = (43881 * (v21 ^ 0x137F)) ^ __ROR4__(v21, 6) ^ v20;
      v23 = (24670 * __ROR4__(v22 + 133239679, 15) + __ROL4__(v22, 2)) ^ v21;
      v24 = (2033 * __ROR4__(v23 + 1419157410, 14) - __ROL4__(v23, 8)) ^ v22;
      v25 = (4991 * __ROR4__(v24 ^ 0xAB69605E, 12)) ^ __ROR4__(v24, 10) ^ v23;
      v26 = v24 ^ (v25 >> 10) ^ (43881 * (v25 ^ 0x7F1));
      v27 = (2033 * (__ROR4__(~v26, 5) + 24670)) ^ v25;
      v28 = v26 ^ (v27 - 2033) ^ 0xAB69605E;
      v29 = ((v28 >> 2) + 4991 * __ROL4__(v26 ^ (v27 - 2033) ^ 0xAB6967AF, 2)) ^ v27;
      v30 = (43881 * __ROR4__(v29 - 133239679, 6) + __ROL4__(v29, 7)) ^ v28;
      v31 = (24670 * (v30 ^ 0x137F) + __ROR4__(v30, 9)) ^ v29;
      v32 = (2033 * __ROL4__(v31 ^ 0xAB69, 5) + __ROL4__(v31, 7)) ^ v30;
      v33 = v31 ^ v32 ^ 0xAC987321;
      v34 = (4991 * __ROR4__(v33, 3) - 219010071) ^ v32;
      v35 = (24670 * __ROR4__(v34 - 133239679, 1) - __ROR4__(v34, 6)) ^ v33;
      v36 = (2033 * __ROL4__(v35 - 1419157410, 3) + __ROL4__(v35, 14)) ^ v34;
      v37 = (4991 * __ROL4__(v36 - 1419157410, 15) - __ROR4__(v36, 14)) ^ v35;
      v38 = (v37 >> 3) ^ (43881 * (v37 ^ 0x605E)) ^ v36;
      v39 = v6 ^ (24670 * __ROL4__(v38 ^ 0x7F1137F, 4)) ^ __ROL4__(v38, 2) ^ v37;
      v40 = v7 ^ v38;
      *(v10 - 4) = v39;
      v41 = __ROR4__(v39, 8);
      *v10 = v40;
      v42 = __ROR4__(v40, 8);
      *(v10 - 5) = v41;
      v43 = __ROR4__(v41, 8);
      *(v10 - 1) = v42;
      v44 = __ROR4__(v42, 8);
      *(v10 - 6) = v43;
      v45 = __ROR4__(v43, 8);
      *(v10 - 2) = v44;
      v46 = __ROR4__(v44, 8);
      *(v10 - 7) = v45;
      *(v10 - 3) = v46;
      v9 = __ROR4__(v45, 8);
      v8 = __ROR4__(v46, 8);
      v6 = v13;
      v7 = v14;
      v10 += 8;
      --v12;
    }
    while ( v12 );
    v47 = 0;
    v48 = 0LL;
    v49 = 0;
    v50 = v1403;
    v51 = 0;
    do
      v47 ^= *((_BYTE *)v1403 + v48++);
    while ( v48 < 0x338 );
    if ( v47 == 64LL )
    {
      lpModuleName = (LPCWSTR)v1403;
      v50 = 0LL;
      v1570 = 824LL;
      v52 = 0;
    }
    else
    {
      v52 = -1073425151;
    }
    if ( v50 )
      sub_180033A70(v50);
    if ( v52 >= 0 )
    {
      v53 = lpModuleName;
      HIBYTE(lpModuleName[v1570 / 2 - 1]) = 0;
      memset(&unk_18019EA60, 0, 0x60uLL);
      if ( !*(_BYTE *)v53 )
        goto LABEL_40;
      while ( 1 )
      {
        v54 = v53;
        v55 = -1LL;
        v49 = 0;
        do
          ++v55;
        while ( v53[v55] );
        v56 = &v53[v55];
        v57 = (char *)&unk_18019EA60 + 24 * v51;
        if ( !GetModuleHandleExW(0, v54, (HMODULE *)v57) )
          break;
        if ( **(_WORD **)v57 == 23117
          && (v58 = *(int *)(*(_QWORD *)v57 + 60LL), (unsigned int)v58 < 0x10000000)
          && (v59 = *(_QWORD *)v57 + v58, v59 >= *(_QWORD *)v57)
          && *(_DWORD *)v59 == 17744 )
        {
          if ( ((*(_WORD *)(v59 + 24) - 267) & 0xFEFF) != 0 )
          {
            v49 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v57 + 12) = *(_QWORD *)(v59 + 136);
            *((_DWORD *)v57 + 2) = *(_DWORD *)(v59 + 80);
          }
        }
        else
        {
          v49 = -1073741701;
        }
        v60 = *(_DWORD *)(v56 + 1);
        v53 = v56 + 3;
        for ( i = 0; i < v60; ++i )
        {
          v62 = (const CHAR *)v53;
          v63 = -1LL;
          do
            ++v63;
          while ( *((_BYTE *)v53 + v63) );
          v53 = (LPCWSTR)((char *)v53 + v63 + 1);
          if ( v49 >= 0 )
          {
            ProcAddress = GetProcAddress(*(HMODULE *)v57, v62);
            if ( !ProcAddress )
              goto LABEL_40;
            off_18019C000[v1310] = ProcAddress;
          }
          ++v1310;
        }
        ++v51;
        if ( !*(_BYTE *)v53 )
          goto LABEL_40;
      }
    }
  }
  v49 = -1073741702;
LABEL_40:
  if ( lpModuleName )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)lpModuleName);
  }
  if ( v49 >= 0 )
  {
    v4 = dword_18019E4C8;
LABEL_49:
    dword_18019E4C8 = v4 + 1;
    goto LABEL_50;
  }
  v66 = (HMODULE *)&unk_18019EA60;
  v67 = 4LL;
  do
  {
    if ( *v66 )
      FreeLibrary(*v66);
    v66 += 3;
    --v67;
  }
  while ( v67 );
  memset(&unk_18019EA60, 0, 0x60uLL);
  memcpy(off_18019C000, off_18014B510, 0x170uLL);
LABEL_50:
  _InterlockedExchange(&dword_18019EB40, 0);
  String1 = 0LL;
  v1537 = 0LL;
  v68 = 0;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_98;
  v70 = off_18019C110[0]();
  if ( !v70 )
  {
LABEL_52:
    LastError = GetLastError();
    v71 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v71 = LastError < 0;
    }
    if ( !v71 )
      LastError = -2147467259;
    goto LABEL_99;
  }
  v1479 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  while ( 1 )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_18019C130[0])(
           v70,
           2LL,
           v73,
           v72,
           &v1469) )
    {
      String1 = v73;
      goto LABEL_69;
    }
    v74 = GetLastError();
    if ( v74 != 122 )
      break;
    if ( v73 )
      goto LABEL_63;
    v73 = (wchar_t *)sub_180055F40(v1469);
    sub_1800685D0(&v1479);
    if ( !v73 )
    {
      LastError = -2147024882;
LABEL_69:
      v1479 = 0LL;
      goto LABEL_70;
    }
    v1479 = v73;
    v72 = v1469;
  }
  if ( !v74 )
  {
LABEL_63:
    LastError = -2147467259;
    goto LABEL_70;
  }
  if ( v74 > 0 )
    LastError = (unsigned __int16)v74 | 0x80070000;
  else
    LastError = v74;
LABEL_70:
  sub_1800685D0(&v1479);
  if ( LastError >= 0 )
  {
    CurrentThreadId = GetCurrentThreadId();
    v76 = ((__int64 (__fastcall *)(_QWORD))off_18019C128[0])(CurrentThreadId);
    if ( !v76 )
    {
      LastError = GetLastError();
      v77 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v77 = LastError < 0;
      }
      if ( !v77 )
        LastError = -2147467259;
      goto LABEL_99;
    }
    v1480 = 0LL;
    LastError = 0;
    v78 = 0LL;
    v79 = 0LL;
    while ( 1 )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_18019C130[0])(
             v76,
             2LL,
             v79,
             v78,
             &v1470) )
      {
        v1537 = v79;
        goto LABEL_89;
      }
      v80 = GetLastError();
      if ( v80 != 122 )
        break;
      if ( v79 )
        goto LABEL_83;
      v79 = (wchar_t *)sub_180055F40(v1470);
      sub_1800685D0(&v1480);
      if ( !v79 )
      {
        LastError = -2147024882;
LABEL_89:
        v1480 = 0LL;
        goto LABEL_90;
      }
      v1480 = v79;
      v78 = v1470;
    }
    if ( !v80 )
    {
LABEL_83:
      LastError = -2147467259;
      goto LABEL_90;
    }
    LastError = v80 > 0 ? (unsigned __int16)v80 | 0x80070000 : v80;
LABEL_90:
    sub_1800685D0(&v1480);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp(String1, L"WinSta0") && v1537 && !wcscmp(v1537, L"Default") )
      {
        v1471 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1471) )
          goto LABEL_52;
        if ( (v1471 & 0xF) == 0 )
          v68 = 1;
      }
LABEL_98:
      v1416 = v68;
    }
  }
LABEL_99:
  sub_1800685D0(&v1537);
  sub_1800685D0(&String1);
  v82 = v1416;
  if ( LastError < 0 )
    v82 = 0;
  v1416 = v82;
  v83 = LocalAlloc(0x40u, 4uLL);
  v1411 = v83;
  sub_180067CF8(&v1430);
  if ( v83 )
  {
    v1430 = v83;
    v90 = 0LL;
    v91 = 0LL;
    Src = 0LL;
    v1461 = 0;
    *(_OWORD *)v1434 = 0LL;
    v1435 = 0;
    v1577 = &unk_18019D910;
    v92 = GetProcessHeap();
    v93 = HeapAlloc(v92, 8u, 0xA0uLL);
    v84 = -1073741801;
    if ( !v93 )
      goto LABEL_254;
    v94 = v1577;
    *v93 = *v1577;
    v93[1] = v94[1];
    v93[2] = v94[2];
    v93[3] = v94[3];
    v93[4] = v94[4];
    v93[5] = v94[5];
    v93[6] = v94[6];
    v93[7] = v94[7];
    v93[8] = v94[8];
    v93[9] = v94[9];
    v90 = v93;
    v1385 = v93;
    v1578 = &unk_18019D850;
    v95 = GetProcessHeap();
    v91 = HeapAlloc(v95, 8u, 8uLL);
    if ( !v91 )
    {
      v1305 = -1073741801;
      v91 = 0LL;
      goto LABEL_714;
    }
    *v91 = *v1578;
    v1335 = (__int64)v91;
    v1573 = __rdtsc();
    LODWORD(dwBytes) = 0;
    v96 = sub_18005F608(4LL, 4LL, &v1533);
    v84 = v96;
    v1305 = v96;
    v97 = v1417;
    if ( v96 >= 0 )
      v97 = v1533;
    v1417 = v97;
    if ( v96 >= 0 )
    {
      v98 = sub_18005F608(0LL, v97, &dwBytes);
      v84 = v98 | 0x10000000;
      v1305 = v98 | 0x10000000;
      if ( v98 >= 0 )
      {
        v100 = sub_18005F608(v99, 160LL, &v1534);
        v84 = v100;
        v1305 = v100;
        if ( v100 >= 0 )
          v97 = v1534;
        v1417 = v97;
        if ( v100 >= 0 )
        {
          v101 = sub_18005F608((unsigned int)dwBytes, v97, &dwBytes);
          v84 = v103 | v101;
          v1305 = v103 | v101;
          if ( (v103 | v101) >= 0 )
          {
            v104 = sub_18005F608(v102, v102 + 4, &v1535);
            v84 = v104;
            v1305 = v104;
            if ( v104 >= 0 )
              v97 = v1535;
            v1417 = v97;
            if ( v104 >= 0 )
            {
              v105 = sub_18005F608((unsigned int)dwBytes, v97, &dwBytes);
              v84 = v107 | v105;
              v1305 = v107 | v105;
              if ( (v107 | v105) >= 0 )
              {
                v108 = sub_18005F608(v106, v106 + 4, &v1536);
                v84 = v108;
                v1305 = v108;
                if ( v108 >= 0 )
                  v97 = v1536;
                v1417 = v97;
                if ( v108 >= 0 )
                {
                  v109 = sub_18005F608((unsigned int)dwBytes, v97, &dwBytes);
                  v84 = v112 | v109;
                  v1305 = v112 | v109;
                  if ( (v112 | v109) >= 0 )
                  {
                    if ( (int)sub_18005F64C(v111, v110, &v1572) < 0 )
                      goto LABEL_204;
                    v114 = sub_18005F608(v113, (unsigned int)(2 * ++v1572), &v1543);
                    v84 = v114;
                    v1305 = v114;
                    if ( v114 >= 0 )
                      v97 = v1543;
                    v1417 = v97;
                    if ( v114 < 0 )
                      goto LABEL_714;
                    v115 = sub_18005F608((unsigned int)dwBytes, v97, &dwBytes);
                    v84 = v117 | v115;
                    v1305 = v117 | v115;
                    if ( (v117 | v115) < 0 )
                      goto LABEL_714;
                    v118 = sub_18005F608(v116, v116, &v1544);
                    v84 = v118;
                    v1305 = v118;
                    if ( v118 >= 0 )
                      v97 = v1544;
                    v1417 = v97;
                    if ( v118 < 0 )
                      goto LABEL_714;
                    v119 = sub_18005F608((unsigned int)dwBytes, v97, &dwBytes);
                    v84 = v121 | v119;
                    v1305 = v121 | v119;
                    if ( (v121 | v119) < 0 )
                      goto LABEL_714;
                    v122 = sub_18005F608(v120, v120, &v1551);
                    v84 = v122;
                    v1305 = v122;
                    if ( v122 >= 0 )
                      v97 = v1551;
                    v1417 = v97;
                    if ( v122 < 0 )
                      goto LABEL_714;
                    v123 = sub_18005F608((unsigned int)dwBytes, v97, &dwBytes);
                    v84 = v124 | v123;
                    v1305 = v124 | v123;
                    if ( (v124 | v123) < 0 )
                      goto LABEL_714;
                    Size_4 = dwBytes;
                    v125 = dwBytes;
                    v126 = GetProcessHeap();
                    v127 = HeapAlloc(v126, 8u, v125);
                    if ( !v127 )
                    {
                      v84 = -1073741801;
                      goto LABEL_254;
                    }
                    Src = v127;
                    v128 = 0;
                    Size = 0;
                    v1552 = 0;
                    v84 = sub_18005F628(v127, 4LL, &v1639);
                    v1305 = v84;
                    v131 = 0;
                    if ( v84 >= 0 )
                    {
                      if ( v129 + 2 > (_DWORD *)((char *)v129 + Size_4) )
                        goto LABEL_253;
                      *v129 = v130;
                      *v1639 = v1552;
                      v128 = v130 - 3;
                      Size = v130 - 3;
                      v131 = v130 - 3;
                    }
                    if ( v84 < 0 )
                      goto LABEL_714;
                    if ( !Src )
                    {
                      v84 = sub_18005F608((unsigned int)v130, 160LL, &v1553);
                      v1305 = v84;
                      v132 = v1449;
                      if ( v84 >= 0 )
                        v132 = v1553;
                      v1449 = v132;
                      if ( v84 < 0 )
                        goto LABEL_714;
                      v84 = sub_18005F608(Size_4, v132, &Size_4);
                      v1305 = v84;
                      if ( v84 < 0 )
                        goto LABEL_714;
                      v128 = v135 + Size;
                      Size += v135;
                      goto LABEL_173;
                    }
                    v136 = (unsigned int *)Src;
                    v1539 = (unsigned int *)Src;
                    if ( !v131 )
                      goto LABEL_166;
                    while ( 1 )
                    {
                      v84 = sub_18005F608(4LL, *v136, &v1554);
                      v1305 = v84;
                      if ( v84 >= 0 )
                        v139 = v1554;
                      v1449 = v139;
                      if ( v84 < 0 )
                      {
                        v134 = v137;
                        goto LABEL_171;
                      }
                      v84 = sub_18005F628(v138, v139, &v1539);
                      v1305 = v84;
                      if ( v84 < 0 )
                        break;
                      v136 = v1539;
                      if ( v140 + 1 >= v128 )
                      {
                        v130 = 4LL;
LABEL_166:
                        v84 = sub_18005F628(v136, v130, &v1640);
                        v1305 = v84;
                        if ( v84 >= 0 )
                        {
                          if ( v141 + 41 > (_DWORD *)((char *)Src + Size_4) )
                            goto LABEL_253;
                          *v141 = 160;
                          v142 = v1640;
                          *v1640 = *v93;
                          v142[1] = v93[1];
                          v142[2] = v93[2];
                          v142[3] = v93[3];
                          v142[4] = v93[4];
                          v142[5] = v93[5];
                          v142[6] = v93[6];
                          v142[7] = v93[7];
                          v142[8] = v93[8];
                          v142[9] = v93[9];
                          v135 = 1;
                          v128 = ++Size;
LABEL_172:
                          if ( v84 < 0 )
                            goto LABEL_714;
LABEL_173:
                          if ( Src )
                          {
                            v145 = (char *)Src;
                            v146 = 0;
                            if ( v128 )
                            {
                              while ( 1 )
                              {
                                v147 = *(_DWORD *)v145 + 4;
                                if ( v147 < (unsigned int)v134 )
                                  break;
                                v1472 = *(_DWORD *)v145 + 4;
                                v133 = &v145[v147];
                                if ( v133 < v145 )
                                {
LABEL_255:
                                  v84 = -1073741675;
                                  goto LABEL_254;
                                }
                                v145 += v147;
                                v146 += v135;
                                if ( v146 >= v128 )
                                  goto LABEL_183;
                              }
                              v84 = -1073741675;
                              v1305 = -1073741675;
                            }
                            else
                            {
LABEL_183:
                              v84 = sub_18005F628(v145, v134, &v1641);
                              v1305 = v84;
                              if ( v84 < 0 )
                                goto LABEL_714;
                              if ( v148 + 3 > (_DWORD *)((char *)Src + Size_4) )
                                goto LABEL_253;
                              *v148 = 8;
                              *v1641 = *v91;
                              v128 = v135 + Size;
                              Size += v135;
                            }
                            if ( v84 < 0 )
                              goto LABEL_714;
                            goto LABEL_187;
                          }
                          v143 = sub_18005F608((unsigned int)v134, 8LL, &v1555);
                          v84 = v143;
                          v1305 = v143;
                          v144 = v1472;
                          if ( v143 >= 0 )
                            v144 = v1555;
                          v1472 = v144;
                          if ( v143 < 0 )
                            goto LABEL_714;
                          v84 = sub_18005F608(Size_4, v144, &Size_4);
                          v1305 = v84;
                          if ( v84 < 0 )
                            goto LABEL_714;
                          v128 = v135 + Size;
                          Size += v135;
LABEL_187:
                          v1579 = v1573;
                          if ( Src )
                          {
                            v153 = (char *)Src;
                            v151 = 0LL;
                            if ( v128 )
                            {
                              while ( 1 )
                              {
                                v154 = *(_DWORD *)v153 + 4;
                                if ( v154 < (unsigned int)v134 )
                                  break;
                                v1473 = *(_DWORD *)v153 + 4;
                                v133 = &v153[v154];
                                if ( v133 < v153 )
                                  goto LABEL_255;
                                v153 += v154;
                                v151 = (unsigned int)(v135 + v151);
                                if ( (unsigned int)v151 >= v128 )
                                  goto LABEL_198;
                              }
                              v84 = -1073741675;
                              v1305 = -1073741675;
                            }
                            else
                            {
LABEL_198:
                              v84 = sub_18005F628(v153, v134, &v1642);
                              v1305 = v84;
                              if ( v84 < 0 )
                                goto LABEL_714;
                              if ( v155 + 3 > (_DWORD *)((char *)Src + Size_4) )
                                goto LABEL_253;
                              *v155 = 8;
                              v151 = v1579;
                              *v1642 = v1579;
                              Size += v156;
                            }
                            if ( v84 < 0 )
                              goto LABEL_714;
                            goto LABEL_202;
                          }
                          v149 = sub_18005F608((unsigned int)v134, 8LL, &v1556);
                          v84 = v149;
                          v1305 = v149;
                          v150 = v1473;
                          if ( v149 >= 0 )
                            v150 = v1556;
                          v1473 = v150;
                          if ( v149 < 0 )
                            goto LABEL_714;
                          v84 = sub_18005F608(Size_4, v150, &Size_4);
                          v1305 = v84;
                          if ( v84 < 0 )
                            goto LABEL_714;
                          Size += v152;
LABEL_202:
                          if ( (int)sub_18005F6A4(v151, v133, &v1494) < 0 )
                          {
                            v1494 = 0LL;
LABEL_204:
                            v84 = -1073741762;
LABEL_254:
                            v1305 = v84;
                            goto LABEL_714;
                          }
                          v84 = sub_18005F628(v1494, v157, &v1494);
                          v1305 = v84;
                          if ( v84 < 0 )
                            goto LABEL_714;
                          if ( 2 * (_DWORD)v1494 )
                          {
                            if ( !Src )
                            {
                              v160 = sub_18005F608((unsigned int)v158, (unsigned int)(2 * v1494), &v1557);
                              v84 = v160;
                              v1305 = v160;
                              v161 = v1474;
                              if ( v160 >= 0 )
                                v161 = v1557;
                              v1474 = v161;
                              if ( v160 < 0 )
                                goto LABEL_714;
                              v84 = sub_18005F608(Size_4, v161, &Size_4);
                              v1305 = v84;
                              if ( v84 < 0 )
                                goto LABEL_714;
                              Size += v159;
                              v84 = 0;
                              v1305 = 0;
LABEL_225:
                              if ( v84 < 0 )
                                goto LABEL_714;
                              v1559 = v1416;
                              if ( Src )
                              {
                                v167 = Src;
                                v168 = 0;
                                if ( Size )
                                {
                                  while ( 1 )
                                  {
                                    v169 = *v167 + 4;
                                    if ( v169 < (unsigned int)v158 )
                                      break;
                                    v1475 = *v167 + 4;
                                    if ( (_DWORD *)((char *)v167 + v169) < v167 )
                                      goto LABEL_255;
                                    v167 = (_DWORD *)((char *)v167 + v169);
                                    v168 += v159;
                                    if ( v168 >= Size )
                                      goto LABEL_236;
                                  }
                                  v84 = -1073741675;
                                  v1305 = -1073741675;
                                }
                                else
                                {
LABEL_236:
                                  v84 = sub_18005F628(v167, v158, &v1644);
                                  v1305 = v84;
                                  if ( v84 < 0 )
                                    goto LABEL_714;
                                  if ( v167 + 2 > (_DWORD *)((char *)Src + Size_4) )
                                    goto LABEL_253;
                                  *v167 = v158;
                                  *v1644 = v1559;
                                  Size += v159;
                                }
                                if ( v84 < 0 )
                                  goto LABEL_714;
                                goto LABEL_240;
                              }
                              v84 = sub_18005F608((unsigned int)v158, (unsigned int)v158, &v1558);
                              v1305 = v84;
                              v166 = v1475;
                              if ( v84 >= 0 )
                                v166 = v1558;
                              v1475 = v166;
                              if ( v84 < 0 )
                                goto LABEL_714;
                              v84 = sub_18005F608(Size_4, v166, &Size_4);
                              v1305 = v84;
                              if ( v84 < 0 )
                                goto LABEL_714;
                              Size += v159;
LABEL_240:
                              v1561 = v158;
                              if ( !Src )
                              {
                                v170 = sub_18005F608((unsigned int)v158, (unsigned int)v158, &v1560);
                                v84 = v170;
                                v1305 = v170;
                                v171 = v1476;
                                if ( v170 >= 0 )
                                  v171 = v1560;
                                v1476 = v171;
                                if ( v170 < 0 )
                                  goto LABEL_714;
                                v84 = sub_18005F608(Size_4, v171, &Size_4);
                                v1305 = v84;
                                if ( v84 < 0 )
                                  goto LABEL_714;
                                Size += v172;
LABEL_259:
                                v177 = sub_18005F608((unsigned int)v158, (unsigned int)v158, &v1562);
                                v84 = v177;
                                v1305 = v177;
                                v179 = v1421;
                                if ( v177 >= 0 )
                                  v179 = v1562;
                                v1421 = v179;
                                if ( v177 < 0 )
                                  goto LABEL_284;
                                v1406 = v179;
                                v180 = sub_18005F608(v178, 8LL, &v1563);
                                v84 = v180;
                                v1305 = v180;
                                v182 = v181;
                                if ( v180 >= 0 )
                                  v182 = v1563;
                                v1421 = v182;
                                if ( v180 < 0 )
                                  goto LABEL_284;
                                v84 = sub_18005F608(v181, v182, &v1406);
                                v1305 = v84;
                                if ( v84 < 0 )
                                  goto LABEL_284;
                                v184 = sub_18005F608(v183, v183, &v1564);
                                v84 = v184;
                                v1305 = v184;
                                if ( v184 >= 0 )
                                  v182 = v1564;
                                v1421 = v182;
                                if ( v184 < 0 )
                                  goto LABEL_284;
                                v84 = sub_18005F608(v1406, v182, &v1406);
                                v1305 = v84;
                                if ( v84 < 0 )
                                  goto LABEL_284;
                                v186 = sub_18005F608(v185, v185, &v1503);
                                v84 = v186;
                                v1305 = v186;
                                if ( v186 >= 0 )
                                  v182 = v1503;
                                v1421 = v182;
                                if ( v186 < 0 )
                                  goto LABEL_284;
                                v84 = sub_18005F608(v1406, v182, &v1406);
                                v1305 = v84;
                                if ( v84 < 0 )
                                  goto LABEL_284;
                                v188 = sub_18005F608(v187, v187, &v1504);
                                v84 = v188;
                                v1305 = v188;
                                if ( v188 >= 0 )
                                  v182 = v1504;
                                v1421 = v182;
                                if ( v188 < 0 )
                                  goto LABEL_284;
                                v84 = sub_18005F608(v1406, v182, &v1406);
                                v1305 = v84;
                                if ( v84 < 0 )
                                  goto LABEL_284;
                                v190 = sub_18005F608(v189, v189, &v1447);
                                v84 = v190;
                                v1305 = v190;
                                if ( v190 >= 0 )
                                  v182 = v1447;
                                v1421 = v182;
                                if ( v190 < 0 )
                                {
LABEL_284:
                                  v191 = v1447;
                                }
                                else
                                {
                                  v84 = sub_18005F608(v1406, v182, &v1406);
                                  v1305 = v84;
                                  v191 = v1447;
                                  if ( v84 >= 0 )
                                    v191 = v1406;
                                }
                                v1364 = v191;
                                if ( v84 < 0 )
                                  goto LABEL_714;
                                v192 = 0LL;
                                v1426 = 0LL;
                                v193 = 0;
                                v1492 = 0LL;
                                v1358 = 0LL;
                                v194 = 0;
                                kk = 0;
                                v1377 = 0LL;
                                v1412 = 0;
                                v1369 = 0LL;
                                v1402 = 0LL;
                                v1446 = 0;
                                v1580 = __rdtsc();
                                v1423 = 8;
                                v195 = sub_18005F608(8LL, Size_4, &v1423);
                                if ( v195 >= 0 )
                                {
                                  v196 = (v1423 + 7) & 0xFFFFFFF8;
                                  if ( v196 >= v1423 )
                                  {
                                    v1423 = (v1423 + 7) & 0xFFFFFFF8;
                                    v197 = v196;
                                    v198 = GetProcessHeap();
                                    v199 = HeapAlloc(v198, 8u, v197);
                                    if ( v199 )
                                    {
                                      v1497 = v199;
                                      *v199 = Size;
                                      v195 = sub_18005F628(v199, 4LL, &v1497);
                                      if ( v195 >= 0 )
                                      {
                                        v201 = v1497;
                                        *(_DWORD *)v1497 = Size_4;
                                        v195 = sub_18005F628(v201, v200, &v1497);
                                        if ( v195 >= 0 )
                                        {
                                          *(_QWORD *)((char *)v199 + v1423 - 8) = v1580;
                                          memcpy(v1497, Src, Size_4);
                                          v1426 = v199;
                                          v199 = 0LL;
                                          v193 = v1423;
                                        }
                                      }
                                      if ( v199 )
                                      {
                                        v202 = GetProcessHeap();
                                        HeapFree(v202, 0, v199);
                                      }
                                      v192 = (unsigned __int8 *)v1426;
                                    }
                                    else
                                    {
                                      v195 = -1073741801;
                                      v192 = 0LL;
                                    }
                                  }
                                  else
                                  {
                                    v195 = -1073741675;
                                  }
                                }
                                v84 = v195 | 0x10000000;
                                v1305 = v84;
                                if ( v84 < 0 )
                                  goto LABEL_581;
                                lpMem = 0LL;
                                v203 = 0LL;
                                v1394 = 0LL;
                                if ( v192 )
                                {
                                  v205 = v193;
                                  v1404 = (void *)v193;
                                  if ( v193
                                    && (v1419 = v193 + 8LL,
                                        v206 = (_BYTE *)sub_180055F40(v1419),
                                        v1415 = v206,
                                        v207 = 0,
                                        v206) )
                                  {
                                    v208 = 0;
                                    for ( j = 0LL; j < v193; ++j )
                                      v207 ^= v192[j];
                                    v1308 = v207;
                                    v1660 = 0xC81ECB17B1B54A58uLL;
                                    v210 = v192;
                                    v211 = v206;
                                    v212 = 0;
                                    v213 = -1;
                                    v1311 = 0;
                                    v1354 = 0;
                                    v214 = v205 & 7;
                                    if ( (v205 & 7) != 0 )
                                    {
                                      v1354 = 0;
                                      v215 = 0;
                                      v216 = 56;
                                      do
                                      {
                                        v217 = *v210++;
                                        if ( v215 >= 4 )
                                        {
                                          v208 |= v217 << v216;
                                          v218 = v1354;
                                        }
                                        else
                                        {
                                          v218 = (v217 << (v216 - 32)) | v1354;
                                          v1354 = v218;
                                        }
                                        ++v215;
                                        v216 -= 8;
                                      }
                                      while ( v215 < (int)v214 );
                                      v1311 = v208;
                                      v212 = v218 ^ 0xB17A307A;
                                      v219 = v208 ^ 0x42F6B18D;
                                      v220 = v218 ^ 0xB17A307A;
                                      v221 = v208 ^ 0x42F6B18D;
                                      v222 = 0;
                                      if ( (v205 & 7) != 0 )
                                      {
                                        do
                                        {
                                          v1403 = v211 + 1;
                                          if ( v222 >= 4 )
                                          {
                                            v221 = __ROL4__(v221, 8);
                                            v223 = v221;
                                          }
                                          else
                                          {
                                            v220 = __ROL4__(v220, 8);
                                            v223 = v220;
                                          }
                                          *v211 = v223;
                                          ++v222;
                                          v211 = v1403;
                                        }
                                        while ( v222 < (int)v214 );
                                      }
                                      if ( v214 <= 4 )
                                      {
                                        v213 = 0;
                                        if ( v214 < 4 )
                                          v212 = v212 >> (8 * (4 - v214)) << (8 * (4 - v214));
                                      }
                                      else
                                      {
                                        v213 = v219 >> (8 * (8 - v214)) << (8 * (8 - v214));
                                      }
                                    }
                                    v224 = v205 >> 3;
                                    if ( v205 >> 3 )
                                    {
                                      LODWORD(v1393) = HIWORD(v1660);
                                      v1340 = WORD1(v1660);
                                      v225 = v211 + 7;
                                      v226 = v210 + 2;
                                      v227 = v1311;
                                      v228 = v1354;
                                      v229 = HIDWORD(v1660);
                                      v230 = WORD2(v1660);
                                      do
                                      {
                                        v231 = v226[1] | ((*v226 | ((*(v226 - 1) | (*(v226 - 2) << 8)) << 8)) << 8);
                                        v232 = v226[5] | ((v226[4] | ((v226[3] | (v226[2] << 8)) << 8)) << 8);
                                        v233 = v232 ^ v213;
                                        v1403 = v226 + 8;
                                        v234 = v229 ^ v231 ^ (v233 - 19032) ^ v212;
                                        v235 = (v1340 * __ROR4__(v229 ^ v234, 15) + __ROR4__(v234, 7)) ^ v233;
                                        v236 = (v230 * __ROR4__(v235 - 1313519016, 9) - __ROR4__(v235, 10)) ^ v234;
                                        v237 = (v1393 * __ROL4__(v230 ^ v236, 4) + __ROL4__(v236, 5)) ^ v235;
                                        v238 = (v229 - (v237 ^ 0xB1B54A58)) ^ v236;
                                        v239 = (WORD1(v1660) * (v238 - 19032) - (v238 >> 6)) ^ v237;
                                        v240 = (19032 * (v230 ^ __ROR4__(v239, 15))) ^ v238;
                                        v241 = (v230 * (HIWORD(v1660) + __ROR4__(~v240, 3))) ^ v239;
                                        v242 = (v241 - v229 - 19032) ^ v240;
                                        v243 = (v1340 * (v1393 ^ v242)) ^ __ROR4__(v242, 10) ^ v241;
                                        v244 = (v230 * __ROL4__(v243 ^ 0x4A58, 6)) ^ __ROR4__(v243, 3) ^ v242;
                                        v245 = (19032 * (__ROR4__(v244, 15) - HIWORD(v1660))) ^ v243;
                                        v246 = (v245 >> 15) ^ (19032 * __ROL4__(v245 - v230, 3)) ^ (v245 >> 1) ^ (19032 * (HIWORD(v1660) ^ v245)) ^ v244;
                                        v247 = (WORD1(v1660) * (v246 - v230) - (v246 >> 13)) ^ v245;
                                        v248 = (v230 * __ROR4__(-1313519016 - v247, 9)) ^ __ROR4__(v247, 11) ^ v246;
                                        v249 = (v248 + 1313519016 - HIWORD(v1660)) ^ v247;
                                        v250 = (19032 * (v1340 ^ v249) - __ROR4__(v249, 7)) ^ v248;
                                        v251 = (v1340 * __ROL4__(HIWORD(v1660) ^ v250, 4) - __ROR4__(v250, 16)) ^ v249;
                                        v252 = (v230 * __ROR4__(-1313519016 - v251, 10) + __ROR4__(v251, 4)) ^ v250;
                                        v253 = (v1393 * __ROR4__(v252 + 1313519016, 4)) ^ __ROR4__(v252, 9) ^ v251;
                                        v254 = (19032 * __ROL4__(v229 ^ v253, 8) - __ROL4__(v253, 2)) ^ v252;
                                        v255 = (v1340 * __ROR4__(v229 - v254, 11) - __ROR4__(v254, 12)) ^ v253;
                                        v256 = (v255 >> 8) ^ (v230 * (WORD1(v1660) ^ v255)) ^ v254;
                                        v257 = v229 ^ v256 ^ v255 ^ 0xB1B54A58;
                                        v258 = v228 ^ v256;
                                        v259 = v227 ^ v257;
                                        *(v225 - 4) = v258;
                                        v260 = __ROR4__(v258, 8);
                                        *v225 = v259;
                                        v261 = __ROR4__(v259, 8);
                                        *(v225 - 5) = v260;
                                        v262 = __ROR4__(v260, 8);
                                        *(v225 - 1) = v261;
                                        v263 = __ROR4__(v261, 8);
                                        *(v225 - 6) = v262;
                                        v264 = __ROR4__(v262, 8);
                                        *(v225 - 2) = v263;
                                        v265 = __ROR4__(v263, 8);
                                        *(v225 - 7) = v264;
                                        *(v225 - 3) = v265;
                                        v212 = __ROR4__(v264, 8);
                                        v213 = __ROR4__(v265, 8);
                                        v228 = v231;
                                        v227 = v232;
                                        v225 += 8;
                                        --v224;
                                        v226 = (unsigned __int8 *)v1403;
                                      }
                                      while ( v224 );
                                      v207 = v1308;
                                      v203 = (WCHAR *)v1394;
                                      v205 = (unsigned __int64)v1404;
                                      v206 = v1415;
                                    }
                                    *(_QWORD *)&v206[v205] = v207;
                                    lpMem = v206;
                                    v266 = v1419;
                                    v1638 = v1419;
                                    v1649[1] = &qword_18019D900;
                                    v1649[2] = 8LL;
                                    v1624 = &xmmword_18019D860;
                                    v1625 = 160LL;
                                    v267 = GetProcessHeap();
                                    v268 = HeapAlloc(v267, 8u, 0x30uLL);
                                    if ( v268 )
                                    {
                                      *(_DWORD *)v268 = v266;
                                      v269 = GetProcessHeap();
                                      v270 = HeapAlloc(v269, 8u, v266);
                                      if ( !v270 )
                                        goto LABEL_326;
                                      v268[1] = v270;
                                      memcpy(v270, v206, v266);
                                      *((_DWORD *)v268 + 4) = 160;
                                      v271 = GetProcessHeap();
                                      v272 = HeapAlloc(v271, 8u, 0xA0uLL);
                                      if ( !v272 )
                                        goto LABEL_326;
                                      v268[3] = v272;
                                      *v272 = xmmword_18019D860;
                                      v272[1] = *((_OWORD *)&xmmword_18019D860 + 1);
                                      v272[2] = *((_OWORD *)&xmmword_18019D860 + 2);
                                      v272[3] = *((_OWORD *)&xmmword_18019D860 + 3);
                                      v272[4] = *((_OWORD *)&xmmword_18019D860 + 4);
                                      v272[5] = *((_OWORD *)&xmmword_18019D860 + 5);
                                      v272[6] = *((_OWORD *)&xmmword_18019D860 + 6);
                                      v272[7] = *((_OWORD *)&xmmword_18019D860 + 7);
                                      v272[8] = *((_OWORD *)&xmmword_18019D860 + 8);
                                      v272[9] = *((_OWORD *)&xmmword_18019D860 + 9);
                                      *((_DWORD *)v268 + 8) = 8;
                                      v273 = GetProcessHeap();
                                      v274 = HeapAlloc(v273, 8u, 8uLL);
                                      if ( v274 )
                                      {
                                        v268[5] = v274;
                                        v204 = 0;
                                        *v274 = qword_18019D900;
                                        v203 = (WCHAR *)v268;
                                        v268 = 0LL;
                                      }
                                      else
                                      {
LABEL_326:
                                        v204 = -1073741801;
                                      }
                                      if ( v268 )
                                      {
                                        v275 = (void *)v268[1];
                                        if ( v275 )
                                        {
                                          v276 = GetProcessHeap();
                                          HeapFree(v276, 0, v275);
                                          v268[1] = 0LL;
                                        }
                                        v277 = (void *)v268[3];
                                        if ( v277 )
                                        {
                                          v278 = GetProcessHeap();
                                          HeapFree(v278, 0, v277);
                                          v268[3] = 0LL;
                                        }
                                        v279 = (void *)v268[5];
                                        if ( v279 )
                                        {
                                          v280 = GetProcessHeap();
                                          HeapFree(v280, 0, v279);
                                          v268[5] = 0LL;
                                        }
                                        v281 = GetProcessHeap();
                                        HeapFree(v281, 0, v268);
                                      }
                                    }
                                    else
                                    {
                                      v204 = -1073741801;
                                    }
                                    if ( v204 >= 0 )
                                    {
                                      v1492 = v203;
                                      v203 = 0LL;
                                    }
                                  }
                                  else
                                  {
                                    v204 = -1073741823;
                                  }
                                  v282 = lpMem;
                                  if ( lpMem )
                                  {
                                    v283 = GetProcessHeap();
                                    HeapFree(v283, 0, v282);
                                    lpMem = 0LL;
                                  }
                                  if ( v203 )
                                  {
                                    v284 = (void *)*((_QWORD *)v203 + 1);
                                    if ( v284 )
                                    {
                                      v285 = GetProcessHeap();
                                      HeapFree(v285, 0, v284);
                                      *((_QWORD *)v203 + 1) = 0LL;
                                    }
                                    v286 = (void *)*((_QWORD *)v203 + 3);
                                    if ( v286 )
                                    {
                                      v287 = GetProcessHeap();
                                      HeapFree(v287, 0, v286);
                                      *((_QWORD *)v203 + 3) = 0LL;
                                    }
                                    v288 = (void *)*((_QWORD *)v203 + 5);
                                    if ( v288 )
                                    {
                                      v289 = GetProcessHeap();
                                      HeapFree(v289, 0, v288);
                                      *((_QWORD *)v203 + 5) = 0LL;
                                    }
                                    v290 = GetProcessHeap();
                                    HeapFree(v290, 0, v203);
                                  }
                                  v194 = 0;
                                }
                                else
                                {
                                  v204 = -1073741811;
                                }
                                v84 = v204 | 0x10000000;
                                v1305 = v84;
                                if ( v84 < 0 )
                                  goto LABEL_581;
                                v291 = (const void **)v1492;
                                v1407 = 4;
                                v292 = sub_18005F608(4LL, *(unsigned int *)v1492, &v1407);
                                v293 = 0;
                                if ( v292 < 0
                                  || (v292 = sub_18005F608(v1407, 4LL, &v1407), v292 < 0)
                                  || (v292 = sub_18005F608(v1407, *((unsigned int *)v291 + 4), &v1407), v292 < 0)
                                  || (v292 = sub_18005F608(v1407, 4LL, &v1407), v292 < 0) )
                                {
                                  v294 = v1448;
                                }
                                else
                                {
                                  v292 = sub_18005F608(v1407, *((unsigned int *)v291 + 8), &v1407);
                                  v294 = v1448;
                                  if ( v292 >= 0 )
                                    v294 = v1407;
                                  v1448 = v294;
                                }
                                if ( v292 >= 0 )
                                {
                                  v295 = v294;
                                  v296 = GetProcessHeap();
                                  v297 = HeapAlloc(v296, 8u, v295);
                                  v298 = v297;
                                  if ( v297 )
                                  {
                                    v1420 = v297;
                                    *v297 = *(_DWORD *)v291;
                                    v292 = sub_18005F628(v297, 4LL, &v1420);
                                    if ( v292 >= 0 )
                                    {
                                      memcpy(v1420, v291[1], *(unsigned int *)v291);
                                      v292 = sub_18005F628(v1420, *(unsigned int *)v291, &v1420);
                                      if ( v292 >= 0 )
                                      {
                                        v299 = v1420;
                                        *(_DWORD *)v1420 = *((_DWORD *)v291 + 4);
                                        v292 = sub_18005F628(v299, 4LL, &v1420);
                                        if ( v292 >= 0 )
                                        {
                                          memcpy(v1420, v291[3], *((unsigned int *)v291 + 4));
                                          v292 = sub_18005F628(v1420, *((unsigned int *)v291 + 4), &v1420);
                                          if ( v292 >= 0 )
                                          {
                                            v300 = v1420;
                                            *(_DWORD *)v1420 = *((_DWORD *)v291 + 8);
                                            v292 = sub_18005F628(v300, 4LL, &v1420);
                                            if ( v292 >= 0 )
                                            {
                                              memcpy(v1420, v291[5], *((unsigned int *)v291 + 8));
                                              v292 = sub_18005F628(v1420, *((unsigned int *)v291 + 8), &v1420);
                                              if ( v292 >= 0 )
                                              {
                                                v1358 = v298;
                                                v298 = 0LL;
                                                v194 = v1448;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    if ( v298 )
                                    {
                                      v301 = GetProcessHeap();
                                      HeapFree(v301, 0, v298);
                                    }
                                  }
                                  else
                                  {
                                    v292 = -1073741801;
                                  }
                                }
                                v84 = v292 | 0x10000000;
                                v1305 = v84;
                                if ( v84 < 0 )
                                  goto LABEL_581;
                                v1581 = 0LL;
                                v1505 = 0;
                                v1506 = 0;
                                v1453 = 8;
                                v302 = sub_18005F608(8LL, v1364, &v1453);
                                v84 = v302 | 0x10000000;
                                v1305 = v302 | 0x10000000;
                                if ( v302 < 0 )
                                  goto LABEL_419;
                                v304 = (v1453 + 7) & 0xFFFFFFF8;
                                if ( v304 >= v1453 )
                                {
                                  v1477 = (v1453 + 7) & 0xFFFFFFF8;
                                  v84 = sub_18005F608(v304, v303, &v1477);
                                  v1305 = v84;
                                  v305 = v1478;
                                  if ( v84 >= 0 )
                                    v305 = v1477;
                                  v1478 = v305;
                                }
                                else
                                {
                                  v84 = -1073741675;
                                  v1305 = -1073741675;
                                }
                                if ( v84 < 0 )
                                  goto LABEL_581;
                                if ( !Src || Size <= 1 )
                                  goto LABEL_382;
                                v306 = (unsigned int *)Src;
                                v1442 = (unsigned int *)Src;
                                v307 = 0;
                                do
                                {
                                  v308 = *v306;
                                  v84 = sub_18005F628(v306, 4LL, &v1442);
                                  v1305 = v84;
                                  if ( v84 < 0 )
                                    goto LABEL_392;
                                  v84 = sub_18005F628(v1442, v308, &v1442);
                                  v1305 = v84;
                                  if ( v84 < 0 )
                                    goto LABEL_392;
                                  ++v307;
                                  v306 = v1442;
                                }
                                while ( !v307 );
                                v310 = *v1442;
                                v84 = sub_18005F628(v1442, 4LL, &v1442);
                                v1305 = v84;
                                if ( v84 >= 0 )
                                {
                                  v1505 = v310;
                                  v311 = v1442;
                                  if ( !v310 )
                                    v311 = 0LL;
                                  v1442 = v311;
                                  v1581 = v311;
                                }
LABEL_392:
                                if ( v84 < 0 )
                                  goto LABEL_581;
                                if ( Size > 2 )
                                {
                                  v312 = (unsigned __int64)Src;
                                  v1496 = (unsigned __int64)Src;
                                  v313 = 0;
                                  while ( 1 )
                                  {
                                    v314 = v312 + 4;
                                    if ( v312 + 4 < v312 )
                                      break;
                                    v315 = v314 + *(unsigned int *)v312;
                                    v312 = -1LL;
                                    if ( v315 >= v314 )
                                      v312 = v315;
                                    v1496 = v312;
                                    v84 = v315 < v314 ? 0xC0000095 : 0;
                                    v1305 = v84;
                                    if ( v315 < v314 )
                                      goto LABEL_404;
                                    if ( (unsigned int)++v313 >= 2 )
                                    {
                                      v316 = *(_DWORD *)v312;
                                      v84 = sub_18005F628(v312, 4LL, &v1496);
                                      v1305 = v84;
                                      if ( v84 >= 0 )
                                      {
                                        v1506 = v316;
                                        v317 = v1496;
                                        if ( !v316 )
                                          v317 = 0LL;
                                        v1496 = v317;
                                        v1626 = v317;
                                      }
LABEL_404:
                                      if ( v84 < 0 )
                                        goto LABEL_581;
                                      v1405 = 4;
                                      v84 = sub_18005F608(4LL, v309, &v1405);
                                      v1305 = v84;
                                      if ( v84 < 0
                                        || (v84 = sub_18005F608(v1405, v318, &v1405), v1305 = v84, v84 < 0)
                                        || (v84 = sub_18005F608(v1405, v319, &v1405), v1305 = v84, v84 < 0)
                                        || (v84 = sub_18005F608(v1405, 4LL, &v1405), v1305 = v84, v84 < 0) )
                                      {
                                        v321 = v1459;
                                      }
                                      else
                                      {
                                        v84 = sub_18005F608(v1405, v320, &v1405);
                                        v1305 = v84;
                                        v321 = v1459;
                                        if ( v84 >= 0 )
                                          v321 = v1405;
                                        v1459 = v321;
                                      }
                                      if ( v84 < 0 )
                                        goto LABEL_581;
                                      if ( v321 > 0x400000 )
                                      {
                                        v84 = -2147418113;
                                        goto LABEL_580;
                                      }
                                      v1412 = v321;
LABEL_419:
                                      if ( v84 < 0 )
                                        goto LABEL_581;
                                      v322 = v1412;
                                      v323 = GetProcessHeap();
                                      v324 = (unsigned int *)HeapAlloc(v323, 8u, v322);
                                      if ( v324 )
                                      {
                                        v325 = v324;
                                        v1377 = v324;
                                        v84 = 0x10000000;
                                      }
                                      else
                                      {
                                        v84 = -805306345;
                                        v325 = 0LL;
                                      }
                                      v1305 = v84;
                                      if ( v84 < 0 )
                                        goto LABEL_581;
                                      if ( !v1358 || !v325 )
                                      {
                                        v84 = -2147024809;
                                        goto LABEL_580;
                                      }
                                      v1616[0] = v1358;
                                      v1617 = v194;
                                      v1616[1] = v325;
                                      v1618 = v1412;
                                      v1619 = 0;
                                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                        && (NtQuerySystemInformation = (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                                      {
                                        v329 = ((__int64 (__fastcall *)(__int64, _QWORD *))NtQuerySystemInformation)(
                                                 134LL,
                                                 v1616);
                                        v84 = v329 | 0x10000000;
                                        v327 = v1412;
                                        if ( v329 >= 0 )
                                          v327 = v1618;
                                        v1412 = v327;
LABEL_436:
                                        v1305 = v84;
                                      }
                                      else
                                      {
                                        v326 = GetLastError();
                                        v1305 = v326;
                                        v84 = v326;
                                        if ( v326 > 0 )
                                        {
                                          v84 = (unsigned __int16)v326 | 0x80070000;
                                          v1305 = v84;
                                        }
                                        v327 = v1412;
                                        if ( v84 >= 0 )
                                        {
                                          v84 = -2147467259;
                                          goto LABEL_436;
                                        }
                                      }
                                      if ( v84 == -805306333 )
                                      {
                                        v84 = -2147024774;
                                        goto LABEL_580;
                                      }
                                      if ( v84 < 0 )
                                        goto LABEL_581;
                                      v1419 = 0LL;
                                      v1395 = 0;
                                      v1432 = v325;
                                      if ( v327 < 4 )
                                        goto LABEL_441;
                                      v333 = *v325;
                                      v330 = sub_18005F628(v325, 4LL, &v1432);
                                      if ( v330 >= 0 )
                                      {
                                        v330 = sub_18005F608(0LL, v334, &v1395);
                                        if ( v330 < 0 )
                                          goto LABEL_450;
                                        if ( v327 - v1395 < (unsigned int)v333 )
                                        {
                                          v330 = -1073741762;
LABEL_450:
                                          v331 = v335;
LABEL_443:
                                          v84 = v330 | 0x10000000;
                                          v1305 = v84;
                                          if ( v84 >= 0 )
                                          {
                                            v332 = 0LL;
                                            v1455 = 0LL;
                                            v1404 = 0LL;
                                            if ( !v331 || (v370 = *((_QWORD *)v331 + 1), (v1419 = v370) == 0) || !*v331 )
                                            {
                                              v84 = -805306355;
                                              goto LABEL_580;
                                            }
                                            v371 = *v331;
                                            if ( v371 )
                                            {
                                              v372 = (const WCHAR *)(v371 - 8);
                                              v1394 = v372;
                                              v373 = (_BYTE *)sub_180055F40(v372);
                                              v1415 = v373;
                                              v374 = 0;
                                              if ( v373 )
                                              {
                                                v375 = 0;
                                                v1659 = 0x7F1137FAB69605ELL;
                                                v376 = (unsigned __int8 *)v370;
                                                v377 = v373;
                                                v378 = (unsigned __int8)v372 & 7;
                                                if ( ((unsigned __int8)v372 & 7) != 0 )
                                                {
                                                  v1355 = 0;
                                                  v379 = 0;
                                                  v380 = 56;
                                                  do
                                                  {
                                                    v381 = *v376++;
                                                    if ( v379 >= 4 )
                                                    {
                                                      v374 |= v381 << v380;
                                                      v382 = v1355;
                                                    }
                                                    else
                                                    {
                                                      v382 = (v381 << (v380 - 32)) | v1355;
                                                      v1355 = v382;
                                                    }
                                                    ++v379;
                                                    v380 -= 8;
                                                  }
                                                  while ( v379 < (int)v378 );
                                                  v1312 = v374;
                                                  v383 = v382 ^ 0x92F65A5;
                                                  v384 = v374 ^ 0x699A899C;
                                                  v385 = v382 ^ 0x92F65A5;
                                                  v386 = v384;
                                                  v387 = 0;
                                                  if ( ((unsigned __int8)v372 & 7) != 0 )
                                                  {
                                                    do
                                                    {
                                                      v1403 = v377 + 1;
                                                      if ( v387 >= 4 )
                                                      {
                                                        v386 = __ROL4__(v386, 8);
                                                        v388 = v386;
                                                      }
                                                      else
                                                      {
                                                        v385 = __ROL4__(v385, 8);
                                                        v388 = v385;
                                                      }
                                                      *v377 = v388;
                                                      ++v387;
                                                      v377 = v1403;
                                                    }
                                                    while ( v387 < (int)v378 );
                                                  }
                                                  if ( v378 <= 4 )
                                                  {
                                                    v374 = 0;
                                                    if ( v378 < 4 )
                                                      v383 = v383 >> (8 * (4 - v378)) << (8 * (4 - v378));
                                                  }
                                                  else
                                                  {
                                                    v374 = v384 >> (8 * (8 - v378)) << (8 * (8 - v378));
                                                  }
                                                }
                                                else
                                                {
                                                  v1355 = 0;
                                                  v1312 = -1;
                                                  v383 = 0;
                                                }
                                                v1403 = (void *)((unsigned __int64)v372 >> 3);
                                                if ( (unsigned __int64)v372 >> 3 )
                                                {
                                                  v389 = HIDWORD(v1659);
                                                  v390 = WORD2(v1659);
                                                  v1306 = WORD2(v1659);
                                                  v391 = v377 + 7;
                                                  v392 = v376 + 2;
                                                  v393 = (char *)v1403;
                                                  v394 = v1312;
                                                  v395 = v1355;
                                                  do
                                                  {
                                                    v396 = v392[1] | ((*v392 | ((*(v392 - 1) | (*(v392 - 2) << 8)) << 8)) << 8);
                                                    v397 = v392[5] | ((v392[4] | ((v392[3] | (v392[2] << 8)) << 8)) << 8);
                                                    v398 = v396 ^ v383;
                                                    v392 += 8;
                                                    v399 = v389 ^ v398 ^ v397 ^ v374 ^ 0xAB69605E;
                                                    v400 = (v390 * __ROL4__(v399 + 1419157410, 5) + __ROL4__(v399, 10)) ^ v398;
                                                    v401 = (__ROR4__(v400 + v389, 9) * WORD1(v1659) - __ROL4__(v400, 2)) ^ v399;
                                                    v402 = (24670 * (v401 - v1306) - (v401 >> 13)) ^ v400;
                                                    v403 = (__ROL4__(v402 ^ WORD1(v1659), 6) * HIWORD(v1659)
                                                          - __ROL4__(v402, 2)) ^ v401;
                                                    v404 = (v389 - (v403 ^ 0xAB69605E)) ^ v402;
                                                    v405 = (WORD1(v1659) * (v1306 ^ v404)) ^ __ROR4__(v404, 6) ^ v403;
                                                    v406 = (24670 * __ROR4__(v405 + v389, 15) + __ROL4__(v405, 2)) ^ v404;
                                                    v407 = (__ROR4__(v406 + 1419157410, 14) * HIWORD(v1659)
                                                          - __ROL4__(v406, 8)) ^ v405;
                                                    v408 = (v1306 * __ROR4__(v407 ^ 0xAB69605E, 12)) ^ __ROR4__(v407, 10) ^ v406;
                                                    v409 = (v408 >> 10) ^ (WORD1(v1659) * (v408 ^ HIWORD(v1659))) ^ v407;
                                                    v410 = (HIWORD(v1659) * (__ROR4__(~v409, 5) + 24670)) ^ v408;
                                                    v411 = (v410 - HIWORD(v1659)) ^ 0xAB69605E ^ v409;
                                                    v412 = ((v411 >> 2) + v1306 * __ROL4__(v411 ^ HIWORD(v1659), 2)) ^ v410;
                                                    v413 = (__ROR4__(v412 - v389, 6) * WORD1(v1659) + __ROL4__(v412, 7)) ^ v411;
                                                    v414 = (24670 * (v1306 ^ v413) + __ROR4__(v413, 9)) ^ v412;
                                                    v415 = (__ROL4__(v414 ^ WORD1(v1659), 5) * HIWORD(v1659)
                                                          + __ROL4__(v414, 7)) ^ v413;
                                                    v416 = v389 ^ v415 ^ 0xAB69605E ^ v414;
                                                    v417 = (v1306 * (__ROR4__(v416, 3) - WORD1(v1659))) ^ v415;
                                                    v418 = (24670 * __ROR4__(v417 - v389, 1) - __ROR4__(v417, 6)) ^ v416;
                                                    v419 = (__ROL4__(v418 - 1419157410, 3) * HIWORD(v1659)
                                                          + __ROL4__(v418, 14)) ^ v417;
                                                    v390 = v1306;
                                                    v420 = (v1306 * __ROL4__(v419 - 1419157410, 15) - __ROR4__(v419, 14)) ^ v418;
                                                    v421 = (v420 >> 3) ^ (WORD1(v1659) * (v420 ^ 0x605E)) ^ v419;
                                                    v422 = v395 ^ (24670 * __ROL4__(v389 ^ v421, 4)) ^ __ROL4__(v421, 2) ^ v420;
                                                    v423 = v394 ^ v421;
                                                    *(v391 - 4) = v422;
                                                    v424 = __ROR4__(v422, 8);
                                                    *v391 = v423;
                                                    v425 = __ROR4__(v423, 8);
                                                    *(v391 - 5) = v424;
                                                    v426 = __ROR4__(v424, 8);
                                                    *(v391 - 1) = v425;
                                                    v427 = __ROR4__(v425, 8);
                                                    *(v391 - 6) = v426;
                                                    v428 = __ROR4__(v426, 8);
                                                    *(v391 - 2) = v427;
                                                    v429 = __ROR4__(v427, 8);
                                                    *(v391 - 7) = v428;
                                                    *(v391 - 3) = v429;
                                                    v383 = __ROR4__(v428, 8);
                                                    v374 = __ROR4__(v429, 8);
                                                    v395 = v396;
                                                    v394 = v397;
                                                    v391 += 8;
                                                    --v393;
                                                  }
                                                  while ( v393 );
                                                  v375 = 0;
                                                  v372 = v1394;
                                                  v293 = (unsigned int)v1404;
                                                  v373 = v1415;
                                                }
                                                v430 = 0LL;
                                                if ( v372 )
                                                {
                                                  do
                                                    v375 ^= v373[v430++];
                                                  while ( v430 < (unsigned __int64)v372 );
                                                }
                                                if ( v375 == *(_QWORD *)((char *)v372 + v1419) )
                                                {
                                                  v332 = (int *)v373;
                                                  v1455 = (int *)v373;
                                                  v373 = 0LL;
                                                  v293 = (unsigned int)v372;
                                                  v431 = 0;
                                                }
                                                else
                                                {
                                                  v431 = -1073425151;
                                                  v332 = v1455;
                                                }
                                                if ( v373 )
                                                {
                                                  sub_180033A70(v373);
                                                  v332 = v1455;
                                                }
                                                if ( v431 >= 0 )
                                                {
                                                  v432 = v332;
                                                  v1402 = v332;
                                                  v332 = 0LL;
                                                  v1455 = 0LL;
                                                  v1446 = v293;
                                                  v84 = 0x10000000;
                                                  goto LABEL_540;
                                                }
                                              }
                                              else
                                              {
                                                v332 = v1455;
                                              }
                                            }
                                            v84 = -805306367;
                                            v293 = v1446;
                                            v432 = (int *)v1402;
LABEL_540:
                                            v1305 = v84;
                                            if ( v332 )
                                            {
                                              v433 = GetProcessHeap();
                                              HeapFree(v433, 0, v332);
                                              v1455 = 0LL;
                                              v293 = v1446;
                                            }
                                            if ( v84 >= 0 )
                                            {
                                              v1424 = 0;
                                              v1489 = v432;
                                              if ( v293 < 4 )
                                                goto LABEL_578;
                                              v1313 = *v432;
                                              v434 = sub_18005F628(v432, 4LL, &v1489);
                                              if ( v434 >= 0 )
                                              {
                                                v434 = sub_18005F608(0LL, 4LL, &v1424);
                                                if ( v434 >= 0 )
                                                {
                                                  if ( v293 - v1424 < 4 )
                                                    goto LABEL_578;
                                                  v435 = *(unsigned int *)v1489;
                                                  v434 = sub_18005F628(v1489, 4LL, &v1489);
                                                  if ( v434 >= 0 )
                                                  {
                                                    v434 = sub_18005F608(v1424, 4LL, &v1424);
                                                    if ( v434 >= 0 )
                                                    {
                                                      if ( v293 - v1424 < (unsigned int)v435 )
                                                        goto LABEL_578;
                                                      v434 = sub_18005F608(v1424, (unsigned int)v435, &v1424);
                                                      if ( v434 < 0 )
                                                        goto LABEL_579;
                                                      v437 = v1489;
                                                      if ( (char *)v1402 + v293 < (char *)v1489 + v435
                                                        || (unsigned __int64)v1402 + v293 - (_QWORD)v1489 - v435 >= 8 )
                                                      {
                                                        goto LABEL_578;
                                                      }
                                                      v438 = v436;
                                                      v434 = (int)v436;
                                                      kk = (unsigned int)v436;
                                                      if ( !v1489 )
                                                        goto LABEL_568;
                                                      v439 = (char *)v1489;
                                                      v434 = sub_18005F628(v1489, (unsigned int)v435, &v1583);
                                                      if ( v434 >= 0 )
                                                      {
                                                        for ( k = (unsigned __int64)v437 < v1583;
                                                              k;
                                                              k = (unsigned __int64)v445 < v1583 )
                                                        {
                                                          if ( v439 + 4 < v439 )
                                                            goto LABEL_565;
                                                          if ( (unsigned __int64)(v439 + 4) > v1583 )
                                                            goto LABEL_564;
                                                          v444 = *(_DWORD *)v439 + 4;
                                                          if ( *(_DWORD *)v439 >= 0xFFFFFFFC )
                                                          {
                                                            v434 = -1073741675;
                                                            goto LABEL_576;
                                                          }
                                                          v1436 = *(_DWORD *)v439 + 4;
                                                          v445 = &v439[v444];
                                                          if ( v445 < v439 )
                                                          {
LABEL_565:
                                                            v434 = -1073741675;
                                                            goto LABEL_579;
                                                          }
                                                          v439 += v444;
                                                          v434 = (int)v442;
                                                          if ( (unsigned __int64)v445 > v1583 )
                                                            goto LABEL_564;
                                                          kk = ++v440;
                                                        }
                                                        if ( v439 != (char *)v1583 )
                                                        {
LABEL_564:
                                                          v434 = -1073741811;
                                                          goto LABEL_579;
                                                        }
                                                        v438 = v442;
LABEL_568:
                                                        if ( (_DWORD)v435 )
                                                        {
                                                          v446 = GetProcessHeap();
                                                          v438 = HeapAlloc(v446, 8u, v435);
                                                          if ( !v438 )
                                                          {
                                                            v434 = -1073741801;
LABEL_575:
                                                            v441 = v1313;
                                                            goto LABEL_576;
                                                          }
                                                          v434 = 0;
                                                        }
                                                        if ( v437 )
                                                          memcpy(v438, v437, v435);
                                                        v1434[1] = v438;
                                                        v1434[0] = (LPVOID)__PAIR64__(v435, kk);
                                                        goto LABEL_575;
                                                      }
LABEL_576:
                                                      if ( v434 >= 0 && v441 != LODWORD(v1434[0]) )
LABEL_578:
                                                        v434 = -1073741762;
                                                    }
                                                  }
                                                }
                                              }
LABEL_579:
                                              v84 = v434 | 0x10000000;
LABEL_580:
                                              v1305 = v84;
                                            }
                                          }
LABEL_581:
                                          v447 = v1426;
                                          if ( v1426 )
                                          {
                                            v448 = GetProcessHeap();
                                            HeapFree(v448, 0, v447);
                                          }
                                          v449 = v1492;
                                          if ( v1492 )
                                          {
                                            v450 = (void *)*((_QWORD *)v1492 + 1);
                                            if ( v450 )
                                            {
                                              v451 = GetProcessHeap();
                                              HeapFree(v451, 0, v450);
                                              v449[1] = 0LL;
                                            }
                                            v452 = (void *)v449[3];
                                            if ( v452 )
                                            {
                                              v453 = GetProcessHeap();
                                              HeapFree(v453, 0, v452);
                                              v449[3] = 0LL;
                                            }
                                            v454 = (void *)v449[5];
                                            if ( v454 )
                                            {
                                              v455 = GetProcessHeap();
                                              HeapFree(v455, 0, v454);
                                              v449[5] = 0LL;
                                            }
                                            v456 = GetProcessHeap();
                                            HeapFree(v456, 0, v449);
                                            v1492 = 0LL;
                                          }
                                          if ( v1358 )
                                          {
                                            v457 = GetProcessHeap();
                                            HeapFree(v457, 0, v1358);
                                          }
                                          if ( v1377 )
                                          {
                                            v458 = GetProcessHeap();
                                            HeapFree(v458, 0, v1377);
                                          }
                                          if ( v1369 )
                                          {
                                            v459 = (void *)v1369[1];
                                            if ( v459 )
                                            {
                                              v460 = GetProcessHeap();
                                              HeapFree(v460, 0, v459);
                                              v1369[1] = 0LL;
                                            }
                                            v461 = (void *)v1369[3];
                                            if ( v461 )
                                            {
                                              v462 = GetProcessHeap();
                                              HeapFree(v462, 0, v461);
                                              v1369[3] = 0LL;
                                            }
                                            v463 = (void *)v1369[5];
                                            if ( v463 )
                                            {
                                              v464 = GetProcessHeap();
                                              HeapFree(v464, 0, v463);
                                              v1369[5] = 0LL;
                                            }
                                            v465 = GetProcessHeap();
                                            HeapFree(v465, 0, v1369);
                                          }
                                          v466 = v1402;
                                          if ( v1402 )
                                          {
                                            v467 = GetProcessHeap();
                                            HeapFree(v467, 0, v466);
                                          }
                                          if ( v84 < 0 )
                                            goto LABEL_713;
                                          v468 = 1;
                                          if ( !LODWORD(v1434[0]) )
                                            goto LABEL_706;
                                          v469 = 4LL;
                                          if ( v1434[1] )
                                          {
                                            v1541 = (signed int *)v1434[1];
                                            v84 = sub_18005F628(v1434[1], 4LL, &v1541);
                                            v1305 = v84;
                                            if ( v84 < 0 )
                                            {
                                              v470 = v1507;
                                              v471 = v1584;
                                            }
                                            else
                                            {
                                              v1507 = v470;
                                              v471 = v1541;
                                              if ( !v470 )
                                                v471 = 0LL;
                                              v1541 = v471;
                                              v1584 = v471;
                                            }
                                            if ( v84 < 0 )
                                              goto LABEL_713;
                                            if ( v470 != (_DWORD)v469 )
                                              goto LABEL_701;
                                            v1435 = *v471;
                                          }
                                          else
                                          {
                                            v84 = -1073741811;
                                            v1305 = -1073741811;
                                          }
                                          if ( v84 < 0 )
                                            goto LABEL_713;
                                          v84 = v1435;
                                          if ( v1435 == -805306333 )
                                            v84 = -2147024774;
                                          v1305 = v84;
                                          v1435 = v84;
                                          if ( v84 != -2147024774 && v84 < 0 )
                                            goto LABEL_713;
                                          if ( LODWORD(v1434[0]) != 6 )
                                            goto LABEL_706;
                                          if ( v1434[1] )
                                          {
                                            v472 = (int *)v1434[1];
                                            v1440 = (int *)v1434[1];
                                            v473 = 0;
                                            do
                                            {
                                              v84 = sub_18005F628(v472, v469, &v1440);
                                              v1305 = v84;
                                              if ( v84 < 0 )
                                                goto LABEL_633;
                                              v84 = sub_18005F628(v1440, v474, &v1440);
                                              v1305 = v84;
                                              if ( v84 < 0 )
                                                goto LABEL_633;
                                              v473 += v468;
                                              v472 = v1440;
                                            }
                                            while ( v473 < v468 );
                                            v475 = *v1440;
                                            v84 = sub_18005F628(v1440, v469, &v1440);
                                            v1305 = v84;
                                            if ( v84 < 0 )
                                            {
LABEL_633:
                                              v475 = v1508;
                                              v476 = v1585;
                                            }
                                            else
                                            {
                                              v1508 = v475;
                                              v476 = v1440;
                                              if ( !v475 )
                                                v476 = 0LL;
                                              v1440 = v476;
                                              v1585 = v476;
                                            }
                                            if ( v84 < 0 )
                                              goto LABEL_713;
                                            if ( v475 != 8 )
                                              goto LABEL_701;
                                            v1590 = *(_QWORD *)v476;
                                          }
                                          else
                                          {
                                            v84 = -1073741811;
                                            v1305 = -1073741811;
                                          }
                                          if ( v84 < 0 )
                                            goto LABEL_713;
                                          if ( v1434[1] )
                                          {
                                            v477 = (unsigned __int64)v1434[1];
                                            v1491 = v1434[1];
                                            v478 = 0;
                                            while ( 1 )
                                            {
                                              v479 = v477 + 4;
                                              if ( v477 + 4 < v477 )
                                                break;
                                              v480 = v479 + *(unsigned int *)v477;
                                              v477 = -1LL;
                                              if ( v480 >= v479 )
                                                v477 = v480;
                                              v1491 = (_DWORD *)v477;
                                              v84 = v480 < v479 ? 0xC0000095 : 0;
                                              v1305 = v84;
                                              if ( v480 < v479 )
                                                goto LABEL_650;
                                              v478 += v468;
                                              if ( v478 >= 2 )
                                              {
                                                v481 = *(_DWORD *)v477;
                                                v84 = sub_18005F628(v477, v469, &v1491);
                                                v1305 = v84;
                                                if ( v84 < 0 )
                                                {
LABEL_650:
                                                  v481 = v1509;
                                                  v482 = v1586;
                                                }
                                                else
                                                {
                                                  v1509 = v481;
                                                  v482 = v1491;
                                                  if ( !v481 )
                                                    v482 = 0LL;
                                                  v1491 = v482;
                                                  v1586 = v482;
                                                }
                                                if ( v84 < 0 )
                                                  goto LABEL_713;
                                                if ( v481 == (_DWORD)v469 )
                                                {
                                                  v1513 = *v482;
LABEL_656:
                                                  if ( v84 < 0 )
                                                    goto LABEL_713;
                                                  if ( !v1434[1] )
                                                  {
                                                    v84 = -1073741811;
                                                    goto LABEL_712;
                                                  }
                                                  v483 = (unsigned __int64)v1434[1];
                                                  v1490 = v1434[1];
                                                  for ( m = 0; m < 3; m += v468 )
                                                  {
                                                    v485 = v483 + 4;
                                                    if ( v483 + 4 < v483 )
                                                    {
                                                      v84 = -1073741675;
                                                      goto LABEL_712;
                                                    }
                                                    v486 = v485 + *(unsigned int *)v483;
                                                    v483 = -1LL;
                                                    if ( v486 >= v485 )
                                                      v483 = v486;
                                                    v1490 = (void *)v483;
                                                    v84 = v486 < v485 ? 0xC0000095 : 0;
                                                    v1305 = v84;
                                                    if ( v486 < v485 )
                                                      goto LABEL_669;
                                                  }
                                                  v84 = sub_18005F628(v483, v469, &v1490);
                                                  v1305 = v84;
                                                  if ( v84 < 0 )
                                                  {
LABEL_669:
                                                    v487 = v1510;
                                                    v488 = v1587;
                                                  }
                                                  else
                                                  {
                                                    v1510 = v487;
                                                    v488 = v1490;
                                                    if ( !v487 )
                                                      v488 = 0LL;
                                                    v1490 = v488;
                                                    v1587 = v488;
                                                  }
                                                  if ( v84 < 0 )
                                                    goto LABEL_713;
                                                  v489 = (unsigned __int64)v1434[1];
                                                  v1500 = (unsigned int *)v1434[1];
                                                  v490 = 0;
                                                  while ( 1 )
                                                  {
                                                    v491 = v489 + 4;
                                                    if ( v489 + 4 < v489 )
                                                      break;
                                                    v492 = v491 + *(unsigned int *)v489;
                                                    v489 = -1LL;
                                                    if ( v492 >= v491 )
                                                      v489 = v492;
                                                    v1500 = (unsigned int *)v489;
                                                    v84 = v492 < v491 ? 0xC0000095 : 0;
                                                    v1305 = v84;
                                                    if ( v492 < v491 )
                                                      goto LABEL_681;
                                                    if ( ++v490 >= (unsigned int)v469 )
                                                    {
                                                      v493 = *(_DWORD *)v489;
                                                      v84 = sub_18005F628(v489, v469, &v1500);
                                                      v1305 = v84;
                                                      if ( v84 < 0 )
                                                      {
LABEL_681:
                                                        v493 = v1511;
                                                        v494 = v1588;
                                                      }
                                                      else
                                                      {
                                                        v1511 = v493;
                                                        v494 = v1500;
                                                        if ( !v493 )
                                                          v494 = 0LL;
                                                        v1500 = v494;
                                                        v1588 = v494;
                                                      }
                                                      if ( v84 >= 0 )
                                                      {
                                                        if ( v493 != (_DWORD)v469 )
                                                          goto LABEL_701;
                                                        v495 = *v494;
                                                        v1460 = *v494;
LABEL_687:
                                                        if ( v84 >= 0 )
                                                        {
                                                          v496 = (unsigned __int64)v1434[1];
                                                          v1499 = (int *)v1434[1];
                                                          for ( n = 0; n < 5; ++n )
                                                          {
                                                            v498 = v496 + 4;
                                                            if ( v496 + 4 < v496 )
                                                            {
                                                              v84 = -1073741675;
                                                              v1305 = -1073741675;
                                                              goto LABEL_704;
                                                            }
                                                            v499 = v498 + *(unsigned int *)v496;
                                                            v496 = -1LL;
                                                            if ( v499 >= v498 )
                                                              v496 = v499;
                                                            v1499 = (int *)v496;
                                                            v84 = v499 < v498 ? 0xC0000095 : 0;
                                                            v1305 = v84;
                                                            if ( v499 < v498 )
                                                              goto LABEL_698;
                                                          }
                                                          v500 = *(_DWORD *)v496;
                                                          v84 = sub_18005F628(v496, 4LL, &v1499);
                                                          v1305 = v84;
                                                          if ( v84 < 0 )
                                                          {
LABEL_698:
                                                            v500 = v1512;
                                                            v501 = v1589;
                                                            goto LABEL_699;
                                                          }
                                                          v1512 = v500;
                                                          v501 = v1499;
                                                          if ( !v500 )
                                                            v501 = 0LL;
                                                          v1499 = v501;
                                                          v1589 = v501;
LABEL_699:
                                                          if ( v84 < 0 )
                                                            goto LABEL_713;
                                                          if ( v500 != 4 )
                                                            goto LABEL_701;
                                                          v1461 = *v501;
LABEL_704:
                                                          if ( v84 < 0 )
                                                            goto LABEL_713;
                                                          if ( v1573 == v1590 )
                                                          {
                                                            v1467 = v495;
                                                            v1416 = v1461;
                                                            v1468 = v1513;
                                                            if ( v495 <= 4 && v487 <= 4 )
                                                            {
                                                              memcpy(v1411, v488, v487);
                                                              if ( v1435 )
                                                                v84 = v1435;
                                                            }
                                                            else
                                                            {
                                                              v84 = -2147024774;
                                                            }
                                                            goto LABEL_712;
                                                          }
LABEL_706:
                                                          v84 = -1073425151;
LABEL_712:
                                                          v1305 = v84;
                                                        }
LABEL_713:
                                                        v91 = (_QWORD *)v1335;
                                                        v90 = v1385;
                                                        goto LABEL_714;
                                                      }
LABEL_686:
                                                      v495 = v1460;
                                                      goto LABEL_687;
                                                    }
                                                  }
                                                  v84 = -1073741675;
                                                  v1305 = -1073741675;
                                                  goto LABEL_686;
                                                }
LABEL_701:
                                                v84 = -1073741789;
                                                goto LABEL_712;
                                              }
                                            }
                                            v84 = -1073741675;
                                          }
                                          else
                                          {
                                            v84 = -1073741811;
                                          }
                                          v1305 = v84;
                                          goto LABEL_656;
                                        }
                                        v1403 = v1432;
                                        v330 = sub_18005F628(v1432, v333, &v1432);
                                        if ( v330 >= 0 )
                                        {
                                          v330 = sub_18005F608(v1395, (unsigned int)v333, &v1395);
                                          if ( v330 >= 0 )
                                          {
                                            if ( v327 - v1395 < (unsigned int)v336 )
                                              goto LABEL_441;
                                            v337 = *(unsigned int *)v1432;
                                            v330 = sub_18005F628(v1432, v336, &v1432);
                                            if ( v330 >= 0 )
                                            {
                                              v330 = sub_18005F608(v1395, v338, &v1395);
                                              if ( v330 >= 0 )
                                              {
                                                if ( v327 - v1395 < (unsigned int)v337 )
                                                  goto LABEL_441;
                                                v1404 = v1432;
                                                v330 = sub_18005F628(v1432, (unsigned int)v337, &v1432);
                                                if ( v330 >= 0 )
                                                {
                                                  v330 = sub_18005F608(v1395, (unsigned int)v337, &v1395);
                                                  if ( v330 >= 0 )
                                                  {
                                                    if ( v327 - v1395 >= (unsigned int)v339 )
                                                    {
                                                      v340 = *(unsigned int *)v1432;
                                                      v330 = sub_18005F628(v1432, v339, &v1432);
                                                      v342 = 0LL;
                                                      if ( v330 >= 0 )
                                                      {
                                                        v330 = sub_18005F608(v1395, v341, &v1395);
                                                        if ( v330 >= 0 )
                                                        {
                                                          if ( v327 - v1395 < (unsigned int)v340 )
                                                            goto LABEL_463;
                                                          v330 = sub_18005F608(v1395, (unsigned int)v340, &v1395);
                                                          if ( v330 >= 0 )
                                                          {
                                                            if ( v327 == v1395
                                                              && (unsigned int)(v333 + v340 + v337) + 12LL == v327 )
                                                            {
                                                              v343 = GetProcessHeap();
                                                              v344 = HeapAlloc(v343, 8u, 0x30uLL);
                                                              if ( !v344 )
                                                              {
                                                                v330 = -1073741801;
                                                                v293 = 0;
LABEL_493:
                                                                v362 = 0LL;
                                                                if ( v330 < 0 )
                                                                  v362 = (_QWORD *)v1419;
                                                                v331 = (unsigned int *)v1419;
                                                                if ( v330 < 0 )
                                                                  v331 = 0LL;
                                                                v1369 = v331;
                                                                if ( v362 )
                                                                {
                                                                  v363 = (void *)v362[1];
                                                                  if ( v363 )
                                                                  {
                                                                    v364 = GetProcessHeap();
                                                                    HeapFree(v364, 0, v363);
                                                                    v362[1] = 0LL;
                                                                  }
                                                                  v365 = (void *)v362[3];
                                                                  if ( v365 )
                                                                  {
                                                                    v366 = GetProcessHeap();
                                                                    HeapFree(v366, 0, v365);
                                                                    v362[3] = 0LL;
                                                                  }
                                                                  v367 = (void *)v362[5];
                                                                  if ( v367 )
                                                                  {
                                                                    v368 = GetProcessHeap();
                                                                    HeapFree(v368, 0, v367);
                                                                    v362[5] = 0LL;
                                                                  }
                                                                  v369 = GetProcessHeap();
                                                                  HeapFree(v369, 0, v362);
                                                                  v331 = (unsigned int *)v1369;
                                                                }
                                                                goto LABEL_443;
                                                              }
                                                              v345 = v1403;
                                                              if ( v1403 )
                                                              {
                                                                *(_DWORD *)v344 = v333;
                                                                v346 = GetProcessHeap();
                                                                v347 = HeapAlloc(v346, 8u, v333);
                                                                if ( !v347 )
                                                                  goto LABEL_472;
                                                                v344[1] = v347;
                                                                memcpy(v347, v345, v333);
                                                              }
                                                              else
                                                              {
                                                                *(_DWORD *)v344 = 0;
                                                                v344[1] = 0LL;
                                                              }
                                                              v348 = v1404;
                                                              if ( v1404 )
                                                              {
                                                                *((_DWORD *)v344 + 4) = v337;
                                                                v349 = GetProcessHeap();
                                                                v350 = HeapAlloc(v349, 8u, v337);
                                                                if ( v350 )
                                                                {
                                                                  v344[3] = v350;
                                                                  memcpy(v350, v348, v337);
                                                                  goto LABEL_479;
                                                                }
LABEL_472:
                                                                v330 = -1073741801;
                                                                v293 = 0;
                                                              }
                                                              else
                                                              {
                                                                *((_DWORD *)v344 + 4) = 0;
                                                                v344[3] = 0LL;
LABEL_479:
                                                                v351 = v1432;
                                                                if ( v1432 )
                                                                {
                                                                  *((_DWORD *)v344 + 8) = v340;
                                                                  v352 = v340;
                                                                  v353 = GetProcessHeap();
                                                                  v354 = HeapAlloc(v353, 8u, v340);
                                                                  v293 = 0;
                                                                  if ( !v354 )
                                                                  {
                                                                    v330 = -1073741801;
                                                                    goto LABEL_485;
                                                                  }
                                                                  v344[5] = v354;
                                                                  memcpy(v354, v351, v352);
                                                                }
                                                                else
                                                                {
                                                                  v293 = 0;
                                                                  *((_DWORD *)v344 + 8) = 0;
                                                                  v344[5] = 0LL;
                                                                }
                                                                v1419 = (SIZE_T)v344;
                                                                v344 = 0LL;
                                                                v330 = 0;
                                                              }
LABEL_485:
                                                              if ( v344 )
                                                              {
                                                                v355 = (void *)v344[1];
                                                                if ( v355 )
                                                                {
                                                                  v356 = GetProcessHeap();
                                                                  HeapFree(v356, 0, v355);
                                                                  v344[1] = 0LL;
                                                                }
                                                                v357 = (void *)v344[3];
                                                                if ( v357 )
                                                                {
                                                                  v358 = GetProcessHeap();
                                                                  HeapFree(v358, 0, v357);
                                                                  v344[3] = 0LL;
                                                                }
                                                                v359 = (void *)v344[5];
                                                                if ( v359 )
                                                                {
                                                                  v360 = GetProcessHeap();
                                                                  HeapFree(v360, 0, v359);
                                                                  v344[5] = 0LL;
                                                                }
                                                                v361 = GetProcessHeap();
                                                                HeapFree(v361, 0, v344);
                                                              }
                                                              goto LABEL_493;
                                                            }
LABEL_463:
                                                            v330 = -1073741762;
                                                          }
                                                        }
                                                      }
                                                      v331 = v342;
                                                      v293 = 0;
                                                      goto LABEL_443;
                                                    }
LABEL_441:
                                                    v330 = -1073741762;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      v331 = 0LL;
                                      goto LABEL_443;
                                    }
                                  }
                                  v84 = -1073741675;
                                }
                                else
                                {
LABEL_382:
                                  v84 = -1073741811;
                                }
                                v1305 = v84;
                                goto LABEL_419;
                              }
                              v173 = Src;
                              v174 = 0;
                              if ( Size )
                              {
                                while ( 1 )
                                {
                                  v175 = *v173 + 4;
                                  if ( v175 < (unsigned int)v158 )
                                    break;
                                  v1476 = *v173 + 4;
                                  if ( (_DWORD *)((char *)v173 + v175) < v173 )
                                    goto LABEL_255;
                                  v173 = (_DWORD *)((char *)v173 + v175);
                                  v174 += v159;
                                  if ( v174 >= Size )
                                    goto LABEL_251;
                                }
                                v84 = -1073741675;
                                v1305 = -1073741675;
                                goto LABEL_258;
                              }
LABEL_251:
                              v84 = sub_18005F628(v173, v158, &v1645);
                              v1305 = v84;
                              if ( v84 < 0 )
                                goto LABEL_714;
                              if ( v173 + 2 <= (_DWORD *)((char *)Src + Size_4) )
                              {
                                *v173 = v158;
                                *v1645 = v1561;
                                Size += v176;
LABEL_258:
                                if ( v84 < 0 )
                                  goto LABEL_714;
                                goto LABEL_259;
                              }
LABEL_253:
                              v84 = -1073741789;
                              goto LABEL_254;
                            }
                            v162 = Src;
                            v163 = 0;
                            if ( Size )
                            {
                              while ( 1 )
                              {
                                v164 = *v162 + 4;
                                if ( v164 < (unsigned int)v158 )
                                  break;
                                v1474 = *v162 + 4;
                                if ( (_DWORD *)((char *)v162 + v164) < v162 )
                                  break;
                                v162 = (_DWORD *)((char *)v162 + v164);
                                v163 += v159;
                                if ( v163 >= Size )
                                  goto LABEL_218;
                              }
                              v84 = -1073741675;
                            }
                            else
                            {
LABEL_218:
                              v84 = sub_18005F628(v162, v158, &v1643);
                              v1305 = v84;
                              if ( v84 < 0 )
                                goto LABEL_714;
                              if ( (char *)v162 + v165 + 4 <= (char *)Src + Size_4 )
                              {
                                *v162 = v165;
                                memcpy(v1643, L"Kernel-OneCore-DeviceFamilyID", (unsigned int)v165);
                                v159 = 1;
                                ++Size;
                                v158 = 4LL;
                                goto LABEL_225;
                              }
                              v84 = -1073741789;
                            }
                          }
                          else
                          {
                            v84 = -1073741811;
                          }
                          v1305 = v84;
                          goto LABEL_225;
                        }
LABEL_171:
                        v135 = 1;
                        goto LABEL_172;
                      }
                    }
                    v134 = 4LL;
                    goto LABEL_171;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_714:
    Size_4 = 0;
    v502 = Src;
    if ( Src )
    {
      v503 = GetProcessHeap();
      HeapFree(v503, 0, v502);
      Src = 0LL;
    }
    v1434[0] = 0LL;
    v504 = v1434[1];
    if ( v1434[1] )
    {
      v505 = GetProcessHeap();
      HeapFree(v505, 0, v504);
      v1434[1] = 0LL;
    }
    if ( v90 )
    {
      v506 = GetProcessHeap();
      HeapFree(v506, 0, v90);
    }
    if ( v91 )
    {
      v507 = GetProcessHeap();
      HeapFree(v507, 0, v91);
    }
    if ( v84 < 0 )
      goto LABEL_103;
    v508 = 0LL;
    if ( !v1416 )
      goto LABEL_1735;
    v1599 = 0LL;
    dword_18019E438 = v1416;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, &Filename, 0x104u);
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    {
LABEL_1339:
      sub_180074180(&v1599);
      if ( v1416 )
      {
        v956 = 0LL;
        v1401 = 0LL;
        *(_OWORD *)v1502 = 0LL;
        v1600 = &unk_18019D910;
        v957 = GetProcessHeap();
        v958 = HeapAlloc(v957, 8u, 0xA0uLL);
        v959 = v958;
        if ( v958 )
        {
          v960 = v1600;
          *v958 = *v1600;
          v958[1] = v960[1];
          v958[2] = v960[2];
          v958[3] = v960[3];
          v958[4] = v960[4];
          v958[5] = v960[5];
          v958[6] = v960[6];
          v958[7] = v960[7];
          v958[8] = v960[8];
          v958[9] = v960[9];
          v1363 = v958;
          v1601 = &unk_18019D850;
          v961 = GetProcessHeap();
          v962 = HeapAlloc(v961, 8u, 8uLL);
          v963 = v962;
          if ( v962 )
          {
            *v962 = *v1601;
            v508 = v962;
            v1393 = (__int64)v962;
            v1602 = __rdtsc();
            v1413 = 0;
            if ( (int)sub_18005F608(4LL, 4LL, &v1514) >= 0
              && (int)sub_18005F608(0LL, v1514, &v1413) >= 0
              && (int)sub_18005F608(v964, 160LL, &v1515) >= 0 )
            {
              v965 = sub_18005F608(v1413, v1515, &v1413);
              if ( (v967 | v965) >= 0 && (int)sub_18005F608(v966, 8LL, &v1516) >= 0 )
              {
                v968 = sub_18005F608(v1413, v1516, &v1413);
                if ( (v970 | v968) >= 0 && (int)sub_18005F608(v969, 8LL, &v1517) >= 0 )
                {
                  v1613 = v1517;
                  v971 = sub_18005F608(v1413, v1517, &v1413);
                  if ( (v972 | v971) >= 0 )
                  {
                    HIDWORD(v1400) = v1413;
                    v973 = v1413;
                    v974 = GetProcessHeap();
                    v975 = (unsigned int *)HeapAlloc(v974, 8u, v973);
                    v976 = v975;
                    if ( v975 )
                    {
                      v1401 = v975;
                      LODWORD(v1400) = 0;
                      v1518 = 4;
                      if ( (int)sub_18005F628(v975, 4LL, &v1646) >= 0
                        && v976 + 2 <= (unsigned int *)((char *)v976 + HIDWORD(v1400)) )
                      {
                        *v976 = v977;
                        *v1646 = v1518;
                        v979 = v1400 + 1;
                        LODWORD(v1400) = v1400 + 1;
                        if ( v1401 == v978 )
                        {
                          if ( (int)sub_18005F608(v977, 160LL, &v1519) < 0 )
                            goto LABEL_1726;
                          v1521 = v1519;
                          if ( (int)sub_18005F608(HIDWORD(v1400), v1519, (char *)&v1400 + 4) >= 0 )
                          {
                            v982 = (_DWORD)v981 + 1;
                            v983 = (_DWORD)v981 + 1 + v1400;
                            LODWORD(v1400) = v983;
                            goto LABEL_1365;
                          }
                        }
                        else
                        {
                          v984 = v1401;
                          v1545 = v1401;
                          if ( v979 )
                          {
                            while ( (int)sub_18005F608(4LL, (unsigned int)*v984, &v1520) >= 0 )
                            {
                              v1521 = v1520;
                              if ( (int)sub_18005F628(v984, v1520, &v1545) < 0 )
                                goto LABEL_1357;
                              v984 = v1545;
                              if ( v985 + 1 >= v986 )
                                goto LABEL_1362;
                            }
                            goto LABEL_1726;
                          }
LABEL_1362:
                          if ( (int)sub_18005F628(v984, 4LL, &v1647) >= 0
                            && v984 + 41 <= (_DWORD *)((char *)v1401 + HIDWORD(v1400)) )
                          {
                            *v984 = 160;
                            v987 = v1647;
                            *v1647 = *v959;
                            v987[1] = v959[1];
                            v987[2] = v959[2];
                            v987[3] = v959[3];
                            v987[4] = v959[4];
                            v987[5] = v959[5];
                            v987[6] = v959[6];
                            v988 = v980 + 124;
                            *(_OWORD *)((char *)v987 + v988 - 16) = v959[7];
                            *(_OWORD *)((char *)v987 + v988) = *(_OWORD *)((char *)v959 + v988);
                            *(_OWORD *)((char *)v987 + v988 + 16) = *(_OWORD *)((char *)v959 + v988 + 16);
                            v982 = v980 - 3;
                            v983 = v980 - 3 + v1400;
                            LODWORD(v1400) = v983;
LABEL_1365:
                            if ( v1401 == v981 )
                            {
                              if ( (int)sub_18005F608(v980, 8LL, &v1522) < 0 )
                                goto LABEL_1726;
                              v1524 = v1522;
                              if ( (int)sub_18005F608(HIDWORD(v1400), v1522, (char *)&v1400 + 4) < 0 )
                                goto LABEL_1726;
                              v991 = v982 + v1400;
                              LODWORD(v1400) = v982 + v1400;
                            }
                            else
                            {
                              v992 = (unsigned int *)v1401;
                              v1546 = (unsigned int *)v1401;
                              if ( v983 )
                              {
                                while ( (int)sub_18005F608(4LL, *v992, &v1523) >= 0 )
                                {
                                  v1524 = v1523;
                                  if ( (int)sub_18005F628(v993, v1523, &v1546) < 0 )
                                    break;
                                  v992 = v1546;
                                  if ( v982 + v994 >= v983 )
                                    goto LABEL_1373;
                                }
                                goto LABEL_1726;
                              }
LABEL_1373:
                              if ( (int)sub_18005F628(v992, 4LL, &v1648) < 0
                                || v995 + 3 > (_DWORD *)((char *)v1401 + HIDWORD(v1400)) )
                              {
                                goto LABEL_1726;
                              }
                              *v995 = 8;
                              *v1648 = *v963;
                              v991 = v982 + v1400;
                              LODWORD(v1400) = v982 + v1400;
                              v989 = 4;
                            }
                            v1603 = v1602;
                            if ( v1401 == v990 )
                            {
                              if ( (int)sub_18005F608(v989, 8LL, &v1525) < 0 )
                                goto LABEL_1726;
                              v1527 = v1525;
                              if ( (int)sub_18005F608(HIDWORD(v1400), v1525, (char *)&v1400 + 4) < 0 )
                                goto LABEL_1726;
                            }
                            else
                            {
                              v997 = (unsigned int *)v1401;
                              v1547 = (unsigned int *)v1401;
                              if ( v991 )
                              {
                                while ( (int)sub_18005F608(4LL, *v997, &v1526) >= 0 )
                                {
                                  v1527 = v1526;
                                  if ( (int)sub_18005F628(v998, v1526, &v1547) < 0 )
                                    break;
                                  v997 = v1547;
                                  if ( v982 + v999 >= v991 )
                                    goto LABEL_1384;
                                }
                                goto LABEL_1726;
                              }
LABEL_1384:
                              if ( (int)sub_18005F628(v997, 4LL, v1649) < 0
                                || v1000 + 3 > (_DWORD *)((char *)v1401 + HIDWORD(v1400)) )
                              {
                                goto LABEL_1726;
                              }
                              *v1000 = 8;
                              *(_QWORD *)v1649[0] = v1603;
                              v996 = 4;
                            }
                            LODWORD(v1400) = v982 + v1400;
                            if ( (int)sub_18005F608(v996, v996, v1532) >= 0 )
                            {
                              v1002 = v1532[0];
                              v1463 = v1532[0];
                              if ( (int)sub_18005F608(v1001, 8LL, &v1528) >= 0 )
                              {
                                v1612 = v1528;
                                if ( (int)sub_18005F608(v1002, v1528, &v1463) >= 0 )
                                {
                                  v1375 = v1463;
                                  v1402 = v1003;
                                  LODWORD(v1397) = (_DWORD)v1003;
                                  v1488 = v1003;
                                  v1419 = (SIZE_T)v1003;
                                  v1352 = (unsigned int)v1003;
                                  v1399 = v1003;
                                  LODWORD(v1414) = (_DWORD)v1003;
                                  v1004 = v1003;
                                  v1430 = v1003;
                                  v1005 = (int *)v1003;
                                  v1384 = (int *)v1003;
                                  v1443 = (unsigned int)v1003;
                                  v1604 = __rdtsc();
                                  v1425 = 8;
                                  v1006 = sub_18005F608(8LL, HIDWORD(v1400), &v1425);
                                  if ( v1006 >= 0 )
                                  {
                                    v1010 = (v1425 + 7) & 0xFFFFFFF8;
                                    if ( v1010 >= v1425 )
                                    {
                                      v1425 = (v1425 + 7) & 0xFFFFFFF8;
                                      v1011 = v1010;
                                      v1012 = GetProcessHeap();
                                      v1013 = (char *)HeapAlloc(v1012, 8u, v1011);
                                      v1014 = v1013;
                                      v1009 = 0LL;
                                      if ( v1013 )
                                      {
                                        v1486 = v1013;
                                        *(_DWORD *)v1013 = v1400;
                                        v1006 = sub_18005F628(v1013, 4LL, &v1486);
                                        if ( v1006 < 0
                                          || (v1016 = v1486,
                                              *(_DWORD *)v1486 = HIDWORD(v1400),
                                              v1006 = sub_18005F628(v1016, v1015, &v1486),
                                              v1006 < 0) )
                                        {
                                          v1007 = (unsigned int)v1009;
                                          v1008 = (unsigned int)v1009;
                                        }
                                        else
                                        {
                                          *(_QWORD *)&v1014[v1425 - 8] = v1604;
                                          memcpy(v1486, v1401, HIDWORD(v1400));
                                          v1008 = (unsigned __int64)v1014;
                                          v1402 = v1014;
                                          v1009 = 0LL;
                                          v1014 = 0LL;
                                          v1007 = v1425;
                                          LODWORD(v1397) = v1425;
                                        }
                                        if ( v1014 )
                                        {
                                          v1017 = GetProcessHeap();
                                          HeapFree(v1017, 0, v1014);
                                          v1007 = v1397;
                                          v1008 = (unsigned __int64)v1402;
                                          v1009 = 0LL;
                                        }
                                      }
                                      else
                                      {
                                        v1006 = -1073741801;
                                        v1007 = 0;
                                        v1008 = 0LL;
                                      }
                                    }
                                    else
                                    {
                                      v1006 = -1073741675;
                                    }
                                  }
                                  v1018 = v1006 | 0x10000000;
                                  if ( v1018 < 0 )
                                    goto LABEL_1521;
                                  v1548 = v1009;
                                  v1019 = v1009;
                                  v1422 = (SIZE_T)v1009;
                                  if ( v1008 )
                                  {
                                    v1021 = v1007;
                                    v1429 = (void *)v1007;
                                    if ( v1007
                                      && (v1022 = (_BYTE *)sub_180055F40(v1007 + 8LL), v1403 = v1022, v1023 = 0, v1022) )
                                    {
                                      v1024 = 0;
                                      v1309 = 0;
                                      v1025 = 0LL;
                                      v1026 = (unsigned __int8 *)v1402;
                                      if ( v1021 )
                                      {
                                        do
                                          v1024 ^= *((_BYTE *)v1402 + v1025++);
                                        while ( v1025 < v1021 );
                                        v1309 = v1024;
                                      }
                                      v1662 = 0xC81ECB17B1B54A58uLL;
                                      v1027 = v1022;
                                      v1028 = -1;
                                      LODWORD(v1397) = 0;
                                      v1357 = 0;
                                      v1029 = v1021 & 7;
                                      if ( (v1021 & 7) != 0 )
                                      {
                                        LODWORD(v1397) = 0;
                                        v1030 = 56;
                                        v1031 = 0;
                                        do
                                        {
                                          v1032 = *v1026++;
                                          if ( v1023 >= 4 )
                                          {
                                            v1033 = (v1032 << v1030) | v1397;
                                            LODWORD(v1397) = v1033;
                                          }
                                          else
                                          {
                                            v1031 |= v1032 << (v1030 - 32);
                                            v1033 = v1397;
                                          }
                                          ++v1023;
                                          v1030 -= 8;
                                        }
                                        while ( v1023 < (int)v1029 );
                                        v1357 = v1031;
                                        v1023 = v1031 ^ 0xB17A307A;
                                        v1034 = v1033 ^ 0x42F6B18D;
                                        v1035 = v1031 ^ 0xB17A307A;
                                        v1036 = v1034;
                                        v1336 = (unsigned int)v1004 & v1335;
                                        if ( (v1021 & 7) != 0 )
                                        {
                                          v1037 = v1336;
                                          do
                                          {
                                            v1410 = v1027 + 1;
                                            if ( v1037 >= 4 )
                                            {
                                              v1036 = __ROL4__(v1036, 8);
                                              v1038 = v1036;
                                            }
                                            else
                                            {
                                              v1035 = __ROL4__(v1035, 8);
                                              v1038 = v1035;
                                            }
                                            *v1027 = v1038;
                                            ++v1037;
                                            v1027 = v1410;
                                          }
                                          while ( v1037 < (int)v1029 );
                                          v84 = v1305;
                                        }
                                        if ( v1029 <= 4 )
                                        {
                                          v1028 = 0;
                                          if ( v1029 < 4 )
                                            v1023 = (unsigned int)v1023 >> (8 * (4 - v1029)) << (8 * (4 - v1029));
                                        }
                                        else
                                        {
                                          v1028 = v1034 >> (8 * (8 - v1029)) << (8 * (8 - v1029));
                                        }
                                      }
                                      v1039 = v1021 >> 3;
                                      if ( v1021 >> 3 )
                                      {
                                        v1040 = HIDWORD(v1662);
                                        v1337 = HIWORD(v1662);
                                        v1342 = WORD1(v1662);
                                        v1041 = WORD2(v1662);
                                        v1042 = v1027 + 7;
                                        v1043 = v1026 + 2;
                                        v1044 = v1039;
                                        v1045 = v1397;
                                        v1046 = v1357;
                                        do
                                        {
                                          v1047 = v1043[1] | ((*v1043 | ((*(v1043 - 1) | (*(v1043 - 2) << 8)) << 8)) << 8);
                                          v1048 = v1043[5] | ((v1043[4] | ((v1043[3] | (v1043[2] << 8)) << 8)) << 8);
                                          v1049 = v1048 ^ v1028;
                                          v1410 = v1043 + 8;
                                          v1050 = v1040 ^ v1047 ^ (v1049 - 19032) ^ v1023;
                                          v1051 = (v1342 * __ROR4__(v1040 ^ v1050, 15) + __ROR4__(v1050, 7)) ^ v1049;
                                          v1052 = (v1041 * __ROR4__(v1051 - 1313519016, 9) - __ROR4__(v1051, 10)) ^ v1050;
                                          v1053 = (v1337 * __ROL4__(v1041 ^ v1052, 4) + __ROL4__(v1052, 5)) ^ v1051;
                                          v1054 = (v1040 - (v1053 ^ 0xB1B54A58)) ^ v1052;
                                          v1055 = (WORD1(v1662) * (v1054 - 19032) - (v1054 >> 6)) ^ v1053;
                                          v1056 = (19032 * (v1041 ^ __ROR4__(v1055, 15))) ^ v1054;
                                          v1057 = (v1041 * (HIWORD(v1662) + __ROR4__(~v1056, 3))) ^ v1055;
                                          v1058 = (v1057 - 19032 - v1040) ^ v1056;
                                          v1059 = (v1342 * (HIWORD(v1662) ^ v1058)) ^ __ROR4__(v1058, 10) ^ v1057;
                                          v1060 = (v1041 * __ROL4__(v1059 ^ 0x4A58, 6)) ^ __ROR4__(v1059, 3) ^ v1058;
                                          v1061 = (19032 * (__ROR4__(v1060, 15) - HIWORD(v1662))) ^ v1059;
                                          v1062 = (v1061 >> 15) ^ (19032 * __ROL4__(v1061 - v1041, 3)) ^ (v1061 >> 1) ^ (19032 * (HIWORD(v1662) ^ v1061)) ^ v1060;
                                          v1063 = (WORD1(v1662) * (v1062 - v1041) - (v1062 >> 13)) ^ v1061;
                                          v1064 = (v1041 * __ROR4__(-1313519016 - v1063, 9)) ^ __ROR4__(v1063, 11) ^ v1062;
                                          v1065 = (v1064 + 1313519016 - HIWORD(v1662)) ^ v1063;
                                          v1066 = (19032 * (v1342 ^ v1065) - __ROR4__(v1065, 7)) ^ v1064;
                                          v1067 = (v1342 * __ROL4__(HIWORD(v1662) ^ v1066, 4) - __ROR4__(v1066, 16)) ^ v1065;
                                          v1068 = (v1041 * __ROR4__(-1313519016 - v1067, 10) + __ROR4__(v1067, 4)) ^ v1066;
                                          v1069 = (HIWORD(v1662) * __ROR4__(v1068 + 1313519016, 4)) ^ __ROR4__(v1068, 9) ^ v1067;
                                          v1070 = (19032 * __ROL4__(HIDWORD(v1662) ^ v1069, 8) - __ROL4__(v1069, 2)) ^ v1068;
                                          v1040 = HIDWORD(v1662);
                                          v1071 = (v1342 * __ROR4__(HIDWORD(v1662) - v1070, 11) - __ROR4__(v1070, 12)) ^ v1069;
                                          v1072 = (v1071 >> 8) ^ (v1041 * (WORD1(v1662) ^ v1071)) ^ v1070;
                                          v1073 = HIDWORD(v1662) ^ v1072 ^ v1071 ^ 0xB1B54A58;
                                          v1074 = v1046 ^ v1072;
                                          v1075 = v1045 ^ v1073;
                                          *(v1042 - 4) = v1074;
                                          v1076 = __ROR4__(v1074, 8);
                                          *v1042 = v1075;
                                          v1077 = __ROR4__(v1075, 8);
                                          *(v1042 - 5) = v1076;
                                          v1078 = __ROR4__(v1076, 8);
                                          *(v1042 - 1) = v1077;
                                          v1079 = __ROR4__(v1077, 8);
                                          *(v1042 - 6) = v1078;
                                          v1080 = __ROR4__(v1078, 8);
                                          *(v1042 - 2) = v1079;
                                          v1081 = __ROR4__(v1079, 8);
                                          *(v1042 - 7) = v1080;
                                          *(v1042 - 3) = v1081;
                                          v1023 = __ROR4__(v1080, 8);
                                          v1028 = __ROR4__(v1081, 8);
                                          v1046 = v1047;
                                          v1045 = v1048;
                                          v1042 += 8;
                                          --v1044;
                                          v1043 = (unsigned __int8 *)v1410;
                                        }
                                        while ( v1044 );
                                        v1024 = v1309;
                                        v84 = v1305;
                                        v1004 = v1430;
                                        v1019 = (_QWORD *)v1422;
                                        v1021 = (unsigned __int64)v1429;
                                      }
                                      v1082 = v1403;
                                      *(_QWORD *)((char *)v1403 + v1021) = v1024;
                                      v1548 = v1082;
                                      v1083 = v1021 + 8;
                                      v1627 = (char *)(v1021 + 8);
                                      v1628 = &qword_18019D900;
                                      v1629 = 8LL;
                                      v1630 = &xmmword_18019D860;
                                      v1631 = 160LL;
                                      v1084 = GetProcessHeap();
                                      v1085 = HeapAlloc(v1084, 8u, 0x30uLL);
                                      v1086 = v1085;
                                      if ( v1085 )
                                      {
                                        *v1085 = v1083;
                                        v1087 = GetProcessHeap();
                                        v1088 = HeapAlloc(v1087, 8u, v1083);
                                        if ( !v1088 )
                                          goto LABEL_1433;
                                        *((_QWORD *)v1086 + 1) = v1088;
                                        memcpy(v1088, v1082, v1083);
                                        v1086[4] = 160;
                                        v1089 = GetProcessHeap();
                                        v1090 = HeapAlloc(v1089, 8u, 0xA0uLL);
                                        if ( !v1090 )
                                          goto LABEL_1433;
                                        *((_QWORD *)v1086 + 3) = v1090;
                                        *v1090 = xmmword_18019D860;
                                        v1090[1] = *((_OWORD *)&xmmword_18019D860 + 1);
                                        v1090[2] = *((_OWORD *)&xmmword_18019D860 + 2);
                                        v1090[3] = *((_OWORD *)&xmmword_18019D860 + 3);
                                        v1090[4] = *((_OWORD *)&xmmword_18019D860 + 4);
                                        v1090[5] = *((_OWORD *)&xmmword_18019D860 + 5);
                                        v1090[6] = *((_OWORD *)&xmmword_18019D860 + 6);
                                        v1090[7] = *((_OWORD *)&xmmword_18019D860 + 7);
                                        v1090[8] = *((_OWORD *)&xmmword_18019D860 + 8);
                                        v1090[9] = *((_OWORD *)&xmmword_18019D860 + 9);
                                        v1086[8] = 8;
                                        v1091 = GetProcessHeap();
                                        v1092 = HeapAlloc(v1091, 8u, 8uLL);
                                        if ( v1092 )
                                        {
                                          *((_QWORD *)v1086 + 5) = v1092;
                                          v1020 = 0;
                                          *v1092 = qword_18019D900;
                                          v1019 = v1086;
                                          v1086 = 0LL;
                                        }
                                        else
                                        {
LABEL_1433:
                                          v1020 = -1073741801;
                                        }
                                        if ( v1086 )
                                        {
                                          v1093 = (void *)*((_QWORD *)v1086 + 1);
                                          if ( v1093 )
                                          {
                                            v1094 = GetProcessHeap();
                                            HeapFree(v1094, 0, v1093);
                                            *((_QWORD *)v1086 + 1) = 0LL;
                                          }
                                          v1095 = (void *)*((_QWORD *)v1086 + 3);
                                          if ( v1095 )
                                          {
                                            v1096 = GetProcessHeap();
                                            HeapFree(v1096, 0, v1095);
                                            *((_QWORD *)v1086 + 3) = 0LL;
                                          }
                                          v1097 = (void *)*((_QWORD *)v1086 + 5);
                                          if ( v1097 )
                                          {
                                            v1098 = GetProcessHeap();
                                            HeapFree(v1098, 0, v1097);
                                            *((_QWORD *)v1086 + 5) = 0LL;
                                          }
                                          v1099 = GetProcessHeap();
                                          HeapFree(v1099, 0, v1086);
                                        }
                                      }
                                      else
                                      {
                                        v1020 = -1073741801;
                                      }
                                      if ( v1020 >= 0 )
                                      {
                                        v1488 = v1019;
                                        v1019 = 0LL;
                                      }
                                    }
                                    else
                                    {
                                      v1020 = -1073741823;
                                    }
                                    v1100 = v1548;
                                    if ( v1548 )
                                    {
                                      v1101 = GetProcessHeap();
                                      HeapFree(v1101, 0, v1100);
                                      v1548 = 0LL;
                                    }
                                    if ( v1019 )
                                    {
                                      v1102 = (void *)v1019[1];
                                      if ( v1102 )
                                      {
                                        v1103 = GetProcessHeap();
                                        HeapFree(v1103, 0, v1102);
                                        v1019[1] = 0LL;
                                      }
                                      v1104 = (void *)v1019[3];
                                      if ( v1104 )
                                      {
                                        v1105 = GetProcessHeap();
                                        HeapFree(v1105, 0, v1104);
                                        v1019[3] = 0LL;
                                      }
                                      v1106 = (void *)v1019[5];
                                      if ( v1106 )
                                      {
                                        v1107 = GetProcessHeap();
                                        HeapFree(v1107, 0, v1106);
                                        v1019[5] = 0LL;
                                      }
                                      v1108 = GetProcessHeap();
                                      HeapFree(v1108, 0, v1019);
                                    }
                                  }
                                  else
                                  {
                                    v1020 = -1073741811;
                                  }
                                  v1018 = v1020 | 0x10000000;
                                  if ( v1018 < 0 )
                                    goto LABEL_1520;
                                  v1109 = (const void **)v1488;
                                  v1408 = 4;
                                  v1111 = sub_18005F608(4LL, *(unsigned int *)v1488, &v1408);
                                  if ( v1111 < 0
                                    || (v1111 = sub_18005F608(v1408, v1110, &v1408), v1111 < 0)
                                    || (v1111 = sub_18005F608(v1408, *((unsigned int *)v1109 + 4), &v1408), v1111 < 0)
                                    || (v1111 = sub_18005F608(v1408, 4LL, &v1408), v1111 < 0) )
                                  {
                                    v1113 = v1444;
                                  }
                                  else
                                  {
                                    v1111 = sub_18005F608(v1408, *((unsigned int *)v1109 + 8), &v1408);
                                    v1113 = v1444;
                                    if ( v1111 >= 0 )
                                      v1113 = v1408;
                                    v1444 = v1113;
                                  }
                                  if ( v1111 >= 0 )
                                  {
                                    v1114 = v1113;
                                    v1115 = GetProcessHeap();
                                    v1116 = HeapAlloc(v1115, 8u, v1114);
                                    v1117 = v1116;
                                    v1112 = 0LL;
                                    if ( v1116 )
                                    {
                                      v1418 = v1116;
                                      *v1116 = *(_DWORD *)v1109;
                                      v1111 = sub_18005F628(v1116, 4LL, &v1418);
                                      if ( v1111 >= 0 )
                                      {
                                        memcpy(v1418, v1109[1], *(unsigned int *)v1109);
                                        v1111 = sub_18005F628(v1418, *(unsigned int *)v1109, &v1418);
                                        v1112 = 0LL;
                                        if ( v1111 >= 0 )
                                        {
                                          v1118 = v1418;
                                          *(_DWORD *)v1418 = *((_DWORD *)v1109 + 4);
                                          v1111 = sub_18005F628(v1118, 4LL, &v1418);
                                          if ( v1111 >= 0 )
                                          {
                                            memcpy(v1418, v1109[3], *((unsigned int *)v1109 + 4));
                                            v1111 = sub_18005F628(v1418, *((unsigned int *)v1109 + 4), &v1418);
                                            v1112 = 0LL;
                                            if ( v1111 >= 0 )
                                            {
                                              v1119 = v1418;
                                              *(_DWORD *)v1418 = *((_DWORD *)v1109 + 8);
                                              v1111 = sub_18005F628(v1119, 4LL, &v1418);
                                              if ( v1111 >= 0 )
                                              {
                                                memcpy(v1418, v1109[5], *((unsigned int *)v1109 + 8));
                                                v1111 = sub_18005F628(v1418, *((unsigned int *)v1109 + 8), &v1418);
                                                v1112 = 0LL;
                                                if ( v1111 >= 0 )
                                                {
                                                  v1419 = (SIZE_T)v1117;
                                                  v1117 = 0LL;
                                                  v1352 = v1444;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      if ( v1117 )
                                      {
                                        v1120 = GetProcessHeap();
                                        HeapFree(v1120, 0, v1117);
                                        v1112 = 0LL;
                                      }
                                    }
                                    else
                                    {
                                      v1111 = -1073741801;
                                    }
                                  }
                                  v1018 = v1111 | 0x10000000;
                                  if ( v1018 < 0 )
                                    goto LABEL_1520;
                                  v1605 = v1112;
                                  v1529 = (unsigned int)v1112;
                                  v1606 = v1112;
                                  v1530 = (unsigned int)v1112;
                                  v1450 = 8;
                                  v1121 = sub_18005F608(8LL, v1375, &v1450);
                                  v1018 = v1121 | 0x10000000;
                                  if ( v1121 >= 0 )
                                  {
                                    v1123 = (v1450 + 7) & 0xFFFFFFF8;
                                    if ( v1123 >= v1450 )
                                    {
                                      v1464 = (v1450 + 7) & 0xFFFFFFF8;
                                      v1018 = sub_18005F608(v1123, v1122, &v1464);
                                      v1124 = v1465;
                                      if ( v1018 >= 0 )
                                        v1124 = v1464;
                                      v1465 = v1124;
                                    }
                                    else
                                    {
                                      v1018 = -1073741675;
                                    }
                                    if ( v1018 >= 0 )
                                    {
                                      if ( !v1401 || (unsigned int)v1400 <= 1 )
                                        goto LABEL_1488;
                                      v1125 = (unsigned int *)v1401;
                                      v1441 = (unsigned int *)v1401;
                                      v1126 = 0;
                                      while ( 1 )
                                      {
                                        v1127 = *v1125;
                                        v1018 = sub_18005F628(v1125, 4LL, &v1441);
                                        if ( v1018 < 0 )
                                          break;
                                        v1018 = sub_18005F628(v1441, v1127, &v1441);
                                        if ( v1018 < 0 )
                                          break;
                                        ++v1126;
                                        v1125 = v1441;
                                        if ( v1126 )
                                        {
                                          v1128 = *v1441;
                                          v1018 = sub_18005F628(v1441, 4LL, &v1441);
                                          if ( v1018 >= 0 )
                                          {
                                            v1529 = v1128;
                                            v1129 = v1441;
                                            if ( !v1128 )
                                              v1129 = 0LL;
                                            v1441 = v1129;
                                            v1605 = v1129;
                                          }
                                          break;
                                        }
                                      }
                                      if ( v1018 < 0 )
                                        goto LABEL_1560;
                                      if ( (unsigned int)v1400 <= 2 )
                                      {
LABEL_1488:
                                        v1018 = -1073741811;
                                        goto LABEL_1560;
                                      }
                                      v1130 = (unsigned int *)v1401;
                                      v1438 = (unsigned int *)v1401;
                                      v1131 = 0;
                                      while ( 1 )
                                      {
                                        v1132 = *v1130;
                                        v1018 = sub_18005F628(v1130, 4LL, &v1438);
                                        if ( v1018 < 0 )
                                          break;
                                        v1018 = sub_18005F628(v1438, v1132, &v1438);
                                        if ( v1018 < 0 )
                                          break;
                                        ++v1131;
                                        v1130 = v1438;
                                        if ( v1131 >= 2 )
                                        {
                                          v1134 = *v1438;
                                          v1018 = sub_18005F628(v1438, 4LL, &v1438);
                                          if ( v1018 >= 0 )
                                          {
                                            v1530 = v1134;
                                            v1135 = v1438;
                                            if ( !v1134 )
                                              v1135 = 0LL;
                                            v1438 = v1135;
                                            v1606 = v1135;
                                          }
                                          break;
                                        }
                                      }
                                      if ( v1018 >= 0 )
                                      {
                                        v1409 = 4;
                                        v1018 = sub_18005F608(4LL, v1133, &v1409);
                                        if ( v1018 < 0
                                          || (v1018 = sub_18005F608(v1409, v1136, &v1409), v1018 < 0)
                                          || (v1018 = sub_18005F608(v1409, v1137, &v1409), v1018 < 0)
                                          || (v1018 = sub_18005F608(v1409, v1138, &v1409), v1018 < 0) )
                                        {
                                          v1140 = v1466;
                                        }
                                        else
                                        {
                                          v1018 = sub_18005F608(v1409, v1139, &v1409);
                                          v1140 = v1466;
                                          if ( v1018 >= 0 )
                                            v1140 = v1409;
                                          v1466 = v1140;
                                        }
                                        if ( v1018 < 0 )
                                          goto LABEL_1520;
                                        if ( v1140 > 0x400000 )
                                        {
                                          v1018 = -2147418113;
LABEL_1520:
                                          v1005 = v1384;
LABEL_1521:
                                          v1141 = v1402;
                                          if ( v1402 )
                                          {
                                            v1142 = GetProcessHeap();
                                            HeapFree(v1142, 0, v1141);
                                          }
                                          v1143 = v1488;
                                          if ( v1488 )
                                          {
                                            v1144 = (void *)*((_QWORD *)v1488 + 1);
                                            if ( v1144 )
                                            {
                                              v1145 = GetProcessHeap();
                                              HeapFree(v1145, 0, v1144);
                                              v1143[1] = 0LL;
                                            }
                                            v1146 = (void *)v1143[3];
                                            if ( v1146 )
                                            {
                                              v1147 = GetProcessHeap();
                                              HeapFree(v1147, 0, v1146);
                                              v1143[3] = 0LL;
                                            }
                                            v1148 = (void *)v1143[5];
                                            if ( v1148 )
                                            {
                                              v1149 = GetProcessHeap();
                                              HeapFree(v1149, 0, v1148);
                                              v1143[5] = 0LL;
                                            }
                                            v1150 = GetProcessHeap();
                                            HeapFree(v1150, 0, v1143);
                                            v1488 = 0LL;
                                          }
                                          v1151 = (void *)v1419;
                                          if ( v1419 )
                                          {
                                            v1152 = GetProcessHeap();
                                            HeapFree(v1152, 0, v1151);
                                          }
                                          v1153 = v1399;
                                          if ( v1399 )
                                          {
                                            v1154 = GetProcessHeap();
                                            HeapFree(v1154, 0, v1153);
                                          }
                                          if ( v1004 )
                                          {
                                            v1155 = (void *)v1004[1];
                                            if ( v1155 )
                                            {
                                              v1156 = GetProcessHeap();
                                              HeapFree(v1156, 0, v1155);
                                              v1004[1] = 0LL;
                                            }
                                            v1157 = (void *)v1004[3];
                                            if ( v1157 )
                                            {
                                              v1158 = GetProcessHeap();
                                              HeapFree(v1158, 0, v1157);
                                              v1004[3] = 0LL;
                                            }
                                            v1159 = (void *)v1004[5];
                                            if ( v1159 )
                                            {
                                              v1160 = GetProcessHeap();
                                              HeapFree(v1160, 0, v1159);
                                              v1004[5] = 0LL;
                                            }
                                            v1161 = GetProcessHeap();
                                            HeapFree(v1161, 0, v1004);
                                          }
                                          if ( v1005 )
                                          {
                                            v1162 = GetProcessHeap();
                                            HeapFree(v1162, 0, v1005);
                                          }
                                          if ( v1018 >= 0 )
                                          {
                                            if ( LODWORD(v1502[0]) )
                                            {
                                              v1163 = (unsigned int *)v1502[1];
                                              if ( v1502[1] )
                                              {
                                                v1549 = v1502[1];
                                                if ( (int)sub_18005F628(v1502[1], 4LL, &v1549) >= 0 )
                                                {
                                                  v1614 = v1165;
                                                  v1167 = v1549;
                                                  if ( !v1165 )
                                                    v1167 = v1166;
                                                  v1549 = v1167;
                                                  v1632 = v1167;
                                                  if ( v1165 == 4 )
                                                  {
                                                    v1595 = *v1167;
                                                    if ( v1595 >= 0 && v1164 > 1 )
                                                    {
                                                      for ( ii = v1163;
                                                            (int)sub_18005F628(v1163, 4LL, &ii) >= 0
                                                         && (int)sub_18005F628(ii, *v1163, &ii) >= 0;
                                                            v1163 = ii )
                                                      {
                                                        if ( v1168 != -1 )
                                                        {
                                                          v1296 = *ii;
                                                          if ( (int)sub_18005F628(ii, 4LL, &ii) >= 0 )
                                                          {
                                                            v1596 = v1296;
                                                            v1298 = ii;
                                                            if ( !v1296 )
                                                              v1298 = v1297;
                                                            ii = v1298;
                                                            v1633 = v1298;
                                                            if ( v1296 == 8 )
                                                              v1634 = *(_QWORD *)v1298;
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
                                          v508 = (void *)v1393;
                                          goto LABEL_1726;
                                        }
                                        LODWORD(v1414) = v1140;
                                      }
                                    }
                                  }
LABEL_1560:
                                  if ( v1018 < 0 )
                                    goto LABEL_1520;
                                  v1169 = v1414;
                                  v1170 = GetProcessHeap();
                                  v1171 = (int *)HeapAlloc(v1170, 8u, v1169);
                                  if ( v1171 )
                                  {
                                    v1172 = v1171;
                                    v1399 = v1171;
                                    v1018 = 0x10000000;
                                  }
                                  else
                                  {
                                    v1018 = -805306345;
                                    v1172 = 0LL;
                                  }
                                  if ( v1018 >= 0 )
                                  {
                                    if ( v1419 && v1172 )
                                    {
                                      v1620[0] = v1419;
                                      v1621 = v1352;
                                      v1620[1] = v1172;
                                      v1622 = v1414;
                                      v1623 = 0;
                                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                        && (v1175 = (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                                      {
                                        v1176 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1175)(134LL, v1620);
                                        v1018 = v1176 | 0x10000000;
                                        v1174 = v1414;
                                        if ( v1176 >= 0 )
                                          v1174 = v1622;
                                        LODWORD(v1414) = v1174;
                                      }
                                      else
                                      {
                                        v1173 = GetLastError();
                                        v1018 = v1173;
                                        if ( v1173 > 0 )
                                          v1018 = (unsigned __int16)v1173 | 0x80070000;
                                        if ( v1018 >= 0 )
                                          v1018 = -2147467259;
                                        v1174 = v1414;
                                      }
                                      v1177 = 0LL;
                                      if ( v1018 == -805306333 )
                                      {
                                        v1018 = -2147024774;
LABEL_1581:
                                        v1005 = 0LL;
                                        goto LABEL_1521;
                                      }
                                      if ( v1018 < 0 )
                                        goto LABEL_1581;
                                      v1403 = 0LL;
                                      v1396 = 0;
                                      v1433 = v1172;
                                      if ( v1174 < 4 )
                                        goto LABEL_1584;
                                      v1338 = *v1172;
                                      v1178 = sub_18005F628(v1172, 4LL, &v1433);
                                      if ( v1178 < 0 || (v1178 = sub_18005F608(0LL, 4LL, &v1396), v1178 < 0) )
                                      {
LABEL_1639:
                                        v1018 = v1178 | 0x10000000;
                                        if ( v1018 < 0 )
                                          goto LABEL_1520;
                                        v1218 = v1177;
                                        v1454 = v1177;
                                        v1219 = (unsigned int)v1177;
                                        v1403 = v1177;
                                        if ( !v1004
                                          || (v1394 = (const WCHAR *)v1004[1]) == 0LL
                                          || *(_DWORD *)v1004 == (_DWORD)v1177 )
                                        {
                                          v1018 = -805306355;
                                          goto LABEL_1520;
                                        }
                                        v1376 = (int)v1177;
                                        if ( *(_DWORD *)v1004 )
                                        {
                                          v1220 = *(unsigned int *)v1004 - 8LL;
                                          v1422 = v1220;
                                          v1221 = (void *)sub_180055F40(v1220);
                                          v1429 = v1221;
                                          LODWORD(v1177) = 0;
                                          if ( v1221 )
                                          {
                                            v1222 = 0;
                                            v1661 = 0x7F1137FAB69605ELL;
                                            v1223 = v1394;
                                            v1224 = v1221;
                                            v1225 = v1220 & 7;
                                            v1333 = 0;
                                            if ( (v1220 & 7) != 0 )
                                            {
                                              v1427 = 0;
                                              v1226 = 0;
                                              v1227 = 56;
                                              do
                                              {
                                                v1228 = *(unsigned __int8 *)v1223;
                                                v1223 = (const WCHAR *)((char *)v1223 + 1);
                                                if ( (int)v1177 >= 4 )
                                                {
                                                  v1229 = (v1228 << v1227) | v1427;
                                                  v1427 = v1229;
                                                }
                                                else
                                                {
                                                  v1226 |= v1228 << (v1227 - 32);
                                                  v1229 = v1427;
                                                }
                                                LODWORD(v1177) = (_DWORD)v1177 + 1;
                                                v1227 -= 8;
                                              }
                                              while ( (int)v1177 < v1225 );
                                              v1333 = v1226;
                                              v84 = v1305;
                                              v1230 = v1226 ^ 0x92F65A5;
                                              v1231 = v1229 ^ 0x699A899C;
                                              v1232 = v1230;
                                              v1233 = v1231;
                                              if ( (v1220 & 7) != 0 )
                                              {
                                                v1234 = 0;
                                                do
                                                {
                                                  v1410 = v1224 + 1;
                                                  if ( v1234 >= 4 )
                                                  {
                                                    v1233 = __ROL4__(v1233, 8);
                                                    v1235 = v1233;
                                                  }
                                                  else
                                                  {
                                                    v1232 = __ROL4__(v1232, 8);
                                                    v1235 = v1232;
                                                  }
                                                  *v1224 = v1235;
                                                  ++v1234;
                                                  v1224 = v1410;
                                                }
                                                while ( v1234 < v1225 );
                                                v84 = v1305;
                                                v1219 = (unsigned int)v1403;
                                              }
                                              if ( (unsigned int)v1225 <= 4 )
                                              {
                                                LODWORD(v1177) = 0;
                                                if ( (unsigned int)v1225 < 4 )
                                                  v1230 = v1230 >> (8 * (4 - v1225)) << (8 * (4 - v1225));
                                              }
                                              else
                                              {
                                                LODWORD(v1177) = v1231 >> (8 * (8 - v1225)) << (8 * (8 - v1225));
                                              }
                                            }
                                            else
                                            {
                                              v1230 = 0;
                                            }
                                            v1410 = (void *)(v1220 >> 3);
                                            if ( v1220 >> 3 )
                                            {
                                              v1236 = HIDWORD(v1661);
                                              v1237 = WORD2(v1661);
                                              v1324 = WORD2(v1661);
                                              v1238 = HIDWORD(v1661) ^ 0xAB69605E;
                                              v1389 = HIWORD(v1661);
                                              v1353 = WORD1(v1661);
                                              v1239 = v1224 + 7;
                                              v1240 = (unsigned __int8 *)(v1223 + 1);
                                              v1241 = v1333;
                                              v1242 = (char *)v1410;
                                              do
                                              {
                                                v1243 = v1240[1] | ((*v1240 | ((*(v1240 - 1) | (*(v1240 - 2) << 8)) << 8)) << 8);
                                                v1244 = v1240[5] | ((v1240[4] | ((v1240[3] | (v1240[2] << 8)) << 8)) << 8);
                                                v1245 = v1243 ^ v1230;
                                                v1240 += 8;
                                                v1246 = v1245 ^ v1238 ^ v1244 ^ (unsigned int)v1177;
                                                v1247 = (v1237 * __ROL4__(v1246 + 1419157410, 5) + __ROL4__(v1246, 10)) ^ v1245;
                                                v1248 = (v1353 * __ROR4__(v1236 + v1247, 9) - __ROL4__(v1247, 2)) ^ v1246;
                                                v1249 = (24670 * (v1248 - v1237) - (v1248 >> 13)) ^ v1247;
                                                v1250 = (v1389 * __ROL4__(WORD1(v1661) ^ v1249, 6) - __ROL4__(v1249, 2)) ^ v1248;
                                                v1251 = (v1236 - (v1250 ^ 0xAB69605E)) ^ v1249;
                                                v1252 = (WORD1(v1661) * (v1237 ^ v1251)) ^ __ROR4__(v1251, 6) ^ v1250;
                                                v1253 = (24670 * __ROR4__(v1236 + v1252, 15) + __ROL4__(v1252, 2)) ^ v1251;
                                                v1254 = (HIWORD(v1661) * __ROR4__(v1253 + 1419157410, 14)
                                                       - __ROL4__(v1253, 8)) ^ v1252;
                                                v1255 = (__ROR4__(v1254 ^ 0xAB69605E, 12) * v1324) ^ __ROR4__(v1254, 10) ^ v1253;
                                                v1256 = (v1255 >> 10) ^ (WORD1(v1661) * (HIWORD(v1661) ^ v1255)) ^ v1254;
                                                v1257 = (HIWORD(v1661) * (__ROR4__(~v1256, 5) + 24670)) ^ v1255;
                                                v1258 = (v1257 - HIWORD(v1661)) ^ 0xAB69605E ^ v1256;
                                                v1259 = ((v1258 >> 2) + __ROL4__(v1258 ^ HIWORD(v1661), 2) * v1324) ^ v1257;
                                                v1260 = (v1353 * __ROR4__(v1259 - v1236, 6) + __ROL4__(v1259, 7)) ^ v1258;
                                                v1261 = (24670 * (v1260 ^ v1324) + __ROR4__(v1260, 9)) ^ v1259;
                                                v1262 = (v1389 * __ROL4__(v1261 ^ WORD1(v1661), 5) + __ROL4__(v1261, 7)) ^ v1260;
                                                v1263 = v1262 ^ v1238 ^ v1261;
                                                v1264 = (v1324 * (__ROR4__(v1263, 3) - WORD1(v1661))) ^ v1262;
                                                v1265 = (24670 * __ROR4__(v1264 - v1236, 1) - __ROR4__(v1264, 6)) ^ v1263;
                                                v1266 = (HIWORD(v1661) * __ROL4__(v1265 - 1419157410, 3)
                                                       + __ROL4__(v1265, 14)) ^ v1264;
                                                v1267 = (__ROL4__(v1266 - 1419157410, 15) * v1324 - __ROR4__(v1266, 14)) ^ v1265;
                                                v1268 = (v1267 >> 3) ^ (WORD1(v1661) * (v1267 ^ 0x605E)) ^ v1266;
                                                v1269 = v1241 ^ (24670 * __ROL4__(v1268 ^ v1236, 4)) ^ __ROL4__(v1268, 2) ^ v1267;
                                                v1270 = v1427 ^ v1268;
                                                *(v1239 - 4) = v1269;
                                                v1271 = __ROR4__(v1269, 8);
                                                *v1239 = v1270;
                                                v1272 = __ROR4__(v1270, 8);
                                                *(v1239 - 5) = v1271;
                                                v1273 = __ROR4__(v1271, 8);
                                                *(v1239 - 1) = v1272;
                                                v1274 = __ROR4__(v1272, 8);
                                                *(v1239 - 6) = v1273;
                                                v1275 = __ROR4__(v1273, 8);
                                                *(v1239 - 2) = v1274;
                                                v1276 = __ROR4__(v1274, 8);
                                                *(v1239 - 7) = v1275;
                                                *(v1239 - 3) = v1276;
                                                v1230 = __ROR4__(v1275, 8);
                                                LODWORD(v1177) = __ROR4__(v1276, 8);
                                                v1241 = v1243;
                                                v1427 = v1244;
                                                v1239 += 8;
                                                --v1242;
                                                v1237 = v1324;
                                              }
                                              while ( v1242 );
                                              v1222 = 0;
                                              v84 = v1305;
                                              v1004 = v1430;
                                              v1219 = (unsigned int)v1403;
                                              v1220 = v1422;
                                              v1221 = v1429;
                                            }
                                            LODWORD(v1177) = 0;
                                            for ( jj = 0LL; jj < v1220; ++jj )
                                              v1222 ^= *((_BYTE *)v1221 + jj);
                                            if ( v1222 == *(_QWORD *)((char *)v1394 + v1220) )
                                            {
                                              v1218 = (int *)v1221;
                                              v1454 = (int *)v1221;
                                              v1221 = 0LL;
                                              v1219 = v1220;
                                              v1278 = v1376;
                                            }
                                            else
                                            {
                                              v1278 = -1073425151;
                                              v1218 = v1454;
                                            }
                                            if ( v1221 )
                                            {
                                              sub_180033A70(v1221);
                                              v1218 = v1454;
                                              LODWORD(v1177) = 0;
                                            }
                                            if ( v1278 >= 0 )
                                            {
                                              v1005 = v1218;
                                              v1384 = v1218;
                                              v1218 = 0LL;
                                              v1454 = 0LL;
                                              v1443 = v1219;
                                              v1018 = 0x10000000;
LABEL_1679:
                                              if ( v1218 )
                                              {
                                                v1279 = GetProcessHeap();
                                                HeapFree(v1279, 0, v1218);
                                                LODWORD(v1177) = 0;
                                                v1454 = 0LL;
                                                v1219 = v1443;
                                              }
                                              if ( v1018 < 0 )
                                                goto LABEL_1521;
                                              v1428 = (unsigned int)v1177;
                                              v1487 = v1005;
                                              if ( v1219 < 4 )
                                                goto LABEL_1683;
                                              v1339 = *v1005;
                                              v1280 = sub_18005F628(v1005, 4LL, &v1487);
                                              if ( v1280 < 0 )
                                                goto LABEL_1719;
                                              v1280 = sub_18005F608(0LL, v1281, &v1428);
                                              if ( v1280 < 0 )
                                                goto LABEL_1719;
                                              if ( v1219 - v1428 < (unsigned int)v1282 )
                                              {
LABEL_1683:
                                                v1280 = -1073741762;
LABEL_1719:
                                                v1018 = v1280 | 0x10000000;
                                                goto LABEL_1521;
                                              }
                                              v1283 = *(unsigned int *)v1487;
                                              v1280 = sub_18005F628(v1487, v1282, &v1487);
                                              if ( v1280 < 0 || (v1280 = sub_18005F608(v1428, v1284, &v1428), v1280 < 0) )
                                              {
LABEL_1718:
                                                v1005 = v1384;
                                                goto LABEL_1719;
                                              }
                                              if ( v1219 - v1428 < (unsigned int)v1283 )
                                                goto LABEL_1717;
                                              v1280 = sub_18005F608(v1428, (unsigned int)v1283, &v1428);
                                              if ( v1280 < 0 )
                                                goto LABEL_1718;
                                              v1286 = v1487;
                                              if ( (char *)v1384 + v1219 < (char *)v1487 + v1283
                                                || (unsigned __int64)v1219 + (char *)v1384 - v1283 - (_BYTE *)v1487 >= 8 )
                                              {
LABEL_1717:
                                                v1280 = -1073741762;
                                                goto LABEL_1718;
                                              }
                                              v1287 = v1285;
                                              v1280 = (int)v1285;
                                              v1334 = (int)v1285;
                                              if ( v1487 )
                                              {
                                                v1280 = sub_18005F628(v1487, (unsigned int)v1283, &v1608);
                                                if ( v1280 < 0 )
                                                  goto LABEL_1714;
                                                v1289 = v1608;
                                                if ( (unsigned __int64)v1286 < v1608 )
                                                {
                                                  do
                                                  {
                                                    v1280 = sub_18005F628(v1288, 4LL, &v1609);
                                                    if ( v1280 < 0 )
                                                      goto LABEL_1714;
                                                    if ( v1609 > v1291 )
                                                      goto LABEL_1708;
                                                    v1292 = sub_18005F608(4LL, *v1290, &v1531);
                                                    v1280 = v1292;
                                                    if ( v1292 >= 0 )
                                                      v1294 = v1531;
                                                    v1451 = v1294;
                                                    if ( v1292 < 0 )
                                                      goto LABEL_1714;
                                                    v1280 = sub_18005F628(v1293, v1294, &v1610);
                                                    if ( v1280 < 0 )
                                                      goto LABEL_1714;
                                                    v1288 = v1610;
                                                    if ( v1610 > v1289 )
                                                      goto LABEL_1708;
                                                    ++v1334;
                                                  }
                                                  while ( v1610 < v1289 );
                                                }
                                                if ( v1288 != v1289 )
                                                {
LABEL_1708:
                                                  v1280 = -1073741811;
                                                  goto LABEL_1718;
                                                }
                                              }
                                              if ( (_DWORD)v1283 )
                                              {
                                                v1295 = GetProcessHeap();
                                                v1287 = HeapAlloc(v1295, 8u, v1283);
                                                if ( !v1287 )
                                                {
                                                  v1280 = -1073741801;
                                                  goto LABEL_1714;
                                                }
                                                v1280 = 0;
                                              }
                                              if ( v1286 )
                                                memcpy(v1287, v1286, v1283);
                                              v1502[1] = v1287;
                                              LODWORD(v1502[0]) = v1334;
LABEL_1714:
                                              if ( v1280 >= 0 )
                                              {
                                                v1005 = v1384;
                                                if ( v1339 == LODWORD(v1502[0]) )
                                                  goto LABEL_1719;
                                                goto LABEL_1683;
                                              }
                                              goto LABEL_1718;
                                            }
                                          }
                                          else
                                          {
                                            v1218 = v1454;
                                          }
                                        }
                                        v1018 = -805306367;
                                        v1219 = v1443;
                                        v1005 = v1384;
                                        goto LABEL_1679;
                                      }
                                      if ( v1179 - v1396 < (unsigned int)v1180 )
                                        goto LABEL_1584;
                                      v1410 = v1433;
                                      v1422 = v1180;
                                      v1178 = sub_18005F628(v1433, (unsigned int)v1180, &v1433);
                                      if ( v1178 < 0 )
                                        goto LABEL_1639;
                                      v1178 = sub_18005F608(v1396, v1181, &v1396);
                                      if ( v1178 < 0 )
                                        goto LABEL_1639;
                                      if ( v1182 - v1396 < 4 )
                                        goto LABEL_1584;
                                      v1183 = *(unsigned int *)v1433;
                                      v1178 = sub_18005F628(v1433, 4LL, &v1433);
                                      if ( v1178 < 0 )
                                        goto LABEL_1639;
                                      v1178 = sub_18005F608(v1396, 4LL, &v1396);
                                      if ( v1178 < 0 )
                                        goto LABEL_1639;
                                      if ( v1184 - v1396 < (unsigned int)v1183 )
                                        goto LABEL_1584;
                                      v1429 = v1433;
                                      v1178 = sub_18005F628(v1433, (unsigned int)v1183, &v1433);
                                      if ( v1178 < 0 )
                                        goto LABEL_1639;
                                      v1178 = sub_18005F608(v1396, (unsigned int)v1183, &v1396);
                                      if ( v1178 < 0 )
                                        goto LABEL_1639;
                                      if ( v1185 - v1396 < 4 )
                                        goto LABEL_1584;
                                      v1186 = *(unsigned int *)v1433;
                                      v1178 = sub_18005F628(v1433, 4LL, &v1433);
                                      if ( v1178 < 0 )
                                        goto LABEL_1639;
                                      v1178 = sub_18005F608(v1396, 4LL, &v1396);
                                      if ( v1178 < 0 )
                                        goto LABEL_1639;
                                      if ( v1187 - v1396 < (unsigned int)v1186 )
                                        goto LABEL_1584;
                                      v1178 = sub_18005F608(v1396, (unsigned int)v1186, &v1396);
                                      if ( v1178 < 0 )
                                        goto LABEL_1639;
                                      if ( v1188 != v1396 || (unsigned int)(v1189 + v1183 + v1186) + 12LL != v1188 )
                                      {
LABEL_1584:
                                        v1178 = -1073741762;
                                        goto LABEL_1639;
                                      }
                                      v1190 = GetProcessHeap();
                                      v1191 = HeapAlloc(v1190, 8u, 0x30uLL);
                                      v1192 = v1191;
                                      v1177 = 0LL;
                                      if ( !v1191 )
                                      {
                                        v1178 = -1073741801;
LABEL_1627:
                                        v1210 = 0LL;
                                        if ( v1178 < 0 )
                                          v1210 = v1403;
                                        v1004 = v1403;
                                        if ( v1178 < 0 )
                                          v1004 = 0LL;
                                        v1430 = v1004;
                                        if ( v1210 )
                                        {
                                          v1211 = (void *)v1210[1];
                                          if ( v1211 )
                                          {
                                            v1212 = GetProcessHeap();
                                            HeapFree(v1212, 0, v1211);
                                            v1210[1] = 0LL;
                                          }
                                          v1213 = (void *)v1210[3];
                                          if ( v1213 )
                                          {
                                            v1214 = GetProcessHeap();
                                            HeapFree(v1214, 0, v1213);
                                            v1210[3] = 0LL;
                                          }
                                          v1215 = (void *)v1210[5];
                                          if ( v1215 )
                                          {
                                            v1216 = GetProcessHeap();
                                            HeapFree(v1216, 0, v1215);
                                            v1210[5] = 0LL;
                                          }
                                          v1217 = GetProcessHeap();
                                          HeapFree(v1217, 0, v1210);
                                          v1430 = v1004;
                                          v1177 = 0LL;
                                        }
                                        goto LABEL_1639;
                                      }
                                      v1193 = v1410;
                                      if ( v1410 )
                                      {
                                        *(_DWORD *)v1191 = v1338;
                                        v1194 = GetProcessHeap();
                                        v1195 = v1422;
                                        v1196 = HeapAlloc(v1194, 8u, v1422);
                                        v1177 = 0LL;
                                        if ( !v1196 )
                                        {
LABEL_1607:
                                          v1178 = -1073741801;
                                          goto LABEL_1619;
                                        }
                                        v1192[1] = v1196;
                                        memcpy(v1196, v1193, v1195);
                                        v1177 = 0LL;
                                      }
                                      else
                                      {
                                        *(_DWORD *)v1191 = 0;
                                        v1191[1] = 0LL;
                                      }
                                      v1197 = v1429;
                                      if ( v1429 )
                                      {
                                        *((_DWORD *)v1192 + 4) = v1183;
                                        v1198 = GetProcessHeap();
                                        v1199 = HeapAlloc(v1198, 8u, v1183);
                                        v1177 = 0LL;
                                        if ( !v1199 )
                                          goto LABEL_1607;
                                        v1192[3] = v1199;
                                        memcpy(v1199, v1197, v1183);
                                        v1177 = 0LL;
                                      }
                                      else
                                      {
                                        *((_DWORD *)v1192 + 4) = 0;
                                        v1192[3] = 0LL;
                                      }
                                      v1200 = v1433;
                                      if ( v1433 )
                                      {
                                        *((_DWORD *)v1192 + 8) = v1186;
                                        v1201 = GetProcessHeap();
                                        v1202 = HeapAlloc(v1201, 8u, v1186);
                                        v1177 = 0LL;
                                        if ( !v1202 )
                                          goto LABEL_1607;
                                        v1192[5] = v1202;
                                        memcpy(v1202, v1200, v1186);
                                        v1177 = 0LL;
                                      }
                                      else
                                      {
                                        *((_DWORD *)v1192 + 8) = 0;
                                        v1192[5] = 0LL;
                                      }
                                      v1403 = v1192;
                                      v1192 = 0LL;
                                      v1178 = 0;
LABEL_1619:
                                      if ( v1192 )
                                      {
                                        v1203 = (void *)v1192[1];
                                        if ( v1203 )
                                        {
                                          v1204 = GetProcessHeap();
                                          HeapFree(v1204, 0, v1203);
                                          v1192[1] = 0LL;
                                        }
                                        v1205 = (void *)v1192[3];
                                        if ( v1205 )
                                        {
                                          v1206 = GetProcessHeap();
                                          HeapFree(v1206, 0, v1205);
                                          v1192[3] = 0LL;
                                        }
                                        v1207 = (void *)v1192[5];
                                        if ( v1207 )
                                        {
                                          v1208 = GetProcessHeap();
                                          HeapFree(v1208, 0, v1207);
                                          v1192[5] = 0LL;
                                        }
                                        v1209 = GetProcessHeap();
                                        HeapFree(v1209, 0, v1192);
                                        v1177 = 0LL;
                                      }
                                      goto LABEL_1627;
                                    }
                                    v1018 = -2147024809;
                                  }
                                  v1005 = 0LL;
                                  goto LABEL_1521;
                                }
                              }
                            }
LABEL_1726:
                            v956 = v1363;
                            goto LABEL_1727;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_1357:
          v956 = v959;
        }
LABEL_1727:
        v1400 = 0LL;
        v1299 = v1401;
        if ( v1401 )
        {
          v1300 = GetProcessHeap();
          HeapFree(v1300, 0, v1299);
          v1401 = 0LL;
        }
        v1502[0] = 0LL;
        v1301 = v1502[1];
        if ( v1502[1] )
        {
          v1302 = GetProcessHeap();
          HeapFree(v1302, 0, v1301);
          v1502[1] = 0LL;
        }
        if ( v956 )
        {
          v1303 = GetProcessHeap();
          HeapFree(v1303, 0, v956);
        }
        if ( v508 )
        {
          v1304 = GetProcessHeap();
          HeapFree(v1304, 0, v508);
        }
      }
LABEL_1735:
      v1597 = v1467;
      v85 = v1468;
      v1430 = 0LL;
      v1550 = v1411;
      goto LABEL_104;
    }
    v1426 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0F8[0])(0LL, 0LL, 1027LL);
    if ( !v1426 )
    {
      GetLastError();
      goto LABEL_1339;
    }
    qword_18019E4C0 = off_18019C098[0]();
    v510 = dword_18019E438;
    v1365 = dword_18019E438;
    memset(&v1649[4], 0, 0x70uLL);
    v1437 = 0LL;
    v1462 = 1;
    v1402 = 0LL;
    v1403 = 0LL;
    v1678 = 0LL;
    v1679 = 0LL;
    v1680 = 0LL;
    v1681 = 0;
    v1419 = 0LL;
    while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
      ;
    v511 = dword_18019E4C8;
    if ( !dword_18019E4C8 )
    {
      v1314 = 0;
      LODWORD(v1393) = 0;
      v1498 = 0LL;
      v1565 = 0LL;
      v512 = sub_180055F40(824LL);
      v1394 = (const WCHAR *)v512;
      if ( !v512 )
        goto LABEL_766;
      v513 = 0;
      v514 = -1;
      v515 = 0;
      v516 = 0;
      v517 = (_BYTE *)(v512 + 7);
      v518 = (unsigned __int8 *)&unk_18015F1E2;
      v519 = 103LL;
      do
      {
        v520 = v518[1] | ((*v518 | ((*(v518 - 1) | (*(v518 - 2) << 8)) << 8)) << 8);
        v521 = v518[5] | ((v518[4] | ((v518[3] | (v518[2] << 8)) << 8)) << 8);
        v522 = v520 ^ v516;
        v518 += 8;
        v523 = v522 ^ v515 ^ v521 ^ 0xAC987321;
        v524 = (4991 * __ROL4__(v523 + 1419157410, 5) + __ROL4__(v523, 10)) ^ v522;
        v525 = (43881 * __ROR4__(v524 + 133239679, 9) - __ROL4__(v524, 2)) ^ v523;
        v526 = (24670 * v525 - (v525 >> 13) - 123127970) ^ v524;
        v527 = (2033 * __ROL4__(v526 ^ 0xAB69, 6) - __ROL4__(v526, 2)) ^ v525;
        v528 = (133239679 - (v527 ^ 0xAB69605E)) ^ v526;
        v529 = (43881 * (v528 ^ 0x137F)) ^ __ROR4__(v528, 6) ^ v527;
        v530 = (24670 * __ROR4__(v529 + 133239679, 15) + __ROL4__(v529, 2)) ^ v528;
        v531 = (2033 * __ROR4__(v530 + 1419157410, 14) - __ROL4__(v530, 8)) ^ v529;
        v532 = (4991 * __ROR4__(v531 ^ 0xAB69605E, 12)) ^ __ROR4__(v531, 10) ^ v530;
        v533 = (v532 >> 10) ^ (43881 * (v532 ^ 0x7F1)) ^ v531;
        v534 = (2033 * (__ROR4__(~v533, 5) + 24670)) ^ v532;
        v535 = v533 ^ (v534 - 2033) ^ 0xAB69605E;
        v536 = ((v535 >> 2) + 4991 * __ROL4__(v533 ^ (v534 - 2033) ^ 0xAB6967AF, 2)) ^ v534;
        v537 = (43881 * __ROR4__(v536 - 133239679, 6) + __ROL4__(v536, 7)) ^ v535;
        v538 = (24670 * (v537 ^ 0x137F) + __ROR4__(v537, 9)) ^ v536;
        v539 = (2033 * __ROL4__(v538 ^ 0xAB69, 5) + __ROL4__(v538, 7)) ^ v537;
        v540 = v539 ^ v538 ^ 0xAC987321;
        v541 = (4991 * __ROR4__(v540, 3) - 219010071) ^ v539;
        v542 = (24670 * __ROR4__(v541 - 133239679, 1) - __ROR4__(v541, 6)) ^ v540;
        v543 = (2033 * __ROL4__(v542 - 1419157410, 3) + __ROL4__(v542, 14)) ^ v541;
        v544 = (4991 * __ROL4__(v543 - 1419157410, 15) - __ROR4__(v543, 14)) ^ v542;
        v545 = (v544 >> 3) ^ (43881 * (v544 ^ 0x605E)) ^ v543;
        v546 = v513 ^ (24670 * __ROL4__(v545 ^ 0x7F1137F, 4)) ^ __ROL4__(v545, 2) ^ v544;
        v547 = v514 ^ v545;
        *(v517 - 4) = v546;
        v548 = __ROR4__(v546, 8);
        *v517 = v547;
        v549 = __ROR4__(v547, 8);
        *(v517 - 5) = v548;
        v550 = __ROR4__(v548, 8);
        *(v517 - 1) = v549;
        v551 = __ROR4__(v549, 8);
        *(v517 - 6) = v550;
        v552 = __ROR4__(v550, 8);
        *(v517 - 2) = v551;
        v553 = __ROR4__(v551, 8);
        *(v517 - 7) = v552;
        *(v517 - 3) = v553;
        v516 = __ROR4__(v552, 8);
        v515 = __ROR4__(v553, 8);
        v513 = v520;
        v514 = v521;
        v517 += 8;
        --v519;
      }
      while ( v519 );
      v554 = 0LL;
      v555 = 0;
      v510 = v1365;
      v84 = v1305;
      v556 = 0;
      v557 = (WCHAR *)v1394;
      do
        v555 ^= *((_BYTE *)v1394 + v554++);
      while ( v554 < 0x338 );
      if ( v555 == 64LL )
      {
        v1498 = v1394;
        v557 = 0LL;
        v1565 = 824LL;
        v558 = 0;
      }
      else
      {
        v558 = -1073425151;
      }
      if ( v557 )
        sub_180033A70(v557);
      if ( v558 >= 0 )
      {
        v559 = v1498;
        HIBYTE(v1498[v1565 / 2 - 1]) = 0;
        memset(&unk_18019EA60, 0, 0x60uLL);
        while ( *(_BYTE *)v559 )
        {
          v560 = v559;
          v561 = -1LL;
          do
            ++v561;
          while ( v559[v561] );
          v562 = &v559[v561];
          v563 = (char *)&unk_18019EA60 + 24 * (unsigned int)v1393;
          if ( !GetModuleHandleExW(0, v560, (HMODULE *)v563) )
            goto LABEL_766;
          v556 = 0;
          if ( **(_WORD **)v563 == 23117
            && (v564 = *(int *)(*(_QWORD *)v563 + 60LL), (unsigned int)v564 < 0x10000000)
            && (v565 = *(_QWORD *)v563 + v564, v565 >= *(_QWORD *)v563)
            && *(_DWORD *)v565 == 17744 )
          {
            if ( ((*(_WORD *)(v565 + 24) - 267) & 0xFEFF) != 0 )
            {
              v556 = -1073741811;
            }
            else
            {
              *(_QWORD *)(v563 + 12) = *(_QWORD *)(v565 + 136);
              *((_DWORD *)v563 + 2) = *(_DWORD *)(v565 + 80);
            }
          }
          else
          {
            v556 = -1073741701;
          }
          v1343 = *(_DWORD *)(v562 + 1);
          v559 = v562 + 3;
          v566 = 0;
          for ( kk = 0; v566 < v1343; kk = v566 )
          {
            v567 = (const CHAR *)v559;
            v568 = -1LL;
            do
              ++v568;
            while ( *((_BYTE *)v559 + v568) );
            v559 = (LPCWSTR)((char *)v559 + v568 + 1);
            if ( v556 >= 0 )
            {
              v569 = GetProcAddress(*(HMODULE *)v563, v567);
              if ( !v569 )
                goto LABEL_767;
              off_18019C000[v1314] = v569;
              v566 = kk;
            }
            ++v1314;
            ++v566;
          }
          LODWORD(v1393) = v1393 + 1;
        }
      }
      else
      {
LABEL_766:
        v556 = -1073741702;
      }
LABEL_767:
      LODWORD(v508) = 0;
      if ( v1498 )
      {
        v570 = GetProcessHeap();
        HeapFree(v570, 0, (LPVOID)v1498);
      }
      if ( v556 < 0 )
      {
        v571 = (HMODULE *)&unk_18019EA60;
        v572 = 4LL;
        do
        {
          if ( *v571 )
            FreeLibrary(*v571);
          v571 += 3;
          --v572;
        }
        while ( v572 );
        memset(&unk_18019EA60, 0, 0x60uLL);
        memcpy(off_18019C000, off_18014B510, 0x170uLL);
LABEL_777:
        _InterlockedExchange(&dword_18019EB40, 0);
        LODWORD(v1397) = 0;
        LODWORD(v1411) = 0;
        v1542 = 0LL;
        v1370 = 0LL;
        v1378 = 0LL;
        v1359 = 0LL;
        v1574 = 0LL;
        while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
          ;
        v573 = dword_18019E4C8;
        if ( !dword_18019E4C8 )
        {
          v1315 = 0;
          LODWORD(v1393) = 0;
          v1495 = 0LL;
          v1566 = 0LL;
          v574 = sub_180055F40(824LL);
          v1394 = (const WCHAR *)v574;
          if ( !v574 )
            goto LABEL_813;
          v575 = 0;
          v576 = -1;
          v577 = 0;
          v578 = (_BYTE *)(v574 + 7);
          v579 = (unsigned __int8 *)&unk_18015F1E2;
          v580 = 103LL;
          do
          {
            v581 = v579[1] | ((*v579 | ((*(v579 - 1) | (*(v579 - 2) << 8)) << 8)) << 8);
            v582 = v579[5] | ((v579[4] | ((v579[3] | (v579[2] << 8)) << 8)) << 8);
            v583 = v581 ^ v577;
            v579 += 8;
            v584 = v583 ^ v582 ^ (unsigned int)v508 ^ 0xAC987321;
            v585 = (4991 * __ROL4__(v584 + 1419157410, 5) + __ROL4__(v584, 10)) ^ v583;
            v586 = (43881 * __ROR4__(v585 + 133239679, 9) - __ROL4__(v585, 2)) ^ v584;
            v587 = (24670 * v586 - (v586 >> 13) - 123127970) ^ v585;
            v588 = (2033 * __ROL4__(v587 ^ 0xAB69, 6) - __ROL4__(v587, 2)) ^ v586;
            v589 = (133239679 - (v588 ^ 0xAB69605E)) ^ v587;
            v590 = (43881 * (v589 ^ 0x137F)) ^ __ROR4__(v589, 6) ^ v588;
            v591 = (24670 * __ROR4__(v590 + 133239679, 15) + __ROL4__(v590, 2)) ^ v589;
            v592 = (2033 * __ROR4__(v591 + 1419157410, 14) - __ROL4__(v591, 8)) ^ v590;
            v593 = (4991 * __ROR4__(v592 ^ 0xAB69605E, 12)) ^ __ROR4__(v592, 10) ^ v591;
            v594 = (v593 >> 10) ^ (43881 * (v593 ^ 0x7F1)) ^ v592;
            v595 = (2033 * (__ROR4__(~v594, 5) + 24670)) ^ v593;
            v596 = v594 ^ (v595 - 2033) ^ 0xAB69605E;
            v597 = ((v596 >> 2) + 4991 * __ROL4__(v594 ^ (v595 - 2033) ^ 0xAB6967AF, 2)) ^ v595;
            v598 = (43881 * __ROR4__(v597 - 133239679, 6) + __ROL4__(v597, 7)) ^ v596;
            v599 = (24670 * (v598 ^ 0x137F) + __ROR4__(v598, 9)) ^ v597;
            v600 = (2033 * __ROL4__(v599 ^ 0xAB69, 5) + __ROL4__(v599, 7)) ^ v598;
            v601 = v600 ^ v599 ^ 0xAC987321;
            v602 = (4991 * __ROR4__(v601, 3) - 219010071) ^ v600;
            v603 = (24670 * __ROR4__(v602 - 133239679, 1) - __ROR4__(v602, 6)) ^ v601;
            v604 = (2033 * __ROL4__(v603 - 1419157410, 3) + __ROL4__(v603, 14)) ^ v602;
            v605 = (4991 * __ROL4__(v604 - 1419157410, 15) - __ROR4__(v604, 14)) ^ v603;
            v606 = (v605 >> 3) ^ (43881 * (v605 ^ 0x605E)) ^ v604;
            v607 = v575 ^ (24670 * __ROL4__(v606 ^ 0x7F1137F, 4)) ^ __ROL4__(v606, 2) ^ v605;
            v608 = v576 ^ v606;
            *(v578 - 4) = v607;
            v609 = __ROR4__(v607, 8);
            *v578 = v608;
            v610 = __ROR4__(v608, 8);
            *(v578 - 5) = v609;
            v611 = __ROR4__(v609, 8);
            *(v578 - 1) = v610;
            v612 = __ROR4__(v610, 8);
            *(v578 - 6) = v611;
            v613 = __ROR4__(v611, 8);
            *(v578 - 2) = v612;
            v614 = __ROR4__(v612, 8);
            *(v578 - 7) = v613;
            *(v578 - 3) = v614;
            v577 = __ROR4__(v613, 8);
            LODWORD(v508) = __ROR4__(v614, 8);
            v575 = v581;
            v576 = v582;
            v578 += 8;
            --v580;
          }
          while ( v580 );
          v615 = 0LL;
          v616 = 0;
          v510 = v1365;
          v84 = v1305;
          v617 = 0;
          v618 = (WCHAR *)v1394;
          do
            v616 ^= *((_BYTE *)v1394 + v615++);
          while ( v615 < 0x338 );
          if ( v616 == 64LL )
          {
            v1495 = v1394;
            v618 = 0LL;
            v1566 = 824LL;
            v619 = 0;
          }
          else
          {
            v619 = -1073425151;
          }
          if ( v618 )
            sub_180033A70(v618);
          if ( v619 >= 0 )
          {
            v620 = v1495;
            HIBYTE(v1495[v1566 / 2 - 1]) = 0;
            memset(&unk_18019EA60, 0, 0x60uLL);
            while ( *(_BYTE *)v620 )
            {
              v621 = v620;
              v622 = -1LL;
              do
                ++v622;
              while ( v620[v622] );
              v623 = &v620[v622];
              v624 = (char *)&unk_18019EA60 + 24 * (unsigned int)v1393;
              if ( !GetModuleHandleExW(0, v621, (HMODULE *)v624) )
                goto LABEL_813;
              v617 = 0;
              if ( **(_WORD **)v624 == 23117
                && (v625 = *(int *)(*(_QWORD *)v624 + 60LL), (unsigned int)v625 < 0x10000000)
                && (v626 = *(_QWORD *)v624 + v625, v626 >= *(_QWORD *)v624)
                && *(_DWORD *)v626 == 17744 )
              {
                if ( ((*(_WORD *)(v626 + 24) - 267) & 0xFEFF) != 0 )
                {
                  v617 = -1073741811;
                }
                else
                {
                  *(_QWORD *)(v624 + 12) = *(_QWORD *)(v626 + 136);
                  *((_DWORD *)v624 + 2) = *(_DWORD *)(v626 + 80);
                }
              }
              else
              {
                v617 = -1073741701;
              }
              v1344 = *(_DWORD *)(v623 + 1);
              v620 = v623 + 3;
              v627 = 0;
              for ( kk = 0; v627 < v1344; kk = v627 )
              {
                v628 = (const CHAR *)v620;
                v629 = -1LL;
                do
                  ++v629;
                while ( *((_BYTE *)v620 + v629) );
                v620 = (LPCWSTR)((char *)v620 + v629 + 1);
                if ( v617 >= 0 )
                {
                  v630 = GetProcAddress(*(HMODULE *)v624, v628);
                  if ( !v630 )
                    goto LABEL_814;
                  off_18019C000[v1315] = v630;
                  v627 = kk;
                }
                ++v1315;
                ++v627;
              }
              LODWORD(v1393) = v1393 + 1;
            }
          }
          else
          {
LABEL_813:
            v617 = -1073741702;
          }
LABEL_814:
          if ( v1495 )
          {
            v631 = GetProcessHeap();
            HeapFree(v631, 0, (LPVOID)v1495);
          }
          if ( v617 < 0 )
          {
            v632 = (HMODULE *)&unk_18019EA60;
            v633 = 4LL;
            do
            {
              if ( *v632 )
                FreeLibrary(*v632);
              v632 += 3;
              --v633;
            }
            while ( v633 );
            memset(&unk_18019EA60, 0, 0x60uLL);
            memcpy(off_18019C000, off_18014B510, 0x170uLL);
LABEL_825:
            _InterlockedExchange(&dword_18019EB40, 0);
            v1437 = 0LL;
            v634 = v510 & 0xF;
            v1341 = v634;
            v1709[0] = (v510 >> 4) & 0xF;
            v1709[1] = (v510 >> 8) & 0xF;
            v1709[2] = (v510 >> 12) & 0xF;
            v1335 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0F8[0])(0LL, 0LL, 1027LL);
            v1356 = -1;
            v635 = 0LL;
            if ( !v1335 )
            {
              v636 = GetLastError();
              v637 = v636;
              if ( v636 > 0 )
                v637 = (unsigned __int16)v636 | 0x80070000;
              if ( v637 >= 0 )
                v637 = -2147467259;
LABEL_947:
              v730 = 1;
              while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
                ;
              v731 = dword_18019E4C8;
              if ( dword_18019E4C8 > 0 )
              {
                --dword_18019E4C8;
                if ( v731 == 1 )
                {
                  v732 = (HMODULE *)&unk_18019EA60;
                  v733 = 4LL;
                  do
                  {
                    if ( *v732 )
                      FreeLibrary(*v732);
                    v732 += 3;
                    --v733;
                  }
                  while ( v733 );
                  memset(&unk_18019EA60, 0, 0x60uLL);
                  memcpy(off_18019C000, off_18014B510, 0x170uLL);
                  v730 = 1;
                }
              }
              _InterlockedExchange(&dword_18019EB40, 0);
              unknown_libname_376(&v1542);
              if ( v637 < 0 )
              {
                v508 = 0LL;
                goto LABEL_1255;
              }
              v734 = v1437;
              v1569 = v1437;
              memset(v1650, 0, 0x68uLL);
              v735 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18019C050[0])(v1426, 7LL);
              v736 = 0;
              if ( !v735
                || !((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(v735, 104LL, v1650)
                || WORD1(v1650[2]) != 32
                || !v1650[3]
                || SHIDWORD(v1650[0]) <= 0
                || SLODWORD(v1650[1]) <= 0 )
              {
                v730 = 0;
              }
              v1462 = v730;
              if ( v730 || v634 == 1 )
              {
                ((void (__fastcall *)(char *, _QWORD, _QWORD))off_18019C150)(
                  (char *)&v1649[11] + 4,
                  v734,
                  HIDWORD(v1569));
                ((void (__fastcall *)(char *, _QWORD, _QWORD))off_18019C150)(
                  (char *)&v1649[13] + 4,
                  v734,
                  HIDWORD(v1569));
                if ( v634 == 1 )
                  v1419 = ((__int64 (__fastcall *)(_QWORD))off_18019C028[0])(HIDWORD(v1649[4]) == 0 ? 0xB26720 : 0);
              }
              v767 = v1426;
              LODWORD(v1335) = ((__int64 (__fastcall *)(LPVOID, __int64))off_18019C080[0])(v1426, 1LL);
              v768 = 2064;
              if ( LODWORD(v1649[4]) )
                v768 = 133138;
              LODWORD(v1411) = v768;
              if ( v1462 )
              {
                v1346 = HIDWORD(v1649[4]);
                v1394 = (const WCHAR *)v1649[8];
                v1404 = (void *)v1649[5];
                memset(v1651, 0, 0x68uLL);
                memset(v1655, 0, 0x68uLL);
                v508 = 0LL;
                v1399 = 0LL;
                v1327 = 0;
                v1318 = 0;
                v1670 = 0LL;
                v1671 = 0LL;
                v1672 = 0LL;
                v1673 = 0;
                v1663 = 0LL;
                if ( !v1649[5] )
                  goto LABEL_1166;
                v769 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18019C050[0])(v767, 7LL);
                if ( !v769 )
                  goto LABEL_1059;
                if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(v769, 104LL, v1651) )
                {
                  v1399 = (LPVOID)v1651[3];
                  v1327 = HIDWORD(v1651[0]);
                  v1318 = v1651[1];
                }
                v770 = ((__int64 (__fastcall *)(LPVOID))off_18019C010[0])(v767);
                v771 = v770;
                if ( !v770 )
                {
LABEL_1059:
                  GetLastError();
                  goto LABEL_1166;
                }
                v1591 = 0LL;
                v772 = 0;
                v1671 = 0LL;
                v1672 = 0LL;
                v1673 = 0;
                LODWORD(v1670) = 40;
                DWORD1(v1670) = HIDWORD(v1649[12]) - HIDWORD(v1649[11]);
                DWORD2(v1670) = LODWORD(v1649[12]) - LODWORD(v1649[13]);
                HIDWORD(v1670) = 2097153;
                v773 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_18019C018[0])(
                         v770,
                         &v1670,
                         0LL,
                         &v1591,
                         0LL,
                         0);
                v774 = v773;
                v1379 = (LPVOID)v773;
                if ( v773 )
                {
                  v776 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(v773, 104LL, v1655);
                  v777 = 0LL;
                  if ( v776 )
                    v777 = (_BYTE *)v1655[3];
                  v1415 = v777;
                  DWORD2(v1663) = HIDWORD(v1649[12]) - HIDWORD(v1649[11]);
                  HIDWORD(v1663) = LODWORD(v1649[13]) - LODWORD(v1649[12]);
                  ((void (__fastcall *)(__int64, __int64))off_18019C078[0])(v771, v774);
                  ((void (__fastcall *)(__int64, __int64))off_18019C080[0])(v771, 1LL);
                  v1393 = ((__int64 (__fastcall *)(__int64, const WCHAR *))off_18019C078[0])(v771, v1394);
                  v778 = ((__int64 (__fastcall *)(_QWORD))off_18019C070[0])(0LL);
                  ((void (__fastcall *)(__int64, __int128 *, __int64))off_18019C0E8[0])(v771, &v1663, v778);
                  v779 = 0;
                  ((void (__fastcall *)(__int64, void *, __int64, __int128 *, _DWORD, _QWORD))off_18019C0D8[0])(
                    v771,
                    v1404,
                    0xFFFFFFFFLL,
                    &v1663,
                    (_DWORD)v1411,
                    0LL);
                  if ( v1341 == 1 )
                  {
                    if ( v1346 )
                      LODWORD(v1397) = ((__int64 (__fastcall *)(__int64))off_18019C118[0])(8LL);
                    else
                      LODWORD(v1397) = 0xFFFFFF;
                  }
                  else
                  {
                    LODWORD(v1397) = -5723992;
                  }
                  v780 = -HIDWORD(v1649[11]);
                  if ( v1649[11] >= 0 )
                    v780 = 0;
                  v781 = 0;
                  if ( v1649[11] >= 0 )
                    v781 = HIDWORD(v1649[11]);
                  v782 = -LODWORD(v1649[12]);
                  if ( SLODWORD(v1649[12]) >= 0 )
                  {
                    v782 = 0;
                    v779 = v1649[12];
                  }
                  v783 = DWORD2(v1663) - v780;
                  if ( DWORD2(v1663) - v780 >= v1327 - v781 )
                    v783 = v1327 - v781;
                  v1347 = v783;
                  v784 = HIDWORD(v1663) - v782;
                  if ( HIDWORD(v1663) - v782 >= v1318 - v779 )
                    v784 = v1318 - v779;
                  if ( v783 > 0 && v784 > 0 )
                  {
                    v785 = &v1415[4 * v780 + 4 * (__int64)(DWORD2(v1663) * v782)];
                    v1372 = v785;
                    v786 = (char *)v1399 + 4 * v781 + 4 * (__int64)(v1327 * v779);
                    v1399 = v786;
                    v1319 = 0;
                    v1394 = (const WCHAR *)(4LL * SDWORD2(v1663));
                    v1404 = (void *)(4LL * v1327);
                    v787 = v1397;
                    v788 = v1394;
                    do
                    {
                      v789 = 0;
                      v1328 = 0;
                      v790 = (unsigned __int8 *)(v785 + 2);
                      v791 = (char *)(v786 - v785);
                      do
                      {
                        if ( (unsigned __int8)((*v790 + *(v790 - 2) + 2 * (unsigned int)*(v790 - 1)) >> 2) != 0xFF )
                        {
                          v792 = (unsigned __int8)~((*v790 + *(v790 - 2) + 2 * (unsigned int)*(v790 - 1)) >> 2);
                          v790[(_QWORD)v791] -= ~((*v790 + *(v790 - 2) + 2 * (unsigned int)*(v790 - 1)) >> 2)
                                              * (v787 - v790[(_QWORD)v791]);
                          v790[(_QWORD)v791 - 1] += ((((unsigned __int64)(2155905153LL
                                                                        * v792
                                                                        * (BYTE1(v1397) - v790[(_QWORD)v791 - 1])) >> 32) & 0x80000000) != 0LL)
                                                  + ((int)((unsigned __int64)(2155905153LL
                                                                            * v792
                                                                            * (BYTE1(v1397) - v790[(_QWORD)v791 - 1])) >> 32) >> 7);
                          v790[(_QWORD)v791 - 2] += ((((unsigned __int64)(2155905153LL
                                                                        * v792
                                                                        * (BYTE2(v1397) - v790[(_QWORD)v791 - 2])) >> 32) & 0x80000000) != 0LL)
                                                  + ((int)((unsigned __int64)(2155905153LL
                                                                            * v792
                                                                            * (BYTE2(v1397) - v790[(_QWORD)v791 - 2])) >> 32) >> 7);
                          v790[(_QWORD)v791 + 1] += ((((unsigned __int64)(2155905153LL
                                                                        * v792
                                                                        * (255 - v790[(_QWORD)v791 + 1])) >> 32) & 0x80000000) != 0LL)
                                                  + ((int)((unsigned __int64)(2155905153LL
                                                                            * v792
                                                                            * (255 - v790[(_QWORD)v791 + 1])) >> 32) >> 7);
                          v789 = v1328;
                        }
                        v790 += 4;
                        v1328 = ++v789;
                      }
                      while ( v789 < v1347 );
                      v785 = &v1372[(_QWORD)v788];
                      v1372 = &v1372[(_QWORD)v788];
                      v786 = (char *)v1399 + (_QWORD)v1404;
                      v1399 = (char *)v1399 + (_QWORD)v1404;
                      ++v1319;
                    }
                    while ( v1319 < v784 );
                    v84 = v1305;
                    v772 = 0;
                  }
                  ((void (__fastcall *)(LPVOID))off_18019C038[0])(v1379);
                  v508 = 0LL;
                  if ( v1393 )
                    ((void (__fastcall *)(__int64, __int64))off_18019C078[0])(v771, v1393);
                }
                else
                {
                  v775 = GetLastError();
                  v772 = v775;
                  v508 = 0LL;
                  if ( v775 > 0 )
                    v772 = (unsigned __int16)v775 | 0x80070000;
                  if ( v772 >= 0 )
                    v772 = -2147467259;
                }
                ((void (__fastcall *)(__int64))off_18019C030[0])(v771);
                if ( v772 < 0 )
                  goto LABEL_1166;
                v1348 = HIDWORD(v1649[4]);
                v1394 = (const WCHAR *)v1649[9];
                v1404 = (void *)v1649[6];
                memset(v1652, 0, 0x68uLL);
                memset(v1656, 0, 0x68uLL);
                v1399 = 0LL;
                v1320 = 0;
                v1329 = 0;
                v1674 = 0LL;
                v1675 = 0LL;
                v1676 = 0LL;
                v1677 = 0;
                v1666 = 0LL;
                if ( !v1649[6] )
                  goto LABEL_1145;
                v793 = v1426;
                v794 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18019C050[0])(v1426, 7LL);
                if ( v794 )
                {
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(v794, 104LL, v1652) )
                  {
                    v1399 = (LPVOID)v1652[3];
                    LODWORD(v508) = HIDWORD(v1652[0]);
                    v1320 = HIDWORD(v1652[0]);
                    v1329 = v1652[1];
                  }
                  v795 = ((__int64 (__fastcall *)(LPVOID))off_18019C010[0])(v793);
                  v796 = v795;
                  if ( v795 )
                  {
                    v1592 = 0LL;
                    v797 = 0;
                    v1675 = 0LL;
                    v1676 = 0LL;
                    v1677 = 0;
                    LODWORD(v1674) = 40;
                    DWORD1(v1674) = HIDWORD(v1649[14]) - HIDWORD(v1649[13]);
                    DWORD2(v1674) = LODWORD(v1649[14]) - LODWORD(v1649[15]);
                    HIDWORD(v1674) = 2097153;
                    v798 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_18019C018[0])(
                             v795,
                             &v1674,
                             0LL,
                             &v1592,
                             0LL,
                             0);
                    v799 = v798;
                    v1380 = (LPVOID)v798;
                    if ( !v798 )
                    {
                      v800 = GetLastError();
                      v797 = v800;
                      v508 = 0LL;
                      if ( v800 > 0 )
                        v797 = (unsigned __int16)v800 | 0x80070000;
                      if ( v797 >= 0 )
                        v797 = -2147467259;
                      goto LABEL_1138;
                    }
                    v801 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(v798, 104LL, v1656);
                    v802 = 0LL;
                    if ( v801 )
                      v802 = (_BYTE *)v1656[3];
                    v1415 = v802;
                    DWORD2(v1666) = HIDWORD(v1649[14]) - HIDWORD(v1649[13]);
                    HIDWORD(v1666) = LODWORD(v1649[15]) - LODWORD(v1649[14]);
                    ((void (__fastcall *)(__int64, __int64))off_18019C078[0])(v796, v799);
                    ((void (__fastcall *)(__int64, __int64))off_18019C080[0])(v796, 1LL);
                    v1393 = ((__int64 (__fastcall *)(__int64, const WCHAR *))off_18019C078[0])(v796, v1394);
                    v803 = ((__int64 (__fastcall *)(_QWORD))off_18019C070[0])(0LL);
                    ((void (__fastcall *)(__int64, __int128 *, __int64))off_18019C0E8[0])(v796, &v1666, v803);
                    ((void (__fastcall *)(__int64, void *, __int64, __int128 *, _DWORD, _QWORD))off_18019C0D8[0])(
                      v796,
                      v1404,
                      0xFFFFFFFFLL,
                      &v1666,
                      (_DWORD)v1411,
                      0LL);
                    v806 = 0LL;
                    if ( v1341 == 1 )
                    {
                      if ( !v1348 )
                      {
                        v1366 = 0xFFFFFF;
LABEL_1115:
                        v808 = -HIDWORD(v1649[13]);
                        if ( v1649[13] >= 0 )
                          v808 = 0;
                        v809 = 0LL;
                        if ( v1649[13] >= 0 )
                          v809 = HIDWORD(v1649[13]);
                        v810 = -LODWORD(v1649[14]);
                        if ( SLODWORD(v1649[14]) >= 0 )
                          v810 = 0;
                        v811 = 0LL;
                        if ( SLODWORD(v1649[14]) >= 0 )
                          v811 = LODWORD(v1649[14]);
                        v812 = (_DWORD)v508 - v809;
                        v813 = DWORD2(v1666) - v808;
                        if ( DWORD2(v1666) - v808 >= v812 )
                          v813 = v812;
                        v814 = HIDWORD(v1666) - v810;
                        if ( HIDWORD(v1666) - v810 >= v1329 - (int)v811 )
                          v814 = v1329 - v811;
                        if ( v813 > 0 && v814 > 0 )
                        {
                          v815 = &v1415[4 * v808 + 4 * (__int64)(v810 * DWORD2(v1666))];
                          v1373 = v815;
                          v816 = v1320;
                          v817 = (char *)v1399 + 4 * (int)v809 + 4 * (__int64)(v1320 * (int)v811);
                          v1399 = v817;
                          v1321 = 0;
                          v1394 = (const WCHAR *)(4LL * SDWORD2(v1666));
                          v1404 = (void *)(4 * v816);
                          v818 = v1394;
                          do
                          {
                            LODWORD(v809) = 0;
                            v1330 = 0;
                            v806 = (unsigned __int8 *)(v815 + 2);
                            v819 = (char *)(v817 - v815);
                            do
                            {
                              v811 = (*v806 + *(v806 - 2) + 2 * (unsigned int)*(v806 - 1)) >> 2;
                              LOBYTE(v811) = ~(_BYTE)v811;
                              if ( (_BYTE)v811 )
                              {
                                v820 = v806[(_QWORD)v819];
                                v821 = (unsigned __int8)v811;
                                v822 = (int)((unsigned __int64)(2155905153LL * (unsigned __int8)v811 * (v1356 - v820)) >> 32) >> 7;
                                v806[(_QWORD)v819] = v820 + (v822 < 0) + v822;
                                v806[(_QWORD)v819 - 1] -= v821 * (BYTE1(v1366) - v806[(_QWORD)v819 - 1]);
                                v806[(_QWORD)v819 - 2] -= v821 * (BYTE2(v1366) - v806[(_QWORD)v819 - 2]);
                                v823 = v806[(_QWORD)v819 + 1];
                                v811 = (unsigned int)(v821 * (255 - v823) / 255);
                                LOBYTE(v811) = v823 + v811;
                                v806[(_QWORD)v819 + 1] = v811;
                                LODWORD(v809) = v1330;
                              }
                              v806 += 4;
                              v809 = (unsigned int)(v809 + 1);
                              v1330 = v809;
                            }
                            while ( (int)v809 < v813 );
                            v815 = &v1373[(_QWORD)v818];
                            v1373 = &v1373[(_QWORD)v818];
                            v817 = (char *)v1399 + (_QWORD)v1404;
                            v1399 = (char *)v1399 + (_QWORD)v1404;
                            ++v1321;
                          }
                          while ( v1321 < v814 );
                          v84 = v1305;
                          v797 = 0;
                        }
                        ((void (__fastcall *)(LPVOID, __int64, __int64, unsigned __int8 *))off_18019C038[0])(
                          v1380,
                          v811,
                          v809,
                          v806);
                        v508 = 0LL;
                        if ( v1393 )
                          ((void (__fastcall *)(__int64, __int64))off_18019C078[0])(v796, v1393);
LABEL_1138:
                        ((void (__fastcall *)(__int64))off_18019C030[0])(v796);
                        if ( v797 >= 0 )
                        {
                          v824 = v1426;
                          goto LABEL_1253;
                        }
LABEL_1166:
                        if ( v1419 )
                          ((void (__fastcall *)(SIZE_T))off_18019C038[0])(v1419);
LABEL_1255:
                        if ( v1649[5] )
                        {
                          v886 = -1LL;
                          do
                            ++v886;
                          while ( *(_WORD *)(v1649[5] + 2 * v886) );
                          memset((void *)v1649[5], 0, 2 * v886 + 2);
                          sub_180033A70((void *)v1649[5]);
                          v1649[5] = 0LL;
                        }
                        if ( v1649[6] )
                        {
                          v887 = -1LL;
                          do
                            ++v887;
                          while ( *(_WORD *)(v1649[6] + 2 * v887) );
                          memset((void *)v1649[6], 0, 2 * v887 + 2);
                          sub_180033A70((void *)v1649[6]);
                          v1649[6] = 0LL;
                        }
                        if ( v1649[7] )
                        {
                          v888 = -1LL;
                          do
                            ++v888;
                          while ( *(_WORD *)(v1649[7] + 2 * v888) );
                          memset((void *)v1649[7], 0, 2 * v888 + 2);
                          sub_180033A70((void *)v1649[7]);
                          v1649[7] = 0LL;
                        }
                        if ( v1649[8] )
                        {
                          off_18019C038[0]();
                          v1649[8] = 0LL;
                        }
                        if ( v1649[9] )
                        {
                          off_18019C038[0]();
                          v1649[9] = 0LL;
                        }
                        if ( v1649[10] )
                        {
                          off_18019C038[0]();
                          v1649[10] = 0LL;
                        }
                        while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
                          ;
                        v889 = dword_18019E4C8;
                        if ( dword_18019E4C8 > 0 )
                        {
                          --dword_18019E4C8;
                          if ( v889 == 1 )
                          {
                            v890 = (HMODULE *)&unk_18019EA60;
                            v891 = 4LL;
                            do
                            {
                              if ( *v890 )
                                FreeLibrary(*v890);
                              v890 += 3;
                              --v891;
                            }
                            while ( v891 );
                            memset(&unk_18019EA60, 0, 0x60uLL);
                            memcpy(off_18019C000, off_18014B510, 0x170uLL);
                          }
                        }
                        _InterlockedExchange(&dword_18019EB40, 0);
                        v1351 = dword_18019E438;
                        v1410 = (void *)((unsigned int)off_18019C098[0]() - (unsigned int)qword_18019E4C0);
                        v1703 = 0LL;
                        v1704 = 0LL;
                        v1705 = 0LL;
                        v1706 = 0LL;
                        while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
                          ;
                        v892 = dword_18019E4C8;
                        if ( dword_18019E4C8 )
                          goto LABEL_1329;
                        v1332 = 0;
                        LODWORD(v1335) = 0;
                        v1323 = 0;
                        v1485 = 0LL;
                        v1571 = 0LL;
                        v893 = sub_180055F40(824LL);
                        v894 = (WCHAR *)v893;
                        if ( v893 )
                        {
                          v895 = 0;
                          v896 = -1;
                          v897 = 0;
                          v898 = 0;
                          v899 = (_BYTE *)(v893 + 7);
                          v900 = (unsigned __int8 *)&unk_18015F1E2;
                          v901 = 103LL;
                          do
                          {
                            v902 = v900[1] | ((*v900 | ((*(v900 - 1) | (*(v900 - 2) << 8)) << 8)) << 8);
                            v903 = v900[5] | ((v900[4] | ((v900[3] | (v900[2] << 8)) << 8)) << 8);
                            v904 = v902 ^ v898;
                            v900 += 8;
                            v905 = v904 ^ v903 ^ v897 ^ 0xAC987321;
                            v906 = (4991 * __ROL4__(v905 + 1419157410, 5) + __ROL4__(v905, 10)) ^ v904;
                            v907 = (43881 * __ROR4__(v906 + 133239679, 9) - __ROL4__(v906, 2)) ^ v905;
                            v908 = (24670 * v907 - (v907 >> 13) - 123127970) ^ v906;
                            v909 = (2033 * __ROL4__(v908 ^ 0xAB69, 6) - __ROL4__(v908, 2)) ^ v907;
                            v910 = (133239679 - (v909 ^ 0xAB69605E)) ^ v908;
                            v911 = (43881 * (v910 ^ 0x137F)) ^ __ROR4__(v910, 6) ^ v909;
                            v912 = (24670 * __ROR4__(v911 + 133239679, 15) + __ROL4__(v911, 2)) ^ v910;
                            v913 = (2033 * __ROR4__(v912 + 1419157410, 14) - __ROL4__(v912, 8)) ^ v911;
                            v914 = (4991 * __ROR4__(v913 ^ 0xAB69605E, 12)) ^ __ROR4__(v913, 10) ^ v912;
                            v915 = v913 ^ (v914 >> 10) ^ (43881 * (v914 ^ 0x7F1));
                            v916 = (2033 * (__ROR4__(~v915, 5) + 24670)) ^ v914;
                            v917 = v915 ^ (v916 - 2033) ^ 0xAB69605E;
                            v918 = ((v917 >> 2) + 4991 * __ROL4__(v915 ^ (v916 - 2033) ^ 0xAB6967AF, 2)) ^ v916;
                            v919 = (43881 * __ROR4__(v918 - 133239679, 6) + __ROL4__(v918, 7)) ^ v917;
                            v920 = (24670 * (v919 ^ 0x137F) + __ROR4__(v919, 9)) ^ v918;
                            v921 = (2033 * __ROL4__(v920 ^ 0xAB69, 5) + __ROL4__(v920, 7)) ^ v919;
                            v922 = v921 ^ v920 ^ 0xAC987321;
                            v923 = (4991 * __ROR4__(v922, 3) - 219010071) ^ v921;
                            v924 = (24670 * __ROR4__(v923 - 133239679, 1) - __ROR4__(v923, 6)) ^ v922;
                            v925 = (2033 * __ROL4__(v924 - 1419157410, 3) + __ROL4__(v924, 14)) ^ v923;
                            v926 = (4991 * __ROL4__(v925 - 1419157410, 15) - __ROR4__(v925, 14)) ^ v924;
                            v927 = (v926 >> 3) ^ (43881 * (v926 ^ 0x605E)) ^ v925;
                            v928 = v895 ^ (24670 * __ROL4__(v927 ^ 0x7F1137F, 4)) ^ __ROL4__(v927, 2) ^ v926;
                            v929 = v896 ^ v927;
                            *(v899 - 4) = v928;
                            v930 = __ROR4__(v928, 8);
                            *v899 = v929;
                            v931 = __ROR4__(v929, 8);
                            *(v899 - 5) = v930;
                            v932 = __ROR4__(v930, 8);
                            *(v899 - 1) = v931;
                            v933 = __ROR4__(v931, 8);
                            *(v899 - 6) = v932;
                            v934 = __ROR4__(v932, 8);
                            *(v899 - 2) = v933;
                            v935 = __ROR4__(v933, 8);
                            *(v899 - 7) = v934;
                            *(v899 - 3) = v935;
                            v898 = __ROR4__(v934, 8);
                            v897 = __ROR4__(v935, 8);
                            v895 = v902;
                            v896 = v903;
                            v899 += 8;
                            --v901;
                          }
                          while ( v901 );
                          v936 = 0LL;
                          v937 = 0;
                          v84 = v1305;
                          v938 = 0;
                          do
                            v937 ^= *((_BYTE *)v894 + v936++);
                          while ( v936 < 0x338 );
                          if ( v937 == 64LL )
                          {
                            v1485 = v894;
                            v894 = 0LL;
                            v1571 = 824LL;
                            v939 = 0;
                          }
                          else
                          {
                            v939 = -1073425151;
                          }
                          if ( v894 )
                            sub_180033A70(v894);
                          v508 = 0LL;
                          if ( v939 >= 0 )
                          {
                            v940 = v1485;
                            HIBYTE(v1485[v1571 / 2 - 1]) = 0;
                            memset(&unk_18019EA60, 0, 0x60uLL);
                            while ( *(_BYTE *)v940 )
                            {
                              v941 = v940;
                              v942 = -1LL;
                              do
                                ++v942;
                              while ( v940[v942] );
                              v943 = &v940[v942];
                              v944 = (char *)&unk_18019EA60 + 24 * v1323;
                              if ( !GetModuleHandleExW(0, v941, (HMODULE *)v944) )
                                goto LABEL_1319;
                              v938 = 0;
                              if ( **(_WORD **)v944 == 23117
                                && (v945 = *(int *)(*(_QWORD *)v944 + 60LL), (unsigned int)v945 < 0x10000000)
                                && (v946 = *(_QWORD *)v944 + v945, v946 >= *(_QWORD *)v944)
                                && *(_DWORD *)v946 == 17744 )
                              {
                                if ( ((*(_WORD *)(v946 + 24) - 267) & 0xFEFF) != 0 )
                                {
                                  v938 = -1073741811;
                                }
                                else
                                {
                                  *(_QWORD *)(v944 + 12) = *(_QWORD *)(v946 + 136);
                                  *((_DWORD *)v944 + 2) = *(_DWORD *)(v946 + 80);
                                }
                              }
                              else
                              {
                                v938 = -1073741701;
                              }
                              LODWORD(v1335) = *(_DWORD *)(v943 + 1);
                              v940 = v943 + 3;
                              if ( (_DWORD)v1335 )
                              {
                                do
                                {
                                  v947 = (const CHAR *)v940;
                                  v948 = -1LL;
                                  do
                                    ++v948;
                                  while ( *((_BYTE *)v940 + v948) );
                                  v940 = (LPCWSTR)((char *)v940 + v948 + 1);
                                  if ( v938 >= 0 )
                                  {
                                    v949 = GetProcAddress(*(HMODULE *)v944, v947);
                                    if ( !v949 )
                                    {
                                      v508 = 0LL;
                                      goto LABEL_1320;
                                    }
                                    off_18019C000[v1332] = v949;
                                  }
                                  ++v1332;
                                  LODWORD(v508) = (_DWORD)v508 + 1;
                                }
                                while ( (unsigned int)v508 < (unsigned int)v1335 );
                              }
                              ++v1323;
                              v508 = 0LL;
                            }
                            goto LABEL_1320;
                          }
                        }
                        else
                        {
                          v508 = 0LL;
                        }
LABEL_1319:
                        v938 = -1073741702;
LABEL_1320:
                        if ( v1485 )
                        {
                          v950 = GetProcessHeap();
                          HeapFree(v950, 0, (LPVOID)v1485);
                        }
                        if ( v938 < 0 )
                        {
                          v951 = (HMODULE *)&unk_18019EA60;
                          v952 = 4LL;
                          do
                          {
                            if ( *v951 )
                              FreeLibrary(*v951);
                            v951 += 3;
                            --v952;
                          }
                          while ( v952 );
                          v953 = (HMODULE *)&unk_18019EA60;
                          memset(&unk_18019EA60, 0, 0x60uLL);
                          memcpy(off_18019C000, off_18014B510, 0x170uLL);
                          goto LABEL_1330;
                        }
                        v892 = dword_18019E4C8;
LABEL_1329:
                        dword_18019E4C8 = v892 + 1;
                        v953 = (HMODULE *)&unk_18019EA60;
LABEL_1330:
                        _InterlockedExchange(&dword_18019EB40, 0);
                        LODWORD(v1703) = (_DWORD)v1410;
                        v1702 = 1;
                        LODWORD(v1704) = -1721306479;
                        DWORD2(v1703) = 1;
                        LODWORD(v1705) = 1;
                        DWORD2(v1704) = 1;
                        LODWORD(v1706) = v1351;
                        DWORD2(v1705) = 1;
                        v954 = 4LL;
                        ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_18019C0D0)(
                          0LL,
                          8225LL,
                          4LL,
                          &v1702);
                        while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
                          ;
                        v955 = dword_18019E4C8;
                        if ( dword_18019E4C8 > 0 )
                        {
                          --dword_18019E4C8;
                          if ( v955 == 1 )
                          {
                            do
                            {
                              if ( *v953 )
                                FreeLibrary(*v953);
                              v953 += 3;
                              --v954;
                            }
                            while ( v954 );
                            memset(&unk_18019EA60, 0, 0x60uLL);
                            memcpy(off_18019C000, off_18014B510, 0x170uLL);
                          }
                        }
                        _InterlockedExchange(&dword_18019EB40, 0);
                        ((void (__fastcall *)(_QWORD, LPVOID))off_18019C160[0])(0LL, v1426);
                        v1411 = v1430;
                        goto LABEL_1339;
                      }
                      v807 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))off_18019C118[0])(
                               8LL,
                               v804,
                               v805,
                               0LL);
                      v806 = 0LL;
                    }
                    else
                    {
                      v807 = -5723992;
                    }
                    v1366 = v807;
                    v1356 = v807;
                    goto LABEL_1115;
                  }
                }
LABEL_1144:
                GetLastError();
LABEL_1145:
                v508 = 0LL;
                goto LABEL_1166;
              }
              if ( HIDWORD(v1649[4]) || (v825 = -64, v634 == 1) )
                v825 = -1;
              LOWORD(v1393) = 0;
              BYTE2(v1393) = v825;
              BYTE3(v1393) = 1;
              *(_QWORD *)&v1481 = 0LL;
              LODWORD(v1482) = 0;
              v1402 = (LPVOID)((__int64 (__fastcall *)(LPVOID))off_18019C010[0])(v767);
              if ( !v1402 )
                goto LABEL_1144;
              if ( v634 == 1 )
              {
                v826 = HIDWORD(v1649[14]) - HIDWORD(v1649[13]);
                if ( HIDWORD(v1649[14]) - HIDWORD(v1649[13]) <= HIDWORD(v1649[12]) - HIDWORD(v1649[11]) )
                  v826 = HIDWORD(v1649[12]) - HIDWORD(v1649[11]);
                v827 = LODWORD(v1649[15]) - LODWORD(v1649[12]);
                v1322 = LODWORD(v1649[15]) - LODWORD(v1649[12]);
                v828 = 0;
                v829 = 0;
                if ( LODWORD(v1649[4]) )
                {
                  v736 = HIDWORD(v1649[11]) + v826 - HIDWORD(v1649[12]);
                  LODWORD(v1481) = v736;
                  LODWORD(v1482) = HIDWORD(v1649[13]) + v826 - HIDWORD(v1649[14]);
                  v828 = v736;
                  v829 = v1482;
                }
                v830 = HIDWORD(v1649[12]) + v828 - HIDWORD(v1649[11]);
                DWORD2(v1481) = v830;
                HIDWORD(v1481) = LODWORD(v1649[13]) - LODWORD(v1649[12]);
                v1349 = HIDWORD(v1649[14]) + v829 - HIDWORD(v1649[13]);
                DWORD2(v1482) = v1349;
                v831 = LODWORD(v1649[14]) - LODWORD(v1649[12]);
                DWORD1(v1482) = LODWORD(v1649[14]) - LODWORD(v1649[12]);
                v1387 = LODWORD(v1649[15]) - LODWORD(v1649[12]);
                HIDWORD(v1482) = LODWORD(v1649[15]) - LODWORD(v1649[12]);
                v832 = LODWORD(v1649[13]) - LODWORD(v1649[12]);
              }
              else
              {
                v826 = DWORD2(v1437);
                v827 = HIDWORD(v1437);
                v1322 = HIDWORD(v1437);
                v1481 = *(_OWORD *)((char *)&v1649[11] + 4);
                v1482 = *(_OWORD *)((char *)&v1649[13] + 4);
                v832 = v1649[13];
                v830 = HIDWORD(v1649[12]);
                v736 = HIDWORD(v1649[11]);
                v1387 = v1649[15];
                v1349 = HIDWORD(v1649[14]);
                v831 = v1649[14];
              }
              v1331 = v831;
              v1593 = 0LL;
              v1679 = 0LL;
              v1680 = 0LL;
              v1681 = 0;
              LODWORD(v1678) = 40;
              DWORD1(v1678) = v826;
              DWORD2(v1678) = -v827;
              HIDWORD(v1678) = 2097153;
              v833 = (void *)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_18019C018[0])(
                               v1402,
                               &v1678,
                               0LL,
                               &v1593,
                               0LL,
                               0);
              v1403 = v833;
              if ( !v833 )
              {
                GetLastError();
                v508 = 0LL;
LABEL_1164:
                if ( v1402 )
                  ((void (__fastcall *)(LPVOID))off_18019C030[0])(v1402);
                goto LABEL_1166;
              }
              ((void (__fastcall *)(LPVOID, void *))off_18019C078[0])(v1402, v833);
              if ( v1341 == 1 && v1419 )
              {
                v1667 = 0LL;
                v1668 = v826;
                v1669 = v1322;
                ((void (__fastcall *)(LPVOID, __int64 *))off_18019C0E8[0])(v1402, &v1667);
              }
              LODWORD(v1397) = HIDWORD(v1649[4]);
              v1429 = (void *)v1649[8];
              v1415 = (_BYTE *)v1649[5];
              memset(v1653, 0, 0x68uLL);
              memset(v1657, 0, 0x68uLL);
              v1404 = 0LL;
              v1381 = 0;
              v1360 = 0;
              v1682 = 0LL;
              v1683 = 0LL;
              v1684 = 0LL;
              v1685 = 0;
              v1664 = 0LL;
              if ( v1649[5] )
              {
                v834 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18019C050[0])(v1402, 7LL);
                if ( !v834 )
                  goto LABEL_1160;
                if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(v834, 104LL, v1653) )
                {
                  v1404 = (void *)v1653[3];
                  v1381 = HIDWORD(v1653[0]);
                  v1360 = v1653[1];
                }
                v835 = (void *)((__int64 (__fastcall *)(LPVOID))off_18019C010[0])(v1402);
                v1399 = v835;
                if ( v835 )
                {
                  v1367 = v832 - DWORD1(v1481);
                  v836 = v830 - v736;
                  v1594 = 0LL;
                  v837 = 0;
                  v1683 = 0LL;
                  v1684 = 0LL;
                  v1685 = 0;
                  LODWORD(v1682) = 40;
                  DWORD1(v1682) = v836;
                  DWORD2(v1682) = -v1367;
                  HIDWORD(v1682) = 2097153;
                  v838 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_18019C018[0])(
                           v835,
                           &v1682,
                           0LL,
                           &v1594,
                           0LL,
                           0);
                  v1394 = (const WCHAR *)v838;
                  if ( v838 )
                  {
                    v840 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(v838, 104LL, v1657);
                    v841 = 0LL;
                    if ( v840 )
                      v841 = v1657[3];
                    v1422 = v841;
                    *((_QWORD *)&v1664 + 1) = __PAIR64__(v1367, v836);
                    v842 = v1399;
                    ((void (__fastcall *)(LPVOID, const WCHAR *))off_18019C078[0])(v1399, v1394);
                    ((void (__fastcall *)(LPVOID, __int64))off_18019C080[0])(v842, 1LL);
                    v1410 = (void *)((__int64 (__fastcall *)(LPVOID, void *))off_18019C078[0])(v842, v1429);
                    v843 = ((__int64 (__fastcall *)(_QWORD))off_18019C070[0])(0LL);
                    ((void (__fastcall *)(LPVOID, __int128 *, __int64))off_18019C0E8[0])(v842, &v1664, v843);
                    ((void (__fastcall *)(LPVOID, _BYTE *, __int64, __int128 *, _DWORD, _QWORD))off_18019C0D8[0])(
                      v842,
                      v1415,
                      0xFFFFFFFFLL,
                      &v1664,
                      (_DWORD)v1411,
                      0LL);
                    if ( v1341 == 1 )
                    {
                      if ( (_DWORD)v1397 )
                        v844 = ((__int64 (__fastcall *)(__int64))off_18019C118[0])(8LL);
                      else
                        v844 = 0xFFFFFF;
                    }
                    else
                    {
                      v844 = -5723992;
                    }
                    LODWORD(v1397) = v844;
                    v845 = -v736;
                    if ( v736 >= 0 )
                      v845 = 0;
                    v846 = 0;
                    if ( v736 >= 0 )
                      v846 = v736;
                    v847 = -DWORD1(v1481);
                    if ( (SDWORD1(v1481) & 0x80000000) == 0 )
                      v847 = 0;
                    v848 = 0;
                    if ( (SDWORD1(v1481) & 0x80000000) == 0 )
                      v848 = DWORD1(v1481);
                    v849 = DWORD2(v1664) - v845;
                    v850 = v1381;
                    if ( DWORD2(v1664) - v845 >= v1381 - v846 )
                      v849 = v1381 - v846;
                    v851 = HIDWORD(v1664) - v847;
                    if ( HIDWORD(v1664) - v847 >= v1360 - v848 )
                      v851 = v1360 - v848;
                    if ( v849 > 0 && v851 > 0 )
                    {
                      v852 = v1422 + 4 * (v845 + (__int64)(v847 * DWORD2(v1664)));
                      v1415 = (_BYTE *)v852;
                      v853 = (char *)v1404 + 4 * v846 + 4 * (__int64)(v848 * v1381);
                      v1404 = v853;
                      v1382 = 0;
                      v1422 = 4LL * SDWORD2(v1664);
                      v854 = v1397;
                      v855 = v1422;
                      v856 = 4 * v850;
                      do
                      {
                        v857 = 0;
                        v1361 = 0;
                        v858 = (unsigned __int8 *)(v852 + 2);
                        v859 = &v853[-v852];
                        do
                        {
                          if ( (unsigned __int8)((*v858 + *(v858 - 2) + 2 * (unsigned int)*(v858 - 1)) >> 2) != 0xFF )
                          {
                            v860 = (unsigned __int8)~((*v858 + *(v858 - 2) + 2 * (unsigned int)*(v858 - 1)) >> 2);
                            v858[(_QWORD)v859] -= ~((*v858 + *(v858 - 2) + 2 * (unsigned int)*(v858 - 1)) >> 2)
                                                * (v854 - v858[(_QWORD)v859]);
                            v858[(_QWORD)v859 - 1] -= v860 * (BYTE1(v1397) - v858[(_QWORD)v859 - 1]);
                            v858[(_QWORD)v859 - 2] -= v860 * (BYTE2(v1397) - v858[(_QWORD)v859 - 2]);
                            v858[(_QWORD)v859 + 1] += v860 * (255 - v858[(_QWORD)v859 + 1]) / 255;
                            v857 = v1361;
                          }
                          v858 += 4;
                          v1361 = ++v857;
                        }
                        while ( v857 < v849 );
                        v852 = (SIZE_T)&v1415[v855];
                        v1415 += v855;
                        v853 = (char *)v1404 + v856;
                        v1404 = (char *)v1404 + v856;
                        ++v1382;
                      }
                      while ( v1382 < v851 );
                      v84 = v1305;
                      v837 = 0;
                      v842 = v1399;
                    }
                    ((void (__fastcall *)(const WCHAR *))off_18019C038[0])(v1394);
                    if ( v1410 )
                      ((void (__fastcall *)(LPVOID, void *))off_18019C078[0])(v842, v1410);
                  }
                  else
                  {
                    v837 = GetLastError();
                    v839 = v837 < 0;
                    if ( v837 > 0 )
                    {
                      v837 = (unsigned __int16)v837 | 0x80070000;
                      v839 = v837 < 0;
                    }
                    if ( !v839 )
                      v837 = -2147467259;
                  }
                  ((void (__fastcall *)(LPVOID))off_18019C030[0])(v1399);
                  if ( v837 >= 0 )
                  {
                    v1374 = HIDWORD(v1649[4]);
                    v1410 = (void *)v1649[9];
                    v1422 = v1649[6];
                    memset(v1654, 0, 0x68uLL);
                    memset(v1658, 0, 0x68uLL);
                    v508 = 0LL;
                    v1394 = 0LL;
                    v1362 = 0;
                    v1383 = 0;
                    v1686 = 0LL;
                    v1687 = 0LL;
                    v1688 = 0LL;
                    v1689 = 0;
                    v1665 = 0LL;
                    if ( !v1649[6] )
                      goto LABEL_1162;
                    v861 = v1402;
                    v862 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18019C050[0])(v1402, 7LL);
                    if ( !v862 )
                      goto LABEL_1209;
                    if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(v862, 104LL, v1654) )
                    {
                      v1394 = (const WCHAR *)v1654[3];
                      v1362 = HIDWORD(v1654[0]);
                      v1383 = v1654[1];
                    }
                    v863 = (void *)((__int64 (__fastcall *)(LPVOID))off_18019C010[0])(v861);
                    v1399 = v863;
                    if ( !v863 )
                    {
LABEL_1209:
                      GetLastError();
                      goto LABEL_1162;
                    }
                    v864 = v1349 - v1482;
                    v1598 = 0LL;
                    v865 = 0;
                    v1687 = 0LL;
                    v1688 = 0LL;
                    v1689 = 0;
                    LODWORD(v1686) = 40;
                    DWORD1(v1686) = v1349 - v1482;
                    DWORD2(v1686) = v1331 - v1387;
                    HIDWORD(v1686) = 2097153;
                    v866 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_18019C018[0])(
                             v863,
                             &v1686,
                             0LL,
                             &v1598,
                             0LL,
                             0);
                    v1415 = (_BYTE *)v866;
                    if ( !v866 )
                    {
                      v867 = GetLastError();
                      v865 = v867;
                      v508 = 0LL;
                      if ( v867 > 0 )
                        v865 = (unsigned __int16)v867 | 0x80070000;
                      if ( v865 >= 0 )
                        v865 = -2147467259;
LABEL_1249:
                      ((void (__fastcall *)(LPVOID))off_18019C030[0])(v1399);
                      if ( v865 < 0 )
                        goto LABEL_1162;
                      v824 = v1426;
                      if ( v1341 == 1 )
                        ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, int, LPVOID, _DWORD, _DWORD, int))off_18019C000[0])(
                          v1426,
                          HIDWORD(v1649[11]),
                          LODWORD(v1649[12]),
                          v826,
                          v1322,
                          v1402,
                          0,
                          0,
                          13369376);
                      else
                        ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, int, LPVOID, _DWORD, _DWORD, unsigned int, int, _DWORD))off_18019C040[0])(
                          v1426,
                          (unsigned int)v1437,
                          DWORD1(v1437),
                          v826,
                          v1322,
                          v1402,
                          0,
                          0,
                          v826,
                          v1322,
                          v1393);
LABEL_1253:
                      ((void (__fastcall *)(LPVOID, _QWORD))off_18019C080[0])(v824, (unsigned int)v1335);
LABEL_1162:
                      if ( v1403 )
                        ((void (__fastcall *)(void *))off_18019C038[0])(v1403);
                      goto LABEL_1164;
                    }
                    v868 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))off_18019C068[0])(v866, 104LL, v1658);
                    v869 = 0LL;
                    if ( v868 )
                      v869 = (void *)v1658[3];
                    v1429 = v869;
                    DWORD2(v1665) = v864;
                    HIDWORD(v1665) = v1387 - v1331;
                    v870 = v1399;
                    ((void (__fastcall *)(LPVOID, _BYTE *))off_18019C078[0])(v1399, v1415);
                    ((void (__fastcall *)(LPVOID, __int64))off_18019C080[0])(v870, 1LL);
                    v1397 = ((__int64 (__fastcall *)(LPVOID, void *))off_18019C078[0])(v870, v1410);
                    v871 = ((__int64 (__fastcall *)(_QWORD))off_18019C070[0])(0LL);
                    ((void (__fastcall *)(LPVOID, __int128 *, __int64))off_18019C0E8[0])(v870, &v1665, v871);
                    ((void (__fastcall *)(LPVOID, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_18019C0D8[0])(
                      v870,
                      v1422,
                      0xFFFFFFFFLL,
                      &v1665,
                      (_DWORD)v1411,
                      0LL);
                    if ( v1341 == 1 )
                    {
                      if ( !v1374 )
                      {
                        v1368 = 0xFFFFFF;
LABEL_1226:
                        v873 = -(int)v1482;
                        if ( (int)v1482 >= 0 )
                          v873 = 0;
                        v874 = 0;
                        if ( (int)v1482 >= 0 )
                          v874 = v1482;
                        v875 = -v1331;
                        if ( v1331 >= 0 )
                          v875 = 0;
                        v876 = 0;
                        if ( v1331 >= 0 )
                          v876 = v1331;
                        v877 = DWORD2(v1665) - v873;
                        if ( DWORD2(v1665) - v873 >= v1362 - v874 )
                          v877 = v1362 - v874;
                        v878 = HIDWORD(v1665) - v875;
                        if ( HIDWORD(v1665) - v875 >= v1383 - v876 )
                          v878 = v1383 - v876;
                        if ( v877 > 0 && v878 > 0 )
                        {
                          v879 = (unsigned __int8 *)v1429 + 4 * v873 + 4 * (__int64)(v875 * DWORD2(v1665));
                          v1404 = v879;
                          v880 = &v1394[2 * v874 + 2 * (__int64)(v876 * v1362)];
                          v1394 = v880;
                          v1388 = 0;
                          v1410 = (void *)(4LL * SDWORD2(v1665));
                          v1422 = 4LL * v1362;
                          v881 = v1410;
                          do
                          {
                            v882 = 0;
                            v1350 = 0;
                            v883 = v879 + 2;
                            v884 = (char *)v880 - (char *)v879;
                            do
                            {
                              if ( (unsigned __int8)((*v883 + *(v883 - 2) + 2 * (unsigned int)*(v883 - 1)) >> 2) != 0xFF )
                              {
                                v885 = (unsigned __int8)~((*v883 + *(v883 - 2) + 2 * (unsigned int)*(v883 - 1)) >> 2);
                                v883[v884] -= ~((*v883 + *(v883 - 2) + 2 * (unsigned int)*(v883 - 1)) >> 2)
                                            * (v1356 - v883[v884]);
                                v883[v884 - 1] -= v885 * (BYTE1(v1368) - v883[v884 - 1]);
                                v883[v884 - 2] -= v885 * (BYTE2(v1368) - v883[v884 - 2]);
                                v883[v884 + 1] += v885 * (255 - v883[v884 + 1]) / 255;
                                v882 = v1350;
                              }
                              v883 += 4;
                              v1350 = ++v882;
                            }
                            while ( v882 < v877 );
                            v879 = (unsigned __int8 *)v1404 + (_QWORD)v881;
                            v1404 = (char *)v1404 + (_QWORD)v881;
                            v880 = (const WCHAR *)((char *)v1394 + v1422);
                            v1394 = (const WCHAR *)((char *)v1394 + v1422);
                            ++v1388;
                          }
                          while ( v1388 < v878 );
                          v84 = v1305;
                          v870 = v1399;
                        }
                        ((void (__fastcall *)(_BYTE *))off_18019C038[0])(v1415);
                        v508 = 0LL;
                        if ( v1397 )
                          ((void (__fastcall *)(LPVOID, __int64))off_18019C078[0])(v870, v1397);
                        goto LABEL_1249;
                      }
                      v872 = ((__int64 (__fastcall *)(__int64))off_18019C118[0])(8LL);
                    }
                    else
                    {
                      v872 = -5723992;
                    }
                    v1368 = v872;
                    v1356 = v872;
                    goto LABEL_1226;
                  }
                }
                else
                {
LABEL_1160:
                  GetLastError();
                }
              }
              v508 = 0LL;
              goto LABEL_1162;
            }
            LODWORD(v638) = 0;
            v1568 = 0LL;
            v1484 = 0LL;
            v1567 = 0LL;
            v1457 = 0LL;
            v1483 = 0LL;
            v1456 = 0LL;
            v637 = 0;
            v1445 = 0;
            if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_18019C0A0[0])(
                    8LL,
                    &v1431,
                    0LL,
                    &v1445) )
            {
              v639 = GetLastError();
LABEL_832:
              v637 = v639;
              if ( v639 > 0 )
                v637 = (unsigned __int16)v639 | 0x80070000;
              if ( v637 >= 0 )
                v637 = -2147467259;
              goto LABEL_849;
            }
            v640 = sub_180055F40(2LL * v1445);
            unknown_libname_376(&v1483);
            if ( v640 )
            {
              v1483 = v640;
              v638 = sub_180055F40(4LL * (v1431 + 1));
              unknown_libname_376(&v1456);
              if ( v638 )
              {
                v1456 = v638;
                if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_18019C0A0[0])(
                       8LL,
                       &v1431,
                       v640,
                       &v1445) )
                {
                  v641 = (_DWORD *)v638;
                  if ( v1431 )
                  {
                    for ( mm = 0; mm < v1431; ++mm )
                    {
                      *v641 = ((__int64 (__fastcall *)(__int64, _QWORD))off_18019C0B0[0])(v640, 0LL);
                      v643 = -1LL;
                      do
                        ++v643;
                      while ( *(_WORD *)(v640 + 2 * v643) );
                      v640 += 2 * v643 + 2;
                      ++v641;
                    }
                  }
                  *v641 = 1033;
                  v1456 = 0LL;
                  v635 = v638;
                  v1568 = v638;
                  kk = v1431 + 1;
                  LODWORD(v638) = 0;
                  goto LABEL_849;
                }
                v639 = GetLastError();
                LODWORD(v638) = 0;
                goto LABEL_832;
              }
              v1456 = 0LL;
            }
            else
            {
              v1483 = 0LL;
            }
            v637 = -2147024882;
LABEL_849:
            unknown_libname_376(&v1456);
            unknown_libname_376(&v1483);
            if ( v637 < 0 )
              goto LABEL_916;
            v644 = 0;
            v1316 = 0;
            v645 = 0;
            if ( kk )
            {
              v646 = 0LL;
LABEL_852:
              v647 = 0;
              v648 = &dword_180178130;
              while ( *(_DWORD *)(v635 + v646) != *v648 )
              {
                ++v647;
                ++v648;
                if ( v647 >= 0x26 )
                {
                  ++v645;
                  v646 += 4LL;
                  if ( v645 >= kk )
                    goto LABEL_858;
                  goto LABEL_852;
                }
              }
              v644 = v647;
              v1316 = v647;
            }
LABEL_858:
            v649 = v644;
            LODWORD(v1393) = 0;
            if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_18019C0A8[0])(
                   *((unsigned int *)&dword_180178130 + v644),
                   v1710,
                   85LL)
              && ((int (__fastcall *)(_BYTE *, __int64, char *))off_18019C090[0])(v1710, 88LL, &v1699) > 0 )
            {
              LODWORD(v1393) = (v1700 >> 27) & 1;
            }
            v650 = L"Segoe UI Light";
            v651 = (const wchar_t **)v1708;
            v652 = 19LL;
            do
            {
              *v651 = v650;
              v653 = -1LL;
              do
                ++v653;
              while ( v650[v653] );
              v650 += v653 + 1;
              ++v651;
              --v652;
            }
            while ( v652 );
            v654 = (void *)v1708[*((unsigned __int8 *)&byte_1801608D0 + 3 * v649)];
            v1370 = v654;
            v1378 = (LPVOID)v1708[*((unsigned __int8 *)&MEMORY[0x1801608D1] + 3 * v649)];
            v1359 = (LPVOID)v1708[*((unsigned __int8 *)&MEMORY[0x1801608D2] + 3 * v649)];
            v655 = sub_180055F40(7312LL);
            v1394 = (const WCHAR *)v655;
            if ( !v655 )
            {
              v637 = -2147024882;
              goto LABEL_917;
            }
            v656 = 0;
            v657 = 0;
            v658 = 0;
            v659 = (_BYTE *)(v655 + 7);
            v660 = (unsigned __int8 *)&unk_180176492;
            v661 = 914LL;
            v662 = -1;
            do
            {
              v663 = v660[1] | ((*v660 | ((*(v660 - 1) | (*(v660 - 2) << 8)) << 8)) << 8);
              v664 = v660[5] | ((v660[4] | ((v660[3] | (v660[2] << 8)) << 8)) << 8);
              v665 = v663 ^ v658;
              v660 += 8;
              v666 = v665 ^ v657 ^ v664 ^ 0xAC987321;
              v667 = (4991 * __ROL4__(v666 + 1419157410, 5) + __ROL4__(v666, 10)) ^ v665;
              v668 = (43881 * __ROR4__(v667 + 133239679, 9) - __ROL4__(v667, 2)) ^ v666;
              v669 = (24670 * v668 - (v668 >> 13) - 123127970) ^ v667;
              v670 = (2033 * __ROL4__(v669 ^ 0xAB69, 6) - __ROL4__(v669, 2)) ^ v668;
              v671 = (133239679 - (v670 ^ 0xAB69605E)) ^ v669;
              v672 = (43881 * (v671 ^ 0x137F)) ^ __ROR4__(v671, 6) ^ v670;
              v673 = (24670 * __ROR4__(v672 + 133239679, 15) + __ROL4__(v672, 2)) ^ v671;
              v674 = (2033 * __ROR4__(v673 + 1419157410, 14) - __ROL4__(v673, 8)) ^ v672;
              v675 = (4991 * __ROR4__(v674 ^ 0xAB69605E, 12)) ^ __ROR4__(v674, 10) ^ v673;
              v676 = v674 ^ (v675 >> 10) ^ (43881 * (v675 ^ 0x7F1));
              v677 = (2033 * (__ROR4__(~v676, 5) + 24670)) ^ v675;
              v678 = v676 ^ (v677 - 2033) ^ 0xAB69605E;
              v679 = ((v678 >> 2) + 4991 * __ROL4__(v676 ^ (v677 - 2033) ^ 0xAB6967AF, 2)) ^ v677;
              v680 = (43881 * __ROR4__(v679 - 133239679, 6) + __ROL4__(v679, 7)) ^ v678;
              v681 = 24670 * (v680 ^ 0x137F) + __ROR4__(v680, 9);
              v682 = (2033 * __ROL4__(v681 ^ v679 ^ 0xAB69, 5) + __ROL4__(v681 ^ v679, 7)) ^ v680;
              v683 = v681 ^ v679 ^ v682 ^ 0xAC987321;
              v684 = (4991 * __ROR4__(v683, 3) - 219010071) ^ v682;
              v685 = (24670 * __ROR4__(v684 - 133239679, 1) - __ROR4__(v684, 6)) ^ v683;
              v686 = (2033 * __ROL4__(v685 - 1419157410, 3) + __ROL4__(v685, 14)) ^ v684;
              v687 = (4991 * __ROL4__(v686 - 1419157410, 15) - __ROR4__(v686, 14)) ^ v685;
              v688 = (v687 >> 3) ^ (43881 * (v687 ^ 0x605E)) ^ v686;
              v689 = v656 ^ (24670 * __ROL4__(v688 ^ 0x7F1137F, 4)) ^ __ROL4__(v688, 2) ^ v687;
              v690 = v662 ^ v688;
              *(v659 - 4) = v689;
              v691 = __ROR4__(v689, 8);
              *v659 = v690;
              v692 = __ROR4__(v690, 8);
              *(v659 - 5) = v691;
              v693 = __ROR4__(v691, 8);
              *(v659 - 1) = v692;
              v694 = __ROR4__(v692, 8);
              *(v659 - 6) = v693;
              v695 = __ROR4__(v693, 8);
              *(v659 - 2) = v694;
              v696 = __ROR4__(v694, 8);
              *(v659 - 7) = v695;
              *(v659 - 3) = v696;
              v658 = __ROR4__(v695, 8);
              v657 = __ROR4__(v696, 8);
              v656 = v663;
              v662 = v664;
              v659 += 8;
              --v661;
            }
            while ( v661 );
            LODWORD(v638) = 0;
            v697 = 0LL;
            v698 = 0LL;
            v84 = v1305;
            v637 = 0;
            v699 = (WCHAR *)v1394;
            do
            {
              v700 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1394[v697]), v698);
              v698 = v700;
              v697 += 8LL;
            }
            while ( v697 < 3656 );
            v701 = _mm_xor_si128(v700, _mm_srli_si128(v700, 8));
            v702 = _mm_xor_si128(v701, _mm_srli_si128(v701, 4));
            v703 = _mm_xor_si128(v702, _mm_srli_si128(v702, 2));
            if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v703, _mm_srli_si128(v703, 1))) == 127LL )
            {
              v1484 = (WCHAR *)v1394;
              v699 = 0LL;
              v1567 = 7312LL;
            }
            else
            {
              v637 = -1073425151;
            }
            if ( v699 )
              sub_180033A70(v699);
            if ( v637 < 0 )
            {
LABEL_916:
              v654 = v1370;
LABEL_917:
              if ( v1484 )
                memset(v1484, 0, v1567);
              unknown_libname_376(&v1457);
              unknown_libname_376(&v1484);
              unknown_libname_376(&v1568);
              if ( v637 < 0 )
                goto LABEL_945;
              v1649[5] = *v1542;
              v1649[6] = v1542[1];
              v1649[7] = v1542[2];
              v1615 = 0LL;
              v725 = v638;
              v637 = v638;
              LODWORD(v1615) = 16;
              if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_18019C168)(
                                   66LL,
                                   0LL,
                                   &v1615,
                                   0LL) )
              {
                v725 = BYTE4(v1615) & 1;
              }
              else
              {
                v726 = GetLastError();
                v637 = v726;
                if ( v726 > 0 )
                  v637 = (unsigned __int16)v726 | 0x80070000;
                if ( v637 >= 0 )
                  v637 = -2147467259;
              }
              HIDWORD(v1649[4]) = v725;
              v634 = v1341;
              if ( v637 < 0 )
                goto LABEL_946;
              if ( v1341 == 1 )
              {
                LODWORD(v1397) = 42;
              }
              else
              {
                if ( v1341 != 2 )
                {
                  if ( v1341 == 3 )
                  {
                    LODWORD(v1397) = 225;
                    LODWORD(v1411) = 225;
                  }
LABEL_934:
                  v727 = 96;
                  LODWORD(v1393) = 96;
                  memset(v1701, 0, 0xDCuLL);
                  LOWORD(v1701[17]) = 220;
                  v637 = 0;
                  if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _DWORD *))off_18019C0E0[0])(
                         0LL,
                         0xFFFFFFFFLL,
                         v1701) )
                  {
                    v727 = HIWORD(v1701[41]);
                    *((_QWORD *)&v1574 + 1) = *(_QWORD *)&v1701[43];
                    if ( HIWORD(v1701[41]) < 0x60u )
                      v727 = 96;
                    LODWORD(v1393) = v727;
                  }
                  if ( v1341 != 1 )
                    v654 = v1359;
                  memset(v1696, 0, 0x5CuLL);
                  v728 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0F8[0])(0LL, 0LL, 1027LL);
                  if ( !v728 )
                  {
                    v729 = GetLastError();
                    v637 = v729;
                    if ( v729 > 0 )
                      v637 = (unsigned __int16)v729 | 0x80070000;
                    if ( v637 >= 0 )
                      v637 = -2147467259;
LABEL_945:
                    v634 = v1341;
LABEL_946:
                    ((void (__fastcall *)(_QWORD, __int64))off_18019C160[0])(0LL, v1335);
                    goto LABEL_947;
                  }
                  v1696[0] = -((int (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                (unsigned int)v1397,
                                v727,
                                72LL);
                  v1696[4] = 400;
                  BYTE2(v1696[6]) = 5;
                  sub_180057300(&v1696[7], 32LL, v654);
                  v737 = ((__int64 (__fastcall *)(_DWORD *))off_18019C020[0])(v1696);
                  if ( v737 )
                  {
                    v1649[8] = v737;
                  }
                  else
                  {
                    v738 = GetLastError();
                    v637 = v738;
                    if ( v738 > 0 )
                      v637 = (unsigned __int16)v738 | 0x80070000;
                    if ( v637 >= 0 )
                      v637 = -2147467259;
                  }
                  ((void (__fastcall *)(_QWORD, __int64))off_18019C160[0])(0LL, v728);
                  if ( v637 < 0 )
                    goto LABEL_945;
                  v634 = v1341;
                  v739 = v1370;
                  if ( v1341 != 1 )
                    v739 = v1359;
                  v1371 = v739;
                  memset(v1697, 0, 0x5CuLL);
                  v637 = 0;
                  v740 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0F8[0])(0LL, 0LL, 1027LL);
                  if ( !v740 )
                  {
                    v741 = GetLastError();
                    v637 = v741;
                    if ( v741 > 0 )
                      v637 = (unsigned __int16)v741 | 0x80070000;
                    if ( v637 < 0 )
                      goto LABEL_946;
                    goto LABEL_981;
                  }
                  v1697[0] = -((int (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                (unsigned int)v1411,
                                v727,
                                72LL);
                  v1697[4] = 400;
                  BYTE2(v1697[6]) = 5;
                  sub_180057300(&v1697[7], 32LL, v1371);
                  v742 = ((__int64 (__fastcall *)(_DWORD *))off_18019C020[0])(v1697);
                  if ( v742 )
                  {
                    v1649[9] = v742;
                  }
                  else
                  {
                    v743 = GetLastError();
                    v637 = v743;
                    if ( v743 > 0 )
                      v637 = (unsigned __int16)v743 | 0x80070000;
                    if ( v637 >= 0 )
                      v637 = -2147467259;
                  }
                  ((void (__fastcall *)(_QWORD, __int64))off_18019C160[0])(0LL, v740);
                  if ( v637 < 0 )
                    goto LABEL_946;
                  v744 = 0;
                  v745 = 0;
                  if ( v1341 != 1 )
                  {
                    if ( v1341 == 2 )
                    {
                      v744 = SDWORD2(v1574) / 4;
                      v745 = 0;
LABEL_993:
                      *((_QWORD *)&v1437 + 1) = __PAIR64__(v745, v744);
                      if ( v1341 == 1 )
                      {
                        v746 = 150;
                        LODWORD(v1411) = 32;
                      }
                      else
                      {
                        if ( (unsigned int)(v1341 - 2) > 1 )
                        {
                          LODWORD(v1411) = v1436;
                          v747 = v1436;
                          v746 = v1436;
                          goto LABEL_1000;
                        }
                        v746 = 0;
                        LODWORD(v1411) = 0;
                      }
                      v747 = 0;
LABEL_1000:
                      v1317 = v746;
                      v748 = v744 - v746 - v747;
                      HIDWORD(v1649[14]) = v748;
                      HIDWORD(v1649[12]) = v748;
                      v749 = v1649[5];
                      v637 = 0;
                      v1394 = (const WCHAR *)((__int64 (__fastcall *)(__int64, _QWORD))off_18019C078[0])(
                                               v1335,
                                               v1649[8]);
                      if ( !((unsigned int (__fastcall *)(__int64, __int64, __int64, char *, int, _QWORD))off_18019C0D8[0])(
                              v1335,
                              v749,
                              0xFFFFFFFFLL,
                              (char *)&v1649[11] + 4,
                              3152,
                              0LL) )
                        v637 = -2147467259;
                      if ( v1394 )
                        ((void (__fastcall *)(__int64, const WCHAR *))off_18019C078[0])(v1335, v1394);
                      if ( v637 < 0 )
                        goto LABEL_945;
                      v750 = v1649[6];
                      v637 = 0;
                      v1394 = (const WCHAR *)((__int64 (__fastcall *)(__int64, _QWORD))off_18019C078[0])(
                                               v1335,
                                               v1649[9]);
                      if ( !((unsigned int (__fastcall *)(__int64, __int64, __int64, char *, int, _QWORD))off_18019C0D8[0])(
                              v1335,
                              v750,
                              0xFFFFFFFFLL,
                              (char *)&v1649[13] + 4,
                              3152,
                              0LL) )
                        v637 = -2147467259;
                      if ( v1394 )
                        ((void (__fastcall *)(__int64, const WCHAR *))off_18019C078[0])(v1335, v1394);
                      if ( v637 < 0 )
                        goto LABEL_945;
                      if ( (unsigned int)(v1341 - 2) <= 1 )
                      {
                        v748 = HIDWORD(v1649[14]);
                        if ( SHIDWORD(v1649[12]) > SHIDWORD(v1649[14]) )
                          v748 = HIDWORD(v1649[12]);
                      }
                      if ( LODWORD(v1649[4]) )
                      {
                        off_18019C150();
                        v751 = (unsigned int)(v748 + v747 - HIDWORD(v1649[14]));
                      }
                      else
                      {
                        off_18019C150();
                        v751 = v1317;
                      }
                      ((void (__fastcall *)(char *, __int64, _QWORD))off_18019C150)(
                        (char *)&v1649[13] + 4,
                        v751,
                        (unsigned int)(LODWORD(v1649[13]) + (_DWORD)v1411));
                      v634 = v1341;
                      if ( (unsigned int)(v1341 - 2) <= 1 )
                      {
                        *((_QWORD *)&v1437 + 1) = __PAIR64__(v1649[15], v748);
                        LODWORD(v1649[11]) = -5723992;
                      }
                      else if ( v1341 == 1 )
                      {
                        LODWORD(v1649[11]) = 0xFFFFFF;
                        memset(v1698, 0, 0x5CuLL);
                        v637 = 0;
                        v752 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0F8[0])(0LL, 0LL, 1027LL);
                        if ( v752 )
                        {
                          v754 = v1393;
                          v1698[0] = -((int (__fastcall *)(__int64, _QWORD))off_18019C0B8[0])(11LL, (unsigned int)v1393);
                          v1698[4] = 400;
                          BYTE2(v1698[6]) = 5;
                          sub_180057300(&v1698[7], 32LL, v1378);
                          v758 = ((__int64 (__fastcall *)(_DWORD *))off_18019C020[0])(v1698);
                          if ( v758 )
                          {
                            v1649[10] = v758;
                          }
                          else
                          {
                            v637 = GetLastError();
                            v759 = v637 < 0;
                            if ( v637 > 0 )
                            {
                              v637 = (unsigned __int16)v637 | 0x80070000;
                              v759 = v637 < 0;
                            }
                            if ( !v759 )
                              v637 = -2147467259;
                          }
                          ((void (__fastcall *)(_QWORD, __int64))off_18019C160[0])(0LL, v752);
                        }
                        else
                        {
                          v753 = GetLastError();
                          v637 = v753;
                          if ( v753 > 0 )
                            v637 = (unsigned __int16)v753 | 0x80070000;
                          if ( v637 >= 0 )
                          {
LABEL_981:
                            v637 = -2147467259;
                            goto LABEL_946;
                          }
                          v754 = v1393;
                        }
                        if ( v637 < 0 )
                          goto LABEL_945;
                        HIDWORD(v1649[16]) = v748;
                        v755 = v1649[7];
                        v637 = 0;
                        v756 = ((__int64 (__fastcall *)(__int64, _QWORD))off_18019C078[0])(v1335, v1649[10]);
                        if ( !((unsigned int (__fastcall *)(__int64, __int64, __int64, char *, int, _QWORD))off_18019C0D8[0])(
                                v1335,
                                v755,
                                0xFFFFFFFFLL,
                                (char *)&v1649[15] + 4,
                                1120,
                                0LL) )
                          v637 = -2147467259;
                        if ( v756 )
                          ((void (__fastcall *)(__int64, __int64))off_18019C078[0])(v1335, v756);
                        if ( v637 < 0 )
                          goto LABEL_945;
                        v757 = HIDWORD(v1649[16]) + 24;
                        if ( HIDWORD(v1649[16]) + 24 < 90 )
                          v757 = 90;
                        HIDWORD(v1649[16]) = v757;
                        LODWORD(v1649[17]) = 32;
                        HIDWORD(v1649[15]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                               HIDWORD(v1649[15]),
                                               v754,
                                               96LL);
                        LODWORD(v1649[16]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                               LODWORD(v1649[16]),
                                               v754,
                                               96LL);
                        HIDWORD(v1649[16]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                               HIDWORD(v1649[16]),
                                               v754,
                                               96LL);
                        LODWORD(v1649[17]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18019C0B8[0])(
                                               LODWORD(v1649[17]),
                                               v754,
                                               96LL);
                        off_18019C150();
                        v634 = v1341;
                      }
                      v760 = v1649[4];
                      v761 = HIDWORD(v1437);
                      v762 = DWORD2(v1437);
                      switch ( v634 )
                      {
                        case 1:
                          *(_QWORD *)&v1437 = 0LL;
                          goto LABEL_1046;
                        case 2:
                          v1690 = 0LL;
                          v1691 = 0LL;
                          v1692 = 0LL;
                          v766 = ((__int64 (__fastcall *)(_QWORD))off_18019C148[0])(0LL);
                          LODWORD(v1690) = 40;
                          if ( !((unsigned int (__fastcall *)(__int64, __int128 *))off_18019C108[0])(v766, &v1690) )
                            goto LABEL_1046;
                          ((void (__fastcall *)(_QWORD, char *))off_18019C140[0])(0LL, (char *)&v1691 + 4);
                          ((void (__fastcall *)(_QWORD, char *))off_18019C140[0])(0LL, (char *)&v1691 + 12);
                          if ( v760 )
                            v764 = DWORD1(v1691) + 5 * HIDWORD(v1691) / 100;
                          else
                            v764 = 95 * (HIDWORD(v1691) - v762) / 100;
                          v765 = 95 * (v1692 - v761);
                          break;
                        case 3:
                          v1693 = 0LL;
                          v1694 = 0LL;
                          v1695 = 0LL;
                          v763 = ((__int64 (__fastcall *)(_QWORD))off_18019C148[0])(0LL);
                          LODWORD(v1693) = 40;
                          if ( !((unsigned int (__fastcall *)(__int64, __int128 *))off_18019C108[0])(v763, &v1693) )
                            goto LABEL_1046;
                          ((void (__fastcall *)(_QWORD, char *))off_18019C140[0])(0LL, (char *)&v1694 + 4);
                          ((void (__fastcall *)(_QWORD, char *))off_18019C140[0])(0LL, (char *)&v1694 + 12);
                          v764 = 50 * (HIDWORD(v1694) - v762) / 100;
                          v765 = 50 * (v1695 - v761);
                          break;
                        default:
                          goto LABEL_1046;
                      }
                      LODWORD(v1437) = v764;
                      DWORD1(v1437) = v765 / 100;
LABEL_1046:
                      v637 = 0;
                      goto LABEL_946;
                    }
                    if ( v1341 != 3 )
                      goto LABEL_993;
                  }
                  v744 = DWORD2(v1574);
                  v745 = HIDWORD(v1574);
                  goto LABEL_993;
                }
                LODWORD(v1397) = 15;
              }
              LODWORD(v1411) = 11;
              goto LABEL_934;
            }
            v704 = v1484;
            v705 = (WCHAR **)v1707;
            v706 = 6LL;
            do
            {
              for ( nn = 0; nn < 0x26; ++nn )
              {
                if ( v1316 == nn )
                  *v705 = v704;
                v708 = -1LL;
                do
                  ++v708;
                while ( *((_BYTE *)v704 + v708) );
                v704 = (WCHAR *)((char *)v704 + v708 + 1);
              }
              ++v705;
              --v706;
            }
            while ( v706 );
            v709 = sub_180055F40(24LL);
            unknown_libname_376(&v1457);
            if ( !v709 )
            {
              v710 = 0LL;
              v1457 = 0LL;
              v637 = -2147024882;
LABEL_909:
              if ( v710 )
              {
                v638 = 3LL;
                do
                {
                  v723 = *v710;
                  if ( *v710 )
                  {
                    v724 = -1LL;
                    do
                      ++v724;
                    while ( v723[v724] );
                    memset(v723, 0, 2 * v724 + 2);
                    sub_180033A70(*v710);
                  }
                  ++v710;
                  --v638;
                }
                while ( v638 );
              }
              goto LABEL_916;
            }
            v710 = (void **)v709;
            v1457 = v709;
            *(_OWORD *)v709 = 0LL;
            *(_QWORD *)(v709 + 16) = 0LL;
            v711 = 0;
            v1326 = 0;
            v712 = (_QWORD *)v709;
            v1386 = (_QWORD *)v709;
            v713 = v1709;
            v1399 = v1709;
            while ( 2 )
            {
              v714 = 0LL;
              v715 = *v713;
              v716 = &unk_1801781C8;
              while ( v715 != *v716 )
              {
                v714 = (unsigned int)(v714 + 1);
                ++v716;
                if ( (unsigned int)v714 >= 6 )
                  goto LABEL_900;
              }
              v638 = v1707[v714];
              v717 = -1LL;
              do
                ++v717;
              while ( *(_BYTE *)(v717 + v638) );
              v718 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_18019C0C0[0])(
                       65001LL,
                       0LL,
                       v638,
                       (unsigned int)(v717 + 1),
                       0LL,
                       0);
              v1345 = v718;
              if ( v718 )
              {
                v719 = sub_180055F40(2LL * v718);
                *v1386 = v719;
                if ( !v719 )
                {
                  v637 = -2147024882;
                  LODWORD(v638) = 0;
                  goto LABEL_909;
                }
                v720 = -1LL;
                do
                  ++v720;
                while ( *(_BYTE *)(v720 + v638) );
                v721 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, int))off_18019C0C0[0])(
                         65001LL,
                         0LL,
                         v638,
                         (unsigned int)(v720 + 1),
                         v719,
                         v1345);
                LODWORD(v638) = 0;
                if ( v721 )
                {
                  v712 = v1386;
                  v711 = v1326;
LABEL_900:
                  v1326 = ++v711;
                  v713 = (__int16 *)((char *)v1399 + 2);
                  v1399 = (char *)v1399 + 2;
                  v1386 = ++v712;
                  if ( v711 < 3 )
                    continue;
                  v710 = 0LL;
                  v1457 = 0LL;
                  v1542 = (_QWORD *)v709;
                  LODWORD(v1649[4]) = v1393;
                  goto LABEL_909;
                }
                v722 = GetLastError();
              }
              else
              {
                v722 = GetLastError();
                LODWORD(v638) = 0;
              }
              break;
            }
            v637 = v722;
            if ( v722 > 0 )
              v637 = (unsigned __int16)v722 | 0x80070000;
            if ( v637 >= 0 )
              v637 = -2147467259;
            goto LABEL_909;
          }
          v573 = dword_18019E4C8;
        }
        dword_18019E4C8 = v573 + 1;
        goto LABEL_825;
      }
      v511 = dword_18019E4C8;
    }
    dword_18019E4C8 = v511 + 1;
    goto LABEL_777;
  }
  v1430 = 0LL;
  v84 = -2147024882;
LABEL_103:
  v85 = v1451;
LABEL_104:
  while ( _InterlockedCompareExchange(&dword_18019EB40, 1, 0) )
    ;
  v86 = dword_18019E4C8;
  if ( dword_18019E4C8 > 0 )
  {
    --dword_18019E4C8;
    if ( v86 == 1 )
    {
      v87 = (HMODULE *)&unk_18019EA60;
      v88 = 4LL;
      do
      {
        if ( *v87 )
          FreeLibrary(*v87);
        v87 += 3;
        --v88;
      }
      while ( v88 );
      memset(&unk_18019EA60, 0, 0x60uLL);
      memcpy(off_18019C000, off_18014B510, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_18019EB40, 0);
  sub_180067CF8(&v1430);
  if ( v84 >= 0 )
  {
    v1 = (__int64)v1458;
    if ( v85 == 4 )
      *v1611 = *v1550;
  }
  else
  {
    v1 = (__int64)v1458;
  }
LABEL_114:
  sub_180067CF8(&v1550);
  *(_BYTE *)(v1 + 208) = !sub_180009DE0(v1);
  return v1;
}
