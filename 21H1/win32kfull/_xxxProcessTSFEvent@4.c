/*
 * XREFs of _xxxProcessTSFEvent@4 @ 0x155866
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxFlushDeferredWindowEvents@0 @ 0x458CC (_xxxFlushDeferredWindowEvents@0.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?TSFRangeFromEvent@@YGKKW4TSFLocality@@@Z @ 0x155682 (-TSFRangeFromEvent@@YGKKW4TSFLocality@@@Z.c)
 *     ?xxxCallTSFNotifyHook@@YGXPAUtagNOTIFY@@@Z @ 0x1556EF (-xxxCallTSFNotifyHook@@YGXPAUtagNOTIFY@@@Z.c)
 */

void __thiscall xxxProcessTSFEvent(_DWORD *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  unsigned int v4; // ecx
  int v5; // edi
  int v6; // esi
  unsigned int v7; // ecx

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v4 = this[4];
  v5 = ThreadWin32Thread;
  this[11] = ThreadWin32Thread;
  v6 = TSFRangeFromEvent(v4, 1);
  if ( (*(_DWORD *)(*(_DWORD *)(v5 + 244) + 16) & (TSFRangeFromEvent(v7, 0) | v6) & 0x1703) != 0 )
    xxxCallTSFNotifyHook(this);
  this[11] = 0;
  RemoveNotify(this);
}
