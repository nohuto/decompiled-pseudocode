/*
 * XREFs of _RtlpHpSegPageRangeHandleCommit@20 @ 0x4B37CEB5
 * Callers:
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpHpSegPageRangeHandleCommit(int a1, int a2, int *a3, _DWORD *a4, int a5)
{
  char v5; // cl
  unsigned int v6; // ebx
  unsigned int v7; // esi
  int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  int v11; // edi
  unsigned int v12; // edx
  unsigned int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // ecx
  int v21; // [esp+Ch] [ebp-28h]
  char v22; // [esp+10h] [ebp-24h]
  unsigned int v23; // [esp+14h] [ebp-20h]
  unsigned int v24; // [esp+18h] [ebp-1Ch]
  unsigned int v25; // [esp+20h] [ebp-14h]
  int v26; // [esp+20h] [ebp-14h]
  unsigned int v27; // [esp+24h] [ebp-10h]
  unsigned int v28; // [esp+28h] [ebp-Ch]
  unsigned int v29; // [esp+28h] [ebp-Ch]
  int v30; // [esp+2Ch] [ebp-8h]
  int v31; // [esp+30h] [ebp-4h]

  v5 = *(_BYTE *)(a1 + 5);
  v30 = -1;
  v6 = (unsigned int)*a3 >> v5;
  v27 = 1 << v5;
  v7 = a2 + 16 * v6;
  v8 = v6 << v5;
  v31 = v8;
  v28 = *a3 & ((1 << v5) - 1);
  v9 = v7 + 16 * ((v28 + *a4 - 1) >> v5);
  v21 = (v28 + *a4 - 1) & ((1 << v5) - 1);
  v10 = v21 + 1;
  v24 = v9;
  v11 = -1;
  v23 = v21 + 1;
  v12 = 0;
  if ( !v28 )
    goto LABEL_28;
  if ( v7 != v24 )
    v10 = v27;
  v25 = v10;
  v13 = *(unsigned __int8 *)(v7 + 12) >> 5;
  v22 = v13;
  if ( a5 <= 1 && v13 < v25 )
  {
    v12 = v25 - v13;
    v28 = *(unsigned __int8 *)(v7 + 12) >> 5;
    v13 = v25;
LABEL_10:
    v14 = v8 + v13;
    v11 = v8 + v28;
    v30 = v14;
    if ( v12 )
    {
      v11 = v8 + v28;
      v30 = v14;
      if ( a5 >= 1 )
      {
        v11 = v8 + v28;
        *(_BYTE *)(v7 + 12) = *(_BYTE *)(v7 + 12) & 0x1F | (32 * (v22 + v12));
        v30 = v14;
      }
    }
    goto LABEL_27;
  }
  if ( a5 == 2 && v13 > v28 )
  {
    v12 = v28 - v13;
    goto LABEL_10;
  }
LABEL_27:
  while ( 1 )
  {
    v7 += 16;
    v31 = v27 + v8;
LABEL_28:
    if ( v7 >= v24 )
      break;
    v15 = 0;
    v29 = *(unsigned __int8 *)(v7 + 12) >> 5;
    v8 = v31;
    if ( a5 > 1 || (v8 = v31, v29 >= v27) )
    {
      if ( a5 != 2 || !v29 )
        goto LABEL_26;
      if ( v11 == -1 )
        v11 = v8;
      v16 = *(unsigned __int8 *)(v7 + 12) >> 5;
      v15 = -v29;
    }
    else
    {
      if ( v11 == -1 )
        v11 = v31 + v29;
      v15 = v27 - v29;
      v16 = v27;
    }
    v26 = v16;
    v17 = v16;
    v8 = v31;
    v30 = v31 + v17;
    if ( v15 )
    {
      v30 = v31 + v26;
      if ( a5 >= 1 )
      {
        *(_BYTE *)(v7 + 12) = *(_BYTE *)(v7 + 12) & 0x1F | (32 * (v29 + v15));
        v30 = v31 + v26;
      }
    }
LABEL_26:
    v12 += v15;
  }
  if ( v7 == v24 )
  {
    v18 = *(unsigned __int8 *)(v7 + 12) >> 5;
    if ( a5 <= 1 && v18 < v23 )
    {
      if ( v11 == -1 )
        v11 = v18 + v31;
      v30 = v31 + v21 + 1;
      v19 = v23 - v18;
      goto LABEL_40;
    }
    if ( a5 == 2 && v18 )
    {
      if ( v11 == -1 )
        v11 = v31;
      v30 = v18 + v31;
      v19 = -v18;
LABEL_40:
      if ( v19 && a5 >= 1 )
        *(_BYTE *)(v7 + 12) = *(_BYTE *)(v7 + 12) & 0x1F | (32 * (v18 + v19));
    }
    else
    {
      v19 = 0;
    }
    v12 += v19;
  }
  if ( v12 )
  {
    *a3 = v11;
    *a4 = v30 - v11;
  }
  return v12;
}
