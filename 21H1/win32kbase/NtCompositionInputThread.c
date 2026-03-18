/*
 * XREFs of NtCompositionInputThread @ 0x1C01FC780
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01FB684 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 */

__int64 __fastcall NtCompositionInputThread(void *a1, void *a2, int a3)
{
  int v6; // eax
  CInputManager *v7; // rcx

  if ( qword_1C0258D08 )
    v6 = qword_1C0258D08();
  else
    v6 = -1073741637;
  if ( v6 < 0 )
    return 3221225474LL;
  if ( !UserIsCurrentProcessDwm((__int64)a1, (__int64)a2) )
    return 3221225506LL;
  if ( g_pInputManager )
    return CInputManager::DwmInputThread(v7, a1, a2, a3);
  return 3221225473LL;
}
