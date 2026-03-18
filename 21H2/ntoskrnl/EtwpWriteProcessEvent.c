/*
 * XREFs of EtwpWriteProcessEvent @ 0x14070AE08
 * Callers:
 *     EtwTraceProcess @ 0x14070AC28 (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140281380 (EtwTraceSiloKernelEvent.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x14070AFC0 (RtlFreeAnsiString.c)
 *     EtwpPsProvTraceProcess @ 0x14070AFEC (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14070B610 (EtwpBuildProcessEvent.c)
 */

void __fastcall EtwpWriteProcessEvent(
        __int64 BugCheckParameter1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6)
{
  char v6; // r14
  __int64 v8; // r15
  char v11; // si
  _DWORD *v12; // r9
  __int64 ProcessServerSilo; // rax
  __int64 v14; // [rsp+50h] [rbp-B0h]
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  STRING AnsiString; // [rsp+70h] [rbp-90h] BYREF
  int v18[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  _OWORD v21[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v22[18]; // [rsp+E0h] [rbp-20h] BYREF

  LODWORD(v15) = 0;
  v6 = 0;
  v16 = a6;
  v8 = a3;
  v20 = 0LL;
  *(_OWORD *)v18 = 0LL;
  v11 = 1;
  v19 = 0LL;
  memset(v21, 0, sizeof(v21));
  AnsiString = 0LL;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v21, v12);
      v6 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  v14 = v16;
  LOBYTE(a3) = v11;
  *a5 = 0LL;
  EtwpBuildProcessEvent(
    BugCheckParameter1,
    a2,
    a3,
    (int)v18,
    v8,
    (__int64)v22,
    (__int64)&v15,
    a4,
    &AnsiString,
    (__int64)a5,
    v14);
  if ( v6 )
  {
    KiUnstackDetachProcess((__int64)v21, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  }
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 1) != 0 )
    EtwpPsProvTraceProcess(BugCheckParameter1, v20, a4, v8, a2);
  ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v22, v15, 1u, a2, 5249284);
  RtlFreeAnsiString(&AnsiString);
}
