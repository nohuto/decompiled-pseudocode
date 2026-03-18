/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0200238
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0008F10 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C000A3B0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001A56C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0026BA8 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C01DD1E0 (DpiGetPnpRegistryKeyName.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0215C4C (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0215D70 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C02BABF0 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // r12d
  __int64 v7; // rdi
  unsigned int v8; // r13d
  bool v9; // cc
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf
  __int64 v13; // rcx
  unsigned int v14; // r15d
  __int64 v15; // rax
  DXGADAPTER *v16; // rcx
  __int64 v17; // r8
  int AdapterInfo; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  char *v23; // r15
  __int64 v24; // rcx
  unsigned int v25; // ebx
  unsigned int v26; // eax
  int v27; // r9d
  unsigned int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rsi
  __int16 v35; // cx
  __int64 v36; // rdi
  unsigned int v37; // eax
  int v38; // eax
  void *v39; // rcx
  void *v40; // r8
  __int64 v41; // r10
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // edx
  int v47; // ecx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 j; // r8
  __int64 v52; // r10
  __int64 v53; // r9
  unsigned int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rbx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rax
  unsigned int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // rax
  void *v65; // rcx
  unsigned int v66; // esi
  unsigned int v67; // r8d
  ADAPTER_RENDER *v68; // rcx
  int v69; // eax
  ADAPTER_DISPLAY *v70; // rcx
  int v71; // eax
  _QWORD *v72; // r12
  int v73; // eax
  ULONG TimeIncrement; // eax
  __int64 v75; // rcx
  unsigned __int64 v76; // r8
  __int64 v77; // rax
  unsigned __int64 v78; // rtt
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned __int64 v89; // rtt
  __int64 v90; // rax
  unsigned __int64 v91; // rtt
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  unsigned __int64 v95; // rtt
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  unsigned int v113; // esi
  __int64 v114; // rdi
  __int64 v115; // rbx
  DXGADAPTER *v116; // rdx
  int v117; // ecx
  int v118; // ecx
  __int64 v119; // rax
  unsigned int v120; // edx
  __int64 v121; // r8
  DXGADAPTER *v122; // rcx
  __int64 v123; // r8
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  unsigned int v128; // edx
  unsigned int v129; // ecx
  unsigned __int64 v130; // rdx
  unsigned __int64 v131; // rcx
  DXGADAPTER **v132; // rcx
  unsigned __int64 v133; // rcx
  unsigned int v134; // eax
  unsigned __int64 *v135; // rdx
  __int64 v136; // r8
  unsigned __int64 v137; // rax
  bool v138; // cf
  unsigned __int64 *v139; // rdx
  unsigned int v140; // eax
  unsigned int v141; // edx
  __int64 v142; // rcx
  unsigned __int16 *v143; // rax
  unsigned __int16 *v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rax
  unsigned __int16 *v147; // rax
  const wchar_t *v148; // r9
  __int64 v149; // rdi
  __int64 v150; // rbx
  const wchar_t *v151; // r9
  __int64 v152; // rbx
  __int64 v153; // rdi
  int v154; // eax
  __int64 v155; // r9
  __int64 v156; // rax
  unsigned int v157; // r11d
  __int64 v158; // r10
  unsigned int v159; // edx
  __int64 v160; // rdi
  unsigned int v161; // ebx
  __int64 v162; // rdi
  __int64 v163; // rbx
  __int64 v164; // rsi
  __int64 v165; // r13
  const wchar_t *v166; // r9
  const wchar_t *v167; // r9
  int v168; // ecx
  int v169; // ecx
  int v170; // ecx
  int v171; // ecx
  DXGADAPTER **v172; // rcx
  struct _SLIST_ENTRY *v173; // rbx
  __int64 v174; // rsi
  NTSTATUS v175; // eax
  NTSTATUS v176; // eax
  PCLIENT_ID ClientId; // [rsp+28h] [rbp-E0h]
  __int64 ClientIda; // [rsp+28h] [rbp-E0h]
  __int64 StartRoutine; // [rsp+30h] [rbp-D8h]
  __int64 StartContext; // [rsp+38h] [rbp-D0h]
  __int64 v181; // [rsp+40h] [rbp-C8h]
  char v182; // [rsp+58h] [rbp-B0h]
  int v183; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v184; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v185; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v186; // [rsp+70h] [rbp-98h] BYREF
  int v187; // [rsp+74h] [rbp-94h] BYREF
  BOOL v188; // [rsp+78h] [rbp-90h] BYREF
  int v189; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v190; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v191; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v192; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v193; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v194; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v195; // [rsp+94h] [rbp-74h] BYREF
  void *i; // [rsp+98h] [rbp-70h] BYREF
  int v197; // [rsp+A0h] [rbp-68h] BYREF
  int v198; // [rsp+A4h] [rbp-64h] BYREF
  int v199; // [rsp+A8h] [rbp-60h] BYREF
  int v200; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v201; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v202; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v203; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v204; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v205; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v206; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v207; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v208; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v209; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v210; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v211; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v212; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v213; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v214; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v215; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v216; // [rsp+ECh] [rbp-1Ch] BYREF
  int v217; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v218; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v219; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v220; // [rsp+FCh] [rbp-Ch] BYREF
  unsigned int v221; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v222; // [rsp+104h] [rbp-4h] BYREF
  unsigned int v223; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v224; // [rsp+10Ch] [rbp+4h] BYREF
  unsigned int v225; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v226; // [rsp+114h] [rbp+Ch] BYREF
  unsigned int v227; // [rsp+118h] [rbp+10h] BYREF
  int v228; // [rsp+11Ch] [rbp+14h] BYREF
  int v229; // [rsp+120h] [rbp+18h] BYREF
  int v230; // [rsp+124h] [rbp+1Ch] BYREF
  int v231; // [rsp+128h] [rbp+20h] BYREF
  int v232; // [rsp+12Ch] [rbp+24h] BYREF
  int v233; // [rsp+130h] [rbp+28h] BYREF
  int v234; // [rsp+134h] [rbp+2Ch] BYREF
  int v235; // [rsp+138h] [rbp+30h] BYREF
  int v236; // [rsp+13Ch] [rbp+34h] BYREF
  int v237; // [rsp+140h] [rbp+38h] BYREF
  int v238; // [rsp+144h] [rbp+3Ch] BYREF
  int v239; // [rsp+148h] [rbp+40h] BYREF
  int v240; // [rsp+14Ch] [rbp+44h] BYREF
  int v241; // [rsp+150h] [rbp+48h] BYREF
  int v242; // [rsp+154h] [rbp+4Ch] BYREF
  int v243; // [rsp+158h] [rbp+50h] BYREF
  int v244; // [rsp+15Ch] [rbp+54h] BYREF
  int v245; // [rsp+160h] [rbp+58h] BYREF
  int v246; // [rsp+164h] [rbp+5Ch] BYREF
  int v247; // [rsp+168h] [rbp+60h] BYREF
  int v248; // [rsp+16Ch] [rbp+64h] BYREF
  int v249; // [rsp+170h] [rbp+68h] BYREF
  int v250; // [rsp+174h] [rbp+6Ch] BYREF
  int v251; // [rsp+178h] [rbp+70h] BYREF
  int v252; // [rsp+17Ch] [rbp+74h] BYREF
  int v253; // [rsp+180h] [rbp+78h] BYREF
  int v254; // [rsp+184h] [rbp+7Ch] BYREF
  int v255; // [rsp+188h] [rbp+80h] BYREF
  int v256; // [rsp+18Ch] [rbp+84h] BYREF
  int v257; // [rsp+190h] [rbp+88h] BYREF
  int v258; // [rsp+194h] [rbp+8Ch] BYREF
  int v259; // [rsp+198h] [rbp+90h] BYREF
  int v260; // [rsp+19Ch] [rbp+94h] BYREF
  int v261; // [rsp+1A0h] [rbp+98h] BYREF
  int v262; // [rsp+1A4h] [rbp+9Ch] BYREF
  int v263; // [rsp+1A8h] [rbp+A0h] BYREF
  int v264; // [rsp+1ACh] [rbp+A4h] BYREF
  int v265; // [rsp+1B0h] [rbp+A8h] BYREF
  int v266; // [rsp+1B4h] [rbp+ACh] BYREF
  __int64 v267; // [rsp+1B8h] [rbp+B0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1C0h] [rbp+B8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v269; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v270; // [rsp+220h] [rbp+118h]
  __int64 v271; // [rsp+228h] [rbp+120h] BYREF
  int v272; // [rsp+230h] [rbp+128h]
  const wchar_t *v273; // [rsp+238h] [rbp+130h]
  BOOL *v274; // [rsp+240h] [rbp+138h]
  int v275; // [rsp+248h] [rbp+140h]
  int *v276; // [rsp+250h] [rbp+148h]
  int v277; // [rsp+258h] [rbp+150h]
  __int64 v278; // [rsp+260h] [rbp+158h]
  int v279; // [rsp+268h] [rbp+160h]
  __int128 v280; // [rsp+270h] [rbp+168h]
  __int128 v281; // [rsp+280h] [rbp+178h]
  __int64 v282; // [rsp+290h] [rbp+188h]
  __int64 v283; // [rsp+298h] [rbp+190h] BYREF
  int v284; // [rsp+2A0h] [rbp+198h]
  const wchar_t *v285; // [rsp+2A8h] [rbp+1A0h]
  __int64 *v286; // [rsp+2B0h] [rbp+1A8h]
  int v287; // [rsp+2B8h] [rbp+1B0h]
  int *v288; // [rsp+2C0h] [rbp+1B8h]
  int v289; // [rsp+2C8h] [rbp+1C0h]
  __int64 v290; // [rsp+2D0h] [rbp+1C8h]
  int v291; // [rsp+2D8h] [rbp+1D0h]
  const wchar_t *v292; // [rsp+2E0h] [rbp+1D8h]
  int *v293; // [rsp+2E8h] [rbp+1E0h]
  int v294; // [rsp+2F0h] [rbp+1E8h]
  int *v295; // [rsp+2F8h] [rbp+1F0h]
  int v296; // [rsp+300h] [rbp+1F8h]
  __int64 v297; // [rsp+308h] [rbp+200h]
  int v298; // [rsp+310h] [rbp+208h]
  const wchar_t *v299; // [rsp+318h] [rbp+210h]
  unsigned int *v300; // [rsp+320h] [rbp+218h]
  int v301; // [rsp+328h] [rbp+220h]
  int *v302; // [rsp+330h] [rbp+228h]
  int v303; // [rsp+338h] [rbp+230h]
  __int64 v304; // [rsp+340h] [rbp+238h]
  int v305; // [rsp+348h] [rbp+240h]
  const wchar_t *v306; // [rsp+350h] [rbp+248h]
  unsigned int *v307; // [rsp+358h] [rbp+250h]
  int v308; // [rsp+360h] [rbp+258h]
  int *v309; // [rsp+368h] [rbp+260h]
  int v310; // [rsp+370h] [rbp+268h]
  __int64 v311; // [rsp+378h] [rbp+270h]
  int v312; // [rsp+380h] [rbp+278h]
  const wchar_t *v313; // [rsp+388h] [rbp+280h]
  unsigned int *v314; // [rsp+390h] [rbp+288h]
  int v315; // [rsp+398h] [rbp+290h]
  int *v316; // [rsp+3A0h] [rbp+298h]
  int v317; // [rsp+3A8h] [rbp+2A0h]
  __int64 v318; // [rsp+3B0h] [rbp+2A8h]
  int v319; // [rsp+3B8h] [rbp+2B0h]
  const wchar_t *v320; // [rsp+3C0h] [rbp+2B8h]
  unsigned int *v321; // [rsp+3C8h] [rbp+2C0h]
  int v322; // [rsp+3D0h] [rbp+2C8h]
  int *v323; // [rsp+3D8h] [rbp+2D0h]
  int v324; // [rsp+3E0h] [rbp+2D8h]
  __int64 v325; // [rsp+3E8h] [rbp+2E0h]
  int v326; // [rsp+3F0h] [rbp+2E8h]
  const wchar_t *v327; // [rsp+3F8h] [rbp+2F0h]
  unsigned int *v328; // [rsp+400h] [rbp+2F8h]
  int v329; // [rsp+408h] [rbp+300h]
  int *v330; // [rsp+410h] [rbp+308h]
  int v331; // [rsp+418h] [rbp+310h]
  __int64 v332; // [rsp+420h] [rbp+318h]
  int v333; // [rsp+428h] [rbp+320h]
  const wchar_t *v334; // [rsp+430h] [rbp+328h]
  unsigned int *v335; // [rsp+438h] [rbp+330h]
  int v336; // [rsp+440h] [rbp+338h]
  int *v337; // [rsp+448h] [rbp+340h]
  int v338; // [rsp+450h] [rbp+348h]
  __int64 v339; // [rsp+458h] [rbp+350h]
  int v340; // [rsp+460h] [rbp+358h]
  const wchar_t *v341; // [rsp+468h] [rbp+360h]
  unsigned int *v342; // [rsp+470h] [rbp+368h]
  int v343; // [rsp+478h] [rbp+370h]
  int *v344; // [rsp+480h] [rbp+378h]
  int v345; // [rsp+488h] [rbp+380h]
  __int64 v346; // [rsp+490h] [rbp+388h]
  int v347; // [rsp+498h] [rbp+390h]
  const wchar_t *v348; // [rsp+4A0h] [rbp+398h]
  unsigned int *v349; // [rsp+4A8h] [rbp+3A0h]
  int v350; // [rsp+4B0h] [rbp+3A8h]
  int *v351; // [rsp+4B8h] [rbp+3B0h]
  int v352; // [rsp+4C0h] [rbp+3B8h]
  __int64 v353; // [rsp+4C8h] [rbp+3C0h]
  int v354; // [rsp+4D0h] [rbp+3C8h]
  const wchar_t *v355; // [rsp+4D8h] [rbp+3D0h]
  int *v356; // [rsp+4E0h] [rbp+3D8h]
  int v357; // [rsp+4E8h] [rbp+3E0h]
  int *v358; // [rsp+4F0h] [rbp+3E8h]
  int v359; // [rsp+4F8h] [rbp+3F0h]
  __int64 v360; // [rsp+500h] [rbp+3F8h]
  int v361; // [rsp+508h] [rbp+400h]
  const wchar_t *v362; // [rsp+510h] [rbp+408h]
  unsigned int *v363; // [rsp+518h] [rbp+410h]
  int v364; // [rsp+520h] [rbp+418h]
  int *v365; // [rsp+528h] [rbp+420h]
  int v366; // [rsp+530h] [rbp+428h]
  __int64 v367; // [rsp+538h] [rbp+430h]
  int v368; // [rsp+540h] [rbp+438h]
  const wchar_t *v369; // [rsp+548h] [rbp+440h]
  int *v370; // [rsp+550h] [rbp+448h]
  int v371; // [rsp+558h] [rbp+450h]
  int *v372; // [rsp+560h] [rbp+458h]
  int v373; // [rsp+568h] [rbp+460h]
  __int64 v374; // [rsp+570h] [rbp+468h]
  int v375; // [rsp+578h] [rbp+470h]
  const wchar_t *v376; // [rsp+580h] [rbp+478h]
  unsigned int *v377; // [rsp+588h] [rbp+480h]
  int v378; // [rsp+590h] [rbp+488h]
  int *v379; // [rsp+598h] [rbp+490h]
  int v380; // [rsp+5A0h] [rbp+498h]
  __int64 v381; // [rsp+5A8h] [rbp+4A0h]
  int v382; // [rsp+5B0h] [rbp+4A8h]
  const wchar_t *v383; // [rsp+5B8h] [rbp+4B0h]
  unsigned int *v384; // [rsp+5C0h] [rbp+4B8h]
  int v385; // [rsp+5C8h] [rbp+4C0h]
  int *v386; // [rsp+5D0h] [rbp+4C8h]
  int v387; // [rsp+5D8h] [rbp+4D0h]
  __int64 v388; // [rsp+5E0h] [rbp+4D8h]
  int v389; // [rsp+5E8h] [rbp+4E0h]
  const wchar_t *v390; // [rsp+5F0h] [rbp+4E8h]
  unsigned int *v391; // [rsp+5F8h] [rbp+4F0h]
  int v392; // [rsp+600h] [rbp+4F8h]
  int *v393; // [rsp+608h] [rbp+500h]
  int v394; // [rsp+610h] [rbp+508h]
  __int64 v395; // [rsp+618h] [rbp+510h]
  int v396; // [rsp+620h] [rbp+518h]
  const wchar_t *v397; // [rsp+628h] [rbp+520h]
  unsigned int *v398; // [rsp+630h] [rbp+528h]
  int v399; // [rsp+638h] [rbp+530h]
  int *v400; // [rsp+640h] [rbp+538h]
  int v401; // [rsp+648h] [rbp+540h]
  __int64 v402; // [rsp+650h] [rbp+548h]
  int v403; // [rsp+658h] [rbp+550h]
  const wchar_t *v404; // [rsp+660h] [rbp+558h]
  unsigned int *v405; // [rsp+668h] [rbp+560h]
  int v406; // [rsp+670h] [rbp+568h]
  int *v407; // [rsp+678h] [rbp+570h]
  int v408; // [rsp+680h] [rbp+578h]
  __int64 v409; // [rsp+688h] [rbp+580h]
  int v410; // [rsp+690h] [rbp+588h]
  const wchar_t *v411; // [rsp+698h] [rbp+590h]
  unsigned int *v412; // [rsp+6A0h] [rbp+598h]
  int v413; // [rsp+6A8h] [rbp+5A0h]
  int *v414; // [rsp+6B0h] [rbp+5A8h]
  int v415; // [rsp+6B8h] [rbp+5B0h]
  __int64 v416; // [rsp+6C0h] [rbp+5B8h]
  int v417; // [rsp+6C8h] [rbp+5C0h]
  const wchar_t *v418; // [rsp+6D0h] [rbp+5C8h]
  unsigned int *v419; // [rsp+6D8h] [rbp+5D0h]
  int v420; // [rsp+6E0h] [rbp+5D8h]
  int *v421; // [rsp+6E8h] [rbp+5E0h]
  int v422; // [rsp+6F0h] [rbp+5E8h]
  __int64 v423; // [rsp+6F8h] [rbp+5F0h]
  int v424; // [rsp+700h] [rbp+5F8h]
  const wchar_t *v425; // [rsp+708h] [rbp+600h]
  unsigned int *v426; // [rsp+710h] [rbp+608h]
  int v427; // [rsp+718h] [rbp+610h]
  int *v428; // [rsp+720h] [rbp+618h]
  int v429; // [rsp+728h] [rbp+620h]
  __int64 v430; // [rsp+730h] [rbp+628h]
  int v431; // [rsp+738h] [rbp+630h]
  const wchar_t *v432; // [rsp+740h] [rbp+638h]
  int *v433; // [rsp+748h] [rbp+640h]
  int v434; // [rsp+750h] [rbp+648h]
  int *v435; // [rsp+758h] [rbp+650h]
  int v436; // [rsp+760h] [rbp+658h]
  __int64 v437; // [rsp+768h] [rbp+660h]
  int v438; // [rsp+770h] [rbp+668h]
  const wchar_t *v439; // [rsp+778h] [rbp+670h]
  int *v440; // [rsp+780h] [rbp+678h]
  int v441; // [rsp+788h] [rbp+680h]
  int *v442; // [rsp+790h] [rbp+688h]
  int v443; // [rsp+798h] [rbp+690h]
  __int64 v444; // [rsp+7A0h] [rbp+698h]
  int v445; // [rsp+7A8h] [rbp+6A0h]
  const wchar_t *v446; // [rsp+7B0h] [rbp+6A8h]
  int *v447; // [rsp+7B8h] [rbp+6B0h]
  int v448; // [rsp+7C0h] [rbp+6B8h]
  int *v449; // [rsp+7C8h] [rbp+6C0h]
  int v450; // [rsp+7D0h] [rbp+6C8h]
  __int64 v451; // [rsp+7D8h] [rbp+6D0h]
  int v452; // [rsp+7E0h] [rbp+6D8h]
  const wchar_t *v453; // [rsp+7E8h] [rbp+6E0h]
  unsigned int *v454; // [rsp+7F0h] [rbp+6E8h]
  int v455; // [rsp+7F8h] [rbp+6F0h]
  int *v456; // [rsp+800h] [rbp+6F8h]
  int v457; // [rsp+808h] [rbp+700h]
  __int64 v458; // [rsp+810h] [rbp+708h]
  int v459; // [rsp+818h] [rbp+710h]
  const wchar_t *v460; // [rsp+820h] [rbp+718h]
  unsigned int *v461; // [rsp+828h] [rbp+720h]
  int v462; // [rsp+830h] [rbp+728h]
  int *v463; // [rsp+838h] [rbp+730h]
  int v464; // [rsp+840h] [rbp+738h]
  __int64 v465; // [rsp+848h] [rbp+740h]
  int v466; // [rsp+850h] [rbp+748h]
  const wchar_t *v467; // [rsp+858h] [rbp+750h]
  unsigned int *v468; // [rsp+860h] [rbp+758h]
  int v469; // [rsp+868h] [rbp+760h]
  int *v470; // [rsp+870h] [rbp+768h]
  int v471; // [rsp+878h] [rbp+770h]
  __int64 v472; // [rsp+880h] [rbp+778h]
  int v473; // [rsp+888h] [rbp+780h]
  const wchar_t *v474; // [rsp+890h] [rbp+788h]
  unsigned int *v475; // [rsp+898h] [rbp+790h]
  int v476; // [rsp+8A0h] [rbp+798h]
  int *v477; // [rsp+8A8h] [rbp+7A0h]
  int v478; // [rsp+8B0h] [rbp+7A8h]
  __int64 v479; // [rsp+8B8h] [rbp+7B0h]
  int v480; // [rsp+8C0h] [rbp+7B8h]
  const wchar_t *v481; // [rsp+8C8h] [rbp+7C0h]
  unsigned int *v482; // [rsp+8D0h] [rbp+7C8h]
  int v483; // [rsp+8D8h] [rbp+7D0h]
  int *v484; // [rsp+8E0h] [rbp+7D8h]
  int v485; // [rsp+8E8h] [rbp+7E0h]
  __int64 v486; // [rsp+8F0h] [rbp+7E8h]
  int v487; // [rsp+8F8h] [rbp+7F0h]
  const wchar_t *v488; // [rsp+900h] [rbp+7F8h]
  unsigned int *v489; // [rsp+908h] [rbp+800h]
  int v490; // [rsp+910h] [rbp+808h]
  int *v491; // [rsp+918h] [rbp+810h]
  int v492; // [rsp+920h] [rbp+818h]
  __int64 v493; // [rsp+928h] [rbp+820h]
  int v494; // [rsp+930h] [rbp+828h]
  const wchar_t *v495; // [rsp+938h] [rbp+830h]
  unsigned int *v496; // [rsp+940h] [rbp+838h]
  int v497; // [rsp+948h] [rbp+840h]
  int *v498; // [rsp+950h] [rbp+848h]
  int v499; // [rsp+958h] [rbp+850h]
  __int64 v500; // [rsp+960h] [rbp+858h]
  int v501; // [rsp+968h] [rbp+860h]
  const wchar_t *v502; // [rsp+970h] [rbp+868h]
  unsigned int *v503; // [rsp+978h] [rbp+870h]
  int v504; // [rsp+980h] [rbp+878h]
  int *v505; // [rsp+988h] [rbp+880h]
  int v506; // [rsp+990h] [rbp+888h]
  __int64 v507; // [rsp+998h] [rbp+890h]
  int v508; // [rsp+9A0h] [rbp+898h]
  const wchar_t *v509; // [rsp+9A8h] [rbp+8A0h]
  unsigned int *v510; // [rsp+9B0h] [rbp+8A8h]
  int v511; // [rsp+9B8h] [rbp+8B0h]
  int *v512; // [rsp+9C0h] [rbp+8B8h]
  int v513; // [rsp+9C8h] [rbp+8C0h]
  __int64 v514; // [rsp+9D0h] [rbp+8C8h]
  int v515; // [rsp+9D8h] [rbp+8D0h]
  const wchar_t *v516; // [rsp+9E0h] [rbp+8D8h]
  unsigned int *v517; // [rsp+9E8h] [rbp+8E0h]
  int v518; // [rsp+9F0h] [rbp+8E8h]
  int *v519; // [rsp+9F8h] [rbp+8F0h]
  int v520; // [rsp+A00h] [rbp+8F8h]
  __int64 v521; // [rsp+A08h] [rbp+900h]
  int v522; // [rsp+A10h] [rbp+908h]
  const wchar_t *v523; // [rsp+A18h] [rbp+910h]
  unsigned int *v524; // [rsp+A20h] [rbp+918h]
  int v525; // [rsp+A28h] [rbp+920h]
  int *v526; // [rsp+A30h] [rbp+928h]
  int v527; // [rsp+A38h] [rbp+930h]
  __int64 v528; // [rsp+A40h] [rbp+938h]
  int v529; // [rsp+A48h] [rbp+940h]
  const wchar_t *v530; // [rsp+A50h] [rbp+948h]
  unsigned int *v531; // [rsp+A58h] [rbp+950h]
  int v532; // [rsp+A60h] [rbp+958h]
  int *v533; // [rsp+A68h] [rbp+960h]
  int v534; // [rsp+A70h] [rbp+968h]
  __int64 v535; // [rsp+A78h] [rbp+970h]
  int v536; // [rsp+A80h] [rbp+978h]
  const wchar_t *v537; // [rsp+A88h] [rbp+980h]
  unsigned int *v538; // [rsp+A90h] [rbp+988h]
  int v539; // [rsp+A98h] [rbp+990h]
  int *v540; // [rsp+AA0h] [rbp+998h]
  int v541; // [rsp+AA8h] [rbp+9A0h]
  __int64 v542; // [rsp+AB0h] [rbp+9A8h]
  int v543; // [rsp+AB8h] [rbp+9B0h]
  const wchar_t *v544; // [rsp+AC0h] [rbp+9B8h]
  unsigned int *v545; // [rsp+AC8h] [rbp+9C0h]
  int v546; // [rsp+AD0h] [rbp+9C8h]
  int *v547; // [rsp+AD8h] [rbp+9D0h]
  int v548; // [rsp+AE0h] [rbp+9D8h]
  __int64 v549; // [rsp+AE8h] [rbp+9E0h]
  int v550; // [rsp+AF0h] [rbp+9E8h]
  const wchar_t *v551; // [rsp+AF8h] [rbp+9F0h]
  unsigned int *v552; // [rsp+B00h] [rbp+9F8h]
  int v553; // [rsp+B08h] [rbp+A00h]
  int *v554; // [rsp+B10h] [rbp+A08h]
  int v555; // [rsp+B18h] [rbp+A10h]
  __int64 v556; // [rsp+B20h] [rbp+A18h]
  int v557; // [rsp+B28h] [rbp+A20h]
  __int128 v558; // [rsp+B30h] [rbp+A28h]
  __int128 v559; // [rsp+B40h] [rbp+A38h]
  __int64 v560; // [rsp+B50h] [rbp+A48h]
  _DWORD v561[64]; // [rsp+B58h] [rbp+A50h] BYREF
  unsigned __int16 v562[264]; // [rsp+C58h] [rbp+B50h] BYREF

  v3 = 1;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &Dxgk_PowerManagementSupport,
      a3,
      this,
      *((unsigned __int8 *)this + 2629));
  v5 = 0;
  if ( !*((_BYTE *)this + 2629) )
  {
    WdLogSingleEntry1(3LL, 4701LL);
    return 0LL;
  }
  v248 = 0;
  v266 = -1;
  v194 = -1;
  v228 = 2000;
  v231 = 35000;
  v203 = 35000;
  v195 = 2000;
  v233 = 50000;
  LODWORD(v7) = 0;
  v206 = 50000;
  v8 = 0;
  v232 = 2000;
  v234 = 100000;
  v207 = 100000;
  v239 = 300000;
  v225 = 300000;
  v240 = 17000;
  v224 = 17000;
  v235 = 200;
  v200 = 200;
  v236 = 200;
  v204 = 200;
  v238 = 100;
  v237 = 100;
  v241 = 25000;
  v226 = 25000;
  v243 = 300;
  v192 = 300;
  v244 = 700;
  v191 = 700;
  v245 = 900;
  v193 = 900;
  v246 = 500;
  v190 = 500;
  v252 = 140000;
  v213 = 140000;
  v253 = 200000;
  v215 = 200000;
  v254 = 250000;
  v216 = 250000;
  v255 = 250000;
  v222 = 250000;
  v205 = 2000;
  v242 = 2000;
  v208 = 2000;
  v256 = 10000;
  v229 = 80;
  v201 = 80;
  v230 = 15000;
  v202 = 15000;
  v247 = 3;
  v199 = 3;
  v197 = 0;
  v249 = 0;
  v198 = 0;
  v250 = 80;
  v209 = 80;
  v251 = 80000;
  v211 = 80000;
  v9 = *((_DWORD *)this + 673) < 2400;
  v210 = 10000;
  v257 = 60000;
  v212 = 60000;
  v258 = 60000;
  v214 = 60000;
  v260 = 30000;
  v219 = 30000;
  v263 = 30000;
  v227 = 30000;
  v259 = 15000;
  v218 = 15000;
  v261 = 80;
  v220 = 80;
  v262 = 15000;
  v221 = 15000;
  v264 = 80000;
  v223 = 80000;
  v217 = 1;
  v188 = 1;
  v187 = 1;
  LODWORD(v184) = 1;
  v186 = 0;
  v183 = 0;
  if ( v9 )
  {
    v273 = L"UseSelfRefreshVRAMInS3";
    v272 = 288;
    v274 = &v188;
    v275 = 67108868;
    v276 = &v217;
    v277 = 4;
    v282 = 0LL;
    v271 = 0LL;
    v278 = 0LL;
    v279 = 0;
    v280 = 0LL;
    v281 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v271, 0LL, 0LL);
  }
  else
  {
    v188 = (*((_DWORD *)this + 539) & 0x1000) == 0;
  }
  v283 = 0LL;
  v285 = L"EnableRuntimePowerManagement";
  v286 = &v184;
  v288 = &v187;
  v292 = L"DisableDevicePowerRequired";
  v293 = &v183;
  v295 = (int *)&v186;
  v299 = L"DefaultLatencyToleranceOther";
  v300 = &v194;
  v302 = &v266;
  v306 = L"DefaultExpectedResidency";
  v307 = &v195;
  v309 = &v228;
  v313 = L"DefaultLatencyToleranceIdle0";
  v314 = &v201;
  v316 = &v229;
  v320 = L"DefaultLatencyToleranceIdle1";
  v321 = &v202;
  v323 = &v230;
  v327 = L"DefaultLatencyToleranceNoContext";
  v328 = &v203;
  v330 = &v231;
  v334 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v335 = &v205;
  v337 = &v232;
  v284 = 288;
  v287 = 67108868;
  v289 = 4;
  v290 = 0LL;
  v291 = 288;
  v294 = 67108868;
  v296 = 4;
  v297 = 0LL;
  v298 = 288;
  v301 = 67108868;
  v303 = 4;
  v304 = 0LL;
  v305 = 288;
  v308 = 67108868;
  v310 = 4;
  v311 = 0LL;
  v312 = 288;
  v315 = 67108868;
  v317 = 4;
  v318 = 0LL;
  v319 = 288;
  v322 = 67108868;
  v324 = 4;
  v325 = 0LL;
  v326 = 288;
  v329 = 67108868;
  v331 = 4;
  v332 = 0LL;
  v333 = 288;
  v336 = 67108868;
  v338 = 4;
  v339 = 0LL;
  v340 = 288;
  v341 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v342 = &v206;
  v344 = &v233;
  v348 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v349 = &v207;
  v351 = &v234;
  v355 = L"DefaultLatencyToleranceTimerPeriod";
  v356 = &v200;
  v358 = &v235;
  v362 = L"DefaultIdleThresholdIdle0";
  v363 = &v204;
  v365 = &v236;
  v369 = L"DefaultIdleThresholdIdle0MonitorOff";
  v370 = &v237;
  v372 = &v238;
  v376 = L"MonitorLatencyTolerance";
  v377 = &v225;
  v379 = &v239;
  v383 = L"MonitorRefreshLatencyTolerance";
  v384 = &v224;
  v386 = &v240;
  v390 = L"DefaultPowerNotRequiredTimeout";
  v391 = &v226;
  v393 = &v241;
  v343 = 67108868;
  v345 = 4;
  v346 = 0LL;
  v347 = 288;
  v350 = 67108868;
  v352 = 4;
  v353 = 0LL;
  v354 = 288;
  v357 = 67108868;
  v359 = 4;
  v360 = 0LL;
  v361 = 288;
  v364 = 67108868;
  v366 = 4;
  v367 = 0LL;
  v368 = 288;
  v371 = 67108868;
  v373 = 4;
  v374 = 0LL;
  v375 = 288;
  v378 = 67108868;
  v380 = 4;
  v381 = 0LL;
  v382 = 288;
  v385 = 67108868;
  v387 = 4;
  v388 = 0LL;
  v389 = 288;
  v392 = 67108868;
  v394 = 4;
  v395 = 0LL;
  v396 = 288;
  v399 = 67108868;
  v397 = L"DefaultActiveIdleThreshold";
  v398 = &v208;
  v400 = &v242;
  v404 = L"ulow";
  v405 = &v192;
  v407 = &v243;
  v411 = L"uhigh";
  v412 = &v191;
  v414 = &v244;
  v418 = L"uglitch";
  v419 = &v193;
  v421 = &v245;
  v425 = L"uideal";
  v426 = &v190;
  v428 = &v246;
  v432 = L"lowdebounce";
  v433 = &v199;
  v435 = &v247;
  v439 = L"EnablePODebounce";
  v440 = &v197;
  v442 = &v248;
  v446 = L"DisablePStateManagement";
  v447 = &v198;
  v449 = &v249;
  v401 = 4;
  v402 = 0LL;
  v403 = 288;
  v406 = 67108868;
  v408 = 4;
  v409 = 0LL;
  v410 = 288;
  v413 = 67108868;
  v415 = 4;
  v416 = 0LL;
  v417 = 288;
  v420 = 67108868;
  v422 = 4;
  v423 = 0LL;
  v424 = 288;
  v427 = 67108868;
  v429 = 4;
  v430 = 0LL;
  v431 = 288;
  v434 = 67108868;
  v436 = 4;
  v437 = 0LL;
  v438 = 288;
  v441 = 67108868;
  v443 = 4;
  v444 = 0LL;
  v445 = 288;
  v448 = 67108868;
  v450 = 4;
  v451 = 0LL;
  v452 = 288;
  v453 = L"DefaultD3TransitionLatencyActivelyUsed";
  v454 = &v209;
  v456 = &v250;
  v460 = L"DefaultD3TransitionLatencyIdleShortTime";
  v461 = &v211;
  v463 = &v251;
  v467 = L"DefaultD3TransitionLatencyIdleLongTime";
  v468 = &v213;
  v470 = &v252;
  v474 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v475 = &v215;
  v477 = &v253;
  v481 = L"DefaultD3TransitionLatencyIdleNoContext";
  v482 = &v216;
  v484 = &v254;
  v488 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v489 = &v222;
  v491 = &v255;
  v495 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v496 = &v210;
  v498 = &v256;
  v502 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v503 = &v212;
  v505 = &v257;
  v509 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v455 = 67108868;
  v457 = 4;
  v458 = 0LL;
  v459 = 288;
  v462 = 67108868;
  v464 = 4;
  v465 = 0LL;
  v466 = 288;
  v469 = 67108868;
  v471 = 4;
  v472 = 0LL;
  v473 = 288;
  v476 = 67108868;
  v478 = 4;
  v479 = 0LL;
  v480 = 288;
  v483 = 67108868;
  v485 = 4;
  v486 = 0LL;
  v487 = 288;
  v490 = 67108868;
  v492 = 4;
  v493 = 0LL;
  v494 = 288;
  v497 = 67108868;
  v499 = 4;
  v500 = 0LL;
  v501 = 288;
  v504 = 67108868;
  v506 = 4;
  v507 = 0LL;
  v508 = 288;
  v511 = 67108868;
  v510 = &v214;
  v513 = 4;
  v512 = &v258;
  v515 = 288;
  v516 = L"DefaultLatencyToleranceMemory";
  v517 = &v218;
  v519 = &v259;
  v523 = L"DefaultLatencyToleranceMemoryNoContext";
  v524 = &v219;
  v526 = &v260;
  v530 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v531 = &v220;
  v533 = &v261;
  v537 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v538 = &v221;
  v540 = &v262;
  v544 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v545 = &v227;
  v547 = &v263;
  v551 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v552 = &v223;
  v554 = &v264;
  v518 = 67108868;
  v520 = 4;
  v522 = 288;
  v525 = 67108868;
  v527 = 4;
  v529 = 288;
  v532 = 67108868;
  v534 = 4;
  v536 = 288;
  v539 = 67108868;
  v541 = 4;
  v543 = 288;
  v546 = 67108868;
  v548 = 4;
  v550 = 288;
  v553 = 67108868;
  v555 = 4;
  v560 = 0LL;
  v514 = 0LL;
  v521 = 0LL;
  v528 = 0LL;
  v535 = 0LL;
  v542 = 0LL;
  v549 = 0LL;
  v556 = 0LL;
  v557 = 0;
  v558 = 0LL;
  v559 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v283, 0LL, 0LL);
  if ( *((int *)this + 673) < 2400 )
  {
    v142 = *((_QWORD *)this + 27);
    i = 0LL;
    if ( (int)DpiGetPnpRegistryKeyName(v142, 2, (__int64 *)&i) >= 0
      && RtlStringCbCopyW(v562, 0x208uLL, *((size_t **)i + 1)) >= 0 )
    {
      v143 = v562;
      v10 = 260LL;
      do
      {
        if ( !*v143 )
          break;
        ++v143;
        --v10;
      }
      while ( v10 );
      v11 = (260 - v10) & -(__int64)(v10 != 0);
      if ( v10 )
      {
        v144 = &v562[v11];
        v145 = 260 - v11;
        if ( 260 != v11 )
        {
          v146 = 2147483646LL;
          v10 = (char *)L"\\DxgkSettings" - (char *)v144;
          do
          {
            if ( !v146 )
              break;
            v11 = *(unsigned __int16 *)((char *)v144 + v10);
            if ( !(_WORD)v11 )
              break;
            *v144 = v11;
            --v146;
            ++v144;
            --v145;
          }
          while ( v145 );
        }
        v147 = v144 - 1;
        if ( v145 )
          v147 = v144;
        *v147 = 0;
        if ( v145 )
        {
          v271 = 0LL;
          v272 = 288;
          v273 = L"UseSelfRefreshVRAMInS3";
          v275 = 67108868;
          v274 = &v188;
          v277 = 4;
          v276 = &v217;
          v278 = 0LL;
          v282 = 0LL;
          v279 = 0;
          v280 = 0LL;
          v281 = 0LL;
          RtlQueryRegistryValuesEx(0LL, v562, &v271, 0LL, 0LL);
        }
      }
    }
  }
  if ( !(_DWORD)v184 )
    return 0LL;
  v12 = !v188;
  *((_BYTE *)this + 204) = v183 != 0;
  *((_BYTE *)this + 207) = !v12;
  v13 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  v14 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 28LL);
  if ( v14 < 0x5019 )
  {
    v189 = 1;
    LODWORD(v185) = 0;
  }
  else
  {
    if ( *((int *)this + 606) >= 0x2000 )
      v3 = *((_DWORD *)this + 72);
    v189 = v3;
    LODWORD(v185) = 0;
    if ( !v3 )
      goto LABEL_20;
  }
  v15 = 0LL;
  do
  {
    *(_QWORD *)&ObjectAttributes.Attributes = &v561[v15];
    memset(&ObjectAttributes, 0, 24);
    ObjectAttributes.Length = 6;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(ObjectAttributes.SecurityDescriptor) = 4;
    if ( DXGADAPTER::IsDxgmms2(this) && v14 >= 0x5019 )
    {
      LODWORD(ObjectAttributes.ObjectName) = 4;
      ObjectAttributes.RootDirectory = &v185;
    }
    AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(v16, (struct _DXGKARG_QUERYADAPTERINFO *)&ObjectAttributes, v17);
    v7 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      WdLogSingleEntry2(2LL, this, AdapterInfo);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DdiQueryAdapterInfo failed. Adapter: 0x%p Status: 0x%I64x",
        (__int64)this,
        v7,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v7;
    }
    v8 += v561[(unsigned int)v185];
    v15 = (unsigned int)(v185 + 1);
    LODWORD(v185) = v15;
  }
  while ( (unsigned int)v15 < v3 );
