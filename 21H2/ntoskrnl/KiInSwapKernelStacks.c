/*
 * XREFs of KiInSwapKernelStacks @ 0x140295A0C
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B4200 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiFastReadyThread @ 0x140266130 (KiFastReadyThread.c)
 *     KeGetNextKernelStackSegment @ 0x140295E78 (KeGetNextKernelStackSegment.c)
 *     MiInPageSingleKernelStack @ 0x140295F90 (MiInPageSingleKernelStack.c)
 */

__int64 __fastcall KiInSwapKernelStacks(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  do
  {
    v4 = (__int64)(a1 - 27);
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
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0x11u);
    result = KiFastReadyThread(v4, a2, a3);
  }
  while ( a1 );
  return result;
}
