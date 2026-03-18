/*
 * XREFs of NtDeleteAtom @ 0x14068CE50
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x140628330 (PsInvokeWin32Callout.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14068CFE0 (RtlDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall NtDeleteAtom(unsigned __int16 a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  PsInvokeWin32Callout(2, (__int64)&v3, 0, 0LL);
  if ( v3 )
    return RtlDeleteAtomFromAtomTable(v3, a1);
  else
    return 3221225506LL;
}
