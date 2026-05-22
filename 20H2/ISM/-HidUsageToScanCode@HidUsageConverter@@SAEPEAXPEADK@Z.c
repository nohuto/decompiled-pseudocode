/*
 * XREFs of ?HidUsageToScanCode@HidUsageConverter@@SAEPEAXPEADK@Z @ 0x1800A96A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall HidUsageConverter::HidUsageToScanCode(_BYTE *Context, PCHAR NewScanCodes, ULONG Length)
{
  *(_WORD *)Context = 0;
  if ( Length == 1 )
  {
    *Context = *NewScanCodes;
  }
  else if ( Length == 2 )
  {
    Context[1] = *NewScanCodes;
    *Context = NewScanCodes[1];
  }
  return 1;
}
