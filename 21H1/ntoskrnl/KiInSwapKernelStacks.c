/*
 * XREFs of KiInSwapKernelStacks @ 0x140329928
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B1FF0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiFastReadyThread @ 0x1403299AC (KiFastReadyThread.c)
 *     MiInPageSingleKernelStack @ 0x140329D10 (MiInPageSingleKernelStack.c)
 *     KeGetNextKernelStackSegment @ 0x14032A6C8 (KeGetNextKernelStackSegment.c)
 */

__int64 __fastcall KiInSwapKernelStacks(_QWORD *a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v4; // rbx
  __int64 result; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  do
  {
    v4 = (volatile signed __int32 *)(a1 - 27);
    a1 = (_QWORD *)*a1;
    memset(v6, 0, sizeof(v6));
    if ( (MiFlags & 0x40) != 0 )
    {
      LOBYTE(a3) = 1;
      KeGetNextKernelStackSegment(v4, v6, a3);
      do
        MiInPageSingleKernelStack(v4, v6);
      while ( (unsigned __int8)KeGetNextKernelStackSegment(v4, v6, 0LL) );
    }
    _interlockedbittestandset(v4 + 30, 0x11u);
    result = KiFastReadyThread(v4);
  }
  while ( a1 );
  return result;
}
