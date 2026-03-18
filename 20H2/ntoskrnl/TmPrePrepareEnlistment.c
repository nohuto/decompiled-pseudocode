/*
 * XREFs of TmPrePrepareEnlistment @ 0x1403D03D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPrePrepareEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrePrepareEnlistment(Enlistment, TmVirtualClock);
}
