/*
 * XREFs of ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x1800977E4
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800987A0 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180098838 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800988C4 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::EnsureWindowArrangementTransition(CWindowList *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 64) )
  {
    v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           32LL);
    if ( v3 )
    {
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_BYTE *)(v3 + 24) = 0;
    }
    else
    {
      v3 = 0LL;
    }
    *((_QWORD *)this + 64) = v3;
    if ( !v3 )
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1AA8u);
    }
  }
  return v1;
}
