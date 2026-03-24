/*
 * XREFs of KiInSwapKernelStacks @ 0x1402E46BC
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B4090 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiFastReadyThread @ 0x140278190 (KiFastReadyThread.c)
 *     KeGetNextKernelStackSegment @ 0x1402E4B28 (KeGetNextKernelStackSegment.c)
 *     MiInPageSingleKernelStack @ 0x1402E4C40 (MiInPageSingleKernelStack.c)
 */

__int64 __fastcall KiInSwapKernelStacks(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  _OWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  do
  {
    v5 = (__int64)(a1 - 27);
    a1 = (_QWORD *)*a1;
    memset(v7, 0, sizeof(v7));
    if ( (MiFlags & 0x40) != 0 )
    {
      LOBYTE(a3) = 1;
      KeGetNextKernelStackSegment(v5, v7, a3);
      do
        MiInPageSingleKernelStack(v5, v7);
      while ( (unsigned __int8)KeGetNextKernelStackSegment(v5, v7, 0LL) );
    }
    _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0x11u);
    result = KiFastReadyThread(v5, a2, a3, a4);
  }
  while ( a1 );
  return result;
}
