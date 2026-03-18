/*
 * XREFs of ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1800D8B10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x1800D8B5C (-GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall MilCompositionEngine_GetComposedEventId(struct HMIL_CONNECTION__ *a1, unsigned int *a2)
{
  int ComposedEventId; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( a1 )
  {
    ComposedEventId = CInternalMilCmdConnection::GetComposedEventId(a1, a2);
    v4 = ComposedEventId;
    if ( ComposedEventId < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802CCAB0, 2u, ComposedEventId, 0x8Cu, 0LL);
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802CCAB0, 2u, -2147024809, 0x88u, 0LL);
  }
  return v4;
}
