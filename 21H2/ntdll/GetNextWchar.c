/*
 * XREFs of GetNextWchar @ 0x1800FC694
 * Callers:
 *     RtlGenerate8dot3Name @ 0x1800FC800 (RtlGenerate8dot3Name.c)
 * Callees:
 *     RtlIsValidOemCharacter @ 0x1800FCE3C (RtlIsValidOemCharacter.c)
 */

__int64 __fastcall GetNextWchar(unsigned __int16 *a1, unsigned int *a2, char a3, char a4)
{
  unsigned int v4; // r11d
  unsigned int v6; // edi
  unsigned __int16 v9; // r10
  __int64 v10; // rsi
  int v11; // eax
  unsigned __int16 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a2;
  v6 = *a1 >> 1;
  v9 = 0;
  if ( *a2 >= v6 )
    return v9;
  v10 = *((_QWORD *)a1 + 1);
  while ( 1 )
  {
    v9 = *(_WORD *)(v10 + 2LL * v4);
    *a2 = v4 + 1;
    v13 = v9;
    if ( v9 <= 0x20u )
      goto LABEL_10;
    if ( v9 >= 0x7Fu )
    {
      if ( !a4 || !(unsigned __int8)RtlIsValidOemCharacter(&v13) )
        goto LABEL_10;
      v9 = v13;
    }
    if ( v9 != 46 )
      break;
    if ( !a3 )
      goto LABEL_13;
LABEL_10:
    v4 = *a2;
    v9 = 0;
    if ( *a2 >= v6 )
      return v9;
  }
  if ( v9 >= 0x80u )
    goto LABEL_15;
LABEL_13:
  v11 = RtlFatIllegalTable[(unsigned __int64)v9 >> 5];
  if ( _bittest(&v11, v9 & 0x1F) )
    v9 = 95;
LABEL_15:
  if ( (unsigned __int16)(v9 - 97) <= 0x19u )
    v9 -= 32;
  return v9;
}
