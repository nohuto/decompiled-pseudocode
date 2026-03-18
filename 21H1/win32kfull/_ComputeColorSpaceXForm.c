/*
 * XREFs of _ComputeColorSpaceXForm @ 0x1BDAAF
 * Callers:
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MulFD6 @ 0xED8A8 (_MulFD6.c)
 *     _MulDivFD6Pairs @ 0xED94C (_MulDivFD6Pairs.c)
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _ComputeInverseMatrix3x3 @ 0x1BC698 (_ComputeInverseMatrix3x3.c)
 */

int __fastcall ComputeColorSpaceXForm(int a1, int *a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // esi
  int v16; // ebx
  int v17; // eax
  _DWORD *v18; // edi
  int v19; // ebx
  int v20; // ecx
  _DWORD *v21; // ebx
  int v22; // esi
  int v23; // eax
  int v24; // edi
  int v25; // edx
  int v26; // edx
  int v27; // esi
  int v28; // eax
  int result; // eax
  int v30; // [esp-40h] [ebp-E0h]
  int v31; // [esp-10h] [ebp-B0h]
  int v32; // [esp-8h] [ebp-A8h]
  _DWORD v33[9]; // [esp+Ch] [ebp-94h] BYREF
  int v34; // [esp+30h] [ebp-70h]
  int v35; // [esp+34h] [ebp-6Ch]
  int v36; // [esp+38h] [ebp-68h]
  int v37; // [esp+3Ch] [ebp-64h]
  int v38; // [esp+40h] [ebp-60h]
  int v39; // [esp+44h] [ebp-5Ch]
  int v40; // [esp+48h] [ebp-58h]
  int v41; // [esp+4Ch] [ebp-54h]
  int v42; // [esp+50h] [ebp-50h]
  _DWORD *v43; // [esp+54h] [ebp-4Ch]
  int v44; // [esp+58h] [ebp-48h]
  int v45; // [esp+5Ch] [ebp-44h]
  int v46; // [esp+60h] [ebp-40h]
  int v47; // [esp+64h] [ebp-3Ch]
  int v48; // [esp+68h] [ebp-38h]
  int v49; // [esp+6Ch] [ebp-34h]
  int v50; // [esp+70h] [ebp-30h]
  __int16 v51; // [esp+74h] [ebp-2Ch] BYREF
  __int16 v52; // [esp+76h] [ebp-2Ah]
  int v53; // [esp+78h] [ebp-28h]
  int v54; // [esp+7Ch] [ebp-24h]
  int v55; // [esp+80h] [ebp-20h]
  int v56; // [esp+84h] [ebp-1Ch]
  int v57; // [esp+88h] [ebp-18h]
  int v58; // [esp+8Ch] [ebp-14h]
  int v59; // [esp+90h] [ebp-10h]
  int v60; // [esp+94h] [ebp-Ch]
  int v61; // [esp+98h] [ebp-8h]

  v43 = a3;
  v4 = *a2;
  v47 = a2[1];
  v5 = a2[3];
  v49 = a2[4];
  v6 = a2[5];
  v39 = a1;
  v45 = v6;
  v7 = a2[8];
  v41 = a4;
  v48 = v4;
  v46 = v5;
  v40 = v7;
  v8 = a2[2];
  v50 = v8;
  if ( a4 >= 0 )
  {
    v10 = a4 - 1;
    v41 = a4 - 1;
    if ( a4 - 1 < 0 )
    {
      v10 = 5;
      v41 = 5;
    }
    v44 = 100 * (unsigned __int16)StdIlluminant[2 * v10];
    a2[6] = v44;
    v9 = 100 * (unsigned __int16)word_25B932[2 * v10];
    a2[7] = v9;
  }
  else
  {
    v44 = a2[6];
    v9 = a2[7];
  }
  v11 = v5 - v45;
  v42 = v9;
  v51 = 3;
  v54 = v4;
  v52 = 1;
  v53 = v40;
  v56 = v8;
  v58 = v49;
  v55 = v11;
  v57 = v45 - v47;
  v59 = v47 - v46;
  v12 = MulDivFD6Pairs((int)&v51);
  v13 = MulFD6(v42, v12);
  v51 = 4;
  v53 = v13;
  v54 = v44;
  v52 = 1;
  v55 = v11;
  v57 = v50 - v49;
  v59 = v45;
  v61 = v46;
  v56 = -v42;
  v58 = v50;
  v60 = -v49;
  v40 = MulDivFD6Pairs((int)&v51);
  v54 = v44;
  v55 = v45 - v47;
  v58 = -v48;
  v59 = v45;
  v61 = v47;
  v56 = -v42;
  v57 = v49 - v48;
  v60 = v49;
  v14 = MulDivFD6Pairs((int)&v51);
  v55 = v47 - v46;
  v35 = v14;
  v54 = v44;
  v56 = -v42;
  v58 = v48;
  v59 = v46;
  v61 = v47;
  v57 = v48 - v50;
  v60 = -v50;
  v15 = v40;
  v16 = MulDivFD6Pairs((int)&v51);
  v34 = v16;
  v33[0] = MulFD6(v48, v40);
  v33[1] = MulFD6(v50, v14);
  v33[2] = MulFD6(v49, v16);
  v30 = v46;
  v33[3] = MulFD6(v47, v40);
  v43[12] = v33[3];
  v17 = MulFD6(v30, v14);
  v18 = v43;
  v33[4] = v17;
  v32 = v45;
  v43[13] = v17;
  v19 = MulFD6(v32, v16);
  v33[5] = v19;
  v31 = 1000000 - v47 - v48;
  v18[14] = v19;
  v33[6] = MulFD6(v31, v15);
  v33[7] = MulFD6(1000000 - v46 - v50, v35);
  v48 = v33[0] + v33[1] + v33[2];
  v36 = v48;
  v33[8] = MulFD6(1000000 - v45 - v49, v34);
  v20 = v19 + v33[3] + v33[4];
  v21 = v43;
  v22 = v33[6] + v33[8] + v33[7];
  v50 = v20;
  v37 = v20;
  v49 = v22;
  v38 = v22;
  if ( v41 < 0 )
  {
    qmemcpy(v43, v33, 0x24u);
    ComputeInverseMatrix3x3(v21, v33);
    v20 = v50;
    v22 = v49;
  }
  v23 = 0;
  v21[19] = v20;
  if ( v20 == 1000000 )
  {
    v24 = v48;
    v25 = v49;
  }
  else
  {
    if ( v20 )
    {
      v24 = DivFD6(v48, v20);
      v36 = v24;
      v25 = DivFD6(v22, v50);
      v23 = 0;
    }
    else
    {
      v24 = 0;
      v25 = 0;
      v36 = 0;
    }
    v38 = v25;
    v37 = 1000000;
    v50 = 1000000;
  }
  if ( *(_BYTE *)(v39 + 21) )
  {
    v26 = 0;
  }
  else
  {
    v27 = v24 + 3 * (v25 + 5000000);
    v39 = DivFD6(4 * v24, v27);
    v23 = DivFD6(9 * v50, v27);
    v26 = v39;
  }
  v21[16] = v23;
  v28 = v44;
  qmemcpy(v21, v33, 0x24u);
  v21[17] = v28;
  result = v42;
  v21[9] = v36;
  v21[15] = v26;
  v21[18] = result;
  v21[10] = v37;
  v21[11] = v38;
  return result;
}
