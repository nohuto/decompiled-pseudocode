/*
 * XREFs of ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C006B5A4
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00275DC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C006B498 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CitpProcessGetAppSessionId(
        struct _GUID *__return_ptr retstr,
        struct tagPROCESSINFO *a2,
        unsigned int *a3)
{
  LONGLONG TimeQuadPart; // rax
  __int64 v7; // rcx

  *(_QWORD *)retstr->Data4 = 0LL;
  retstr->Data1 = *((_DWORD *)a2 + 14);
  retstr->Data2 = gSessionId;
  retstr->Data3 = *((_WORD *)xmmword_1C0256430 + 58);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)a2);
  v7 = *(_QWORD *)a2;
  *(_QWORD *)retstr->Data4 = TimeQuadPart;
  *a3 = PsGetProcessSequenceNumber(v7);
  return retstr;
}
