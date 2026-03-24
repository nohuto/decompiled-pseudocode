/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C01862B0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01845A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000B1D8 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0039BE4 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0039C90 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0039D34 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003A358 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003A920 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C012A308 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C01763F0 (DpiGetPnpRegistryKeyName.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C020C43C (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0213300 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C021621C (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiEnablePowerManagement @ 0x1C02C645C (DpiEnablePowerManagement.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  unsigned int v7; // r15d
  bool v8; // cc
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  char *v15; // rax
  __int16 v16; // r9
  _WORD *v17; // rax
  bool v18; // zf
  __int64 v19; // rcx
  unsigned int v20; // esi
  unsigned int v21; // r12d
  __int64 v22; // rax
  DXGADAPTER *v23; // rcx
  __int64 v24; // r8
  int AdapterInfo; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  SIZE_T v28; // rax
  PVOID v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // r14d
  unsigned int v39; // edi
  __int64 v40; // r13
  __int64 v41; // rax
  int v42; // edx
  unsigned int v43; // eax
  __int64 v44; // r12
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int16 v50; // dx
  __int64 v51; // rdx
  __int64 v52; // rdi
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rcx
  void *v59; // rcx
  char *v60; // rdx
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  unsigned int v68; // ecx
  SIZE_T v69; // rax
  PVOID v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // edx
  __int64 j; // r8
  __int64 v81; // r10
  __int64 v82; // r9
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rdi
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r14
  int v92; // eax
  __int64 v93; // rax
  unsigned int v94; // ecx
  __int64 v95; // rdx
  __int64 v96; // rax
  void *v97; // rcx
  unsigned int v98; // r12d
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rcx
  __int64 v102; // rax
  unsigned int v103; // r9d
  __int64 v104; // r14
  unsigned int v105; // edi
  __int64 v106; // r11
  unsigned int v107; // r10d
  ADAPTER_RENDER *v108; // rcx
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  ADAPTER_DISPLAY *v113; // rcx
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  _QWORD *v117; // r13
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  ULONG TimeIncrement; // eax
  __int64 v122; // rcx
  unsigned __int64 v123; // r8
  __int64 v124; // rax
  unsigned __int64 v125; // rtt
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  unsigned __int64 v136; // rtt
  __int64 v137; // rax
  unsigned __int64 v138; // rtt
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  unsigned __int64 v142; // rtt
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rax
  unsigned int v160; // r12d
  __int64 v161; // r14
  __int64 v162; // rdi
  DXGADAPTER *v163; // rdx
  int v164; // ecx
  int v165; // ecx
  int v166; // ecx
  int v167; // ecx
  int v168; // ecx
  int v169; // ecx
  unsigned int v170; // edx
  DXGADAPTER *v171; // rcx
  __int64 v172; // r8
  DXGADAPTER **v173; // rcx
  __int64 v174; // rax
  DXGADAPTER **v175; // rcx
  unsigned __int64 v176; // rcx
  unsigned int v177; // eax
  unsigned __int64 *v178; // rdx
  __int64 v179; // r8
  unsigned __int64 v180; // rax
  bool v181; // cf
  unsigned __int64 *v182; // rdx
  unsigned int v183; // eax
  unsigned int v184; // edx
  __int64 v185; // r8
  __int64 v186; // rcx
  __int64 v187; // rax
  __int64 v188; // r8
  struct _SLIST_ENTRY *v189; // rdi
  __int64 v190; // r15
  NTSTATUS v191; // eax
  __int64 v192; // rdx
  __int64 v193; // rcx
  int v194; // eax
  __int64 v195; // rdx
  __int64 v196; // rcx
  PCLIENT_ID ClientId; // [rsp+28h] [rbp-E0h]
  char v198; // [rsp+48h] [rbp-C0h]
  unsigned int v199; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v200; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v201; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v202; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v203; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v204; // [rsp+68h] [rbp-A0h] BYREF
  int v205; // [rsp+6Ch] [rbp-9Ch] BYREF
  BOOL v206; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v207; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v208; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v209; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v210; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v211; // [rsp+84h] [rbp-84h] BYREF
  void *i; // [rsp+88h] [rbp-80h] BYREF
  int v213; // [rsp+90h] [rbp-78h] BYREF
  int v214; // [rsp+94h] [rbp-74h] BYREF
  int v215; // [rsp+98h] [rbp-70h] BYREF
  int v216; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v217; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v218; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v219; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v220; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v221; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v222; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v223; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v224; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v225; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v226; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v227; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v228; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v229; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v230; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v231; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v232; // [rsp+DCh] [rbp-2Ch] BYREF
  int v233; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v234; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v235; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v236; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v237; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v238; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v239; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v240; // [rsp+FCh] [rbp-Ch] BYREF
  unsigned int v241; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v242; // [rsp+104h] [rbp-4h] BYREF
  unsigned int v243; // [rsp+108h] [rbp+0h] BYREF
  int v244; // [rsp+10Ch] [rbp+4h] BYREF
  int v245; // [rsp+110h] [rbp+8h] BYREF
  int v246; // [rsp+114h] [rbp+Ch] BYREF
  int v247; // [rsp+118h] [rbp+10h] BYREF
  int v248; // [rsp+11Ch] [rbp+14h] BYREF
  int v249; // [rsp+120h] [rbp+18h] BYREF
  int v250; // [rsp+124h] [rbp+1Ch] BYREF
  int v251; // [rsp+128h] [rbp+20h] BYREF
  int v252; // [rsp+12Ch] [rbp+24h] BYREF
  int v253; // [rsp+130h] [rbp+28h] BYREF
  int v254; // [rsp+134h] [rbp+2Ch] BYREF
  int v255; // [rsp+138h] [rbp+30h] BYREF
  int v256; // [rsp+13Ch] [rbp+34h] BYREF
  int v257; // [rsp+140h] [rbp+38h] BYREF
  int v258; // [rsp+144h] [rbp+3Ch] BYREF
  int v259; // [rsp+148h] [rbp+40h] BYREF
  int v260; // [rsp+14Ch] [rbp+44h] BYREF
  int v261; // [rsp+150h] [rbp+48h] BYREF
  int v262; // [rsp+154h] [rbp+4Ch] BYREF
  int v263; // [rsp+158h] [rbp+50h] BYREF
  int v264; // [rsp+15Ch] [rbp+54h] BYREF
  int v265; // [rsp+160h] [rbp+58h] BYREF
  int v266; // [rsp+164h] [rbp+5Ch] BYREF
  int v267; // [rsp+168h] [rbp+60h] BYREF
  int v268; // [rsp+16Ch] [rbp+64h] BYREF
  int v269; // [rsp+170h] [rbp+68h] BYREF
  int v270; // [rsp+174h] [rbp+6Ch] BYREF
  int v271; // [rsp+178h] [rbp+70h] BYREF
  int v272; // [rsp+17Ch] [rbp+74h] BYREF
  int v273; // [rsp+180h] [rbp+78h] BYREF
  int v274; // [rsp+184h] [rbp+7Ch] BYREF
  int v275; // [rsp+188h] [rbp+80h] BYREF
  int v276; // [rsp+18Ch] [rbp+84h] BYREF
  int v277; // [rsp+190h] [rbp+88h] BYREF
  int v278; // [rsp+194h] [rbp+8Ch] BYREF
  int v279; // [rsp+198h] [rbp+90h] BYREF
  int v280; // [rsp+19Ch] [rbp+94h] BYREF
  int v281; // [rsp+1A0h] [rbp+98h] BYREF
  int v282; // [rsp+1A4h] [rbp+9Ch] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v284; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v285; // [rsp+208h] [rbp+100h]
  __int64 v286; // [rsp+218h] [rbp+110h] BYREF
  int v287; // [rsp+220h] [rbp+118h]
  const wchar_t *v288; // [rsp+228h] [rbp+120h]
  BOOL *v289; // [rsp+230h] [rbp+128h]
  int v290; // [rsp+238h] [rbp+130h]
  int *v291; // [rsp+240h] [rbp+138h]
  int v292; // [rsp+248h] [rbp+140h]
  __int64 v293; // [rsp+250h] [rbp+148h]
  int v294; // [rsp+258h] [rbp+150h]
  __int128 v295; // [rsp+260h] [rbp+158h]
  __int128 v296; // [rsp+270h] [rbp+168h]
  __int64 v297; // [rsp+280h] [rbp+178h]
  __int64 v298; // [rsp+288h] [rbp+180h] BYREF
  int v299; // [rsp+290h] [rbp+188h]
  const wchar_t *v300; // [rsp+298h] [rbp+190h]
  __int64 *v301; // [rsp+2A0h] [rbp+198h]
  int v302; // [rsp+2A8h] [rbp+1A0h]
  int *v303; // [rsp+2B0h] [rbp+1A8h]
  int v304; // [rsp+2B8h] [rbp+1B0h]
  __int64 v305; // [rsp+2C0h] [rbp+1B8h]
  int v306; // [rsp+2C8h] [rbp+1C0h]
  const wchar_t *v307; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v308; // [rsp+2D8h] [rbp+1D0h]
  int v309; // [rsp+2E0h] [rbp+1D8h]
  int *v310; // [rsp+2E8h] [rbp+1E0h]
  int v311; // [rsp+2F0h] [rbp+1E8h]
  __int64 v312; // [rsp+2F8h] [rbp+1F0h]
  int v313; // [rsp+300h] [rbp+1F8h]
  const wchar_t *v314; // [rsp+308h] [rbp+200h]
  unsigned int *v315; // [rsp+310h] [rbp+208h]
  int v316; // [rsp+318h] [rbp+210h]
  int *v317; // [rsp+320h] [rbp+218h]
  int v318; // [rsp+328h] [rbp+220h]
  __int64 v319; // [rsp+330h] [rbp+228h]
  int v320; // [rsp+338h] [rbp+230h]
  const wchar_t *v321; // [rsp+340h] [rbp+238h]
  unsigned int *v322; // [rsp+348h] [rbp+240h]
  int v323; // [rsp+350h] [rbp+248h]
  int *v324; // [rsp+358h] [rbp+250h]
  int v325; // [rsp+360h] [rbp+258h]
  __int64 v326; // [rsp+368h] [rbp+260h]
  int v327; // [rsp+370h] [rbp+268h]
  const wchar_t *v328; // [rsp+378h] [rbp+270h]
  unsigned int *v329; // [rsp+380h] [rbp+278h]
  int v330; // [rsp+388h] [rbp+280h]
  int *v331; // [rsp+390h] [rbp+288h]
  int v332; // [rsp+398h] [rbp+290h]
  __int64 v333; // [rsp+3A0h] [rbp+298h]
  int v334; // [rsp+3A8h] [rbp+2A0h]
  const wchar_t *v335; // [rsp+3B0h] [rbp+2A8h]
  unsigned int *v336; // [rsp+3B8h] [rbp+2B0h]
  int v337; // [rsp+3C0h] [rbp+2B8h]
  int *v338; // [rsp+3C8h] [rbp+2C0h]
  int v339; // [rsp+3D0h] [rbp+2C8h]
  __int64 v340; // [rsp+3D8h] [rbp+2D0h]
  int v341; // [rsp+3E0h] [rbp+2D8h]
  const wchar_t *v342; // [rsp+3E8h] [rbp+2E0h]
  unsigned int *v343; // [rsp+3F0h] [rbp+2E8h]
  int v344; // [rsp+3F8h] [rbp+2F0h]
  int *v345; // [rsp+400h] [rbp+2F8h]
  int v346; // [rsp+408h] [rbp+300h]
  __int64 v347; // [rsp+410h] [rbp+308h]
  int v348; // [rsp+418h] [rbp+310h]
  const wchar_t *v349; // [rsp+420h] [rbp+318h]
  unsigned int *v350; // [rsp+428h] [rbp+320h]
  int v351; // [rsp+430h] [rbp+328h]
  int *v352; // [rsp+438h] [rbp+330h]
  int v353; // [rsp+440h] [rbp+338h]
  __int64 v354; // [rsp+448h] [rbp+340h]
  int v355; // [rsp+450h] [rbp+348h]
  const wchar_t *v356; // [rsp+458h] [rbp+350h]
  unsigned int *v357; // [rsp+460h] [rbp+358h]
  int v358; // [rsp+468h] [rbp+360h]
  int *v359; // [rsp+470h] [rbp+368h]
  int v360; // [rsp+478h] [rbp+370h]
  __int64 v361; // [rsp+480h] [rbp+378h]
  int v362; // [rsp+488h] [rbp+380h]
  const wchar_t *v363; // [rsp+490h] [rbp+388h]
  unsigned int *v364; // [rsp+498h] [rbp+390h]
  int v365; // [rsp+4A0h] [rbp+398h]
  int *v366; // [rsp+4A8h] [rbp+3A0h]
  int v367; // [rsp+4B0h] [rbp+3A8h]
  __int64 v368; // [rsp+4B8h] [rbp+3B0h]
  int v369; // [rsp+4C0h] [rbp+3B8h]
  const wchar_t *v370; // [rsp+4C8h] [rbp+3C0h]
  int *v371; // [rsp+4D0h] [rbp+3C8h]
  int v372; // [rsp+4D8h] [rbp+3D0h]
  int *v373; // [rsp+4E0h] [rbp+3D8h]
  int v374; // [rsp+4E8h] [rbp+3E0h]
  __int64 v375; // [rsp+4F0h] [rbp+3E8h]
  int v376; // [rsp+4F8h] [rbp+3F0h]
  const wchar_t *v377; // [rsp+500h] [rbp+3F8h]
  unsigned int *v378; // [rsp+508h] [rbp+400h]
  int v379; // [rsp+510h] [rbp+408h]
  int *v380; // [rsp+518h] [rbp+410h]
  int v381; // [rsp+520h] [rbp+418h]
  __int64 v382; // [rsp+528h] [rbp+420h]
  int v383; // [rsp+530h] [rbp+428h]
  const wchar_t *v384; // [rsp+538h] [rbp+430h]
  int *v385; // [rsp+540h] [rbp+438h]
  int v386; // [rsp+548h] [rbp+440h]
  int *v387; // [rsp+550h] [rbp+448h]
  int v388; // [rsp+558h] [rbp+450h]
  __int64 v389; // [rsp+560h] [rbp+458h]
  int v390; // [rsp+568h] [rbp+460h]
  const wchar_t *v391; // [rsp+570h] [rbp+468h]
  unsigned int *v392; // [rsp+578h] [rbp+470h]
  int v393; // [rsp+580h] [rbp+478h]
  int *v394; // [rsp+588h] [rbp+480h]
  int v395; // [rsp+590h] [rbp+488h]
  __int64 v396; // [rsp+598h] [rbp+490h]
  int v397; // [rsp+5A0h] [rbp+498h]
  const wchar_t *v398; // [rsp+5A8h] [rbp+4A0h]
  unsigned int *v399; // [rsp+5B0h] [rbp+4A8h]
  int v400; // [rsp+5B8h] [rbp+4B0h]
  int *v401; // [rsp+5C0h] [rbp+4B8h]
  int v402; // [rsp+5C8h] [rbp+4C0h]
  __int64 v403; // [rsp+5D0h] [rbp+4C8h]
  int v404; // [rsp+5D8h] [rbp+4D0h]
  const wchar_t *v405; // [rsp+5E0h] [rbp+4D8h]
  unsigned int *v406; // [rsp+5E8h] [rbp+4E0h]
  int v407; // [rsp+5F0h] [rbp+4E8h]
  int *v408; // [rsp+5F8h] [rbp+4F0h]
  int v409; // [rsp+600h] [rbp+4F8h]
  __int64 v410; // [rsp+608h] [rbp+500h]
  int v411; // [rsp+610h] [rbp+508h]
  const wchar_t *v412; // [rsp+618h] [rbp+510h]
  unsigned int *v413; // [rsp+620h] [rbp+518h]
  int v414; // [rsp+628h] [rbp+520h]
  int *v415; // [rsp+630h] [rbp+528h]
  int v416; // [rsp+638h] [rbp+530h]
  __int64 v417; // [rsp+640h] [rbp+538h]
  int v418; // [rsp+648h] [rbp+540h]
  const wchar_t *v419; // [rsp+650h] [rbp+548h]
  unsigned int *v420; // [rsp+658h] [rbp+550h]
  int v421; // [rsp+660h] [rbp+558h]
  int *v422; // [rsp+668h] [rbp+560h]
  int v423; // [rsp+670h] [rbp+568h]
  __int64 v424; // [rsp+678h] [rbp+570h]
  int v425; // [rsp+680h] [rbp+578h]
  const wchar_t *v426; // [rsp+688h] [rbp+580h]
  unsigned int *v427; // [rsp+690h] [rbp+588h]
  int v428; // [rsp+698h] [rbp+590h]
  int *v429; // [rsp+6A0h] [rbp+598h]
  int v430; // [rsp+6A8h] [rbp+5A0h]
  __int64 v431; // [rsp+6B0h] [rbp+5A8h]
  int v432; // [rsp+6B8h] [rbp+5B0h]
  const wchar_t *v433; // [rsp+6C0h] [rbp+5B8h]
  unsigned int *v434; // [rsp+6C8h] [rbp+5C0h]
  int v435; // [rsp+6D0h] [rbp+5C8h]
  int *v436; // [rsp+6D8h] [rbp+5D0h]
  int v437; // [rsp+6E0h] [rbp+5D8h]
  __int64 v438; // [rsp+6E8h] [rbp+5E0h]
  int v439; // [rsp+6F0h] [rbp+5E8h]
  const wchar_t *v440; // [rsp+6F8h] [rbp+5F0h]
  unsigned int *v441; // [rsp+700h] [rbp+5F8h]
  int v442; // [rsp+708h] [rbp+600h]
  int *v443; // [rsp+710h] [rbp+608h]
  int v444; // [rsp+718h] [rbp+610h]
  __int64 v445; // [rsp+720h] [rbp+618h]
  int v446; // [rsp+728h] [rbp+620h]
  const wchar_t *v447; // [rsp+730h] [rbp+628h]
  int *v448; // [rsp+738h] [rbp+630h]
  int v449; // [rsp+740h] [rbp+638h]
  int *v450; // [rsp+748h] [rbp+640h]
  int v451; // [rsp+750h] [rbp+648h]
  __int64 v452; // [rsp+758h] [rbp+650h]
  int v453; // [rsp+760h] [rbp+658h]
  const wchar_t *v454; // [rsp+768h] [rbp+660h]
  int *v455; // [rsp+770h] [rbp+668h]
  int v456; // [rsp+778h] [rbp+670h]
  int *v457; // [rsp+780h] [rbp+678h]
  int v458; // [rsp+788h] [rbp+680h]
  __int64 v459; // [rsp+790h] [rbp+688h]
  int v460; // [rsp+798h] [rbp+690h]
  const wchar_t *v461; // [rsp+7A0h] [rbp+698h]
  int *v462; // [rsp+7A8h] [rbp+6A0h]
  int v463; // [rsp+7B0h] [rbp+6A8h]
  int *v464; // [rsp+7B8h] [rbp+6B0h]
  int v465; // [rsp+7C0h] [rbp+6B8h]
  __int64 v466; // [rsp+7C8h] [rbp+6C0h]
  int v467; // [rsp+7D0h] [rbp+6C8h]
  const wchar_t *v468; // [rsp+7D8h] [rbp+6D0h]
  unsigned int *v469; // [rsp+7E0h] [rbp+6D8h]
  int v470; // [rsp+7E8h] [rbp+6E0h]
  int *v471; // [rsp+7F0h] [rbp+6E8h]
  int v472; // [rsp+7F8h] [rbp+6F0h]
  __int64 v473; // [rsp+800h] [rbp+6F8h]
  int v474; // [rsp+808h] [rbp+700h]
  const wchar_t *v475; // [rsp+810h] [rbp+708h]
  unsigned int *v476; // [rsp+818h] [rbp+710h]
  int v477; // [rsp+820h] [rbp+718h]
  int *v478; // [rsp+828h] [rbp+720h]
  int v479; // [rsp+830h] [rbp+728h]
  __int64 v480; // [rsp+838h] [rbp+730h]
  int v481; // [rsp+840h] [rbp+738h]
  const wchar_t *v482; // [rsp+848h] [rbp+740h]
  unsigned int *v483; // [rsp+850h] [rbp+748h]
  int v484; // [rsp+858h] [rbp+750h]
  int *v485; // [rsp+860h] [rbp+758h]
  int v486; // [rsp+868h] [rbp+760h]
  __int64 v487; // [rsp+870h] [rbp+768h]
  int v488; // [rsp+878h] [rbp+770h]
  const wchar_t *v489; // [rsp+880h] [rbp+778h]
  unsigned int *v490; // [rsp+888h] [rbp+780h]
  int v491; // [rsp+890h] [rbp+788h]
  int *v492; // [rsp+898h] [rbp+790h]
  int v493; // [rsp+8A0h] [rbp+798h]
  __int64 v494; // [rsp+8A8h] [rbp+7A0h]
  int v495; // [rsp+8B0h] [rbp+7A8h]
  const wchar_t *v496; // [rsp+8B8h] [rbp+7B0h]
  unsigned int *v497; // [rsp+8C0h] [rbp+7B8h]
  int v498; // [rsp+8C8h] [rbp+7C0h]
  int *v499; // [rsp+8D0h] [rbp+7C8h]
  int v500; // [rsp+8D8h] [rbp+7D0h]
  __int64 v501; // [rsp+8E0h] [rbp+7D8h]
  int v502; // [rsp+8E8h] [rbp+7E0h]
  const wchar_t *v503; // [rsp+8F0h] [rbp+7E8h]
  unsigned int *v504; // [rsp+8F8h] [rbp+7F0h]
  int v505; // [rsp+900h] [rbp+7F8h]
  int *v506; // [rsp+908h] [rbp+800h]
  int v507; // [rsp+910h] [rbp+808h]
  __int64 v508; // [rsp+918h] [rbp+810h]
  int v509; // [rsp+920h] [rbp+818h]
  const wchar_t *v510; // [rsp+928h] [rbp+820h]
  unsigned int *v511; // [rsp+930h] [rbp+828h]
  int v512; // [rsp+938h] [rbp+830h]
  int *v513; // [rsp+940h] [rbp+838h]
  int v514; // [rsp+948h] [rbp+840h]
  __int64 v515; // [rsp+950h] [rbp+848h]
  int v516; // [rsp+958h] [rbp+850h]
  const wchar_t *v517; // [rsp+960h] [rbp+858h]
  unsigned int *v518; // [rsp+968h] [rbp+860h]
  int v519; // [rsp+970h] [rbp+868h]
  int *v520; // [rsp+978h] [rbp+870h]
  int v521; // [rsp+980h] [rbp+878h]
  __int64 v522; // [rsp+988h] [rbp+880h]
  int v523; // [rsp+990h] [rbp+888h]
  const wchar_t *v524; // [rsp+998h] [rbp+890h]
  unsigned int *v525; // [rsp+9A0h] [rbp+898h]
  int v526; // [rsp+9A8h] [rbp+8A0h]
  int *v527; // [rsp+9B0h] [rbp+8A8h]
  int v528; // [rsp+9B8h] [rbp+8B0h]
  __int64 v529; // [rsp+9C0h] [rbp+8B8h]
  int v530; // [rsp+9C8h] [rbp+8C0h]
  const wchar_t *v531; // [rsp+9D0h] [rbp+8C8h]
  unsigned int *v532; // [rsp+9D8h] [rbp+8D0h]
  int v533; // [rsp+9E0h] [rbp+8D8h]
  int *v534; // [rsp+9E8h] [rbp+8E0h]
  int v535; // [rsp+9F0h] [rbp+8E8h]
  __int64 v536; // [rsp+9F8h] [rbp+8F0h]
  int v537; // [rsp+A00h] [rbp+8F8h]
  const wchar_t *v538; // [rsp+A08h] [rbp+900h]
  unsigned int *v539; // [rsp+A10h] [rbp+908h]
  int v540; // [rsp+A18h] [rbp+910h]
  int *v541; // [rsp+A20h] [rbp+918h]
  int v542; // [rsp+A28h] [rbp+920h]
  __int64 v543; // [rsp+A30h] [rbp+928h]
  int v544; // [rsp+A38h] [rbp+930h]
  const wchar_t *v545; // [rsp+A40h] [rbp+938h]
  unsigned int *v546; // [rsp+A48h] [rbp+940h]
  int v547; // [rsp+A50h] [rbp+948h]
  int *v548; // [rsp+A58h] [rbp+950h]
  int v549; // [rsp+A60h] [rbp+958h]
  __int64 v550; // [rsp+A68h] [rbp+960h]
  int v551; // [rsp+A70h] [rbp+968h]
  const wchar_t *v552; // [rsp+A78h] [rbp+970h]
  unsigned int *v553; // [rsp+A80h] [rbp+978h]
  int v554; // [rsp+A88h] [rbp+980h]
  int *v555; // [rsp+A90h] [rbp+988h]
  int v556; // [rsp+A98h] [rbp+990h]
  __int64 v557; // [rsp+AA0h] [rbp+998h]
  int v558; // [rsp+AA8h] [rbp+9A0h]
  const wchar_t *v559; // [rsp+AB0h] [rbp+9A8h]
  unsigned int *v560; // [rsp+AB8h] [rbp+9B0h]
  int v561; // [rsp+AC0h] [rbp+9B8h]
  int *v562; // [rsp+AC8h] [rbp+9C0h]
  int v563; // [rsp+AD0h] [rbp+9C8h]
  __int64 v564; // [rsp+AD8h] [rbp+9D0h]
  int v565; // [rsp+AE0h] [rbp+9D8h]
  const wchar_t *v566; // [rsp+AE8h] [rbp+9E0h]
  unsigned int *v567; // [rsp+AF0h] [rbp+9E8h]
  int v568; // [rsp+AF8h] [rbp+9F0h]
  int *v569; // [rsp+B00h] [rbp+9F8h]
  int v570; // [rsp+B08h] [rbp+A00h]
  __int64 v571; // [rsp+B10h] [rbp+A08h]
  int v572; // [rsp+B18h] [rbp+A10h]
  __int128 v573; // [rsp+B20h] [rbp+A18h]
  __int128 v574; // [rsp+B30h] [rbp+A28h]
  __int64 v575; // [rsp+B40h] [rbp+A38h]
  _DWORD v576[64]; // [rsp+B48h] [rbp+A40h] BYREF
  unsigned __int16 v577[264]; // [rsp+C48h] [rbp+B40h] BYREF

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &Dxgk_PowerManagementSupport,
      a3,
      this,
      *((unsigned __int8 *)this + 2533));
  if ( !*((_BYTE *)this + 2533) )
  {
    v4 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v4 + 24) = 4567LL;
LABEL_5:
    WdLogEvent5_WdWarning(v4);
    return 0LL;
  }
  v263 = 3;
  v282 = -1;
  v210 = -1;
  v244 = 2000;
  v247 = 35000;
  v219 = 35000;
  LODWORD(v6) = 0;
  v211 = 2000;
  v249 = 50000;
  v7 = 0;
  v222 = 50000;
  v250 = 100000;
  v223 = 100000;
  v255 = 300000;
  v241 = 300000;
  v256 = 17000;
  v240 = 17000;
  v251 = 200;
  v216 = 200;
  v252 = 200;
  v220 = 200;
  v254 = 100;
  v253 = 100;
  v257 = 25000;
  v242 = 25000;
  v259 = 300;
  v202 = 300;
  v260 = 700;
  v208 = 700;
  v261 = 900;
  v203 = 900;
  v262 = 500;
  v207 = 500;
  v268 = 140000;
  v229 = 140000;
  v269 = 200000;
  v231 = 200000;
  v270 = 250000;
  v232 = 250000;
  v271 = 250000;
  v238 = 250000;
  v248 = 2000;
  v221 = 2000;
  v258 = 2000;
  v224 = 2000;
  v272 = 10000;
  v226 = 10000;
  v245 = 80;
  v217 = 80;
  v246 = 15000;
  v218 = 15000;
  v215 = 3;
  v264 = 0;
  v213 = 0;
  v265 = 0;
  v214 = 0;
  v266 = 80;
  v225 = 80;
  v267 = 80000;
  v227 = 80000;
  v8 = *((_DWORD *)this + 649) < 2400;
  v275 = 15000;
  v273 = 60000;
  v228 = 60000;
  v274 = 60000;
  v230 = 60000;
  v276 = 30000;
  v235 = 30000;
  v279 = 30000;
  v243 = 30000;
  v234 = 15000;
  v278 = 15000;
  v237 = 15000;
  v280 = 80000;
  v239 = 80000;
  v277 = 80;
  v236 = 80;
  v233 = 1;
  v206 = 1;
  v205 = 1;
  LODWORD(v200) = 1;
  v204 = 0;
  v199 = 0;
  if ( v8 )
  {
    v288 = L"UseSelfRefreshVRAMInS3";
    v287 = 288;
    v290 = 67108868;
    v289 = &v206;
    v286 = 0LL;
    v291 = &v233;
    v292 = 4;
    v297 = 0LL;
    v293 = 0LL;
    v294 = 0;
    v295 = 0LL;
    v296 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v286, 0LL, 0LL);
  }
  else
  {
    v206 = (*((_DWORD *)this + 515) & 0x1000) == 0;
  }
  v298 = 0LL;
  v300 = L"EnableRuntimePowerManagement";
  v301 = &v200;
  v303 = &v205;
  v307 = L"DisableDevicePowerRequired";
  v308 = &v199;
  v310 = (int *)&v204;
  v314 = L"DefaultLatencyToleranceOther";
  v315 = &v210;
  v317 = &v282;
  v321 = L"DefaultExpectedResidency";
  v322 = &v211;
  v324 = &v244;
  v328 = L"DefaultLatencyToleranceIdle0";
  v329 = &v217;
  v331 = &v245;
  v335 = L"DefaultLatencyToleranceIdle1";
  v336 = &v218;
  v338 = &v246;
  v342 = L"DefaultLatencyToleranceNoContext";
  v343 = &v219;
  v345 = &v247;
  v349 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v350 = &v221;
  v352 = &v248;
  v299 = 288;
  v302 = 67108868;
  v304 = 4;
  v305 = 0LL;
  v306 = 288;
  v309 = 67108868;
  v311 = 4;
  v312 = 0LL;
  v313 = 288;
  v316 = 67108868;
  v318 = 4;
  v319 = 0LL;
  v320 = 288;
  v323 = 67108868;
  v325 = 4;
  v326 = 0LL;
  v327 = 288;
  v330 = 67108868;
  v332 = 4;
  v333 = 0LL;
  v334 = 288;
  v337 = 67108868;
  v339 = 4;
  v340 = 0LL;
  v341 = 288;
  v344 = 67108868;
  v346 = 4;
  v347 = 0LL;
  v348 = 288;
  v351 = 67108868;
  v353 = 4;
  v354 = 0LL;
  v355 = 288;
  v356 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v357 = &v222;
  v359 = &v249;
  v363 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v364 = &v223;
  v366 = &v250;
  v370 = L"DefaultLatencyToleranceTimerPeriod";
  v371 = &v216;
  v373 = &v251;
  v377 = L"DefaultIdleThresholdIdle0";
  v378 = &v220;
  v380 = &v252;
  v384 = L"DefaultIdleThresholdIdle0MonitorOff";
  v385 = &v253;
  v387 = &v254;
  v391 = L"MonitorLatencyTolerance";
  v392 = &v241;
  v394 = &v255;
  v398 = L"MonitorRefreshLatencyTolerance";
  v399 = &v240;
  v401 = &v256;
  v405 = L"DefaultPowerNotRequiredTimeout";
  v406 = &v242;
  v408 = &v257;
  v358 = 67108868;
  v360 = 4;
  v361 = 0LL;
  v362 = 288;
  v365 = 67108868;
  v367 = 4;
  v368 = 0LL;
  v369 = 288;
  v372 = 67108868;
  v374 = 4;
  v375 = 0LL;
  v376 = 288;
  v379 = 67108868;
  v381 = 4;
  v382 = 0LL;
  v383 = 288;
  v386 = 67108868;
  v388 = 4;
  v389 = 0LL;
  v390 = 288;
  v393 = 67108868;
  v395 = 4;
  v396 = 0LL;
  v397 = 288;
  v400 = 67108868;
  v402 = 4;
  v403 = 0LL;
  v404 = 288;
  v407 = 67108868;
  v409 = 4;
  v410 = 0LL;
  v411 = 288;
  v414 = 67108868;
  v412 = L"DefaultActiveIdleThreshold";
  v413 = &v224;
  v415 = &v258;
  v419 = L"ulow";
  v420 = &v202;
  v422 = &v259;
  v426 = L"uhigh";
  v427 = &v208;
  v429 = &v260;
  v433 = L"uglitch";
  v434 = &v203;
  v436 = &v261;
  v440 = L"uideal";
  v441 = &v207;
  v443 = &v262;
  v447 = L"lowdebounce";
  v448 = &v215;
  v450 = &v263;
  v454 = L"EnablePODebounce";
  v455 = &v213;
  v457 = &v264;
  v461 = L"DisablePStateManagement";
  v462 = &v214;
  v464 = &v265;
  v416 = 4;
  v417 = 0LL;
  v418 = 288;
  v421 = 67108868;
  v423 = 4;
  v424 = 0LL;
  v425 = 288;
  v428 = 67108868;
  v430 = 4;
  v431 = 0LL;
  v432 = 288;
  v435 = 67108868;
  v437 = 4;
  v438 = 0LL;
  v439 = 288;
  v442 = 67108868;
  v444 = 4;
  v445 = 0LL;
  v446 = 288;
  v449 = 67108868;
  v451 = 4;
  v452 = 0LL;
  v453 = 288;
  v456 = 67108868;
  v458 = 4;
  v459 = 0LL;
  v460 = 288;
  v463 = 67108868;
  v465 = 4;
  v466 = 0LL;
  v467 = 288;
  v468 = L"DefaultD3TransitionLatencyActivelyUsed";
  v469 = &v225;
  v471 = &v266;
  v475 = L"DefaultD3TransitionLatencyIdleShortTime";
  v476 = &v227;
  v478 = &v267;
  v482 = L"DefaultD3TransitionLatencyIdleLongTime";
  v483 = &v229;
  v485 = &v268;
  v489 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v490 = &v231;
  v492 = &v269;
  v496 = L"DefaultD3TransitionLatencyIdleNoContext";
  v497 = &v232;
  v499 = &v270;
  v503 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v504 = &v238;
  v506 = &v271;
  v510 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v511 = &v226;
  v513 = &v272;
  v517 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v518 = &v228;
  v520 = &v273;
  v524 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v470 = 67108868;
  v472 = 4;
  v473 = 0LL;
  v474 = 288;
  v477 = 67108868;
  v479 = 4;
  v480 = 0LL;
  v481 = 288;
  v484 = 67108868;
  v486 = 4;
  v487 = 0LL;
  v488 = 288;
  v491 = 67108868;
  v493 = 4;
  v494 = 0LL;
  v495 = 288;
  v498 = 67108868;
  v500 = 4;
  v501 = 0LL;
  v502 = 288;
  v505 = 67108868;
  v507 = 4;
  v508 = 0LL;
  v509 = 288;
  v512 = 67108868;
  v514 = 4;
  v515 = 0LL;
  v516 = 288;
  v519 = 67108868;
  v521 = 4;
  v522 = 0LL;
  v523 = 288;
  v526 = 67108868;
  v525 = &v230;
  v530 = 288;
  v527 = &v274;
  v533 = 67108868;
  v531 = L"DefaultLatencyToleranceMemory";
  v537 = 288;
  v532 = &v234;
  v534 = &v275;
  v538 = L"DefaultLatencyToleranceMemoryNoContext";
  v539 = &v235;
  v541 = &v276;
  v545 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v546 = &v236;
  v548 = &v277;
  v552 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v553 = &v237;
  v555 = &v278;
  v559 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v560 = &v243;
  v562 = &v279;
  v566 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v567 = &v239;
  v569 = &v280;
  v540 = 67108868;
  v544 = 288;
  v547 = 67108868;
  v551 = 288;
  v554 = 67108868;
  v558 = 288;
  v561 = 67108868;
  v565 = 288;
  v568 = 67108868;
  v575 = 0LL;
  v528 = 4;
  v529 = 0LL;
  v535 = 4;
  v536 = 0LL;
  v542 = 4;
  v543 = 0LL;
  v549 = 4;
  v550 = 0LL;
  v556 = 4;
  v557 = 0LL;
  v563 = 4;
  v564 = 0LL;
  v570 = 4;
  v571 = 0LL;
  v572 = 0;
  v573 = 0LL;
  v574 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v298, 0LL, 0LL);
  if ( *((int *)this + 649) < 2400 )
  {
    v11 = *((_QWORD *)this + 27);
    i = 0LL;
    if ( (int)DpiGetPnpRegistryKeyName(v11, 2LL, (__int64 *)&i) >= 0
      && (int)RtlStringCbCopyW(v577, 0x208uLL, *((size_t **)i + 1)) >= 0 )
    {
      v12 = v577;
      v9 = 260LL;
      do
      {
        if ( !*v12 )
          break;
        ++v12;
        --v9;
      }
      while ( v9 );
      v13 = v9 ? 260 - v9 : 0LL;
      if ( v9 )
      {
        v9 = (__int64)&v577[v13];
        v14 = 260 - v13;
        if ( 260 != v13 )
        {
          v10 = 2147483646LL;
          v15 = (char *)L"\\DxgkSettings" - v9;
          do
          {
            if ( !v10 )
              break;
            v16 = *(_WORD *)&v15[v9];
            if ( !v16 )
              break;
            *(_WORD *)v9 = v16;
            --v10;
            v9 += 2LL;
            --v14;
          }
          while ( v14 );
        }
        v17 = (_WORD *)(v9 - 2);
        if ( v14 )
          v17 = (_WORD *)v9;
        *v17 = 0;
        if ( v14 )
        {
          v286 = 0LL;
          v287 = 288;
          v288 = L"UseSelfRefreshVRAMInS3";
          v290 = 67108868;
          v289 = &v206;
          v292 = 4;
          v291 = &v233;
          v293 = 0LL;
          v297 = 0LL;
          v294 = 0;
          v295 = 0LL;
          v296 = 0LL;
          RtlQueryRegistryValuesEx(0LL, v577, &v286, 0LL, 0LL);
        }
      }
    }
  }
  if ( !(_DWORD)v200 )
    return 0LL;
  v18 = !v206;
  *((_BYTE *)this + 204) = v199 != 0;
  *((_BYTE *)this + 207) = !v18;
  v19 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  v20 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 28LL);
  if ( v20 < 0x5019 || *((int *)this + 582) < 0x2000 )
    v21 = 1;
  else
    v21 = *((_DWORD *)this + 70);
  v205 = v21;
  LODWORD(v201) = 0;
  if ( v21 )
  {
    v22 = 0LL;
    do
    {
      *(_QWORD *)&ObjectAttributes.Attributes = &v576[v22];
      memset(&ObjectAttributes, 0, 24);
      ObjectAttributes.Length = 6;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      LODWORD(ObjectAttributes.SecurityDescriptor) = 4;
      if ( DXGADAPTER::IsDxgmms2(this) && v20 >= 0x5019 )
      {
        LODWORD(ObjectAttributes.ObjectName) = 4;
        ObjectAttributes.RootDirectory = &v201;
      }
      AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(v23, (struct _DXGKARG_QUERYADAPTERINFO *)&ObjectAttributes, v24);
      v6 = AdapterInfo;
      if ( AdapterInfo < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v19, v9);
        *(_QWORD *)(v26 + 24) = this;
        *(_QWORD *)(v26 + 32) = v6;
        WdLogEvent5_WdError(v26);
        return (unsigned int)v6;
      }
      v7 += v576[(unsigned int)v201];
      v22 = (unsigned int)(v201 + 1);
      LODWORD(v201) = v22;
    }
    while ( (unsigned int)v22 < v21 );
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    LODWORD(ClientId) = v6;
    McTemplateK0pqq_EtwWriteTransfer(v19, &Dxgk_PowerManagementComponents, v10, this, ClientId, v7);
  }
  if ( (int)v6 < 0 )
    return 0LL;
  if ( !v7 )
  {
    v4 = WdLogNewEntry5_WdWarning(v19, v9, v10);
    *(_QWORD *)(v4 + 24) = 4779LL;
    goto LABEL_5;
  }
  if ( v7 > 0xFFFF )
  {
    v27 = WdLogNewEntry5_WdError(v19, v9);
    *(_QWORD *)(v27 + 24) = v7;
    WdLogEvent5_WdError(v27);
    LODWORD(v6) = -1073741811;
    goto LABEL_226;
  }
  *((_DWORD *)this + 736) = v7;
  v28 = 520LL * v7;
  if ( !is_mul_ok(v7, 0x208uLL) )
    v28 = -1LL;
  v29 = operator new[](v28, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 350) = v29;
  if ( !v29
    || (memset(v29, 0, 520LL * v7), v34 = operator new[](312 * v7 + 160, 0x4B677844u, PagedPool), (v35 = v34) == 0LL) )
  {
    v55 = WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
    *(_QWORD *)(v55 + 24) = this;
    WdLogEvent5_WdLowResource(v55);
    LODWORD(v6) = -1073741801;
    goto LABEL_226;
  }
  memset(v34, 0, 312 * v7 + 160);
  *(_DWORD *)v35 = 3;
  v35[8] = DxgkPowerRuntimeDeviceDirectedPowerUpCallback;
  v35[1] = 2LL;
  v35[9] = DxgkPowerRuntimeDeviceDirectedPowerDownCallback;
  *((_DWORD *)v35 + 24) = v7;
  v35[4] = DxgkPowerRuntimeComponentIdleStateCallback;
  v38 = 0;
  v35[11] = this;
  v35[2] = DxgkPowerRuntimeComponentActiveCallback;
  v35[3] = DxgkPowerRuntimeComponentIdleCallback;
  v35[5] = DxgkPowerRuntimeDevicePowerRequiredCallback;
  v35[6] = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  v35[7] = DxgkPowerRuntimeControlCallback;
  memset(&v284, 0, sizeof(v284));
  v39 = 0;
  v284.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v40 = (__int64)&v35[7 * v7 + 13];
  v284.InputDataSize = 4;
  v204 = 0;
  v284.OutputDataSize = 336;
  i = (void *)(v40 + 192LL * v7);
  v41 = 0LL;
  v199 = 0;
  if ( !v21 )
    goto LABEL_108;
  v42 = 0;
  LODWORD(v200) = 0;
  do
  {
    v36 = (unsigned int)v41;
    *((_WORD *)this + v41 + 1408) = v38;
    v43 = 0;
    v285 = v36;
    v209 = 0;
    if ( !v576[v36] )
      goto LABEL_107;
    do
    {
      v44 = 7LL * v38;
      v281 = v42 + v43;
      v284.pInputData = &v281;
      v45 = *((_QWORD *)this + 350) + 8LL;
      v201 = 520LL * v38;
      v284.pOutputData = (void *)(v45 + v201);
      v46 = DXGADAPTER::DdiQueryAdapterInfo(this, &v284, v37);
      v6 = v46;
      if ( v46 < 0 )
      {
        v78 = WdLogNewEntry5_WdError(v48, v47);
        *(_QWORD *)(v78 + 24) = v38;
        *(_QWORD *)(v78 + 32) = v6;
LABEL_139:
        WdLogEvent5_WdError(v78);
        goto LABEL_225;
      }
      v49 = v201;
      v50 = v209;
      *(_DWORD *)(v201 + *((_QWORD *)this + 350)) = v38;
      *(_WORD *)(v49 + *((_QWORD *)this + 350) + 4) = v50;
      v51 = v199;
      *(_WORD *)(v49 + *((_QWORD *)this + 350) + 6) = v199;
      v52 = v49 + *((_QWORD *)this + 350);
      HIDWORD(v35[v44 + 16]) = *(_DWORD *)(v52 + 8);
      if ( (unsigned int)(*(_DWORD *)(v52 + 8) - 1) > 7 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v49, v51);
        v76[3] = v38;
        v77 = *(unsigned int *)(v52 + 8);
        v76[5] = 0LL;
        goto LABEL_134;
      }
      *(_OWORD *)&v35[v44 + 13] = *(_OWORD *)(v52 + 220);
      *(_BYTE *)(v52 + 275) = 0;
      v53 = *(_DWORD *)(v52 + 216);
      if ( v53 >= 0x20 )
      {
        v54 = WdLogNewEntry5_WdError(v49, v51);
        *(_QWORD *)(v54 + 32) = 2LL;
        goto LABEL_131;
      }
      if ( (v53 & 4) != 0 )
        v35[v44 + 15] |= 1uLL;
      if ( !v213 )
        v35[v44 + 15] |= 2uLL;
      if ( (*(_DWORD *)(v52 + 216) & 0x10) != 0 )
      {
        if ( ((*(_DWORD *)(v52 + 208) - 3) & 0xFFFFFFFB) != 0 )
        {
          v54 = WdLogNewEntry5_WdError(v49, v51);
          *(_QWORD *)(v54 + 32) = 4930LL;
          goto LABEL_131;
        }
        if ( *(_DWORD *)(v52 + 8) != 2 )
        {
          v54 = WdLogNewEntry5_WdError(v49, v51);
          *(_QWORD *)(v54 + 32) = 4936LL;
          goto LABEL_131;
        }
        if ( *(_QWORD *)(v52 + 40) )
        {
          v54 = WdLogNewEntry5_WdError(v49, v51);
          *(_QWORD *)(v54 + 32) = 4942LL;
          goto LABEL_131;
        }
        if ( *(_DWORD *)(v52 + 276) )
        {
          v54 = WdLogNewEntry5_WdError(v49, v51);
          *(_QWORD *)(v54 + 32) = 4948LL;
LABEL_131:
          *(_QWORD *)(v54 + 24) = v38;
          WdLogEvent5_WdError(v54);
          LODWORD(v6) = -1073741811;
          goto LABEL_225;
        }
      }
      if ( *(_DWORD *)(v52 + 276) > 0x10u )
      {
LABEL_128:
        v54 = WdLogNewEntry5_WdError(v49, v51);
        *(_QWORD *)(v54 + 32) = 3LL;
        goto LABEL_131;
      }
      v56 = *(_DWORD *)(v52 + 208);
      if ( v56 == 4 )
      {
        if ( *((_DWORD *)this + 738) != -1 )
        {
          v54 = WdLogNewEntry5_WdError(v49, v51);
          *(_QWORD *)(v54 + 32) = 4996LL;
          goto LABEL_131;
        }
        *((_DWORD *)this + 738) = v38;
      }
      else if ( v56 == 6 )
      {
        if ( *((_DWORD *)this + 737) == -1 )
        {
          v58 = *((_QWORD *)this + 350) + v49;
          *((_QWORD *)this + 395) = v58;
          *((_DWORD *)this + 737) = v38;
          if ( *(_DWORD *)(v52 + 8) == 2 )
          {
            *((_BYTE *)this + 3240) = 1;
          }
          else if ( *(_DWORD *)(v52 + 8) > 2u )
          {
            v54 = WdLogNewEntry5_WdError(v58, v51);
            *(_QWORD *)(v54 + 32) = 4986LL;
            goto LABEL_131;
          }
        }
        else
        {
          v57 = WdLogNewEntry5_WdWarning(v49, v51, 0LL);
          *(_QWORD *)(v57 + 24) = v38;
          *(_QWORD *)(v57 + 32) = 4970LL;
          WdLogEvent5_WdWarning(v57);
        }
      }
      v59 = i;
      LODWORD(v35[v44 + 18]) = *(_DWORD *)(v52 + 276);
      memmove(v59, (const void *)(v52 + 280), 4LL * *(unsigned int *)(v52 + 276));
      v60 = (char *)i;
      v61 = 0LL;
      v35[v44 + 19] = i;
      v62 = *(unsigned int *)(v52 + 276);
      v35[v44 + 17] = v40;
      for ( i = &v60[4 * v62]; (unsigned int)v61 < *(_DWORD *)(v52 + 8); v61 = (unsigned int)(v61 + 1) )
      {
        v37 = 3 * v61;
        v63 = *(_QWORD *)(v52 + 24 * v61 + 16);
        *(_QWORD *)v40 = v63;
        v49 = *(_QWORD *)(v52 + 24 * v61 + 24);
        *(_QWORD *)(v40 + 8) = v49;
        v51 = *(unsigned int *)(v52 + 24 * v61 + 32);
        *(_DWORD *)(v40 + 16) = v51;
        if ( *(_QWORD *)(v52 + 24 * v61 + 16) == -1LL )
          v63 = -1LL;
        *(_QWORD *)v40 = v63;
        if ( *(_QWORD *)(v52 + 24 * v61 + 24) == -1LL )
          v49 = -1LL;
        *(_QWORD *)(v40 + 8) = v49;
        if ( *(_DWORD *)(v52 + 24 * v61 + 32) == -1 )
          v51 = 0xFFFFFFFFLL;
        *(_DWORD *)(v40 + 16) = v51;
        if ( (_DWORD)v61 )
        {
          v64 = *(unsigned int *)(v52 + 24 * v61 + 32);
          if ( (_DWORD)v64 != -1 )
          {
            v65 = *(unsigned int *)(v52 + 24 * ((unsigned int)(v61 - 1) + 1LL) + 8);
            if ( (_DWORD)v65 != -1 && (unsigned int)v64 > (unsigned int)v65 )
            {
              v54 = WdLogNewEntry5_WdError(v65, v64);
              *(_QWORD *)(v54 + 32) = 5LL;
              goto LABEL_131;
            }
          }
          v66 = *(_QWORD *)(v52 + 24 * v61 + 16);
          if ( v66 != -1LL )
          {
            v67 = *(_QWORD *)(v52 + 24LL * (unsigned int)(v61 - 1) + 16);
            if ( v67 != -1LL && v66 < v67 )
            {
              v54 = WdLogNewEntry5_WdError(v67, v66);
              *(_QWORD *)(v54 + 32) = 6LL;
              goto LABEL_131;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v52 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v52 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            goto LABEL_128;
          }
          if ( !*(_DWORD *)(v52 + 24 * v61 + 32) )
          {
            v54 = WdLogNewEntry5_WdError(v49, v51);
            *(_QWORD *)(v54 + 32) = 4LL;
            goto LABEL_131;
          }
        }
        v40 += 24LL;
      }
      v42 = v200;
      v68 = v204 + 1;
      if ( *(_DWORD *)(v52 + 208) )
        v68 = v204;
      v43 = v209 + 1;
      v39 = v68;
      v204 = v68;
      v36 = v285;
      ++v38;
      v209 = v43;
    }
    while ( v43 < v576[v285] );
    v21 = v205;
    v204 = v39;
LABEL_107:
    v42 += 0x10000;
    v41 = v199 + 1;
    LODWORD(v200) = v42;
    v199 = v41;
  }
  while ( (unsigned int)v41 < v21 );
