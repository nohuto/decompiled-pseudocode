/*
 * XREFs of ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C006B120
 * Callers:
 *     CitSetInfo @ 0x1C0031F30 (CitSetInfo.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C006B36C (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C006B390 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C006B498 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01FF578 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpSetCompositionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v4; // r12
  const char *v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int16 i; // di
  __int16 v9; // ax
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  struct tagPROCESSINFO *v11; // rbx
  struct _CIT_INTERACTION_SUMMARY *v12; // rax
  struct _CIT_INTERACTION_SUMMARY *v13; // r9
  __int128 v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+38h] [rbp-30h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v4 = xmmword_1C0256430;
  if ( !UserIsCurrentProcessDwm((__int64)a1, (__int64)a2) )
    return 3221225506LL;
  v6 = *(_QWORD *)a2;
  v7 = *(_QWORD *)a1 >> 24;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int16)v7 )
      return 0LL;
    if ( 24 * (unsigned __int64)(unsigned __int16)v7 - 1 > 0xFFFE )
      break;
    if ( (v6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = *(_OWORD *)(v6 + 24LL * i);
    v16 = *(_QWORD *)(v6 + 24LL * i + 16);
    if ( (_QWORD)v15 )
    {
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)(int)v16, &Process) >= 0 )
      {
        if ( PsGetProcessSequenceNumber(Process) == *((_QWORD *)&v15 + 1)
          && (unsigned int)PsGetProcessSessionId(Process) == gSessionId )
        {
          v9 = -1;
          if ( HIDWORD(v16) <= 0xFFFF )
            v9 = WORD2(v16);
          WORD3(v15) = v9;
          PsUpdateComponentPower(Process, 7LL, v15);
          ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
          v11 = ProcessWin32Process;
          if ( ProcessWin32Process )
          {
            if ( CitpProcessEnsureContext(ProcessWin32Process) )
            {
              v12 = CitpInteractionSummaryEnsure(v4, *((struct _CIT_PROCESS **)v11 + 116), 4u);
              v13 = v12;
              if ( v12 )
              {
                if ( (_WORD)v15 )
                  CitpStatIncrement((unsigned __int16 *)v12 + 54, 1u);
                if ( WORD1(v15) )
                  CitpStatIncrement((unsigned __int16 *)v13 + 55, 1u);
                if ( WORD2(v15) )
                  CitpStatIncrement((unsigned __int16 *)v13 + 56, 1u);
              }
            }
          }
        }
        ObfDereferenceObject(Process);
      }
    }
  }
  CitpLogFailureWorker(-1073741823, v5, 0x1A03u);
  return 3221225473LL;
}
