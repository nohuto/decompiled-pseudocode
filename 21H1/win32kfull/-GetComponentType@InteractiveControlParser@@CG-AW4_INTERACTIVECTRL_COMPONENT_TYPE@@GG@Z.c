/*
 * XREFs of ?GetComponentType@InteractiveControlParser@@CG?AW4_INTERACTIVECTRL_COMPONENT_TYPE@@GG@Z @ 0x1B5E7F
 * Callers:
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CGJPAU_HIDP_VALUE_CAPS@@HPAU_INTERACTIVECTRL_CAPABILITIES@@PAPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1B5AB3 (-CreateAndLinkComponent@InteractiveControlParser@@CGJPAU_HIDP_VALUE_CAPS@@HPAU_INTERACTIVECTRL_C.c)
 * Callees:
 *     <none>
 */

int __fastcall InteractiveControlParser::GetComponentType(__int16 a1, unsigned __int16 a2)
{
  int result; // eax

  result = 0;
  if ( a1 == 1 )
  {
    if ( a2 < 0x30u )
      return result;
    if ( a2 <= 0x35u )
      return 1;
    switch ( a2 )
    {
      case '6':
        return 2;
      case '7':
        return 3;
      case '8':
        return 4;
    }
    if ( a2 != 57 )
      return result;
    return 6;
  }
  if ( a1 == 9 )
    return 5;
  if ( a1 != 13 )
    return result;
  if ( a2 == 51 )
    return 7;
  if ( a2 > 0x47u && a2 <= 0x49u )
    return 8;
  return result;
}
