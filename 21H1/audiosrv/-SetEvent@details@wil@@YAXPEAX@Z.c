/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18000457C
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180004484 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800D2690 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x1801084DC (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1801099A0 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1801099E0 (-TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B6924 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x91C,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
    JUMPOUT(0x18007E866LL);
  }
}
