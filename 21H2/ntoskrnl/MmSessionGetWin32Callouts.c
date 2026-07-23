/*
 * XREFs of MmSessionGetWin32Callouts @ 0x14027BE80
 * Callers:
 *     ExCallSessionCallBack @ 0x1405E44F8 (ExCallSessionCallBack.c)
 *     NtFindAtom @ 0x140684930 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
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
