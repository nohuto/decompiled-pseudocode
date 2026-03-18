/*
 * XREFs of SmKmStoreHelperCleanup @ 0x1402D1D64
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     SmKmStoreHelperSendCommand @ 0x1402C8F5C (SmKmStoreHelperSendCommand.c)
 */

LONG_PTR __fastcall SmKmStoreHelperCleanup(PVOID *a1)
{
  LONG_PTR result; // rax

  if ( *a1 )
  {
    SmKmStoreHelperSendCommand((__int64)a1, 1, 0LL, 1u);
    KeWaitForSingleObject(*a1, Executive, 0, 0, 0LL);
    return ObfDereferenceObjectWithTag(*a1, 0x746C6644u);
  }
  return result;
}
