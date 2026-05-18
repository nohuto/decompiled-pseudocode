/*
 * XREFs of sub_1800DD8FC @ 0x1800DD8FC
 * Callers:
 *     sub_180076870 @ 0x180076870 (sub_180076870.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800219C4 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     _alloca_probe @ 0x18011E680 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=355
__int64 __fastcall sub_1800DD8FC(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // r8
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  __int64 v78; // r8
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // r8
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // r8
  __int64 v89; // r8
  __int64 v90; // r8
  __int64 v91; // r8
  __int64 v92; // r8
  __int64 v93; // r8
  __int64 v94; // r8
  __int64 v95; // r8
  __int64 v96; // r8
  __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // r8
  __int64 v100; // r8
  __int64 v101; // r8
  __int64 v102; // r8
  __int64 v103; // r8
  __int64 v104; // r8
  __int64 v105; // r8
  __int64 v106; // r8
  __int64 v107; // r8
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // r8
  __int64 v111; // r8
  __int64 v112; // r8
  __int64 v113; // r8
  __int64 v114; // r8
  __int64 v115; // r8
  __int64 v116; // r8
  __int64 v117; // r8
  __int64 v118; // r8
  __int64 v119; // r8
  __int64 v120; // r8
  __int64 v121; // r8
  __int64 v122; // r8
  __int64 v123; // r8
  __int64 v124; // r8
  __int64 v125; // r8
  __int64 v126; // r8
  __int64 v127; // r8
  __int64 v128; // r8
  __int64 v129; // r8
  __int64 v130; // r8
  __int64 v131; // r8
  __int64 v132; // r8
  __int64 v133; // r8
  __int64 v134; // r8
  __int64 v135; // r8
  __int64 v136; // r8
  __int64 v137; // r8
  __int64 v138; // r8
  __int64 v139; // r8
  __int64 v140; // r8
  __int64 v141; // r8
  __int64 v142; // r8
  __int64 v143; // r8
  __int64 v144; // r8
  __int64 v145; // r8
  __int64 v146; // r8
  __int64 v147; // r8
  __int64 v148; // r8
  __int64 v149; // r8
  __int64 v150; // r8
  __int64 v151; // r8
  _QWORD *v152; // rax
  _QWORD *v153; // rax
  __int64 v154; // r8
  __int64 v155; // r8
  __int64 v156; // r8
  __int64 v157; // r8
  __int64 v158; // r8
  __int64 v159; // r8
  __int64 v160; // r8
  __int64 v161; // r8
  __int64 v162; // r8
  __int64 v163; // r8
  __int64 v164; // r8
  __int64 v165; // r8
  __int64 v166; // r8
  __int64 v167; // r8
  __int64 v168; // r8
  __int64 v169; // r8
  __int64 v170; // r8
  __int64 v171; // r8
  __int64 v172; // r8
  __int64 v173; // r8
  __int64 v174; // r8
  __int64 v175; // r8
  __int64 v176; // r8
  __int64 v177; // r8
  __int64 v178; // r8
  __int64 v179; // r8
  __int64 v180; // r8
  __int64 v181; // r8
  __int64 v182; // r8
  __int64 v183; // r8
  __int64 v184; // r8
  __int64 v185; // r8
  __int64 v186; // r8
  __int64 v187; // r8
  __int64 v188; // r8
  __int64 v189; // r8
  __int64 v190; // r8
  __int64 v191; // r8
  __int64 v192; // r8
  __int64 v193; // r8
  __int64 v194; // r8
  __int64 v195; // r8
  __int64 v196; // r8
  __int64 v197; // r8
  __int64 v198; // r8
  __int64 v199; // r8
  __int64 v200; // r8
  __int64 v201; // r8
  __int64 v202; // r8
  __int64 v203; // r8
  __int64 v204; // r8
  __int64 v205; // r8
  __int64 v206; // r8
  __int64 v207; // r8
  __int64 v208; // r8
  __int64 v209; // r8
  __int64 v210; // r8
  __int64 v211; // r8
  __int64 v212; // r8
  __int64 v213; // r8
  __int64 v214; // r8
  __int64 v215; // r8
  __int64 v216; // r8
  __int64 v217; // r8
  __int64 v218; // r8
  __int64 v219; // r8
  __int64 v220; // r8
  __int64 v221; // r8
  __int64 v222; // r8
  __int64 v223; // r8
  __int64 v224; // r8
  __int64 v225; // r8
  __int64 v226; // r8
  __int64 v227; // r8
  __int64 v228; // r8
  __int64 v229; // r8
  __int64 v230; // r8
  __int64 v231; // r8
  __int64 v232; // r8
  __int64 v233; // r8
  __int64 v234; // r8
  __int64 v235; // r8
  __int64 v236; // r8
  __int64 v237; // r8
  __int64 v238; // r8
  __int64 v239; // r8
  __int64 v240; // r8
  __int64 v241; // r8
  __int64 v242; // r8
  __int64 v243; // r8
  __int64 v244; // r8
  __int64 v245; // r8
  __int64 v246; // r8
  __int64 v247; // r8
  __int64 v248; // r8
  __int64 v249; // r8
  __int64 v250; // r8
  __int64 v251; // r8
  __int64 v252; // r8
  __int64 v253; // r8
  __int64 v254; // r8
  __int64 v255; // r8
  __int64 v256; // r8
  __int64 v257; // r8
  __int64 v258; // r8
  __int64 v259; // r8
  __int64 v261[2]; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v262; // [rsp+40h] [rbp-C0h]
  __int64 v263[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A0h]
  __int64 v265[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v266[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v267[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v268[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v269[4]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v270[4]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v271[4]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v272[4]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v273[4]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v274[4]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v275[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v276[4]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v277[4]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v278[4]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v279[4]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v280[4]; // [rsp+258h] [rbp+158h] BYREF
  __int64 v281[4]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v282[4]; // [rsp+298h] [rbp+198h] BYREF
  __int64 v283[4]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v284[4]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v285[4]; // [rsp+2F8h] [rbp+1F8h] BYREF
  __int64 v286[4]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v287[4]; // [rsp+338h] [rbp+238h] BYREF
  __int64 v288[4]; // [rsp+358h] [rbp+258h] BYREF
  __int64 v289[4]; // [rsp+378h] [rbp+278h] BYREF
  __int64 v290[4]; // [rsp+398h] [rbp+298h] BYREF
  __int64 v291[4]; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int64 v292[4]; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v293[4]; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v294[4]; // [rsp+418h] [rbp+318h] BYREF
  __int64 v295[4]; // [rsp+438h] [rbp+338h] BYREF
  __int64 v296[4]; // [rsp+458h] [rbp+358h] BYREF
  __int64 v297[4]; // [rsp+478h] [rbp+378h] BYREF
  __int64 v298[4]; // [rsp+498h] [rbp+398h] BYREF
  __int64 v299[4]; // [rsp+4B8h] [rbp+3B8h] BYREF
  __int64 v300[4]; // [rsp+4D8h] [rbp+3D8h] BYREF
  __int64 v301[4]; // [rsp+4F8h] [rbp+3F8h] BYREF
  __int64 v302[4]; // [rsp+518h] [rbp+418h] BYREF
  __int64 v303[4]; // [rsp+538h] [rbp+438h] BYREF
  __int64 v304[4]; // [rsp+558h] [rbp+458h] BYREF
  __int64 v305[4]; // [rsp+578h] [rbp+478h] BYREF
  __int64 v306[4]; // [rsp+598h] [rbp+498h] BYREF
  __int64 v307[4]; // [rsp+5B8h] [rbp+4B8h] BYREF
  __int64 v308[4]; // [rsp+5D8h] [rbp+4D8h] BYREF
  __int64 v309[4]; // [rsp+5F8h] [rbp+4F8h] BYREF
  __int64 v310[4]; // [rsp+618h] [rbp+518h] BYREF
  __int64 v311[4]; // [rsp+638h] [rbp+538h] BYREF
  __int64 v312[4]; // [rsp+658h] [rbp+558h] BYREF
  __int64 v313[4]; // [rsp+678h] [rbp+578h] BYREF
  __int64 v314[4]; // [rsp+698h] [rbp+598h] BYREF
  __int64 v315[4]; // [rsp+6B8h] [rbp+5B8h] BYREF
  __int64 v316[4]; // [rsp+6D8h] [rbp+5D8h] BYREF
  __int64 v317[4]; // [rsp+6F8h] [rbp+5F8h] BYREF
  __int64 v318[4]; // [rsp+718h] [rbp+618h] BYREF
  __int64 v319[4]; // [rsp+738h] [rbp+638h] BYREF
  __int64 v320[4]; // [rsp+758h] [rbp+658h] BYREF
  __int64 v321[4]; // [rsp+778h] [rbp+678h] BYREF
  __int64 v322[4]; // [rsp+798h] [rbp+698h] BYREF
  __int64 v323[4]; // [rsp+7B8h] [rbp+6B8h] BYREF
  __int64 v324[4]; // [rsp+7D8h] [rbp+6D8h] BYREF
  __int64 v325[4]; // [rsp+7F8h] [rbp+6F8h] BYREF
  __int64 v326[4]; // [rsp+818h] [rbp+718h] BYREF
  __int64 v327[4]; // [rsp+838h] [rbp+738h] BYREF
  __int64 v328[4]; // [rsp+858h] [rbp+758h] BYREF
  __int64 v329[4]; // [rsp+878h] [rbp+778h] BYREF
  __int64 v330[4]; // [rsp+898h] [rbp+798h] BYREF
  __int64 v331[4]; // [rsp+8B8h] [rbp+7B8h] BYREF
  __int64 v332[4]; // [rsp+8D8h] [rbp+7D8h] BYREF
  __int64 v333[4]; // [rsp+8F8h] [rbp+7F8h] BYREF
  __int64 v334[4]; // [rsp+918h] [rbp+818h] BYREF
  __int64 v335[4]; // [rsp+938h] [rbp+838h] BYREF
  __int64 v336[4]; // [rsp+958h] [rbp+858h] BYREF
  __int64 v337[4]; // [rsp+978h] [rbp+878h] BYREF
  __int64 v338[4]; // [rsp+998h] [rbp+898h] BYREF
  __int64 v339[4]; // [rsp+9B8h] [rbp+8B8h] BYREF
  __int64 v340[4]; // [rsp+9D8h] [rbp+8D8h] BYREF
  __int64 v341[4]; // [rsp+9F8h] [rbp+8F8h] BYREF
  __int64 v342[4]; // [rsp+A18h] [rbp+918h] BYREF
  __int64 v343[4]; // [rsp+A38h] [rbp+938h] BYREF
  __int64 v344[4]; // [rsp+A58h] [rbp+958h] BYREF
  __int64 v345[4]; // [rsp+A78h] [rbp+978h] BYREF
  __int64 v346[4]; // [rsp+A98h] [rbp+998h] BYREF
  __int64 v347[4]; // [rsp+AB8h] [rbp+9B8h] BYREF
  __int64 v348[4]; // [rsp+AD8h] [rbp+9D8h] BYREF
  __int64 v349[4]; // [rsp+AF8h] [rbp+9F8h] BYREF
  __int64 v350[4]; // [rsp+B18h] [rbp+A18h] BYREF
  __int64 v351[4]; // [rsp+B38h] [rbp+A38h] BYREF
  __int64 v352[4]; // [rsp+B58h] [rbp+A58h] BYREF
  __int64 v353[4]; // [rsp+B78h] [rbp+A78h] BYREF
  __int64 v354[4]; // [rsp+B98h] [rbp+A98h] BYREF
  __int64 v355[4]; // [rsp+BB8h] [rbp+AB8h] BYREF
  __int64 v356[4]; // [rsp+BD8h] [rbp+AD8h] BYREF
  __int64 v357[4]; // [rsp+BF8h] [rbp+AF8h] BYREF
  __int64 v358[4]; // [rsp+C18h] [rbp+B18h] BYREF
  __int64 v359[4]; // [rsp+C38h] [rbp+B38h] BYREF
  __int64 v360[4]; // [rsp+C58h] [rbp+B58h] BYREF
  __int64 v361[4]; // [rsp+C78h] [rbp+B78h] BYREF
  __int64 v362[4]; // [rsp+C98h] [rbp+B98h] BYREF
  __int64 v363[4]; // [rsp+CB8h] [rbp+BB8h] BYREF
  __int64 v364[4]; // [rsp+CD8h] [rbp+BD8h] BYREF
  __int64 v365[4]; // [rsp+CF8h] [rbp+BF8h] BYREF
  __int64 v366[4]; // [rsp+D18h] [rbp+C18h] BYREF
  __int64 v367[4]; // [rsp+D38h] [rbp+C38h] BYREF
  __int64 v368[4]; // [rsp+D58h] [rbp+C58h] BYREF
  __int64 v369[4]; // [rsp+D78h] [rbp+C78h] BYREF
  __int64 v370[4]; // [rsp+D98h] [rbp+C98h] BYREF
  __int64 v371[4]; // [rsp+DB8h] [rbp+CB8h] BYREF
  __int64 v372[4]; // [rsp+DD8h] [rbp+CD8h] BYREF
  __int64 v373[4]; // [rsp+DF8h] [rbp+CF8h] BYREF
  __int64 v374[4]; // [rsp+E18h] [rbp+D18h] BYREF
  __int64 v375[4]; // [rsp+E38h] [rbp+D38h] BYREF
  __int64 v376[4]; // [rsp+E58h] [rbp+D58h] BYREF
  __int64 v377[4]; // [rsp+E78h] [rbp+D78h] BYREF
  __int64 v378[4]; // [rsp+E98h] [rbp+D98h] BYREF
  __int64 v379[4]; // [rsp+EB8h] [rbp+DB8h] BYREF
  __int64 v380[4]; // [rsp+ED8h] [rbp+DD8h] BYREF
  __int64 v381[4]; // [rsp+EF8h] [rbp+DF8h] BYREF
  __int64 v382[4]; // [rsp+F18h] [rbp+E18h] BYREF
  __int64 v383[4]; // [rsp+F38h] [rbp+E38h] BYREF
  __int64 v384[4]; // [rsp+F58h] [rbp+E58h] BYREF
  __int64 v385[4]; // [rsp+F78h] [rbp+E78h] BYREF
  __int64 v386[4]; // [rsp+F98h] [rbp+E98h] BYREF
  __int64 v387[4]; // [rsp+FB8h] [rbp+EB8h] BYREF
  __int64 v388[4]; // [rsp+FD8h] [rbp+ED8h] BYREF
  __int64 v389[4]; // [rsp+FF8h] [rbp+EF8h] BYREF
  __int64 v390[4]; // [rsp+1018h] [rbp+F18h] BYREF
  __int64 v391[4]; // [rsp+1038h] [rbp+F38h] BYREF
  __int64 v392[4]; // [rsp+1058h] [rbp+F58h] BYREF
  __int64 v393[4]; // [rsp+1078h] [rbp+F78h] BYREF
  __int64 v394[4]; // [rsp+1098h] [rbp+F98h] BYREF
  __int64 v395[4]; // [rsp+10B8h] [rbp+FB8h] BYREF
  __int64 v396[4]; // [rsp+10D8h] [rbp+FD8h] BYREF
  __int64 v397[4]; // [rsp+10F8h] [rbp+FF8h] BYREF
  __int64 v398[4]; // [rsp+1118h] [rbp+1018h] BYREF
  __int64 v399[4]; // [rsp+1138h] [rbp+1038h] BYREF
  __int64 v400[4]; // [rsp+1158h] [rbp+1058h] BYREF
  __int64 v401[4]; // [rsp+1178h] [rbp+1078h] BYREF
  __int64 v402[4]; // [rsp+1198h] [rbp+1098h] BYREF
  __int64 v403[4]; // [rsp+11B8h] [rbp+10B8h] BYREF
  __int64 v404[4]; // [rsp+11D8h] [rbp+10D8h] BYREF
  __int64 v405[4]; // [rsp+11F8h] [rbp+10F8h] BYREF
  __int64 v406[4]; // [rsp+1218h] [rbp+1118h] BYREF
  __int64 v407[4]; // [rsp+1238h] [rbp+1138h] BYREF
  __int64 v408[4]; // [rsp+1258h] [rbp+1158h] BYREF
  __int64 v409[4]; // [rsp+1278h] [rbp+1178h] BYREF
  __int64 v410[4]; // [rsp+1298h] [rbp+1198h] BYREF
  __int64 v411[4]; // [rsp+12B8h] [rbp+11B8h] BYREF
  __int64 v412[4]; // [rsp+12D8h] [rbp+11D8h] BYREF
  __int64 v413[4]; // [rsp+12F8h] [rbp+11F8h] BYREF
  __int64 v414[4]; // [rsp+1318h] [rbp+1218h] BYREF
  __int64 v415[4]; // [rsp+1338h] [rbp+1238h] BYREF
  __int64 v416[4]; // [rsp+1358h] [rbp+1258h] BYREF
  __int64 v417[4]; // [rsp+1378h] [rbp+1278h] BYREF
  __int64 v418[4]; // [rsp+1398h] [rbp+1298h] BYREF
  __int64 v419[4]; // [rsp+13B8h] [rbp+12B8h] BYREF
  __int64 v420[4]; // [rsp+13D8h] [rbp+12D8h] BYREF
  __int64 v421[4]; // [rsp+13F8h] [rbp+12F8h] BYREF
  __int64 v422[4]; // [rsp+1418h] [rbp+1318h] BYREF
  __int64 v423[4]; // [rsp+1438h] [rbp+1338h] BYREF
  __int64 v424[4]; // [rsp+1458h] [rbp+1358h] BYREF
  __int64 v425[4]; // [rsp+1478h] [rbp+1378h] BYREF
  __int64 v426[4]; // [rsp+1498h] [rbp+1398h] BYREF
  __int64 v427[4]; // [rsp+14B8h] [rbp+13B8h] BYREF
  __int64 v428[4]; // [rsp+14D8h] [rbp+13D8h] BYREF
  __int64 v429[4]; // [rsp+14F8h] [rbp+13F8h] BYREF
  __int64 v430[4]; // [rsp+1518h] [rbp+1418h] BYREF
  __int64 v431[4]; // [rsp+1538h] [rbp+1438h] BYREF
  __int64 v432[4]; // [rsp+1558h] [rbp+1458h] BYREF
  __int64 v433[4]; // [rsp+1578h] [rbp+1478h] BYREF
  __int64 v434[4]; // [rsp+1598h] [rbp+1498h] BYREF
  __int64 v435[4]; // [rsp+15B8h] [rbp+14B8h] BYREF
  __int64 v436[4]; // [rsp+15D8h] [rbp+14D8h] BYREF
  __int64 v437[4]; // [rsp+15F8h] [rbp+14F8h] BYREF
  __int64 v438[4]; // [rsp+1618h] [rbp+1518h] BYREF
  __int64 v439[4]; // [rsp+1638h] [rbp+1538h] BYREF
  __int64 v440[4]; // [rsp+1658h] [rbp+1558h] BYREF
  __int64 v441[4]; // [rsp+1678h] [rbp+1578h] BYREF
  __int64 v442[4]; // [rsp+1698h] [rbp+1598h] BYREF
  __int64 v443[4]; // [rsp+16B8h] [rbp+15B8h] BYREF
  __int64 v444[4]; // [rsp+16D8h] [rbp+15D8h] BYREF
  __int64 v445[4]; // [rsp+16F8h] [rbp+15F8h] BYREF
  __int64 v446[4]; // [rsp+1718h] [rbp+1618h] BYREF
  __int64 v447[4]; // [rsp+1738h] [rbp+1638h] BYREF
  __int64 v448[4]; // [rsp+1758h] [rbp+1658h] BYREF
  __int64 v449[4]; // [rsp+1778h] [rbp+1678h] BYREF
  __int64 v450[4]; // [rsp+1798h] [rbp+1698h] BYREF
  __int64 v451[4]; // [rsp+17B8h] [rbp+16B8h] BYREF
  __int64 v452[4]; // [rsp+17D8h] [rbp+16D8h] BYREF
  __int64 v453[4]; // [rsp+17F8h] [rbp+16F8h] BYREF
  __int64 v454[4]; // [rsp+1818h] [rbp+1718h] BYREF
  __int64 v455[4]; // [rsp+1838h] [rbp+1738h] BYREF
  __int64 v456[4]; // [rsp+1858h] [rbp+1758h] BYREF
  __int64 v457[4]; // [rsp+1878h] [rbp+1778h] BYREF
  __int64 v458[4]; // [rsp+1898h] [rbp+1798h] BYREF
  __int64 v459[4]; // [rsp+18B8h] [rbp+17B8h] BYREF
  __int64 v460[4]; // [rsp+18D8h] [rbp+17D8h] BYREF
  __int64 v461[4]; // [rsp+18F8h] [rbp+17F8h] BYREF
  __int64 v462[4]; // [rsp+1918h] [rbp+1818h] BYREF
  __int64 v463[4]; // [rsp+1938h] [rbp+1838h] BYREF
  __int64 v464[4]; // [rsp+1958h] [rbp+1858h] BYREF
  __int64 v465[4]; // [rsp+1978h] [rbp+1878h] BYREF
  __int64 v466[4]; // [rsp+1998h] [rbp+1898h] BYREF
  __int64 v467[4]; // [rsp+19B8h] [rbp+18B8h] BYREF
  __int64 v468[4]; // [rsp+19D8h] [rbp+18D8h] BYREF
  __int64 v469[4]; // [rsp+19F8h] [rbp+18F8h] BYREF
  __int64 v470[4]; // [rsp+1A18h] [rbp+1918h] BYREF
  __int64 v471[4]; // [rsp+1A38h] [rbp+1938h] BYREF
  __int64 v472[4]; // [rsp+1A58h] [rbp+1958h] BYREF
  __int64 v473[4]; // [rsp+1A78h] [rbp+1978h] BYREF
  __int64 v474[4]; // [rsp+1A98h] [rbp+1998h] BYREF
  __int64 v475[4]; // [rsp+1AB8h] [rbp+19B8h] BYREF
  __int64 v476[4]; // [rsp+1AD8h] [rbp+19D8h] BYREF
  __int64 v477[4]; // [rsp+1AF8h] [rbp+19F8h] BYREF
  __int64 v478[4]; // [rsp+1B18h] [rbp+1A18h] BYREF
  __int64 v479[4]; // [rsp+1B38h] [rbp+1A38h] BYREF
  __int64 v480[4]; // [rsp+1B58h] [rbp+1A58h] BYREF
  __int64 v481[4]; // [rsp+1B78h] [rbp+1A78h] BYREF
  __int64 v482[4]; // [rsp+1B98h] [rbp+1A98h] BYREF
  __int64 v483[4]; // [rsp+1BB8h] [rbp+1AB8h] BYREF
  __int64 v484[4]; // [rsp+1BD8h] [rbp+1AD8h] BYREF
  __int64 v485[4]; // [rsp+1BF8h] [rbp+1AF8h] BYREF
  __int64 v486[4]; // [rsp+1C18h] [rbp+1B18h] BYREF
  __int64 v487[4]; // [rsp+1C38h] [rbp+1B38h] BYREF
  __int64 v488[4]; // [rsp+1C58h] [rbp+1B58h] BYREF
  __int64 v489[4]; // [rsp+1C78h] [rbp+1B78h] BYREF
  __int64 v490[4]; // [rsp+1C98h] [rbp+1B98h] BYREF
  __int64 v491[4]; // [rsp+1CB8h] [rbp+1BB8h] BYREF
  __int64 v492[4]; // [rsp+1CD8h] [rbp+1BD8h] BYREF
  __int64 v493[4]; // [rsp+1CF8h] [rbp+1BF8h] BYREF
  __int64 v494[4]; // [rsp+1D18h] [rbp+1C18h] BYREF
  __int64 v495[4]; // [rsp+1D38h] [rbp+1C38h] BYREF
  __int64 v496[4]; // [rsp+1D58h] [rbp+1C58h] BYREF
  __int64 v497[4]; // [rsp+1D78h] [rbp+1C78h] BYREF
  __int64 v498[4]; // [rsp+1D98h] [rbp+1C98h] BYREF
  __int64 v499[4]; // [rsp+1DB8h] [rbp+1CB8h] BYREF
  __int64 v500[4]; // [rsp+1DD8h] [rbp+1CD8h] BYREF
  __int64 v501[4]; // [rsp+1DF8h] [rbp+1CF8h] BYREF
  __int64 v502[4]; // [rsp+1E18h] [rbp+1D18h] BYREF
  __int64 v503[4]; // [rsp+1E38h] [rbp+1D38h] BYREF
  __int64 v504[4]; // [rsp+1E58h] [rbp+1D58h] BYREF
  __int64 v505[4]; // [rsp+1E78h] [rbp+1D78h] BYREF
  __int64 v506[4]; // [rsp+1E98h] [rbp+1D98h] BYREF
  __int64 v507[4]; // [rsp+1EB8h] [rbp+1DB8h] BYREF
  __int64 v508[4]; // [rsp+1ED8h] [rbp+1DD8h] BYREF
  __int64 v509[4]; // [rsp+1EF8h] [rbp+1DF8h] BYREF
  __int64 v510[4]; // [rsp+1F18h] [rbp+1E18h] BYREF
  __int64 v511[4]; // [rsp+1F38h] [rbp+1E38h] BYREF
  __int64 v512[4]; // [rsp+1F58h] [rbp+1E58h] BYREF
  __int64 v513[4]; // [rsp+1F78h] [rbp+1E78h] BYREF
  __int64 v514[4]; // [rsp+1F98h] [rbp+1E98h] BYREF
  __int64 v515[4]; // [rsp+1FB8h] [rbp+1EB8h] BYREF
  __int64 v516[4]; // [rsp+1FD8h] [rbp+1ED8h] BYREF
  __int64 v517[4]; // [rsp+1FF8h] [rbp+1EF8h] BYREF
  __int64 v518[4]; // [rsp+2018h] [rbp+1F18h] BYREF
  __int64 v519[4]; // [rsp+2038h] [rbp+1F38h] BYREF
  __int64 v520[4]; // [rsp+2058h] [rbp+1F58h] BYREF
  __int64 v521[4]; // [rsp+2078h] [rbp+1F78h] BYREF
  __int64 v522[4]; // [rsp+2098h] [rbp+1F98h] BYREF
  __int64 v523[4]; // [rsp+20B8h] [rbp+1FB8h] BYREF
  __int64 v524[4]; // [rsp+20D8h] [rbp+1FD8h] BYREF
  __int64 v525[4]; // [rsp+20F8h] [rbp+1FF8h] BYREF
  __int64 v526[4]; // [rsp+2118h] [rbp+2018h] BYREF
  __int64 v527[4]; // [rsp+2138h] [rbp+2038h] BYREF
  __int64 v528[4]; // [rsp+2158h] [rbp+2058h] BYREF
  __int64 v529[4]; // [rsp+2178h] [rbp+2078h] BYREF
  __int64 v530[4]; // [rsp+2198h] [rbp+2098h] BYREF
  __int64 v531[4]; // [rsp+21B8h] [rbp+20B8h] BYREF
  __int64 v532[4]; // [rsp+21D8h] [rbp+20D8h] BYREF
  __int64 v533[4]; // [rsp+21F8h] [rbp+20F8h] BYREF
  __int64 v534[4]; // [rsp+2218h] [rbp+2118h] BYREF
  __int64 v535[5]; // [rsp+2238h] [rbp+2138h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/Application.KeyboardDeveloperMode", 0x2BuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/Background.EnableBackgroundCube", 0x29uLL);
  LOBYTE(v4) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, v4, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/Background.ImageProcessing.Enabled", 0x2CuLL);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, v5, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign(
    (char *)v263,
    L"/Internal/BugWorkaroundOverride.MetalDepthOnlyAlphaToCoverage.ForceWorkaroundOff",
    0x50uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign(
    (char *)v263,
    L"/Internal/BugWorkaroundOverride.MetalIntelIrisDepthPrepass.ForceWorkaroundOff",
    0x4DuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/Camera.Distance", 0x19uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v263, v6, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/Camera.Elevation (degrees)", 0x24uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v263, v7, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/Camera.Rotation (degrees)", 0x23uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v263, v8, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/CpuProfiling.DisplayFrameTimings", 0x2AuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/CpuProfiling.Enabled", 0x1EuLL);
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, v9, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/Debug.Value", 0x15uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v263, v10, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.DisplayClippingPrimitivesEmitted", 0x37uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.DisplayClippingPrimitivesInvoked", 0x37uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.DisplayDetailFrameTimings", 0x30uLL);
  LOBYTE(v11) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, v11, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.DisplayFrameTimings", 0x2AuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.DisplayPixelShaderInvocations", 0x34uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.DisplaySceneTiming", 0x29uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.DisplaySubmittedPrimitives", 0x31uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.DisplaySubmittedVertices", 0x2FuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.DisplayVertexShaderInvocations", 0x35uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.Enabled", 0x1EuLL);
  LOBYTE(v12) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, v12, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/GpuProfiling.HighFidelity", 0x23uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v263, 0LL, a2);
  unknown_libname_101(v263);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"/Internal/ImageProcessing.BloomBlurBlendMode", 0x2CuLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v263, 14LL, a2);
  unknown_libname_101(v263);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/ImageProcessing.PlanarReflectionCameraComponentName", 0x3DuLL);
  si128.m128i_i64[0] = 0LL;
  si128.m128i_i64[1] = 7LL;
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"MainCamera", 0xAuLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, v261, v263, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/ImageProcessing.PlanarReflectionPlaneNodeName", 0x37uLL);
  si128.m128i_i64[0] = 0LL;
  si128.m128i_i64[1] = 7LL;
  LOWORD(v263[0]) = 0;
  std::wstring::assign((char *)v263, L"PlanarReflection", 0x10uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, v261, v263, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Input.CaptureInput", 0x1CuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Input.DepthStencilEvictionWindowInMs", 0x2EuLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 60000LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.EnvironmentDisplay", 0x25uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v13, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.EnvironmentDisplayLOD", 0x28uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v14, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.EnvironmentFilterOffset", 0x2AuLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v15, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.EnvironmentFilterScale", 0x29uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v16, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light0_CalculateNearFarClipEnabled", 0x35uLL);
  LOBYTE(v17) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, v17, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light0_ShadowBias", 0x24uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v18, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light0_ShadowBlurEnabled", 0x2BuLL);
  LOBYTE(v19) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, v19, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light0_ShadowJitterFactor", 0x2CuLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v20, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light0_ShadowTechnique", 0x29uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light0_ShadowTechniqueCSSMFormat", 0x33uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light1_CalculateNearFarClipEnabled", 0x35uLL);
  LOBYTE(v21) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, v21, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light1_ShadowBias", 0x24uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v22, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light1_ShadowBlurEnabled", 0x2BuLL);
  LOBYTE(v23) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, v23, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light1_ShadowJitterFactor", 0x2CuLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v24, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light1_ShadowTechnique", 0x29uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light1_ShadowTechniqueCSSMFormat", 0x33uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light2_CalculateNearFarClipEnabled", 0x35uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 1LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light2_ShadowBias", 0x24uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v25, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light2_ShadowBlurEnabled", 0x2BuLL);
  LOBYTE(v26) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, v26, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light2_ShadowJitterFactor", 0x2CuLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v27, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light2_ShadowTechnique", 0x29uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.Light2_ShadowTechniqueCSSMFormat", 0x33uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.ShadowZDirection", 0x23uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 1LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.ReceiverSlopePlaneBiasEnabled", 0x30uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.ShadowBiasingMasterToggle", 0x2CuLL);
  LOBYTE(v28) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, v28, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.ShadowBufferCreationDepthBias", 0x30uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v29, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.ShadowBufferCreationDepthBiasClamp", 0x35uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v30, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Lighting.ShadowBufferCreationSlopedDepthBias", 0x36uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v31, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Loading.EnableAnimationLoading", 0x28uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Loading.ForceMinecraftBlendMaterialsToMask", 0x34uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Loading.ForceTranscoding", 0x22uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.DiffuseColorH", 0x28uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v32, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.DiffuseColorS", 0x28uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v33, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.DiffuseColorV", 0x28uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v34, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.DiffuseMode", 0x26uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v35, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.DiffuseOverride", 0x2AuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.Opacity", 0x22uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v36, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.OpacityFresnel", 0x29uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.OpacityOverride", 0x2AuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.Smoothness", 0x25uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v37, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.SmoothnessMode", 0x29uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v38, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.SmoothnessOverride", 0x2DuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.SpecularColorH", 0x29uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v39, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.SpecularColorS", 0x29uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v40, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.SpecularColorV", 0x29uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v41, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.SpecularMode", 0x27uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v261, v42, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/MaterialOverride.SpecularOverride", 0x2BuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Metal.PsoEvictionWindowInMs", 0x25uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 60000LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Model.TransformEnabled", 0x20uLL);
  LOBYTE(v43) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, v43, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Renderer.AlphaCompositingOutputMode", 0x2DuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Renderer.Antialiasing", 0x1FuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Renderer.BufferFormat.Render", 0x26uLL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 2LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Renderer.CameraEffect.ColorSwatchMode", 0x2FuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Renderer.CameraEffect.DisplayDepth", 0x2CuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Renderer.CameraEffect.DisplayDepthGrid", 0x30uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Renderer.Compatibility.SmoothnessMode", 0x2FuLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  v262 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v261[0]) = 0;
  std::wstring::assign((char *)v261, L"/Internal/Renderer.Compatibility.WorkflowStandard", 0x31uLL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v261, 0LL, a2);
  unknown_libname_101(v261);
  std::wstring::wstring(v406, (__int64)L"/Internal/Renderer.Concurrent");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v406, 0LL, a2);
  unknown_libname_101(v406);
  std::wstring::wstring(v407, (__int64)L"/Internal/Renderer.DisplayPerformanceStats");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v407, 0LL, a2);
  unknown_libname_101(v407);
  std::wstring::wstring(v269, (__int64)L"/Internal/Renderer.DisplaySymbols");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v269, 0LL, a2);
  unknown_libname_101(v269);
  std::wstring::wstring(v270, (__int64)L"/Internal/Renderer.DisplaySymbolsBound");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v270, 0LL, a2);
  unknown_libname_101(v270);
  std::wstring::wstring(v271, (__int64)L"/Internal/Renderer.DisplaySymbolsCamera");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v271, 0LL, a2);
  unknown_libname_101(v271);
  std::wstring::wstring(v272, (__int64)L"/Internal/Renderer.DisplaySymbolsLight");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v272, 0LL, a2);
  unknown_libname_101(v272);
  std::wstring::wstring(v273, (__int64)L"/Internal/Renderer.DisplaySymbolsMesh");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v273, 0LL, a2);
  unknown_libname_101(v273);
  std::wstring::wstring(v274, (__int64)L"/Internal/Renderer.DisplaySymbolsNode");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v274, 0LL, a2);
  unknown_libname_101(v274);
  std::wstring::wstring(v275, (__int64)L"/Internal/Renderer.DisplaySymbolsNodeScale");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v275, 0LL, a2);
  unknown_libname_101(v275);
  std::wstring::wstring(v276, (__int64)L"/Internal/Renderer.DisplaySymbolsNodeTree");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v276, 0LL, a2);
  unknown_libname_101(v276);
  std::wstring::wstring(v277, (__int64)L"/Internal/Renderer.DisplaySymbolsSkeleton");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v277, 0LL, a2);
  unknown_libname_101(v277);
  std::wstring::wstring(v278, (__int64)L"/Internal/Renderer.DisplaySymbolsAnimBBox");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v278, 0LL, a2);
  unknown_libname_101(v278);
  std::wstring::wstring(v279, (__int64)L"/Internal/Renderer.DynamicResolutionScalingEnabled");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v279, 0LL, a2);
  unknown_libname_101(v279);
  std::wstring::wstring(v280, (__int64)L"/Internal/Renderer.FrameLatencyMaximum");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v280, 1LL, a2);
  unknown_libname_101(v280);
  std::wstring::wstring(v281, (__int64)L"/Internal/Renderer.GeometryDisplayMode");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v281, 0LL, a2);
  unknown_libname_101(v281);
  std::wstring::wstring(v282, (__int64)L"/Internal/Renderer.GeometryLOD");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v282, 2LL, a2);
  unknown_libname_101(v282);
  std::wstring::wstring(v283, (__int64)L"/Internal/Renderer.GeometryNormalMode");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v283, 2LL, a2);
  unknown_libname_101(v283);
  std::wstring::wstring(v284, (__int64)L"/Internal/Renderer.Grid");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v284, 0LL, a2);
  unknown_libname_101(v284);
  std::wstring::wstring(v285, (__int64)L"/Internal/Renderer.LayerBackground");
  LOBYTE(v44) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v285, v44, a2);
  unknown_libname_101(v285);
  std::wstring::wstring(v286, (__int64)L"/Internal/Renderer.LayerForeground");
  LOBYTE(v45) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v286, v45, a2);
  unknown_libname_101(v286);
  std::wstring::wstring(v287, (__int64)L"/Internal/Renderer.MaterialPrimary");
  LOBYTE(v46) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v287, v46, a2);
  unknown_libname_101(v287);
  std::wstring::wstring(v288, (__int64)L"/Internal/Renderer.MaterialSecondary");
  LOBYTE(v47) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v288, v47, a2);
  unknown_libname_101(v288);
  std::wstring::wstring(v289, (__int64)L"/Internal/Renderer.RenderingModeOverride_Blend");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v289, 3LL, a2);
  unknown_libname_101(v289);
  std::wstring::wstring(v290, (__int64)L"/Internal/Renderer.RenderingModeOverride_Mask");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v290, 1LL, a2);
  unknown_libname_101(v290);
  std::wstring::wstring(v291, (__int64)L"/Internal/Renderer.RenderingModeOverride_MaskBlend");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v291, 2LL, a2);
  unknown_libname_101(v291);
  std::wstring::wstring(v292, (__int64)L"/Internal/Renderer.RenderingModeOverride_Opaque");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v292, 0LL, a2);
  unknown_libname_101(v292);
  std::wstring::wstring(v293, (__int64)L"/Internal/Renderer.RenderPasses.DepthPrepass");
  LOBYTE(v48) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v293, v48, a2);
  unknown_libname_101(v293);
  std::wstring::wstring(v294, (__int64)L"/Internal/Renderer.RenderPasses.DepthPrepassReadable");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v294, 0LL, a2);
  unknown_libname_101(v294);
  std::wstring::wstring(v295, (__int64)L"/Internal/Renderer.RenderPasses.Opaque");
  LOBYTE(v49) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v295, v49, a2);
  unknown_libname_101(v295);
  std::wstring::wstring(v296, (__int64)L"/Internal/Renderer.RenderPasses.OpaqueMasked");
  LOBYTE(v50) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v296, v50, a2);
  unknown_libname_101(v296);
  std::wstring::wstring(v297, (__int64)L"/Internal/Renderer.RenderPasses.Transparent");
  LOBYTE(v51) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v297, v51, a2);
  unknown_libname_101(v297);
  std::wstring::wstring(v298, (__int64)L"/Internal/Renderer.ResolutionScalingX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v298, v52, a2);
  unknown_libname_101(v298);
  std::wstring::wstring(v299, (__int64)L"/Internal/Renderer.ResolutionScalingY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v299, v53, a2);
  unknown_libname_101(v299);
  std::wstring::wstring(v300, (__int64)L"/Internal/Renderer.SyncInterval");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v300, 2LL, a2);
  unknown_libname_101(v300);
  std::wstring::wstring(v301, (__int64)L"/Internal/Renderer.TextureLOD");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v301, 2LL, a2);
  unknown_libname_101(v301);
  std::wstring::wstring(v302, (__int64)L"/Internal/Renderer.Textures");
  LOBYTE(v54) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v302, v54, a2);
  unknown_libname_101(v302);
  std::wstring::wstring(v303, (__int64)L"/Internal/Renderer.TexturesDiffuse");
  LOBYTE(v55) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v303, v55, a2);
  unknown_libname_101(v303);
  std::wstring::wstring(v304, (__int64)L"/Internal/Renderer.TexturesEmissive");
  LOBYTE(v56) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v304, v56, a2);
  unknown_libname_101(v304);
  std::wstring::wstring(v305, (__int64)L"/Internal/Renderer.TexturesNormal");
  LOBYTE(v57) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v305, v57, a2);
  unknown_libname_101(v305);
  std::wstring::wstring(v306, (__int64)L"/Internal/Renderer.TexturesOcclusion");
  LOBYTE(v58) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v306, v58, a2);
  unknown_libname_101(v306);
  std::wstring::wstring(v307, (__int64)L"/Internal/Renderer.TexturesOpacity");
  LOBYTE(v59) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v307, v59, a2);
  unknown_libname_101(v307);
  std::wstring::wstring(v308, (__int64)L"/Internal/Renderer.TexturesSpecular");
  LOBYTE(v60) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v308, v60, a2);
  unknown_libname_101(v308);
  std::wstring::wstring(v309, (__int64)L"/Internal/Renderer.Wireframe");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v309, 0LL, a2);
  unknown_libname_101(v309);
  std::wstring::wstring(v310, (__int64)L"/Internal/Shader.DiagnosticsEnabled");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v310, 0LL, a2);
  unknown_libname_101(v310);
  std::wstring::wstring(v311, (__int64)L"/Internal/SkinnedAnimation.Behaviour");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v311, 0LL, a2);
  unknown_libname_101(v311);
  std::wstring::wstring(v312, (__int64)L"Background.Camera.Contrast");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v312, v61, a2);
  unknown_libname_101(v312);
  std::wstring::wstring(v313, (__int64)L"Background.Camera.ExposureValue");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v313, v62, a2);
  unknown_libname_101(v313);
  std::wstring::wstring(v314, (__int64)L"Background.Camera.ExposureValueIsBrightness");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v314, 0LL, a2);
  unknown_libname_101(v314);
  std::wstring::wstring(v315, (__int64)L"Background.Camera.ToneMappingEnabled");
  LOBYTE(v63) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v315, v63, a2);
  unknown_libname_101(v315);
  std::wstring::wstring(v316, (__int64)L"Background.ColorGrading.ColorFilterDensityGlobal");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v316, v64, a2);
  unknown_libname_101(v316);
  std::wstring::wstring(v317, (__int64)L"Background.ColorGrading.ColorFilterDensityHighlights");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v317, v65, a2);
  unknown_libname_101(v317);
  std::wstring::wstring(v318, (__int64)L"Background.ColorGrading.ColorFilterDensityMidtones");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v318, v66, a2);
  unknown_libname_101(v318);
  std::wstring::wstring(v319, (__int64)L"Background.ColorGrading.ColorFilterDensityShadows");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v319, v67, a2);
  unknown_libname_101(v319);
  std::wstring::wstring(v320, (__int64)L"Background.ColorGrading.ColorFilterHueGlobal");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v320, v68, a2);
  unknown_libname_101(v320);
  std::wstring::wstring(v321, (__int64)L"Background.ColorGrading.ColorFilterHueHighlights");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v321, v69, a2);
  unknown_libname_101(v321);
  std::wstring::wstring(v322, (__int64)L"Background.ColorGrading.ColorFilterHueMidtones");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v322, v70, a2);
  unknown_libname_101(v322);
  std::wstring::wstring(v323, (__int64)L"Background.ColorGrading.ColorFilterHueShadows");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v323, v71, a2);
  unknown_libname_101(v323);
  std::wstring::wstring(v324, (__int64)L"Background.ColorGrading.ExposureHighlights");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v324, v72, a2);
  unknown_libname_101(v324);
  std::wstring::wstring(v325, (__int64)L"Background.ColorGrading.ExposureMidtones");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v325, v73, a2);
  unknown_libname_101(v325);
  std::wstring::wstring(v326, (__int64)L"Background.ColorGrading.ExposureShadows");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v326, v74, a2);
  unknown_libname_101(v326);
  std::wstring::wstring(v327, (__int64)L"Background.ColorGrading.SaturationGlobal");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v327, v75, a2);
  unknown_libname_101(v327);
  std::wstring::wstring(v328, (__int64)L"Background.ColorGrading.SaturationHighlights");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v328, v76, a2);
  unknown_libname_101(v328);
  std::wstring::wstring(v329, (__int64)L"Background.ColorGrading.SaturationMidtones");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v329, v77, a2);
  unknown_libname_101(v329);
  std::wstring::wstring(v266, (__int64)L"Background.ColorGrading.SaturationShadows");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v266, v78, a2);
  unknown_libname_101(v266);
  std::wstring::wstring(v265, (__int64)L"Background.ColorGrading.TransformData");
  v79 = std::wstring::wstring(v266, (__int64)&unk_1801C5518);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, v265, v79, a2);
  unknown_libname_101(v265);
  std::wstring::wstring(v330, (__int64)L"Background.ColorGrading.TransformDataFormat");
  v80 = std::wstring::wstring(v265, (__int64)&unk_1801C5518);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, v330, v80, a2);
  unknown_libname_101(v330);
  std::wstring::wstring(v331, (__int64)L"Background.ColorGrading.TransformWeight");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v331, v81, a2);
  unknown_libname_101(v331);
  std::wstring::wstring(v332, (__int64)L"Background.GroundPlane.GradientOriginColorA");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v332, v82, a2);
  unknown_libname_101(v332);
  std::wstring::wstring(v333, (__int64)L"Background.GroundPlane.GradientOriginColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v333, v83, a2);
  unknown_libname_101(v333);
  std::wstring::wstring(v334, (__int64)L"Background.GroundPlane.GradientOriginColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v334, v84, a2);
  unknown_libname_101(v334);
  std::wstring::wstring(v335, (__int64)L"Background.GroundPlane.GradientOriginColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v335, v85, a2);
  unknown_libname_101(v335);
  std::wstring::wstring(v336, (__int64)L"Background.GroundPlane.GradientRing1ColorA");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v336, v86, a2);
  unknown_libname_101(v336);
  std::wstring::wstring(v337, (__int64)L"Background.GroundPlane.GradientRing1ColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v337, v87, a2);
  unknown_libname_101(v337);
  std::wstring::wstring(v338, (__int64)L"Background.GroundPlane.GradientRing1ColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v338, v88, a2);
  unknown_libname_101(v338);
  std::wstring::wstring(v339, (__int64)L"Background.GroundPlane.GradientRing1ColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v339, v89, a2);
  unknown_libname_101(v339);
  std::wstring::wstring(v340, (__int64)L"Background.GroundPlane.GradientRing1Width");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v340, v90, a2);
  unknown_libname_101(v340);
  std::wstring::wstring(v341, (__int64)L"Background.GroundPlane.GradientRing2ColorA");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v341, v91, a2);
  unknown_libname_101(v341);
  std::wstring::wstring(v342, (__int64)L"Background.GroundPlane.GradientRing2ColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v342, v92, a2);
  unknown_libname_101(v342);
  std::wstring::wstring(v343, (__int64)L"Background.GroundPlane.GradientRing2ColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v343, v93, a2);
  unknown_libname_101(v343);
  std::wstring::wstring(v344, (__int64)L"Background.GroundPlane.GradientRing2ColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v344, v94, a2);
  unknown_libname_101(v344);
  std::wstring::wstring(v345, (__int64)L"Background.GroundPlane.GradientRing2Width");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v345, v95, a2);
  unknown_libname_101(v345);
  std::wstring::wstring(v346, (__int64)L"Background.GroundPlane.GradientRing3ColorA");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v346, v96, a2);
  unknown_libname_101(v346);
  std::wstring::wstring(v347, (__int64)L"Background.GroundPlane.GradientRing3ColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v347, v97, a2);
  unknown_libname_101(v347);
  std::wstring::wstring(v348, (__int64)L"Background.GroundPlane.GradientRing3ColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v348, v98, a2);
  unknown_libname_101(v348);
  std::wstring::wstring(v349, (__int64)L"Background.GroundPlane.GradientRing3ColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v349, v99, a2);
  unknown_libname_101(v349);
  std::wstring::wstring(v350, (__int64)L"Background.GroundPlane.GradientRing3Width");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v350, v100, a2);
  unknown_libname_101(v350);
  std::wstring::wstring(v351, (__int64)L"Background.GroundPlane.ShadowWeight");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v351, v101, a2);
  unknown_libname_101(v351);
  std::wstring::wstring(v352, (__int64)L"Background.ImageProcessing.VignetteBlendMode");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v352, 0LL, a2);
  unknown_libname_101(v352);
  std::wstring::wstring(v353, (__int64)L"Background.ImageProcessing.VignetteCentreX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v353, v102, a2);
  unknown_libname_101(v353);
  std::wstring::wstring(v354, (__int64)L"Background.ImageProcessing.VignetteCentreY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v354, v103, a2);
  unknown_libname_101(v354);
  std::wstring::wstring(v355, (__int64)L"Background.ImageProcessing.VignetteColorA");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v355, v104, a2);
  unknown_libname_101(v355);
  std::wstring::wstring(v356, (__int64)L"Background.ImageProcessing.VignetteColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v356, v105, a2);
  unknown_libname_101(v356);
  std::wstring::wstring(v357, (__int64)L"Background.ImageProcessing.VignetteColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v357, v106, a2);
  unknown_libname_101(v357);
  std::wstring::wstring(v358, (__int64)L"Background.ImageProcessing.VignetteColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v358, v107, a2);
  unknown_libname_101(v358);
  std::wstring::wstring(v359, (__int64)L"Background.ImageProcessing.VignetteStretch");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v359, v108, a2);
  unknown_libname_101(v359);
  std::wstring::wstring(v360, (__int64)L"Background.ImageProcessing.VignetteWeight");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v360, v109, a2);
  unknown_libname_101(v360);
  std::wstring::wstring(v361, (__int64)L"Camera.Behaviour");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v361, 1LL, a2);
  unknown_libname_101(v361);
  std::wstring::wstring(v362, (__int64)L"Camera.Contrast");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v362, v110, a2);
  unknown_libname_101(v362);
  std::wstring::wstring(v363, (__int64)L"Camera.DefaultElevation");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v363, v111, a2);
  unknown_libname_101(v363);
  std::wstring::wstring(v364, (__int64)L"Camera.ElevationLowerLimit (degrees)");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v364, v112, a2);
  unknown_libname_101(v364);
  std::wstring::wstring(v365, (__int64)L"Camera.ElevationReturnTime (s)");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v365, v113, a2);
  unknown_libname_101(v365);
  std::wstring::wstring(v366, (__int64)L"Camera.ElevationReturnWaitTime (s)");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v366, v114, a2);
  unknown_libname_101(v366);
  std::wstring::wstring(v367, (__int64)L"Camera.ElevationUpperLimit (degrees)");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v367, v115, a2);
  unknown_libname_101(v367);
  std::wstring::wstring(v368, (__int64)L"Camera.ExposureValue");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v368, v116, a2);
  unknown_libname_101(v368);
  std::wstring::wstring(v369, (__int64)L"Camera.ExposureValueIsBrightness");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v369, 0LL, a2);
  unknown_libname_101(v369);
  std::wstring::wstring(v370, (__int64)L"Camera.FieldOfView (Degrees)");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v370, v117, a2);
  unknown_libname_101(v370);
  std::wstring::wstring(v371, (__int64)L"Camera.FrameOnModelLoad");
  LOBYTE(v118) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v371, v118, a2);
  unknown_libname_101(v371);
  std::wstring::wstring(v372, (__int64)L"Camera.FramingBehaviour");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v372, 0LL, a2);
  unknown_libname_101(v372);
  std::wstring::wstring(v373, (__int64)L"Camera.FramingElevation");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v373, v119, a2);
  unknown_libname_101(v373);
  std::wstring::wstring(v374, (__int64)L"Camera.FramingPositionY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v374, v120, a2);
  unknown_libname_101(v374);
  std::wstring::wstring(v375, (__int64)L"Camera.FramingRadius");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v375, v121, a2);
  unknown_libname_101(v375);
  std::wstring::wstring(v376, (__int64)L"Camera.FramingRotation");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v376, v122, a2);
  unknown_libname_101(v376);
  std::wstring::wstring(v377, (__int64)L"Camera.FramingTime");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v377, v123, a2);
  unknown_libname_101(v377);
  std::wstring::wstring(v378, (__int64)L"Camera.IdleRotationSpeed (degrees/s)");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v378, v124, a2);
  unknown_libname_101(v378);
  std::wstring::wstring(v379, (__int64)L"Camera.IdleRotationSpinupTime (s)");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v379, v125, a2);
  unknown_libname_101(v379);
  std::wstring::wstring(v380, (__int64)L"Camera.IdleRotationWaitTime (s)");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v380, v126, a2);
  unknown_libname_101(v380);
  std::wstring::wstring(v381, (__int64)L"Camera.MaxDistance");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v381, v127, a2);
  unknown_libname_101(v381);
  std::wstring::wstring(v382, (__int64)L"Camera.MinDistance");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v382, v128, a2);
  unknown_libname_101(v382);
  std::wstring::wstring(v383, (__int64)L"Camera.State.Position.X");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v383, v129, a2);
  unknown_libname_101(v383);
  std::wstring::wstring(v384, (__int64)L"Camera.State.Position.Y");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v384, v130, a2);
  unknown_libname_101(v384);
  std::wstring::wstring(v385, (__int64)L"Camera.State.Position.Z");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v385, v131, a2);
  unknown_libname_101(v385);
  std::wstring::wstring(v386, (__int64)L"Camera.State.Rotation.W");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v386, v132, a2);
  unknown_libname_101(v386);
  std::wstring::wstring(v387, (__int64)L"Camera.State.Rotation.X");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v387, v133, a2);
  unknown_libname_101(v387);
  std::wstring::wstring(v388, (__int64)L"Camera.State.Rotation.Y");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v388, v134, a2);
  unknown_libname_101(v388);
  std::wstring::wstring(v389, (__int64)L"Camera.State.Rotation.Z");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v389, v135, a2);
  unknown_libname_101(v389);
  std::wstring::wstring(v390, (__int64)L"Camera.ToneMappingEnabled");
  LOBYTE(v136) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v390, v136, a2);
  unknown_libname_101(v390);
  std::wstring::wstring(v391, (__int64)L"Camera.ZoomStopsAnimation");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v391, 0LL, a2);
  unknown_libname_101(v391);
  std::wstring::wstring(v392, (__int64)L"ColorGrading.ColorFilterDensityGlobal");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v392, v137, a2);
  unknown_libname_101(v392);
  std::wstring::wstring(v393, (__int64)L"ColorGrading.ColorFilterDensityHighlights");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v393, v138, a2);
  unknown_libname_101(v393);
  std::wstring::wstring(v394, (__int64)L"ColorGrading.ColorFilterDensityMidtones");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v394, v139, a2);
  unknown_libname_101(v394);
  std::wstring::wstring(v395, (__int64)L"ColorGrading.ColorFilterDensityShadows");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v395, v140, a2);
  unknown_libname_101(v395);
  std::wstring::wstring(v396, (__int64)L"ColorGrading.ColorFilterHueGlobal");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v396, v141, a2);
  unknown_libname_101(v396);
  std::wstring::wstring(v397, (__int64)L"ColorGrading.ColorFilterHueHighlights");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v397, v142, a2);
  unknown_libname_101(v397);
  std::wstring::wstring(v398, (__int64)L"ColorGrading.ColorFilterHueMidtones");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v398, v143, a2);
  unknown_libname_101(v398);
  std::wstring::wstring(v399, (__int64)L"ColorGrading.ColorFilterHueShadows");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v399, v144, a2);
  unknown_libname_101(v399);
  std::wstring::wstring(v400, (__int64)L"ColorGrading.ExposureHighlights");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v400, v145, a2);
  unknown_libname_101(v400);
  std::wstring::wstring(v401, (__int64)L"ColorGrading.ExposureMidtones");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v401, v146, a2);
  unknown_libname_101(v401);
  std::wstring::wstring(v402, (__int64)L"ColorGrading.ExposureShadows");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v402, v147, a2);
  unknown_libname_101(v402);
  std::wstring::wstring(v403, (__int64)L"ColorGrading.SaturationGlobal");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v403, v148, a2);
  unknown_libname_101(v403);
  std::wstring::wstring(v404, (__int64)L"ColorGrading.SaturationHighlights");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v404, v149, a2);
  unknown_libname_101(v404);
  std::wstring::wstring(v405, (__int64)L"ColorGrading.SaturationMidtones");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v405, v150, a2);
  unknown_libname_101(v405);
  std::wstring::wstring(v267, (__int64)L"ColorGrading.SaturationShadows");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v267, v151, a2);
  unknown_libname_101(v267);
  std::wstring::wstring(v268, (__int64)L"ColorGrading.TransformData");
  v152 = std::wstring::wstring(v267, (__int64)&unk_1801C5518);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, v268, v152, a2);
  unknown_libname_101(v268);
  std::wstring::wstring(v408, (__int64)L"ColorGrading.TransformDataFormat");
  v153 = std::wstring::wstring(v268, (__int64)&unk_1801C5518);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, v408, v153, a2);
  unknown_libname_101(v408);
  std::wstring::wstring(v409, (__int64)L"ColorGrading.TransformWeight");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v409, v154, a2);
  unknown_libname_101(v409);
  std::wstring::wstring(v410, (__int64)L"GroundPlane.BottomGridOpacity");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v410, v155, a2);
  unknown_libname_101(v410);
  std::wstring::wstring(v411, (__int64)L"GroundPlane.BottomVisible");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v411, 0LL, a2);
  unknown_libname_101(v411);
  std::wstring::wstring(v412, (__int64)L"ImageProcessing.BloomEnabled");
  LOBYTE(v156) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v412, v156, a2);
  unknown_libname_101(v412);
  std::wstring::wstring(v413, (__int64)L"ImageProcessing.BloomQuality");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v413, 2LL, a2);
  unknown_libname_101(v413);
  std::wstring::wstring(v414, (__int64)L"ImageProcessing.BloomWeight");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v414, v157, a2);
  unknown_libname_101(v414);
  std::wstring::wstring(v415, (__int64)L"ImageProcessing.Enabled");
  LOBYTE(v158) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v415, v158, a2);
  unknown_libname_101(v415);
  std::wstring::wstring(v416, (__int64)L"ImageProcessing.PlanarReflectionBlur");
  LOBYTE(v159) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v416, v159, a2);
  unknown_libname_101(v416);
  std::wstring::wstring(v417, (__int64)L"ImageProcessing.PlanarReflectionDirect");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v417, 0LL, a2);
  unknown_libname_101(v417);
  std::wstring::wstring(v418, (__int64)L"ImageProcessing.PlanarReflectionEnabled");
  LOBYTE(v160) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v418, v160, a2);
  unknown_libname_101(v418);
  std::wstring::wstring(v419, (__int64)L"ImageProcessing.PlanarReflectionQuality");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v419, 2LL, a2);
  unknown_libname_101(v419);
  std::wstring::wstring(v420, (__int64)L"ImageProcessing.PlanarReflectionWeight");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v420, v161, a2);
  unknown_libname_101(v420);
  std::wstring::wstring(v421, (__int64)L"ImageProcessing.VignetteBlendMode");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v421, 0LL, a2);
  unknown_libname_101(v421);
  std::wstring::wstring(v422, (__int64)L"ImageProcessing.VignetteCentreX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v422, v162, a2);
  unknown_libname_101(v422);
  std::wstring::wstring(v423, (__int64)L"ImageProcessing.VignetteCentreY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v423, v163, a2);
  unknown_libname_101(v423);
  std::wstring::wstring(v424, (__int64)L"ImageProcessing.VignetteColorA");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v424, v164, a2);
  unknown_libname_101(v424);
  std::wstring::wstring(v425, (__int64)L"ImageProcessing.VignetteColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v425, v165, a2);
  unknown_libname_101(v425);
  std::wstring::wstring(v426, (__int64)L"ImageProcessing.VignetteColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v426, v166, a2);
  unknown_libname_101(v426);
  std::wstring::wstring(v427, (__int64)L"ImageProcessing.VignetteColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v427, v167, a2);
  unknown_libname_101(v427);
  std::wstring::wstring(v428, (__int64)L"ImageProcessing.VignetteStretch");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v428, v168, a2);
  unknown_libname_101(v428);
  std::wstring::wstring(v429, (__int64)L"ImageProcessing.VignetteWeight");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v429, v169, a2);
  unknown_libname_101(v429);
  std::wstring::wstring(v430, (__int64)L"Lighting.BackgroundColorAmount");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v430, v170, a2);
  unknown_libname_101(v430);
  std::wstring::wstring(v431, (__int64)L"Lighting.BackgroundColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v431, v171, a2);
  unknown_libname_101(v431);
  std::wstring::wstring(v432, (__int64)L"Lighting.BackgroundColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v432, v172, a2);
  unknown_libname_101(v432);
  std::wstring::wstring(v433, (__int64)L"Lighting.BackgroundColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v433, v173, a2);
  unknown_libname_101(v433);
  std::wstring::wstring(v434, (__int64)L"Lighting.BackgroundLighting");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v434, v174, a2);
  unknown_libname_101(v434);
  std::wstring::wstring(v435, (__int64)L"Lighting.BackgroundShadowAmount");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v435, v175, a2);
  unknown_libname_101(v435);
  std::wstring::wstring(v436, (__int64)L"Lighting.BackgroundShadowFalloff");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v436, v176, a2);
  unknown_libname_101(v436);
  std::wstring::wstring(v437, (__int64)L"Lighting.DirectEnabled");
  LOBYTE(v177) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v437, v177, a2);
  unknown_libname_101(v437);
  std::wstring::wstring(v438, (__int64)L"Lighting.DirectIntensity");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v438, v178, a2);
  unknown_libname_101(v438);
  std::wstring::wstring(v439, (__int64)L"Lighting.EmissiveIntensity");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v439, v179, a2);
  unknown_libname_101(v439);
  std::wstring::wstring(v440, (__int64)L"Lighting.EnvironmentColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v440, v180, a2);
  unknown_libname_101(v440);
  std::wstring::wstring(v441, (__int64)L"Lighting.EnvironmentColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v441, v181, a2);
  unknown_libname_101(v441);
  std::wstring::wstring(v442, (__int64)L"Lighting.EnvironmentColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v442, v182, a2);
  unknown_libname_101(v442);
  std::wstring::wstring(v443, (__int64)L"Lighting.EnvironmentEnabled");
  LOBYTE(v183) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v443, v183, a2);
  unknown_libname_101(v443);
  std::wstring::wstring(v444, (__int64)L"Lighting.EnvironmentIndex");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v444, 0LL, a2);
  unknown_libname_101(v444);
  std::wstring::wstring(v445, (__int64)L"Lighting.EnvironmentIntensity");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v445, v184, a2);
  unknown_libname_101(v445);
  std::wstring::wstring(v446, (__int64)L"Lighting.EnvironmentRotation");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v446, v185, a2);
  unknown_libname_101(v446);
  std::wstring::wstring(v447, (__int64)L"Lighting.Light0_CameraOrientationTracking");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v447, 0LL, a2);
  unknown_libname_101(v447);
  std::wstring::wstring(v448, (__int64)L"Lighting.Light0_CameraRelative");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v448, 0LL, a2);
  unknown_libname_101(v448);
  std::wstring::wstring(v449, (__int64)L"Lighting.Light0_ColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v449, v186, a2);
  unknown_libname_101(v449);
  std::wstring::wstring(v450, (__int64)L"Lighting.Light0_ColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v450, v187, a2);
  unknown_libname_101(v450);
  std::wstring::wstring(v451, (__int64)L"Lighting.Light0_ColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v451, v188, a2);
  unknown_libname_101(v451);
  std::wstring::wstring(v452, (__int64)L"Lighting.Light0_Enabled");
  LOBYTE(v189) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v452, v189, a2);
  unknown_libname_101(v452);
  std::wstring::wstring(v453, (__int64)L"Lighting.Light0_FrustumEdgeFalloff");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v453, v190, a2);
  unknown_libname_101(v453);
  std::wstring::wstring(v454, (__int64)L"Lighting.Light0_Intensity");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v454, v191, a2);
  unknown_libname_101(v454);
  std::wstring::wstring(v455, (__int64)L"Lighting.Light0_IntensityMode");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v455, 0LL, a2);
  unknown_libname_101(v455);
  std::wstring::wstring(v456, (__int64)L"Lighting.Light0_PositionX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v456, v192, a2);
  unknown_libname_101(v456);
  std::wstring::wstring(v457, (__int64)L"Lighting.Light0_PositionY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v457, v193, a2);
  unknown_libname_101(v457);
  std::wstring::wstring(v458, (__int64)L"Lighting.Light0_PositionZ");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v458, v194, a2);
  unknown_libname_101(v458);
  std::wstring::wstring(v459, (__int64)L"Lighting.Light0_Radius");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v459, v195, a2);
  unknown_libname_101(v459);
  std::wstring::wstring(v460, (__int64)L"Lighting.Light0_ShadowBufferSize");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v460, v196, a2);
  unknown_libname_101(v460);
  std::wstring::wstring(v461, (__int64)L"Lighting.Light0_ShadowEnabled");
  LOBYTE(v197) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v461, v197, a2);
  unknown_libname_101(v461);
  std::wstring::wstring(v462, (__int64)L"Lighting.Light0_ShadowFarClip");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v462, v198, a2);
  unknown_libname_101(v462);
  std::wstring::wstring(v463, (__int64)L"Lighting.Light0_ShadowFieldOfView");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v463, v199, a2);
  unknown_libname_101(v463);
  std::wstring::wstring(v464, (__int64)L"Lighting.Light0_ShadowFrustumSize");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v464, v200, a2);
  unknown_libname_101(v464);
  std::wstring::wstring(v465, (__int64)L"Lighting.Light0_ShadowNearClip");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v465, v201, a2);
  unknown_libname_101(v465);
  std::wstring::wstring(v466, (__int64)L"Lighting.Light0_SpotAngle");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v466, v202, a2);
  unknown_libname_101(v466);
  std::wstring::wstring(v467, (__int64)L"Lighting.Light0_TargetX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v467, v203, a2);
  unknown_libname_101(v467);
  std::wstring::wstring(v468, (__int64)L"Lighting.Light0_TargetY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v468, v204, a2);
  unknown_libname_101(v468);
  std::wstring::wstring(v469, (__int64)L"Lighting.Light0_TargetZ");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v469, v205, a2);
  unknown_libname_101(v469);
  std::wstring::wstring(v470, (__int64)L"Lighting.Light0_Type");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v470, 0LL, a2);
  unknown_libname_101(v470);
  std::wstring::wstring(v471, (__int64)L"Lighting.Light1_CameraOrientationTracking");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v471, 0LL, a2);
  unknown_libname_101(v471);
  std::wstring::wstring(v472, (__int64)L"Lighting.Light1_CameraRelative");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v472, 0LL, a2);
  unknown_libname_101(v472);
  std::wstring::wstring(v473, (__int64)L"Lighting.Light1_ColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v473, v206, a2);
  unknown_libname_101(v473);
  std::wstring::wstring(v474, (__int64)L"Lighting.Light1_ColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v474, v207, a2);
  unknown_libname_101(v474);
  std::wstring::wstring(v475, (__int64)L"Lighting.Light1_ColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v475, v208, a2);
  unknown_libname_101(v475);
  std::wstring::wstring(v476, (__int64)L"Lighting.Light1_Enabled");
  LOBYTE(v209) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v476, v209, a2);
  unknown_libname_101(v476);
  std::wstring::wstring(v477, (__int64)L"Lighting.Light1_FrustumEdgeFalloff");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v477, v210, a2);
  unknown_libname_101(v477);
  std::wstring::wstring(v478, (__int64)L"Lighting.Light1_Intensity");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v478, v211, a2);
  unknown_libname_101(v478);
  std::wstring::wstring(v479, (__int64)L"Lighting.Light1_IntensityMode");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v479, 0LL, a2);
  unknown_libname_101(v479);
  std::wstring::wstring(v480, (__int64)L"Lighting.Light1_PositionX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v480, v212, a2);
  unknown_libname_101(v480);
  std::wstring::wstring(v481, (__int64)L"Lighting.Light1_PositionY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v481, v213, a2);
  unknown_libname_101(v481);
  std::wstring::wstring(v482, (__int64)L"Lighting.Light1_PositionZ");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v482, v214, a2);
  unknown_libname_101(v482);
  std::wstring::wstring(v483, (__int64)L"Lighting.Light1_Radius");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v483, v215, a2);
  unknown_libname_101(v483);
  std::wstring::wstring(v484, (__int64)L"Lighting.Light1_ShadowBufferSize");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v484, v216, a2);
  unknown_libname_101(v484);
  std::wstring::wstring(v485, (__int64)L"Lighting.Light1_ShadowEnabled");
  LOBYTE(v217) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v485, v217, a2);
  unknown_libname_101(v485);
  std::wstring::wstring(v486, (__int64)L"Lighting.Light1_ShadowFarClip");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v486, v218, a2);
  unknown_libname_101(v486);
  std::wstring::wstring(v487, (__int64)L"Lighting.Light1_ShadowFieldOfView");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v487, v219, a2);
  unknown_libname_101(v487);
  std::wstring::wstring(v488, (__int64)L"Lighting.Light1_ShadowFrustumSize");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v488, v220, a2);
  unknown_libname_101(v488);
  std::wstring::wstring(v489, (__int64)L"Lighting.Light1_ShadowNearClip");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v489, v221, a2);
  unknown_libname_101(v489);
  std::wstring::wstring(v490, (__int64)L"Lighting.Light1_SpotAngle");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v490, v222, a2);
  unknown_libname_101(v490);
  std::wstring::wstring(v491, (__int64)L"Lighting.Light1_TargetX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v491, v223, a2);
  unknown_libname_101(v491);
  std::wstring::wstring(v492, (__int64)L"Lighting.Light1_TargetY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v492, v224, a2);
  unknown_libname_101(v492);
  std::wstring::wstring(v493, (__int64)L"Lighting.Light1_TargetZ");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v493, v225, a2);
  unknown_libname_101(v493);
  std::wstring::wstring(v494, (__int64)L"Lighting.Light1_Type");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v494, 0LL, a2);
  unknown_libname_101(v494);
  std::wstring::wstring(v495, (__int64)L"Lighting.Light2_CameraOrientationTracking");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v495, 0LL, a2);
  unknown_libname_101(v495);
  std::wstring::wstring(v496, (__int64)L"Lighting.Light2_CameraRelative");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v496, 0LL, a2);
  unknown_libname_101(v496);
  std::wstring::wstring(v497, (__int64)L"Lighting.Light2_ColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v497, v226, a2);
  unknown_libname_101(v497);
  std::wstring::wstring(v498, (__int64)L"Lighting.Light2_ColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v498, v227, a2);
  unknown_libname_101(v498);
  std::wstring::wstring(v499, (__int64)L"Lighting.Light2_ColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v499, v228, a2);
  unknown_libname_101(v499);
  std::wstring::wstring(v500, (__int64)L"Lighting.Light2_Enabled");
  LOBYTE(v229) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v500, v229, a2);
  unknown_libname_101(v500);
  std::wstring::wstring(v501, (__int64)L"Lighting.Light2_FrustumEdgeFalloff");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v501, v230, a2);
  unknown_libname_101(v501);
  std::wstring::wstring(v502, (__int64)L"Lighting.Light2_Intensity");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v502, v231, a2);
  unknown_libname_101(v502);
  std::wstring::wstring(v503, (__int64)L"Lighting.Light2_IntensityMode");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v503, 0LL, a2);
  unknown_libname_101(v503);
  std::wstring::wstring(v504, (__int64)L"Lighting.Light2_PositionX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v504, v232, a2);
  unknown_libname_101(v504);
  std::wstring::wstring(v505, (__int64)L"Lighting.Light2_PositionY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v505, v233, a2);
  unknown_libname_101(v505);
  std::wstring::wstring(v506, (__int64)L"Lighting.Light2_PositionZ");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v506, v234, a2);
  unknown_libname_101(v506);
  std::wstring::wstring(v507, (__int64)L"Lighting.Light2_Radius");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v507, v235, a2);
  unknown_libname_101(v507);
  std::wstring::wstring(v508, (__int64)L"Lighting.Light2_ShadowBufferSize");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v508, v236, a2);
  unknown_libname_101(v508);
  std::wstring::wstring(v509, (__int64)L"Lighting.Light2_ShadowEnabled");
  LOBYTE(v237) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v509, v237, a2);
  unknown_libname_101(v509);
  std::wstring::wstring(v510, (__int64)L"Lighting.Light2_ShadowFarClip");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v510, v238, a2);
  unknown_libname_101(v510);
  std::wstring::wstring(v511, (__int64)L"Lighting.Light2_ShadowFieldOfView");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v511, v239, a2);
  unknown_libname_101(v511);
  std::wstring::wstring(v512, (__int64)L"Lighting.Light2_ShadowFrustumSize");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v512, v240, a2);
  unknown_libname_101(v512);
  std::wstring::wstring(v513, (__int64)L"Lighting.Light2_ShadowNearClip");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v513, v241, a2);
  unknown_libname_101(v513);
  std::wstring::wstring(v514, (__int64)L"Lighting.Light2_SpotAngle");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v514, v242, a2);
  unknown_libname_101(v514);
  std::wstring::wstring(v515, (__int64)L"Lighting.Light2_TargetX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v515, v243, a2);
  unknown_libname_101(v515);
  std::wstring::wstring(v516, (__int64)L"Lighting.Light2_TargetY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v516, v244, a2);
  unknown_libname_101(v516);
  std::wstring::wstring(v517, (__int64)L"Lighting.Light2_TargetZ");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v517, v245, a2);
  unknown_libname_101(v517);
  std::wstring::wstring(v518, (__int64)L"Lighting.Light2_Type");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v518, 0LL, a2);
  unknown_libname_101(v518);
  std::wstring::wstring(v519, (__int64)L"Lighting.MasterEnabled");
  LOBYTE(v246) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v519, v246, a2);
  unknown_libname_101(v519);
  std::wstring::wstring(v520, (__int64)L"Model.PositionAlignBase");
  LOBYTE(v247) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v520, v247, a2);
  unknown_libname_101(v520);
  std::wstring::wstring(v521, (__int64)L"Model.PositionOffsetX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v521, v248, a2);
  unknown_libname_101(v521);
  std::wstring::wstring(v522, (__int64)L"Model.PositionOffsetY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v522, v249, a2);
  unknown_libname_101(v522);
  std::wstring::wstring(v523, (__int64)L"Model.PositionOffsetZ");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v523, v250, a2);
  unknown_libname_101(v523);
  std::wstring::wstring(v524, (__int64)L"Model.RelativeModelLoadScale");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v524, v251, a2);
  unknown_libname_101(v524);
  std::wstring::wstring(v525, (__int64)L"Model.RotationOffsetAngle");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v525, v252, a2);
  unknown_libname_101(v525);
  std::wstring::wstring(v526, (__int64)L"Model.RotationOffsetAxisX");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v526, v253, a2);
  unknown_libname_101(v526);
  std::wstring::wstring(v527, (__int64)L"Model.RotationOffsetAxisY");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v527, v254, a2);
  unknown_libname_101(v527);
  std::wstring::wstring(v528, (__int64)L"Model.RotationOffsetAxisZ");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v528, v255, a2);
  unknown_libname_101(v528);
  std::wstring::wstring(v529, (__int64)L"Renderer.ClearColorA");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v529, v256, a2);
  unknown_libname_101(v529);
  std::wstring::wstring(v530, (__int64)L"Renderer.ClearColorB");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v530, v257, a2);
  unknown_libname_101(v530);
  std::wstring::wstring(v531, (__int64)L"Renderer.ClearColorG");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v531, v258, a2);
  unknown_libname_101(v531);
  std::wstring::wstring(v532, (__int64)L"Renderer.ClearColorOverride");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v532, 0LL, a2);
  unknown_libname_101(v532);
  std::wstring::wstring(v533, (__int64)L"Renderer.ClearColorR");
  (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v533, v259, a2);
  unknown_libname_101(v533);
  std::wstring::wstring(v534, (__int64)L"Renderer.Compatibility.GLTFComplianceEnabled");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v534, 0LL, a2);
  unknown_libname_101(v534);
  std::wstring::wstring(v535, (__int64)L"Shader.ForceNormalsForward");
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v535, 0LL, a2);
  return unknown_libname_101(v535);
}
