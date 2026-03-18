/*
 * XREFs of ??1CEtwTraceTranslateMessage@@QAE@XZ @ 0xA60BA
 * Callers:
 *     _xxxTranslateMessage@8 @ 0xA5F1E (_xxxTranslateMessage@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

void __thiscall CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage(CEtwTraceTranslateMessage *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v4; // [esp-4h] [ebp-8h]

  CurrentThread = KeGetCurrentThread();
  v4 = *(_DWORD *)this;
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  EtwTraceEndTranslateMessage(*(unsigned __int8 *)(ThreadWin32Thread + 704), v4);
}
