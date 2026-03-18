/*
 * XREFs of ?_RemoveListenersForDevice@Edgy@@YGXAAUtagEDGY_DATA@@PAX@Z @ 0x16EF07
 * Callers:
 *     ?OnDeviceRemoval@Edgy@@YGXPAX@Z @ 0x16E058 (-OnDeviceRemoval@Edgy@@YGXPAX@Z.c)
 * Callees:
 *     ?_RemoveListenerCore@Edgy@@YGXAAUtagEDGY_DATA@@PAUtagEDGY_LISTENER@@@Z @ 0x16EEB8 (-_RemoveListenerCore@Edgy@@YGXAAUtagEDGY_DATA@@PAUtagEDGY_LISTENER@@@Z.c)
 */

void __fastcall Edgy::_RemoveListenersForDevice(int *a1, int a2)
{
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // edx

  v3 = *a1;
  if ( *a1 )
  {
    v4 = 16 * v3;
    do
    {
      v5 = (_DWORD *)(v4 + a1[2] - 16);
      if ( *v5 == a2 )
        Edgy::_RemoveListenerCore(a1, (int)v5);
      v4 -= 16;
      --v3;
    }
    while ( v3 );
  }
}
