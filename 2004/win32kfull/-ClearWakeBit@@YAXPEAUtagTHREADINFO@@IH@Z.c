/*
 * XREFs of ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0157ED0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FC080 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 */

void __fastcall ClearWakeBit(struct tagTHREADINFO *a1, __int16 a2, int a3)
{
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 )
    goto LABEL_6;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v5, *((_QWORD *)a1 + 53));
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 53) + 40LL)
    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 56LL) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 53) + 388LL) & 0x20) != 0 )
      a2 &= ~2u;
LABEL_6:
    *(_WORD *)(*((_QWORD *)a1 + 55) + 6LL) &= ~a2;
  }
}
