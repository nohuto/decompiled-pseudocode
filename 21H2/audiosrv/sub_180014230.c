/*
 * XREFs of sub_180014230 @ 0x180014230
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180012C30 @ 0x180012C30 (sub_180012C30.c)
 *     sub_180013360 @ 0x180013360 (sub_180013360.c)
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_180017690 @ 0x180017690 (sub_180017690.c)
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004B400 @ 0x18004B400 (sub_18004B400.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     sub_180054090 @ 0x180054090 (sub_180054090.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     sub_1800702D8 @ 0x1800702D8 (sub_1800702D8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800D0B30 @ 0x1800D0B30 (sub_1800D0B30.c)
 *     sub_1800DC0A4 @ 0x1800DC0A4 (sub_1800DC0A4.c)
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 *     sub_1800E9458 @ 0x1800E9458 (sub_1800E9458.c)
 *     sub_1800E96B8 @ 0x1800E96B8 (sub_1800E96B8.c)
 *     sub_1800EA77C @ 0x1800EA77C (sub_1800EA77C.c)
 *     sub_1800EA9AC @ 0x1800EA9AC (sub_1800EA9AC.c)
 *     sub_1800EC438 @ 0x1800EC438 (sub_1800EC438.c)
 *     sub_1800EC60C @ 0x1800EC60C (sub_1800EC60C.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 */

