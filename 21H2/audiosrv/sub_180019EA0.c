/*
 * XREFs of sub_180019EA0 @ 0x180019EA0
 * Callers:
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_1800CED00 @ 0x1800CED00 (sub_1800CED00.c)
 *     sub_1800CF240 @ 0x1800CF240 (sub_1800CF240.c)
 *     sub_1800D07A0 @ 0x1800D07A0 (sub_1800D07A0.c)
 * Callees:
 *     sub_180005310 @ 0x180005310 (sub_180005310.c)
 *     sub_1800053AC @ 0x1800053AC (sub_1800053AC.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18001B6A0 @ 0x18001B6A0 (sub_18001B6A0.c)
 *     sub_18002B430 @ 0x18002B430 (sub_18002B430.c)
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180054090 @ 0x180054090 (sub_180054090.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800C7588 @ 0x1800C7588 (sub_1800C7588.c)
 *     sub_1800CA2FC @ 0x1800CA2FC (sub_1800CA2FC.c)
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 *     sub_1800CD924 @ 0x1800CD924 (sub_1800CD924.c)
 *     sub_1800CE044 @ 0x1800CE044 (sub_1800CE044.c)
 *     sub_1800CE6DC @ 0x1800CE6DC (sub_1800CE6DC.c)
 *     sub_1800CF4A4 @ 0x1800CF4A4 (sub_1800CF4A4.c)
 *     sub_1800CFF50 @ 0x1800CFF50 (sub_1800CFF50.c)
 */

