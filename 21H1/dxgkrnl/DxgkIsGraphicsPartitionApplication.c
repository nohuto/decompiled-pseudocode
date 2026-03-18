/*
 * XREFs of DxgkIsGraphicsPartitionApplication @ 0x1C0280134
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C010F304 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DxgkIsGraphicsPartitionApplication(PEPROCESS Process)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // si
  __int64 v5; // rax
  PACCESS_TOKEN v6; // rdi
  NTSTATUS v7; // ebx
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v14; // eax
  char v15; // cl
  _QWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF
  char v19; // [rsp+98h] [rbp+48h] BYREF
  char v20; // [rsp+A0h] [rbp+50h] BYREF
  PVOID TokenInformation; // [rsp+A8h] [rbp+58h] BYREF

  v4 = 1;
  if ( ExGetPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 1441LL;
    WdLogEvent5_WdAssertion(v5);
  }
  TokenInformation = 0LL;
  v6 = PsReferencePrimaryToken(Process);
  v16[0] = 1441812LL;
  v7 = SeQueryInformationToken(v6, TokenIsAppContainer, &TokenInformation);
  v16[1] = L"WIN://BGKD";
  v8 = SeSecurityAttributePresent(v6, v16);
  PsDereferencePrimaryToken(v6);
  if ( v7 < 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v12 + 24) = Process;
    WdLogEvent5_WdWarning(v12);
    return 0;
  }
  if ( !TokenInformation || v8 == 1 )
    return 0;
  v17[0] = 2097182LL;
  v17[1] = L"shellExperience";
  v18[0] = 1703960LL;
  v18[1] = L"hevcPlayback";
  v19 = 0;
  v20 = 0;
  v14 = RtlCapabilityCheck(0LL, v17, &v19);
  v15 = v19;
  if ( v14 < 0 )
    v15 = 0;
  v19 = v15;
  if ( (int)RtlCapabilityCheck(0LL, v18, &v20) < 0 )
    return 0;
  if ( !v20 || v19 )
    return 0;
  return v4;
}
