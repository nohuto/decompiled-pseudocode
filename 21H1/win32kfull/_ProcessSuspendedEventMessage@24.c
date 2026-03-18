/*
 * XREFs of _ProcessSuspendedEventMessage@24 @ 0xADCB2
 * Callers:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?FindQMsgForCoalesce@@YGPAUtagQMSG@@PAUtagMLIST@@IPAUHWND__@@PAU1@@Z @ 0x11C68 (-FindQMsgForCoalesce@@YGPAUtagQMSG@@PAUtagMLIST@@IPAUHWND__@@PAU1@@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     ?ProcessComplexCoalescence@@YGHIIIJPAIPAJ@Z @ 0x141B63 (-ProcessComplexCoalescence@@YGHIIIJPAIPAJ@Z.c)
 */

int __fastcall ProcessSuspendedEventMessage(
        int a1,
        int a2,
        struct tagMLIST **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  int v8; // esi
  struct tagQMSG *QMsgForCoalesce; // edi
  int v10; // eax
  bool v11; // zf
  HWND v12; // [esp+0h] [ebp-1Ch]
  struct tagQMSG *v13; // [esp+4h] [ebp-18h]
  _DWORD v14[3]; // [esp+Ch] [ebp-10h] BYREF
  int v15; // [esp+18h] [ebp-4h]
  struct tagMLIST *v16; // [esp+28h] [ebp+Ch]

  v15 = a1;
  if ( a2 != 9 )
    return 1;
  if ( a4 >= 0x400 )
    v8 = 1;
  else
    v8 = ((unsigned __int16)MessageTable[a4] >> 10) & 7;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      QMsgForCoalesce = 0;
      if ( a3 )
        v16 = *a3;
      else
        v16 = 0;
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v14, *(_DWORD *)(a1 + 236));
      v10 = v15;
      while ( 1 )
      {
        QMsgForCoalesce = FindQMsgForCoalesce(
                            a4,
                            *(_DWORD *)(v10 + 236) + 12,
                            v16,
                            (unsigned int)QMsgForCoalesce,
                            v12,
                            v13);
        if ( !QMsgForCoalesce )
          break;
        v10 = v15;
        if ( *((_DWORD *)QMsgForCoalesce + 15) == 9 && *((_DWORD *)QMsgForCoalesce + 17) == v15 )
        {
          v11 = ProcessComplexCoalescence(
                  a5,
                  a6,
                  (unsigned int)QMsgForCoalesce + 16,
                  (int)QMsgForCoalesce + 20,
                  (unsigned int *)v12,
                  (int *)v13) == 0;
          v10 = v15;
          if ( v11 )
            return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}