// Hidden C++ exception states: #wind=51
__int64 __fastcall sub_180019EA0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6, __int64 *a7)
{
  __int64 v7; // r15
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  __int64 v10; // rsi
  __int64 *v11; // r14
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rbx
  unsigned __int16 *v14; // rdx
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 *j; // r14
  int v20; // edx
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r15
  unsigned __int16 *v26; // rbx
  __int64 v27; // rsi
  unsigned int v28; // esi
  unsigned __int16 *v29; // rcx
  int v30; // eax
  unsigned int v31; // r12d
  __int64 m; // rbx
  int v33; // edx
  int v34; // eax
  __int64 v35; // rax
  int v36; // ebx
  int v37; // r13d
  DWORD LastError; // ebx
  int v39; // r12d
  _QWORD *v40; // r15
  _QWORD *v41; // r14
  __int64 v42; // rdi
  struct _RTL_CRITICAL_SECTION *v43; // rbx
  struct _RTL_CRITICAL_SECTION *v44; // rdi
  __int64 v45; // r12
  int v46; // r14d
  _QWORD *v47; // rdi
  _QWORD *v48; // rsi
  DWORD v49; // ebx
  unsigned int v50; // edi
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int128 v54; // xmm6
  __int64 v55; // rbx
  __int64 v56; // rsi
  int v57; // eax
  unsigned int v58; // ebx
  __int64 v59; // r14
  struct _RTL_CRITICAL_SECTION *v60; // rbx
  struct _RTL_CRITICAL_SECTION *v61; // rdi
  __int64 v62; // r15
  __int64 v63; // r14
  unsigned __int16 *v64; // rbx
  __int64 v65; // rsi
  unsigned int v66; // esi
  unsigned __int16 *v67; // rcx
  int v68; // eax
  __int64 v69; // rdx
  __int64 ii; // rbx
  __int64 v71; // rbx
  __int64 v72; // rsi
  struct _RTL_CRITICAL_SECTION *v73; // r13
  __int64 v74; // rdi
  int v75; // eax
  unsigned int v76; // ebx
  int v77; // eax
  unsigned int v78; // ebx
  __int64 v79; // r15
  unsigned int v80; // ebx
  unsigned int v81; // esi
  unsigned int v82; // edi
  unsigned int *v83; // rax
  unsigned int *v84; // r14
  _WORD *v85; // rdx
  unsigned int *v86; // r8
  unsigned __int64 v87; // rax
  int v88; // ecx
  __int64 v89; // r11
  __int64 v90; // rcx
  int v91; // ebx
  __int64 v92; // r10
  __int64 v93; // r9
  _WORD *v94; // rcx
  _WORD *v95; // rdx
  unsigned __int64 v96; // rax
  int v97; // r8d
  int v98; // r10d
  __int64 v99; // r9
  HANDLE ProcessHeap; // rax
  __int64 v101; // rbx
  __int64 v102; // rdi
  __int64 v103; // rdi
  void *v104; // rax
  __int64 v105; // rcx
  int v106; // ecx
  int v108; // eax
  unsigned int v109; // edi
  DWORD v110; // ebx
  __int64 v111; // rax
  __int64 v112; // rax
  int v113; // eax
  unsigned int v114; // ebx
  char v115; // [rsp+40h] [rbp-648h]
  __int64 v116; // [rsp+48h] [rbp-640h] BYREF
  __int64 v117; // [rsp+50h] [rbp-638h]
  __int64 v118; // [rsp+58h] [rbp-630h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-628h]
  __int64 v120; // [rsp+68h] [rbp-620h]
  unsigned int v121; // [rsp+70h] [rbp-618h]
  volatile signed __int32 *v122; // [rsp+78h] [rbp-610h] BYREF
  __int64 v123; // [rsp+80h] [rbp-608h]
  int v124; // [rsp+88h] [rbp-600h]
  int v125; // [rsp+8Ch] [rbp-5FCh]
  __int64 v126; // [rsp+90h] [rbp-5F8h]
  __int64 v127; // [rsp+98h] [rbp-5F0h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-5E8h] BYREF
  __int64 v129; // [rsp+A8h] [rbp-5E0h] BYREF
  __int64 v130; // [rsp+B0h] [rbp-5D8h]
  __int64 *v131; // [rsp+B8h] [rbp-5D0h]
  char v132; // [rsp+C0h] [rbp-5C8h]
  int v133; // [rsp+C8h] [rbp-5C0h]
  int v134; // [rsp+CCh] [rbp-5BCh]
  int v135; // [rsp+D0h] [rbp-5B8h]
  int v136; // [rsp+D4h] [rbp-5B4h]
  WINBOOL fPending; // [rsp+D8h] [rbp-5B0h] BYREF
  int v138; // [rsp+DCh] [rbp-5ACh] BYREF
  unsigned int v139; // [rsp+E0h] [rbp-5A8h] BYREF
  LPCRITICAL_SECTION v140; // [rsp+E8h] [rbp-5A0h]
  __int64 v141; // [rsp+F0h] [rbp-598h]
  unsigned int v142; // [rsp+F8h] [rbp-590h]
  LPVOID Context; // [rsp+100h] [rbp-588h] BYREF
  LPCRITICAL_SECTION v144; // [rsp+108h] [rbp-580h]
  unsigned int v145; // [rsp+110h] [rbp-578h]
  unsigned int v146; // [rsp+114h] [rbp-574h]
  unsigned int v147; // [rsp+118h] [rbp-570h]
  unsigned int v148; // [rsp+11Ch] [rbp-56Ch]
  unsigned int v149; // [rsp+120h] [rbp-568h]
  unsigned int v150; // [rsp+124h] [rbp-564h] BYREF
  struct _RTL_CRITICAL_SECTION *v151; // [rsp+128h] [rbp-560h]
  _DWORD v152[4]; // [rsp+130h] [rbp-558h] BYREF
  int v153; // [rsp+140h] [rbp-548h]
  __int64 v154; // [rsp+148h] [rbp-540h] BYREF
  __int64 *v155; // [rsp+150h] [rbp-538h]
  __int64 v156; // [rsp+158h] [rbp-530h]
  char v157; // [rsp+160h] [rbp-528h]
  int v158; // [rsp+168h] [rbp-520h]
  _WORD *v159; // [rsp+170h] [rbp-518h]
  __int64 v160; // [rsp+178h] [rbp-510h]
  __int64 *v161; // [rsp+180h] [rbp-508h]
  __int64 v162; // [rsp+188h] [rbp-500h]
  __int64 v163; // [rsp+190h] [rbp-4F8h] BYREF
  __int64 v164; // [rsp+198h] [rbp-4F0h]
  unsigned int *v165; // [rsp+1A0h] [rbp-4E8h]
  __int64 v166; // [rsp+1A8h] [rbp-4E0h]
  int v167; // [rsp+1B0h] [rbp-4D8h]
  int v168; // [rsp+1B4h] [rbp-4D4h]
  unsigned int v169; // [rsp+1B8h] [rbp-4D0h]
  int v170; // [rsp+1BCh] [rbp-4CCh]
  int v171; // [rsp+1C0h] [rbp-4C8h]
  int v172; // [rsp+1C4h] [rbp-4C4h]
  int v173; // [rsp+1C8h] [rbp-4C0h]
  int v174; // [rsp+1CCh] [rbp-4BCh]
  int v175; // [rsp+1D0h] [rbp-4B8h]
  unsigned int v176; // [rsp+1D4h] [rbp-4B4h]
  unsigned int v177; // [rsp+1D8h] [rbp-4B0h]
  int v178; // [rsp+1DCh] [rbp-4ACh]
  int v179; // [rsp+1E0h] [rbp-4A8h]
  int v180; // [rsp+1E8h] [rbp-4A0h]
  int v181; // [rsp+1F0h] [rbp-498h]
  int v182; // [rsp+1F8h] [rbp-490h]
  int v183; // [rsp+200h] [rbp-488h]
  int v184; // [rsp+204h] [rbp-484h]
  int v185; // [rsp+208h] [rbp-480h]
  int v186; // [rsp+20Ch] [rbp-47Ch]
  unsigned int v187; // [rsp+210h] [rbp-478h]
  int v188; // [rsp+214h] [rbp-474h]
  int v189; // [rsp+218h] [rbp-470h]
  int v190; // [rsp+21Ch] [rbp-46Ch]
  int v191; // [rsp+228h] [rbp-460h]
  int v192; // [rsp+230h] [rbp-458h]
  int v193; // [rsp+238h] [rbp-450h]
  unsigned int v194; // [rsp+23Ch] [rbp-44Ch]
  int v195; // [rsp+240h] [rbp-448h]
  unsigned int v196; // [rsp+244h] [rbp-444h]
  unsigned int v197; // [rsp+248h] [rbp-440h]
  int v198; // [rsp+24Ch] [rbp-43Ch]
  unsigned int v199; // [rsp+250h] [rbp-438h]
  unsigned int v200; // [rsp+254h] [rbp-434h]
  unsigned __int16 *i; // [rsp+258h] [rbp-430h]
  unsigned __int16 *v202; // [rsp+260h] [rbp-428h]
  __int64 *v203; // [rsp+268h] [rbp-420h]
  unsigned __int16 *k; // [rsp+270h] [rbp-418h]
  _QWORD *v205; // [rsp+278h] [rbp-410h]
  __int64 v206; // [rsp+280h] [rbp-408h]
  __int64 v207; // [rsp+288h] [rbp-400h]
  __int64 v208; // [rsp+290h] [rbp-3F8h]
  __int64 *v209; // [rsp+298h] [rbp-3F0h]
  _QWORD *v210; // [rsp+2A0h] [rbp-3E8h]
  unsigned __int16 *n; // [rsp+2A8h] [rbp-3E0h]
  _QWORD *v212; // [rsp+2B0h] [rbp-3D8h]
  __int64 v213; // [rsp+2B8h] [rbp-3D0h]
  __int64 v214; // [rsp+2C0h] [rbp-3C8h]
  __int64 v215; // [rsp+2C8h] [rbp-3C0h]
  _QWORD v216[4]; // [rsp+2D0h] [rbp-3B8h] BYREF
  __int64 v217; // [rsp+2F0h] [rbp-398h]
  _WORD *v218; // [rsp+2F8h] [rbp-390h]
  unsigned __int64 v219; // [rsp+300h] [rbp-388h]
  __int64 v220; // [rsp+308h] [rbp-380h]
  _WORD *v221; // [rsp+310h] [rbp-378h]
  unsigned __int64 v222; // [rsp+318h] [rbp-370h]
  __int64 v223; // [rsp+320h] [rbp-368h]
  void *v224; // [rsp+328h] [rbp-360h]
  _QWORD *v225; // [rsp+330h] [rbp-358h]
  _DWORD v226[2]; // [rsp+338h] [rbp-350h] BYREF
  __int64 v227; // [rsp+340h] [rbp-348h]
  int v228; // [rsp+348h] [rbp-340h]
  int v229; // [rsp+34Ch] [rbp-33Ch]
  __int64 (__fastcall **v230)(); // [rsp+350h] [rbp-338h]
  unsigned int *v231; // [rsp+358h] [rbp-330h]
  __int64 v232; // [rsp+360h] [rbp-328h]
  __int64 *v233; // [rsp+368h] [rbp-320h]
  char v234; // [rsp+370h] [rbp-318h]
  union _RTL_RUN_ONCE *v235; // [rsp+378h] [rbp-310h] BYREF
  int v236; // [rsp+380h] [rbp-308h]
  __int64 v237; // [rsp+388h] [rbp-300h]
  __int64 v238; // [rsp+390h] [rbp-2F8h]
  __int64 *v239; // [rsp+398h] [rbp-2F0h]
  __int64 v240; // [rsp+3A0h] [rbp-2E8h]
  __int64 *v241; // [rsp+3A8h] [rbp-2E0h]
  __int64 v242; // [rsp+3B0h] [rbp-2D8h]
  __int64 v243; // [rsp+3B8h] [rbp-2D0h]
  __int64 v244; // [rsp+3C0h] [rbp-2C8h]
  __int64 v245; // [rsp+3C8h] [rbp-2C0h]
  unsigned __int16 *v246; // [rsp+3D0h] [rbp-2B8h]
  __int64 v247; // [rsp+3D8h] [rbp-2B0h]
  __int64 v248; // [rsp+3E0h] [rbp-2A8h]
  __int64 v249; // [rsp+3E8h] [rbp-2A0h]
  __int64 v250; // [rsp+3F0h] [rbp-298h]
  __int64 v251; // [rsp+3F8h] [rbp-290h]
  __int64 v252; // [rsp+400h] [rbp-288h]
  __int64 v253; // [rsp+408h] [rbp-280h]
  __int64 v254; // [rsp+410h] [rbp-278h]
  __int64 v255; // [rsp+418h] [rbp-270h]
  LPCRITICAL_SECTION v256; // [rsp+420h] [rbp-268h]
  __int64 v257; // [rsp+428h] [rbp-260h]
  __int64 v258; // [rsp+430h] [rbp-258h]
  __int64 v259; // [rsp+438h] [rbp-250h]
  __int64 v260; // [rsp+440h] [rbp-248h]
  __int64 v261; // [rsp+448h] [rbp-240h]
  __int64 v262; // [rsp+450h] [rbp-238h]
  _QWORD *v263; // [rsp+458h] [rbp-230h]
  __int64 v264; // [rsp+460h] [rbp-228h]
  __int64 v265; // [rsp+468h] [rbp-220h]
  __int64 v266; // [rsp+470h] [rbp-218h]
  struct _RTL_CRITICAL_SECTION *v267; // [rsp+478h] [rbp-210h]
  LPCRITICAL_SECTION v268; // [rsp+480h] [rbp-208h]
  LPCRITICAL_SECTION v269; // [rsp+488h] [rbp-200h]
  __int64 v270; // [rsp+490h] [rbp-1F8h]
  __int64 v271; // [rsp+498h] [rbp-1F0h]
  __int64 v272; // [rsp+4A0h] [rbp-1E8h]
  __int64 v273; // [rsp+4A8h] [rbp-1E0h]
  __int64 v274; // [rsp+4B0h] [rbp-1D8h]
  __int64 v275; // [rsp+4B8h] [rbp-1D0h]
  struct _RTL_CRITICAL_SECTION *v276; // [rsp+4C0h] [rbp-1C8h]
  __int64 v277; // [rsp+4C8h] [rbp-1C0h]
  __int64 v278; // [rsp+4D0h] [rbp-1B8h]
  unsigned __int16 *v279; // [rsp+4D8h] [rbp-1B0h]
  __int64 v280; // [rsp+4E0h] [rbp-1A8h]
  char v281[8]; // [rsp+4E8h] [rbp-1A0h] BYREF
  __int64 v282; // [rsp+4F0h] [rbp-198h]
  __int64 v283; // [rsp+500h] [rbp-188h]
  unsigned int *v284; // [rsp+508h] [rbp-180h]
  unsigned int *v285; // [rsp+510h] [rbp-178h]
  _WORD *v286; // [rsp+518h] [rbp-170h]
  _DWORD *v287; // [rsp+520h] [rbp-168h]
  unsigned __int64 v288; // [rsp+528h] [rbp-160h]
  _WORD *v289; // [rsp+530h] [rbp-158h]
  _WORD *v290; // [rsp+538h] [rbp-150h]
  unsigned __int64 v291; // [rsp+540h] [rbp-148h]
  __int64 v292; // [rsp+548h] [rbp-140h]
  __int64 v293; // [rsp+550h] [rbp-138h]
  void *v294; // [rsp+558h] [rbp-130h]
  __int64 v295; // [rsp+560h] [rbp-128h]
  __int64 v296; // [rsp+568h] [rbp-120h]
  __int64 v297; // [rsp+570h] [rbp-118h]
  unsigned __int16 *v298; // [rsp+578h] [rbp-110h]
  unsigned __int16 *v299; // [rsp+580h] [rbp-108h]
  __int128 v300; // [rsp+590h] [rbp-F8h]
  __int128 v301; // [rsp+5A0h] [rbp-E8h] BYREF
  struct _RTL_CRITICAL_SECTION *v302; // [rsp+5B0h] [rbp-D8h]
  __int64 v303; // [rsp+5B8h] [rbp-D0h]
  __int64 v304; // [rsp+5C0h] [rbp-C8h]
  char v305[24]; // [rsp+5C8h] [rbp-C0h] BYREF
  __int64 v306; // [rsp+5E0h] [rbp-A8h]
  int v307; // [rsp+5E8h] [rbp-A0h]
  int v308; // [rsp+5ECh] [rbp-9Ch]
  void *v309; // [rsp+5F0h] [rbp-98h]
  int v310; // [rsp+5F8h] [rbp-90h]
  int v311; // [rsp+5FCh] [rbp-8Ch]
  void *v312; // [rsp+600h] [rbp-88h]
  int v313; // [rsp+608h] [rbp-80h]
  int v314; // [rsp+60Ch] [rbp-7Ch]
  int *v315; // [rsp+610h] [rbp-78h]
  int v316; // [rsp+618h] [rbp-70h]
  int v317; // [rsp+61Ch] [rbp-6Ch]
  int *v318; // [rsp+620h] [rbp-68h]
  int v319; // [rsp+628h] [rbp-60h]
  int v320; // [rsp+62Ch] [rbp-5Ch]
  void *retaddr; // [rsp+688h] [rbp+0h]

  v121 = a4;
  v7 = a3;
  v120 = a3;
  v123 = a2;
  v126 = a1;
  v216[2] = a1;
  v217 = a1;
  v216[3] = a2;
  v216[1] = a3;
  v152[2] = a4;
  v161 = a7;
  v115 = 1;
  *a7 = 0LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v297 = a1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  lpCriticalSection = v9;
  v117 = 0LL;
  v118 = 0LL;
  v154 = 0LL;
  v10 = 0LL;
  v162 = 0LL;
  v302 = v9;
  EnterCriticalSection(v9);
  v11 = (__int64 *)(a1 + 56);
  v203 = (__int64 *)(a1 + 56);
  v304 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818);
  v122 = (volatile signed __int32 *)(v304 + 24);
  v228 = sub_18001B6A0(v7, &v122);
  if ( v228 < 0 )
  {
    v202 = (unsigned __int16 *)(v122 - 6);
    if ( _InterlockedExchangeAdd(v122 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v202 + 8LL))(*(_QWORD *)v202);
    v15 = 0;
    v146 = 0;
    v117 = v118;
    v10 = v162;
    v11 = v203;
  }
  else
  {
    v12 = v122;
    v13 = *((int *)v122 - 4);
    v229 = v13;
    v298 = (unsigned __int16 *)(v122 - 6);
    v167 = 1 - *((_DWORD *)v122 - 2);
    v168 = *((_DWORD *)v122 - 3) - v13;
    if ( (v167 | v168) < 0 )
    {
      sub_18001B550(&v122, (unsigned int)v13);
      v12 = v122;
    }
    o__wcsupr_s(v12, (int)v13 + 1);
    if ( (int)v13 < 0 || (int)v13 > *((_DWORD *)v122 - 3) )
      sub_1800B8610(2147942487LL);
    *((_DWORD *)v122 - 4) = v13;
    *((_WORD *)v122 + v13) = 0;
    v14 = (unsigned __int16 *)v122;
    if ( !v122 )
      sub_1800B8610(2147500037LL);
    v15 = 0;
    v145 = 0;
    for ( i = (unsigned __int16 *)v122; ; i = v14 )
    {
      v16 = *v14;
      if ( !(_WORD)v16 )
        break;
      v15 = v16 + 33 * v15;
      v145 = v15;
      ++v14;
    }
    v299 = (unsigned __int16 *)(v122 - 6);
    sub_180006A30(v122 - 6);
    v146 = v15;
  }
  v169 = v15;
  if ( *((_DWORD *)v11 + 4) == 17 )
    v17 = v15 % 0x11;
  else
    v17 = v15 % *((_DWORD *)v11 + 4);
  v170 = v17;
  v18 = *v11;
  if ( v18 )
  {
    for ( j = *(__int64 **)(v18 + 8 * v17); ; j = (__int64 *)j[11] )
    {
      v209 = j;
      if ( !j )
        break;
      v171 = *((_DWORD *)j + 24);
      if ( v171 == v15 )
      {
        v303 = *(_QWORD *)v7;
        v237 = *j;
        if ( !(unsigned int)o__wcsicmp(v237, v303) )
        {
          v238 = v7 + 56;
          v239 = j + 7;
          v20 = *((_DWORD *)j + 16);
          if ( v20 == *(_DWORD *)(v7 + 64) && (v20 || *((_DWORD *)j + 14) == *(_DWORD *)(v7 + 56)) )
          {
            v21 = v7 + 8;
            v240 = v21;
            v241 = j + 1;
            v22 = *((_DWORD *)j + 12);
            if ( v22 == *(_DWORD *)(v21 + 40) )
            {
              if ( v22 || (v242 = *(_QWORD *)v21, v243 = j[1], !(unsigned int)o__wcsicmp(v243, v242)) )
              {
                v23 = j[3] - *(_QWORD *)(v21 + 16);
                if ( !v23 )
                  v23 = j[4] - *(_QWORD *)(v21 + 24);
                if ( !v23 )
                {
                  v24 = v126 + 56;
                  v206 = v126 + 56;
                  v244 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818);
                  v127 = v244 + 24;
                  v25 = v120;
                  v172 = sub_18001B6A0(v120, &v127);
                  if ( v172 < 0 )
                  {
                    v205 = (_QWORD *)(v127 - 24);
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v127 - 24 + 16), 0xFFFFFFFF) <= 1 )
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v205 + 8LL))(*v205);
                    v28 = 0;
                    v142 = 0;
                    v117 = v118;
                    v24 = v206;
                  }
                  else
                  {
                    v26 = (unsigned __int16 *)v127;
                    v27 = *(int *)(v127 - 16);
                    v173 = v27;
                    v245 = v127 - 24;
                    v174 = 1 - *(_DWORD *)(v127 - 24 + 16);
                    v175 = *(_DWORD *)(v127 - 24 + 12) - v27;
                    if ( (v174 | v175) < 0 )
                    {
                      sub_18001B550(&v127, (unsigned int)v27);
                      v26 = (unsigned __int16 *)v127;
                    }
                    o__wcsupr_s(v26, (int)v27 + 1);
                    if ( (int)v27 < 0 || (int)v27 > *((_DWORD *)v26 - 3) )
                      sub_1800B8610(2147942487LL);
                    *((_DWORD *)v26 - 4) = v27;
                    v26[v27] = 0;
                    v28 = 0;
                    v147 = 0;
                    v29 = v26;
                    for ( k = v26; ; k = v29 )
                    {
                      v30 = *v29;
                      if ( !(_WORD)v30 )
                        break;
                      v28 = v30 + 33 * v28;
                      v147 = v28;
                      ++v29;
                    }
                    v246 = v26 - 12;
                    sub_180006A30((volatile signed __int32 *)v26 - 6);
                    v142 = v28;
                  }
                  v176 = v28;
                  if ( *(_DWORD *)(v24 + 16) == 17 )
                    v31 = v28 % 0x11;
                  else
                    v31 = v28 % *(_DWORD *)(v24 + 16);
                  v177 = v31;
                  if ( *(_QWORD *)v24 )
                  {
                    for ( m = *(_QWORD *)(*(_QWORD *)v24 + 8LL * v31); ; m = *(_QWORD *)(m + 88) )
                    {
                      v207 = m;
                      if ( !m )
                        break;
                      v178 = *(_DWORD *)(m + 96);
                      if ( v178 == v28 )
                      {
                        v247 = *(_QWORD *)v25;
                        v248 = *(_QWORD *)m;
                        if ( !(unsigned int)o__wcsicmp(v248, v247) )
                        {
                          v249 = v25 + 56;
                          v250 = m + 56;
                          v33 = *(_DWORD *)(m + 64);
                          if ( v33 == *(_DWORD *)(v25 + 64) && (v33 || *(_DWORD *)(m + 56) == *(_DWORD *)(v25 + 56)) )
                          {
                            v251 = v25 + 8;
                            v252 = m + 8;
                            v34 = *(_DWORD *)(m + 48);
                            if ( v34 == *(_DWORD *)(v25 + 48)
                              && (v34
                               || (v253 = *(_QWORD *)(v25 + 8),
                                   v254 = *(_QWORD *)(m + 8),
                                   !(unsigned int)o__wcsicmp(v254, v253))) )
                            {
                              v35 = *(_QWORD *)(m + 24) - *(_QWORD *)(v25 + 24);
                              if ( !v35 )
                                v35 = *(_QWORD *)(m + 32) - *(_QWORD *)(v25 + 32);
                              v25 = v120;
                              if ( !v35 )
                              {
                                v208 = m;
                                goto LABEL_52;
                              }
                            }
                            else
                            {
                              v25 = v120;
                            }
                          }
                        }
                      }
                    }
                  }
                  m = sub_1800CE6DC(v24, v25, v31, v28);
                  v208 = m;
LABEL_52:
                  v10 = *(_QWORD *)(m + 80);
                  v162 = v10;
                  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
                    && *((_BYTE *)off_18019C348 + 25) >= 4u )
                  {
                    v255 = *(_QWORD *)(v25 + 72);
                    sub_1800CD21C(*((_QWORD *)off_18019C348 + 2), 10, (unsigned int)&unk_18015DFC8, 0, v255);
                  }
                  break;
                }
              }
            }
            v7 = v120;
          }
        }
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v154 = v10;
  if ( v10 )
  {
    v36 = 0;
    v37 = -2147024894;
  }
  else
  {
    v37 = -2147024894;
    v36 = -2147024894;
  }
  v179 = v36;
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( v36 >= 0 )
  {
    if ( lpCriticalSection )
    {
      v256 = lpCriticalSection;
      LastError = GetLastError();
      LeaveCriticalSection(lpCriticalSection);
      SetLastError(LastError);
    }
    lpCriticalSection = 0LL;
    v257 = v10 + 616;
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 616));
    v258 = v10 + 616;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) != 2 )
    {
      v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v123 + 40LL))(v123);
      v180 = v39;
      v259 = v10 + 736;
      EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 736));
      v260 = v10 + 736;
      v261 = v10 + 776;
      v40 = *(_QWORD **)(v10 + 776);
      v210 = v40;
      v262 = v10 + 784;
      v41 = *(_QWORD **)(v10 + 784);
      v263 = v41;
      while ( v40 != v41 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 40LL))(*v40) == v39 )
        {
          if ( v10 != -736 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 736));
          goto LABEL_74;
        }
        v210 = ++v40;
      }
      if ( v10 != -736 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 736));
      v108 = sub_1800CA2FC(v10, v123);
      v109 = v108;
      v181 = v108;
      if ( v108 < 0 )
      {
        sub_18004BD84(
          retaddr,
          278LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (unsigned int)v108);
        if ( v10 != -616 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 616));
        sub_18000F708(&v154);
        sub_18000F708(&v118);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return v109;
      }
