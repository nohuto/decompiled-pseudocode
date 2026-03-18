/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x140331058
 * Callers:
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x1402677B0 (KiRemoveBoostThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140332B00 (KiUpdateTotalCyclesCurrentThread.c)
 */

char __fastcall KiCompleteDirectSwitchThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 updated; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rcx

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x20) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread(a1, a2, 0LL);
    _enable();
    v8 = *(_QWORD *)(a1 + 11528);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a2 + 32);
      if ( v9 > updated )
        *(_QWORD *)(v8 - 184) += v9 - updated;
    }
    LOBYTE(v2) = KiRemoveBoostThread(a1, a2, v6, v7);
    *(_QWORD *)(a2 + 32) = updated;
  }
  return v2;
}
