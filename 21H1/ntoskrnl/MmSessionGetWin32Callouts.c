/*
 * XREFs of MmSessionGetWin32Callouts @ 0x1402A59D0
 * Callers:
 *     NtFindAtom @ 0x1406376A0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x140710C88 (ExCallSessionCallBack.c)
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
