/*
 * XREFs of LdrQueryNextListEntry @ 0x180001200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryNextListEntry(__int64 a1, __int64 a2, __int64 a3)
{
  return LdrpReadMemory(a1, a2, a3, 8LL);
}
