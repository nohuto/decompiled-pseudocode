/*
 * XREFs of KsepCacheHwIdFree @ 0x140521D30
 * Callers:
 *     <none>
 * Callees:
 *     KsepStringFree @ 0x140745D6C (KsepStringFree.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2A7C4);
  }
}
