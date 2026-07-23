/*
 * XREFs of NtDeleteAtom @ 0x140600A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteAtomFromAtomTable @ 0x140600C10 (RtlDeleteAtomFromAtomTable.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 */

NTSTATUS __cdecl NtDeleteAtom(RTL_ATOM Atom)
{
  PVOID AtomTableHandle; // [rsp+38h] [rbp+10h] BYREF

  AtomTableHandle = 0LL;
  PsInvokeWin32Callout(2LL, &AtomTableHandle, 0LL, 0LL);
  if ( AtomTableHandle )
    return RtlDeleteAtomFromAtomTable(AtomTableHandle, Atom);
  else
    return -1073741790;
}
