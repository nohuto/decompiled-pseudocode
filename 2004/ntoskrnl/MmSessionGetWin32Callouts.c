/*
 * XREFs of MmSessionGetWin32Callouts @ 0x14024C9A0
 * Callers:
 *     NtFindAtom @ 0x140602660 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140602AD0 (PsInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x1406A507C (ExCallSessionCallBack.c)
 * Callees:
 *     <none>
 */

_RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  _RTL_RUN_ONCE *result; // rax

  result = &PsWin32CallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 680) < 2uLL )
    return &PsWin32NullCallBack;
  return result;
}
