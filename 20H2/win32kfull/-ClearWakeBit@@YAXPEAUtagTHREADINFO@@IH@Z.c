/*
 * XREFs of ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C015AD28
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FB210 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D781C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 */

void __fastcall ClearWakeBit(struct tagTHREADINFO *a1, __int16 a2, int a3)
{
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 )
    goto LABEL_6;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v5, *((_QWORD *)a1 + 54));
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 54) + 40LL)
    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 54) + 388LL) & 0x20) != 0 )
      a2 &= ~2u;
LABEL_6:
    *(_WORD *)(*((_QWORD *)a1 + 56) + 6LL) &= ~a2;
  }
}
