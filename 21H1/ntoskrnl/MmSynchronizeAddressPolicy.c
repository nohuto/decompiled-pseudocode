/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x140787888
 * Callers:
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1);
}