LABEL_20:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    LODWORD(ClientId) = v7;
    McTemplateK0pqq_EtwWriteTransfer(v13, &Dxgk_PowerManagementComponents, v10, this, ClientId, v8);
  }
  if ( !v8 )
  {
    WdLogSingleEntry1(3LL, 4913LL);
    return 0LL;
  }
  if ( v8 > 0xFFFF )
  {
    WdLogSingleEntry1(2LL, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Miniport returned invalid number of power components:0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v34) = -1073741811;
    goto LABEL_227;
  }
  *((_DWORD *)this + 760) = v8;
  v19 = 520LL * v8;
  if ( !is_mul_ok(v8, 0x208uLL) )
    v19 = -1LL;
  v20 = operator new[](v19, 0x4B677844u, 64LL, v11);
  *((_QWORD *)this + 362) = v20;
  if ( !v20 )
  {
    WdLogSingleEntry1(6LL, this);
    v148 = L"Adapter 0x%I64x: Out of memory allocating m_pPowerComponents";
LABEL_147:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v148, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v34) = -1073741801;
    goto LABEL_227;
  }
  v22 = operator new[](312 * v8 + 160, 0x4B677844u, 256LL, v21);
  v23 = (char *)v22;
  if ( !v22 )
  {
    WdLogSingleEntry1(6LL, this);
    v148 = L"Adapter 0x%I64x: Out of memory allocating pRegistrationInfo";
    goto LABEL_147;
  }
  *(_DWORD *)v22 = 3;
  *(_QWORD *)(v22 + 8) = 2LL;
  *(_DWORD *)(v22 + 96) = v8;
  *(_QWORD *)(v22 + 64) = DxgkPowerRuntimeDeviceDirectedPowerUpCallback;
  v24 = 0LL;
  *(_QWORD *)(v22 + 88) = this;
  *(_QWORD *)(v22 + 72) = DxgkPowerRuntimeDeviceDirectedPowerDownCallback;
  *(_QWORD *)(v22 + 32) = DxgkPowerRuntimeComponentIdleStateCallback;
  *(_QWORD *)(v22 + 16) = DxgkPowerRuntimeComponentActiveCallback;
  *(_QWORD *)(v22 + 24) = DxgkPowerRuntimeComponentIdleCallback;
  *(_QWORD *)(v22 + 40) = DxgkPowerRuntimeDevicePowerRequiredCallback;
  *(_QWORD *)(v22 + 48) = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  *(_QWORD *)(v22 + 56) = DxgkPowerRuntimeControlCallback;
  memset(&v269, 0, sizeof(v269));
  v25 = 0;
  v183 = 0;
  v269.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v269.InputDataSize = 4;
  v269.OutputDataSize = 336;
  v267 = 56LL * v8 + v22 + 104;
  i = (void *)(v267 + 192LL * v8);
  v26 = v189;
  v187 = 0;
  if ( !v189 )
    goto LABEL_59;
  v27 = 0;
  LODWORD(v184) = 0;
  do
  {
    v28 = 0;
    v29 = (unsigned int)v24;
    v270 = (unsigned int)v24;
    *((_WORD *)this + v24 + 1456) = v5;
    v186 = 0;
    if ( !v561[v24] )
      goto LABEL_58;
    do
    {
      v30 = 520LL * v5;
      v31 = 56LL * v5;
      v265 = v28 + v27;
      v32 = *((_QWORD *)this + 362) + 8LL;
      v269.pInputData = &v265;
      v185 = v30;
      v269.pOutputData = (void *)(v30 + v32);
      v33 = DXGADAPTER::DdiQueryAdapterInfo(this, &v269, v29);
      v34 = v33;
      if ( v33 < 0 )
      {
        WdLogSingleEntry2(2LL, v5, v33);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Miniport failed QueryAdapterInfo(DXGKQAITYPE_POWERCOMPONENTINFO). Component: 0x%I64x, Status: 0x%I64x",
          v5,
          v34,
          0LL,
          0LL,
          0LL);
        goto LABEL_226;
      }
      v35 = v186;
      *(_DWORD *)(v30 + *((_QWORD *)this + 362)) = v5;
      *(_WORD *)(v30 + *((_QWORD *)this + 362) + 4) = v35;
      *(_WORD *)(v30 + *((_QWORD *)this + 362) + 6) = v183;
      v36 = *((_QWORD *)this + 362) + v30;
      *(_DWORD *)&v23[v31 + 132] = *(_DWORD *)(v36 + 8);
      if ( (unsigned int)(*(_DWORD *)(v36 + 8) - 1) > 7 )
      {
        v150 = v5;
        WdLogSingleEntry3(2LL, v5, *(unsigned int *)(v36 + 8), 0LL);
        v151 = L"Miniport returned invalid number of F states for component:0x%I64x 0x%I64x";
        v181 = 0LL;
        StartContext = 0LL;
        StartRoutine = *(unsigned int *)(v36 + 8);
        goto LABEL_168;
      }
      *(_OWORD *)&v23[v31 + 104] = *(_OWORD *)(v36 + 220);
      *(_BYTE *)(v36 + 275) = 0;
      v37 = *(_DWORD *)(v36 + 216);
      if ( v37 >= 0x20 )
      {
        v149 = 2LL;
        v150 = v5;
        WdLogSingleEntry2(2LL, v5, 2LL);
        v151 = L"Reserved flags are not zero. Component:0x%I64x";
        goto LABEL_166;
      }
      if ( (v37 & 4) != 0 )
        *(_QWORD *)&v23[v31 + 120] |= 1uLL;
      if ( !v197 )
        *(_QWORD *)&v23[v31 + 120] |= 2uLL;
      if ( (*(_DWORD *)(v36 + 216) & 0x10) != 0 )
      {
        if ( ((*(_DWORD *)(v36 + 208) - 3) & 0xFFFFFFFB) != 0 )
        {
          v149 = 5060LL;
          v150 = v5;
          WdLogSingleEntry2(2LL, v5, 5060LL);
          v151 = L"Power component ActiveInD3 flag can only be used with DXGK_POWER_COMPONENT_MEMORY and DXGK_POWER_COMPON"
                  "ENT_SHARED. Component:0x%I64x";
          goto LABEL_166;
        }
        if ( *(_DWORD *)(v36 + 8) != 2 )
        {
          v149 = 5066LL;
          v150 = v5;
          WdLogSingleEntry2(2LL, v5, 5066LL);
          v151 = L"F state count must be 2 when the ActiveInD3 flag is set. Component:0x%I64x";
          goto LABEL_166;
        }
        if ( *(_QWORD *)(v36 + 40) )
        {
          v149 = 5072LL;
          v150 = v5;
          WdLogSingleEntry2(2LL, v5, 5072LL);
          v151 = L"TransitionLatency for the F1 state must be 0 when the ActiveInD3 flag is set. Component:0x%I64x";
          goto LABEL_166;
        }
        if ( *(_DWORD *)(v36 + 276) )
        {
          v149 = 5078LL;
          v150 = v5;
          WdLogSingleEntry2(2LL, v5, 5078LL);
          v151 = L"Provider count must be 0 when the ActiveInD3 flag is set. Component:0x%I64x";
          goto LABEL_166;
        }
      }
      else if ( *(_DWORD *)(v36 + 276) > 0x10u )
      {
        v150 = v5;
        WdLogSingleEntry2(2LL, v5, 3LL);
        v151 = L"Invalid component ProviderCount. Component:0x%I64x";
        v181 = 0LL;
        StartContext = 0LL;
        StartRoutine = 3LL;
        goto LABEL_168;
      }
      v38 = *(_DWORD *)(v36 + 208);
      if ( v38 == 4 )
      {
        if ( *((_DWORD *)this + 762) != -1 )
        {
          v149 = 5126LL;
          v150 = v5;
          WdLogSingleEntry2(2LL, v5, 5126LL);
          v151 = L"DXGK_POWER_COMPONENT_MEMORY_REFRESH component is defined second time. Component:0x%I64x";
LABEL_166:
          v181 = 0LL;
          StartContext = 0LL;
          StartRoutine = v149;
LABEL_168:
          ClientIda = v150;
          goto LABEL_171;
        }
        *((_DWORD *)this + 762) = v5;
      }
      else if ( v38 == 6 )
      {
        if ( *((_DWORD *)this + 761) == -1 )
        {
          *((_QWORD *)this + 407) = *((_QWORD *)this + 362) + v185;
          *((_DWORD *)this + 761) = v5;
          if ( *(_DWORD *)(v36 + 8) == 2 )
          {
            *((_BYTE *)this + 3336) = 1;
          }
          else if ( *(_DWORD *)(v36 + 8) > 2u )
          {
            v149 = 5116LL;
            v150 = v5;
            WdLogSingleEntry2(2LL, v5, 5116LL);
            v151 = L"F state count for the DXGK_POWER_COMPONENT_D3_TRANSITION component must be 1 or 2. Component:0x%I64x";
            goto LABEL_166;
          }
        }
        else
        {
          WdLogSingleEntry2(3LL, v5, 5100LL);
        }
      }
      v39 = i;
      *(_DWORD *)&v23[v31 + 144] = *(_DWORD *)(v36 + 276);
      memmove(v39, (const void *)(v36 + 280), 4LL * *(unsigned int *)(v36 + 276));
      v40 = i;
      v41 = 0LL;
      v42 = v267;
      *(_QWORD *)&v23[v31 + 152] = i;
      v43 = *(unsigned int *)(v36 + 276);
      *(_QWORD *)&v23[v31 + 136] = v42;
      v29 = (__int64)v40 + 4 * v43;
      for ( i = (void *)v29; (unsigned int)v41 < *(_DWORD *)(v36 + 8); v267 = v42 )
      {
        v29 = 3 * v41;
        v44 = *(_QWORD *)(v36 + 24 * v41 + 16);
        *(_QWORD *)v42 = v44;
        v45 = *(_QWORD *)(v36 + 24 * v41 + 24);
        *(_QWORD *)(v42 + 8) = v45;
        v46 = *(_DWORD *)(v36 + 24 * v41 + 32);
        *(_DWORD *)(v42 + 16) = v46;
        if ( *(_QWORD *)(v36 + 24 * v41 + 16) == -1LL )
          v44 = -1LL;
        *(_QWORD *)v42 = v44;
        if ( *(_QWORD *)(v36 + 24 * v41 + 24) == -1LL )
          v45 = -1LL;
        *(_QWORD *)(v42 + 8) = v45;
        if ( *(_DWORD *)(v36 + 24 * v41 + 32) == -1 )
          v46 = -1;
        *(_DWORD *)(v42 + 16) = v46;
        if ( (_DWORD)v41 )
        {
          v128 = *(_DWORD *)(v36 + 24 * v41 + 32);
          if ( v128 != -1 )
          {
            v129 = *(_DWORD *)(v36 + 24 * ((unsigned int)(v41 - 1) + 1LL) + 8);
            if ( v129 != -1 && v128 > v129 )
            {
              v149 = 5LL;
              v150 = v5;
              WdLogSingleEntry2(2LL, v5, 5LL);
              v151 = L"NominalPower must be decreasing for higher F states. Component:0x%I64x";
              goto LABEL_166;
            }
          }
          v130 = *(_QWORD *)(v36 + 24 * v41 + 16);
          if ( v130 != -1LL )
          {
            v131 = *(_QWORD *)(v36 + 24LL * (unsigned int)(v41 - 1) + 16);
            if ( v130 < v131 && v131 != -1LL )
            {
              v149 = 6LL;
              v150 = v5;
              WdLogSingleEntry2(2LL, v5, 6LL);
              v151 = L"TransitionLatency must be increasing for higher F states. Component:0x%I64x";
              goto LABEL_166;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v36 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v36 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            v150 = v5;
            WdLogSingleEntry2(2LL, v5, 3LL);
            v151 = L"TransitionLatency and ResidencyRequirement must be zero for the F0 state. Component:0x%I64x";
            v181 = 0LL;
            StartContext = 0LL;
            StartRoutine = 3LL;
            goto LABEL_168;
          }
          if ( !*(_DWORD *)(v36 + 24 * v41 + 32) )
          {
            v149 = 4LL;
            v150 = v5;
            WdLogSingleEntry2(2LL, v5, 4LL);
            v151 = L"NominalPower must not be zero for the F0 state. Component:0x%I64x";
            goto LABEL_166;
          }
        }
        v42 += 24LL;
        v41 = (unsigned int)(v41 + 1);
      }
      v27 = v184;
      v47 = v187 + 1;
      if ( *(_DWORD *)(v36 + 208) )
        v47 = v187;
      v28 = v186 + 1;
      ++v5;
      v187 = v47;
      v25 = v47;
      v186 = v28;
    }
    while ( v28 < v561[v270] );
    v26 = v189;
    v187 = v47;
    LODWORD(v24) = v183;
LABEL_58:
    v24 = (unsigned int)(v24 + 1);
    v27 += 0x10000;
    v183 = v24;
    LODWORD(v184) = v27;
  }
  while ( (unsigned int)v24 < v26 );
