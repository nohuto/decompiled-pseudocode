/*
 * XREFs of KsepRegistryCloseKey @ 0x1407AC764
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140A65B1C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A65D6C (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_140C2A7DC);
  }
  return result;
}
