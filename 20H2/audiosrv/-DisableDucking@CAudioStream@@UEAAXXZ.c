/*
 * XREFs of ?DisableDucking@CAudioStream@@UEAAXXZ @ 0x18006DD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::DisableDucking(CAudioStream *this)
{
  _InterlockedExchange((volatile __int32 *)this + 103, 1);
}
