/*
 * XREFs of ?xxxMNHideNextHierarchy@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x196F0C
 * Callers:
 *     _xxxMNButtonDown@16 @ 0x1979D7 (_xxxMNButtonDown@16.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

int __thiscall xxxMNHideNextHierarchy(int *this)
{
  int v2; // eax
  void *v3; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !*(_DWORD *)(*(_DWORD *)*this + 12) )
    return 0;
  v2 = *this;
  v7[2] = 0;
  v3 = *(void **)(*(_DWORD *)v2 + 12);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v7[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v7;
  v7[1] = v3;
  HMLockObject(v3);
  if ( v3 != *(void **)(*(_DWORD *)*this + 28) )
    xxxSendMessage(v3, 0, 0);
  xxxSendMessage(v3, 0xFFFFFFFF, 0);
  ThreadUnlock1();
  return 1;
}
