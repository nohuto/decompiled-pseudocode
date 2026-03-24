/*
 * XREFs of ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017BCA8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01845A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 */

void __fastcall DXGADAPTER::ReadConfig(DXGADAPTER *this, struct _DXGK_ADAPTER_CAPS *a2)
{
  bool v4; // zf
  bool v5; // al
  bool v6; // al
  bool v7; // al
  bool v8; // al
  bool v9; // al
  bool v10; // al
  bool v11; // al
  bool v12; // al
  char v13; // al
  bool v14; // al
  char v15; // al
  bool v16; // cf
  int v17; // eax
  bool v18; // al
  char v19; // al
  char v20; // dl
  int v21; // r8d
  int v22; // r9d
  char v23; // al
  char v24; // al
  char v25; // cl
  char v26; // al
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+54h] [rbp-ACh] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  int v38; // [rsp+5Ch] [rbp-A4h] BYREF
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+64h] [rbp-9Ch] BYREF
  int v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+6Ch] [rbp-94h] BYREF
  int v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+74h] [rbp-8Ch] BYREF
  int v45; // [rsp+78h] [rbp-88h] BYREF
  int v46; // [rsp+7Ch] [rbp-84h] BYREF
  int v47; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+84h] [rbp-7Ch] BYREF
  int v49; // [rsp+88h] [rbp-78h] BYREF
  int v50; // [rsp+8Ch] [rbp-74h] BYREF
  int v51; // [rsp+90h] [rbp-70h] BYREF
  int v52; // [rsp+94h] [rbp-6Ch] BYREF
  int v53; // [rsp+98h] [rbp-68h] BYREF
  int v54; // [rsp+9Ch] [rbp-64h] BYREF
  int v55; // [rsp+A0h] [rbp-60h] BYREF
  int v56; // [rsp+A4h] [rbp-5Ch] BYREF
  int v57; // [rsp+A8h] [rbp-58h] BYREF
  int v58; // [rsp+ACh] [rbp-54h] BYREF
  int v59; // [rsp+B0h] [rbp-50h] BYREF
  int v60; // [rsp+B4h] [rbp-4Ch] BYREF
  int v61; // [rsp+B8h] [rbp-48h] BYREF
  int v62; // [rsp+BCh] [rbp-44h] BYREF
  int v63; // [rsp+C0h] [rbp-40h] BYREF
  int v64; // [rsp+C4h] [rbp-3Ch] BYREF
  int v65; // [rsp+C8h] [rbp-38h] BYREF
  int v66; // [rsp+CCh] [rbp-34h] BYREF
  int v67; // [rsp+D0h] [rbp-30h] BYREF
  int v68; // [rsp+D4h] [rbp-2Ch] BYREF
  int v69; // [rsp+D8h] [rbp-28h] BYREF
  int v70; // [rsp+DCh] [rbp-24h] BYREF
  int v71; // [rsp+E0h] [rbp-20h] BYREF
  int v72; // [rsp+E4h] [rbp-1Ch] BYREF
  int v73; // [rsp+E8h] [rbp-18h] BYREF
  int v74; // [rsp+ECh] [rbp-14h] BYREF
  int v75; // [rsp+F0h] [rbp-10h] BYREF
  int v76; // [rsp+F4h] [rbp-Ch] BYREF
  int v77; // [rsp+F8h] [rbp-8h] BYREF
  int v78; // [rsp+FCh] [rbp-4h] BYREF
  int v79; // [rsp+100h] [rbp+0h] BYREF
  int v80; // [rsp+104h] [rbp+4h] BYREF
  int v81; // [rsp+108h] [rbp+8h] BYREF
  int v82; // [rsp+10Ch] [rbp+Ch] BYREF
  int v83; // [rsp+110h] [rbp+10h] BYREF
  int v84; // [rsp+114h] [rbp+14h] BYREF
  int v85; // [rsp+118h] [rbp+18h] BYREF
  int v86; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v87; // [rsp+120h] [rbp+20h] BYREF
  int v88; // [rsp+124h] [rbp+24h] BYREF
  int v89; // [rsp+128h] [rbp+28h] BYREF
  int v90; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v91; // [rsp+130h] [rbp+30h] BYREF
  int v92; // [rsp+134h] [rbp+34h] BYREF
  int v93; // [rsp+138h] [rbp+38h] BYREF
  int v94; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v95; // [rsp+140h] [rbp+40h] BYREF
  int v96; // [rsp+144h] [rbp+44h] BYREF
  int v97; // [rsp+148h] [rbp+48h] BYREF
  int v98; // [rsp+14Ch] [rbp+4Ch] BYREF
  int v99; // [rsp+150h] [rbp+50h] BYREF
  int v100; // [rsp+154h] [rbp+54h] BYREF
  int v101; // [rsp+158h] [rbp+58h] BYREF
  int v102; // [rsp+15Ch] [rbp+5Ch] BYREF
  __int64 v103; // [rsp+160h] [rbp+60h] BYREF
  __int64 v104; // [rsp+168h] [rbp+68h] BYREF
  __int64 v105; // [rsp+170h] [rbp+70h]
  __int64 v106; // [rsp+180h] [rbp+80h] BYREF
  int v107; // [rsp+188h] [rbp+88h]
  const wchar_t *v108; // [rsp+190h] [rbp+90h]
  int *v109; // [rsp+198h] [rbp+98h]
  int v110; // [rsp+1A0h] [rbp+A0h]
  int *v111; // [rsp+1A8h] [rbp+A8h]
  int v112; // [rsp+1B0h] [rbp+B0h]
  __int64 v113; // [rsp+1B8h] [rbp+B8h]
  int v114; // [rsp+1C0h] [rbp+C0h]
  const wchar_t *v115; // [rsp+1C8h] [rbp+C8h]
  int *v116; // [rsp+1D0h] [rbp+D0h]
  int v117; // [rsp+1D8h] [rbp+D8h]
  int *v118; // [rsp+1E0h] [rbp+E0h]
  int v119; // [rsp+1E8h] [rbp+E8h]
  __int64 v120; // [rsp+1F0h] [rbp+F0h]
  int v121; // [rsp+1F8h] [rbp+F8h]
  const wchar_t *v122; // [rsp+200h] [rbp+100h]
  int *v123; // [rsp+208h] [rbp+108h]
  int v124; // [rsp+210h] [rbp+110h]
  int *v125; // [rsp+218h] [rbp+118h]
  int v126; // [rsp+220h] [rbp+120h]
  __int64 v127; // [rsp+228h] [rbp+128h]
  int v128; // [rsp+230h] [rbp+130h]
  const wchar_t *v129; // [rsp+238h] [rbp+138h]
  __int64 *v130; // [rsp+240h] [rbp+140h]
  int v131; // [rsp+248h] [rbp+148h]
  __int64 *v132; // [rsp+250h] [rbp+150h]
  int v133; // [rsp+258h] [rbp+158h]
  __int64 v134; // [rsp+260h] [rbp+160h]
  int v135; // [rsp+268h] [rbp+168h]
  const wchar_t *v136; // [rsp+270h] [rbp+170h]
  int *v137; // [rsp+278h] [rbp+178h]
  int v138; // [rsp+280h] [rbp+180h]
  int *v139; // [rsp+288h] [rbp+188h]
  int v140; // [rsp+290h] [rbp+190h]
  __int64 v141; // [rsp+298h] [rbp+198h]
  int v142; // [rsp+2A0h] [rbp+1A0h]
  const wchar_t *v143; // [rsp+2A8h] [rbp+1A8h]
  int *v144; // [rsp+2B0h] [rbp+1B0h]
  int v145; // [rsp+2B8h] [rbp+1B8h]
  int *v146; // [rsp+2C0h] [rbp+1C0h]
  int v147; // [rsp+2C8h] [rbp+1C8h]
  __int64 v148; // [rsp+2D0h] [rbp+1D0h]
  int v149; // [rsp+2D8h] [rbp+1D8h]
  const wchar_t *v150; // [rsp+2E0h] [rbp+1E0h]
  int *v151; // [rsp+2E8h] [rbp+1E8h]
  int v152; // [rsp+2F0h] [rbp+1F0h]
  int *v153; // [rsp+2F8h] [rbp+1F8h]
  int v154; // [rsp+300h] [rbp+200h]
  __int64 v155; // [rsp+308h] [rbp+208h]
  int v156; // [rsp+310h] [rbp+210h]
  const wchar_t *v157; // [rsp+318h] [rbp+218h]
  int *v158; // [rsp+320h] [rbp+220h]
  int v159; // [rsp+328h] [rbp+228h]
  int *v160; // [rsp+330h] [rbp+230h]
  int v161; // [rsp+338h] [rbp+238h]
  __int64 v162; // [rsp+340h] [rbp+240h]
  int v163; // [rsp+348h] [rbp+248h]
  const wchar_t *v164; // [rsp+350h] [rbp+250h]
  int *v165; // [rsp+358h] [rbp+258h]
  int v166; // [rsp+360h] [rbp+260h]
  int *v167; // [rsp+368h] [rbp+268h]
  int v168; // [rsp+370h] [rbp+270h]
  __int64 v169; // [rsp+378h] [rbp+278h]
  int v170; // [rsp+380h] [rbp+280h]
  const wchar_t *v171; // [rsp+388h] [rbp+288h]
  int *v172; // [rsp+390h] [rbp+290h]
  int v173; // [rsp+398h] [rbp+298h]
  int *v174; // [rsp+3A0h] [rbp+2A0h]
  int v175; // [rsp+3A8h] [rbp+2A8h]
  __int64 v176; // [rsp+3B0h] [rbp+2B0h]
  int v177; // [rsp+3B8h] [rbp+2B8h]
  const wchar_t *v178; // [rsp+3C0h] [rbp+2C0h]
  int *v179; // [rsp+3C8h] [rbp+2C8h]
  int v180; // [rsp+3D0h] [rbp+2D0h]
  int *v181; // [rsp+3D8h] [rbp+2D8h]
  int v182; // [rsp+3E0h] [rbp+2E0h]
  __int64 v183; // [rsp+3E8h] [rbp+2E8h]
  int v184; // [rsp+3F0h] [rbp+2F0h]
  const wchar_t *v185; // [rsp+3F8h] [rbp+2F8h]
  int *v186; // [rsp+400h] [rbp+300h]
  int v187; // [rsp+408h] [rbp+308h]
  int *v188; // [rsp+410h] [rbp+310h]
  int v189; // [rsp+418h] [rbp+318h]
  __int64 v190; // [rsp+420h] [rbp+320h]
  int v191; // [rsp+428h] [rbp+328h]
  const wchar_t *v192; // [rsp+430h] [rbp+330h]
  int *v193; // [rsp+438h] [rbp+338h]
  int v194; // [rsp+440h] [rbp+340h]
  int *v195; // [rsp+448h] [rbp+348h]
  int v196; // [rsp+450h] [rbp+350h]
  __int64 v197; // [rsp+458h] [rbp+358h]
  int v198; // [rsp+460h] [rbp+360h]
  const wchar_t *v199; // [rsp+468h] [rbp+368h]
  int *v200; // [rsp+470h] [rbp+370h]
  int v201; // [rsp+478h] [rbp+378h]
  int *v202; // [rsp+480h] [rbp+380h]
  int v203; // [rsp+488h] [rbp+388h]
  __int64 v204; // [rsp+490h] [rbp+390h]
  int v205; // [rsp+498h] [rbp+398h]
  const wchar_t *v206; // [rsp+4A0h] [rbp+3A0h]
  int *v207; // [rsp+4A8h] [rbp+3A8h]
  int v208; // [rsp+4B0h] [rbp+3B0h]
  int *v209; // [rsp+4B8h] [rbp+3B8h]
  int v210; // [rsp+4C0h] [rbp+3C0h]
  __int64 v211; // [rsp+4C8h] [rbp+3C8h]
  int v212; // [rsp+4D0h] [rbp+3D0h]
  const wchar_t *v213; // [rsp+4D8h] [rbp+3D8h]
  int *v214; // [rsp+4E0h] [rbp+3E0h]
  int v215; // [rsp+4E8h] [rbp+3E8h]
  int *v216; // [rsp+4F0h] [rbp+3F0h]
  int v217; // [rsp+4F8h] [rbp+3F8h]
  __int64 v218; // [rsp+500h] [rbp+400h]
  int v219; // [rsp+508h] [rbp+408h]
  const wchar_t *v220; // [rsp+510h] [rbp+410h]
  int *v221; // [rsp+518h] [rbp+418h]
  int v222; // [rsp+520h] [rbp+420h]
  int *v223; // [rsp+528h] [rbp+428h]
  int v224; // [rsp+530h] [rbp+430h]
  __int64 v225; // [rsp+538h] [rbp+438h]
  int v226; // [rsp+540h] [rbp+440h]
  const wchar_t *v227; // [rsp+548h] [rbp+448h]
  int *v228; // [rsp+550h] [rbp+450h]
  int v229; // [rsp+558h] [rbp+458h]
  int *v230; // [rsp+560h] [rbp+460h]
  int v231; // [rsp+568h] [rbp+468h]
  __int64 v232; // [rsp+570h] [rbp+470h]
  int v233; // [rsp+578h] [rbp+478h]
  const wchar_t *v234; // [rsp+580h] [rbp+480h]
  int *v235; // [rsp+588h] [rbp+488h]
  int v236; // [rsp+590h] [rbp+490h]
  int *v237; // [rsp+598h] [rbp+498h]
  int v238; // [rsp+5A0h] [rbp+4A0h]
  __int64 v239; // [rsp+5A8h] [rbp+4A8h]
  int v240; // [rsp+5B0h] [rbp+4B0h]
  const wchar_t *v241; // [rsp+5B8h] [rbp+4B8h]
  int *v242; // [rsp+5C0h] [rbp+4C0h]
  int v243; // [rsp+5C8h] [rbp+4C8h]
  int *v244; // [rsp+5D0h] [rbp+4D0h]
  int v245; // [rsp+5D8h] [rbp+4D8h]
  __int64 v246; // [rsp+5E0h] [rbp+4E0h]
  int v247; // [rsp+5E8h] [rbp+4E8h]
  const wchar_t *v248; // [rsp+5F0h] [rbp+4F0h]
  int *v249; // [rsp+5F8h] [rbp+4F8h]
  int v250; // [rsp+600h] [rbp+500h]
  int *v251; // [rsp+608h] [rbp+508h]
  int v252; // [rsp+610h] [rbp+510h]
  __int64 v253; // [rsp+618h] [rbp+518h]
  int v254; // [rsp+620h] [rbp+520h]
  const wchar_t *v255; // [rsp+628h] [rbp+528h]
  int *v256; // [rsp+630h] [rbp+530h]
  int v257; // [rsp+638h] [rbp+538h]
  int *v258; // [rsp+640h] [rbp+540h]
  int v259; // [rsp+648h] [rbp+548h]
  __int64 v260; // [rsp+650h] [rbp+550h]
  int v261; // [rsp+658h] [rbp+558h]
  const wchar_t *v262; // [rsp+660h] [rbp+560h]
  int *v263; // [rsp+668h] [rbp+568h]
  int v264; // [rsp+670h] [rbp+570h]
  int *v265; // [rsp+678h] [rbp+578h]
  int v266; // [rsp+680h] [rbp+580h]
  __int64 v267; // [rsp+688h] [rbp+588h]
  int v268; // [rsp+690h] [rbp+590h]
  const wchar_t *v269; // [rsp+698h] [rbp+598h]
  int *v270; // [rsp+6A0h] [rbp+5A0h]
  int v271; // [rsp+6A8h] [rbp+5A8h]
  int *v272; // [rsp+6B0h] [rbp+5B0h]
  int v273; // [rsp+6B8h] [rbp+5B8h]
  __int64 v274; // [rsp+6C0h] [rbp+5C0h]
  int v275; // [rsp+6C8h] [rbp+5C8h]
  const wchar_t *v276; // [rsp+6D0h] [rbp+5D0h]
  int *v277; // [rsp+6D8h] [rbp+5D8h]
  int v278; // [rsp+6E0h] [rbp+5E0h]
  int *v279; // [rsp+6E8h] [rbp+5E8h]
  int v280; // [rsp+6F0h] [rbp+5F0h]
  __int64 v281; // [rsp+6F8h] [rbp+5F8h]
  int v282; // [rsp+700h] [rbp+600h]
  const wchar_t *v283; // [rsp+708h] [rbp+608h]
  int *v284; // [rsp+710h] [rbp+610h]
  int v285; // [rsp+718h] [rbp+618h]
  int *v286; // [rsp+720h] [rbp+620h]
  int v287; // [rsp+728h] [rbp+628h]
  __int64 v288; // [rsp+730h] [rbp+630h]
  int v289; // [rsp+738h] [rbp+638h]
  const wchar_t *v290; // [rsp+740h] [rbp+640h]
  int *v291; // [rsp+748h] [rbp+648h]
  int v292; // [rsp+750h] [rbp+650h]
  int *v293; // [rsp+758h] [rbp+658h]
  int v294; // [rsp+760h] [rbp+660h]
  __int64 v295; // [rsp+768h] [rbp+668h]
  int v296; // [rsp+770h] [rbp+670h]
  const wchar_t *v297; // [rsp+778h] [rbp+678h]
  int *v298; // [rsp+780h] [rbp+680h]
  int v299; // [rsp+788h] [rbp+688h]
  int *v300; // [rsp+790h] [rbp+690h]
  int v301; // [rsp+798h] [rbp+698h]
  __int64 v302; // [rsp+7A0h] [rbp+6A0h]
  int v303; // [rsp+7A8h] [rbp+6A8h]
  const wchar_t *v304; // [rsp+7B0h] [rbp+6B0h]
  int *v305; // [rsp+7B8h] [rbp+6B8h]
  int v306; // [rsp+7C0h] [rbp+6C0h]
  int *v307; // [rsp+7C8h] [rbp+6C8h]
  int v308; // [rsp+7D0h] [rbp+6D0h]
  __int64 v309; // [rsp+7D8h] [rbp+6D8h]
  int v310; // [rsp+7E0h] [rbp+6E0h]
  const wchar_t *v311; // [rsp+7E8h] [rbp+6E8h]
  int *v312; // [rsp+7F0h] [rbp+6F0h]
  int v313; // [rsp+7F8h] [rbp+6F8h]
  int *v314; // [rsp+800h] [rbp+700h]
  int v315; // [rsp+808h] [rbp+708h]
  __int64 v316; // [rsp+810h] [rbp+710h]
  int v317; // [rsp+818h] [rbp+718h]
  const wchar_t *v318; // [rsp+820h] [rbp+720h]
  int *v319; // [rsp+828h] [rbp+728h]
  int v320; // [rsp+830h] [rbp+730h]
  int *v321; // [rsp+838h] [rbp+738h]
  int v322; // [rsp+840h] [rbp+740h]
  __int64 v323; // [rsp+848h] [rbp+748h]
  int v324; // [rsp+850h] [rbp+750h]
  const wchar_t *v325; // [rsp+858h] [rbp+758h]
  int *v326; // [rsp+860h] [rbp+760h]
  int v327; // [rsp+868h] [rbp+768h]
  int *v328; // [rsp+870h] [rbp+770h]
  int v329; // [rsp+878h] [rbp+778h]
  __int64 v330; // [rsp+880h] [rbp+780h]
  int v331; // [rsp+888h] [rbp+788h]
  const wchar_t *v332; // [rsp+890h] [rbp+790h]
  int *v333; // [rsp+898h] [rbp+798h]
  int v334; // [rsp+8A0h] [rbp+7A0h]
  int *v335; // [rsp+8A8h] [rbp+7A8h]
  int v336; // [rsp+8B0h] [rbp+7B0h]
  __int64 v337; // [rsp+8B8h] [rbp+7B8h]
  int v338; // [rsp+8C0h] [rbp+7C0h]
  const wchar_t *v339; // [rsp+8C8h] [rbp+7C8h]
  unsigned int *v340; // [rsp+8D0h] [rbp+7D0h]
  int v341; // [rsp+8D8h] [rbp+7D8h]
  int *v342; // [rsp+8E0h] [rbp+7E0h]
  int v343; // [rsp+8E8h] [rbp+7E8h]
  __int64 v344; // [rsp+8F0h] [rbp+7F0h]
  int v345; // [rsp+8F8h] [rbp+7F8h]
  const wchar_t *v346; // [rsp+900h] [rbp+800h]
  int *v347; // [rsp+908h] [rbp+808h]
  int v348; // [rsp+910h] [rbp+810h]
  int *v349; // [rsp+918h] [rbp+818h]
  int v350; // [rsp+920h] [rbp+820h]
  __int64 v351; // [rsp+928h] [rbp+828h]
  int v352; // [rsp+930h] [rbp+830h]
  const wchar_t *v353; // [rsp+938h] [rbp+838h]
  int *v354; // [rsp+940h] [rbp+840h]
  int v355; // [rsp+948h] [rbp+848h]
  int *v356; // [rsp+950h] [rbp+850h]
  int v357; // [rsp+958h] [rbp+858h]
  __int64 v358; // [rsp+960h] [rbp+860h]
  int v359; // [rsp+968h] [rbp+868h]
  const wchar_t *v360; // [rsp+970h] [rbp+870h]
  int *v361; // [rsp+978h] [rbp+878h]
  int v362; // [rsp+980h] [rbp+880h]
  int *v363; // [rsp+988h] [rbp+888h]
  int v364; // [rsp+990h] [rbp+890h]
  __int64 v365; // [rsp+998h] [rbp+898h]
  int v366; // [rsp+9A0h] [rbp+8A0h]
  const wchar_t *v367; // [rsp+9A8h] [rbp+8A8h]
  int *v368; // [rsp+9B0h] [rbp+8B0h]
  int v369; // [rsp+9B8h] [rbp+8B8h]
  int *v370; // [rsp+9C0h] [rbp+8C0h]
  int v371; // [rsp+9C8h] [rbp+8C8h]
  __int64 v372; // [rsp+9D0h] [rbp+8D0h]
  int v373; // [rsp+9D8h] [rbp+8D8h]
  const wchar_t *v374; // [rsp+9E0h] [rbp+8E0h]
  int *v375; // [rsp+9E8h] [rbp+8E8h]
  int v376; // [rsp+9F0h] [rbp+8F0h]
  int *v377; // [rsp+9F8h] [rbp+8F8h]
  int v378; // [rsp+A00h] [rbp+900h]
  __int64 v379; // [rsp+A08h] [rbp+908h]
  int v380; // [rsp+A10h] [rbp+910h]
  const wchar_t *v381; // [rsp+A18h] [rbp+918h]
  int *v382; // [rsp+A20h] [rbp+920h]
  int v383; // [rsp+A28h] [rbp+928h]
  int *v384; // [rsp+A30h] [rbp+930h]
  int v385; // [rsp+A38h] [rbp+938h]
  __int64 v386; // [rsp+A40h] [rbp+940h]
  int v387; // [rsp+A48h] [rbp+948h]
  const wchar_t *v388; // [rsp+A50h] [rbp+950h]
  int *v389; // [rsp+A58h] [rbp+958h]
  int v390; // [rsp+A60h] [rbp+960h]
  int *v391; // [rsp+A68h] [rbp+968h]
  int v392; // [rsp+A70h] [rbp+970h]
  __int64 v393; // [rsp+A78h] [rbp+978h]
  int v394; // [rsp+A80h] [rbp+980h]
  __int128 v395; // [rsp+A88h] [rbp+988h]
  __int128 v396; // [rsp+A98h] [rbp+998h]
  __int64 v397; // [rsp+AA8h] [rbp+9A8h]

  v104 = 16LL;
  v65 = 0;
  v103 = 1395864371LL;
  v105 = 1395864371LL;
  v54 = 0;
  v66 = 0;
  v71 = 7000;
  v40 = 7000;
  v97 = 30000;
  v48 = 30000;
  v98 = 5000;
  v49 = 5000;
  v99 = 500;
  v55 = 0;
  v70 = 0;
  v56 = 0;
  v68 = 0;
  v34 = 0;
  v30 = 0;
  v27 = 0;
  v31 = 0;
  v28 = 0;
  v67 = 1;
  v32 = 1;
  v69 = 0;
  v33 = 0;
  v72 = 0;
  v35 = 0;
  v73 = 0;
  v36 = 0;
  v74 = 0;
  v37 = 0;
  v75 = 0;
  v38 = 0;
  v76 = 0;
  v39 = 0;
  v77 = 1;
  v41 = 1;
  v78 = 0;
  v62 = 0;
  v79 = 0;
  v42 = 0;
  v81 = 0;
  v43 = 0;
  v80 = 0;
  v44 = 0;
  v82 = 0;
  v63 = 0;
  v83 = 1;
  v57 = 1;
  v84 = 0;
  v58 = 0;
  v86 = 0;
  v85 = 0;
  v87 = 0;
  v60 = 0;
  v89 = 0;
  v88 = 0;
  v90 = 0;
  v61 = 0;
  v91 = 0;
  v59 = 0;
  v92 = 0;
  v45 = 0;
  v93 = 0;
  v46 = 0;
  v94 = 0;
  v64 = 0;
  v95 = 1;
  v29 = 1;
  v96 = 0;
  v47 = 0;
  v50 = 500;
  v100 = 0;
  v51 = 0;
  v101 = 0;
  v108 = L"ForceDirectFlip";
  v53 = 0;
  v109 = &v54;
  v102 = 2;
  v111 = &v65;
  v115 = L"DisableOverlays";
  v116 = &v55;
  v118 = &v66;
  v122 = L"EnableOfferReclaimOnDriver";
  v123 = &v32;
  v125 = &v67;
  v129 = L"LeanMemoryLimit";
  v130 = &v104;
  v132 = &v103;
  v136 = L"ForceEnableDxgMms2";
  v137 = &v34;
  v139 = &v68;
  v143 = L"ContextNoPatchMode";
  v144 = &v33;
  v146 = &v69;
  v151 = &v27;
  v153 = &v30;
  v52 = 2;
  v106 = 0LL;
  v107 = 288;
  v110 = 67108868;
  v112 = 4;
  v113 = 0LL;
  v114 = 288;
  v117 = 67108868;
  v119 = 4;
  v120 = 0LL;
  v121 = 288;
  v124 = 67108868;
  v126 = 4;
  v127 = 0LL;
  v128 = 288;
  v131 = 184549387;
  v133 = 8;
  v134 = 0LL;
  v135 = 288;
  v138 = 67108868;
  v140 = 4;
  v141 = 0LL;
  v142 = 288;
  v145 = 67108868;
  v147 = 4;
  v148 = 0LL;
  v149 = 288;
  v150 = L"ForceToMapGpuVa";
  v152 = 67108868;
  v154 = 4;
  v155 = 0LL;
  v158 = &v28;
  v156 = 288;
  v160 = &v31;
  v164 = L"Force32BitFences";
  v165 = &v56;
  v167 = &v70;
  v171 = L"InitialPagingQueueFenceValue";
  v172 = &v40;
  v174 = &v71;
  v178 = L"ForceInitPagingProcessVaSpace";
  v179 = &v35;
  v181 = &v72;
  v185 = L"DisableGdiContextGpuVa";
  v186 = &v36;
  v188 = &v73;
  v192 = L"DisablePagingContextGpuVa";
  v193 = &v37;
  v195 = &v74;
  v199 = L"DisableMonitoredFenceGpuVa";
  v200 = &v38;
  v202 = &v75;
  v206 = L"ForceExplicitResidencyNotification";
  v207 = &v39;
  v209 = &v76;
  v157 = L"ForceAccessedPhysically";
  v159 = 67108868;
  v161 = 4;
  v162 = 0LL;
  v163 = 288;
  v166 = 67108868;
  v168 = 4;
  v169 = 0LL;
  v170 = 288;
  v173 = 67108868;
  v175 = 4;
  v176 = 0LL;
  v177 = 288;
  v180 = 67108868;
  v182 = 4;
  v183 = 0LL;
  v184 = 288;
  v187 = 67108868;
  v189 = 4;
  v190 = 0LL;
  v191 = 288;
  v194 = 67108868;
  v196 = 4;
  v197 = 0LL;
  v198 = 288;
  v201 = 67108868;
  v203 = 4;
  v204 = 0LL;
  v205 = 288;
  v208 = 67108868;
  v210 = 4;
  v211 = 0LL;
  v212 = 288;
  v214 = &v27;
  v216 = &v30;
  v221 = &v28;
  v223 = &v31;
  v227 = L"DriverManagesResidencyOverride";
  v228 = &v41;
  v230 = &v77;
  v234 = L"GdiPhysicalAdapterIndex";
  v235 = &v62;
  v237 = &v78;
  v241 = L"ForceReplicateGdiContent";
  v242 = &v42;
  v244 = &v79;
  v248 = L"EnableTimedCalls";
  v249 = &v44;
  v251 = &v80;
  v255 = L"CreateGdiPrimaryOnSlaveGpu";
  v256 = &v43;
  v258 = &v81;
  v262 = L"ForceSurpriseRemovalSupport";
  v263 = &v63;
  v265 = &v82;
  v269 = L"EnableDecodeMPO";
  v213 = L"ForceToMapGpuVa";
  v215 = 67108868;
  v217 = 4;
  v218 = 0LL;
  v219 = 288;
  v220 = L"ForceAccessedPhysically";
  v222 = 67108868;
  v224 = 4;
  v225 = 0LL;
  v226 = 288;
  v229 = 67108868;
  v231 = 4;
  v232 = 0LL;
  v233 = 288;
  v236 = 67108868;
  v238 = 4;
  v239 = 0LL;
  v240 = 288;
  v243 = 67108868;
  v245 = 4;
  v246 = 0LL;
  v247 = 288;
  v250 = 67108868;
  v252 = 4;
  v253 = 0LL;
  v254 = 288;
  v257 = 67108868;
  v259 = 4;
  v260 = 0LL;
  v261 = 288;
  v264 = 67108868;
  v266 = 4;
  v267 = 0LL;
  v268 = 288;
  v271 = 67108868;
  v270 = &v57;
  v272 = &v83;
  v276 = L"DisableBadDriverCheckForHwProtection";
  v277 = &v58;
  v279 = &v84;
  v283 = L"ForceSecondaryMPOSupport";
  v284 = &v85;
  v286 = &v86;
  v290 = L"ForceSecondaryIFlipSupport";
  v291 = &v60;
  v293 = &v87;
  v297 = L"EnablePanelFitterSupport";
  v298 = &v88;
  v300 = &v89;
  v304 = L"EnableMultiPlaneOverlay3DDIs";
  v305 = &v61;
  v307 = &v90;
  v311 = L"DisableSecondaryIFlipSupport";
  v312 = &v59;
  v314 = &v91;
  v318 = L"EnableWDDM23Synchronization";
  v319 = &v45;
  v321 = &v92;
  v325 = L"IoMmuFlags";
  v273 = 4;
  v274 = 0LL;
  v275 = 288;
  v278 = 67108868;
  v280 = 4;
  v281 = 0LL;
  v282 = 288;
  v285 = 67108868;
  v287 = 4;
  v288 = 0LL;
  v289 = 288;
  v292 = 67108868;
  v294 = 4;
  v295 = 0LL;
  v296 = 288;
  v299 = 67108868;
  v301 = 4;
  v302 = 0LL;
  v303 = 288;
  v306 = 67108868;
  v308 = 4;
  v309 = 0LL;
  v310 = 288;
  v313 = 67108868;
  v315 = 4;
  v316 = 0LL;
  v317 = 288;
  v320 = 67108868;
  v322 = 4;
  v323 = 0LL;
  v324 = 288;
  v326 = &v46;
  v328 = &v93;
  v332 = L"DisableMultiSourceMPOCheck";
  v333 = &v64;
  v335 = &v94;
  v339 = L"DriverStoreCopyMode";
  v340 = &v29;
  v342 = &v95;
  v346 = L"ForceVariableRefresh";
  v347 = &v47;
  v349 = &v96;
  v353 = L"DeadlockTimeout";
  v354 = &v48;
  v356 = &v97;
  v360 = L"DeadlockPulse";
  v361 = &v49;
  v363 = &v98;
  v367 = L"DeadlockPulseTolerance";
  v368 = &v50;
  v370 = &v99;
  v374 = L"DisableIndependentVidPnVSync";
  v375 = &v51;
  v377 = &v100;
  v381 = L"NumVirtualFunctions";
  v382 = &v53;
  v327 = 67108868;
  v329 = 4;
  v330 = 0LL;
  v331 = 288;
  v334 = 67108868;
  v336 = 4;
  v337 = 0LL;
  v338 = 288;
  v341 = 67108868;
  v343 = 4;
  v344 = 0LL;
  v345 = 288;
  v348 = 67108868;
  v350 = 4;
  v351 = 0LL;
  v352 = 288;
  v355 = 67108868;
  v357 = 4;
  v358 = 0LL;
  v359 = 288;
  v362 = 67108868;
  v364 = 4;
  v365 = 0LL;
  v366 = 288;
  v369 = 67108868;
  v371 = 4;
  v372 = 0LL;
  v373 = 288;
  v376 = 67108868;
  v378 = 4;
  v379 = 0LL;
  v380 = 288;
  v383 = 67108868;
  v385 = 4;
  v384 = &v101;
  v390 = 67108868;
  v388 = L"CrtcPhaseFrames";
  v392 = 4;
  v389 = &v52;
  v386 = 0LL;
  v391 = &v102;
  v387 = 288;
  v397 = 0LL;
  v393 = 0LL;
  v394 = 0;
  v395 = 0LL;
  v396 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v106, 0LL, 0LL);
  v4 = v34 == 0;
  *((_BYTE *)this + 2613) = v32 != 0;
  *((_DWORD *)this + 656) = v33;
  *((_QWORD *)this + 327) = v105;
  v5 = !v4;
  v4 = v27 == 0;
  *((_BYTE *)this + 2628) = v5;
  v6 = !v4;
  v4 = v28 == 0;
  *((_BYTE *)this + 2629) = v6;
  v7 = !v4;
  v4 = v35 == 0;
  *((_BYTE *)this + 2630) = v7;
  v8 = !v4;
  v4 = v36 == 0;
  *((_BYTE *)this + 2632) = v8;
  v9 = !v4;
  v4 = v37 == 0;
  *((_BYTE *)this + 2633) = v9;
  v10 = !v4;
  v4 = v38 == 0;
  *((_BYTE *)this + 2634) = v10;
  v11 = !v4;
  v4 = v39 == 0;
  *((_BYTE *)this + 2635) = v11;
  v12 = !v4;
  v4 = v41 == 0;
  *((_BYTE *)this + 2631) = v12;
  *((_DWORD *)this + 667) = v40;
  *((_BYTE *)this + 2636) = !v4;
  if ( v42 || (v13 = 0, (*((_DWORD *)this + 515) & 0x100) != 0) )
    v13 = 1;
  v4 = v43 == 0;
  *((_BYTE *)this + 2614) = v13;
  v14 = !v4;
  v4 = v44 == 0;
  *((_BYTE *)this + 2615) = v14;
  DXGADAPTER::Config = !v4 | DXGADAPTER::Config & 0xFE;
  if ( !v45 || (v15 = 1, *((int *)this + 582) < 8704) )
    v15 = 0;
  v16 = v29 < 2;
  *((_BYTE *)this + 2645) = v15;
  *((_DWORD *)this + 664) = v46;
  v17 = 2;
  if ( v16 )
    v17 = v29;
  v4 = v47 == 0;
  *((_DWORD *)this + 665) = v17;
  v18 = !v4;
  v4 = v51 == 0;
  *((_BYTE *)this + 2664) = v18;
  *((_DWORD *)this + 1116) = v48;
  *((_DWORD *)this + 1117) = v49;
  *((_DWORD *)this + 1118) = v50;
  *((_BYTE *)this + 2796) = !v4;
  *((_DWORD *)this + 998) = v52;
  if ( v53 )
    *((_DWORD *)this + 1090) = v53;
  if ( v54 )
    *((_BYTE *)this + 2531) = 1;
  if ( v55 )
    *((_BYTE *)this + 2532) = 0;
  if ( v56 )
    *((_DWORD *)this + 514) |= 0x20u;
  if ( *((_BYTE *)this + 2532) )
  {
    if ( *((_BYTE *)this + 2610) )
      *((_DWORD *)this + 634) = 2;
  }
  else
  {
    *((_DWORD *)this + 634) = 1;
  }
  v19 = *((_BYTE *)this + 2613);
  if ( *((int *)this + 582) < 4608 )
    v19 = 0;
  *((_BYTE *)this + 2613) = v19;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 2636) = 0;
  if ( !v57 || (v23 = 1, !v20) )
    v23 = 0;
  v4 = v58 == 0;
  *((_BYTE *)this + 2637) = v23;
  *((_BYTE *)this + 2640) = 0;
  *((_BYTE *)this + 2638) = !v4;
  if ( !v59 && (*((_DWORD *)this + 513) & 0x10) != 0 )
  {
    if ( v21 >= 8448 )
    {
      *((_BYTE *)this + 2640) = 1;
    }
    else if ( v21 >= 0x2000 )
    {
      *((_BYTE *)this + 2640) = v60 != 0;
    }
  }
  v4 = *((_QWORD *)this + 68) == 0LL;
  *((_BYTE *)this + 2642) = 0;
  *((_BYTE *)this + 2649) = !v4;
  v24 = 0;
  if ( *((_QWORD *)this + 117) )
  {
    if ( v21 >= v22 || v21 >= 8448 && ((*((_DWORD *)this + 87) & 0x200) != 0 || v61) )
      v24 = 1;
    *((_BYTE *)this + 2642) = v24;
  }
  v25 = v20;
  if ( v20 && !v24 && !*((_QWORD *)this + 97) && !*((_QWORD *)this + 113) )
  {
    *((_BYTE *)this + 2532) = 0;
    v25 = 0;
  }
  *((_BYTE *)this + 2643) = 0;
  if ( !v24 )
    goto LABEL_29;
  if ( v21 >= v22 && (*((_QWORD *)this + 144) || *((_QWORD *)this + 145)) )
    *((_BYTE *)this + 2643) = 1;
  if ( !*((_DWORD *)this + 641) )
LABEL_29:
    *((_DWORD *)this + 641) = 1;
  *((_BYTE *)this + 2641) = v24;
  if ( !v24 || (v26 = 1, !v25) )
    v26 = 0;
  *((_BYTE *)this + 2639) = v26;
  if ( *((_DWORD *)this + 70) > 1u )
    *((_DWORD *)this + 681) = v62;
  if ( v63 )
    *(_BYTE *)a2 |= 0x10u;
  *((_BYTE *)this + 2644) = v64 != 0;
}
