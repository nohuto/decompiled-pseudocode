/*
 * XREFs of _SHATransformP3@8 @ 0x4B3042A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall SHATransformP3(int *a1, unsigned int *a2)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  int v6; // ebx
  unsigned __int32 v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // edi
  unsigned __int32 v12; // ecx
  int v13; // esi
  int v14; // edx
  unsigned __int32 v15; // ebx
  int v16; // esi
  int v17; // ecx
  unsigned __int32 v18; // eax
  int v19; // esi
  int v20; // ebx
  unsigned __int32 v21; // edi
  int v22; // esi
  int v23; // eax
  unsigned __int32 v24; // edx
  int v25; // esi
  int v26; // edi
  unsigned __int32 v27; // ecx
  int v28; // esi
  int v29; // edx
  unsigned __int32 v30; // ebx
  int v31; // esi
  int v32; // ecx
  unsigned __int32 v33; // eax
  int v34; // esi
  int v35; // ebx
  unsigned __int32 v36; // edi
  int v37; // esi
  int v38; // eax
  unsigned __int32 v39; // edx
  int v40; // esi
  int v41; // edi
  unsigned __int32 v42; // ecx
  int v43; // esi
  int v44; // edx
  unsigned __int32 v45; // ebx
  int v46; // esi
  int v47; // ecx
  unsigned __int32 v48; // eax
  int v49; // esi
  int v50; // ebx
  unsigned __int32 v51; // edi
  int v52; // ebp
  int v53; // eax
  int v54; // edx
  int v55; // ebp
  int v56; // edi
  int v57; // ecx
  int v58; // ebp
  int v59; // edx
  int v60; // ebx
  int v61; // ebp
  int v62; // ecx
  int v63; // eax
  int v64; // ebp
  int v65; // ebx
  int v66; // edi
  int v67; // ebp
  int v68; // eax
  int v69; // edx
  int v70; // ebp
  int v71; // edi
  int v72; // ecx
  int v73; // ebp
  int v74; // edx
  int v75; // ebx
  int v76; // ebp
  int v77; // ecx
  int v78; // eax
  int v79; // ebp
  int v80; // ebx
  int v81; // edi
  int v82; // ebp
  int v83; // eax
  int v84; // edx
  int v85; // ebp
  int v86; // edi
  int v87; // ecx
  int v88; // ebp
  int v89; // edx
  int v90; // ebx
  int v91; // ebp
  int v92; // ecx
  int v93; // eax
  int v94; // ebp
  int v95; // ebx
  int v96; // edi
  int v97; // ebp
  int v98; // eax
  int v99; // edx
  int v100; // ebp
  int v101; // edi
  int v102; // ecx
  int v103; // ebp
  int v104; // edx
  int v105; // ebx
  int v106; // ebp
  int v107; // ecx
  int v108; // eax
  int v109; // ebp
  int v110; // ebx
  int v111; // edi
  int v112; // ebp
  int v113; // eax
  int v114; // edx
  int v115; // ebp
  int v116; // edi
  int v117; // ecx
  int v118; // ebp
  int v119; // edx
  int v120; // ebx
  int v121; // ebp
  int v122; // ecx
  int v123; // eax
  int v124; // ebp
  int v125; // ebx
  int v126; // edi
  int v127; // ebp
  int v128; // eax
  int v129; // edx
  int v130; // ebp
  int v131; // edi
  int v132; // ecx
  int v133; // ebp
  int v134; // edx
  int v135; // ebx
  int v136; // ebp
  int v137; // ecx
  int v138; // eax
  int v139; // ebp
  int v140; // ebx
  int v141; // edi
  int v142; // ebp
  int v143; // eax
  int v144; // edx
  int v145; // ebp
  int v146; // edi
  int v147; // ecx
  int v148; // ebp
  int v149; // edx
  int v150; // ebx
  int v151; // ebp
  int v152; // ecx
  int v153; // eax
  int v154; // ebp
  int v155; // ebx
  int v156; // edi
  int v157; // ebp
  int v158; // eax
  int v159; // edx
  int v160; // ebp
  int v161; // edi
  int v162; // ecx
  int v163; // ebp
  int v164; // edx
  int v165; // ebx
  int v166; // ebp
  int v167; // ecx
  int v168; // eax
  int v169; // ebp
  int v170; // ebx
  int v171; // edi
  int v172; // ebp
  int v173; // eax
  int v174; // edx
  int v175; // ebp
  int v176; // edi
  int v177; // ecx
  int v178; // ebp
  int v179; // edx
  int v180; // ebx
  int v181; // ebp
  int v182; // ecx
  int v183; // eax
  int v184; // ebp
  int v185; // ebx
  int v186; // edi
  int v187; // ebp
  int v188; // eax
  int v189; // edx
  int v190; // ebp
  int v191; // edi
  int v192; // ecx
  int v193; // ebp
  int v194; // edx
  int v195; // ebx
  int v196; // ebp
  int v197; // ecx
  int v198; // eax
  int v199; // ebp
  int v200; // ebx
  int v201; // edi
  int v202; // ebp
  int v203; // eax
  int v204; // edx
  int v205; // ebp
  int v206; // edi
  int v207; // ecx
  int v208; // ebp
  int v209; // edx
  int v210; // ebx
  int v211; // ebp
  int v212; // ecx
  int v213; // eax
  int v214; // ebp
  int v215; // ebx
  int v216; // edi
  int v217; // ebp
  int v218; // eax
  int v219; // edx
  int v220; // ebp
  int v221; // edi
  int v222; // ecx
  int v223; // ebp
  int v224; // edx
  int v225; // ebx
  int v226; // ebp
  int v227; // ecx
  int v228; // eax
  int v229; // ebp
  int v230; // ebx
  int v231; // edi
  int v232; // ebp
  int v233; // eax
  int v234; // edx
  int v235; // ebp
  int v236; // edi
  int v237; // ecx
  int v238; // ebp
  int v239; // edx
  int v240; // ebx
  int result; // eax
  int v242; // ebx
  int v243; // ecx
  int v244; // edx
  int v245; // ebp
  unsigned __int32 v246; // [esp+0h] [ebp-150h]
  unsigned __int32 v247; // [esp+4h] [ebp-14Ch]
  unsigned __int32 v248; // [esp+8h] [ebp-148h]
  unsigned __int32 v249; // [esp+Ch] [ebp-144h]
  unsigned __int32 v250; // [esp+10h] [ebp-140h]
  unsigned __int32 v251; // [esp+14h] [ebp-13Ch]
  unsigned __int32 v252; // [esp+18h] [ebp-138h]
  unsigned __int32 v253; // [esp+1Ch] [ebp-134h]
  unsigned __int32 v254; // [esp+20h] [ebp-130h]
  unsigned __int32 v255; // [esp+24h] [ebp-12Ch]
  unsigned __int32 v256; // [esp+28h] [ebp-128h]
  unsigned __int32 v257; // [esp+2Ch] [ebp-124h]
  unsigned __int32 v258; // [esp+30h] [ebp-120h]
  unsigned __int32 v259; // [esp+34h] [ebp-11Ch]
  unsigned __int32 v260; // [esp+38h] [ebp-118h]
  unsigned __int32 v261; // [esp+3Ch] [ebp-114h]
  int v262; // [esp+40h] [ebp-110h]
  int v263; // [esp+44h] [ebp-10Ch]
  int v264; // [esp+48h] [ebp-108h]
  int v265; // [esp+4Ch] [ebp-104h]
  int v266; // [esp+50h] [ebp-100h]
  int v267; // [esp+54h] [ebp-FCh]
  int v268; // [esp+58h] [ebp-F8h]
  int v269; // [esp+5Ch] [ebp-F4h]
  int v270; // [esp+60h] [ebp-F0h]
  int v271; // [esp+64h] [ebp-ECh]
  int v272; // [esp+68h] [ebp-E8h]
  int v273; // [esp+6Ch] [ebp-E4h]
  int v274; // [esp+70h] [ebp-E0h]
  int v275; // [esp+74h] [ebp-DCh]
  int v276; // [esp+78h] [ebp-D8h]
  int v277; // [esp+7Ch] [ebp-D4h]
  int v278; // [esp+80h] [ebp-D0h]
  int v279; // [esp+84h] [ebp-CCh]
  int v280; // [esp+88h] [ebp-C8h]
  int v281; // [esp+8Ch] [ebp-C4h]
  int v282; // [esp+90h] [ebp-C0h]
  int v283; // [esp+94h] [ebp-BCh]
  int v284; // [esp+98h] [ebp-B8h]
  int v285; // [esp+9Ch] [ebp-B4h]
  int v286; // [esp+A0h] [ebp-B0h]
  int v287; // [esp+A4h] [ebp-ACh]
  int v288; // [esp+A8h] [ebp-A8h]
  int v289; // [esp+ACh] [ebp-A4h]
  int v290; // [esp+B0h] [ebp-A0h]
  int v291; // [esp+B4h] [ebp-9Ch]
  int v292; // [esp+B8h] [ebp-98h]
  int v293; // [esp+BCh] [ebp-94h]
  int v294; // [esp+C0h] [ebp-90h]
  int v295; // [esp+C4h] [ebp-8Ch]
  int v296; // [esp+C8h] [ebp-88h]
  int v297; // [esp+CCh] [ebp-84h]
  int v298; // [esp+D0h] [ebp-80h]
  int v299; // [esp+D4h] [ebp-7Ch]
  int v300; // [esp+D8h] [ebp-78h]
  int v301; // [esp+DCh] [ebp-74h]
  int v302; // [esp+E0h] [ebp-70h]
  int v303; // [esp+E4h] [ebp-6Ch]
  int v304; // [esp+E8h] [ebp-68h]
  int v305; // [esp+ECh] [ebp-64h]
  int v306; // [esp+F0h] [ebp-60h]
  int v307; // [esp+F4h] [ebp-5Ch]
  int v308; // [esp+F8h] [ebp-58h]
  int v309; // [esp+FCh] [ebp-54h]
  int v310; // [esp+100h] [ebp-50h]
  int v311; // [esp+104h] [ebp-4Ch]
  int v312; // [esp+108h] [ebp-48h]
  int v313; // [esp+10Ch] [ebp-44h]
  int v314; // [esp+110h] [ebp-40h]
  int v315; // [esp+114h] [ebp-3Ch]
  int v316; // [esp+118h] [ebp-38h]
  int v317; // [esp+11Ch] [ebp-34h]
  int v318; // [esp+120h] [ebp-30h]
  int v319; // [esp+124h] [ebp-2Ch]
  int v320; // [esp+128h] [ebp-28h]
  int v321; // [esp+12Ch] [ebp-24h]
  int v322; // [esp+130h] [ebp-20h]

  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  v246 = _byteswap_ulong(*a2);
  v5 = v4 ^ v2 & (v4 ^ v3);
  v6 = __ROR4__(v2, 2);
  v7 = v5 + __ROL4__(*a1, 5) + v246 + a1[4] + 1518500249;
  v247 = _byteswap_ulong(a2[1]);
  v8 = __ROR4__(*a1, 2);
  v9 = (v3 ^ *a1 & (v3 ^ v6)) + __ROL4__(v7, 5) + v247 + v4 + 1518500249;
  v248 = _byteswap_ulong(a2[2]);
  v10 = v6 ^ v7 & (v6 ^ v8);
  v11 = __ROR4__(v7, 2);
  v12 = v10 + __ROL4__(v9, 5) + v248 + v3 + 1518500249;
  v249 = _byteswap_ulong(a2[3]);
  v13 = v8 ^ v9 & (v8 ^ v11);
  v14 = __ROR4__(v9, 2);
  v15 = v13 + __ROL4__(v12, 5) + v249 + v6 + 1518500249;
  v250 = _byteswap_ulong(a2[4]);
  v16 = v11 ^ v12 & (v11 ^ v14);
  v17 = __ROR4__(v12, 2);
  v18 = v16 + __ROL4__(v15, 5) + v250 + v8 + 1518500249;
  v251 = _byteswap_ulong(a2[5]);
  v19 = v14 ^ v15 & (v14 ^ v17);
  v20 = __ROR4__(v15, 2);
  v21 = v19 + __ROL4__(v18, 5) + v251 + v11 + 1518500249;
  v252 = _byteswap_ulong(a2[6]);
  v22 = v17 ^ v18 & (v17 ^ v20);
  v23 = __ROR4__(v18, 2);
  v24 = v22 + __ROL4__(v21, 5) + v252 + v14 + 1518500249;
  v253 = _byteswap_ulong(a2[7]);
  v25 = v20 ^ v21 & (v20 ^ v23);
  v26 = __ROR4__(v21, 2);
  v27 = v25 + __ROL4__(v24, 5) + v253 + v17 + 1518500249;
  v254 = _byteswap_ulong(a2[8]);
  v28 = v23 ^ v24 & (v23 ^ v26);
  v29 = __ROR4__(v24, 2);
  v30 = v28 + __ROL4__(v27, 5) + v254 + v20 + 1518500249;
  v255 = _byteswap_ulong(a2[9]);
  v31 = v26 ^ v27 & (v26 ^ v29);
  v32 = __ROR4__(v27, 2);
  v33 = v31 + __ROL4__(v30, 5) + v255 + v23 + 1518500249;
  v256 = _byteswap_ulong(a2[10]);
  v34 = v29 ^ v30 & (v29 ^ v32);
  v35 = __ROR4__(v30, 2);
  v36 = v34 + __ROL4__(v33, 5) + v256 + v26 + 1518500249;
  v257 = _byteswap_ulong(a2[11]);
  v37 = v32 ^ v33 & (v32 ^ v35);
  v38 = __ROR4__(v33, 2);
  v39 = v37 + __ROL4__(v36, 5) + v257 + v29 + 1518500249;
  v258 = _byteswap_ulong(a2[12]);
  v40 = v35 ^ v36 & (v35 ^ v38);
  v41 = __ROR4__(v36, 2);
  v42 = v40 + __ROL4__(v39, 5) + v258 + v32 + 1518500249;
  v259 = _byteswap_ulong(a2[13]);
  v43 = v38 ^ v39 & (v38 ^ v41);
  v44 = __ROR4__(v39, 2);
  v45 = v43 + __ROL4__(v42, 5) + v259 + v35 + 1518500249;
  v260 = _byteswap_ulong(a2[14]);
  v46 = v41 ^ v42 & (v41 ^ v44);
  v47 = __ROR4__(v42, 2);
  v48 = v46 + __ROL4__(v45, 5) + v260 + v38 + 1518500249;
  v261 = _byteswap_ulong(a2[15]);
  v49 = v44 ^ v45 & (v44 ^ v47);
  v50 = __ROR4__(v45, 2);
  v51 = v49 + __ROL4__(v48, 5) + v261 + v41 + 1518500249;
  v262 = __ROL4__(v259 ^ v254 ^ v248 ^ v246, 1);
  v52 = v47 ^ v48 & (v47 ^ v50);
  v53 = __ROR4__(v48, 2);
  v54 = v52 + v262 + __ROL4__(v51, 5) + v44 + 1518500249;
  v263 = __ROL4__(v260 ^ v255 ^ v249 ^ v247, 1);
  v55 = v50 ^ v51 & (v50 ^ v53);
  v56 = __ROR4__(v51, 2);
  v57 = v55 + v263 + __ROL4__(v54, 5) + v47 + 1518500249;
  v264 = __ROL4__(v261 ^ v256 ^ v250 ^ v248, 1);
  v58 = v53 ^ v54 & (v53 ^ v56);
  v59 = __ROR4__(v54, 2);
  v60 = v58 + v264 + __ROL4__(v57, 5) + v50 + 1518500249;
  v265 = __ROL4__(v262 ^ v257 ^ v251 ^ v249, 1);
  v61 = v56 ^ v57 & (v56 ^ v59);
  v62 = __ROR4__(v57, 2);
  v63 = v61 + v265 + __ROL4__(v60, 5) + v53 + 1518500249;
  v266 = __ROL4__(v263 ^ v258 ^ v252 ^ v250, 1);
  v64 = v59 ^ v62 ^ v60;
  v65 = __ROR4__(v60, 2);
  v66 = v64 + v266 + __ROL4__(v63, 5) + v56 + 1859775393;
  v267 = __ROL4__(v264 ^ v259 ^ v253 ^ v251, 1);
  v67 = v62 ^ v65 ^ v63;
  v68 = __ROR4__(v63, 2);
  v69 = v67 + v267 + __ROL4__(v66, 5) + v59 + 1859775393;
  v268 = __ROL4__(v265 ^ v260 ^ v254 ^ v252, 1);
  v70 = v65 ^ v68 ^ v66;
  v71 = __ROR4__(v66, 2);
  v72 = v70 + v268 + __ROL4__(v69, 5) + v62 + 1859775393;
  v269 = __ROL4__(v266 ^ v261 ^ v255 ^ v253, 1);
  v73 = v68 ^ v71 ^ v69;
  v74 = __ROR4__(v69, 2);
  v75 = v73 + v269 + __ROL4__(v72, 5) + v65 + 1859775393;
  v270 = __ROL4__(v267 ^ v262 ^ v256 ^ v254, 1);
  v76 = v71 ^ v74 ^ v72;
  v77 = __ROR4__(v72, 2);
  v78 = v76 + v270 + __ROL4__(v75, 5) + v68 + 1859775393;
  v271 = __ROL4__(v268 ^ v263 ^ v257 ^ v255, 1);
  v79 = v74 ^ v77 ^ v75;
  v80 = __ROR4__(v75, 2);
  v81 = v79 + v271 + __ROL4__(v78, 5) + v71 + 1859775393;
  v272 = __ROL4__(v269 ^ v264 ^ v258 ^ v256, 1);
  v82 = v77 ^ v80 ^ v78;
  v83 = __ROR4__(v78, 2);
  v84 = v82 + v272 + __ROL4__(v81, 5) + v74 + 1859775393;
  v273 = __ROL4__(v270 ^ v265 ^ v259 ^ v257, 1);
  v85 = v80 ^ v83 ^ v81;
  v86 = __ROR4__(v81, 2);
  v87 = v85 + v273 + __ROL4__(v84, 5) + v77 + 1859775393;
  v274 = __ROL4__(v271 ^ v266 ^ v260 ^ v258, 1);
  v88 = v83 ^ v86 ^ v84;
  v89 = __ROR4__(v84, 2);
  v90 = v88 + v274 + __ROL4__(v87, 5) + v80 + 1859775393;
  v275 = __ROL4__(v272 ^ v267 ^ v261 ^ v259, 1);
  v91 = v86 ^ v89 ^ v87;
  v92 = __ROR4__(v87, 2);
  v93 = v91 + v275 + __ROL4__(v90, 5) + v83 + 1859775393;
  v276 = __ROL4__(v273 ^ v268 ^ v262 ^ v260, 1);
  v94 = v89 ^ v92 ^ v90;
  v95 = __ROR4__(v90, 2);
  v96 = v94 + v276 + __ROL4__(v93, 5) + v86 + 1859775393;
  v277 = __ROL4__(v274 ^ v269 ^ v263 ^ v261, 1);
  v97 = v92 ^ v95 ^ v93;
  v98 = __ROR4__(v93, 2);
  v99 = v97 + v277 + __ROL4__(v96, 5) + v89 + 1859775393;
  v278 = __ROL4__(v275 ^ v270 ^ v264 ^ v262, 1);
  v100 = v95 ^ v98 ^ v96;
  v101 = __ROR4__(v96, 2);
  v102 = v100 + v278 + __ROL4__(v99, 5) + v92 + 1859775393;
  v279 = __ROL4__(v276 ^ v271 ^ v265 ^ v263, 1);
  v103 = v98 ^ v101 ^ v99;
  v104 = __ROR4__(v99, 2);
  v105 = v103 + v279 + __ROL4__(v102, 5) + v95 + 1859775393;
  v280 = __ROL4__(v277 ^ v272 ^ v266 ^ v264, 1);
  v106 = v101 ^ v104 ^ v102;
  v107 = __ROR4__(v102, 2);
  v108 = v106 + v280 + __ROL4__(v105, 5) + v98 + 1859775393;
  v281 = __ROL4__(v278 ^ v273 ^ v267 ^ v265, 1);
  v109 = v104 ^ v107 ^ v105;
  v110 = __ROR4__(v105, 2);
  v111 = v109 + v281 + __ROL4__(v108, 5) + v101 + 1859775393;
  v282 = __ROL4__(v279 ^ v274 ^ v268 ^ v266, 1);
  v112 = v107 ^ v110 ^ v108;
  v113 = __ROR4__(v108, 2);
  v114 = v112 + v282 + __ROL4__(v111, 5) + v104 + 1859775393;
  v283 = __ROL4__(v280 ^ v275 ^ v269 ^ v267, 1);
  v115 = v110 ^ v113 ^ v111;
  v116 = __ROR4__(v111, 2);
  v117 = v115 + v283 + __ROL4__(v114, 5) + v107 + 1859775393;
  v284 = __ROL4__(v281 ^ v276 ^ v270 ^ v268, 1);
  v118 = v113 ^ v116 ^ v114;
  v119 = __ROR4__(v114, 2);
  v120 = v118 + v284 + __ROL4__(v117, 5) + v110 + 1859775393;
  v285 = __ROL4__(v282 ^ v277 ^ v271 ^ v269, 1);
  v121 = v116 ^ v119 ^ v117;
  v122 = __ROR4__(v117, 2);
  v123 = v121 + v285 + __ROL4__(v120, 5) + v113 + 1859775393;
  v286 = __ROL4__(v283 ^ v278 ^ v272 ^ v270, 1);
  v124 = v119 & (v122 | v120) | v122 & v120;
  v125 = __ROR4__(v120, 2);
  v126 = v124 + v286 + __ROL4__(v123, 5) + v116 - 1894007588;
  v287 = __ROL4__(v284 ^ v279 ^ v273 ^ v271, 1);
  v127 = v122 & (v125 | v123) | v125 & v123;
  v128 = __ROR4__(v123, 2);
  v129 = v127 + v287 + __ROL4__(v126, 5) + v119 - 1894007588;
  v288 = __ROL4__(v285 ^ v280 ^ v274 ^ v272, 1);
  v130 = v125 & (v128 | v126) | v128 & v126;
  v131 = __ROR4__(v126, 2);
  v132 = v130 + v288 + __ROL4__(v129, 5) + v122 - 1894007588;
  v289 = __ROL4__(v286 ^ v281 ^ v275 ^ v273, 1);
  v133 = v128 & (v131 | v129) | v131 & v129;
  v134 = __ROR4__(v129, 2);
  v135 = v133 + v289 + __ROL4__(v132, 5) + v125 - 1894007588;
  v290 = __ROL4__(v287 ^ v282 ^ v276 ^ v274, 1);
  v136 = v131 & (v134 | v132) | v134 & v132;
  v137 = __ROR4__(v132, 2);
  v138 = v136 + v290 + __ROL4__(v135, 5) + v128 - 1894007588;
  v291 = __ROL4__(v288 ^ v283 ^ v277 ^ v275, 1);
  v139 = v134 & (v137 | v135) | v137 & v135;
  v140 = __ROR4__(v135, 2);
  v141 = v139 + v291 + __ROL4__(v138, 5) + v131 - 1894007588;
  v292 = __ROL4__(v289 ^ v284 ^ v278 ^ v276, 1);
  v142 = v137 & (v140 | v138) | v140 & v138;
  v143 = __ROR4__(v138, 2);
  v144 = v142 + v292 + __ROL4__(v141, 5) + v134 - 1894007588;
  v293 = __ROL4__(v290 ^ v285 ^ v279 ^ v277, 1);
  v145 = v140 & (v143 | v141) | v143 & v141;
  v146 = __ROR4__(v141, 2);
  v147 = v145 + v293 + __ROL4__(v144, 5) + v137 - 1894007588;
  v294 = __ROL4__(v291 ^ v286 ^ v280 ^ v278, 1);
  v148 = v143 & (v146 | v144) | v146 & v144;
  v149 = __ROR4__(v144, 2);
  v150 = v148 + v294 + __ROL4__(v147, 5) + v140 - 1894007588;
  v295 = __ROL4__(v292 ^ v287 ^ v281 ^ v279, 1);
  v151 = v146 & (v149 | v147) | v149 & v147;
  v152 = __ROR4__(v147, 2);
  v153 = v151 + v295 + __ROL4__(v150, 5) + v143 - 1894007588;
  v296 = __ROL4__(v293 ^ v288 ^ v282 ^ v280, 1);
  v154 = v149 & (v152 | v150) | v152 & v150;
  v155 = __ROR4__(v150, 2);
  v156 = v154 + v296 + __ROL4__(v153, 5) + v146 - 1894007588;
  v297 = __ROL4__(v294 ^ v289 ^ v283 ^ v281, 1);
  v157 = v152 & (v155 | v153) | v155 & v153;
  v158 = __ROR4__(v153, 2);
  v159 = v157 + v297 + __ROL4__(v156, 5) + v149 - 1894007588;
  v298 = __ROL4__(v295 ^ v290 ^ v284 ^ v282, 1);
  v160 = v155 & (v158 | v156) | v158 & v156;
  v161 = __ROR4__(v156, 2);
  v162 = v160 + v298 + __ROL4__(v159, 5) + v152 - 1894007588;
  v299 = __ROL4__(v296 ^ v291 ^ v285 ^ v283, 1);
  v163 = v158 & (v161 | v159) | v161 & v159;
  v164 = __ROR4__(v159, 2);
  v165 = v163 + v299 + __ROL4__(v162, 5) + v155 - 1894007588;
  v300 = __ROL4__(v297 ^ v292 ^ v286 ^ v284, 1);
  v166 = v161 & (v164 | v162) | v164 & v162;
  v167 = __ROR4__(v162, 2);
  v168 = v166 + v300 + __ROL4__(v165, 5) + v158 - 1894007588;
  v301 = __ROL4__(v298 ^ v293 ^ v287 ^ v285, 1);
  v169 = v164 & (v167 | v165) | v167 & v165;
  v170 = __ROR4__(v165, 2);
  v171 = v169 + v301 + __ROL4__(v168, 5) + v161 - 1894007588;
  v302 = __ROL4__(v299 ^ v294 ^ v288 ^ v286, 1);
  v172 = v167 & (v170 | v168) | v170 & v168;
  v173 = __ROR4__(v168, 2);
  v174 = v172 + v302 + __ROL4__(v171, 5) + v164 - 1894007588;
  v303 = __ROL4__(v300 ^ v295 ^ v289 ^ v287, 1);
  v175 = v170 & (v173 | v171) | v173 & v171;
  v176 = __ROR4__(v171, 2);
  v177 = v175 + v303 + __ROL4__(v174, 5) + v167 - 1894007588;
  v304 = __ROL4__(v301 ^ v296 ^ v290 ^ v288, 1);
  v178 = v173 & (v176 | v174) | v176 & v174;
  v179 = __ROR4__(v174, 2);
  v180 = v178 + v304 + __ROL4__(v177, 5) + v170 - 1894007588;
  v305 = __ROL4__(v302 ^ v297 ^ v291 ^ v289, 1);
  v181 = v176 & (v179 | v177) | v179 & v177;
  v182 = __ROR4__(v177, 2);
  v183 = v181 + v305 + __ROL4__(v180, 5) + v173 - 1894007588;
  v306 = __ROL4__(v303 ^ v298 ^ v292 ^ v290, 1);
  v184 = v179 ^ v182 ^ v180;
  v185 = __ROR4__(v180, 2);
  v186 = v184 + v306 + __ROL4__(v183, 5) + v176 - 899497514;
  v307 = __ROL4__(v304 ^ v299 ^ v293 ^ v291, 1);
  v187 = v182 ^ v185 ^ v183;
  v188 = __ROR4__(v183, 2);
  v189 = v187 + v307 + __ROL4__(v186, 5) + v179 - 899497514;
  v308 = __ROL4__(v305 ^ v300 ^ v294 ^ v292, 1);
  v190 = v185 ^ v188 ^ v186;
  v191 = __ROR4__(v186, 2);
  v192 = v190 + v308 + __ROL4__(v189, 5) + v182 - 899497514;
  v309 = __ROL4__(v306 ^ v301 ^ v295 ^ v293, 1);
  v193 = v188 ^ v191 ^ v189;
  v194 = __ROR4__(v189, 2);
  v195 = v193 + v309 + __ROL4__(v192, 5) + v185 - 899497514;
  v310 = __ROL4__(v307 ^ v302 ^ v296 ^ v294, 1);
  v196 = v191 ^ v194 ^ v192;
  v197 = __ROR4__(v192, 2);
  v198 = v196 + v310 + __ROL4__(v195, 5) + v188 - 899497514;
  v311 = __ROL4__(v308 ^ v303 ^ v297 ^ v295, 1);
  v199 = v194 ^ v197 ^ v195;
  v200 = __ROR4__(v195, 2);
  v201 = v199 + v311 + __ROL4__(v198, 5) + v191 - 899497514;
  v312 = __ROL4__(v309 ^ v304 ^ v298 ^ v296, 1);
  v202 = v197 ^ v200 ^ v198;
  v203 = __ROR4__(v198, 2);
  v204 = v202 + v312 + __ROL4__(v201, 5) + v194 - 899497514;
  v313 = __ROL4__(v310 ^ v305 ^ v299 ^ v297, 1);
  v205 = v200 ^ v203 ^ v201;
  v206 = __ROR4__(v201, 2);
  v207 = v205 + v313 + __ROL4__(v204, 5) + v197 - 899497514;
  v314 = __ROL4__(v311 ^ v306 ^ v300 ^ v298, 1);
  v208 = v203 ^ v206 ^ v204;
  v209 = __ROR4__(v204, 2);
  v210 = v208 + v314 + __ROL4__(v207, 5) + v200 - 899497514;
  v315 = __ROL4__(v312 ^ v307 ^ v301 ^ v299, 1);
  v211 = v206 ^ v209 ^ v207;
  v212 = __ROR4__(v207, 2);
  v213 = v211 + v315 + __ROL4__(v210, 5) + v203 - 899497514;
  v316 = __ROL4__(v313 ^ v308 ^ v302 ^ v300, 1);
  v214 = v209 ^ v212 ^ v210;
  v215 = __ROR4__(v210, 2);
  v216 = v214 + v316 + __ROL4__(v213, 5) + v206 - 899497514;
  v317 = __ROL4__(v314 ^ v309 ^ v303 ^ v301, 1);
  v217 = v212 ^ v215 ^ v213;
  v218 = __ROR4__(v213, 2);
  v219 = v217 + v317 + __ROL4__(v216, 5) + v209 - 899497514;
  v318 = __ROL4__(v315 ^ v310 ^ v304 ^ v302, 1);
  v220 = v215 ^ v218 ^ v216;
  v221 = __ROR4__(v216, 2);
  v222 = v220 + v318 + __ROL4__(v219, 5) + v212 - 899497514;
  v319 = __ROL4__(v316 ^ v311 ^ v305 ^ v303, 1);
  v223 = v218 ^ v221 ^ v219;
  v224 = __ROR4__(v219, 2);
  v225 = v223 + v319 + __ROL4__(v222, 5) + v215 - 899497514;
  v320 = __ROL4__(v317 ^ v312 ^ v306 ^ v304, 1);
  v226 = v221 ^ v224 ^ v222;
  v227 = __ROR4__(v222, 2);
  v228 = v226 + v320 + __ROL4__(v225, 5) + v218 - 899497514;
  v321 = __ROL4__(v318 ^ v313 ^ v307 ^ v305, 1);
  v229 = v224 ^ v227 ^ v225;
  v230 = __ROR4__(v225, 2);
  v231 = v229 + v321 + __ROL4__(v228, 5) + v221 - 899497514;
  v322 = __ROL4__(v319 ^ v314 ^ v308 ^ v306, 1);
  v232 = v227 ^ v230 ^ v228;
  v233 = __ROR4__(v228, 2);
  v234 = v232 + v322 + __ROL4__(v231, 5) + v224 - 899497514;
  v235 = v230 ^ v233 ^ v231;
  v236 = __ROR4__(v231, 2);
  v237 = v235 + __ROL4__(v320 ^ v315 ^ v309 ^ v307, 1) + __ROL4__(v234, 5) + v227 - 899497514;
  v238 = v233 ^ v236 ^ v234;
  v239 = __ROR4__(v234, 2);
  v240 = v238 + __ROL4__(v321 ^ v316 ^ v310 ^ v308, 1) + __ROL4__(v237, 5) + v230 - 899497514;
  result = *a1 + (v236 ^ v239 ^ v237) + __ROL4__(v322 ^ v317 ^ v311 ^ v309, 1) + __ROL4__(v240, 5) + v233 - 899497514;
  v242 = a1[1] + v240;
  v243 = a1[2] + __ROR4__(v237, 2);
  v244 = a1[3] + v239;
  v245 = a1[4];
  *a1 = result;
  a1[1] = v242;
  a1[2] = v243;
  a1[3] = v244;
  a1[4] = v245 + v236;
  return result;
}
