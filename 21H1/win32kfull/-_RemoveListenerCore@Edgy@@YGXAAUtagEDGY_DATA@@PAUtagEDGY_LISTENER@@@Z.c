/*
 * XREFs of ?_RemoveListenerCore@Edgy@@YGXAAUtagEDGY_DATA@@PAUtagEDGY_LISTENER@@@Z @ 0x16EEB8
 * Callers:
 *     ?_RemoveListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16EE85 (-_RemoveListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@@Z.c)
 *     ?_RemoveListenersForDevice@Edgy@@YGXAAUtagEDGY_DATA@@PAX@Z @ 0x16EF07 (-_RemoveListenersForDevice@Edgy@@YGXAAUtagEDGY_DATA@@PAX@Z.c)
 * Callees:
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

void __fastcall Edgy::_RemoveListenerCore(int *a1, int a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // edi

  if ( a2 == a1[44] )
    a1[44] = 0;
  v4 = *a1;
  v5 = a1[2];
  v6 = (a2 - v5) >> 4;
  if ( v6 != *a1 - 1 )
  {
    memmove((void *)(16 * v6 + v5), (const void *)(16 * v6 + v5 + 16), 16 * (v4 - v6) - 16);
    v4 = *a1;
  }
  *a1 = v4 - 1;
}