__int64 __fastcall sub_180014230(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        _QWORD *a12,
        unsigned int a13,
        int a14,
        __int64 a15,
        char *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        unsigned int a22,
        __int64 a23,
        unsigned int a24,
        __int64 a25,
        __int64 a26,
        __int64 a27)
{
  __int64 *v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64 *, LPVOID *); // rax
  int v31; // eax
  int v32; // edi
  int v33; // eax
  unsigned int v34; // edx
  __int64 v35; // rcx
  void (__fastcall ***v36)(_QWORD, void *, __int64 *); // r9
  __int64 v37; // rcx
  int v38; // edi
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // rdx
  int v42; // r14d
  unsigned int v43; // r13d
  int v44; // eax
  void *v45; // rcx
  int v46; // eax
  int v47; // ebx
  int v48; // eax
  __int128 v49; // xmm6
  __int128 v50; // xmm7
  __int128 v51; // xmm8
  void *v52; // rcx
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  __int64 v56; // rcx
  int v57; // eax
  _DWORD *v58; // rdx
  _DWORD *v59; // rbx
  _DWORD *v60; // rcx
  int v61; // eax
  _DWORD *v62; // r8
  int v63; // r9d
  __int16 v64; // dx
  __int64 v65; // r10
  __int16 v66; // cx
  __int64 v67; // rcx
  _DWORD *v68; // rbx
  _DWORD *v69; // rcx
  int v70; // eax
  _DWORD *v71; // r8
  int v72; // r9d
  __int16 v73; // dx
  __int64 v74; // r10
  __int16 v75; // cx
  __int64 v76; // rcx
  _DWORD *v77; // rbx
  _DWORD *v78; // rcx
  int v79; // eax
  _DWORD *v80; // r8
  int v81; // r9d
  __int16 v82; // dx
  __int64 v83; // r10
  __int16 v84; // cx
  __int64 v85; // rcx
  _DWORD *v86; // rbx
  _DWORD *v87; // rcx
  int v88; // eax
  _DWORD *v89; // r8
  int v90; // r9d
  __int16 v91; // dx
  int v92; // eax
  __int64 v93; // r10
  __int16 v94; // cx
  __int64 v95; // rcx
  char v96; // r14
  LPVOID v97; // rsi
  __int64 v98; // rax
  __int64 (__fastcall *v99)(__int64 *); // rax
  __int64 v100; // rax
  unsigned int v101; // r15d
  _QWORD *v102; // r12
  void *v103; // rcx
  void *v104; // rcx
  __int64 v105; // rcx
  unsigned int v106; // r14d
  __int64 v107; // rbx
  int v108; // eax
  __int64 v109; // rax
  int v110; // eax
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // rbx
  __int64 v116; // rax
  int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // rsi
  __int64 v120; // rcx
  LPVOID v121; // rdi
  __int64 *v122; // rsi
  __int64 v123; // rbx
  unsigned int v124; // eax
  int v125; // eax
  __int64 v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // r15
  LPVOID v131; // r14
  __int64 *v132; // rsi
  int v133; // eax
  int v134; // eax
  int v135; // eax
  __int64 v136; // rcx
  __int64 v137; // rcx
  char v138; // r15
  __int64 v139; // rdx
  int v140; // ecx
  int v141; // eax
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // rdx
  int v145; // esi
  int v146; // ecx
  int v147; // eax
  __int64 v148; // rcx
  bool v149; // r12
  __int64 v150; // rsi
  __int64 v151; // r14
  char v152; // di
  char v153; // al
  _QWORD *v154; // rax
  _QWORD *v155; // rsi
  int v156; // eax
  int v157; // eax
  char v158; // al
  int v159; // eax
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r10
  __int64 v163; // rbx
  __int64 v164; // rcx
  bool v165; // bl
  __int64 v166; // rcx
  __int64 v167; // rdi
  __int64 v168; // rbx
  int v169; // eax
  int v170; // r8d
  int v171; // r9d
  __int64 v172; // rbx
  __int64 v173; // rbx
  int v174; // eax
  int v175; // eax
  __int64 v176; // rdx
  unsigned int v177; // eax
  int v178; // eax
  __int64 v179; // rcx
  __int64 v180; // rdx
  void *v181; // rcx
  void *v182; // rcx
  void *v183; // rcx
  void *v184; // rcx
  void *v185; // rcx
  void *v186; // rcx
  __int64 *Src; // [rsp+38h] [rbp-120h]
  char v189; // [rsp+40h] [rbp-118h]
  int v190; // [rsp+48h] [rbp-110h]
  char v191; // [rsp+D8h] [rbp-80h]
  __int64 v192; // [rsp+E0h] [rbp-78h] BYREF
  char v193; // [rsp+E8h] [rbp-70h]
  unsigned int v194; // [rsp+ECh] [rbp-6Ch]
  __int64 v195; // [rsp+F0h] [rbp-68h] BYREF
  unsigned int v196; // [rsp+F8h] [rbp-60h]
  __int64 v197; // [rsp+100h] [rbp-58h] BYREF
  __int64 *v198; // [rsp+108h] [rbp-50h]
  LPVOID v199; // [rsp+110h] [rbp-48h] BYREF
  __int16 v200; // [rsp+118h] [rbp-40h] BYREF
  __int16 v201; // [rsp+11Ah] [rbp-3Eh] BYREF
  __int16 v202; // [rsp+11Ch] [rbp-3Ch] BYREF
  __int16 v203; // [rsp+11Eh] [rbp-3Ah] BYREF
  __int16 v204; // [rsp+120h] [rbp-38h] BYREF
  __int16 v205; // [rsp+122h] [rbp-36h] BYREF
  __int16 v206; // [rsp+124h] [rbp-34h] BYREF
  unsigned int v207; // [rsp+128h] [rbp-30h]
  LPVOID v208; // [rsp+130h] [rbp-28h] BYREF
  LPVOID v209; // [rsp+138h] [rbp-20h] BYREF
  LPVOID v210; // [rsp+140h] [rbp-18h] BYREF
  __int16 v211; // [rsp+148h] [rbp-10h] BYREF
  __int16 v212; // [rsp+14Ah] [rbp-Eh] BYREF
  __int16 v213; // [rsp+14Ch] [rbp-Ch] BYREF
  __int64 v214; // [rsp+150h] [rbp-8h] BYREF
  __int64 v215; // [rsp+158h] [rbp+0h] BYREF
  __int64 v216; // [rsp+160h] [rbp+8h] BYREF
  __int64 v217; // [rsp+168h] [rbp+10h] BYREF
  LPVOID v218; // [rsp+170h] [rbp+18h] BYREF
  LPVOID v219; // [rsp+178h] [rbp+20h] BYREF
  int v220; // [rsp+180h] [rbp+28h]
  int v221; // [rsp+184h] [rbp+2Ch] BYREF
  LPVOID pv; // [rsp+188h] [rbp+30h] BYREF
  __int64 v223; // [rsp+190h] [rbp+38h]
  __int64 v224; // [rsp+198h] [rbp+40h] BYREF
  __int64 v225; // [rsp+1A0h] [rbp+48h] BYREF
  __int64 v226; // [rsp+1A8h] [rbp+50h] BYREF
  __int64 v227; // [rsp+1B0h] [rbp+58h] BYREF
  __int64 v228; // [rsp+1B8h] [rbp+60h] BYREF
  LPVOID v229; // [rsp+1C0h] [rbp+68h] BYREF
  int v230; // [rsp+1C8h] [rbp+70h] BYREF
  WINBOOL fPending; // [rsp+1CCh] [rbp+74h] BYREF
  int v232; // [rsp+1D0h] [rbp+78h] BYREF
  int v233; // [rsp+1D4h] [rbp+7Ch] BYREF
  int v234; // [rsp+1D8h] [rbp+80h] BYREF
  int v235; // [rsp+1DCh] [rbp+84h] BYREF
  int v236; // [rsp+1E0h] [rbp+88h] BYREF
  int v237; // [rsp+1E4h] [rbp+8Ch] BYREF
  int v238; // [rsp+1E8h] [rbp+90h] BYREF
  int v239; // [rsp+1ECh] [rbp+94h] BYREF
  WINBOOL v240; // [rsp+1F0h] [rbp+98h] BYREF
  int v241; // [rsp+1F4h] [rbp+9Ch] BYREF
  int v242; // [rsp+1F8h] [rbp+A0h] BYREF
  int v243; // [rsp+1FCh] [rbp+A4h] BYREF
  int v244; // [rsp+200h] [rbp+A8h] BYREF
  int v245; // [rsp+204h] [rbp+ACh] BYREF
  int v246; // [rsp+208h] [rbp+B0h] BYREF
  WINBOOL v247; // [rsp+20Ch] [rbp+B4h] BYREF
  int v248; // [rsp+210h] [rbp+B8h] BYREF
  int v249; // [rsp+214h] [rbp+BCh] BYREF
  int v250; // [rsp+218h] [rbp+C0h] BYREF
  int v251; // [rsp+21Ch] [rbp+C4h] BYREF
  int v252; // [rsp+220h] [rbp+C8h] BYREF
  int v253; // [rsp+224h] [rbp+CCh] BYREF
  WINBOOL v254; // [rsp+228h] [rbp+D0h] BYREF
  int v255; // [rsp+22Ch] [rbp+D4h] BYREF
  int v256; // [rsp+230h] [rbp+D8h] BYREF
  int v257; // [rsp+234h] [rbp+DCh] BYREF
  int v258; // [rsp+238h] [rbp+E0h] BYREF
  int v259; // [rsp+23Ch] [rbp+E4h] BYREF
  int v260; // [rsp+240h] [rbp+E8h] BYREF
  WINBOOL v261; // [rsp+244h] [rbp+ECh] BYREF
  int v262; // [rsp+248h] [rbp+F0h] BYREF
  int v263; // [rsp+24Ch] [rbp+F4h] BYREF
  int v264; // [rsp+250h] [rbp+F8h] BYREF
  WINBOOL v265; // [rsp+254h] [rbp+FCh] BYREF
  int v266; // [rsp+258h] [rbp+100h] BYREF
  int v267; // [rsp+25Ch] [rbp+104h]
  __int64 v268; // [rsp+260h] [rbp+108h] BYREF
  LPVOID Context; // [rsp+268h] [rbp+110h] BYREF
  LPVOID v270; // [rsp+270h] [rbp+118h] BYREF
  LPVOID v271; // [rsp+278h] [rbp+120h] BYREF
  LPVOID v272; // [rsp+280h] [rbp+128h] BYREF
  LPVOID v273; // [rsp+288h] [rbp+130h] BYREF
  __int64 v274; // [rsp+290h] [rbp+138h]
  __int64 v275; // [rsp+298h] [rbp+140h]
  LPVOID v276; // [rsp+2A0h] [rbp+148h] BYREF
  __int64 v277; // [rsp+2A8h] [rbp+150h] BYREF
  __int64 v278; // [rsp+2B0h] [rbp+158h] BYREF
  unsigned int v279; // [rsp+2B8h] [rbp+160h]
  __int64 v280; // [rsp+2C0h] [rbp+168h]
  __int64 v281; // [rsp+2C8h] [rbp+170h]
  int v282[2]; // [rsp+2D0h] [rbp+178h]
  __int64 v283; // [rsp+2D8h] [rbp+180h]
  __int64 v284; // [rsp+2E0h] [rbp+188h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+2E8h] [rbp+190h] BYREF
  __int64 v286; // [rsp+2F0h] [rbp+198h]
  __int64 v287; // [rsp+2F8h] [rbp+1A0h] BYREF
  LPVOID *v288; // [rsp+300h] [rbp+1A8h]
  __int64 v289; // [rsp+308h] [rbp+1B0h] BYREF
  char v290; // [rsp+310h] [rbp+1B8h]
  LPVOID *v291; // [rsp+318h] [rbp+1C0h]
  __int64 v292; // [rsp+320h] [rbp+1C8h] BYREF
  char v293; // [rsp+328h] [rbp+1D0h]
  LPVOID *v294; // [rsp+330h] [rbp+1D8h]
  __int64 v295; // [rsp+338h] [rbp+1E0h] BYREF
  char v296; // [rsp+340h] [rbp+1E8h]
  LPVOID *v297; // [rsp+348h] [rbp+1F0h]
  void *v298; // [rsp+350h] [rbp+1F8h] BYREF
  char v299; // [rsp+358h] [rbp+200h]
  LPVOID *v300; // [rsp+360h] [rbp+208h]
  void *v301; // [rsp+368h] [rbp+210h] BYREF
  char v302; // [rsp+370h] [rbp+218h]
  LPVOID *v303; // [rsp+378h] [rbp+220h]
  __int64 v304; // [rsp+380h] [rbp+228h] BYREF
  char v305; // [rsp+388h] [rbp+230h]
  __int64 *v306; // [rsp+390h] [rbp+238h]
  __int64 v307; // [rsp+398h] [rbp+240h] BYREF
  char v308; // [rsp+3A0h] [rbp+248h]
  __int64 *v309; // [rsp+3A8h] [rbp+250h]
  __int64 v310; // [rsp+3B0h] [rbp+258h] BYREF
  char v311; // [rsp+3B8h] [rbp+260h]
  __int64 *v312; // [rsp+3C0h] [rbp+268h]
  __int64 v313; // [rsp+3C8h] [rbp+270h] BYREF
  char v314; // [rsp+3D0h] [rbp+278h]
  __int64 *v315; // [rsp+3D8h] [rbp+280h]
  __int64 v316; // [rsp+3E0h] [rbp+288h] BYREF
  char v317; // [rsp+3E8h] [rbp+290h]
  __int64 *v318; // [rsp+3F0h] [rbp+298h]
  __int64 v319; // [rsp+3F8h] [rbp+2A0h] BYREF
  char v320; // [rsp+400h] [rbp+2A8h]
  __int64 v321; // [rsp+408h] [rbp+2B0h] BYREF
  __int64 v322; // [rsp+410h] [rbp+2B8h] BYREF
  __int128 *v323; // [rsp+418h] [rbp+2C0h] BYREF
  _DWORD v324[2]; // [rsp+420h] [rbp+2C8h] BYREF
  __int64 v325; // [rsp+428h] [rbp+2D0h]
  _DWORD v326[2]; // [rsp+430h] [rbp+2D8h] BYREF
  __int64 v327; // [rsp+438h] [rbp+2E0h]
  _DWORD v328[2]; // [rsp+440h] [rbp+2E8h] BYREF
  __int64 v329; // [rsp+448h] [rbp+2F0h]
  _DWORD v330[2]; // [rsp+450h] [rbp+2F8h] BYREF
  __int64 v331; // [rsp+458h] [rbp+300h]
  _DWORD v332[2]; // [rsp+460h] [rbp+308h] BYREF
  __int64 v333; // [rsp+468h] [rbp+310h]
  _DWORD v334[2]; // [rsp+470h] [rbp+318h] BYREF
  __int64 v335; // [rsp+478h] [rbp+320h]
  const wchar_t *v336; // [rsp+480h] [rbp+328h] BYREF
  __int128 *v337; // [rsp+488h] [rbp+330h] BYREF
  const wchar_t *v338; // [rsp+490h] [rbp+338h] BYREF
  __int128 *v339; // [rsp+498h] [rbp+340h] BYREF
  const wchar_t *v340; // [rsp+4A0h] [rbp+348h] BYREF
  __int128 *v341; // [rsp+4A8h] [rbp+350h] BYREF
  const wchar_t *v342; // [rsp+4B0h] [rbp+358h] BYREF
  __int64 v343; // [rsp+4B8h] [rbp+360h]
  __int64 v344; // [rsp+4C0h] [rbp+368h]
  __int64 v345; // [rsp+4C8h] [rbp+370h]
  __int64 v346; // [rsp+4D0h] [rbp+378h] BYREF
  PROPVARIANT v347[2]; // [rsp+4D8h] [rbp+380h] BYREF
  __int64 v348; // [rsp+4E8h] [rbp+390h]
  PROPVARIANT pvar[2]; // [rsp+4F0h] [rbp+398h] BYREF
  __int64 v350; // [rsp+500h] [rbp+3A8h]
  __int128 v351; // [rsp+508h] [rbp+3B0h] BYREF
  __int128 v352; // [rsp+518h] [rbp+3C0h] BYREF
  __int128 v353; // [rsp+528h] [rbp+3D0h] BYREF
  union _RTL_RUN_ONCE *v354; // [rsp+538h] [rbp+3E0h] BYREF
  int v355; // [rsp+540h] [rbp+3E8h]
  __int128 v356; // [rsp+548h] [rbp+3F0h] BYREF
  union _RTL_RUN_ONCE *v357; // [rsp+558h] [rbp+400h] BYREF
  int v358; // [rsp+560h] [rbp+408h]
  __int128 v359; // [rsp+568h] [rbp+410h] BYREF
  __int128 v360; // [rsp+578h] [rbp+420h] BYREF
  __int128 v361; // [rsp+588h] [rbp+430h] BYREF
  __int64 v362[2]; // [rsp+598h] [rbp+440h] BYREF
  int v363[4]; // [rsp+5A8h] [rbp+450h] BYREF
  __int128 v364; // [rsp+5B8h] [rbp+460h] BYREF
  __int64 v365[2]; // [rsp+5C8h] [rbp+470h] BYREF
  __int64 v366[2]; // [rsp+5D8h] [rbp+480h] BYREF
  __int64 v367[2]; // [rsp+5E8h] [rbp+490h] BYREF
  __int128 v368; // [rsp+5F8h] [rbp+4A0h] BYREF
  __int128 v369; // [rsp+608h] [rbp+4B0h] BYREF
  __int128 v370; // [rsp+618h] [rbp+4C0h] BYREF
  __int128 v371; // [rsp+628h] [rbp+4D0h] BYREF
  __int128 v372; // [rsp+638h] [rbp+4E0h] BYREF
  __int128 v373; // [rsp+648h] [rbp+4F0h] BYREF
  __int128 v374; // [rsp+658h] [rbp+500h] BYREF
  __int128 v375; // [rsp+668h] [rbp+510h] BYREF
  __int128 v376; // [rsp+678h] [rbp+520h] BYREF
  __int128 v377; // [rsp+688h] [rbp+530h] BYREF
  unsigned __int16 *v378; // [rsp+698h] [rbp+540h]
  int v379; // [rsp+6A0h] [rbp+548h]
  int v380; // [rsp+6A4h] [rbp+54Ch]
  void *v381; // [rsp+6A8h] [rbp+550h]
  int v382; // [rsp+6B0h] [rbp+558h]
  int v383; // [rsp+6B4h] [rbp+55Ch]
  const wchar_t *v384; // [rsp+6B8h] [rbp+560h]
  __int64 v385; // [rsp+6C0h] [rbp+568h]
  __int16 *v386; // [rsp+6C8h] [rbp+570h]
  __int64 v387; // [rsp+6D0h] [rbp+578h]
  int *v388; // [rsp+6D8h] [rbp+580h]
  __int64 v389; // [rsp+6E0h] [rbp+588h]
  int *v390; // [rsp+6E8h] [rbp+590h]
  __int64 v391; // [rsp+6F0h] [rbp+598h]
  __int128 *v392; // [rsp+6F8h] [rbp+5A0h]
  __int64 v393; // [rsp+700h] [rbp+5A8h]
  unsigned __int16 *v394; // [rsp+708h] [rbp+5B0h]
  int v395; // [rsp+710h] [rbp+5B8h]
  int v396; // [rsp+714h] [rbp+5BCh]
  void *v397; // [rsp+718h] [rbp+5C0h]
  int v398; // [rsp+720h] [rbp+5C8h]
  int v399; // [rsp+724h] [rbp+5CCh]
  const wchar_t *v400; // [rsp+728h] [rbp+5D0h]
  __int64 v401; // [rsp+730h] [rbp+5D8h]
  __int16 *v402; // [rsp+738h] [rbp+5E0h]
  __int64 v403; // [rsp+740h] [rbp+5E8h]
  int *v404; // [rsp+748h] [rbp+5F0h]
  __int64 v405; // [rsp+750h] [rbp+5F8h]
  int *v406; // [rsp+758h] [rbp+600h]
  __int64 v407; // [rsp+760h] [rbp+608h]
  char *v408; // [rsp+768h] [rbp+610h]
  __int64 v409; // [rsp+770h] [rbp+618h]
  int *v410; // [rsp+778h] [rbp+620h]
  __int64 v411; // [rsp+780h] [rbp+628h]
  unsigned __int16 *v412; // [rsp+788h] [rbp+630h]
  int v413; // [rsp+790h] [rbp+638h]
  int v414; // [rsp+794h] [rbp+63Ch]
  void *v415; // [rsp+798h] [rbp+640h]
  int v416; // [rsp+7A0h] [rbp+648h]
  int v417; // [rsp+7A4h] [rbp+64Ch]
  const wchar_t *v418; // [rsp+7A8h] [rbp+650h]
  __int64 v419; // [rsp+7B0h] [rbp+658h]
  __int16 *v420; // [rsp+7B8h] [rbp+660h]
  __int64 v421; // [rsp+7C0h] [rbp+668h]
  int *v422; // [rsp+7C8h] [rbp+670h]
  __int64 v423; // [rsp+7D0h] [rbp+678h]
  int *v424; // [rsp+7D8h] [rbp+680h]
  __int64 v425; // [rsp+7E0h] [rbp+688h]
  char *v426; // [rsp+7E8h] [rbp+690h]
  __int64 v427; // [rsp+7F0h] [rbp+698h]
  int *v428; // [rsp+7F8h] [rbp+6A0h]
  __int64 v429; // [rsp+800h] [rbp+6A8h]
  unsigned __int16 *v430; // [rsp+808h] [rbp+6B0h]
  int v431; // [rsp+810h] [rbp+6B8h]
  int v432; // [rsp+814h] [rbp+6BCh]
  void *v433; // [rsp+818h] [rbp+6C0h]
  int v434; // [rsp+820h] [rbp+6C8h]
  int v435; // [rsp+824h] [rbp+6CCh]
  const wchar_t *v436; // [rsp+828h] [rbp+6D0h]
  __int64 v437; // [rsp+830h] [rbp+6D8h]
  __int16 *v438; // [rsp+838h] [rbp+6E0h]
  __int64 v439; // [rsp+840h] [rbp+6E8h]
  int *v440; // [rsp+848h] [rbp+6F0h]
  __int64 v441; // [rsp+850h] [rbp+6F8h]
  int *v442; // [rsp+858h] [rbp+700h]
  __int64 v443; // [rsp+860h] [rbp+708h]
  char *v444; // [rsp+868h] [rbp+710h]
  __int64 v445; // [rsp+870h] [rbp+718h]
  int *v446; // [rsp+878h] [rbp+720h]
  __int64 v447; // [rsp+880h] [rbp+728h]
  unsigned __int16 *v448; // [rsp+888h] [rbp+730h]
  int v449; // [rsp+890h] [rbp+738h]
  int v450; // [rsp+894h] [rbp+73Ch]
  void *v451; // [rsp+898h] [rbp+740h]
  int v452; // [rsp+8A0h] [rbp+748h]
  int v453; // [rsp+8A4h] [rbp+74Ch]
  const wchar_t *v454; // [rsp+8A8h] [rbp+750h]
  __int64 v455; // [rsp+8B0h] [rbp+758h]
  __int16 *v456; // [rsp+8B8h] [rbp+760h]
  __int64 v457; // [rsp+8C0h] [rbp+768h]
  int *v458; // [rsp+8C8h] [rbp+770h]
  __int64 v459; // [rsp+8D0h] [rbp+778h]
  int *v460; // [rsp+8D8h] [rbp+780h]
  __int64 v461; // [rsp+8E0h] [rbp+788h]
  char *v462; // [rsp+8E8h] [rbp+790h]
  __int64 v463; // [rsp+8F0h] [rbp+798h]
  int *v464; // [rsp+8F8h] [rbp+7A0h]
  __int64 v465; // [rsp+900h] [rbp+7A8h]
  unsigned __int16 *v466; // [rsp+908h] [rbp+7B0h]
  int v467; // [rsp+910h] [rbp+7B8h]
  int v468; // [rsp+914h] [rbp+7BCh]
  void *v469; // [rsp+918h] [rbp+7C0h]
  int v470; // [rsp+920h] [rbp+7C8h]
  int v471; // [rsp+924h] [rbp+7CCh]
  const wchar_t *v472; // [rsp+928h] [rbp+7D0h]
  __int64 v473; // [rsp+930h] [rbp+7D8h]
  __int16 *v474; // [rsp+938h] [rbp+7E0h]
  __int64 v475; // [rsp+940h] [rbp+7E8h]
  int *v476; // [rsp+948h] [rbp+7F0h]
  __int64 v477; // [rsp+950h] [rbp+7F8h]
  int *v478; // [rsp+958h] [rbp+800h]
  __int64 v479; // [rsp+960h] [rbp+808h]
  char *v480; // [rsp+968h] [rbp+810h]
  __int64 v481; // [rsp+970h] [rbp+818h]
  int *v482; // [rsp+978h] [rbp+820h]
  __int64 v483; // [rsp+980h] [rbp+828h]
  char v484[32]; // [rsp+988h] [rbp+830h] BYREF
  int *v485; // [rsp+9A8h] [rbp+850h]
  __int64 v486; // [rsp+9B0h] [rbp+858h]
  char v487[32]; // [rsp+9B8h] [rbp+860h] BYREF
  int *v488; // [rsp+9D8h] [rbp+880h]
  __int64 v489; // [rsp+9E0h] [rbp+888h]
  char v490[32]; // [rsp+9E8h] [rbp+890h] BYREF
  int *v491; // [rsp+A08h] [rbp+8B0h]
  __int64 v492; // [rsp+A10h] [rbp+8B8h]
  char v493[32]; // [rsp+A18h] [rbp+8C0h] BYREF
  int *v494; // [rsp+A38h] [rbp+8E0h]
  __int64 v495; // [rsp+A40h] [rbp+8E8h]
  char v496[32]; // [rsp+A48h] [rbp+8F0h] BYREF
  int *v497; // [rsp+A68h] [rbp+910h]
  __int64 v498; // [rsp+A70h] [rbp+918h]
  char v499[16]; // [rsp+A78h] [rbp+920h] BYREF
  char v500[16]; // [rsp+A88h] [rbp+930h] BYREF
  void *retaddr; // [rsp+B20h] [rbp+9C8h]

  v284 = a15;
  v281 = a19;
  v280 = a20;
  v283 = a21;
  v344 = a23;
  v343 = a25;
  v275 = a27;
  v274 = a1;
  v27 = (__int64 *)a12[2];
  v219 = 0LL;
  v28 = a26;
  v29 = *v27;
  v223 = a2;
  v220 = a4;
  v198 = (__int64 *)a3;
  v30 = *(__int64 (__fastcall **)(__int64 *, LPVOID *))(v29 + 40);
  v194 = a13;
  *(_QWORD *)v282 = a12;
  v345 = a26;
  v31 = v30(v27, &v219);
  v32 = v31;
  if ( v31 < 0 )
  {
    sub_18004BD84(
      retaddr,
      1336LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (unsigned int)v31);
    goto LABEL_305;
  }
  v33 = (*(__int64 (__fastcall **)(_QWORD *))(*a12 + 56LL))(a12);
  v34 = 1;
  if ( !v33 )
    v34 = HIWORD(a13) & 2;
  v35 = a12[2];
  v207 = v34;
  v286 = v35;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  v36 = (void (__fastcall ***)(_QWORD, void *, __int64 *))a12[2];
  v37 = 0LL;
  v221 = 0;
  v268 = 0LL;
  if ( v36 )
  {
    (**v36)(v36, &unk_18015B040, &v268);
    v37 = v268;
    if ( v268 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v268 + 88LL))(v268, &v221);
      v37 = v268;
    }
  }
  v38 = v221;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  v39 = a12[5];
  v350 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v40 = 1;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v39 + 40LL))(v39, &unk_18015B5F8, pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v40 = 0;
  }
  PropVariantClear(pvar);
  v267 = a13 & 0x400000;
  if ( (a13 & 0x400000) != 0 )
  {
    v42 = a14;
    v43 = 3;
    goto LABEL_28;
  }
  v44 = a13 & 0x20000;
  if ( v28 && v44 )
  {
    v43 = 0;
    v42 = a14;
    goto LABEL_28;
  }
  if ( v40 && v44 )
  {
    v42 = a14;
    v43 = 2;
    goto LABEL_28;
  }
  v42 = a14;
  if ( a14 == 1 )
  {
    pv = 0LL;
    v45 = 0LL;
    if ( v38 )
    {
      if ( a16 )
      {
        v46 = sub_1800DC0A4(v286, v41, a16, &pv);
        v45 = pv;
        if ( !v46 )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
          v43 = a14;
          goto LABEL_28;
        }
      }
    }
    CoTaskMemFree(v45);
    pv = 0LL;
  }
  v43 = ((unsigned __int8)~(_BYTE)a13 >> 1) & 1;
