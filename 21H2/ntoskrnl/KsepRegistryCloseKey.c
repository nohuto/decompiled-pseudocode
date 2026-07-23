/*
 * XREFs of KsepRegistryCloseKey @ 0x1407BEFC4
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140A6B22C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6B47C (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_140C2AA7C);
  }
  return result;
}