LABEL_74:
      *(_QWORD *)(v10 + 392) = GetTickCount64();
      v264 = -10000LL * *(unsigned int *)(v10 + 312);
      v163 = v264;
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD, int))(*(_QWORD *)qword_18019E640 + 24LL))(
        qword_18019E640,
        *(_QWORD *)(v10 + 600),
        &v163,
        0LL,
        100);
      v42 = v117;
      v265 = v117;
      v117 = v10;
      v118 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      if ( v42 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    if ( v10 != -616 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 616));
    v43 = (struct _RTL_CRITICAL_SECTION *)(v126 + 16);
    v266 = v126 + 16;
    EnterCriticalSection((LPCRITICAL_SECTION)(v126 + 16));
    v140 = v43;
    v44 = v43;
    v267 = v43;
    if ( lpCriticalSection )
    {
      v268 = lpCriticalSection;
      v110 = GetLastError();
      LeaveCriticalSection(lpCriticalSection);
      SetLastError(v110);
    }
    lpCriticalSection = v44;
    v140 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v117 )
  {
    v45 = v117;
    if ( (v121 & 0x20) != 0 )
      *(_DWORD *)(v117 + 480) = 1;
    goto LABEL_86;
  }
  if ( lpCriticalSection )
  {
    v269 = lpCriticalSection;
    v49 = GetLastError();
    LeaveCriticalSection(lpCriticalSection);
    SetLastError(v49);
  }
  lpCriticalSection = 0LL;
  v116 = 0LL;
  v50 = v121;
  if ( (v121 & 8) == 0 )
  {
    v111 = sub_18006A18C(1040LL, &unk_18019F848);
    v273 = v111;
    if ( v111 )
    {
      v52 = sub_1800CD924(v111);
      v141 = v52;
      goto LABEL_96;
    }
    goto LABEL_214;
  }
  v51 = sub_18006A18C(1056LL, &unk_18019F848);
  v52 = v51;
  v270 = v51;
  if ( !v51 )
  {
LABEL_214:
    v52 = 0LL;
    goto LABEL_95;
  }
  sub_18002BE50(v51);
  *(_QWORD *)v52 = off_180146000;
  *(_QWORD *)(v52 + 8) = off_180146280;
  *(_QWORD *)(v52 + 16) = off_1801461F8;
  *(_QWORD *)(v52 + 24) = off_180146228;
  *(_QWORD *)(v52 + 32) = off_180146258;
  *(_BYTE *)(v52 + 984) = 1;
  v271 = v52 + 992;
  *(_QWORD *)(v52 + 992) = 0LL;
  v272 = v52 + 1000;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v52 + 1000), 0, 0);
  *(_QWORD *)(v52 + 1040) = 0LL;