LABEL_28:
  v47 = v220;
  v351 = xmmword_18015B730;
  v352 = xmmword_18015B730;
  v353 = xmmword_18015B730;
  v359 = xmmword_18015B730;
  v356 = xmmword_18015B730;
  v48 = sub_18006E5E0(
          v220,
          a5,
          a6,
          (_DWORD)a12,
          v207,
          v42,
          v43,
          v28,
          0,
          1,
          (__int64)&v351,
          (__int64)&v352,
          (__int64)&v353,
          (__int64)&v359,
          (__int64)&v356);
  v32 = v48;
  if ( v48 >= 0 )
  {
    v49 = v353;
    v294 = &v199;
    v50 = v351;
    v303 = &v208;
    v288 = &v210;
    v291 = &v209;
    v209 = 0LL;
    v208 = 0LL;
    v210 = 0LL;
    v199 = 0LL;
    v295 = 0LL;
    v304 = 0LL;
    v289 = 0LL;
    v292 = 0LL;
    v51 = v352;
    v193 = a8 != 0;
    *(_OWORD *)v365 = v351;
    *(_OWORD *)v366 = v352;
    *(_OWORD *)v367 = v353;
    v296 = 1;
    v305 = 1;
    v290 = 1;
    v293 = 1;
    v32 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Parse_fp_with_locale<0>(
            (__int64)a12,
            a8 != 0,
            v43,
            v42,
            v47,
            (__int128 *)v367,
            (__int128 *)v366,
            (__int128 *)v365,
            a16,
            &v292,
            &v289,
            &v304,
            &v295);
    if ( v293 )
    {
      v52 = *v291;
      *v291 = (LPVOID)v292;
      if ( v52 )
        CoTaskMemFree(v52);
    }
    if ( v290 )
    {
      v53 = *v288;
      *v288 = (LPVOID)v289;
      if ( v53 )
        CoTaskMemFree(v53);
    }
    if ( v305 )
    {
      v54 = *v303;
      *v303 = (LPVOID)v304;
      if ( v54 )
        CoTaskMemFree(v54);
    }
    if ( v296 )
    {
      v55 = *v294;
      *v294 = (LPVOID)v295;
      if ( v55 )
        CoTaskMemFree(v55);
    }
    if ( v32 < 0 )
    {
      sub_18004BD84(
        retaddr,
        1363LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (unsigned int)v32);
LABEL_295:
      v183 = v199;
      v199 = 0LL;
      if ( v183 )
        CoTaskMemFree(v183);
      v184 = v210;
      v210 = 0LL;
      if ( v184 )
        CoTaskMemFree(v184);
      v185 = v208;
      v208 = 0LL;
      if ( v185 )
        CoTaskMemFree(v185);
      v186 = v209;
      v209 = 0LL;
      if ( v186 )
        CoTaskMemFree(v186);
      goto LABEL_303;
    }
    if ( !a16 )
    {
      v56 = sub_180008448(65534LL, sub_1800B6240)[1];
      if ( *(_DWORD *)v56 > 4u )
      {
        v486 = 4LL;
        v230 = 0;
        v485 = &v230;
        sub_1800521E8(v56, (unsigned int)&unk_180168AF1, 0, 0, 3, (__int64)v484);
      }
      goto LABEL_56;
    }
    v57 = *(unsigned __int16 *)a16;
    if ( (_WORD)v57 == 0xFFFE )
    {
      v56 = sub_180008448(65534LL, sub_1800B6240)[1];
      if ( *(_DWORD *)v56 <= 4u )
      {
LABEL_56:
        v59 = v209;
        if ( v209 )
        {
          v61 = *(unsigned __int16 *)v209;
          if ( (_WORD)v61 == 0xFFFE )
          {
            v270 = 0LL;
            if ( InitOnceBeginInitialize(&InitOnce, 0, &v240, &v270) && v240 )
            {
              v270 = &qword_18019E828;
              qword_18019E828 = (__int64)off_1801462A0;
              qword_18019E840 = (__int64)&unk_18019C388;
              atexit(sub_1800B6240);
              sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
              InitOnceComplete(&InitOnce, 0, &qword_18019E828);
            }
            v65 = *((_QWORD *)v270 + 1);
            if ( *(_DWORD *)v65 > 4u )
            {
              v241 = v59[5];
              v447 = 4LL;
              v445 = 16LL;
              v443 = 4LL;
              v242 = *((_DWORD *)v209 + 2);
              v243 = *((_DWORD *)v209 + 1);
              v66 = *((_WORD *)v209 + 1);
              v446 = &v241;
              v444 = (char *)(v59 + 6);
              v442 = &v242;
              v440 = &v243;
              v438 = &v200;
              v436 = L"WAVEFORMATEXTENSIBLE";
              v328[1] = 4;
              v430 = *(unsigned __int16 **)(v65 + 8);
              v200 = v66;
              v329 = 0LL;
              v441 = 4LL;
              v439 = 2LL;
              v437 = 42LL;
              v328[0] = 184549376;
              v431 = *v430;
              v433 = &unk_18016887C;
              v432 = 2;
              v67 = *(_QWORD *)(v65 + 32);
              v434 = 136;
              v435 = 1;
              v196 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
              EtwEventWriteTransfer(v67, v328, 0LL);
            }
          }
          else
          {
            v376 = xmmword_18015B740;
            LODWORD(v376) = v61;
            v62 = (_DWORD *)sub_180008448(65534LL, sub_1800B6240)[1];
            if ( *v62 > 4u )
            {
              v323 = &v376;
              v238 = *((_DWORD *)v209 + 2);
              v239 = *((_DWORD *)v209 + 1);
              v64 = *((_WORD *)v209 + 1);
              v336 = L"WAVEFORMATEX";
              v213 = v64;
              sub_1800E9458(
                (_DWORD)v62,
                (unsigned int)&unk_180168905,
                (_DWORD)v62,
                v63,
                (__int64)&v336,
                (__int64)&v213,
                (__int64)&v239,
                (__int64)&v238,
                (__int64)&v323);
            }
          }
        }
        else
        {
          v60 = (_DWORD *)sub_180008448(v56, sub_1800B6240)[1];
          if ( *v60 > 4u )
          {
            v498 = 4LL;
            v237 = 0;
            v497 = &v237;
            sub_1800521E8((_DWORD)v60, (unsigned int)&unk_18016898C, 0, 0, 3, (__int64)v496);
          }
        }
        v68 = v210;
        if ( v210 )
        {
          v70 = *(unsigned __int16 *)v210;
          if ( (_WORD)v70 == 0xFFFE )
          {
            v271 = 0LL;
            if ( InitOnceBeginInitialize(&InitOnce, 0, &v247, &v271) && v247 )
            {
              v271 = &qword_18019E828;
              qword_18019E828 = (__int64)off_1801462A0;
              qword_18019E840 = (__int64)&unk_18019C388;
              atexit(sub_1800B6240);
              sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
              InitOnceComplete(&InitOnce, 0, &qword_18019E828);
            }
            v74 = *((_QWORD *)v271 + 1);
            if ( *(_DWORD *)v74 > 4u )
            {
              v248 = v68[5];
              v465 = 4LL;
              v463 = 16LL;
              v461 = 4LL;
              v249 = *((_DWORD *)v210 + 2);
              v250 = *((_DWORD *)v210 + 1);
              v75 = *((_WORD *)v210 + 1);
              v464 = &v248;
              v462 = (char *)(v68 + 6);
              v460 = &v249;
              v458 = &v250;
              v456 = &v202;
              v454 = L"WAVEFORMATEXTENSIBLE";
              v330[1] = 4;
              v448 = *(unsigned __int16 **)(v74 + 8);
              v202 = v75;
              v331 = 0LL;
              v459 = 4LL;
              v457 = 2LL;
              v455 = 42LL;
              v330[0] = 184549376;
              v449 = *v448;
              v451 = &unk_18016870A;
              v450 = 2;
              v76 = *(_QWORD *)(v74 + 32);
              v452 = 139;
              v453 = 1;
              v196 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
              EtwEventWriteTransfer(v76, v330, 0LL);
            }
          }
          else
          {
            v375 = xmmword_18015B740;
            LODWORD(v375) = v70;
            v71 = (_DWORD *)sub_180008448(65534LL, sub_1800B6240)[1];
            if ( *v71 > 4u )
            {
              v337 = &v375;
              v245 = *((_DWORD *)v210 + 2);
              v246 = *((_DWORD *)v210 + 1);
              v73 = *((_WORD *)v210 + 1);
              v338 = L"WAVEFORMATEX";
              v201 = v73;
              sub_1800E9458(
                (_DWORD)v71,
                (unsigned int)&unk_180168796,
                (_DWORD)v71,
                v72,
                (__int64)&v338,
                (__int64)&v201,
                (__int64)&v246,
                (__int64)&v245,
                (__int64)&v337);
            }
          }
        }
        else
        {
          v69 = (_DWORD *)sub_180008448((__int64)v60, sub_1800B6240)[1];
          if ( *v69 > 4u )
          {
            v489 = 4LL;
            v244 = 0;
            v488 = &v244;
            sub_1800521E8((_DWORD)v69, (unsigned int)&unk_180168820, 0, 0, 3, (__int64)v487);
          }
        }
        v77 = v208;
        if ( v208 )
        {
          v79 = *(unsigned __int16 *)v208;
          if ( (_WORD)v79 == 0xFFFE )
          {
            v272 = 0LL;
            if ( InitOnceBeginInitialize(&InitOnce, 0, &v254, &v272) && v254 )
            {
              v272 = &qword_18019E828;
              qword_18019E828 = (__int64)off_1801462A0;
              qword_18019E840 = (__int64)&unk_18019C388;
              atexit(sub_1800B6240);
              sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
              InitOnceComplete(&InitOnce, 0, &qword_18019E828);
            }
            v83 = *((_QWORD *)v272 + 1);
            if ( *(_DWORD *)v83 > 4u )
            {
              v255 = v77[5];
              v483 = 4LL;
              v481 = 16LL;
              v479 = 4LL;
              v256 = *((_DWORD *)v208 + 2);
              v257 = *((_DWORD *)v208 + 1);
              v84 = *((_WORD *)v208 + 1);
              v482 = &v255;
              v480 = (char *)(v77 + 6);
              v478 = &v256;
              v476 = &v257;
              v474 = &v204;
              v472 = L"WAVEFORMATEXTENSIBLE";
              v332[1] = 4;
              v466 = *(unsigned __int16 **)(v83 + 8);
              v204 = v84;
              v333 = 0LL;
              v477 = 4LL;
              v475 = 2LL;
              v473 = 42LL;
              v332[0] = 184549376;
              v467 = *v466;
              v469 = &unk_18016859B;
              v468 = 2;
              v85 = *(_QWORD *)(v83 + 32);
              v470 = 138;
              v471 = 1;
              v196 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
              EtwEventWriteTransfer(v85, v332, 0LL);
            }
          }
          else
          {
            v374 = xmmword_18015B740;
            LODWORD(v374) = v79;
            v80 = (_DWORD *)sub_180008448(65534LL, sub_1800B6240)[1];
            if ( *v80 > 4u )
            {
              v339 = &v374;
              v252 = *((_DWORD *)v208 + 2);
              v253 = *((_DWORD *)v208 + 1);
              v82 = *((_WORD *)v208 + 1);
              v340 = L"WAVEFORMATEX";
              v203 = v82;
              sub_1800E9458(
                (_DWORD)v80,
                (unsigned int)&unk_180168626,
                (_DWORD)v80,
                v81,
                (__int64)&v340,
                (__int64)&v203,
                (__int64)&v253,
                (__int64)&v252,
                (__int64)&v339);
            }
          }
        }
        else
        {
          v78 = (_DWORD *)sub_180008448((__int64)v69, sub_1800B6240)[1];
          if ( *v78 > 4u )
          {
            v492 = 4LL;
            v251 = 0;
            v491 = &v251;
            sub_1800521E8((_DWORD)v78, (unsigned int)&unk_1801686AF, 0, 0, 3, (__int64)v490);
          }
        }
        v86 = v199;
        if ( v199 )
        {
          v88 = *(unsigned __int16 *)v199;
          if ( (_WORD)v88 == 0xFFFE )
          {
            v273 = 0LL;
            if ( InitOnceBeginInitialize(&InitOnce, 0, &v261, &v273) && v261 )
            {
              v354 = &InitOnce;
              v273 = &qword_18019E828;
              qword_18019E828 = (__int64)off_1801462A0;
              qword_18019E840 = (__int64)&unk_18019C388;
              atexit(sub_1800B6240);
              v355 = 0;
              sub_180054090(&v354);
            }
            v93 = *((_QWORD *)v273 + 1);
            if ( *(_DWORD *)v93 > 4u )
            {
              v262 = v86[5];
              v411 = 4LL;
              v409 = 16LL;
              v407 = 4LL;
              v263 = *((_DWORD *)v199 + 2);
              v264 = *((_DWORD *)v199 + 1);
              v94 = *((_WORD *)v199 + 1);
              v410 = &v262;
              v408 = (char *)(v86 + 6);
              v206 = v94;
              v95 = *(_QWORD *)(v93 + 32);
              v406 = &v263;
              v404 = &v264;
              v402 = &v206;
              v400 = L"WAVEFORMATEXTENSIBLE";
              v334[1] = 4;
              v394 = *(unsigned __int16 **)(v93 + 8);
              v405 = 4LL;
              v403 = 2LL;
              v401 = 42LL;
              v334[0] = 184549376;
              v335 = 0LL;
              v395 = *v394;
              v397 = &unk_18016842F;
              v396 = 2;
              v398 = 137;
              v399 = 1;
              v196 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
              EtwEventWriteTransfer(v95, v334, 0LL);
            }
          }
          else
          {
            v373 = xmmword_18015B740;
            LODWORD(v373) = v88;
            v89 = (_DWORD *)sub_180008448(65534LL, sub_1800B6240)[1];
            if ( *v89 > 4u )
            {
              v341 = &v373;
              v259 = *((_DWORD *)v199 + 2);
              v260 = *((_DWORD *)v199 + 1);
              v91 = *((_WORD *)v199 + 1);
              v342 = L"WAVEFORMATEX";
              v205 = v91;
              sub_1800E9458(
                (_DWORD)v89,
                (unsigned int)&unk_1801684B9,
                (_DWORD)v89,
                v90,
                (__int64)&v342,
                (__int64)&v205,
                (__int64)&v260,
                (__int64)&v259,
                (__int64)&v341);
            }
          }
        }
        else
        {
          v87 = (_DWORD *)sub_180008448((__int64)v78, sub_1800B6240)[1];
          if ( *v87 > 4u )
          {
            v258 = 0;
            v494 = &v258;
            v495 = 4LL;
            sub_1800521E8((_DWORD)v87, (unsigned int)&unk_180168541, 0, 0, 3, (__int64)v493);
          }
        }
        v287 = 0LL;
        v368 = v51;
        v369 = v49;
        v370 = v50;
        v92 = sub_18001D3F0(
                (_DWORD)a12,
                (_DWORD)a16,
                (_DWORD)v198,
                v194,
                v42,
                v43,
                (__int64)v199,
                (__int64)&v370,
                (__int64)&v369,
                (__int64)&v368,
                a7 != 0,
                v193,
                a17,
                a18,
                v28,
                (__int64)&a18,
                (__int64)&v287);
        v32 = v92;
        if ( v92 < 0 )
        {
          sub_18004BD84(
            retaddr,
            1375LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (unsigned int)v92);
          goto LABEL_295;
        }
        v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v223 + 368LL))(v223);
        v97 = v209;
        v297 = &v229;
        v300 = &v218;
        v98 = *v198;
        v218 = 0LL;
        v229 = 0LL;
        v298 = 0LL;
        v99 = *(__int64 (__fastcall **)(__int64 *))(v98 + 80);
        v301 = 0LL;
        v371 = v356;
        v372 = v51;
        v360 = v50;
        v299 = 1;
        v302 = 1;
        v100 = v99(v198);
        v101 = a22;
        v102 = *(_QWORD **)v282;
        v32 = sub_1800702D8(
                v282[0],
                a14,
                v194,
                v207,
                v43,
                (__int64)&v360,
                (__int64)&v372,
                (__int64)&v371,
                a22,
                (__int64)a16,
                (__int64)v97,
                a17,
                a18,
                v344,
                v281,
                v280,
                v283,
                v343,
                v100,
                v96,
                a9 != 0,
                a10 != 0,
                v287,
                a11,
                (__int64)&v301,
                (__int64)&v298);
        if ( v302 )
        {
          v103 = *v300;
          *v300 = v301;
          if ( v103 )
            CoTaskMemFree(v103);
        }
        if ( v299 )
        {
          v104 = *v297;
          *v297 = v298;
          if ( v104 )
            CoTaskMemFree(v104);
        }
        if ( v32 < 0 )
        {
          sub_18004BD84(
            retaddr,
            1385LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (unsigned int)v32);
LABEL_291:
          v181 = v229;
          v229 = 0LL;
          if ( v181 )
            CoTaskMemFree(v181);
          v182 = v218;
          v218 = 0LL;
          if ( v182 )
            CoTaskMemFree(v182);
          goto LABEL_295;
        }
        v306 = &v228;
        v308 = 1;
        v228 = 0LL;
        v307 = 0LL;
        v32 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *))(*(_QWORD *)qword_18019EE50 + 24LL))(
                qword_18019EE50,
                v219,
                &v307);
        if ( v308 )
        {
          v105 = *v306;
          *v306 = v307;
          if ( v105 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
        }
        if ( v32 < 0 )
        {
          sub_18004BD84(
            retaddr,
            1391LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (unsigned int)v32);
LABEL_289:
          if ( v228 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v228 + 16LL))(v228);
          goto LABEL_291;
        }
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v228 + 112LL))(v228, &lpCriticalSection);
        v106 = a24;
        v107 = (__int64)v198;
        v361 = v359;
        v108 = sub_180012C30(
                 (int)v102,
                 (__int64)v198,
                 v223,
                 v228,
                 v220,
                 v194,
                 a14,
                 v43,
                 v190,
                 &v361,
                 (__int64)v218,
                 (__int64)v229,
                 v210,
                 v207,
                 v284,
                 a24,
                 a14 == 1,
                 v345,
                 v275);
        v32 = v108;
        if ( v108 < 0 )
        {
          sub_18004BD84(
            retaddr,
            1399LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (unsigned int)v108);
          goto LABEL_278;
        }
        v109 = *v198;
        v195 = 0LL;
        v110 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v109 + 120))(v198, &v195);
        v32 = v110;
        if ( v110 < 0 )
        {
          sub_18004BD84(
            retaddr,
            1403LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (unsigned int)v110);
LABEL_277:
          sub_18000F708(&v195);
LABEL_278:
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          goto LABEL_289;
        }
        v192 = 0LL;
        v111 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v195 + 192LL))(v195, &v192);
        v32 = v111;
        if ( v111 < 0 )
        {
          sub_18004BD84(
            retaddr,
            1407LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (unsigned int)v111);
LABEL_276:
          sub_18000F708(&v192);
          goto LABEL_277;
        }
        if ( v192 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v107 + 144LL))(v107) )
          {
            v311 = 1;
            v225 = 0LL;
            v310 = 0LL;
            v309 = &v225;
            v32 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v192 + 104LL))(v192, &v310);
            if ( v311 )
            {
              v112 = *v309;
              *v309 = v310;
              if ( v112 )
                sub_1800E3CDC(v112);
            }
            if ( v32 < 0 )
            {
              v113 = (unsigned int)v32;
              v114 = 1421LL;
              goto LABEL_131;
            }
            v115 = *(_QWORD *)(v225 + 24);
            v116 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v195 + 120LL))(v195);
            if ( !(unsigned int)sub_18004B400(v115, v116) )
            {
              v117 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_18019EE48 + 40LL))(
                       qword_18019EE48,
                       v195,
                       v192);
              v32 = v117;
              if ( v117 < 0 )
              {
                v113 = (unsigned int)v117;
                v114 = 1429LL;
LABEL_131:
                sub_18004BD84(retaddr, v114, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v113);
                v118 = v225;
                if ( !v225 )
                  goto LABEL_276;
LABEL_132:
                sub_1800E3CDC(v118);
                goto LABEL_276;
              }
              sub_1800CB144(&v192);
            }
            if ( v225 )
              sub_1800E3CDC(v225);
            v107 = (__int64)v198;
          }
          if ( v192 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v107 - 8) + 152LL))(v107 - 8);
            v119 = v275;
            goto LABEL_240;
          }
        }
        *(_OWORD *)v362 = v51;
        v312 = &v217;
        *(_OWORD *)v363 = v50;
        v217 = 0LL;
        v313 = 0LL;
        v314 = 1;
        v32 = sub_180013360(
                (__int64)v102,
                a14,
                v43,
                (__int128 *)v363,
                v362,
                (unsigned __int16 *)v199,
                (unsigned __int16 *)v208,
                *((_QWORD *)v218 + 4),
                &v313);
        if ( v314 )
        {
          v120 = *v312;
          *v312 = v313;
          if ( v120 )
            sub_1800E3CDC(v120);
        }
        if ( v32 < 0 )
        {
          sub_18004BD84(
            retaddr,
            1442LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (unsigned int)v32);
          goto LABEL_222;
        }
        v121 = v219;
        v278 = 0LL;
        v364 = v50;
        v122 = *(__int64 **)(v274 + 40);
        v123 = *v122;
        v124 = (*(__int64 (__fastcall **)(_QWORD *))(*v102 + 56LL))(v102);
        Src = &v278;
        v125 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, _QWORD, __int128 *, unsigned int, unsigned int))(v123 + 56))(
                 v122,
                 v121,
                 v124,
                 &v364,
                 v43,
                 v106);
        v32 = v125;
        if ( v125 < 0 )
        {
          sub_18004BD84(
            retaddr,
            1446LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (unsigned int)v125);
LABEL_220:
          if ( v278 )
            sub_1800ED08C(v278);
LABEL_222:
          v118 = v217;
          if ( !v217 )
            goto LABEL_276;
          goto LABEL_132;
        }
        v279 = v106;
        v126 = 0LL;
        v197 = 0LL;
        v214 = 0LL;
        EnterCriticalSection(&CriticalSection);
        if ( qword_18019EF58 )
        {
          sub_1800D0B30(qword_18019EF58, v127, &v214);
          v126 = v214;
        }
        v32 = 0;
        if ( !v126 )
          v32 = -2147467259;
        LeaveCriticalSection(&CriticalSection);
        if ( !v126 )
        {
          v128 = (unsigned int)v32;
          v129 = 1452LL;
          goto LABEL_215;
        }
        v130 = 0LL;
        v316 = 0LL;
        v131 = v219;
        v132 = &v197;
        v315 = &v197;
        v317 = 1;
        if ( v219 )
        {
          v215 = 0LL;
          v133 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
                   *(_QWORD *)&dwCreationFlags,
                   v219,
                   &v215);
          v32 = v133;
          if ( v133 >= 0 )
          {
            v226 = 0LL;
            v134 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v215)(v215, &unk_18015B660, &v226);
            v32 = v134;
            if ( v134 >= 0 )
            {
              v135 = sub_180017690(v126, v131, &v316);
              v32 = v135;
              if ( v135 >= 0 )
              {
                if ( v226 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v226 + 16LL))(v226);
                if ( v215 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v215 + 16LL))(v215);
                v32 = 0;
              }
              else
              {
                sub_18004BD84(
                  retaddr,
                  174LL,
                  "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                  (unsigned int)v135);
                sub_18000F708(&v226);
                sub_18000F708(&v215);
              }
              if ( !v317 )
              {
LABEL_169:
                if ( v32 < 0 )
                {
                  v128 = (unsigned int)v32;
                  v129 = 1453LL;
                  goto LABEL_215;
                }
                v137 = v102[5];
                v138 = 1;
                if ( v137 )
                {
                  v348 = 0LL;
                  *(_OWORD *)v347 = 0LL;
                  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v137 + 40LL))(
                         v137,
                         &unk_18015EB20,
                         v347) >= 0
                    && ((LOWORD(v347[0]) - 11) & 0xFFF7) == 0 )
                  {
                    v138 = LOWORD(v347[1]) != 0;
                  }
                  PropVariantClear(v347);
                }
                v191 = 0;
                if ( v138 )
                {
                  if ( a14 == 1 )
                  {
                    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v197 + 308), GetCurrentThreadId(), 0) )
                    {
                      v139 = 1471LL;
LABEL_183:
                      v32 = -2005139364;
                      sub_18004BD84(
                        retaddr,
                        v139,
                        "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                        2289827932LL);
                      v126 = v214;
                      goto LABEL_196;
                    }
                    v126 = v214;
                    v191 = 1;
                    goto LABEL_186;
                  }
                  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v197 + 308), 0, 0) )
                  {
                    v139 = 1477LL;
                    goto LABEL_183;
                  }
                  v126 = v214;
                }
                if ( a14 != 1 )
                {
                  v145 = v194;
                  if ( (v194 & 1) != 0 )
                  {
                    sub_1800CB144(&v192);
                    v141 = sub_1800EC60C(
                             v146,
                             (_DWORD)v102,
                             v217,
                             v145,
                             a14,
                             (__int64)&v278,
                             (unsigned int)&v278,
                             v223,
                             v197,
                             v281,
                             v280,
                             (__int64)&v192);
                    v32 = v141;
                    if ( v141 < 0 )
                    {
                      v144 = 1491LL;
                      goto LABEL_195;
                    }
                  }
                  else
                  {
                    v147 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v223 + 96LL))(v223);
                    v148 = v192;
                    v192 = 0LL;
                    v149 = v147 != 0;
                    if ( v148 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v148 + 16LL))(v148);
                    v150 = v197;
                    v151 = v217;
                    v152 = (*(__int64 (__fastcall **)(__int64 *))(*v198 + 144))(v198);
                    v153 = (*(__int64 (__fastcall **)(__int64 *))(*v198 + 136))(v198);
                    v189 = v149;
                    v102 = *(_QWORD **)v282;
                    LOBYTE(Src) = v138;
                    v141 = sub_1800135B8(
                             v274 - 8,
                             *(__int64 *)v282,
                             v151,
                             v194,
                             a14,
                             (__int64)&v278,
                             (int)Src,
                             v189,
                             v150,
                             v153,
                             v152,
                             &v192);
                    v32 = v141;
                    if ( v141 < 0 )
                    {
                      v144 = 1498LL;
                      goto LABEL_195;
                    }
                  }
