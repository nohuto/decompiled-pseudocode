/*
 * XREFs of _TpAllocPool@8 @ 0x4B2B1E30
 * Callers:
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 * Callees:
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpAllocPool(int a1, int a2)
{
  if ( !a1 || a2 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return TpAllocPoolInternal(a1, 0);
}
