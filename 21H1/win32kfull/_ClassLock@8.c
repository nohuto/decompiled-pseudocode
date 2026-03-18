/*
 * XREFs of _ClassLock@8 @ 0x705D6
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 *     ?xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z @ 0x154427 (-xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z.c)
 *     _xxxRecreateSmallIcons@4 @ 0x1A12BF (_xxxRecreateSmallIcons@4.c)
 * Callees:
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 */

int __fastcall ClassLock(int a1, _DWORD *a2)
{
  int v2; // esi
  int v4; // edx
  int v6; // eax

  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 < 131068 )
  {
    v4 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 40) = v2 + 1;
    if ( a1 == v4 )
    {
LABEL_3:
      PushW32ThreadLock(a1, a2, (int)ClassUnlockWorker);
      return 1;
    }
    v6 = *(_DWORD *)(v4 + 40);
    if ( v6 < 131068 )
    {
      *(_DWORD *)(v4 + 40) = v6 + 1;
      goto LABEL_3;
    }
    *(_DWORD *)(a1 + 40) = v2;
  }
  return 0;
}