LABEL_198:
                  if ( v191 )
                  {
                    v142 = v197;
                    _InterlockedExchange((volatile __int32 *)(v197 + 308), 0);
                    v126 = v214;
                  }
                  if ( (byte_18019F980 & 0x20) != 0 )
                    sub_18000F730(v142, (__int64)&unk_18015DD98, v143, 1LL, (__int64)v499);
                  v154 = (_QWORD *)sub_18006A18C(16LL, &unk_18019F848);
                  v155 = v154;
                  if ( v154 )
                  {
                    *v154 = 0LL;
                    v154[1] = 0LL;
                  }
                  else
                  {
                    v155 = 0LL;
                  }
                  v156 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v195 + 264LL))(v195, v155);
                  if ( v156 >= 0 )
                  {
                    if ( *(_DWORD *)v155 == 1 )
                    {
                      v227 = v195;
                      sub_180047458(&v227);
                      v157 = sub_1800EA9AC(v274 - 8, &v227, v155[1]);
                      v32 = v157;
                      if ( v157 < 0 )
                      {
                        sub_18004BD84(
                          retaddr,
                          1511LL,
                          "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                          (unsigned int)v157);
                        sub_1800461B8(&v227);
                        sub_1800EA77C(v155);
LABEL_216:
                        if ( v126 )
                          sub_18002AD80(v126);
                        if ( v197 )
                          sub_18002B930();
                        goto LABEL_220;
                      }
                      sub_1800461B8(&v227);
                    }
                  }
                  else
                  {
                    sub_18006D26C(
                      retaddr,
                      1507LL,
                      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                      (unsigned int)v156);
                  }
                  if ( v155 )
                  {
                    CoTaskMemFree((LPVOID)v155[1]);
                    v155[1] = 0LL;
                    sub_18006A148(v155, 16LL);
                  }
                  v158 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v195 + 208LL))(v195);
                  v119 = v275;
                  v159 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, bool, __int64))(*(_QWORD *)qword_18019EE48
                                                                                             + 32LL))(
                           qword_18019EE48,
                           v195,
                           v192,
                           v158 == 0,
                           v275);
                  v32 = v159;
                  if ( v159 >= 0 )
                  {
                    if ( (byte_18019F980 & 0x20) != 0 )
                      sub_18000F730(v160, (__int64)&unk_18015DD88, v161, 1LL, (__int64)v500);
                    if ( !(unsigned int)sub_18006D208(v126 + 12) )
                    {
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v126 + 24LL))(v126, 1LL);
                      if ( qword_18019E418 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
                    }
                    if ( v197 && !(unsigned int)sub_18006D208(v197 + 12) )
                    {
                      if ( v162 )
                        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v162 + 104LL))(v162, 1LL);
                      if ( qword_18019E418 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
                    }
                    if ( v278 )
                      sub_1800ED08C(v278);
                    v163 = v217;
                    if ( v217 )
                    {
                      CoTaskMemFree(*(LPVOID *)(v217 + 24));
                      *(_QWORD *)(v163 + 24) = 0LL;
                      CoTaskMemFree(*(LPVOID *)(v163 + 16));
                      *(_QWORD *)(v163 + 16) = 0LL;
                      CoTaskMemFree(*(LPVOID *)v163);
                      *(_QWORD *)v163 = 0LL;
                      sub_18006A148(v163, 96LL);
                    }
                    v101 = a22;
