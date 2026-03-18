/*
 * XREFs of KiInSwapKernelStacks @ 0x14029A6E0
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403C6D20 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiFastReadyThread @ 0x140294574 (KiFastReadyThread.c)
 *     KeGetNextKernelStackSegment @ 0x140298AF8 (KeGetNextKernelStackSegment.c)
 *     MiInPageSingleKernelStack @ 0x14029A2A0 (MiInPageSingleKernelStack.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiInSwapKernelStacks(_QWORD *a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD v7[8]; // [rsp+20h] [rbp-40h] BYREF

  do
  {
    v2 = (ULONG_PTR)(a1 - 27);
    a1 = (_QWORD *)*a1;
    memset(v7, 0, sizeof(v7));
    if ( (MiFlags & 0x40) != 0 )
    {
      KeGetNextKernelStackSegment((_QWORD *)v2, v7, 1);
      do
        MiInPageSingleKernelStack(v2, v7);
      while ( KeGetNextKernelStackSegment((_QWORD *)v2, v7, 0) );
      if ( (*(_DWORD *)(v2 + 116) & 0x800000) != 0 )
      {
        v6 = *(_QWORD *)(v2 + 96);
        v7[4] &= v4;
        v7[5] &= v4;
        v7[6] &= v4;
        v7[7] &= v4;
        v7[0] = v6 + (unsigned int)KeDecoupledStateSaveAreaLength;
        v7[2] = v6;
        v7[3] = v7[0];
        v7[1] = v7[0] - 12288LL;
        MiInPageSingleKernelStack(v2, v7);
      }
    }
    _interlockedbittestandset((volatile signed __int32 *)(v2 + 120), 0x11u);
    result = KiFastReadyThread(v2, v3, v4);
  }
  while ( a1 );
  return result;
}
