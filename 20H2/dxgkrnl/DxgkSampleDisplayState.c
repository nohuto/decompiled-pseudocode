/*
 * XREFs of DxgkSampleDisplayState @ 0x1C0259C8C
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C0042CD0 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSampleDisplayState(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax

  if ( !a1 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v5 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 392LL))(a1);
  v8 = v5;
  if ( v5 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    CurrentProcess = PsGetCurrentProcess(v11, v10);
    *(_QWORD *)(v9 + 24) = (unsigned int)PsGetProcessSessionId(CurrentProcess);
    *(_QWORD *)(v9 + 32) = v8;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v8;
}
