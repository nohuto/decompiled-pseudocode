/*
 * XREFs of ?ClearWakeBit@@YGXPAUtagTHREADINFO@@IH@Z @ 0xEFB5A
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _NtUserGetRawInputBuffer@12 @ 0x16426F (_NtUserGetRawInputBuffer@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 */

void __userpurge ClearWakeBit(__int16 a1@<dx>, int a2@<ecx>, struct tagTHREADINFO *a3, unsigned int a4, int a5)
{
  PKTHREAD CurrentThread; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a3 )
    goto LABEL_6;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v8, *(_DWORD *)(a2 + 236));
  if ( !*(_DWORD *)(*(_DWORD *)(a2 + 236) + 20) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 252) + 28) )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(a2 + 236) + 284) & 0x20) != 0 )
        a1 &= ~2u;
LABEL_6:
      *(_WORD *)(*(_DWORD *)(a2 + 244) + 6) &= ~a1;
    }
  }
}