LABEL_59:
  if ( *((_DWORD *)this + 762) == -1 && !*((_BYTE *)this + 3336) )
    *((_QWORD *)this + 407) = 0LL;
  if ( *((int *)this + 673) < 1300 || !v25 || v198 )
    goto LABEL_88;
  if ( v192 > 0x3E8 || v191 > 0x3E8 || v193 > 0x3E8 || v190 > 0x3E8 || v192 >= v190 || v190 >= v191 || v191 >= v193 )
  {
    WdLogSingleEntry4(2LL, v192, v191, v193, v190);
    v151 = L"P-State engine regkey validation error - low: 0x%I64x high: 0x%I64x glitch: 0x%I64x ideal: 0x%I64x";
    v181 = v190;
    StartContext = v193;
    StartRoutine = v191;
    ClientIda = v192;
    goto LABEL_171;
  }
  v48 = 248LL * v25;
  v269.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v269.OutputDataSize = 136;
  if ( !is_mul_ok(v25, 0xF8uLL) )
    v48 = -1LL;
  v49 = operator new[](v48, 0x4B677844u, 64LL, v193);
  *((_QWORD *)this + 513) = v49;
  *((_DWORD *)this + 1028) = v25;
  if ( !v49 )
  {
    WdLogSingleEntry1(6LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Adapter 0x%I64x: Out of memory allocating m_NodePStateData",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v34) = -1073741801;
    goto LABEL_226;
  }
  v50 = 0;
  for ( j = 0LL; v50 < *((_DWORD *)this + 760); ++v50 )
  {
    v52 = *((_QWORD *)this + 362);
    v53 = 520LL * v50;
    if ( !*(_DWORD *)(v53 + v52 + 208) )
    {
      *(_QWORD *)(v53 + v52 + 512) = *((_QWORD *)this + 513) + 248LL * (unsigned int)j;
      j = (unsigned int)(j + 1);
    }
  }
  v54 = 0;
  *((_DWORD *)this + 1080) = v193;
  *((_DWORD *)this + 1081) = v191;
  *((_DWORD *)this + 1082) = v192;
  *((_DWORD *)this + 1083) = v190;
  *((_DWORD *)this + 1084) = v199;
  LODWORD(v185) = 0;
  v55 = 0LL;
  while ( 2 )
  {
    v56 = *(_QWORD *)(520 * v55 + *((_QWORD *)this + 362) + 512);
    if ( !v56 )
    {
LABEL_183:
      LODWORD(v185) = ++v54;
      v55 = v54;
      if ( v54 >= v8 )
        goto LABEL_87;
      continue;
    }
    break;
  }
  v269.pOutputData = *(void **)(520 * v55 + *((_QWORD *)this + 362) + 512);
  v269.pInputData = &v185;
  v57 = DXGADAPTER::DdiQueryAdapterInfo(this, &v269, j);
  v60 = v57;
  if ( v57 >= 0 )
  {
    v154 = v185;
    *(_QWORD *)(v56 + 136) = this;
    *(_DWORD *)(v56 + 144) = v154;
    *(_QWORD *)(v56 + 152) = v56;
    KeInitializeSpinLock((PKSPIN_LOCK)(v56 + 160));
    *(_BYTE *)(v56 + 240) = 0;
    *(_DWORD *)(v56 + 244) = -1;
    v54 = v185;
    goto LABEL_183;
  }
  v61 = WdLogNewEntry5_WdTrace(v59, v58);
  *(_QWORD *)(v61 + 24) = (unsigned int)v185;
  v62 = 0;
  for ( *(_QWORD *)(v61 + 32) = v60; v62 < *((_DWORD *)this + 760); ++v62 )
  {
    v63 = 520LL * v62;
    v64 = *((_QWORD *)this + 362);
    if ( !*(_DWORD *)(v63 + v64 + 208) )
      *(_QWORD *)(v63 + v64 + 512) = 0LL;
  }
  v65 = (void *)*((_QWORD *)this + 513);
  *((_DWORD *)this + 1028) = 0;
  operator delete[](v65);
  *((_QWORD *)this + 513) = 0LL;
LABEL_87:
  v66 = *((_DWORD *)this + 1028);
  v67 = 0;
  if ( v66 )
  {
    v155 = *((_QWORD *)this + 513);
    while ( 1 )
    {
      v156 = 248LL * v67;
      v157 = *(_DWORD *)(v156 + v155);
      v158 = *(unsigned int *)(v156 + v155 + 144);
      if ( v157 > 0x20 )
        break;
      v159 = 0;
      if ( v157 )
      {
        v160 = 62LL * v67;
        while ( 1 )
        {
          v161 = *(_DWORD *)(v155 + 4 * (v160 + v159) + 4);
          if ( !v161 )
            break;
          if ( v159 && v161 > *(_DWORD *)(v155 + 4 * (v160 + v159 - 1) + 4) )
          {
            v162 = v159;
            v163 = v159 - 1;
            v164 = *(unsigned int *)(v156 + v155 + 144);
            WdLogSingleEntry3(2LL, v158, v159, v163);
            v151 = L"P-States must have monotonically decreasing operating frequency. Component:0x%I64x, P-State1:0x%I64x,"
                    " P-State2:0x%I64x";
            v181 = 0LL;
            StartContext = v163;
            StartRoutine = v162;
            ClientIda = v164;
            goto LABEL_171;
          }
          if ( ++v159 >= v157 )
            goto LABEL_194;
        }
        v152 = v159;
        v153 = *(unsigned int *)(v156 + v155 + 144);
        WdLogSingleEntry2(2LL, v158, v159);
        v151 = L"P-State cannot specify 0 operating frequency. Component:0x%I64x, P-State:0x%I64x";
        v181 = 0LL;
        StartContext = 0LL;
        StartRoutine = v152;
        ClientIda = v153;
LABEL_171:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v151, ClientIda, StartRoutine, StartContext, v181, 0LL);
        LODWORD(v34) = -1073741811;
        goto LABEL_226;
      }
LABEL_194:
      if ( ++v67 >= v66 )
        goto LABEL_88;
    }
    v150 = *(unsigned int *)(v156 + v155 + 144);
    WdLogSingleEntry1(2LL, v150);
    v151 = L"P-State StateCount cannot be larger than DXGK_MAX_P_STATES. Component:0x%I64x";
    v181 = 0LL;
    StartContext = 0LL;
    StartRoutine = 0LL;
    goto LABEL_168;
  }
