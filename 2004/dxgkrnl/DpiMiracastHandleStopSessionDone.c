/*
 * XREFs of DpiMiracastHandleStopSessionDone @ 0x1C02CE524
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C02CEE38 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C00525FC (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0053F08 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastHandleStopSessionDone(char *P, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  DpiMiracastEtwLogStopMiracastSessionStage((__int64)P, 0, a3);
  if ( *(int *)(a2 + 4) >= 0 )
  {
    *((_DWORD *)P + 169) = *(_DWORD *)(a2 + 24);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v7 + 24) = *(int *)(a2 + 4);
    WdLogEvent5_WdError(v7);
  }
  DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) == 0 ? 0x80 : 0, 0);
}
