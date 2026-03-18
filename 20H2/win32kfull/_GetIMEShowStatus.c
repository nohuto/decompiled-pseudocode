/*
 * XREFs of _GetIMEShowStatus @ 0x1C01158E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GetIMEShowStatus()
{
  return HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) != 0;
}
