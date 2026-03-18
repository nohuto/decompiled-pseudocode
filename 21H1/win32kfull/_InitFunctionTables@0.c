/*
 * XREFs of _InitFunctionTables@0 @ 0x292F86
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 */

int (__stdcall *__stdcall InitFunctionTables())(struct tagWND *a1, struct tagPROCESSINFO *a2, struct tagWND *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v0; // edx
  int v1; // eax
  int (__stdcall *result)(struct tagWND *, struct tagPROCESSINFO *, struct tagWND *, unsigned int, unsigned int); // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(3, 11, &WPP_5beb818f3182338190d7890059714f79_Traceguids);
  v0 = 0;
  *(_DWORD *)(_gpsi + 136) = 4;
  *(_DWORD *)(_gpsi + 140) = 0;
  *(_DWORD *)(_gpsi + 144) = 3;
  *(_DWORD *)(_gpsi + 148) = 1;
  *(_DWORD *)(_gpsi + 152) = 0;
  *(_DWORD *)(_gpsi + 156) = 0;
  *(_WORD *)(_gpsi + 170) = 204;
  *(_WORD *)(_gpsi + 176) = 212;
  *(_WORD *)(_gpsi + 164) = 280;
  *(_WORD *)(_gpsi + 168) = 216;
  *(_WORD *)(_gpsi + 220) = 244;
  *(_WORD *)(_gpsi + 166) = 204;
  do
  {
    v1 = v0++ & 0x1F;
    mpFnidPfn[v1] = (int)EngSetPointerTag;
  }
  while ( v0 < 0x20 );
  result = xxxWrapRealDefWindowProc;
  mpFnidPfn[0] = (int)xxxWrapSBWndProc;
  dword_273C64 = (int)xxxWrapRealDefWindowProc;
  dword_273C68 = (int)xxxWrapMenuWindowProc;
  dword_273C6C = (int)xxxWrapDesktopWndProc;
  dword_273C70 = (int)xxxWrapRealDefWindowProc;
  dword_273C74 = (int)xxxWrapRealDefWindowProc;
  dword_273CBC = xxxWrapSendMessage;
  dword_273CA4 = (int)fnHkINLPCWPEXSTRUCT;
  dword_273CA8 = (int)fnHkINLPCWPRETEXSTRUCT;
  dword_273CC0 = (int)xxxSendMessageFF;
  dword_273CC4 = (int)xxxSendMessageEx;
  dword_273CC8 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))xxxWrapCallWindowProc;
  dword_273CCC = (int)xxxWrapSendMessageBSM;
  dword_273C78 = (int)xxxWrapSwitchWndProc;
  dword_273CD4 = (int)xxxWrapSendNotifyMessage;
  dword_273CD8 = (int)xxxWrapSendMessageCallback;
  return result;
}
