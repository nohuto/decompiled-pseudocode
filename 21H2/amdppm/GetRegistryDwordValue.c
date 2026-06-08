/*
 * XREFs of GetRegistryDwordValue @ 0x1C0020FC0
 * Callers:
 *     ProcLibTraceSummary2 @ 0x1C00201CC (ProcLibTraceSummary2.c)
 *     GetRegistryQwordValue @ 0x1C0021064 (GetRegistryQwordValue.c)
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002F464 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002F820 (InitPerfStatesInternal.c)
 *     ProcLibGlobalInit @ 0x1C00387D0 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C0020FE4 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
