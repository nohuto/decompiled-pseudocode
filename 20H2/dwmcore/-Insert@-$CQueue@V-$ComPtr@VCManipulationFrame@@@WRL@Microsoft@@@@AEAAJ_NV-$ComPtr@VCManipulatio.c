/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18022208C
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1802237DC (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802219C4 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v4 = 0;
  EnterCriticalSection(&CriticalSection);
  if ( byte_1803484C4 )
  {
    v4 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147023781, 0x97u, 0LL);
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
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(v8 + 2, a3);
      v9 = (_QWORD *)qword_1803484B8;
      if ( *(void ***)qword_1803484B8 != &CManipulationManager::s_InputQueue )
        __fastfail(3u);
      *v8 = &CManipulationManager::s_InputQueue;
      v8[1] = v9;
      *v9 = v8;
      ++dword_1803484C0;
      qword_1803484B8 = (__int64)v8;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x9Cu, 0LL);
    }
  }
  LeaveCriticalSection(&CriticalSection);
  v10 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return v4;
}
