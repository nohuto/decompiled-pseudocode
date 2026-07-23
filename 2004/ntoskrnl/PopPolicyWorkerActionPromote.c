/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x140767040
 * Callers:
 *     PopPolicyWorkerThread @ 0x1403537B0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1402DF330 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x1403807C4 (PopSetPowerActionState.c)
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerActionPromote(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v4; // bl
  int v5; // ecx

  PopAcquirePolicyLock(a1);
  qword_140C22FF8 = (__int64)KeGetCurrentThread();
  if ( !(_BYTE)PopAction )
    goto LABEL_2;
  v4 = PopAction;
  if ( !byte_140C22E41 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v5 = 2;
    goto LABEL_12;
  }
  if ( byte_140C22E41 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, (POWER_ACTION)qword_140C22E44, SHIDWORD(qword_140C22E44), dword_140C22E4C) >= 0 )
  {
    LOBYTE(PopAction) = ~v4 & PopAction;
    goto LABEL_2;
  }
  if ( byte_140C22E41 != 2 )
  {
    v5 = 1;
LABEL_12:
    PopGetPolicyWorker(v5);
  }
LABEL_2:
  qword_140C22FF8 = 0LL;
  PopReleasePolicyLock(v2, v1);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
