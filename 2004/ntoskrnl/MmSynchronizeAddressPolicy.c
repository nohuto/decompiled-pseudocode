/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x140781E68
 * Callers:
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x140254168 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1LL);
}
