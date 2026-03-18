/*
 * XREFs of ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x1800257B4
 * Callers:
 *     ?MilCompositionEngine_GetComposedEventId@@YAJPEAI@Z @ 0x180025420 (-MilCompositionEngine_GetComposedEventId@@YAJPEAI@Z.c)
 * Callees:
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180025880 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::GetComposedEventId(RTL_SRWLOCK *this, unsigned int *a2)
{
  unsigned int v4; // edi
  unsigned int CompositionId; // ebp
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // ecx

  v4 = 0;
  CompositionId = DwmQueryCompositionId();
  AcquireSRWLockExclusive(this + 17);
  LODWORD(this[18].Ptr) = GetCurrentThreadId();
  if ( this[2].Ptr || (v7 = OpenComposedEvent(CompositionId, v6, &this[2].Ptr), v4 = v7, v7 >= 0) )
    *a2 = CompositionId;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_18032ACC8, 2u, v7, 0xA1u, 0LL);
  LODWORD(this[18].Ptr) = 0;
  ReleaseSRWLockExclusive(this + 17);
  return v4;
}
