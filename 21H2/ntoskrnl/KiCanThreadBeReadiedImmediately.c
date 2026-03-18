/*
 * XREFs of KiCanThreadBeReadiedImmediately @ 0x140210110
 * Callers:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiCanThreadBeReadiedImmediately(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 120);
  return (v1 & 0x20000) != 0 && (v1 & 0x100000) == 0;
}
