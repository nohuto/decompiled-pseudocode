/*
 * XREFs of IopEtwEnableCallback @ 0x14088D1D0
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpExtensionControl @ 0x1404FB3F0 (IopIrpExtensionControl.c)
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
