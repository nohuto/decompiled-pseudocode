/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x1407C69A0
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x1403104B8 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1, a3, a4);
}
