/*
 * XREFs of MmSessionGetWin32Callouts @ 0x14025A910
 * Callers:
 *     NtFindAtom @ 0x14061ACD0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x14061B140 (PsInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x140683678 (ExCallSessionCallBack.c)
 * Callees:
 *     <none>
 */

union _RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  union _RTL_RUN_ONCE *result; // rax

  result = &PsWin32CallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 680) < 2uLL )
    return &PsWin32NullCallBack;
  return result;
}
