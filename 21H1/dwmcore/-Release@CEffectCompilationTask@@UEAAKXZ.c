/*
 * XREFs of ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x1800C0470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x1800C0568 (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x180186DE8 (--1CEffectCompilationTask@@QEAA@XZ.c)
 */

__int64 __fastcall CEffectCompilationTask::Release(CEffectCompilationTask *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 24);
  if ( !v2 )
  {
    if ( CEffectCompilationService::TryAddDeadTask(*((CEffectCompilationService **)this + 1), this) )
    {
      return *((unsigned __int32 *)this + 24);
    }
    else
    {
      CEffectCompilationTask::~CEffectCompilationTask(this);
      operator delete(this);
    }
  }
  return v2;
}
