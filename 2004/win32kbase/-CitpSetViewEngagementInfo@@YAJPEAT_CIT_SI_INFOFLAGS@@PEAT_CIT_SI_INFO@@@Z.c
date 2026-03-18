/*
 * XREFs of ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C004C778
 * Callers:
 *     CitSetInfo @ 0x1C009E9A0 (CitSetInfo.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C009E708 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C009E810 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01F9B6C (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpSetViewEngagementInfo(union _CIT_SI_INFOFLAGS *a1, __int128 **a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rdi
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  struct tagPROCESSINFO *v4; // rbx
  struct _CIT_INTERACTION_SUMMARY *v5; // rax
  __int128 v7; // [rsp+28h] [rbp-20h]
  PEPROCESS Process; // [rsp+50h] [rbp+8h] BYREF

  Process = a1;
  v2 = xmmword_1C02504A0;
  if ( ((unsigned __int8)*a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = **a2;
  Process = 0LL;
  if ( PsLookupProcessByProcessId((HANDLE)SDWORD2(v7), &Process) >= 0 )
  {
    if ( (unsigned int)PsGetProcessSessionId(Process) == gSessionId )
    {
      ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
      v4 = ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        if ( CitpProcessEnsureContext(ProcessWin32Process) )
        {
          v5 = CitpInteractionSummaryEnsure(v2, *((struct _CIT_PROCESS **)v4 + 116), 1u);
          if ( v5 )
            *((_QWORD *)v5 + 2) |= v7;
          **((_QWORD **)v4 + 116) = v7;
        }
      }
    }
    ObfDereferenceObject(Process);
  }
  return 0LL;
}
