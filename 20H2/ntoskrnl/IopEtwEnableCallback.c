/*
 * XREFs of IopEtwEnableCallback @ 0x140894040
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpExtensionControl @ 0x1404FF314 (IopIrpExtensionControl.c)
 */

void __fastcall IopEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( ControlCode != 1 )
      return;
  }
  else
  {
    ControlCode = 0;
  }
  IopIrpExtensionControl(1, ControlCode);
}