LABEL_88:
  v68 = (ADAPTER_RENDER *)*((_QWORD *)this + 350);
  *((_DWORD *)this + 832) = v200;
  if ( v68 )
  {
    v69 = ADAPTER_RENDER::InitializePowerManagement(v68);
    v34 = v69;
    if ( v69 < 0 )
    {
      v165 = 7LL;
      WdLogSingleEntry2(2LL, v69, 7LL);
      v166 = L"InitializePowerManagement failed for render adapter:0x%I64x";
      goto LABEL_225;
    }
  }
  v70 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 349);
  if ( v70 )
  {
    v71 = ADAPTER_DISPLAY::InitializePowerManagement(v70);
    v34 = v71;
    if ( v71 < 0 )
    {
      WdLogSingleEntry2(2LL, v71, 8LL);
      v167 = L"InitializePowerManagement failed for display adapter:0x%I64x";
      goto LABEL_199;
    }
  }
  v72 = (_QWORD *)((char *)this + 2904);
  v73 = PoFxRegisterDevice(*((_QWORD *)this + 27), v23, (char *)this + 2904);
  v34 = v73;
  if ( v73 < 0 )
  {
    WdLogSingleEntry1(2LL, v73);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PoFxRegisterDevice failed with status:0x%I64x",
      v34,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_226;
  }
  KeInitializeEvent((PRKEVENT)((char *)this + 3064), SynchronizationEvent, 0);
  *((_BYTE *)this + 3332) = 0;
  *((_QWORD *)this + 419) = (char *)this + 3344;
  *((_QWORD *)this + 418) = (char *)this + 3344;
  TimeIncrement = KeQueryTimeIncrement();
  v75 = v201;
  v76 = TimeIncrement;
  *((_QWORD *)this + 389) = 0LL;
  *((_QWORD *)this + 391) = 0LL;
  *((_QWORD *)this + 395) = 0LL;
  *((_QWORD *)this + 397) = 0LL;
  *((_QWORD *)this + 386) = 10 * v75;
  v77 = v203;
  *((_QWORD *)this + 388) = 10LL * v202;
  v78 = 10000LL * v204;
  *((_QWORD *)this + 390) = 10 * v77;
  v79 = (unsigned int)(v78 / v76);
  v80 = v205;
  *((_QWORD *)this + 387) = v79;
  *((_QWORD *)this + 393) = v79;
  v81 = 5 * v80;
  v82 = v206;
  *((_QWORD *)this + 392) = 2 * v81;
  v83 = 5 * v82;
  v84 = v207;
  *((_QWORD *)this + 394) = 2 * v83;
  v85 = 5 * v84;
  v86 = v208;
  *((_QWORD *)this + 396) = 2 * v85;
  *((_QWORD *)this + 398) = (char *)this + 3088;
  v87 = 5 * v86;
  v88 = v209;
  *((_QWORD *)this + 430) = 2 * v87;
  v89 = 10000LL * v210;
  *((_QWORD *)this + 399) = 10 * v88;
  v90 = v211;
  *((_QWORD *)this + 400) = (unsigned int)(v89 / v76);
  v91 = 10000LL * v212;
  *((_QWORD *)this + 401) = 10 * v90;
  v92 = v213;
  *((_QWORD *)this + 402) = (unsigned int)(v91 / v76);
  v93 = 5 * v92;
  v94 = 10000LL * v214;
  *((_QWORD *)this + 403) = 2 * v93;
  v95 = v94;
  v96 = v215;
  *((_QWORD *)this + 406) = 0LL;
  *((_QWORD *)this + 404) = (unsigned int)(v95 / v76);
  v97 = 5 * v96;
  v98 = v216;
  *((_QWORD *)this + 405) = 2 * v97;
  v99 = 5 * v98;
  v100 = v222;
  *((_QWORD *)this + 408) = 2 * v99;
  v101 = 5 * v100;
  v102 = v218;
  *((_QWORD *)this + 409) = 2 * v101;
  v103 = 5 * v102;
  v104 = v219;
  *((_QWORD *)this + 410) = 2 * v103;
  v105 = 5 * v104;
  v106 = v220;
  *((_QWORD *)this + 411) = 2 * v105;
  v107 = 5 * v106;
  v108 = v221;
  *((_QWORD *)this + 412) = 2 * v107;
  v109 = 5 * v108;
  v110 = v227;
  *((_QWORD *)this + 413) = 2 * v109;
  v111 = 5 * v110;
  v112 = v223;
  *((_QWORD *)this + 414) = 2 * v111;
  v182 = 0;
  *((_QWORD *)this + 415) = 10 * v112;
  *((_QWORD *)this + 424) = (char *)this + 3384;
  *((_QWORD *)this + 423) = (char *)this + 3384;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 429);
  v113 = 0;
  while ( 2 )
  {
    v114 = *((_QWORD *)this + 362);
    v115 = 520LL * v113;
    v116 = (DXGADAPTER *)(v115 + v114 + 424);
    *(_BYTE *)(v115 + v114 + 356) = 1;
    *(_OWORD *)v116 = 0LL;
    v117 = *(_DWORD *)(v115 + v114 + 208);
    if ( v117 )
    {
      v118 = v117 - 1;
      if ( !v118 )
      {
        v119 = v225;
        goto LABEL_97;
      }
      v168 = v118 - 1;
      if ( v168 )
      {
        v169 = v168 - 1;
        if ( v169 )
        {
          v170 = v169 - 1;
          if ( v170 )
          {
            v171 = v170 - 2;
            if ( v171 )
            {
              if ( v171 != 1 )
              {
                v120 = *(_DWORD *)(v115 + v114 + 4);
                v122 = this;
                if ( v194 == -1 )
                  v121 = -1LL;
                else
                  v121 = 10LL * v194;
                goto LABEL_98;
              }
              v182 = 1;
              if ( (*(_DWORD *)(v115 + v114 + 216) & 0x10) != 0 )
              {
                *(_BYTE *)(v115 + v114 + 360) = 1;
                *(_BYTE *)(v115 + v114 + 356) = 0;
                *(_DWORD *)(v115 + v114 + 344) = 1;
              }
            }
          }
        }
        else
        {
          v172 = (DXGADAPTER **)*((_QWORD *)this + 426);
          if ( *v172 != (DXGADAPTER *)((char *)this + 3400) )
LABEL_217:
            __fastfail(3u);
          *(_QWORD *)v116 = (char *)this + 3400;
          *((_QWORD *)v116 + 1) = v172;
          *v172 = v116;
          *((_QWORD *)this + 426) = v116;
          if ( (*(_DWORD *)(v115 + v114 + 216) & 0x10) != 0 )
            *(_BYTE *)(v115 + v114 + 360) = 1;
        }
      }
      else
      {
        v119 = v224;
LABEL_97:
        v120 = *(_DWORD *)(v115 + v114 + 4);
        v121 = 10 * v119;
        v122 = this;
LABEL_98:
        DXGADAPTER::SetPowerComponentLatencyCB(v122, v120, v121);
      }
    }
    else
    {
      *(_BYTE *)(v115 + v114 + 357) = 1;
      v132 = (DXGADAPTER **)*((_QWORD *)this + 428);
      if ( *v132 != (DXGADAPTER *)((char *)this + 3416) )
        goto LABEL_217;
      *((_QWORD *)v116 + 1) = v132;
      *(_QWORD *)v116 = (char *)this + 3416;
      *v132 = v116;
      v133 = 0LL;
      *((_QWORD *)this + 428) = v116;
      v134 = *(_DWORD *)(v115 + v114 + 8);
      if ( v134 > 1 )
      {
        v135 = (unsigned __int64 *)(v115 + v114 + 40);
        v136 = v134 - 1;
        do
        {
          v137 = v133;
          v133 = *v135;
          v138 = v137 < *v135;
          v135 += 3;
          if ( !v138 )
            v133 = v137;
          --v136;
        }
        while ( v136 );
      }
      *(_DWORD *)(v115 + v114 + 388) = 1;
      v139 = (unsigned __int64 *)((char *)this + 3088);
      v140 = 0;
      while ( *v139 < v133 )
      {
        ++v140;
        v139 += 2;
        if ( v140 >= 2 )
          goto LABEL_125;
      }
      *(_DWORD *)(v115 + v114 + 388) = v140;
LABEL_125:
      v141 = *(_DWORD *)(v115 + v114 + 4);
      *(_DWORD *)(v115 + v114 + 384) = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v141, *(_QWORD *)(*((_QWORD *)this + 398) + 32LL));
      ++*((_DWORD *)this + 764);
    }
    if ( v195 == -1 )
      v123 = -1LL;
    else
      v123 = 10000LL * v195;
    DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v115 + v114 + 4), v123);
    KeInitializeSpinLock((PKSPIN_LOCK)(v115 + v114 + 504));
    if ( *(_DWORD *)(v115 + v114 + 8) <= 1u || (v124 = *(_QWORD *)(v115 + v114 + 48), v124 == -1) )
    {
      v125 = *((_QWORD *)this + 430);
    }
    else
    {
      v125 = *((_QWORD *)this + 430);
      if ( v124 > v125 )
        v125 = *(_QWORD *)(v115 + v114 + 48);
    }
    ++v113;
    *(_QWORD *)(v115 + v114 + 496) = v125;
    if ( v113 < v8 )
      continue;
    break;
  }
  DXGADAPTER::UpdateLatencyTolerances(this);
  PoFxSetDeviceIdleTimeout(*v72, 10LL * v226);
  if ( *((_DWORD *)this + 103) != 1297040209 || *((_DWORD *)this + 606) != 4608 )
  {
LABEL_107:
    v126 = *v72;
    v127 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
    *(_BYTE *)(v127 + 482) = 1;
    *(_QWORD *)(v127 + 488) = v126;
    *(_BYTE *)(v127 + 5664) = v182;
    if ( !v182
      || (v176 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v127 + 152),
                   &GUID_DEVINTERFACE_GRAPHICSPOWER,
                   0LL,
                   (PUNICODE_STRING)(v127 + 5648)),
          v34 = v176,
          v176 >= 0) )
    {
      operator delete[](v23);
      return 0LL;
    }
    WdLogSingleEntry2(2LL, v176, 8LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"InitializePowerManagement failed to register GRAPHICSPOWER interface:0x%I64x",
      v34,
      8LL,
      0LL,
      0LL,
      0LL);
    DXGADAPTER::DestroySerializeFStateTransitWorker(this);
    v165 = 9LL;
    WdLogSingleEntry2(2LL, v34, 9LL);
    v166 = L"Port power management enable failed:0x%I64x";
