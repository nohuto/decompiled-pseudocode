/*
 * XREFs of MiComputeTrimAmount @ 0x14053B220
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeTrimAmount(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  char v7; // di
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r15
  char v11; // cl
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // r11
  unsigned __int8 v18; // al
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 96);
  v5 = v3 - v4;
  if ( v3 == v4 )
    return 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a2 + 174)) + 7104LL);
  v7 = 3;
  if ( v6 >= *(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 3) < 3u || (*(_BYTE *)a1 & 0x7F) != 0) )
    return 0LL;
  v8 = *(_QWORD *)(a2 + 136);
  v9 = v8;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 32LL);
  if ( v8 <= v10 )
    return 0LL;
  v11 = *(_BYTE *)(a2 + 184);
  if ( (v11 & 7) == 0 )
  {
    if ( v11 >= 0 )
    {
      if ( (*(_DWORD *)(a2 - 540) & 0x40) != 0 )
        goto LABEL_17;
      goto LABEL_14;
    }
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(a2 + 184) & 7) == 1 && v11 < 0 )
  {
LABEL_8:
    if ( v8 <= *(_QWORD *)(a2 + 112) )
      return 0LL;
  }
LABEL_14:
  v13 = *(_QWORD *)(a2 + 112);
  if ( v8 <= v13 )
    v9 = 0LL;
  else
    v9 = v8 - v13;
LABEL_17:
  v14 = *(unsigned __int8 *)(a1 + 1);
  if ( (_BYTE)v14 )
  {
    v15 = 0LL;
    if ( (unsigned int)v14 >= 8 )
      return 0LL;
    v16 = (_QWORD *)(a2 + 40 + 8 * v14);
    v17 = 8 - (unsigned int)*(unsigned __int8 *)(a1 + 1);
    do
    {
      v15 += *v16++;
      --v17;
    }
    while ( v17 );
    if ( !v15 )
      return 0LL;
  }
  else
  {
    v15 = (v8 - *(_QWORD *)(a2 + 112)) & -(__int64)(*(_QWORD *)(a2 + 112) < v8);
  }
  v18 = *(_BYTE *)a1 & 0x7F;
  if ( v18 > 1u )
  {
    if ( v18 == 4 && v6 < 0xE0 )
    {
      v9 = v8 - v10;
    }
    else
    {
      if ( v4 > v3 )
        return 0LL;
      if ( *(_BYTE *)(a2 + 186) != 2 )
      {
        v22 = *(_QWORD *)(a1 + 104);
        v23 = *(_QWORD *)(a1 + 88);
        if ( v22 > v23 )
          v15 /= v22 / v23;
      }
      if ( v15 > v9 )
        v15 = v9;
      v9 = v15;
    }
  }
  else
  {
    if ( *(_BYTE *)(a2 + 186) != 2 )
      v7 = 1;
    v19 = v15 >> v7;
    v20 = *(_QWORD *)(a1 + 104);
    if ( v20 >= v15 )
    {
      v21 = v15 * (100 * v15 / v20) / 0x64;
      if ( v19 < v21 )
        v19 = v21;
    }
    if ( v19 <= v9 )
      v9 = v19;
  }
  if ( v9 <= v5 )
    v5 = v9;
  result = v5;
  v24 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a2 + 174));
  ++*(_DWORD *)(*(_QWORD *)(v24 + 6848) + 4LL * (*(_BYTE *)a1 & 0x7F) + 2540);
  return result;
}
