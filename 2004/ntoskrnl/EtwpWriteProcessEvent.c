/*
 * XREFs of EtwpWriteProcessEvent @ 0x14065E8C4
 * Callers:
 *     EtwTraceProcess @ 0x14065E6E4 (EtwTraceProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     EtwTraceSiloKernelEvent @ 0x14024FC74 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     EtwpPsProvTraceProcess @ 0x14065EA9C (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14065F2A8 (EtwpBuildProcessEvent.c)
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
  __int64 ProcessServerSilo; // rax
  __int64 v12; // [rsp+50h] [rbp-B0h]
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  __int128 v16; // [rsp+80h] [rbp-80h]
  __int128 v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  _OWORD v19[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v20[18]; // [rsp+E0h] [rbp-20h] BYREF

  LODWORD(v13) = 0;
  v6 = 0;
  v14 = a6;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  memset(v19, 0, sizeof(v19));
  UnicodeString = 0LL;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1
    && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v19);
    v6 = 1;
  }
  v12 = v14;
  *a5 = 0LL;
  EtwpBuildProcessEvent(
    (PEPROCESS)BugCheckParameter1,
    a3,
    (__int64)v20,
    (__int64)&v13,
    a4,
    (PSTRING)&UnicodeString,
    (__int64)a5,
    v12);
  if ( v6 )
  {
    KiUnstackDetachProcess((__int64)v19, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  }
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 1) != 0 )
    EtwpPsProvTraceProcess((PEPROCESS)BugCheckParameter1, a2);
  ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v20, v13, 1u, a2, 5249284);
  RtlFreeAnsiString(&UnicodeString);
}
