/*
 * XREFs of HalpInterruptIsCmciSupported @ 0x1403DEB00
 * Callers:
 *     HalpIsCmciImplemented @ 0x140A5367C (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1402520D4 (HalpInterruptFindLines.c)
 */

bool HalpInterruptIsCmciSupported()
{
  bool result; // al
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+34h] [rbp+Ch]

  result = 0;
  if ( *(_DWORD *)(HalpInterruptController + 224) == 2 )
  {
    v1 = *(_DWORD *)(HalpInterruptController + 240);
    v2 = -7;
    if ( HalpInterruptFindLines(&v1) )
      return 1;
  }
  return result;
}
