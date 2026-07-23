/*
 * XREFs of _RtlGetIntegerAtom@8 @ 0x4B2E0440
 * Callers:
 *     _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8 (_RtlAddAtomToAtomTableEx@16.c)
 *     _RtlLookupAtomInAtomTable@12 @ 0x4B2E0270 (_RtlLookupAtomInAtomTable@12.c)
 * Callees:
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 */

BOOLEAN __cdecl RtlGetIntegerAtom(PWSTR AtomName, PUSHORT IntegerAtom)
{
  __int16 v3; // dx
  PWSTR v4; // ecx
  WCHAR v5; // si
  USHORT v6; // cx
  _UNICODE_STRING String; // [esp+8h] [ebp-Ch] BYREF
  ULONG Value; // [esp+10h] [ebp-4h] BYREF

  if ( ((unsigned int)AtomName & 0xFFFF0000) == 0 )
  {
    v6 = (unsigned __int16)AtomName;
    if ( (unsigned __int16)AtomName < 0xC000u )
    {
      if ( !(_WORD)AtomName )
        v6 = -16384;
      if ( IntegerAtom )
        *IntegerAtom = v6;
      return 1;
    }
    return 0;
  }
  if ( *AtomName != 35 )
    return 0;
  v3 = (_WORD)AtomName + 2;
  v4 = AtomName + 1;
  if ( AtomName[1] )
  {
    v5 = *v4;
    while ( (unsigned __int16)v5 >= 0x30u && (unsigned __int16)v5 <= 0x39u )
    {
      v5 = *++v4;
      if ( !*v4 )
        goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  Value = 0;
  String.Buffer = (wchar_t *)(AtomName + 1);
  String.Length = (_WORD)v4 - v3;
  String.MaximumLength = (_WORD)v4 - v3;
  if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) < 0 )
    return 0;
  if ( IntegerAtom )
  {
    if ( Value && Value <= 0xC000 )
      *IntegerAtom = Value;
    else
      *IntegerAtom = -16384;
  }
  return 1;
}
