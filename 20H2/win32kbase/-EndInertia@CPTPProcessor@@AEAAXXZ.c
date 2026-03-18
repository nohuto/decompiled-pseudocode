/*
 * XREFs of ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A07FC
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A1020 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0003D70 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A3A84 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01A4334 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 */

void __fastcall CPTPProcessor::EndInertia(CPTPProcessor *this)
{
  CInertiaManager *v2; // rcx

  if ( *((_BYTE *)this + 464) )
  {
    CHidInput::HandlePTPInertiaTimer(this, 1, 0, *((void **)this + 59));
    *((_BYTE *)this + 464) = 0;
  }
  if ( (*((_DWORD *)this + 113) & 1) != 0 )
  {
    CInertiaManager::GetInstance();
    CInertiaManager::PostInertiaMessage(
      v2,
      0x23Cu,
      (CPTPProcessor *)((char *)this + 240),
      *(struct tagPOINT *)((char *)this + 432),
      *(struct tagPOINT *)((char *)this + 440));
    *((_DWORD *)this + 113) &= ~1u;
  }
}
