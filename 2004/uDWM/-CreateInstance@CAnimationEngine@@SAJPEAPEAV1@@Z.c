/*
 * XREFs of ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x18004B410
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004B4A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::CreateInstance(struct CAnimationEngine **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         128LL);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 32) = 0;
    *(_QWORD *)v3 = &CAnimationEngine::`vftable';
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_QWORD *)(v3 + 56) = 0LL;
    *(_DWORD *)(v3 + 64) = 0;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_QWORD *)(v3 + 80) = 0LL;
    *(_QWORD *)(v3 + 88) = 0LL;
    *(_DWORD *)(v3 + 96) = 0;
    *(_QWORD *)(v3 + 104) = 0LL;
    *(_DWORD *)(v3 + 116) = 1;
    *(_BYTE *)(v3 + 120) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    *a1 = (struct CAnimationEngine *)v3;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x42u);
  }
  return v2;
}
