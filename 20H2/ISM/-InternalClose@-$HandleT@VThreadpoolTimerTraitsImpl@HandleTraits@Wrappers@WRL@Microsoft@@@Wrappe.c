/*
 * XREFs of ?InternalClose@?$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18016CB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::InternalClose(
        __int64 a1)
{
  struct _TP_TIMER *v1; // rbx

  v1 = *(struct _TP_TIMER **)(a1 + 8);
  SetThreadpoolTimer(v1, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(v1, 1);
  CloseThreadpoolTimer(v1);
  return 1;
}
