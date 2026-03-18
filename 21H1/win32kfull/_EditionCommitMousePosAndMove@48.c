/*
 * XREFs of _EditionCommitMousePosAndMove@48 @ 0xACEC2
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 */

int __stdcall EditionCommitMousePosAndMove(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // esi
  __int64 v13; // rax

  if ( *a4 == 2 )
    v12 = a4[1];
  else
    v12 = 0;
  v13 = UpconvertTime(a5);
  return xxxMoveEventAbsolute(*a1, a1[1], a2, v12, a3, v13, HIDWORD(v13), a6, a7, a8, a9, a10, a12);
}
