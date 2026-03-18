/*
 * XREFs of Register_GetExtendedTBCTRBStatusSupported @ 0x1C001415C
 * Callers:
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 * Callees:
 *     Register_GetExtendedTBCEnable @ 0x1C001417C (Register_GetExtendedTBCEnable.c)
 */

bool __fastcall Register_GetExtendedTBCTRBStatusSupported(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  return (unsigned __int8)Register_GetExtendedTBCEnable(a1, a2, a3) && (*(_DWORD *)(v3 + 104) & 0x80u) != 0;
}
