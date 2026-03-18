/*
 * XREFs of ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C015CD78
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::HasState(__int64 a1)
{
  return (*(_DWORD *)(a1 + 324) & 0x20000000) != 0;
}
