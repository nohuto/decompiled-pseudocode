/*
 * XREFs of KsepCacheHwIdFree @ 0x140525700
 * Callers:
 *     <none>
 * Callees:
 *     KsepStringFree @ 0x14075494C (KsepStringFree.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2A8A4);
  }
}
