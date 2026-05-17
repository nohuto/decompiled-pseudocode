/*
 * XREFs of _RtlSetImageMitigationPolicy@20 @ 0x4B3408F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _NtDeleteValueKey@8 @ 0x4B2F36E0 (_NtDeleteValueKey@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpDeleteEmptyImageFileOptionsKey@4 @ 0x4B342483 (_RtlpDeleteEmptyImageFileOptionsKey@4.c)
 */

unsigned int __stdcall RtlSetImageMitigationPolicy(_WORD *a1, int a2, char a3, int *a4, int a5)
{
  bool v5; // zf
  int inited; // eax
  int v7; // esi
  int v8; // eax
  int ValueKey; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  int v13; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // edx
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  int v24; // edi
  unsigned int v25; // edx
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // edx
  int v32; // edi
  int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  int v37; // ecx
  int v38; // esi
  int v39; // edx
  int v40; // ecx
  unsigned int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // ecx
  int v51; // ecx
  int v52; // edx
  int v53; // edx
  int v54; // eax
  int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  int v58; // ecx
  int v59; // edx
  int v60; // edi
  int v61; // esi
  int v62; // ebx
  unsigned int v63; // ecx
  int v64; // ecx
  unsigned int v65; // ecx
  int v66; // edi
  unsigned int v67; // ecx
  int v68; // edi
  int v69; // ecx
  int v70; // ecx
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // ecx
  unsigned int v74; // ecx
  unsigned int v75; // ecx
  int v76; // ecx
  int v77; // ecx
  unsigned int v78; // edx
  unsigned int v79; // edx
  int v80; // ebx
  int v81; // ebx
  unsigned int v82; // edx
  unsigned int v83; // edx
  int v84; // ecx
  int v85; // esi
  int v86; // ecx
  int v87; // ecx
  int v88; // edi
  unsigned int v89; // ecx
  int v90; // ecx
  int v91; // edx
  int v92; // edx
  int v93; // ebx
  int v94; // ecx
  unsigned int v95; // ecx
  unsigned int v96; // esi
  unsigned int v97; // ecx
  int v99; // [esp-4h] [ebp-D4h]
  int v100; // [esp-4h] [ebp-D4h]
  int v101; // [esp-4h] [ebp-D4h]
  int v102; // [esp-4h] [ebp-D4h]
  int v103; // [esp+Ch] [ebp-C4h]
  int v104; // [esp+Ch] [ebp-C4h]
  int v105; // [esp+Ch] [ebp-C4h]
  int v106; // [esp+Ch] [ebp-C4h]
  int v107; // [esp+Ch] [ebp-C4h]
  int v108; // [esp+Ch] [ebp-C4h]
  int v109; // [esp+Ch] [ebp-C4h]
  int v110; // [esp+Ch] [ebp-C4h]
  int v111; // [esp+Ch] [ebp-C4h]
  int v112; // [esp+Ch] [ebp-C4h]
  int v113; // [esp+Ch] [ebp-C4h]
  int v114; // [esp+Ch] [ebp-C4h]
  int v115; // [esp+Ch] [ebp-C4h]
  int v116; // [esp+Ch] [ebp-C4h]
  int v117; // [esp+10h] [ebp-C0h]
  int v118; // [esp+10h] [ebp-C0h]
  int v119; // [esp+10h] [ebp-C0h]
  int v120; // [esp+10h] [ebp-C0h]
  int v121; // [esp+10h] [ebp-C0h]
  int v122; // [esp+10h] [ebp-C0h]
  int v123; // [esp+10h] [ebp-C0h]
  int v124; // [esp+10h] [ebp-C0h]
  int v125; // [esp+10h] [ebp-C0h]
  int v126; // [esp+10h] [ebp-C0h]
  int v127; // [esp+10h] [ebp-C0h]
  int v128; // [esp+10h] [ebp-C0h]
  int v129; // [esp+14h] [ebp-BCh]
  int v130; // [esp+14h] [ebp-BCh]
  int v131; // [esp+14h] [ebp-BCh]
  int v132; // [esp+14h] [ebp-BCh]
  int v133; // [esp+14h] [ebp-BCh]
  int v134; // [esp+14h] [ebp-BCh]
  int v135; // [esp+14h] [ebp-BCh]
  int v136; // [esp+14h] [ebp-BCh]
  int v137; // [esp+14h] [ebp-BCh]
  int v138; // [esp+14h] [ebp-BCh]
  char v139; // [esp+18h] [ebp-B8h]
  char v140; // [esp+18h] [ebp-B8h]
  int v141; // [esp+18h] [ebp-B8h]
  int v142; // [esp+18h] [ebp-B8h]
  char v143; // [esp+18h] [ebp-B8h]
  int v144; // [esp+18h] [ebp-B8h]
  int v145; // [esp+1Ch] [ebp-B4h]
  int v146; // [esp+1Ch] [ebp-B4h]
  int v147; // [esp+1Ch] [ebp-B4h]
  int v148; // [esp+1Ch] [ebp-B4h]
  int v149; // [esp+1Ch] [ebp-B4h]
  int v150; // [esp+1Ch] [ebp-B4h]
  int v151; // [esp+20h] [ebp-B0h]
  int v152; // [esp+20h] [ebp-B0h]
  int v153; // [esp+20h] [ebp-B0h]
  int v154; // [esp+20h] [ebp-B0h]
  int v155; // [esp+24h] [ebp-ACh]
  int v156; // [esp+24h] [ebp-ACh]
  int v157; // [esp+24h] [ebp-ACh]
  int v158; // [esp+24h] [ebp-ACh]
  int v159; // [esp+24h] [ebp-ACh]
  int v160; // [esp+28h] [ebp-A8h]
  int v161; // [esp+28h] [ebp-A8h]
  int v162; // [esp+28h] [ebp-A8h]
  int v163; // [esp+28h] [ebp-A8h]
  int v164; // [esp+28h] [ebp-A8h]
  int v165; // [esp+30h] [ebp-A0h]
  int v166; // [esp+30h] [ebp-A0h]
  int v167; // [esp+30h] [ebp-A0h]
  int v168; // [esp+30h] [ebp-A0h]
  int v169; // [esp+30h] [ebp-A0h]
  int v170; // [esp+34h] [ebp-9Ch]
  int v171; // [esp+34h] [ebp-9Ch]
  int v172; // [esp+34h] [ebp-9Ch]
  int v173; // [esp+34h] [ebp-9Ch]
  int v174; // [esp+34h] [ebp-9Ch]
  int v175; // [esp+38h] [ebp-98h]
  int v176; // [esp+38h] [ebp-98h]
  int v177; // [esp+38h] [ebp-98h]
  int v178; // [esp+3Ch] [ebp-94h]
  int v179; // [esp+3Ch] [ebp-94h]
  int v180; // [esp+3Ch] [ebp-94h]
  int v181; // [esp+3Ch] [ebp-94h]
  HANDLE Handle; // [esp+40h] [ebp-90h] BYREF
  int v183; // [esp+44h] [ebp-8Ch]
  unsigned __int16 v184; // [esp+48h] [ebp-88h] BYREF
  int v185; // [esp+4Ch] [ebp-84h]
  int v186; // [esp+50h] [ebp-80h]
  int v187; // [esp+54h] [ebp-7Ch]
  int v188; // [esp+58h] [ebp-78h]
  _BYTE v189[8]; // [esp+5Ch] [ebp-74h] BYREF
  _BYTE v190[8]; // [esp+64h] [ebp-6Ch] BYREF
  _DWORD v191[6]; // [esp+6Ch] [ebp-64h] BYREF
  _BYTE v192[4]; // [esp+84h] [ebp-4Ch] BYREF
  _DWORD v193[7]; // [esp+88h] [ebp-48h] BYREF
  _BYTE v194[8]; // [esp+A4h] [ebp-2Ch] BYREF
  size_t Size; // [esp+ACh] [ebp-24h]
  _BYTE Src[28]; // [esp+B0h] [ebp-20h] BYREF
  int v197; // [esp+E0h] [ebp+10h]

  Handle = 0;
  v188 = a3 & 2;
  v165 = 1;
  v139 = a3 & 1;
  v5 = (a3 & 8) == 0;
  v170 = 6;
  v197 = a3 & 8;
  memset(v193, 0, 0x18u);
  if ( v5 )
    inited = RtlInitUnicodeStringEx((int)v189, L"MitigationOptions");
  else
    inited = RtlInitUnicodeStringEx((int)v189, L"MitigationAuditOptions");
  v7 = inited;
  if ( inited < 0 )
    goto LABEL_340;
  v7 = RtlInitUnicodeStringEx((int)v190, L"EAFModules");
  if ( v7 < 0 )
    goto LABEL_340;
  if ( !v139 && !v188 || !a5 && !a4 )
  {
    v7 = RtlInitUnicodeStringEx((int)&v184, a1);
    if ( v7 < 0 )
      goto LABEL_340;
    if ( a1 )
    {
      v8 = RtlpOpenImageFileOptionsKeyEx(&v184, 131087, v188 == 0, &Handle);
    }
    else
    {
      v191[0] = 24;
      v191[1] = 0;
      v191[4] = 0;
      v191[5] = 0;
      v191[3] = 576;
      v191[2] = &dword_4B281748;
      v8 = ZwOpenKey((int)&Handle, 131087, (int)v191);
    }
    v7 = v8;
    if ( v8 < 0 )
      goto LABEL_338;
    if ( v188 )
    {
      v7 = NtDeleteValueKey((int)Handle, (int)v189);
      if ( v7 >= 0 )
      {
        if ( !v197 )
          NtDeleteValueKey((int)Handle, (int)v190);
        RtlpDeleteEmptyImageFileOptionsKey(&v184);
      }
      goto LABEL_338;
    }
    ValueKey = ZwQueryValueKey((int)Handle, (int)v189, 2, (int)v194, 40, (int)v192);
    v7 = ValueKey;
    if ( ValueKey >= 0 )
    {
      if ( Size > 0x18 )
      {
        v7 = -1073741788;
        goto LABEL_338;
      }
      memcpy(v193, Src, Size);
    }
    else if ( ValueKey != -1073741772 )
    {
      goto LABEL_338;
    }
    switch ( a2 )
    {
      case 0:
        if ( v139 )
        {
          v193[0] &= 0xFFFFFFF0;
          goto LABEL_87;
        }
        if ( a5 != 8 )
          break;
        v10 = *a4;
        v11 = 4;
        if ( (*a4 & 4) != 0 )
        {
          v12 = 5;
          v175 = 7;
          v99 = 6;
        }
        else
        {
          v11 = 0;
          v175 = 3;
          v99 = 2;
          v12 = 1;
        }
        v13 = v99;
        if ( (v10 & 3) == 0 )
        {
          v14 = v11 | v193[0] & 0xFFFFFFF0;
          goto LABEL_86;
        }
        if ( (*a4 & 3) == 2 )
        {
          v15 = v193[0] & 0xFFFFFFF0;
          goto LABEL_37;
        }
        if ( (v10 & 8) != 0 )
          v16 = v175 | v193[0] & 0xFFFFFFF0;
        else
          v16 = v12 | v193[0] & 0xFFFFFFF0;
        goto LABEL_41;
      case 1:
        if ( v139 )
        {
          v193[0] &= 0xFF00F0FF;
          goto LABEL_87;
        }
        if ( a5 != 24 )
          break;
        v17 = *a4;
        if ( (*a4 & 4) != 0 )
        {
          v176 = 1024;
          v186 = 1536;
          v187 = 1792;
          v183 = 1280;
        }
        else
        {
          v176 = 0;
          v186 = 512;
          v187 = 768;
          v183 = 256;
        }
        v18 = a4[2];
        v185 = a4[3];
        v140 = v18;
        if ( (v18 & 4) != 0 )
        {
          v19 = 0x40000;
          v178 = 393216;
          v151 = 327680;
        }
        else
        {
          v19 = 0;
          v178 = 0x20000;
          v151 = 0x10000;
        }
        v103 = a4[4];
        v185 = a4[5];
        if ( (a4[4] & 4) != 0 )
        {
          v20 = 0x400000;
          v155 = 6291456;
          v21 = 5242880;
        }
        else
        {
          v20 = 0;
          v155 = 0x200000;
          v21 = 0x100000;
        }
        v145 = v21;
        if ( (v17 & 3) != 0 )
        {
          if ( (v17 & 3) == 2 )
          {
            v22 = v186 | v193[0] & 0xFFFFF0FF;
          }
          else if ( (v17 & 8) != 0 )
          {
            v22 = v187 | v193[0] & 0xFFFFF0FF;
          }
          else
          {
            v22 = v183 | v193[0] & 0xFFFFF0FF;
          }
        }
        else
        {
          v22 = v176 | v193[0] & 0xFFFFF0FF;
        }
        v23 = v22 & 0xFFF0FFFF;
        v141 = v140 & 3;
        if ( v141 )
        {
          v19 = v178;
          if ( v141 != 2 )
            v19 = v151;
        }
        v24 = v193[1];
        v25 = (v23 | v19) & 0xFF0FFFFF;
        if ( (v103 & 3) == 0 )
        {
          v26 = v25 | v20;
          v27 = v193[1] | v103 & 3;
          goto LABEL_66;
        }
        v28 = v155;
        if ( (v103 & 3) != 2 )
          v28 = v145;
        v29 = 0;
        v193[0] = v25 | v28;
        goto LABEL_70;
      case 2:
        if ( v139 )
        {
          v193[1] &= 0xFFFFFF0F;
          goto LABEL_336;
        }
        if ( a5 != 8 )
          break;
        v42 = *a4;
        if ( (*a4 & 4) != 0 )
        {
          v24 = 64;
          v147 = 96;
          v156 = 112;
          v152 = 80;
        }
        else
        {
          v24 = 0;
          v147 = 32;
          v156 = 48;
          v152 = 16;
        }
        if ( (v42 & 3) == 0 )
        {
          v29 = v193[1] & 0xFFFFFF0F;
          goto LABEL_70;
        }
        if ( (*a4 & 3) == 2 )
        {
          v30 = v147 | v193[1] & 0xFFFFFF0F;
        }
        else if ( (v42 & 8) != 0 )
        {
          v30 = v156 | v193[1] & 0xFFFFFF0F;
        }
        else
        {
          v30 = v152 | v193[1] & 0xFFFFFF0F;
        }
        goto LABEL_71;
      case 3:
        if ( v139 )
        {
          v193[0] &= 0xF0FFFFFF;
          goto LABEL_87;
        }
        if ( a5 != 8 )
          break;
        if ( (*a4 & 4) != 0 )
        {
          v31 = 0x4000000;
          v146 = 83886080;
          v32 = 100663296;
        }
        else
        {
          v31 = 0;
          v146 = 0x1000000;
          v32 = 0x2000000;
        }
        v37 = *a4 & 3;
        if ( !v37 )
        {
          v34 = v193[0] & 0xF0FFFFFF;
          goto LABEL_80;
        }
        if ( v37 == 2 )
        {
          v35 = v193[0] & 0xF0FFFFFF;
          goto LABEL_83;
        }
        v36 = v193[0] & 0xF0FFFFFF;
        goto LABEL_85;
      case 4:
        if ( v139 )
        {
          v193[0] &= 0xFFFFFFFu;
          goto LABEL_87;
        }
        if ( a5 != 8 )
          break;
        if ( (*a4 & 4) != 0 )
        {
          v31 = 0x40000000;
          v146 = 1342177280;
          v32 = 1610612736;
        }
        else
        {
          v31 = 0;
          v146 = 0x10000000;
          v32 = 0x20000000;
        }
        v33 = *a4 & 3;
        if ( !v33 )
        {
          v34 = v193[0] & 0xFFFFFFF;
          goto LABEL_80;
        }
        if ( v33 == 2 )
        {
          v35 = v193[0] & 0xFFFFFFF;
          goto LABEL_83;
        }
        v36 = v193[0] & 0xFFFFFFF;
LABEL_85:
        v14 = v146 | v36;
        goto LABEL_86;
      case 6:
        if ( v139 )
        {
          v193[1] &= 0xFFFFFFF0;
          goto LABEL_336;
        }
        if ( a5 != 8 )
          break;
        v38 = 4;
        if ( (*a4 & 4) != 0 )
        {
          v39 = 5;
          v100 = 6;
        }
        else
        {
          v38 = 0;
          v100 = 2;
          v39 = 1;
        }
        v40 = *a4 & 3;
        if ( !v40 )
        {
          v30 = v38 | v193[1] & 0xFFFFFFF0;
          goto LABEL_71;
        }
        if ( v40 == 2 )
        {
          v30 = v100 | v193[1] & 0xFFFFFFF0;
          goto LABEL_71;
        }
        v41 = v193[1] & 0xFFFFFFF0;
        goto LABEL_111;
      case 7:
        if ( v139 )
        {
          v193[1] &= 0xFFFFF0FF;
          v193[2] &= 0xFFFFF0FF;
          v48 = v193[3];
          goto LABEL_147;
        }
        if ( a5 != 16 )
          break;
        v58 = *a4;
        v180 = 1280;
        v59 = 1024;
        v173 = 512;
        if ( (*a4 & 4) != 0 )
        {
          v120 = 1024;
          v132 = 1536;
          v168 = 1792;
          v149 = 1280;
        }
        else
        {
          v132 = 512;
          v120 = 0;
          v168 = 768;
          v149 = 256;
        }
        v60 = a4[2];
        v185 = a4[3];
        v61 = 0;
        if ( (v60 & 4) != 0 )
        {
          v62 = 1536;
          v61 = 1024;
          v173 = 1536;
          v153 = 1536;
        }
        else
        {
          v180 = 256;
          v62 = 512;
          v153 = 512;
          v59 = 0;
        }
        if ( (v58 & 3) != 0 )
        {
          if ( (v58 & 3) == 2 )
          {
            v193[1] = v132 | v193[1] & 0xFFFFF0FF;
            v48 = v193[3];
            v47 = v173 | v193[2] & 0xFFFFF0FF;
            goto LABEL_146;
          }
          if ( (v58 & 8) != 0 )
            v65 = v168 | v193[1] & 0xFFFFF0FF;
          else
            v65 = v149 | v193[1] & 0xFFFFF0FF;
          v66 = v60 & 3;
          v193[1] = v65;
          v48 = v193[3];
          if ( !v66 )
          {
            v47 = v59 | v193[2] & 0xFFFFF0FF;
            goto LABEL_146;
          }
          v67 = v193[2] & 0xFFFFF0FF;
          if ( v66 == 2 )
            v64 = v153 | v67;
          else
            v64 = v180 | v67;
        }
        else
        {
          v193[1] = v120 | v193[1] & 0xFFFFF0FF;
          v63 = v193[2] & 0xFFFFF0FF;
          if ( (v60 & 3) == 2 )
            v64 = v62 | v63;
          else
            v64 = v61 | v63;
        }
        v193[2] = v64;
        goto LABEL_336;
      case 8:
        if ( v139 )
        {
          v193[1] &= 0xFFFF0FFF;
          goto LABEL_336;
        }
        v117 = 16;
        if ( a5 != 16 )
          break;
        v43 = *a4;
        v104 = 20480;
        v129 = 24576;
        v166 = 0x4000;
        if ( (*a4 & 4) != 0 )
        {
          v157 = 0x4000;
          v179 = 24576;
          v187 = 28672;
          v177 = 20480;
        }
        else
        {
          v179 = 0x2000;
          v157 = 0;
          v187 = 12288;
          v177 = 4096;
        }
        v44 = a4[2];
        v186 = 0;
        v183 = 0;
        v185 = a4[3];
        if ( (v44 & 4) != 0 )
        {
          v142 = 64;
          v171 = 96;
          v117 = 80;
        }
        else
        {
          v142 = 0;
          v166 = 0;
          v171 = 32;
          v129 = 0x2000;
          v104 = 4096;
        }
        if ( (v43 & 3) != 0 )
        {
          if ( (v43 & 3) == 2 )
          {
            v45 = v193[0];
            v46 = v179 | v193[1] & 0xFFFF0FFF;
          }
          else if ( (v43 & 8) != 0 )
          {
            v45 = v183 | v193[0];
            v46 = v187 | v193[1] & 0xFFFF0FFF;
          }
          else
          {
            v45 = v186 | v193[0];
            v46 = v177 | v193[1] & 0xFFFF0FFF;
          }
        }
        else
        {
          v45 = v193[0];
          v46 = v157 | v193[1] & 0xFFFF0FFF;
        }
        v193[1] = v46;
        v193[0] = v45;
        if ( (v44 & 3) != 0 )
        {
          v49 = v193[3] & 0xFFFF0FFF;
          if ( (v44 & 3) == 2 )
          {
            v47 = v171 | v193[2] & 0xFFFFFF0F;
            v48 = v129 | v49;
          }
          else
          {
            v47 = v117 | v193[2] & 0xFFFFFF0F;
            v48 = v104 | v49;
          }
        }
        else
        {
          v47 = v142 | v193[2] & 0xFFFFFF0F;
          v48 = v166 | v193[3] & 0xFFFF0FFF;
        }
LABEL_146:
        v193[2] = v47;
LABEL_147:
        v193[3] = v48;
        goto LABEL_336;
      case 9:
        if ( v139 )
        {
          v193[1] &= 0xFFF0FFFF;
          goto LABEL_336;
        }
        if ( a5 != 8 )
          break;
        v50 = *a4;
        if ( (*a4 & 4) != 0 )
        {
          v24 = 0x40000;
          v105 = 393216;
          v118 = 458752;
          v130 = 327680;
        }
        else
        {
          v24 = 0;
          v105 = 0x20000;
          v118 = 196608;
          v130 = 0x10000;
        }
        if ( (v50 & 3) != 0 )
        {
          if ( (*a4 & 3) == 2 )
          {
            v30 = v105 | v193[1] & 0xFFF0FFFF;
          }
          else if ( (v50 & 8) != 0 )
          {
            v30 = v118 | v193[1] & 0xFFF0FFFF;
          }
          else
          {
            v30 = v130 | v193[1] & 0xFFF0FFFF;
          }
        }
        else
        {
          v29 = v193[1] & 0xFFF0FFFF;
LABEL_70:
          v30 = v24 | v29;
        }
        goto LABEL_71;
      case 10:
        if ( v139 )
        {
          v193[1] &= 0xFFFFFu;
          goto LABEL_336;
        }
        if ( a5 != 24 )
          break;
        v51 = *a4;
        if ( (*a4 & 4) != 0 )
        {
          v106 = 0x400000;
          v119 = 6291456;
          v131 = 5242880;
        }
        else
        {
          v106 = 0;
          v119 = 0x200000;
          v131 = 0x100000;
        }
        v52 = a4[2];
        v185 = a4[3];
        v143 = v52;
        if ( (v52 & 4) != 0 )
        {
          v53 = 0x4000000;
          v172 = 100663296;
          v167 = 83886080;
        }
        else
        {
          v172 = 0x2000000;
          v53 = 0;
          v167 = 0x1000000;
        }
        v160 = a4[4];
        v185 = a4[5];
        if ( (a4[4] & 4) != 0 )
        {
          v148 = 0x40000000;
          v158 = 1610612736;
          v54 = 1342177280;
        }
        else
        {
          v148 = 0;
          v158 = 0x20000000;
          v54 = 0x10000000;
        }
        v55 = v51 & 3;
        if ( v55 )
        {
          if ( v55 == 2 )
            v56 = v119 | v193[1] & 0xFF0FFFFF;
          else
            v56 = v131 | v193[1] & 0xFF0FFFFF;
        }
        else
        {
          v56 = v106 | v193[1] & 0xFF0FFFFF;
        }
        v57 = v56 & 0xF0FFFFFF;
        v144 = v143 & 3;
        if ( v144 )
        {
          v53 = v172;
          if ( v144 != 2 )
            v53 = v167;
        }
        v39 = (v57 | v53) & 0xFFFFFFF;
        if ( (v160 & 3) == 0 )
        {
          v26 = v193[0];
          v27 = v39 | v148;
LABEL_66:
          v193[0] = v26;
          goto LABEL_88;
        }
        if ( (v160 & 3) == 2 )
          v41 = v158;
        else
          v41 = v54;
LABEL_111:
        v30 = v39 | v41;
LABEL_71:
        v193[1] = v30;
        goto LABEL_336;
      case 11:
        if ( v139 )
        {
          v193[3] &= 0xFFFFF0F0;
          v193[2] = LOWORD(v193[2]);
          if ( !v197 )
            NtDeleteValueKey((int)Handle, (int)v190);
          goto LABEL_336;
        }
        if ( a5 != 1072 )
          break;
        v68 = 1024;
        if ( v197 || (v7 = ZwSetValueKey((int)Handle, (int)v190, 0, 1, (int)(a4 + 12), 1024), v7 >= 0) )
        {
          v69 = a4[6];
          v185 = a4[7];
          if ( (v69 & 4) != 0 )
          {
            v107 = 0x40000;
            v121 = 393216;
            v133 = 327680;
          }
          else
          {
            v107 = 0;
            v121 = 0x20000;
            v133 = 0x10000;
          }
          v70 = v69 & 3;
          if ( v70 )
          {
            if ( v70 == 2 )
              v71 = v121 | v193[2] & 0xFFF0FFFF;
            else
              v71 = v133 | v193[2] & 0xFFF0FFFF;
          }
          else
          {
            v71 = v107 | v193[2] & 0xFFF0FFFF;
          }
          v185 = a4[9];
          if ( (a4[8] & 4) != 0 )
          {
            v108 = 0x400000;
            v122 = 6291456;
            v134 = 5242880;
          }
          else
          {
            v122 = 0x200000;
            v108 = 0;
            v134 = 0x100000;
          }
          v161 = a4[8] & 3;
          if ( v161 )
          {
            v73 = v71 & 0xFF0FFFFF;
            if ( v161 == 2 )
              v72 = v122 | v73;
            else
              v72 = v134 | v73;
          }
          else
          {
            v72 = v108 | v71 & 0xFF0FFFFF;
          }
          v185 = a4[11];
          if ( (a4[10] & 4) != 0 )
          {
            v109 = 0x4000000;
            v123 = 100663296;
            v135 = 83886080;
          }
          else
          {
            v123 = 0x2000000;
            v109 = 0;
            v135 = 0x1000000;
          }
          v162 = a4[10] & 3;
          if ( v162 )
          {
            v75 = v72 & 0xF0FFFFFF;
            if ( v162 == 2 )
              v74 = v123 | v75;
            else
              v74 = v135 | v75;
          }
          else
          {
            v74 = v109 | v72 & 0xF0FFFFFF;
          }
          if ( (*a4 & 4) != 0 )
          {
            v110 = 0x40000000;
            v124 = 1610612736;
            v136 = 1342177280;
          }
          else
          {
            v124 = 0x20000000;
            v110 = 0;
            v136 = 0x10000000;
          }
          v163 = *a4 & 3;
          if ( v163 )
          {
            v77 = v74 & 0xFFFFFFF;
            if ( v163 == 2 )
              v76 = v124 | v77;
            else
              v76 = v136 | v77;
          }
          else
          {
            v76 = v110 | v74 & 0xFFFFFFF;
          }
          v185 = a4[3];
          if ( (a4[2] & 4) != 0 )
          {
            v111 = 4;
            v165 = 5;
          }
          else
          {
            v170 = 2;
            v111 = 0;
          }
          v164 = a4[2] & 3;
          if ( v164 )
          {
            v79 = v193[3] & 0xFFFFFFF0;
            if ( v164 == 2 )
              v78 = v170 | v79;
            else
              v78 = v165 | v79;
          }
          else
          {
            v78 = v111 | v193[3] & 0xFFFFFFF0;
          }
          v80 = a4[4];
          v185 = a4[5];
          if ( (v80 & 4) != 0 )
          {
            v112 = 1536;
            v125 = 1280;
          }
          else
          {
            v112 = 512;
            v68 = 0;
            v125 = 256;
          }
          v81 = v80 & 3;
          if ( v81 )
          {
            v83 = v78 & 0xFFFFF0FF;
            v193[2] = v76;
            if ( v81 == 2 )
              v82 = v112 | v83;
            else
              v82 = v125 | v83;
          }
          else
          {
            v82 = v68 | v78 & 0xFFFFF0FF;
            v193[2] = v76;
          }
          v193[3] = v82;
          goto LABEL_336;
        }
        goto LABEL_338;
      case 12:
        if ( v139 )
        {
          v193[3] &= 0xFFFFFF0F;
          goto LABEL_336;
        }
        if ( a5 != 8 )
          break;
        v87 = *a4;
        if ( (*a4 & 4) != 0 )
        {
          v88 = 64;
          v115 = 96;
          v127 = 112;
          v137 = 80;
        }
        else
        {
          v88 = 0;
          v115 = 32;
          v127 = 48;
          v137 = 16;
        }
        if ( (v87 & 3) != 0 )
        {
          if ( (*a4 & 3) == 2 )
          {
            v89 = v115 | v193[3] & 0xFFFFFF0F;
          }
          else if ( (v87 & 8) != 0 )
          {
            v89 = v127 | v193[3] & 0xFFFFFF0F;
          }
          else
          {
            v89 = v137 | v193[3] & 0xFFFFFF0F;
          }
        }
        else
        {
          v89 = v88 | v193[3] & 0xFFFFFF0F;
        }
        v193[3] = v89;
        goto LABEL_336;
      case 13:
        if ( v139 )
        {
          v193[0] &= 0xFFFFFF0F;
          goto LABEL_87;
        }
        if ( a5 != 8 )
          break;
        v84 = *a4;
        if ( (*a4 & 4) != 0 )
        {
          v85 = 64;
          v101 = 96;
          v113 = 112;
          v126 = 80;
        }
        else
        {
          v85 = 0;
          v113 = 48;
          v101 = 32;
          v126 = 16;
        }
        v13 = v101;
        if ( (v84 & 3) == 0 )
        {
          v16 = v85 | v193[0] & 0xFFFFFF0F;
          goto LABEL_41;
        }
        if ( (*a4 & 3) != 2 )
        {
          if ( (v84 & 8) != 0 )
            v16 = v113 | v193[0] & 0xFFFFFF0F;
          else
            v16 = v126 | v193[0] & 0xFFFFFF0F;
          goto LABEL_41;
        }
        v15 = v193[0] & 0xFFFFFF0F;
LABEL_37:
        v14 = v13 | v15;
        goto LABEL_86;
      case 14:
        if ( v139 )
        {
          v193[0] &= 0xFFFF0FFF;
LABEL_87:
          v27 = v193[1];
LABEL_88:
          v193[1] = v27;
          goto LABEL_336;
        }
        if ( a5 == 8 )
        {
          if ( (*a4 & 4) != 0 )
          {
            v31 = 0x4000;
            v114 = 20480;
            v32 = 24576;
          }
          else
          {
            v31 = 0;
            v114 = 4096;
            v32 = 0x2000;
          }
          v86 = *a4 & 3;
          if ( v86 )
          {
            if ( v86 != 2 )
            {
              v14 = v114 | v193[0] & 0xFFFF0FFF;
LABEL_86:
              v193[0] = v14;
              goto LABEL_87;
            }
            v35 = v193[0] & 0xFFFF0FFF;
LABEL_83:
            v16 = v32 | v35;
          }
          else
          {
            v34 = v193[0] & 0xFFFF0FFF;
LABEL_80:
            v16 = v31 | v34;
          }
LABEL_41:
          v193[0] = v16;
          goto LABEL_336;
        }
        break;
      case 15:
        if ( v139 )
        {
          v193[3] &= 0xFFFFFFFu;
          v193[4] &= 0xFFFFFF00;
          goto LABEL_336;
        }
        if ( a5 != 24 )
          break;
        v90 = *a4;
        if ( (*a4 & 4) != 0 )
        {
          v116 = 0x40000000;
          v128 = 1610612736;
          v138 = 1879048192;
          v174 = 1342177280;
        }
        else
        {
          v116 = 0;
          v128 = 0x20000000;
          v138 = 805306368;
          v174 = 0x10000000;
        }
        v91 = a4[2];
        v185 = a4[3];
        v183 = v91;
        if ( (v91 & 4) != 0 )
        {
          v92 = 5;
          v169 = 4;
          v102 = 6;
        }
        else
        {
          v169 = 0;
          v102 = 2;
          v92 = 1;
        }
        v93 = a4[4];
        v185 = a4[5];
        if ( (v93 & 4) != 0 )
        {
          v150 = 64;
          v159 = 96;
          v154 = 112;
          v181 = 80;
        }
        else
        {
          v150 = 0;
          v159 = 32;
          v154 = 48;
          v181 = 16;
        }
        if ( (v90 & 3) != 0 )
        {
          if ( (v90 & 3) == 2 )
          {
            v94 = v128 | v193[3] & 0xFFFFFFF;
          }
          else if ( (v90 & 8) != 0 )
          {
            v94 = v138 | v193[3] & 0xFFFFFFF;
          }
          else
          {
            v94 = v174 | v193[3] & 0xFFFFFFF;
          }
        }
        else
        {
          v94 = v116 | v193[3] & 0xFFFFFFF;
        }
        v193[3] = v94;
        if ( (v183 & 3) != 0 )
        {
          if ( (v183 & 3) == 2 )
            v95 = v102 | v193[4] & 0xFFFFFFF0;
          else
            v95 = v92 | v193[4] & 0xFFFFFFF0;
        }
        else
        {
          v95 = v169 | v193[4] & 0xFFFFFFF0;
        }
        if ( (v93 & 3) != 0 )
        {
          if ( (v93 & 3) != 2 )
          {
            if ( (v93 & 8) != 0 )
              v97 = v154 | v95 & 0xFFFFFF0F;
            else
              v97 = v181 | v95 & 0xFFFFFF0F;
            v193[4] = v97;
LABEL_336:
            v7 = ZwSetValueKey((int)Handle, (int)v189, 0, 3, (int)v193, 24);
            goto LABEL_338;
          }
          v96 = v159 | v95 & 0xFFFFFF0F;
        }
        else
        {
          v96 = v150 | v95 & 0xFFFFFF0F;
        }
        v193[4] = v96;
        goto LABEL_336;
      default:
        goto LABEL_338;
    }
  }
  v7 = -1073741811;
LABEL_338:
  if ( Handle )
    NtClose(Handle);
LABEL_340:
  if ( v7 == -1073741772 )
    return v188 == 0 ? 0xC0000034 : 0;
  return v7;
}
