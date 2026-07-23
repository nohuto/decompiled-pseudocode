/*
 * XREFs of MiCanStealKernelStack @ 0x1402451C4
 * Callers:
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140536290 (MiJumpStackTarget.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14038059C (MiGetLeafPfnBuddy.c)
 */

_BOOL8 __fastcall MiCanStealKernelStack(__int64 a1, __int16 a2)
{
  __int16 v2; // r10
  __int64 v3; // r9
  unsigned __int64 v4; // rdx

  v2 = a2;
  v3 = a1;
  v4 = (a1 + 0x58000000000LL) / 48;
  return v4 <= 0xFFFFFFFFFLL
      && ((*(_QWORD *)(48 * v4 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0
      && ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 2
      && ((MiFlags & 0x800) == 0 || ((MiGetLeafPfnBuddy(a1) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0)
      && (*(_BYTE *)(v3 + 34) & 7) == 6
      && *(_WORD *)(v3 + 32) == v2;
}
