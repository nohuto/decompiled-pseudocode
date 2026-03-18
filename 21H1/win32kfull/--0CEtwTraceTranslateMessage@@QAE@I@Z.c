/*
 * XREFs of ??0CEtwTraceTranslateMessage@@QAE@I@Z @ 0xA60DE
 * Callers:
 *     _xxxTranslateMessage@8 @ 0xA5F1E (_xxxTranslateMessage@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

CEtwTraceTranslateMessage *__thiscall CEtwTraceTranslateMessage::CEtwTraceTranslateMessage(
        CEtwTraceTranslateMessage *this,
        unsigned int a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = *(_DWORD *)this;
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  EtwTraceBeginTranslateMessage(*(unsigned __int8 *)(ThreadWin32Thread + 704), v6);
  return this;
}
