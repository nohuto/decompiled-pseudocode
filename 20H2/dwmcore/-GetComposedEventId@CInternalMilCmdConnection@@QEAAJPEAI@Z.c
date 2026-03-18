/*
 * XREFs of ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x1800D8B5C
 * Callers:
 *     ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1800D8B10 (-MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800D8C08 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::GetComposedEventId(CInternalMilCmdConnection *this, unsigned int *a2)
{
  unsigned int v4; // edi
  unsigned int CompositionId; // esi
  unsigned int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  CompositionId = DwmQueryCompositionId();
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  if ( *((_QWORD *)this + 6) || (v7 = OpenComposedEvent(CompositionId, v6, (void **)this + 6), v4 = v7, v7 >= 0) )
    *a2 = CompositionId;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802CCAB0, 2u, v7, 0x1EAu, 0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v4;
}
