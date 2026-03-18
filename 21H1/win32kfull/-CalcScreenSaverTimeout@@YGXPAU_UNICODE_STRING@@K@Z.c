/*
 * XREFs of ?CalcScreenSaverTimeout@@YGXPAU_UNICODE_STRING@@K@Z @ 0xD899E
 * Callers:
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     _GetEasTimeout@0 @ 0xD89EE (_GetEasTimeout@0.c)
 */

void __fastcall CalcScreenSaverTimeout(int a1, int a2)
{
  unsigned int EasTimeout; // ebx
  unsigned int v5; // [esp+Ch] [ebp-4h] BYREF

  v5 = 0;
  EasTimeout = GetEasTimeout();
  if ( FastGetProfileIntFromID(a1, 4, 99, EasTimeout, &v5, a2) && (!EasTimeout || v5 < EasTimeout) )
    EasTimeout = v5;
  xxxSystemParametersInfo(15, EasTimeout, 0, 0x8000);
}
