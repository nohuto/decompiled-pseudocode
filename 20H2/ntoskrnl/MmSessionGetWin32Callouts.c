/*
 * XREFs of MmSessionGetWin32Callouts @ 0x140233650
 * Callers:
 *     NtFindAtom @ 0x140627EC0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140628330 (PsInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x14062BF24 (ExCallSessionCallBack.c)
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
