/*
 * XREFs of GetRegistryDwordValue @ 0x1C001EFC0
 * Callers:
 *     ProcLibTraceSummary2 @ 0x1C001E1CC (ProcLibTraceSummary2.c)
 *     GetRegistryQwordValue @ 0x1C001F064 (GetRegistryQwordValue.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002D3C4 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002D780 (InitPerfStatesInternal.c)
 *     ProcLibGlobalInit @ 0x1C0036650 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C001EFE4 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
