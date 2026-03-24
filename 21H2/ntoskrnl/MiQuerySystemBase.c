/*
 * XREFs of MiQuerySystemBase @ 0x1402D3F2C
 * Callers:
 *     MiInitializeSystemCache @ 0x1407A0628 (MiInitializeSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_140C4FAC8[2 * a1];
}
