/*
 * XREFs of _ProcessSuspendedPostMessage@20 @ 0xADCD4
 * Callers:
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     __PostThreadMessageEx@20 @ 0x82662 (__PostThreadMessageEx@20.c)
 * Callees:
 *     ?FindQMsgForCoalesce@@YGPAUtagQMSG@@PAUtagMLIST@@IPAUHWND__@@PAU1@@Z @ 0x11C68 (-FindQMsgForCoalesce@@YGPAUtagQMSG@@PAUtagMLIST@@IPAUHWND__@@PAU1@@Z.c)
 *     ?ProcessComplexCoalescence@@YGHIIIJPAIPAJ@Z @ 0x141B63 (-ProcessComplexCoalescence@@YGHIIIJPAIPAJ@Z.c)
 */

int __fastcall ProcessSuspendedPostMessage(
        int a1,
        struct tagMLIST **a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v6; // esi
  unsigned int v7; // edi
  struct tagMLIST *v8; // eax
  int v9; // ecx
  struct tagQMSG *QMsgForCoalesce; // eax
  int v12; // eax
  bool v13; // zf
  HWND v14; // [esp+0h] [ebp-10h]
  unsigned int *v15; // [esp+0h] [ebp-10h]
  struct tagQMSG *v16; // [esp+4h] [ebp-Ch]
  int *v17; // [esp+4h] [ebp-Ch]
  int v18; // [esp+Ch] [ebp-4h]
  struct tagMLIST *v19; // [esp+18h] [ebp+8h]

  if ( a3 >= 0x400 )
    v6 = 1;
  else
    v6 = ((unsigned __int16)MessageTable[a3] >> 10) & 7;
  if ( !v6 )
    return 0;
  if ( v6 != 1 )
  {
    v7 = 0;
    if ( a2 )
    {
      v8 = *a2;
      v19 = *a2;
    }
    else
    {
      v8 = 0;
      v19 = 0;
    }
    v9 = a1 + 448;
    v18 = v9;
    while ( 1 )
    {
      QMsgForCoalesce = FindQMsgForCoalesce(a3, v9, v8, v7, v14, v16);
      v7 = (unsigned int)QMsgForCoalesce;
      if ( !QMsgForCoalesce )
        break;
      v12 = ProcessComplexCoalescence(a4, a5, (unsigned int)QMsgForCoalesce + 16, (int)QMsgForCoalesce + 20, v15, v17);
      v9 = v18;
      v13 = v12 == 0;
      v8 = v19;
      if ( v13 )
        return 0;
    }
  }
  return 1;
}
