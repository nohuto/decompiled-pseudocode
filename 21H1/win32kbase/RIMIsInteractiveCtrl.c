/*
 * XREFs of RIMIsInteractiveCtrl @ 0x1C005023C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C016B248 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsInteractiveCtrl(_WORD *a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1[1] != 1 || *a1 != 14 )
    return 0LL;
  return result;
}
