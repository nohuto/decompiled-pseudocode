/*
 * XREFs of NtDeleteAtom @ 0x1405D5AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteAtomFromAtomTable @ 0x1405D5C70 (RtlDeleteAtomFromAtomTable.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
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
