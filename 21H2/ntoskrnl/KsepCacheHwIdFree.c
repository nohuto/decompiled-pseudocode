/*
 * XREFs of KsepCacheHwIdFree @ 0x14057DA30
 * Callers:
 *     <none>
 * Callees:
 *     KsepStringFree @ 0x14075CDC4 (KsepStringFree.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2A1A4);
  }
}
