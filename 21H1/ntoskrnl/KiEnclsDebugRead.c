/*
 * XREFs of KiEnclsDebugRead @ 0x1403F6D00
 * Callers:
 *     KeDebugReadEnclaveMemory @ 0x1408B71AC (KeDebugReadEnclaveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsDebugRead(__int64 a1, __int64 a2)
{
  __asm { encls }
  return a2;
}
