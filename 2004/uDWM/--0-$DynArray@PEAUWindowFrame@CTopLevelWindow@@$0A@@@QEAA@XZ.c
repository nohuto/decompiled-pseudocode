/*
 * XREFs of ??0?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ @ 0x1800424BC
 * Callers:
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x180001240 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 * Callees:
 *     <none>
 */

__int128 *DynArray<CTopLevelWindow::WindowFrame *,0>::DynArray<CTopLevelWindow::WindowFrame *,0>()
{
  __int128 *result; // rax

  unk_1800E7D50 = 0LL;
  dword_1800E7D58 = 0;
  result = &CTopLevelWindow::s_rgpwfWindowFrames;
  CTopLevelWindow::s_rgpwfWindowFrames = 0LL;
  return result;
}
