/*
 * XREFs of ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x1800A5FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x18009F678 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800A5EE0 (-Stop@CFlickVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CFlickVisual::UpdateTransition(CFlickVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 44);
  if ( v1 && *(_BYTE *)(v1 + 72) )
    CFlickVisual::Stop(this);
  else
    CContactManager::PostFlickFeedbackUpdate(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24),
      *((_DWORD *)this + 74),
      *((_DWORD *)this + 75),
      (_QWORD *)this + 39,
      v1 != 0);
  return 0LL;
}
