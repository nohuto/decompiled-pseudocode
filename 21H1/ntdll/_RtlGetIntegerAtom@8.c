/*
 * XREFs of _RtlGetIntegerAtom@8 @ 0x4B2E0440
 * Callers:
 *     _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8 (_RtlAddAtomToAtomTableEx@16.c)
 *     _RtlLookupAtomInAtomTable@12 @ 0x4B2E0270 (_RtlLookupAtomInAtomTable@12.c)
 * Callees:
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 */

char __stdcall RtlGetIntegerAtom(unsigned int a1, __int16 *a2)
{
  __int16 v3; // dx
  unsigned __int16 *v4; // ecx
  unsigned __int16 v5; // si
  __int16 v6; // cx
  _WORD v7[2]; // [esp+8h] [ebp-Ch] BYREF
  _WORD *v8; // [esp+Ch] [ebp-8h]
  unsigned int v9; // [esp+10h] [ebp-4h] BYREF

  if ( (a1 & 0xFFFF0000) == 0 )
  {
    v6 = a1;
    if ( (unsigned __int16)a1 < 0xC000u )
    {
      if ( !(_WORD)a1 )
        v6 = -16384;
      if ( a2 )
        *a2 = v6;
      return 1;
    }
    return 0;
  }
  if ( *(_WORD *)a1 != 35 )
    return 0;
  v3 = a1 + 2;
  v4 = (unsigned __int16 *)(a1 + 2);
  if ( *(_WORD *)(a1 + 2) )
  {
    v5 = *v4;
    while ( v5 >= 0x30u && v5 <= 0x39u )
    {
      v5 = *++v4;
      if ( !*v4 )
        goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  v9 = 0;
  v8 = (_WORD *)(a1 + 2);
  v7[0] = (_WORD)v4 - v3;
  v7[1] = (_WORD)v4 - v3;
  if ( (int)RtlUnicodeStringToInteger(v7, 10, &v9) < 0 )
    return 0;
  if ( a2 )
  {
    if ( v9 && v9 <= 0xC000 )
      *a2 = v9;
    else
      *a2 = -16384;
  }
  return 1;
}
