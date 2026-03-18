/*
 * XREFs of NtDeleteAtom @ 0x1406AB2D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteAtomFromAtomTable @ 0x1406AB320 (RtlDeleteAtomFromAtomTable.c)
 *     PsInvokeWin32Callout @ 0x1406F83A0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall NtDeleteAtom(unsigned __int16 a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  PsInvokeWin32Callout(2LL, &v3, 0LL, 0LL);
  if ( v3 )
    return RtlDeleteAtomFromAtomTable(v3, a1);
  else
    return 3221225506LL;
}
