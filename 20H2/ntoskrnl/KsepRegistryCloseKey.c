/*
 * XREFs of KsepRegistryCloseKey @ 0x1407BA6A4
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140A6CDEC (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6D03C (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(&dword_140C2A8BC);
  }
  return result;
}
