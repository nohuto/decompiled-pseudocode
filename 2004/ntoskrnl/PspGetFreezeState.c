/*
 * XREFs of PspGetFreezeState @ 0x14057C0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PspGetFreezeState(__int64 a1)
{
  return (*(_DWORD *)(a1 + 632) & 8) != 0;
}
