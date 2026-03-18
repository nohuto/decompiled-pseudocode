/*
 * XREFs of _GetIMEShowStatus @ 0x1C0114860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GetIMEShowStatus()
{
  return HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) != 0;
}