LABEL_95:
  v141 = v52;
LABEL_96:
  v53 = v116;
  v274 = v116;
  v116 = v52;
  if ( v274 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    v52 = v116;
  }
  if ( !v52 )
  {
    sub_18004BD84(retaddr, 331LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp", 2147942414LL);
    sub_18000F708(&v116);
    sub_18000F708(&v118);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 2147942414LL;
  }
  v54 = xmmword_18015B730;
  v300 = xmmword_18015B730;
  if ( (v50 & 4) != 0 )
  {
    v56 = v120;
  }
  else
  {
    v55 = v123;
    v56 = v120;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v123 + 440LL))(v123) )
    {
      v54 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v55 + 456LL))(
                         v55,
                         v305,
                         v120 + 24);
      v300 = v54;
    }
    v52 = v116;
  }
  v301 = v54;
  v57 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, __int128 *))(*(_QWORD *)v52 + 240LL))(
          v52,
          v123,
          v56,
          v50,
          a5,
          a6,
          &v301);
  v58 = v57;
  v182 = v57;
  if ( v57 < 0 )
  {
    sub_18004BD84(
      retaddr,
      355LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (unsigned int)v57);
    sub_18000F708(&v116);
    sub_18000F708(&v118);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return v58;
  }
  v59 = v126;
  v60 = (struct _RTL_CRITICAL_SECTION *)(v126 + 16);
  v144 = (LPCRITICAL_SECTION)(v126 + 16);
  v275 = v126 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(v126 + 16));
  v151 = v60;
  v118 = 0LL;
  v117 = 0LL;
  v164 = 0LL;
  v276 = v60;
  EnterCriticalSection(v60);
  v61 = v60;
  v62 = v59 + 56;
  v63 = v62;
  v213 = v62;
  v277 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818);
  v128 = v277 + 24;
  v183 = sub_18001B6A0(v56, &v128);
  if ( v183 < 0 )
  {
    v212 = (_QWORD *)(v128 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v128 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v212 + 8LL))(*v212);
    v66 = 0;
    v149 = 0;
    v144 = v151;
    v117 = v164;
    v63 = v213;
  }
  else
  {
    v64 = (unsigned __int16 *)v128;
    v65 = *(int *)(v128 - 16);
    v184 = v65;
    v278 = v128 - 24;
    v185 = 1 - *(_DWORD *)(v128 - 24 + 16);
    v186 = *(_DWORD *)(v128 - 24 + 12) - v65;
    if ( (v185 | v186) < 0 )
    {
      sub_18001B550(&v128, (unsigned int)v65);
      v64 = (unsigned __int16 *)v128;
    }
    o__wcsupr_s(v64, (int)v65 + 1);
    if ( (int)v65 < 0 || (int)v65 > *((_DWORD *)v64 - 3) )
      sub_1800B8610(2147942487LL);
    *((_DWORD *)v64 - 4) = v65;
    v64[v65] = 0;
    v66 = 0;
    v148 = 0;
    v67 = v64;
    for ( n = v64; ; n = v67 )
    {
      v68 = *v67;
      if ( !(_WORD)v68 )
        break;
      v66 = v68 + 33 * v66;
      v148 = v66;
      ++v67;
    }
    v279 = v64 - 12;
    sub_180006A30((volatile signed __int32 *)v64 - 6);
    v149 = v66;
  }
  v187 = v66;
  if ( *(_DWORD *)(v63 + 16) == 17 )
    v69 = v66 % 0x11;
  else
    v69 = v66 % *(_DWORD *)(v63 + 16);
  v188 = v69;
  if ( *(_QWORD *)v63 )
  {
    for ( ii = *(_QWORD *)(*(_QWORD *)v63 + 8 * v69); ; ii = *(_QWORD *)(ii + 88) )
    {
      v215 = ii;
      if ( !ii )
        break;
      v189 = *(_DWORD *)(ii + 96);
      if ( v189 == v66 && sub_1800053AC(ii, v120) )
      {
        v280 = v62;
        v112 = sub_1800CF4A4(v62, v120, (unsigned int)v152, (unsigned int)&v150, (__int64)v281);
        v214 = v112;
        if ( !v112 )
        {
          v112 = sub_1800CE6DC(v62, v120, v152[0], v150);
          v214 = v112;
        }
        v71 = *(_QWORD *)(v112 + 80);
        v117 = v71;
        v164 = v71;
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          v282 = *(_QWORD *)(v120 + 72);
          sub_1800CD21C(*((_QWORD *)off_18019C348 + 2), 10, (unsigned int)&unk_18015DFC8, 0, v282);
        }
        goto LABEL_119;
      }
    }
  }
  v71 = v117;
