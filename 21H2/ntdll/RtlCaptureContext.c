/*
 * XREFs of RtlCaptureContext @ 0x1800A1760
 * Callers:
 *     _invalid_parameter @ 0x18008C868 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x18008C990 (__report_gsfailure.c)
 *     __report_securityfailure @ 0x18008CAFC (__report_securityfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB650 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF790 (LdrpLogIntegrityContinuityTelemetry.c)
 *     RtlpPossibleDeadlock @ 0x1800E9228 (RtlpPossibleDeadlock.c)
 *     RtlAssert @ 0x1800ED7F0 (RtlAssert.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlCaptureContext(PCONTEXT ContextRecord)
{
  DWORD64 v1; // rax
  DWORD64 v2; // rdx
  DWORD64 v3; // rbx
  DWORD64 v4; // rbp
  DWORD64 v5; // rdi
  DWORD64 v6; // rsi
  DWORD64 v7; // r8
  DWORD64 v8; // r9
  DWORD64 v9; // r10
  DWORD64 v10; // r11
  DWORD64 v11; // r12
  DWORD64 v12; // r13
  DWORD64 v13; // r14
  DWORD64 v14; // r15
  DWORD v15; // [rsp+0h] [rbp-8h]
  DWORD64 retaddr; // [rsp+8h] [rbp+0h]
  char v17; // [rsp+10h] [rbp+8h] BYREF

  ContextRecord->Rax = v1;
  ContextRecord->Rcx = (DWORD64)ContextRecord;
  ContextRecord->Rdx = v2;
  ContextRecord->R8 = v7;
  ContextRecord->R9 = v8;
  ContextRecord->R10 = v9;
  ContextRecord->R11 = v10;
  _fxsave(&ContextRecord->FltSave);
  ContextRecord->SegCs = __CS__;
  ContextRecord->SegDs = __DS__;
  ContextRecord->SegEs = __ES__;
  ContextRecord->SegSs = __SS__;
  ContextRecord->SegFs = __FS__;
  ContextRecord->SegGs = __GS__;
  ContextRecord->Rbx = v3;
  ContextRecord->Rbp = v4;
  ContextRecord->Rsi = v6;
  ContextRecord->Rdi = v5;
  ContextRecord->R12 = v11;
  ContextRecord->R13 = v12;
  ContextRecord->R14 = v13;
  ContextRecord->R15 = v14;
  ContextRecord->MxCsr = _mm_getcsr();
  ContextRecord->Rsp = (DWORD64)&v17;
  ContextRecord->Rip = retaddr;
  ContextRecord->EFlags = v15;
  ContextRecord->ContextFlags = 1048591;
}
