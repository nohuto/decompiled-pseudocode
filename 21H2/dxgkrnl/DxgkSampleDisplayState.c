/*
 * XREFs of DxgkSampleDisplayState @ 0x1C02EBFA0
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C004CA90 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSampleDisplayState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGPROCESS *Current; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // eax

  if ( !a1 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v7 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 392LL))(a1);
  v12 = v7;
  if ( v7 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry2(2LL, ProcessSessionId, v12);
    v19 = PsGetCurrentProcess(v16, v15, v17, v18);
    v20 = PsGetProcessSessionId(v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to sample display state in session 0x%I64x, (Status = 0x%I64x).",
      v20,
      v12,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v12;
}
