/*
 * XREFs of RaMiniportSaveFeatureList @ 0x1C00360D4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     memmove @ 0x1C001D740 (memmove.c)
 */

__int64 __fastcall RaMiniportSaveFeatureList(__int64 a1, unsigned int a2, const void *a3)
{
  _BYTE *v6; // rcx

  if ( *(_DWORD *)(a1 + 296) )
    return 3221225659LL;
  if ( a2 <= 1 )
  {
    v6 = (_BYTE *)(a1 + 300);
    *v6 = 0;
    memmove(v6, a3, a2);
    *(_DWORD *)(a1 + 296) = a2;
  }
  return 0LL;
}