LABEL_240:
                    v164 = v192;
                    if ( v192 )
                    {
                      v277 = 0LL;
                      v318 = &v277;
                      v319 = 0LL;
                      v320 = 1;
                      v165 = (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v192 + 104LL))(v192, &v319) >= 0;
                      if ( v320 )
                      {
                        v166 = *v318;
                        *v318 = v319;
                        if ( v166 )
                          sub_1800E3CDC(v166);
                      }
                      if ( v165 )
                      {
                        v276 = 0LL;
                        if ( InitOnceBeginInitialize(&InitOnce, 0, &v265, &v276) && v265 )
                        {
                          v357 = &InitOnce;
                          v276 = &qword_18019E828;
                          qword_18019E828 = (__int64)off_1801462A0;
                          qword_18019E840 = (__int64)&unk_18019C388;
                          atexit(sub_1800B6240);
                          v358 = 0;
                          sub_180054090(&v357);
                        }
                        v167 = *((_QWORD *)v276 + 1);
                        if ( *(_DWORD *)v167 > 4u
                          && (*(_QWORD *)(v167 + 16) & 0x400000000000LL) != 0
                          && (*(_QWORD *)(v167 + 24) & 0x400000000000LL) == *(_QWORD *)(v167 + 24) )
                        {
                          v168 = (*(__int64 (__fastcall **)(__int64 *))(*v198 + 80))(v198);
                          v169 = (*(__int64 (__fastcall **)(_QWORD *))(*v102 + 56LL))(v102);
                          v346 = v168;
                          v266 = v169;
                          v321 = v277 + 80;
                          v322 = v283;
                          sub_1800E96B8(
                            v167,
                            (unsigned int)&unk_1801683DB,
                            v170,
                            v171,
                            (__int64)&v322,
                            (__int64)&v321,
                            (__int64)&v266,
                            (__int64)&v346);
                        }
                      }
                      v172 = v277;
                      if ( v277 )
                      {
                        CoTaskMemFree(*(LPVOID *)(v277 + 24));
                        *(_QWORD *)(v172 + 24) = 0LL;
                        CoTaskMemFree(*(LPVOID *)(v172 + 16));
                        *(_QWORD *)(v172 + 16) = 0LL;
                        CoTaskMemFree(*(LPVOID *)v172);
                        *(_QWORD *)v172 = 0LL;
                        sub_18006A148(v172, 96LL);
                      }
                      v164 = v192;
                    }
                    if ( v267 || v119 && !*(_DWORD *)(v119 + 944) && (v194 & 1) != 0 )
                    {
                      v173 = v195;
                      v224 = 0LL;
                      sub_1800CB144(&v224);
                      v174 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v173 + 192LL))(v173, &v224);
                      v32 = v174;
                      if ( v174 < 0 )
                      {
                        sub_18004BD84(
                          retaddr,
                          1559LL,
                          "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                          (unsigned int)v174);
LABEL_275:
                        sub_18000F708(&v224);
                        goto LABEL_276;
                      }
                      if ( v224 )
                      {
                        v216 = 0LL;
                        v175 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v224 + 56LL))(v224, &v216);
                        v32 = v175;
                        if ( v175 < 0 )
                        {
                          v176 = 1563LL;
LABEL_273:
                          sub_18004BD84(
                            retaddr,
                            v176,
                            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                            (unsigned int)v175);
                          goto LABEL_274;
                        }
                        v177 = RpcImpersonateClient(0LL);
                        if ( v177 )
                        {
                          v32 = sub_1800CA660(
                                  retaddr,
                                  1568LL,
                                  "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                                  v177);
LABEL_274:
                          sub_18000F708(&v216);
                          goto LABEL_275;
                        }
                        v178 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v216 + 32LL))(
                                 v216,
                                 v101,
                                 v119 + 56,
                                 v119 + 352);
                        v32 = v178;
                        if ( v178 < 0 )
                        {
                          sub_18004BD84(
                            retaddr,
                            1571LL,
                            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                            (unsigned int)v178);
                          RpcRevertToSelf();
                          goto LABEL_274;
                        }
                        RpcRevertToSelf();
                        if ( v43 == 1 )
                        {
                          v175 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v216 + 40LL))(
                                   v216,
                                   v119 + 1252,
                                   v119 + 1256);
                          v32 = v175;
                          if ( v175 < 0 )
                          {
                            v176 = 1579LL;
                            goto LABEL_273;
                          }
                          v179 = v284;
                          v180 = v216;
                          *(_DWORD *)(v119 + 1248) = 1;
                          v175 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v179 + 32LL))(v179, v180);
                          v32 = v175;
                          if ( v175 < 0 )
                          {
                            v176 = 1581LL;
                            goto LABEL_273;
                          }
                        }
                        sub_18000F708(&v216);
                      }
                      sub_18000F708(&v224);
                      v164 = v192;
                    }
                    if ( v164 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v164 + 16LL))(v164);
                    if ( v195 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v195 + 16LL))(v195);
                    if ( lpCriticalSection )
                      LeaveCriticalSection(lpCriticalSection);
                    v32 = 0;
                    goto LABEL_289;
                  }
                  v128 = (unsigned int)v159;
                  v129 = 1523LL;
