/*
 * XREFs of WPP_SF_Ld @ 0x180140878
 * Callers:
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180020B18 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180027C60 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x18003ECE0 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 *     _lambda_8f853f3308fdbebd25aa75747bd09082_::operator() @ 0x180069758 (_lambda_8f853f3308fdbebd25aa75747bd09082_--operator().c)
 *     ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1801405F0 (-UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Ld(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, va, 4LL, 0LL);
}