LABEL_119:
  if ( v71 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 8LL))(v71);
  v118 = v71;
  if ( v71 )
    v37 = 0;
  v190 = v37;
  if ( v61 )
    LeaveCriticalSection(v61);
  if ( v37 >= 0 )
  {
    sub_1800C7588(v116);
    v73 = v144;
    v45 = v117;
  }
  else
  {
    v124 = 0;
    v216[0] = v116;
    v72 = v126;
    sub_18002B430(v126 + 56, v120, v216);
    v73 = v144;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v116 + 8LL))(v116);
    v74 = v217;
    v129 = v217;
    v130 = v120;
    v131 = &v116;
    v132 = 1;
    v75 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v116 + 224LL))(v116, v72);
    v76 = v75;
    v191 = v75;
    if ( v75 < 0 )
    {
      sub_18004BD84(
        retaddr,
        378LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (unsigned int)v75);
      if ( v132 )
      {
        v132 = 0;
        sub_1800CFF50(v129 + 56, v130);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*v131 + 16LL))(*v131);
      }
      if ( v73 )
        LeaveCriticalSection(v73);
      sub_18000F708(&v116);
      sub_18000F708(&v118);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v76;
    }
    v155 = &v116;
    v156 = v74;
    v157 = 1;
    v77 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v116 + 224LL))(v116, qword_18019E5F8);
    v78 = v77;
    v192 = v77;
    if ( v77 < 0 )
    {
      sub_18004BD84(
        retaddr,
        385LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (unsigned int)v77);
      if ( v157 )
      {
        v157 = 0;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v155 + 232LL))(*v155, v156);
      }
      if ( v132 )
      {
        v132 = 0;
        sub_1800CFF50(v129 + 56, v130);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*v131 + 16LL))(*v131);
      }
      if ( v73 )
        LeaveCriticalSection(v73);
      sub_18000F708(&v116);
      sub_18000F708(&v118);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v78;
    }
    v233 = &v116;
    v234 = 1;
    v79 = v116;
    v283 = v116;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 40LL, &unk_18015DFC8, 0LL);
    }
    v193 = *(_DWORD *)(*(_QWORD *)(v79 + 728) - 16LL);
    v80 = 2 * v193 + 2;
    v194 = v80;
    v195 = *(_DWORD *)(*(_QWORD *)(v72 + 296) - 16LL);
    v81 = 2 * v195 + 2;
    v196 = v81;
    v82 = v81 + 2 * v193 + 74;
    v197 = v82;
    v83 = (unsigned int *)sub_18006A1B0(v82, &unk_18019F848);
    v84 = v83;
    v284 = v83;
    v285 = v83;
    if ( v83 )
    {
      *v83 = v82;
      v83[1] = 64;
      v83[6] = v80;
      v83[12] = v81;
      v83[13] = v80 + 72;
      v85 = *(_WORD **)(v79 + 728);
      v286 = v85;
      v86 = v83 + 18;
      v287 = v83 + 18;
      v87 = (unsigned __int64)v80 >> 1;
      v288 = v87;
      v88 = 0;
      v153 = 0;
      if ( !v87 )
      {
        v88 = -2147024809;
        v153 = -2147024809;
      }
      v133 = v88;
      v89 = 2147483646LL;
      if ( v88 < 0 )
      {
        if ( v87 )
          *(_WORD *)v86 = 0;
      }
      else
      {
        v90 = 2147483646LL;
        v220 = 2147483646LL;
        v218 = v85;
        v219 = (unsigned __int64)v80 >> 1;
        v165 = v84 + 18;
        v91 = 0;
        v158 = 0;
        v92 = 0LL;
        v166 = 0LL;
        while ( v87 )
        {
          if ( !v90 || !*v85 )
            goto LABEL_139;
          *(_WORD *)v86 = *v85;
          v86 = (unsigned int *)((char *)v86 + 2);
          v165 = v86;
          v218 = ++v85;
          v219 = --v87;
          v220 = --v90;
          v166 = ++v92;
        }
        v86 = (unsigned int *)((char *)v86 - 2);
        v165 = v86;
        v166 = v92 - 1;
        v91 = -2147024774;
        v158 = -2147024774;
LABEL_139:
        *(_WORD *)v86 = 0;
        v133 = v91;
      }
      v93 = v126;
      v94 = *(_WORD **)(v126 + 296);
      v289 = v94;
      v95 = (_WORD *)((char *)v84 + v84[13]);
      v290 = v95;
      v96 = (unsigned __int64)v81 >> 1;
      v291 = v96;
      v97 = 0;
      v134 = 0;
      if ( !v96 )
      {
        v97 = -2147024809;
        v134 = -2147024809;
      }
      v136 = v97;
      if ( v97 < 0 )
      {
        if ( v96 )
          *v95 = 0;
      }
      else
      {
        v223 = 2147483646LL;
        v221 = v94;
        v222 = (unsigned __int64)v81 >> 1;
        v159 = v95;
        v98 = 0;
        v135 = 0;
        v99 = 0LL;
        v160 = 0LL;
        while ( v96 )
        {
          if ( !v89 || !*v94 )
            goto LABEL_151;
          *v95++ = *v94;
          v159 = v95;
          v221 = ++v94;
          v222 = --v96;
          v223 = --v89;
          v160 = ++v99;
        }
        v159 = --v95;
        v160 = v99 - 1;
        v98 = -2147024774;
        v135 = -2147024774;
LABEL_151:
        *v95 = 0;
        v136 = v98;
        v93 = v126;
      }
      v230 = off_180154B60;
      v231 = v84;
      v232 = v79;
      sub_180005310((LPCRITICAL_SECTION)(v93 + 192));
    }
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v84);
    v101 = v116;
    v102 = v117;
    v292 = v117;
    v45 = v116;
    v118 = v116;
    if ( v116 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v116 + 8LL))(v116);
    if ( v102 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
    v115 = 0;
    v234 = 0;
    v157 = 0;
    v132 = 0;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
    {
      v235 = &InitOnce;
      Context = &qword_18019E828;
      qword_18019E828 = (__int64)off_1801462A0;
      qword_18019E840 = (__int64)&unk_18019C388;
      atexit(sub_1800B6240);
      v236 = 0;
      sub_180054090(&v235);
    }
    v103 = *((_QWORD *)Context + 1);
    v293 = v103;
    if ( *(_DWORD *)v103 > 4u )
    {
      v198 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v123 + 40LL))(v123);
      v138 = v198;
      v139 = v121;
      v104 = *(void **)(v101 + 728);
      v294 = v104;
      v318 = &v138;
      v319 = 4;
      v320 = 0;
      v315 = (int *)&v139;
      v316 = 4;
      v317 = 0;
      if ( v104 )
      {
        v224 = v104;
        v105 = -1LL;
        do
          ++v105;
        while ( *((_WORD *)v104 + v105) );
        v295 = v105;
        v106 = 2 * v105 + 2;
      }
      else
      {
        v104 = &unk_18015C744;
        v224 = &unk_18015C744;
        v106 = 2;
      }
      v125 = v106;
      v312 = v104;
      v313 = v106;
      v314 = 0;
      v226[0] = 184549376;
      v226[1] = 4;
      v227 = 0LL;
      v306 = *(_QWORD *)(v103 + 8);
      v307 = **(unsigned __int16 **)(v103 + 8);
      v308 = 2;
      v309 = &unk_180166C23;
      v310 = 69;
      v311 = 1;
      v199 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
      v200 = v199;
      EtwEventWriteTransfer(*(_QWORD *)(v103 + 32), v226, 0LL);
    }
    if ( v157 )
    {
      v157 = 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v155 + 232LL))(*v155, v156);
    }
    if ( v132 )
    {
      v132 = 0;
      sub_1800CE044(&v129);
    }
  }
  if ( v73 )
    LeaveCriticalSection(v73);
  if ( v116 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v116 + 16LL))(v116);
LABEL_86:
  v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v123 + 40LL))(v123);
  EnterCriticalSection((LPCRITICAL_SECTION)(v45 + 736));
  v296 = v45 + 736;
  v47 = *(_QWORD **)(v45 + 776);
  v225 = v47;
  v48 = *(_QWORD **)(v45 + 784);
  while ( v47 != v48 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 40LL))(*v47) == v46 )
    {
      if ( v45 != -736 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v45 + 736));
      goto LABEL_186;
    }
    v225 = ++v47;
  }
  if ( v45 != -736 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v45 + 736));
  v113 = sub_1800CA2FC(v45, v123);
  v114 = v113;
  if ( v113 < 0 )
  {
    sub_18004BD84(
      retaddr,
      439LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (unsigned int)v113);
    sub_18000F708(&v118);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return v114;
  }
LABEL_186:
  if ( v115 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 256LL))(v45);
  v118 = 0LL;
  *v161 = v45;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
