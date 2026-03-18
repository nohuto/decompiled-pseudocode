/*
 * XREFs of __W32ExceptionHandler@4 @ 0x1B6D61
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _NtUserUnregisterClass@12 @ 0x48404 (_NtUserUnregisterClass@12.c)
 *     _NtUserGetWindowCompositionAttribute@8 @ 0x80AF0 (_NtUserGetWindowCompositionAttribute@8.c)
 *     _SfnDWORDOPTINLPMSG@32 @ 0x18A66A (_SfnDWORDOPTINLPMSG@32.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall _W32ExceptionHandler(NTSTATUS Status)
{
  struct _NT_TIB *v1; // eax

  v1 = (struct _NT_TIB *)RtlNtStatusToDosError(Status);
  UserSetLastError(v1);
  return 1;
}
