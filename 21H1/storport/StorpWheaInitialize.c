/*
 * XREFs of StorpWheaInitialize @ 0x1C00718F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpWheaInitialize(__int64 a1, int a2)
{
  __int64 result; // rax

  g_StorpWheaErrorSourceId = a2;
  result = 0LL;
  g_StorpWheaInitialized = 1;
  return result;
}
