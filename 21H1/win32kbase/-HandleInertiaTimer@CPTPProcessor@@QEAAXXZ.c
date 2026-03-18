/*
 * XREFs of ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01A8D80
 * Callers:
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01AC670 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0003C20 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01ABB64 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::HandleInertiaTimer(CPTPProcessor *this)
{
  CInertiaManager *v2; // rcx

  if ( *((_BYTE *)this + 464) && (*((_DWORD *)this + 113) & 1) != 0 )
  {
    CInertiaManager::GetInstance();
    CInertiaManager::PostInertiaMessage(
      v2,
      0x23Bu,
      (CPTPProcessor *)((char *)this + 240),
      *(struct tagPOINT *)((char *)this + 432),
      *(struct tagPOINT *)((char *)this + 440));
  }
  *((_BYTE *)this + 464) = 0;
}
