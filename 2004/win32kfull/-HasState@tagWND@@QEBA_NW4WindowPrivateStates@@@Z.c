/*
 * XREFs of ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C0159410
 * Callers:
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::HasState(__int64 a1)
{
  return (*(_DWORD *)(a1 + 324) & 0x20000000) != 0;
}
