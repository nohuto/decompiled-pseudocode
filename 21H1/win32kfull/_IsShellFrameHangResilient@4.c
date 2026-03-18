/*
 * XREFs of _IsShellFrameHangResilient@4 @ 0xAEC08
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsAdaptiveQueueDetachExempted@4 @ 0xC1162 (_IsAdaptiveQueueDetachExempted@4.c)
 */

int __thiscall IsShellFrameHangResilient(_DWORD *this)
{
  int v2; // esi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v5; // eax

  if ( (this[172] & 0x40000) == 0 )
    return 0;
  v2 = 1;
  if ( *(_DWORD *)(this[59] + 288) <= 1u )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 252) + 24) )
    return 0;
  v5 = KeGetCurrentThread();
  if ( *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v5) + 252) + 28) || IsAdaptiveQueueDetachExempted(this) )
    return 0;
  return v2;
}
