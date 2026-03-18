/*
 * XREFs of ?xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x3C4EA
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     _PhkNextValid@4 @ 0x1299C (_PhkNextValid@4.c)
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 *     _DeferMessagesOnQueue@8 @ 0xC2828 (_DeferMessagesOnQueue@8.c)
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 *     _xxxCallJournalPlaybackHook@4 @ 0x1527A2 (_xxxCallJournalPlaybackHook@4.c)
 */

int __userpurge xxxGetNextSysMsg@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagQ **a3,
        struct tagQMSG *a4,
        struct tagQMSG *a5,
        struct CMultiPerObjectLockExclusivePpiPtiQ *a6)
{
  int Valid; // eax
  int v9; // eax
  int *v10; // ecx
  int result; // eax
  _DWORD *v12; // edx
  int *v13; // eax
  unsigned int v14; // eax
  char *v15; // edx
  int v16; // edx
  unsigned int v17; // [esp+0h] [ebp-8h]
  struct tagQMSG *v18; // [esp+4h] [ebp-4h]

  Valid = *(_DWORD *)(a2[63] + 28);
  if ( Valid )
  {
    if ( *(char *)(Valid + 32) < 0 )
      Valid = PhkNextValid(*(_DWORD *)(a2[63] + 28));
    if ( Valid && a2[62] == _grpdeskRitInput )
    {
      if ( !a1 )
      {
        v14 = xxxCallJournalPlaybackHook(a3);
        if ( v14 != -1 )
        {
          if ( !v14 )
          {
            WakeSomeone(a3[3], 0, v17, v18);
            CInputGlobals::MarkLastInputAsJournalling(_gpInputGlobals);
            return 1;
          }
          *(_WORD *)(a2[61] + 6) &= 0xE3F8u;
          v15 = (char *)dword_27388C;
          *(_WORD *)(a2[61] + 4) &= 0xE3F8u;
          *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 296) = a3[3];
          dword_27388C = InternalSetTimer(0, v15, v14, (int)JournalTimer, 32, 276);
        }
      }
      return 0;
    }
  }
  v9 = a2[59];
  if ( (*(_BYTE *)(v9 + 284) & 0x20) != 0 )
  {
    PostPendingMouseMove(a2[59]);
    v9 = a2[59];
  }
  v10 = (int *)(v9 + 12);
  if ( !*(_DWORD *)(v9 + 20) )
    return 0;
  if ( a1 && (v13 = *(int **)(v9 + 44), (unsigned int)v13 > 1) )
    result = *v13;
  else
    result = *v10;
  if ( (a2[172] & 0x2000) != 0 )
  {
    if ( !result )
      return result;
    do
    {
      v16 = *(_DWORD *)(result + 64);
      if ( (v16 & 0x20) == 0 )
        break;
      if ( (v16 & 0x10) == 0 )
        break;
      result = *(_DWORD *)result;
    }
    while ( result );
  }
  if ( result )
  {
    v12 = *(_DWORD **)(result + 68);
    if ( v12 && v12 != a2 && (v12[66] & 0x10000) != 0 )
      result = DeferMessagesOnQueue();
    if ( result )
      qmemcpy(a3, (const void *)result, 0x78u);
  }
  return result;
}
