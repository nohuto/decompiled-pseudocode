/*
 * XREFs of _GetNextWchar@16 @ 0x4B36280C
 * Callers:
 *     _RtlGenerate8dot3Name@16 @ 0x4B362910 (_RtlGenerate8dot3Name@16.c)
 * Callees:
 *     _RtlIsValidOemCharacter@4 @ 0x4B362ED3 (_RtlIsValidOemCharacter@4.c)
 */

unsigned __int16 __fastcall GetNextWchar(unsigned __int16 *a1, unsigned int *a2, char a3, char a4)
{
  unsigned int v5; // edi
  unsigned __int16 v6; // si
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // ecx
  int i; // [esp+Ch] [ebp-8h]
  unsigned __int16 v12; // [esp+10h] [ebp-4h] BYREF

  v5 = *a1 >> 1;
  v6 = 0;
  v7 = *a2;
  if ( *a2 >= v5 )
    return v6;
  v8 = *((_DWORD *)a1 + 1);
  for ( i = v8; ; v8 = i )
  {
    v9 = *(unsigned __int16 *)(v8 + 2 * v7);
    *a2 = v7 + 1;
    v6 = v9;
    v12 = v9;
    if ( v9 <= 0x20 )
      goto LABEL_10;
    if ( v9 >= 0x7F )
    {
      if ( !a4 || !(unsigned __int8)RtlIsValidOemCharacter(&v12) )
        goto LABEL_10;
      v6 = v12;
    }
    if ( v6 != 46 )
      break;
    if ( !a3 )
      goto LABEL_13;
LABEL_10:
    v7 = *a2;
    v6 = 0;
    if ( *a2 >= v5 )
      return v6;
  }
  if ( v6 >= 0x80u )
    goto LABEL_15;
LABEL_13:
  if ( ((1 << (v6 & 0x1F)) & RtlFatIllegalTable[v6 >> 5]) != 0 )
    v6 = 95;
LABEL_15:
  if ( (unsigned __int16)(v6 - 97) <= 0x19u )
    v6 -= 32;
  return v6;
}