LABEL_225:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v166, v34, v165, 0LL, 0LL, 0LL);
    goto LABEL_226;
  }
  KeInitializeEvent((PRKEVENT)((char *)this + 3584), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 3608), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 3632), SynchronizationEvent, 0);
  KeInitializeSpinLock((PKSPIN_LOCK)this + 457);
  *((_QWORD *)this + 460) = (char *)this + 3672;
  *((_QWORD *)this + 459) = (char *)this + 3672;
  InitializeSListHead((PSLIST_HEADER)this + 231);
  v173 = (struct _SLIST_ENTRY *)((char *)this + 3728);
  v174 = 8LL;
  do
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 231, v173);
    v173 += 2;
    --v174;
  }
  while ( v174 );
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v175 = PsCreateSystemThread(
           (PHANDLE)this + 464,
           0x1FFFFFu,
           &ObjectAttributes,
           0LL,
           0LL,
           DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
           this);
  v34 = v175;
  if ( v175 >= 0 )
  {
    v72 = (_QWORD *)((char *)this + 2904);
    goto LABEL_107;
  }
  WdLogSingleEntry2(2LL, v175, 8LL);
  v167 = L"InitializePowerManagement failed to create worker thread for display adapter:0x%I64x";
LABEL_199:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v167, v34, 8LL, 0LL, 0LL, 0LL);
LABEL_226:
  operator delete[](v23);
LABEL_227:
  if ( *((_QWORD *)this + 363) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 363) = 0LL;
  }
  return (unsigned int)v34;
}
