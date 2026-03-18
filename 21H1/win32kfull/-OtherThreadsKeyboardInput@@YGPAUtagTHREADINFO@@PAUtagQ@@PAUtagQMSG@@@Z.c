/*
 * XREFs of ?OtherThreadsKeyboardInput@@YGPAUtagTHREADINFO@@PAUtagQ@@PAUtagQMSG@@@Z @ 0x14D606
 * Callers:
 *     _SlowAppThreadInShellFrame@16 @ 0xC4096 (_SlowAppThreadInShellFrame@16.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall OtherThreadsKeyboardInput(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // eax
  struct tagTHREADINFO *result; // eax

  v2 = *(_DWORD *)(a2 + 12);
  if ( v2 < 0x100 || v2 > 0x102 && (v2 <= 0x103 || v2 > 0x105 && v2 != 522 && v2 != 526) )
    return 0;
  v3 = *(_DWORD *)(a1 + 60);
  if ( !v3 || (result = *(struct tagTHREADINFO **)(v3 + 8), *(struct tagTHREADINFO **)(a2 + 68) == result) )
  {
    result = *(struct tagTHREADINFO **)(a1 + 52);
    if ( !result || *(struct tagTHREADINFO **)(a2 + 68) == result )
      return 0;
  }
  return result;
}
