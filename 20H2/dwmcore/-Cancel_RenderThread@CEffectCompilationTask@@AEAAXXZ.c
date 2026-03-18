/*
 * XREFs of ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801824C8
 * Callers:
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x1801679B0 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x180182428 (--1CEffectCompilationTask@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CEffectCompilationTask::Cancel_RenderThread(CEffectCompilationTask *this)
{
  struct _TP_WORK *v2; // rcx
  CEffectCompilationService *v3; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(v2, 1);
    CloseThreadpoolWork(*((PTP_WORK *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = (CEffectCompilationService *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 16) = 1;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v3, this, 1);
}
