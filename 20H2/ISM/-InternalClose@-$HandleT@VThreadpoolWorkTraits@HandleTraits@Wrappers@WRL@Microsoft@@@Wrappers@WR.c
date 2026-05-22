/*
 * XREFs of ?InternalClose@?$HandleT@VThreadpoolWorkTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18015F700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolWorkTraits>::InternalClose(
        __int64 a1)
{
  struct _TP_WORK *v1; // rbx

  v1 = *(struct _TP_WORK **)(a1 + 8);
  WaitForThreadpoolWorkCallbacks(v1, 1);
  CloseThreadpoolWork(v1);
  return 1;
}
