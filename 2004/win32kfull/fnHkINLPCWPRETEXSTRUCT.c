/*
 * XREFs of fnHkINLPCWPRETEXSTRUCT @ 0x1C0248200
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0045FF4 (xxxCallNextHookEx.c)
 *     PhkNextValid @ 0x1C0046050 (PhkNextValid.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 fnHkINLPCWPRETEXSTRUCT()
{
  __int64 v0; // rcx
  __int64 Valid; // rax

  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v0 = *(_QWORD *)(gptiCurrent + 680LL);
  if ( v0 && (Valid = PhkNextValid(v0)) != 0 && *(_DWORD *)(Valid + 48) != 12 )
    return 0LL;
  else
    return xxxCallNextHookEx();
}
