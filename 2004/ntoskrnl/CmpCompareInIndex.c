/*
 * XREFs of CmpCompareInIndex @ 0x1405E61C0
 * Callers:
 *     CmpFindSubKeyInRoot @ 0x1405E5B0C (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405E6450 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpAddToLeaf @ 0x1406410D8 (CmpAddToLeaf.c)
 * Callees:
 *     NLS_UPCASE @ 0x140203390 (NLS_UPCASE.c)
 *     CmpDoCompareKeyName @ 0x1405E69B0 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpCompareInIndex(__int64 a1, unsigned __int16 *a2, int a3, __int16 *a4, _DWORD *a5)
{
  __int16 v5; // r10
  bool v8; // zf
  __int16 *v9; // rdi
  __int64 v10; // rbx
  _BYTE *v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // r10d
  __int64 v15; // rsi
  unsigned int v16; // ecx
  unsigned int v17; // r11d
  int v18; // r9d
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 result; // rax
  __int16 *v24; // rbx
  unsigned int v25; // eax

  v5 = *a4;
  v8 = ((*a4 - 26220) & 0xFDFF) == 0;
  *a5 = -1;
  if ( !v8 )
  {
    v24 = &a4[2 * a3];
    v25 = CmpDoCompareKeyName(a1, a2, *((unsigned int *)v24 + 1));
    v22 = v25;
    if ( v25 != 2 )
    {
      if ( !v25 )
        *a5 = *((_DWORD *)v24 + 1);
      return v22;
    }
    return 2LL;
  }
  v9 = &a4[4 * a3];
  if ( v5 != 26220 )
    goto LABEL_16;
  v10 = 0LL;
  v11 = v9 + 4;
  v12 = 0;
  v13 = 4;
  while ( *v11 )
  {
    ++v12;
    ++v11;
    if ( v12 >= 4 )
      goto LABEL_6;
  }
  v13 = v12;
LABEL_6:
  v14 = *a2 >> 1;
  if ( v14 >= v13 )
    v14 = v13;
  if ( !v14 )
  {
LABEL_16:
    v21 = CmpDoCompareKeyName(a1, a2, *((unsigned int *)v9 + 1));
    v22 = v21;
    if ( v21 != 2 )
    {
      if ( !v21 )
        *a5 = *((_DWORD *)v9 + 1);
      return v22;
    }
    return 2LL;
  }
  v15 = *((_QWORD *)a2 + 1);
  while ( 1 )
  {
    v16 = *(unsigned __int16 *)(v15 + 2 * v10);
    v17 = *((unsigned __int8 *)v9 + v10 + 8);
    if ( v16 >= 0x61 )
      v18 = v16 <= 0x7A ? v16 - 32 : NLS_UPCASE(v16);
    else
      v18 = *(unsigned __int16 *)(v15 + 2 * v10);
    if ( v17 >= 0x61 )
      v19 = v17 <= 0x7A ? v17 - 32 : NLS_UPCASE(v17);
    else
      v19 = v17;
    v20 = v18 - v19;
    if ( v20 )
      break;
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v14 )
      goto LABEL_16;
  }
  result = 1LL;
  if ( v20 <= 0 )
    return 0xFFFFFFFFLL;
  return result;
}
