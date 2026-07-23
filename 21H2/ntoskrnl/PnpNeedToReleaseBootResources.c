/*
 * XREFs of PnpNeedToReleaseBootResources @ 0x140753410
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x1407532F8 (IopReleaseFilteredBootResources.c)
 * Callees:
 *     PnpIsRangeWithin @ 0x1407AD348 (PnpIsRangeWithin.c)
 */

__int64 __fastcall PnpNeedToReleaseBootResources(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int *v4; // rax
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  unsigned int v7; // r15d
  _DWORD *v8; // rdi
  unsigned int v9; // r12d
  unsigned __int8 v10; // si
  __int64 v11; // rax
  unsigned int v12; // ecx
  _DWORD *v13; // r14
  unsigned int v14; // r13d
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-58h]
  unsigned int v18; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v19; // [rsp+80h] [rbp+8h]
  _DWORD *v20; // [rsp+88h] [rbp+10h]
  int v22; // [rsp+98h] [rbp+20h]

  v20 = a2;
  v3 = 0;
  *a3 = 0;
  if ( *a2 != 1 )
    return v3;
  v4 = *(unsigned int **)(a1 + 544);
  if ( !v4 )
    return v3;
  v5 = *v4;
  if ( !*v4 )
    return v3;
  v6 = v4 + 1;
  v7 = 0;
  while ( 1 )
  {
    v8 = v6 + 4;
    v9 = 0;
    v18 = v6[3];
    if ( v18 )
      break;
LABEL_22:
    ++v7;
    v6 = v8;
    if ( v7 >= v5 )
      return v3;
  }
  while ( 1 )
  {
    v10 = *(_BYTE *)v8;
    v11 = 0LL;
    if ( !*(_BYTE *)v8 )
      goto LABEL_21;
    if ( v10 != 5 )
      break;
    v11 = (unsigned int)v8[1];
LABEL_21:
    ++v9;
    v8 = (_DWORD *)((char *)v8 + v11 + 20);
    if ( v9 >= v18 )
      goto LABEL_22;
  }
  if ( v10 >= 8u )
    goto LABEL_21;
  v12 = 0;
  v22 = 0;
  v19 = 0;
  v17 = a2[4];
  if ( !v17 )
    return 1;
  v13 = a2 + 5;
  while ( 1 )
  {
    v14 = 0;
    if ( *(_BYTE *)v13 == 5 )
    {
      v14 = v13[1];
      goto LABEL_15;
    }
    if ( v10 == *(_BYTE *)v13 )
      break;
LABEL_15:
    ++v12;
    v13 = (_DWORD *)((char *)v13 + v14 + 20);
    v19 = v12;
    if ( v12 >= v17 )
    {
      v15 = 1;
      goto LABEL_18;
    }
  }
  v22 = 1;
  if ( !(unsigned int)PnpIsRangeWithin(v8, v13) )
  {
    v12 = v19;
    goto LABEL_15;
  }
  v15 = 0;
LABEL_18:
  if ( !v22 )
    return 1;
  if ( !v15 )
  {
    a2 = v20;
    v11 = 0LL;
    goto LABEL_21;
  }
  *a3 = 1;
  return v3;
}
