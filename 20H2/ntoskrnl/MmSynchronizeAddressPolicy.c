/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x1407C2380
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1LL);
}
