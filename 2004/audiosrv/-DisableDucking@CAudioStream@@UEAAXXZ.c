/*
 * XREFs of ?DisableDucking@CAudioStream@@UEAAXXZ @ 0x18006E830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::DisableDucking(CAudioStream *this)
{
  _InterlockedExchange((volatile __int32 *)this + 103, 1);
}
