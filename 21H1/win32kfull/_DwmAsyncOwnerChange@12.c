/*
 * XREFs of _DwmAsyncOwnerChange@12 @ 0x732BC
 * Callers:
 *     _zzzImeSetFutureOwner@8 @ 0x18ECA (_zzzImeSetFutureOwner@8.c)
 *     _zzzImeSetOwnerWindow@8 @ 0x1C3FA (_zzzImeSetOwnerWindow@8.c)
 *     _zzzImeCanDestroyDefIME@8 @ 0x1D148 (_zzzImeCanDestroyDefIME@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxDW_DestroyOwnedWindows@4 @ 0x7315A (_xxxDW_DestroyOwnedWindows@4.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z @ 0xE1784 (-DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z.c)
 *     ?xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z @ 0x1A5A84 (-xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncOwnerChange(void *a1, int a2, int a3)
{
  unsigned int v3; // esi
  PVOID v4; // edi
  _WORD v6[3]; // [esp+Ch] [ebp-34h] BYREF
  int v7; // [esp+12h] [ebp-2Eh]
  int v8; // [esp+16h] [ebp-2Ah]
  int v9; // [esp+1Ah] [ebp-26h]
  int v10; // [esp+1Eh] [ebp-22h]
  __int16 v11; // [esp+22h] [ebp-1Eh]
  int v12; // [esp+24h] [ebp-1Ch]
  int v13; // [esp+28h] [ebp-18h]
  int v14; // [esp+2Ch] [ebp-14h]
  int v15; // [esp+30h] [ebp-10h]
  PVOID Object; // [esp+34h] [ebp-Ch]
  unsigned int v17; // [esp+38h] [ebp-8h]
  int v18; // [esp+3Ch] [ebp-4h]

  v15 = a2;
  Object = a1;
  v18 = -1073741823;
  do
  {
    v17 = HIDWORD(g_cDWMWindowUniqueness);
    v3 = g_cDWMWindowUniqueness;
  }
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != __PAIR64__(v17, v3) );
  v4 = Object;
  if ( Object )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v6[0] = 12;
    v6[1] = 36;
    v6[2] = 0x8000;
    v12 = 1073741877;
    v13 = v15;
    v14 = a3;
    EtwUpdateEvent(v15, 1073741877);
    v18 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(v4);
  }
  return v18;
}
