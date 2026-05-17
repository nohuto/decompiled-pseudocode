/*
 * XREFs of _Normalization__Normalize@24 @ 0x4B367CF9
 * Callers:
 *     _RtlpNormalizeStringWorker@20 @ 0x4B36860D (_RtlpNormalizeStringWorker@20.c)
 * Callees:
 *     _NormBuffer__Append@8 @ 0x4B366BAB (_NormBuffer__Append@8.c)
 *     _NormBuffer__Construct@24 @ 0x4B366CA5 (_NormBuffer__Construct@24.c)
 *     _Normalization__GuessBetterCharCount@16 @ 0x4B367676 (_Normalization__GuessBetterCharCount@16.c)
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 */

int __fastcall Normalization__Normalize(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v7; // esi
  unsigned __int16 *v8; // ecx
  unsigned __int16 *v9; // edx
  int v10; // edx
  char v11; // al
  int v12; // ecx
  int v14; // [esp+10h] [ebp-48h] BYREF
  unsigned __int16 *v15; // [esp+14h] [ebp-44h]
  unsigned __int16 *v16; // [esp+18h] [ebp-40h]
  int v17; // [esp+1Ch] [ebp-3Ch]
  int v18; // [esp+24h] [ebp-34h]

  if ( !a2 || !a4 || !a6 )
    return -1073741811;
  NormBuffer__Construct((int)&v14, a2, a3, a4, a5, a1);
  v7 = 0;
  *a6 = 0;
  while ( 1 )
  {
    v8 = v16;
    v9 = v15;
    if ( v16 == v15 )
      break;
    if ( v7 )
      goto LABEL_16;
    v10 = *v16++;
    if ( v10 < *(_DWORD *)(a1 + 16)
      || (v11 = *(_BYTE *)(((unsigned int)v10 >> 7) + *(_DWORD *)(a1 + 20))) == 0
      || v11 == -5 && *(_BYTE *)(a1 + 61) )
    {
      if ( !NormBuffer__Append((int)&v14, v10) )
      {
        v8 = v16;
        v7 = -1073741789;
        v9 = v15;
        break;
      }
    }
    else
    {
      v7 = Normalization__NormalizeCharacter(v11, &v14);
    }
  }
  if ( !v7 )
  {
    v12 = (v18 - v17) >> 1;
    goto LABEL_19;
  }
LABEL_16:
  if ( v7 == -1073741789 )
    v12 = Normalization__GuessBetterCharCount(a1, ((int)v8 - v14) >> 1, v9 - v8 + 1, (v18 - v17) >> 1);
  else
    v12 = (((int)v8 - v14) >> 1) - 1;
LABEL_19:
  *a6 = v12;
  return v7;
}
