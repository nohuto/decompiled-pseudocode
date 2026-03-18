/*
 * XREFs of EtwpWriteProcessEvent @ 0x1405D85C4
 * Callers:
 *     EtwTraceProcess @ 0x1405D83E4 (EtwTraceProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     EtwTraceSiloKernelEvent @ 0x1402A8CA4 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x1405D8FA8 (EtwpBuildProcessEvent.c)
 */

void __fastcall EtwpWriteProcessEvent(
        __int64 BugCheckParameter1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6)
{
  char v6; // r14
  _DWORD *v11; // r9
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 ProcessServerSilo; // rax
  __int64 v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  __int128 v19; // [rsp+80h] [rbp-80h]
  __int128 v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  _OWORD v22[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v23[18]; // [rsp+E0h] [rbp-20h] BYREF

  LODWORD(v16) = 0;
  v6 = 0;
  v17 = a6;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v22, 0, sizeof(v22));
  UnicodeString = 0LL;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1
    && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v22, v11);
    v6 = 1;
  }
  v15 = v17;
  *a5 = 0LL;
  EtwpBuildProcessEvent(
    (PEPROCESS)BugCheckParameter1,
    a3,
    (__int64)v23,
    (__int64)&v16,
    a4,
    (PSTRING)&UnicodeString,
    (__int64)a5,
    v15);
  if ( v6 )
  {
    KiUnstackDetachProcess((__int64)v22, 0LL, v12, v13);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  }
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 1) != 0 )
    EtwpPsProvTraceProcess((PEPROCESS)BugCheckParameter1, a2);
  ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (__int64)v23, v16, 1u, a2, 0x501904u);
  RtlFreeAnsiString(&UnicodeString);
}
