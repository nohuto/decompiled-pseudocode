/*
 * XREFs of KsepCacheHwIdFree @ 0x1405216E0
 * Callers:
 *     <none>
 * Callees:
 *     KsepStringFree @ 0x1407441EC (KsepStringFree.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2A9C4);
  }
}
