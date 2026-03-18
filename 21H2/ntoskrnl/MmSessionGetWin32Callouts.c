/*
 * XREFs of MmSessionGetWin32Callouts @ 0x140281830
 * Callers:
 *     ExCallSessionCallBack @ 0x1406A8F48 (ExCallSessionCallBack.c)
 *     NtFindAtom @ 0x1406F68C0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1406F83A0 (PsInvokeWin32Callout.c)
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 * Callees:
 *     <none>
 */

union _RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  union _RTL_RUN_ONCE *result; // rax

  result = &PsWin32CallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 616) < 2uLL )
    return &PsWin32NullCallBack;
  return result;
}
