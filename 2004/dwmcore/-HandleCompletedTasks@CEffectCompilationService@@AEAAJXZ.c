/*
 * XREFs of ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x180087E48
 * Callers:
 *     _lambda_85e973520dc2ca0a0fec8750a81f8fb9_::_lambda_invoker_cdecl_ @ 0x1800DADF0 (_lambda_85e973520dc2ca0a0fec8750a81f8fb9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z @ 0x180087EEC (-RemoveAt@-$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180087F4C (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CEffectCompilationService::HandleCompletedTasks(CEffectCompilationService *this)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( *((_DWORD *)this + 19) )
  {
    do
    {
      v2 = 0LL;
      v3 = **((_QWORD **)this + 10);
      *(_BYTE *)(v3 + 92) = 1;
      if ( *(_DWORD *)(v3 + 40) )
      {
        do
        {
          CCompiledEffectTemplate::OnCompilationCompleted(*(CCompiledEffectTemplate **)(*(_QWORD *)(v3 + 16) + 8 * v2));
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *(_DWORD *)(v3 + 40) );
      }
      *(_DWORD *)(v3 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v3 + 16, 8LL);
      DynArray<CEffectCompilationTask *,0>::RemoveAt((char *)this + 80, 0LL);
    }
    while ( (*((_DWORD *)this + 19))-- != 1 );
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return 0LL;
}
