/*
 * XREFs of ?SaveState@AUTOFLOATINGPOINTSTATE@@QEAAJXZ @ 0x1C0034400
 * Callers:
 *     ?SmoothenFrame@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0I@Z @ 0x1C00048C0 (-SmoothenFrame@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0I@Z.c)
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z @ 0x1C003408C (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AUTOFLOATINGPOINTSTATE::SaveState(AUTOFLOATINGPOINTSTATE *this)
{
  int v1; // et0
  __int64 result; // rax

  *(_DWORD *)this = 0;
  v1 = _mm_getcsr();
  *((_DWORD *)this + 2) = v1;
  result = *(unsigned int *)this;
  _mm_setcsr(v1 | 1);
  return result;
}
