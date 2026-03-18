/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18017C5D8
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18017E1F4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18017BCE8 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax

  v4 = 0;
  EnterCriticalSection(&CriticalSection);
  if ( byte_1803D36E4 )
  {
    v4 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2147023781, 0x97u);
  }
  else
  {
    v6 = operator new(0x18uLL);
    v8 = v6;
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))v6 + 2, a3);
      v9 = (_QWORD *)qword_1803D36D8;
      if ( *(__int64 **)qword_1803D36D8 != &CManipulationManager::s_InputQueue )
        __fastfail(3u);
      *v8 = &CManipulationManager::s_InputQueue;
      v8[1] = v9;
      *v9 = v8;
      ++dword_1803D36E0;
      qword_1803D36D8 = (__int64)v8;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024882, 0x9Cu);
    }
  }
  LeaveCriticalSection(&CriticalSection);
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease(a3);
  return v4;
}
