/*
 * XREFs of _xxxDesktopsRecalc@8 @ 0xB0468
 * Callers:
 *     _xxxDesktopsRecalcAndBroadcastDisplayChange@16 @ 0xB0710 (_xxxDesktopsRecalcAndBroadcastDisplayChange@16.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxDesktopRecalc@8 @ 0xB04BC (_xxxDesktopRecalc@8.c)
 */

int __fastcall xxxDesktopsRecalc(int a1, int a2)
{
  int result; // eax
  _DWORD *v3; // esi
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = 0;
  v3 = *(_DWORD **)(a1 + 8);
  memset(v5, 0, sizeof(v5));
  while ( v3 )
  {
    PushW32ThreadLock((int)v3, v5, (int)UserDereferenceObject);
    ObfReferenceObject(v3);
    xxxDesktopRecalc(v3, a2);
    v3 = (_DWORD *)v3[4];
    result = PopAndFreeW32ThreadLock((int)v5);
  }
  return result;
}
