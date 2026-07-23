/*
 * XREFs of _EtwEventEnabled@12 @ 0x4B2E6910
 * Callers:
 *     _EtwEventWriteEndScenario@20 @ 0x4B380AB0 (_EtwEventWriteEndScenario@20.c)
 *     _EtwEventWriteStartScenario@20 @ 0x4B380B90 (_EtwEventWriteStartScenario@20.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl EtwEventEnabled(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor)
{
  unsigned int Keyword_high; // ebx
  unsigned int Keyword; // edi
  BOOLEAN result; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al

  if ( !EventDescriptor || !WORD2(RegHandle) || (RegHandle & 1) != 0 || WORD2(RegHandle) != *(_WORD *)(RegHandle + 52) )
    return 0;
  Keyword_high = HIDWORD(EventDescriptor->Keyword);
  Keyword = EventDescriptor->Keyword;
  result = 1;
  if ( !*(_BYTE *)(RegHandle + 76)
    || (v5 = *(_BYTE *)(RegHandle + 77), EventDescriptor->Level > v5) && v5
    || ((*(_BYTE *)(RegHandle + 72) & 0x40) == 0 || Keyword_high | Keyword)
    && (!(Keyword_high & *(_DWORD *)(RegHandle + 68) | Keyword & *(_DWORD *)(RegHandle + 64))
     || __PAIR64__(Keyword_high & *(_DWORD *)(RegHandle + 60), Keyword & *(_DWORD *)(RegHandle + 56)) != *(_QWORD *)(RegHandle + 56)) )
  {
    if ( !*(_BYTE *)(RegHandle + 196) )
      return 0;
    v6 = *(_BYTE *)(RegHandle + 197);
    if ( EventDescriptor->Level > v6 )
    {
      if ( v6 )
        return 0;
    }
    if ( ((*(_BYTE *)(RegHandle + 192) & 0x40) == 0 || Keyword_high | Keyword)
      && (!(Keyword_high & *(_DWORD *)(RegHandle + 188) | Keyword & *(_DWORD *)(RegHandle + 184))
       || __PAIR64__(Keyword_high & *(_DWORD *)(RegHandle + 180), Keyword & *(_DWORD *)(RegHandle + 176)) != *(_QWORD *)(RegHandle + 176)) )
    {
      return 0;
    }
  }
  return result;
}
