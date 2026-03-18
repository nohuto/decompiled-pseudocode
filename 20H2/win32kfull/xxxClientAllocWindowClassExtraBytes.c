/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x1C00D482C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxValidateClassAndSize @ 0x1C015BB84 (xxxValidateClassAndSize.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length, __int64 a2, __int64 a3, __int64 a4)
{
  SIZE_T v5; // rsi
  int v6; // ebx
  volatile void **v7; // rcx
  volatile void *v8; // rbx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  volatile void *v12; // [rsp+38h] [rbp-30h]
  char v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+80h] [rbp+18h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v5 = (unsigned int)Length;
  v11 = 0LL;
  v15 = 0;
  v12 = 0LL;
  v16 = Length;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x800) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Length, a2, a3, a4);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v14);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(123LL);
  v6 = KeUserModeCallback(123LL, &v16, 4LL, &v11, &v15);
  EtwTraceEndCallback(123LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v14);
  if ( v6 < 0 || v15 != 24 )
    return 0LL;
  v7 = (volatile void **)v11;
  if ( v11 + 8 < v11 || v11 + 8 > MmUserProbeAddress )
    v7 = (volatile void **)MmUserProbeAddress;
  v12 = *v7;
  v8 = v12;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7);
  ProbeForRead(v8, v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x800) != 0 )
    return 0LL;
  else
    return v8;
}
