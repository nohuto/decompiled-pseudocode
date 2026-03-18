/*
 * XREFs of vSrcTranCopyS4D16 @ 0x1C027A7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D16(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // r11
  __int64 v13; // rax
  int v14; // ecx
  int *v15; // rcx
  int v16; // r10d
  int v17; // eax
  int v18; // edi
  int v19; // esi
  int v20; // ebx
  int v21; // ebp
  char v23; // cl
  unsigned int v24; // r8d
  unsigned int v25; // eax
  _WORD *v26; // r12
  __int64 result; // rax
  _BYTE *v28; // r14
  char *v29; // r15
  _WORD *v30; // r11
  unsigned __int8 v31; // al
  unsigned int v32; // r11d
  int v33; // r9d
  unsigned int v34; // edx
  __int64 v35; // r10
  unsigned int v36; // edx
  _DWORD *v37; // rax
  int v38; // r11d
  _DWORD *v39; // rax
  unsigned int v40; // r11d
  unsigned int v41; // r8d
  int v42; // edx
  _DWORD *v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // r8d
  int v46; // r11d
  __int64 v47; // rcx
  char v48; // r12
  unsigned __int8 v49; // al
  __int16 v50; // ax
  int v51; // r9d
  unsigned int v52; // edx
  __int64 v53; // r10
  _DWORD *v54; // rax
  unsigned int v55; // r8d
  _DWORD *v56; // rax
  int v57; // edx
  _DWORD *v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // r8d
  _WORD *v61; // r11
  unsigned __int8 v62; // r12
  unsigned int v63; // r12d
  int v64; // r9d
  _DWORD *v65; // rax
  __int64 v66; // r10
  unsigned int v67; // edx
  int v68; // r12d
  _DWORD *v69; // rax
  unsigned int v70; // r8d
  unsigned int v71; // r12d
  int v72; // edx
  _DWORD *v73; // rax
  unsigned int v74; // edx
  unsigned int v75; // r8d
  int v76; // r12d
  unsigned __int8 v77; // al
  unsigned int v78; // r15d
  int v79; // r9d
  unsigned int v80; // edx
  __int64 v81; // r10
  _DWORD *v82; // rax
  int v83; // r15d
  _DWORD *v84; // rax
  unsigned int v85; // r15d
  unsigned int v86; // r8d
  int v87; // edx
  _DWORD *v88; // rax
  unsigned int v89; // edx
  unsigned int v90; // r8d
  int v91; // r15d
  unsigned int v92; // [rsp+0h] [rbp-68h]
  int v93; // [rsp+4h] [rbp-64h]
  int v94; // [rsp+8h] [rbp-60h]
  __int64 v95; // [rsp+10h] [rbp-58h]
  _WORD *v96; // [rsp+18h] [rbp-50h]
  __int64 v97; // [rsp+28h] [rbp-40h]
  _BYTE *v98; // [rsp+70h] [rbp+8h]
  char v99; // [rsp+78h] [rbp+10h]
  unsigned int v100; // [rsp+88h] [rbp+20h]
  unsigned int v101; // [rsp+90h] [rbp+28h]
  int v102; // [rsp+90h] [rbp+28h]
  int v103; // [rsp+98h] [rbp+30h]
  unsigned int v104; // [rsp+B0h] [rbp+48h]
  int v105; // [rsp+C0h] [rbp+58h]

  v12 = a3;
  v13 = *(_QWORD *)(a11 + 128);
  if ( !v13 )
    v13 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1808LL);
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 2) != 0 )
  {
    v15 = *(int **)(v13 + 112);
    v16 = *v15;
    v17 = v15[6];
    v18 = v15[1];
    v19 = v15[7];
    v20 = v15[2];
    v21 = v15[8];
    v105 = *v15;
  }
  else
  {
    v18 = 992;
    LOBYTE(v19) = 5;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v17) = 0;
      v16 = 31;
      v105 = 31;
      v20 = 31744;
      LOBYTE(v21) = 10;
    }
    else
    {
      LOBYTE(v17) = 10;
      v16 = 31744;
      v105 = 31744;
      LOBYTE(v21) = 0;
      v20 = 31;
    }
  }
  v23 = v17;
  v99 = v17;
  v24 = a6 & 0xFFFFFFFE;
  v103 = a6 - (a6 & 0xFFFFFFFE);
  v25 = a9 & v18;
  v104 = (a9 & (unsigned int)v16) >> v23;
  v100 = v25 >> v19;
  v92 = (a9 & (unsigned int)v20) >> v21;
  v93 = ((a5 + 1) & 0xFFFFFFFE) - a5;
  v94 = (int)(v24 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v26 = (_WORD *)(a4 + 2LL * a5);
  result = (unsigned int)(a2 / 2);
  v96 = v26;
  v28 = (_BYTE *)((int)result + a1);
  v98 = v28;
  if ( a8 )
  {
    v97 = v12;
    do
    {
      v29 = v28;
      v30 = v26;
      if ( v93 )
      {
        v31 = *v28 & 0xF;
        if ( v31 )
        {
          if ( v31 == 15 )
          {
            LOWORD(v32) = a9;
          }
          else
          {
            v33 = (unsigned __int16)*v26;
            v34 = v33 & v16;
            v35 = v31;
            v36 = v34 >> v99;
            v37 = &unk_1C02E65E0;
            if ( (int)(v104 - v36) >= 0 )
              v37 = &unk_1C02E6620;
            v38 = v37[v35];
            v39 = &unk_1C02E65E0;
            v40 = v105 & (((v36 << 16) + (v104 - v36) * v38) >> 16 << v99);
            v41 = (v33 & (unsigned int)v18) >> v19;
            if ( (int)(v100 - v41) >= 0 )
              v39 = &unk_1C02E6620;
            v42 = v39[v35];
            v43 = &unk_1C02E65E0;
            v44 = (v41 << 16) + (v100 - v41) * v42;
            v45 = (v33 & (unsigned int)v20) >> v21;
            v46 = v18 & (HIWORD(v44) << v19) | v40;
            if ( (int)(v92 - v45) >= 0 )
              v43 = &unk_1C02E6620;
            v32 = v20 & (((v45 << 16) + (v92 - v45) * v43[v35]) >> 16 << v21) | v46;
          }
          *v26 = v32;
        }
        v30 = v26 + 1;
        v29 = v28 + 1;
      }
      if ( v94 > 0 )
      {
        v47 = (unsigned int)v94;
        v95 = (unsigned int)v94;
        do
        {
          v48 = *v29;
          v49 = (unsigned __int8)*v29 >> 4;
          if ( v49 )
          {
            if ( v49 == 15 )
            {
              v50 = a9;
            }
            else
            {
              v51 = (unsigned __int16)*v30;
              v52 = (v51 & (unsigned int)v105) >> v99;
              v53 = v49;
              v54 = &unk_1C02E65E0;
              if ( (int)(v104 - v52) >= 0 )
                v54 = &unk_1C02E6620;
              v55 = (v51 & (unsigned int)v18) >> v19;
              v101 = v105 & (((v52 << 16) + (v104 - v52) * v54[v53]) >> 16 << v99);
              v56 = &unk_1C02E65E0;
              if ( (int)(v100 - v55) >= 0 )
                v56 = &unk_1C02E6620;
              v57 = v56[v53];
              v58 = &unk_1C02E65E0;
              v59 = (v55 << 16) + (v100 - v55) * v57;
              v60 = (v51 & (unsigned int)v20) >> v21;
              v102 = v18 & (HIWORD(v59) << v19) | v101;
              if ( (int)(v92 - v60) >= 0 )
                v58 = &unk_1C02E6620;
              v47 = v95;
              v50 = v20 & (((v60 << 16) + (v92 - v60) * v58[v53]) >> 16 << v21) | v102;
            }
            *v30 = v50;
          }
          v61 = v30 + 1;
          v62 = v48 & 0xF;
          if ( v62 )
          {
            if ( v62 == 15 )
            {
              LOWORD(v63) = a9;
            }
            else
            {
              v64 = (unsigned __int16)*v61;
              v65 = &unk_1C02E65E0;
              v66 = v62;
              v67 = (v64 & (unsigned int)v105) >> v99;
              if ( (int)(v104 - v67) >= 0 )
                v65 = &unk_1C02E6620;
              v68 = v65[v62];
              v69 = &unk_1C02E65E0;
              v70 = (v64 & (unsigned int)v18) >> v19;
              v71 = v105 & (((v67 << 16) + (v104 - v67) * v68) >> 16 << v99);
              if ( (int)(v100 - v70) >= 0 )
                v69 = &unk_1C02E6620;
              v72 = v69[v66];
              v73 = &unk_1C02E65E0;
              v74 = (v70 << 16) + (v100 - v70) * v72;
              v75 = (v64 & (unsigned int)v20) >> v21;
              v76 = v18 & (HIWORD(v74) << v19) | v71;
              if ( (int)(v92 - v75) >= 0 )
                v73 = &unk_1C02E6620;
              v63 = v20 & (((v75 << 16) + (v92 - v75) * v73[v66]) >> 16 << v21) | v76;
            }
            v47 = v95;
            *v61 = v63;
          }
          v30 = v61 + 1;
          ++v29;
          v95 = --v47;
        }
        while ( v47 );
        v28 = v98;
        v26 = v96;
      }
      if ( v103 )
      {
        v77 = (unsigned __int8)*v29 >> 4;
        if ( v77 )
        {
          if ( v77 == 15 )
          {
            LOWORD(v78) = a9;
          }
          else
          {
            v79 = (unsigned __int16)*v30;
            v80 = (v79 & (unsigned int)v105) >> v99;
            v81 = v77;
            v82 = &unk_1C02E65E0;
            if ( (int)(v104 - v80) >= 0 )
              v82 = &unk_1C02E6620;
            v83 = v82[v81];
            v84 = &unk_1C02E65E0;
            v85 = v105 & (((v80 << 16) + (v104 - v80) * v83) >> 16 << v99);
            v86 = (v79 & (unsigned int)v18) >> v19;
            if ( (int)(v100 - v86) >= 0 )
              v84 = &unk_1C02E6620;
            v87 = v84[v81];
            v88 = &unk_1C02E65E0;
            v89 = (v86 << 16) + (v100 - v86) * v87;
            v90 = (v79 & (unsigned int)v20) >> v21;
            v91 = v18 & (HIWORD(v89) << v19) | v85;
            if ( (int)(v92 - v90) >= 0 )
              v88 = &unk_1C02E6620;
            v78 = v20 & (((v90 << 16) + (v92 - v90) * v88[v81]) >> 16 << v21) | v91;
          }
          *v30 = v78;
        }
      }
      v28 += v97;
      result = (unsigned int)(a8 - 1);
      v16 = v105;
      v26 = (_WORD *)((char *)v26 + a7);
      a8 = result;
      v98 = v28;
      v96 = v26;
    }
    while ( (_DWORD)result );
  }
  return result;
}
