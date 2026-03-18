/*
 * XREFs of ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C01A68E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01A2BF0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPInertiaHandleEvent(CHidInput *this)
{
  CPTPProcessor::EndInertiaForContainer(*((_QWORD *)this + 170), *((_QWORD *)this + 171));
  return 0LL;
}
