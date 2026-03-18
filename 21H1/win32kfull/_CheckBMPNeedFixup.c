/*
 * XREFs of _CheckBMPNeedFixup @ 0x1C43B3
 * Callers:
 *     _SetupAAHeader @ 0x1C3166 (_SetupAAHeader.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ULongAdd @ 0x1BAE44 (_ULongAdd.c)
 *     _ComputeByteOffset @ 0x1BB2FE (_ComputeByteOffset.c)
 *     _IntersectRECTL @ 0x1BB4FA (_IntersectRECTL.c)
 */

int __usercall CheckBMPNeedFixup@<eax>(int a1@<edx>, int a2, int *a3)
{
  int *v4; // edx
  unsigned int v5; // eax
  int v6; // ebx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // esi
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // edi
  signed int v16; // esi
  int v17; // eax
  PVOID v18; // eax
  unsigned int *v19; // ecx
  int v20; // edi
  unsigned int *v21; // ebx
  char *v22; // edx
  char v23; // cl
  char v24; // al
  bool v25; // zf
  unsigned int v26; // eax
  unsigned int *i; // ecx
  int v28; // eax
  int v29; // [esp+Ch] [ebp-74h]
  int v30; // [esp+10h] [ebp-70h]
  int v31; // [esp+14h] [ebp-6Ch] BYREF
  int v32; // [esp+18h] [ebp-68h]
  int v33; // [esp+1Ch] [ebp-64h]
  int v34; // [esp+20h] [ebp-60h]
  int v35; // [esp+24h] [ebp-5Ch]
  unsigned int v36; // [esp+28h] [ebp-58h]
  unsigned int *v37; // [esp+2Ch] [ebp-54h]
  PVOID pv; // [esp+30h] [ebp-50h]
  unsigned int *v39; // [esp+34h] [ebp-4Ch]
  unsigned int *v40; // [esp+38h] [ebp-48h]
  ULONG cjMemSize; // [esp+3Ch] [ebp-44h] BYREF
  unsigned int v42; // [esp+40h] [ebp-40h] BYREF
  _DWORD v43[14]; // [esp+44h] [ebp-3Ch] BYREF

  v40 = (unsigned int *)a2;
  v4 = a3;
  v5 = *(unsigned __int8 *)(a2 + 6);
  v37 = (unsigned int *)a3;
  v6 = *a3;
  v42 = 0;
  cjMemSize = 0;
  pv = (PVOID)v5;
  v30 = v6;
  if ( (v6 & 0x40) == 0 )
    return 0;
  if ( !v5 )
    goto LABEL_8;
  if ( v5 <= 2 )
    goto LABEL_52;
  if ( v5 > 6 )
  {
    if ( v5 <= 0xFB )
      goto LABEL_8;
    if ( v5 > 0xFE )
    {
LABEL_52:
      *a3 = v6 | 0x240;
      return 1;
    }
  }
  v33 = *(_DWORD *)(a2 + 8);
  v8 = *(_DWORD *)(a2 + 12);
  v32 = 0;
  v31 = 0;
  v34 = v8;
  if ( !IntersectRECTL(&v31, a3 + 9) )
    return 0;
  qmemcpy(v43, (const void *)(a1 + 8), sizeof(v43));
  v9 = v40[4];
  v10 = v32;
  LOBYTE(v43[0]) &= 0xF3u;
  v39 = (unsigned int *)(v34 - v32);
  v43[7] = v34 - v32;
  v43[9] = v9;
  v11 = v9 * v10 + ComputeByteOffset((unsigned int)pv, v31, (_BYTE *)v43 + 1);
  v12 = v33 - v31;
  v43[5] = v40[5] + v11;
  v29 = v33 - v31;
  v43[6] = v33 - v31;
  v36 = 3 * (v33 - v31);
  v43[8] = v36;
  if ( (ULongAdd(v33 - v31, 2, (int *)&v42) & 0x80000000) != 0 )
    return 0;
  v13 = 3 * v42;
  if ( !is_mul_ok(3u, v42) )
    return 0;
  v42 *= 3;
  if ( (ULongAdd(v13, 4, (int *)&v42) & 0x80000000) != 0 )
    return 0;
  v14 = v12 * (_DWORD)v39;
  v15 = v42 & 0xFFFFFFFC;
  v35 = v12 * (_DWORD)v39;
  if ( v12 * (int)v39 <= 2304 )
  {
    v6 |= 0x200u;
    goto LABEL_15;
  }
  if ( v14 > 0x4000 )
  {
    v43[7] = ((int)v39 + 5) / 6;
    v16 = 20;
    v43[9] *= 6;
  }
  else
  {
    v16 = v14 >> 3;
  }
  if ( (ULongAdd(v16, 1, (int *)&cjMemSize) & 0x80000000) != 0
    || (v17 = 4 * cjMemSize, !is_mul_ok(4u, cjMemSize))
    || (cjMemSize *= 4, (ULongAdd(v15, v17, (int *)&cjMemSize) & 0x80000000) != 0)
    || (v18 = EngAllocMem(1u, cjMemSize, 0x38355448u), (pv = v18) == 0) )
  {
    *v37 = v6 & 0xFFFFFFBF;
    return 0;
  }
  v19 = (unsigned int *)((char *)v18 + v15);
  v20 = 0;
  v40 = v19;
  v21 = v19;
  v42 = 0;
  v36 += (unsigned int)v18;
  while ( 1 )
  {
    cjMemSize = 0;
    v22 = (char *)((int (__cdecl *)(_DWORD *, PVOID))v43[2])(v43, v18);
    do
    {
      v23 = v22[2];
      LOBYTE(v42) = v22[1];
      v24 = *v22;
      BYTE1(v42) = v23;
      v25 = v23 == v24;
      BYTE2(v42) = v24;
      v26 = v42;
      if ( v25 )
      {
        v26 = v42 & 0xFCFCFCFC;
        v42 &= 0xFCFCFCFC;
      }
      *v40 = v26;
      for ( i = v21; *i != v26; --i )
        ;
      if ( i == v40 )
      {
        if ( ++v20 > v16 )
          break;
        ++v21;
        cjMemSize = 1;
        *v21 = v26;
      }
      v22 += 3;
    }
    while ( (unsigned int)v22 < v36 );
    v39 = v21;
    v6 = v30;
    if ( v16 != 20 && !cjMemSize )
      break;
LABEL_37:
    if ( v20 > v16 || !v43[7] )
      goto LABEL_41;
    v18 = pv;
    v21 = v39;
  }
  v28 = v35 - v29;
  v35 = v28;
  if ( v28 > 2304 )
  {
    v16 = v28 >> 4;
    goto LABEL_37;
  }
  v6 = v30 | 0x200;
LABEL_41:
  if ( v20 < 20 )
    v6 |= 0x200u;
  if ( v16 == 20 )
  {
    if ( v20 > 20 )
      goto LABEL_48;
  }
  else if ( v20 > 20 || v20 <= v16 )
  {
LABEL_48:
    v6 &= ~0x40u;
  }
  EngFreeMem(pv);
LABEL_15:
  v4 = (int *)v37;
LABEL_8:
  *v4 = v6;
  return v6 & 0x40;
}
