/*
 * XREFs of PiInitReleaseCachedGroupInformation @ 0x14084DCF8
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403D2178 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     PnpFreeUnicodeStringList @ 0x1403D2224 (PnpFreeUnicodeStringList.c)
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
