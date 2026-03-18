/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0057C80
 * Callers:
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C0056400 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetClipboardViewer @ 0x1C00567D0 (xxxSetClipboardViewer.c)
 *     xxxCloseClipboard @ 0x1C0059F90 (xxxCloseClipboard.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C005A29C (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // rdi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 i; // rdi
  __int64 v9; // rcx
  unsigned int v10; // eax
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  *((_DWORD *)a1 + 16) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 11) )
  {
    v2 = *((_QWORD *)a1 + 13);
    if ( v2 )
    {
      v11[2] = 0LL;
      *((_QWORD *)a1 + 11) = gptiCurrent;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v11;
      v11[1] = v2;
      HMLockObject(v2);
      v4 = (_QWORD *)*((_QWORD *)a1 + 14);
      if ( v4 )
        v4 = (_QWORD *)*v4;
      xxxSendNotifyMessage(*((_QWORD *)a1 + 13), 0x308u, (unsigned __int64)v4, 0LL, 1);
      ThreadUnlock1(v6, v5, v7);
      *((_QWORD *)a1 + 11) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 19); i; i = *(_QWORD *)(i + 240) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(i + 16) + 416LL);
    if ( v9 )
      v9 = *(_QWORD *)(v9 + 880);
    v10 = CountNumClipFormatForIL(v9, a1);
    PostMessage(i, 797LL, v10, 0LL);
  }
}
