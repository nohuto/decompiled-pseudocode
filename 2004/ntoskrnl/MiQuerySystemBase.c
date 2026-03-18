/*
 * XREFs of MiQuerySystemBase @ 0x140360E8C
 * Callers:
 *     MiInitializeSystemCache @ 0x1407883F8 (MiInitializeSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_140C4F8C8[2 * a1];
}
