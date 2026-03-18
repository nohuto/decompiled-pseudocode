/*
 * XREFs of ?uDiv128by64@@YG_K_K00AA_K@Z @ 0x158D5A
 * Callers:
 *     ?Div128by64@@YG_J_J_K0AA_J@Z @ 0x156DE4 (-Div128by64@@YG_J_J_K0AA_J@Z.c)
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     __allshl @ 0xF91E5 (__allshl.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 *     __aullshr @ 0xF91FD (__aullshr.c)
 *     ?NumberOfLeadingZeros@@YGH_K@Z @ 0x157957 (-NumberOfLeadingZeros@@YGH_K@Z.c)
 */

int __userpurge uDiv128by64@<eax>(
        _DWORD *a1@<ecx>,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  int v6; // eax
  char v7; // bl
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  unsigned int v14; // edi
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  bool v17; // cf
  unsigned int v18; // esi
  unsigned __int64 v19; // rax
  bool v20; // cc
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // edi
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int v30; // esi
  unsigned int v31; // edx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // kr28_8
  unsigned int v36; // [esp+8h] [ebp-20h]
  unsigned __int64 v37; // [esp+10h] [ebp-18h]
  unsigned int v38; // [esp+18h] [ebp-10h]
  unsigned int v39; // [esp+18h] [ebp-10h]
  int v40; // [esp+1Ch] [ebp-Ch]
  unsigned int v41; // [esp+20h] [ebp-8h]
  int v42; // [esp+24h] [ebp-4h]
  unsigned int v43; // [esp+34h] [ebp+Ch]
  unsigned int v44; // [esp+34h] [ebp+Ch]
  unsigned int v45; // [esp+34h] [ebp+Ch]
  unsigned int v46; // [esp+3Ch] [ebp+14h]
  unsigned int v47; // [esp+3Ch] [ebp+14h]
  unsigned int v48; // [esp+44h] [ebp+1Ch]

  if ( a2 >= a4 )
  {
    *a1 = -1;
    a1[1] = -1;
    return -1;
  }
  v6 = NumberOfLeadingZeros(a4);
  v7 = v6;
  v40 = v6;
  v8 = a4 << v6;
  v9 = HIDWORD(v8);
  v48 = HIDWORD(v8);
  v41 = v8;
  v10 = a3 >> (64 - v7);
  v11 = (int)((unsigned __int64)-(__int64)v40 >> 32) >> 31;
  v12 = (a2 << v40) | v11 & v10;
  v43 = (a2 << v40 >> 32) | v11 & HIDWORD(v10);
  v37 = a3 << v40;
  v13 = __PAIR64__(v43, v12) / v9;
  v46 = HIDWORD(v13);
  v14 = v13;
  v15 = v13 * v48;
  v16 = v46;
  v17 = v12 < (unsigned int)v15;
  v18 = v12 - v15;
  LODWORD(v19) = v48;
  v38 = v18;
  v44 = v43 - (v17 + HIDWORD(v15));
  HIDWORD(v19) = v44;
  while ( v16 )
  {
LABEL_11:
    v16 = (__PAIR64__(v16, -1) + (v14-- | 0xFFFFFFFF00000000uLL)) >> 32;
    v46 = v16;
    HIDWORD(v19) = (v19 + v18) >> 32;
    v18 += v19;
    v38 = v18;
    v44 = HIDWORD(v19);
    if ( HIDWORD(v19) )
      goto LABEL_14;
  }
  v19 = v14 * (unsigned __int64)v41;
  if ( HIDWORD(v19) >= v18 )
  {
    if ( HIDWORD(v19) > v18 )
    {
      LODWORD(v19) = v48;
    }
    else
    {
      v20 = (unsigned int)v19 <= HIDWORD(v37);
      LODWORD(v19) = v48;
      if ( v20 )
        goto LABEL_14;
    }
    HIDWORD(v19) = v44;
    v18 = v38;
    v16 = v46;
    goto LABEL_11;
  }
  LODWORD(v19) = v48;
LABEL_14:
  v21 = __PAIR64__(v46, v14) * __PAIR64__(v19, v41);
  HIDWORD(v22) = v12;
  LODWORD(v22) = 0;
  v23 = v22 - v21;
  v36 = HIDWORD(v37) + v23;
  v24 = v23 + HIDWORD(v37);
  v39 = v24 / v48;
  v45 = (v24 / v48) >> 32;
  v25 = v24 / v48 * v48;
  v26 = v24;
  v27 = v39;
  v17 = v26 < (unsigned int)v25;
  v28 = v26 - v25;
  v29 = v45;
  v47 = v28;
  v30 = HIDWORD(v24) - (v17 + HIDWORD(v25));
  v31 = v48;
  v42 = v30;
  while ( 2 )
  {
    if ( v29 )
    {
LABEL_22:
      v39 = v27 - 1;
      v29 = (__PAIR64__(v29, -1) + (v27-- | 0xFFFFFFFF00000000uLL)) >> 32;
      v45 = v29;
      v30 = (__PAIR64__(v30, v31) + v28) >> 32;
      v28 += v31;
      v47 = v28;
      v42 = v30;
      if ( v30 )
        goto LABEL_25;
      continue;
    }
    break;
  }
  v32 = v27 * (unsigned __int64)v41;
  if ( HIDWORD(v32) >= v28 )
  {
    if ( HIDWORD(v32) > v28 )
    {
      v29 = v45;
    }
    else
    {
      v20 = (unsigned int)v32 <= (unsigned int)v37;
      v29 = v45;
      if ( v20 )
        goto LABEL_25;
    }
    v31 = v48;
    v28 = v47;
    v30 = v42;
    goto LABEL_22;
  }
  v29 = v45;
LABEL_25:
  v33 = __PAIR64__(v29, v39) * __PAIR64__(v48, v41);
  v34 = __PAIR64__(v36, 0) - v33;
  v17 = __CFADD__((_DWORD)v37, -(int)v33);
  LODWORD(v33) = v37 - v33;
  HIDWORD(v33) = v17 + HIDWORD(v34);
  *(_QWORD *)a1 = v33 >> v40;
  return v39;
}
