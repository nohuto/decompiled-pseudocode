/*
 * XREFs of EtwpWriteProcessEvent @ 0x1406F2264
 * Callers:
 *     EtwTraceProcess @ 0x1406F2A40 (EtwTraceProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     EtwTraceSiloKernelEvent @ 0x14027BDBC (EtwTraceSiloKernelEvent.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x1406F1D70 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1406F2410 (EtwpPsProvTraceProcess.c)
 */

void __fastcall EtwpWriteProcessEvent(
        PEPROCESS Process,
        __int16 a2,
        _QWORD *a3,
        WCHAR *a4,
        unsigned __int16 *a5,
        __int64 a6)
{
  char v6; // r14
  char v11; // si
  __int64 ProcessServerSilo; // rax
  PVOID *v13; // [rsp+50h] [rbp-B0h]
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v17[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-60h]
  _OWORD v19[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v20[18]; // [rsp+E0h] [rbp-20h] BYREF

  LODWORD(v14) = 0;
  v6 = 0;
  v15 = a6;
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  v11 = 1;
  memset(v19, 0, sizeof(v19));
  UnicodeString = 0LL;
  if ( KeGetCurrentThread()->ApcState.Process != Process )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    {
      KiStackAttachProcess(Process, 0, (__int64)v19);
      v6 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  v13 = (PVOID *)v15;
  *(_OWORD *)a5 = 0LL;
  EtwpBuildProcessEvent(
    Process,
    a2,
    v11,
    (__int64)v17,
    a3,
    (__int64)v20,
    (unsigned int *)&v14,
    a4,
    (PSTRING)&UnicodeString,
    a5,
    v13);
  if ( v6 )
  {
    KiUnstackDetachProcess((__int64)v19, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  }
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 1) != 0 )
    EtwpPsProvTraceProcess(Process, a2);
  ProcessServerSilo = PsGetProcessServerSilo((__int64)Process);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v20, v14, 1u, a2, 5249284);
  RtlFreeAnsiString(&UnicodeString);
}
