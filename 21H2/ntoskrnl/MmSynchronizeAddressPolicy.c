/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x1406DFF40
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x140702AF8 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x14027D408 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1);
}