LABEL_215:
                  sub_18004BD84(
                    retaddr,
                    v129,
                    "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                    v128);
                  goto LABEL_216;
                }
LABEL_186:
                sub_1800CB144(&v192);
                v141 = sub_1800EC438(
                         v140,
                         (_DWORD)v102,
                         v217,
                         v194,
                         1,
                         (__int64)&v278,
                         v138,
                         v223,
                         v197,
                         (__int64)&v192);
                v32 = v141;
                if ( v141 < 0 )
                {
                  v144 = 1485LL;
LABEL_195:
                  sub_18004BD84(
                    retaddr,
                    v144,
                    "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                    (unsigned int)v141);
LABEL_196:
                  if ( v191 )
                  {
                    _InterlockedExchange((volatile __int32 *)(v197 + 308), 0);
                    v126 = v214;
                  }
                  goto LABEL_216;
                }
                goto LABEL_198;
              }
              v130 = v316;
              v132 = v315;
            }
            else
            {
              sub_18004BD84(
                retaddr,
                172LL,
                "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                (unsigned int)v134);
              sub_18000F708(&v226);
              sub_18000F708(&v215);
            }
          }
          else
          {
            sub_18004BD84(
              retaddr,
              169LL,
              "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
              (unsigned int)v133);
            sub_18000F708(&v215);
          }
        }
        else
        {
          v32 = -2147024809;
          sub_18004BD84(
            retaddr,
            163LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
            2147942487LL);
        }
        v136 = *v132;
        *v132 = v130;
        if ( v136 )
          sub_18002B930();
        goto LABEL_169;
      }
      v234 = *((_DWORD *)a16 + 5);
      v235 = *((_DWORD *)a16 + 2);
      v236 = *((_DWORD *)a16 + 1);
      v212 = *((_WORD *)a16 + 1);
      v428 = &v234;
      v426 = a16 + 24;
      v424 = &v235;
      v422 = &v236;
      v420 = &v212;
      v418 = L"WAVEFORMATEXTENSIBLE";
      v326[1] = 4;
      v412 = *(unsigned __int16 **)(v56 + 8);
      v327 = 0LL;
      v58 = v326;
      v429 = 4LL;
      v427 = 16LL;
      v425 = 4LL;
      v423 = 4LL;
      v421 = 2LL;
      v419 = 42LL;
      v326[0] = 184549376;
      v413 = *v412;
      v415 = &unk_1801689E5;
      v414 = 2;
      v416 = 134;
      v417 = 1;
      v196 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    }
    else
    {
      Context = 0LL;
      v377 = xmmword_18015B740;
      LODWORD(v377) = v57;
      if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
      {
        Context = &qword_18019E828;
        qword_18019E828 = (__int64)off_1801462A0;
        qword_18019E840 = (__int64)&unk_18019C388;
        atexit(sub_1800B6240);
        sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
        InitOnceComplete(&InitOnce, 0, &qword_18019E828);
      }
      v56 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v56 <= 4u )
        goto LABEL_56;
      v232 = *((_DWORD *)a16 + 2);
      v233 = *((_DWORD *)a16 + 1);
      v211 = *((_WORD *)a16 + 1);
      v392 = &v377;
      v390 = &v232;
      v388 = &v233;
      v386 = &v211;
      v384 = L"WAVEFORMATEX";
      v324[1] = 4;
      v378 = *(unsigned __int16 **)(v56 + 8);
      v393 = 16LL;
      v391 = 4LL;
      v389 = 4LL;
      v387 = 2LL;
      v385 = 26LL;
      v324[0] = 184549376;
      v325 = 0LL;
      v379 = *v378;
      v381 = &unk_180168A77;
      v380 = 2;
      v382 = 121;
      v58 = v324;
      v383 = 1;
      v196 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    }
    EtwEventWriteTransfer(*(_QWORD *)(v56 + 32), v58, 0LL);
    goto LABEL_56;
  }
  sub_18004BD84(
    retaddr,
    1358LL,
    "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (unsigned int)v48);
LABEL_303:
  if ( v286 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v286 + 16LL))(v286);
LABEL_305:
  if ( v219 )
    CoTaskMemFree(v219);
  return (unsigned int)v32;
}
