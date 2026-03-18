/*
 * XREFs of PiInitReleaseCachedGroupInformation @ 0x1407AA23C
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403C0454 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     PnpFreeUnicodeStringList @ 0x1403C0500 (PnpFreeUnicodeStringList.c)
 */

void PiInitReleaseCachedGroupInformation()
{
  if ( PiInitGroupOrderTable )
  {
    PnpFreeUnicodeStringList((PVOID *)PiInitGroupOrderTable, (unsigned __int16)PiInitGroupOrderTableCount);
    PiInitGroupOrderTable = 0LL;
    PiInitGroupOrderTableCount = 0;
  }
}
