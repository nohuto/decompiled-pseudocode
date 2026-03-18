/*
 * XREFs of _DestroyThreadsTimers@4 @ 0x92E40
 * Callers:
 *     <none>
 * Callees:
 *     _FreeTimer@4 @ 0x92F66 (_FreeTimer@4.c)
 *     _ThreadLockExchangeWorker@8 @ 0x1562CB (_ThreadLockExchangeWorker@8.c)
 */

int __stdcall DestroyThreadsTimers(int a1)
{
  _DWORD v2[3]; // [esp+4h] [ebp-Ch] BYREF

  v2[2] = 0;
  v2[0] = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = v2;
  v2[1] = 0;
  return ThreadUnlockWorker1();
}
