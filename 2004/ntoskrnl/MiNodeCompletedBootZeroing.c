/*
 * XREFs of MiNodeCompletedBootZeroing @ 0x1403A85F8
 * Callers:
 *     MiZeroNodePages @ 0x1403A7930 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x1403C7614 (MiZeroBootLargePages.c)
 * Callees:
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 */

char __fastcall MiNodeCompletedBootZeroing(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  signed __int32 v4; // eax

  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 6336), 0xFFFFFFFF);
  if ( v4 == 1 )
    LOBYTE(v4) = KeSignalGate(a1 + 6344, 1LL, a3, a4);
  return v4;
}
