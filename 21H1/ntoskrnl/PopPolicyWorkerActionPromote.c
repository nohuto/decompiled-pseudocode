/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x140765680
 * Callers:
 *     PopPolicyWorkerThread @ 0x140315930 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x14035D440 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x14037FF84 (PopSetPowerActionState.c)
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerActionPromote(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v4; // bl
  int v5; // ecx

  PopAcquirePolicyLock(a1);
  qword_140C235B8 = (__int64)KeGetCurrentThread();
  if ( !(_BYTE)PopAction )
    goto LABEL_2;
  v4 = PopAction;
  if ( !byte_140C23401 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v5 = 2;
    goto LABEL_12;
  }
  if ( byte_140C23401 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, (POWER_ACTION)qword_140C23404, SHIDWORD(qword_140C23404), dword_140C2340C) >= 0 )
  {
    LOBYTE(PopAction) = ~v4 & PopAction;
    goto LABEL_2;
  }
  if ( byte_140C23401 != 2 )
  {
    v5 = 1;
LABEL_12:
    PopGetPolicyWorker(v5);
  }
LABEL_2:
  qword_140C235B8 = 0LL;
  PopReleasePolicyLock(v2, v1);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
