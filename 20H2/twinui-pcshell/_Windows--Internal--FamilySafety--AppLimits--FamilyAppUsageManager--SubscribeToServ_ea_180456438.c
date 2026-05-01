/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::SubscribeToServices_::_1_::dtor$4 @ 0x180456438
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@QEAA@XZ @ 0x180457154 (--1-$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::SubscribeToServices_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~2u;
    return Microsoft::WRL::ComPtr<AppUsageTracker>::~ComPtr<AppUsageTracker>(a2 + 96);
  }
  return result;
}