LABEL_108:
  if ( *((_DWORD *)this + 738) == -1 && !*((_BYTE *)this + 3240) )
    *((_QWORD *)this + 395) = 0LL;
  if ( *((int *)this + 649) < 1300 || !v39 || v214 )
    goto LABEL_166;
  if ( v202 > 0x3E8
    || (v36 = v208, v208 > 0x3E8)
    || v203 > 0x3E8
    || v207 > 0x3E8
    || v202 >= v207
    || v207 >= v208
    || v208 >= v203 )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdError(v36, 1000LL);
    v76[3] = v202;
    v76[4] = v208;
    v76[5] = v203;
    v76[6] = v207;
    goto LABEL_136;
  }
  v284.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v69 = 248LL * v39;
  v284.OutputDataSize = 136;
  if ( !is_mul_ok(v39, 0xF8uLL) )
    v69 = -1LL;
  v70 = operator new[](v69, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 500) = v70;
  *((_DWORD *)this + 1002) = v39;
  if ( !v70 )
  {
    v75 = WdLogNewEntry5_WdLowResource(v72, v71, v73, v74);
    *(_QWORD *)(v75 + 24) = this;
    WdLogEvent5_WdLowResource(v75);
    LODWORD(v6) = -1073741801;
    goto LABEL_225;
  }
  memset(v70, 0, 248LL * v39);
  v79 = 0;
  for ( j = 0LL; v79 < *((_DWORD *)this + 736); ++v79 )
  {
    v81 = *((_QWORD *)this + 350);
    v82 = 520LL * v79;
    if ( !*(_DWORD *)(v82 + v81 + 208) )
    {
      *(_QWORD *)(v82 + v81 + 512) = *((_QWORD *)this + 500) + 248LL * (unsigned int)j;
      j = (unsigned int)(j + 1);
    }
  }
  v83 = 0;
  *((_DWORD *)this + 1054) = v203;
  *((_DWORD *)this + 1055) = v208;
  *((_DWORD *)this + 1056) = v202;
  *((_DWORD *)this + 1057) = v207;
  *((_DWORD *)this + 1058) = v215;
  LODWORD(v201) = 0;
  v84 = 0LL;
  while ( 2 )
  {
    v85 = *(_QWORD *)(520 * v84 + *((_QWORD *)this + 350) + 512);
    if ( !v85 )
    {
LABEL_148:
      LODWORD(v201) = ++v83;
      v84 = v83;
      if ( v83 >= v7 )
        goto LABEL_155;
      continue;
    }
    break;
  }
  v284.pOutputData = *(void **)(520 * v84 + *((_QWORD *)this + 350) + 512);
  v284.pInputData = &v201;
  v86 = DXGADAPTER::DdiQueryAdapterInfo(this, &v284, j);
  v91 = v86;
  if ( v86 >= 0 )
  {
    v92 = v201;
    *(_QWORD *)(v85 + 136) = this;
    *(_DWORD *)(v85 + 144) = v92;
    *(_QWORD *)(v85 + 152) = v85;
    KeInitializeSpinLock((PKSPIN_LOCK)(v85 + 160));
    *(_BYTE *)(v85 + 240) = 0;
    *(_DWORD *)(v85 + 244) = -1;
    v83 = v201;
    goto LABEL_148;
  }
  v93 = WdLogNewEntry5_WdTrace(v88, v87, v89, v90);
  *(_QWORD *)(v93 + 24) = (unsigned int)v201;
  v94 = 0;
  for ( *(_QWORD *)(v93 + 32) = v91; v94 < *((_DWORD *)this + 736); ++v94 )
  {
    v95 = 520LL * v94;
    v96 = *((_QWORD *)this + 350);
    if ( !*(_DWORD *)(v95 + v96 + 208) )
      *(_QWORD *)(v95 + v96 + 512) = 0LL;
  }
  v97 = (void *)*((_QWORD *)this + 500);
  *((_DWORD *)this + 1002) = 0;
  operator delete[](v97);
  *((_QWORD *)this + 500) = 0LL;
