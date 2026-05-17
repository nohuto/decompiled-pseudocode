/*
 * XREFs of _NormBuffer__IsBlocked@8 @ 0x4B366E4E
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _NormBuffer__GetCurrentOutputChar@8 @ 0x4B366CF5 (_NormBuffer__GetCurrentOutputChar@8.c)
 */

bool __fastcall NormBuffer__IsBlocked(_DWORD *a1, unsigned __int8 a2)
{
  int v4; // eax
  int v5; // ecx
  unsigned __int16 *v6; // edi
  int v7; // eax
  int v8; // ecx
  signed int CurrentOutputChar; // eax
  unsigned __int8 v10; // al
  unsigned __int16 *v11; // eax
  int v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+10h] [ebp-8h]
  unsigned __int16 *v15; // [esp+14h] [ebp-4h] BYREF

  v4 = a1[5];
  v5 = a1[11];
  a1[16] = v4;
  if ( v4 == v5 )
    return 0;
  v6 = (unsigned __int16 *)(v5 - 2);
  v15 = (unsigned __int16 *)(v4 - 2);
  if ( v4 - 2 == v5 - 2 )
    return 0;
  v7 = a1[17];
  v8 = *(_DWORD *)(v7 + 20);
  v14 = v8;
  v13 = *(_DWORD *)(v7 + 24);
  while ( 1 )
  {
    CurrentOutputChar = NormBuffer__GetCurrentOutputChar(v8, &v15);
    v8 = v13 + (*(unsigned __int8 *)((CurrentOutputChar >> 7) + v14) << 7);
    v10 = *(_BYTE *)((CurrentOutputChar & 0x7F) + v8 - 128) & 0x3F;
    if ( v10 <= a2 )
      break;
    v11 = v15;
    a1[16] = v15;
    v15 = v11 - 1;
    if ( v11 - 1 == v6 )
      return 0;
  }
  return v10 == a2;
}
