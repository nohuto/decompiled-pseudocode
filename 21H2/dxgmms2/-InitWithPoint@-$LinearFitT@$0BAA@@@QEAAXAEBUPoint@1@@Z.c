/*
 * XREFs of ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x1C001CC04
 * Callers:
 *     ?SmoothenFrame@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0I@Z @ 0x1C00048C0 (-SmoothenFrame@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0I@Z.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1C001CC4C (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 */

__int64 __fastcall LinearFitT<256>::InitWithPoint(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  LinearFitT<256>::Reset();
  *(_OWORD *)(a1 + 104) = *a2;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 104);
  result = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = result;
  *(_DWORD *)(a1 + 8) = 1;
  return result;
}
