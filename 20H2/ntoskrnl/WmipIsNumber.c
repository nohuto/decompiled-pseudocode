/*
 * XREFs of WmipIsNumber @ 0x14078AB58
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140750834 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x140751598 (WmipFindISinGEbyName.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipIsNumber(_WORD *a1)
{
  while ( 1 )
  {
    if ( !*a1 )
      return 1;
    if ( (unsigned __int16)(*a1 - 48) > 9u )
      break;
    ++a1;
  }
  return 0;
}
