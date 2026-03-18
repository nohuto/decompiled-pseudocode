/*
 * XREFs of xxxRedrawTitle @ 0x1C00BF060
 * Callers:
 *     xxxEnableMenuItem @ 0x1C0034648 (xxxEnableMenuItem.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0078134 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023D830 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxHelpLoop @ 0x1C024FBFC (xxxHelpLoop.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 */

__int64 __fastcall xxxRedrawTitle(unsigned __int64 *a1, unsigned int a2)
{
  unsigned int v3; // esi
  _BYTE *v4; // rcx
  unsigned int v5; // ebp
  unsigned __int64 v7; // rbx
  HDC DCEx; // rbx

  v3 = a2;
  v4 = (_BYTE *)a1[5];
  v5 = 1;
  if ( (v4[31] & 0x10) != 0 )
  {
    if ( (v4[30] & 0xC0) == 0xC0 )
    {
      if ( (v4[16] & 0x40) != 0 && *(_QWORD *)(a1[2] + 432) == gpqForeground )
        v3 = a2 | 1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar((__int64)a1, DCEx, v3);
        _ReleaseDC(DCEx);
      }
      else
      {
        xxxSendMessage((unsigned __int64)a1, 0xAEu, v3, 0LL);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) && (v3 & 0xC) != 0 )
  {
    v7 = *a1;
    xxxCallHook(6, *a1, 0LL, 10);
    PostShellHookMessages(6LL, v7);
  }
  return v5;
}