LABEL_155:
  v98 = *((_DWORD *)this + 1002);
  v99 = 0LL;
  if ( v98 )
  {
    v100 = *((_QWORD *)this + 500);
    while ( 1 )
    {
      v101 = (unsigned int)v99;
      v102 = 248LL * (unsigned int)v99;
      v103 = *(_DWORD *)(v102 + v100);
      v104 = *(unsigned int *)(v102 + v100 + 144);
      if ( v103 > 0x20 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)v99, v99);
        v76[3] = v104;
        goto LABEL_136;
      }
      v105 = 0;
      if ( v103 )
        break;
LABEL_165:
      v99 = (unsigned int)(v99 + 1);
      if ( (unsigned int)v99 >= v98 )
        goto LABEL_166;
    }
    v106 = 62LL * (unsigned int)v99;
    while ( 1 )
    {
      v107 = *(_DWORD *)(v100 + 4 * (v106 + v105) + 4);
      if ( !v107 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v101, v99);
        v77 = v105;
        v76[3] = v104;
        goto LABEL_134;
      }
      if ( v105 )
      {
        v101 = v106 + v105 - 1;
        if ( v107 > *(_DWORD *)(v100 + 4 * v101 + 4) )
          break;
      }
      if ( ++v105 >= v103 )
        goto LABEL_165;
    }
    v76 = (_QWORD *)WdLogNewEntry5_WdError(v101, v99);
    v77 = v105;
    v76[3] = v104;
    v76[5] = v105 - 1;
