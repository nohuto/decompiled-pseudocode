/*
 * XREFs of NtDeleteAtom @ 0x1406F1AE0
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x140602AD0 (PsInvokeWin32Callout.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406F1C70 (RtlDeleteAtomFromAtomTable.c)
 */

NTSTATUS __cdecl NtDeleteAtom(RTL_ATOM Atom)
{
  PVOID AtomTableHandle; // [rsp+38h] [rbp+10h] BYREF

  AtomTableHandle = 0LL;
  PsInvokeWin32Callout(2, (__int64)&AtomTableHandle, 0, 0LL);
  if ( AtomTableHandle )
    return RtlDeleteAtomFromAtomTable(AtomTableHandle, Atom);
  else
    return -1073741790;
}
