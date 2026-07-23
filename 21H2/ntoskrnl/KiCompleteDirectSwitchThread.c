/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x140284918
 * Callers:
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveBoostThread @ 0x1402EF720 (KiRemoveBoostThread.c)
 */

__int64 __fastcall KiCompleteDirectSwitchThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 updated; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  result = *(unsigned int *)(a2 + 120);
  if ( (result & 0x20) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread(a1, a2, 0LL);
    _enable();
    v6 = *(_QWORD *)(a1 + 11528);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 32);
      if ( v7 > updated )
        *(_QWORD *)(v6 - 184) += v7 - updated;
    }
    result = KiRemoveBoostThread(a1, a2);
    *(_QWORD *)(a2 + 32) = updated;
  }
  return result;
}