LABEL_134:
    v76[4] = v77;
LABEL_136:
    WdLogEvent5_WdError(v76);
    LODWORD(v6) = -1073741811;
    goto LABEL_225;
  }
LABEL_166:
  v108 = (ADAPTER_RENDER *)*((_QWORD *)this + 338);
  *((_DWORD *)this + 808) = v216;
  if ( v108 )
  {
    v109 = ADAPTER_RENDER::InitializePowerManagement(v108);
    v6 = v109;
    if ( v109 < 0 )
    {
      v112 = WdLogNewEntry5_WdError(v111, v110);
      *(_QWORD *)(v112 + 32) = 7LL;
      goto LABEL_224;
    }
  }
  v113 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 337);
  if ( v113 )
  {
    v114 = ADAPTER_DISPLAY::InitializePowerManagement(v113);
    v6 = v114;
    if ( v114 < 0 )
    {
      v112 = WdLogNewEntry5_WdError(v116, v115);
      *(_QWORD *)(v112 + 32) = 8LL;
      goto LABEL_224;
    }
  }
  v117 = (_QWORD *)((char *)this + 2808);
  v118 = PoFxRegisterDevice(*((_QWORD *)this + 27), v35, (char *)this + 2808);
  v6 = v118;
  if ( v118 < 0 )
  {
    v78 = WdLogNewEntry5_WdError(v120, v119);
    *(_QWORD *)(v78 + 24) = v6;
    goto LABEL_139;
  }
  KeInitializeEvent((PRKEVENT)((char *)this + 2968), SynchronizationEvent, 0);
  *((_BYTE *)this + 3236) = 0;
  *((_QWORD *)this + 407) = (char *)this + 3248;
  *((_QWORD *)this + 406) = (char *)this + 3248;
  TimeIncrement = KeQueryTimeIncrement();
  v122 = v217;
  v123 = TimeIncrement;
  *((_QWORD *)this + 377) = 0LL;
  *((_QWORD *)this + 379) = 0LL;
  *((_QWORD *)this + 383) = 0LL;
  *((_QWORD *)this + 385) = 0LL;
  *((_QWORD *)this + 374) = 10 * v122;
  v124 = v219;
  *((_QWORD *)this + 376) = 10LL * v218;
  v125 = 10000LL * v220;
  *((_QWORD *)this + 378) = 10 * v124;
  v126 = (unsigned int)(v125 / v123);
  v127 = v221;
  *((_QWORD *)this + 375) = v126;
  *((_QWORD *)this + 381) = v126;
  v128 = 5 * v127;
  v129 = v222;
  *((_QWORD *)this + 380) = 2 * v128;
  v130 = 5 * v129;
  v131 = v223;
  *((_QWORD *)this + 382) = 2 * v130;
  v132 = 5 * v131;
  v133 = v224;
  *((_QWORD *)this + 384) = 2 * v132;
  *((_QWORD *)this + 386) = (char *)this + 2992;
  v134 = 5 * v133;
  v135 = v225;
  *((_QWORD *)this + 418) = 2 * v134;
  v136 = 10000LL * v226;
  *((_QWORD *)this + 387) = 10 * v135;
  v137 = v227;
  *((_QWORD *)this + 388) = (unsigned int)(v136 / v123);
  v138 = 10000LL * v228;
  *((_QWORD *)this + 389) = 10 * v137;
  v139 = v229;
  *((_QWORD *)this + 390) = (unsigned int)(v138 / v123);
  v140 = 5 * v139;
  v141 = 10000LL * v230;
  *((_QWORD *)this + 391) = 2 * v140;
  v142 = v141;
  v143 = v231;
  *((_QWORD *)this + 392) = (unsigned int)(v142 / v123);
  *((_QWORD *)this + 394) = 0LL;
  v198 = 0;
  v144 = 5 * v143;
  v145 = v232;
  *((_QWORD *)this + 393) = 2 * v144;
  v146 = 5 * v145;
  v147 = v238;
  *((_QWORD *)this + 396) = 2 * v146;
  v148 = 5 * v147;
  v149 = v234;
  *((_QWORD *)this + 397) = 2 * v148;
  v150 = 5 * v149;
  v151 = v235;
  *((_QWORD *)this + 398) = 2 * v150;
  v152 = 5 * v151;
  v153 = v236;
  *((_QWORD *)this + 399) = 2 * v152;
  v154 = 5 * v153;
  v155 = v237;
  *((_QWORD *)this + 400) = 2 * v154;
  v156 = 5 * v155;
  v157 = v243;
  *((_QWORD *)this + 401) = 2 * v156;
  v158 = 5 * v157;
  v159 = v239;
  *((_QWORD *)this + 402) = 2 * v158;
  *((_QWORD *)this + 403) = 10 * v159;
  *((_QWORD *)this + 412) = (char *)this + 3288;
  *((_QWORD *)this + 411) = (char *)this + 3288;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 417);
  v160 = 0;
  while ( 2 )
  {
    v161 = *((_QWORD *)this + 350);
    v162 = 520LL * v160;
    v163 = (DXGADAPTER *)(v162 + v161 + 424);
    *(_BYTE *)(v162 + v161 + 356) = 1;
    *(_OWORD *)v163 = 0LL;
    v164 = *(_DWORD *)(v162 + v161 + 208);
    if ( !v164 )
    {
      *(_BYTE *)(v162 + v161 + 357) = 1;
      v175 = (DXGADAPTER **)*((_QWORD *)this + 416);
      if ( *v175 != (DXGADAPTER *)((char *)this + 3320) )
LABEL_228:
        __fastfail(3u);
      *((_QWORD *)v163 + 1) = v175;
      *(_QWORD *)v163 = (char *)this + 3320;
      *v175 = v163;
      v176 = 0LL;
      *((_QWORD *)this + 416) = v163;
      v177 = *(_DWORD *)(v162 + v161 + 8);
      if ( v177 > 1 )
      {
        v178 = (unsigned __int64 *)(v162 + v161 + 40);
        v179 = v177 - 1;
        do
        {
          v180 = v176;
          v176 = *v178;
          v181 = v180 < *v178;
          v178 += 3;
          if ( !v181 )
            v176 = v180;
          --v179;
        }
        while ( v179 );
      }
      *(_DWORD *)(v162 + v161 + 388) = 1;
      v182 = (unsigned __int64 *)((char *)this + 2992);
      v183 = 0;
      while ( *v182 < v176 )
      {
        ++v183;
        v182 += 2;
        if ( v183 >= 2 )
          goto LABEL_206;
      }
      *(_DWORD *)(v162 + v161 + 388) = v183;
LABEL_206:
      v184 = *(_DWORD *)(v162 + v161 + 4);
      *(_DWORD *)(v162 + v161 + 384) = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v184, *(_QWORD *)(*((_QWORD *)this + 386) + 32LL));
      ++*((_DWORD *)this + 740);
      goto LABEL_207;
    }
    v165 = v164 - 1;
    if ( !v165 )
    {
      v174 = v241;
      goto LABEL_194;
    }
    v166 = v165 - 1;
    if ( !v166 )
    {
      v174 = v240;
LABEL_194:
      v170 = *(_DWORD *)(v162 + v161 + 4);
      v172 = 10 * v174;
      v171 = this;
      goto LABEL_186;
    }
    v167 = v166 - 1;
    if ( v167 )
    {
      v168 = v167 - 1;
      if ( v168 )
      {
        v169 = v168 - 2;
        if ( v169 )
        {
          if ( v169 == 1 )
          {
            v198 = 1;
            if ( (*(_DWORD *)(v162 + v161 + 216) & 0x10) != 0 )
            {
              *(_BYTE *)(v162 + v161 + 360) = 1;
              *(_BYTE *)(v162 + v161 + 356) = 0;
              *(_DWORD *)(v162 + v161 + 344) = 1;
            }
          }
          else
          {
            v170 = *(_DWORD *)(v162 + v161 + 4);
            v171 = this;
            if ( v210 == -1 )
              v172 = -1LL;
            else
              v172 = 10LL * v210;
LABEL_186:
            DXGADAPTER::SetPowerComponentLatencyCB(v171, v170, v172);
          }
        }
      }
    }
    else
    {
      v173 = (DXGADAPTER **)*((_QWORD *)this + 414);
      if ( *v173 != (DXGADAPTER *)((char *)this + 3304) )
        goto LABEL_228;
      *(_QWORD *)v163 = (char *)this + 3304;
      *((_QWORD *)v163 + 1) = v173;
      *v173 = v163;
      *((_QWORD *)this + 414) = v163;
      if ( (*(_DWORD *)(v162 + v161 + 216) & 0x10) != 0 )
        *(_BYTE *)(v162 + v161 + 360) = 1;
    }
