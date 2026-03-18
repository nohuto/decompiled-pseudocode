/*
 * XREFs of ?xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x17640C
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x17640C (-xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z.c)
 *     _xxxUpdateThreadsWindows@12 @ 0x17804C (_xxxUpdateThreadsWindows@12.c)
 * Callees:
 *     _ThreadLockExchangeAlways@8 @ 0x7D602 (_ThreadLockExchangeAlways@8.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     ?xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x17640C (-xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z.c)
 */

void __fastcall xxxUpdateOtherThreadsWindows(int a1, int a2)
{
  int v3; // esi
  struct tagWND *v4; // [esp+0h] [ebp-14h]
  HRGN v5; // [esp+4h] [ebp-10h]
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v6[2] = 0;
  xxxRedrawHungWindow(a1, a2);
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 2) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 60);
    v6[0] = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = v6;
    v6[1] = 0;
    while ( v3 )
    {
      ThreadLockExchangeAlways(v3, (int)v6);
      xxxUpdateOtherThreadsWindows(v4, v5);
      v3 = *(_DWORD *)(v3 + 48);
    }
    ThreadUnlock1();
  }
}
