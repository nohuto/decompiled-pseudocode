/*
 * XREFs of MiGatherHiberRange @ 0x1409B1150
 * Callers:
 *     MmMarkHiberPhase @ 0x1409B154C (MmMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 */

__int64 __fastcall MiGatherHiberRange(__int64 a1, void *a2, __int64 a3, int a4)
{
  ULONG_PTR v5; // r8
  ULONG v6; // edx

  if ( a4 == 2 )
    v5 = 1LL;
  else
    v5 = a3 << 12;
  v6 = 81920;
  if ( a4 != 2 )
    v6 = 0x10000;
  PoSetHiberRange(0LL, v6, a2, v5, 0x74706D4Du);
  return 0LL;
}
