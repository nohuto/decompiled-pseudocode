/*
 * XREFs of ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x1800D9D58
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800EF78C (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801BF684 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800402F0 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CEffectCompilationService::OnTaskCompleted_AnyThread(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( !*((_BYTE *)this + 72) )
  {
    v6 = 0LL;
    if ( *((_DWORD *)this + 26) )
    {
      v7 = *((_QWORD *)this + 10);
      while ( *(struct CEffectCompilationTask **)(v7 + 8 * v6) != a2 )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)this + 26) )
          goto LABEL_10;
      }
      if ( (unsigned int)v6 >= *((_DWORD *)this + 19) )
      {
        v8 = *((unsigned int *)this + 19);
        v9 = *(_QWORD *)(v7 + 8 * v6);
        *(_QWORD *)(v7 + 8 * v6) = *(_QWORD *)(v7 + 8 * v8);
        *(_QWORD *)(v7 + 8 * v8) = v9;
        LODWORD(v6) = ++*((_DWORD *)this + 19);
      }
      if ( a3 )
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this + 10, v6);
        --*((_DWORD *)this + 19);
      }
      SetEvent(*((HANDLE *)this + 3));
    }
  }
LABEL_10:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
}
