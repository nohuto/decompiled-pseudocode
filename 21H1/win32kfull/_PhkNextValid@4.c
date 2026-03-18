/*
 * XREFs of _PhkNextValid@4 @ 0x1299C
 * Callers:
 *     _zzzUnhookWindowsHookEx@4 @ 0x127FE (_zzzUnhookWindowsHookEx@4.c)
 *     _PhkFirstValid@8 @ 0x12974 (_PhkFirstValid@8.c)
 *     ?xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x3C4EA (-xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     _PhkFirstGlobalValid@8 @ 0x6F434 (_PhkFirstGlobalValid@8.c)
 *     _zzzCancelJournalling@0 @ 0xB07D0 (_zzzCancelJournalling@0.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 *     _zzzUnhookWindowsHook@8 @ 0x152D39 (_zzzUnhookWindowsHook@8.c)
 *     _fnHkINLPCWPEXSTRUCT@20 @ 0x1A4E79 (_fnHkINLPCWPEXSTRUCT@20.c)
 *     _fnHkINLPCWPRETEXSTRUCT@20 @ 0x1A4F2E (_fnHkINLPCWPRETEXSTRUCT@20.c)
 * Callees:
 *     <none>
 */

int __fastcall PhkNextValid(int a1)
{
  while ( *(_DWORD *)(a1 + 20) )
  {
    a1 = *(_DWORD *)(a1 + 20);
LABEL_4:
    if ( !a1 || *(char *)(a1 + 32) >= 0 )
      return a1;
  }
  if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
  {
    a1 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 252) + 4 * *(_DWORD *)(a1 + 24) + 24);
    goto LABEL_4;
  }
  return 0;
}
