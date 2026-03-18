/*
 * XREFs of SmKmStoreHelperCleanup @ 0x140302C94
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030287C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     SmKmStoreHelperSendCommand @ 0x140304B08 (SmKmStoreHelperSendCommand.c)
 */

LONG_PTR __fastcall SmKmStoreHelperCleanup(PVOID *a1)
{
  LONG_PTR result; // rax

  if ( *a1 )
  {
    SmKmStoreHelperSendCommand(a1, 1LL, 0LL, 1LL);
    KeWaitForSingleObject(*a1, Executive, 0, 0, 0LL);
    return ObfDereferenceObjectWithTag(*a1, 0x746C6644u);
  }
  return result;
}