LABEL_207:
    if ( v211 == -1 )
      v185 = -1LL;
    else
      v185 = 10000LL * v211;
    DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v162 + v161 + 4), v185);
    KeInitializeSpinLock((PKSPIN_LOCK)(v162 + v161 + 504));
    if ( *(_DWORD *)(v162 + v161 + 8) <= 1u || (v186 = *(_QWORD *)(v162 + v161 + 48), v186 == -1) )
    {
      v187 = *((_QWORD *)this + 418);
    }
    else
    {
      v187 = *((_QWORD *)this + 418);
      if ( v186 > v187 )
        v187 = *(_QWORD *)(v162 + v161 + 48);
    }
    ++v160;
    *(_QWORD *)(v162 + v161 + 496) = v187;
    if ( v160 < v7 )
      continue;
    break;
  }
  DXGADAPTER::UpdateLatencyTolerances(this);
  PoFxSetDeviceIdleTimeout(*v117, 10LL * v242);
  if ( *((_DWORD *)this + 81) == 1297040209 && *((_DWORD *)this + 582) == 4608 )
  {
    KeInitializeEvent((PRKEVENT)((char *)this + 3488), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3512), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3536), SynchronizationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)this + 445);
    *((_QWORD *)this + 448) = (char *)this + 3576;
    *((_QWORD *)this + 447) = (char *)this + 3576;
    InitializeSListHead((PSLIST_HEADER)this + 225);
    v189 = (struct _SLIST_ENTRY *)((char *)this + 3632);
    v190 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 225, v189);
      v189 += 2;
      --v190;
    }
    while ( v190 );
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v191 = PsCreateSystemThread(
             (PHANDLE)this + 452,
             0x1FFFFFu,
             &ObjectAttributes,
             0LL,
             0LL,
             DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
             this);
    v6 = v191;
    if ( v191 < 0 )
    {
      v78 = WdLogNewEntry5_WdError(v193, v192);
      *(_QWORD *)(v78 + 24) = v6;
      *(_QWORD *)(v78 + 32) = 8LL;
      goto LABEL_139;
    }
  }
  LOBYTE(v188) = v198;
  v194 = DpiEnablePowerManagement(*((_QWORD *)this + 27), *v117, v188);
  v6 = v194;
  if ( v194 >= 0 )
  {
    operator delete[](v35);
    return 0LL;
  }
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  v112 = WdLogNewEntry5_WdError(v196, v195);
  *(_QWORD *)(v112 + 32) = 9LL;
LABEL_224:
  *(_QWORD *)(v112 + 24) = v6;
  WdLogEvent5_WdError(v112);
LABEL_225:
  operator delete[](v35);
LABEL_226:
  if ( *((_QWORD *)this + 351) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 351) = 0LL;
  }
  return (unsigned int)v6;
}
