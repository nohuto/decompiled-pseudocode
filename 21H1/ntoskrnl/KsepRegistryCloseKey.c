/*
 * XREFs of KsepRegistryCloseKey @ 0x1407A9604
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140A6613C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6638C (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_140C2A9DC);
  }
  return result;
}
