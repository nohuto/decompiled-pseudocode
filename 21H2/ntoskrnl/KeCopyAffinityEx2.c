/*
 * XREFs of KeCopyAffinityEx2 @ 0x140256360
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 */

__int64 __fastcall KeCopyAffinityEx2(__int64 a1, __int64 a2)
{
  return KiCopyAffinityEx(a1, *(unsigned __int16 *)(a1 + 2), a2);
}
