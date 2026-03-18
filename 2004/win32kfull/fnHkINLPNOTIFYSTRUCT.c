/*
 * XREFs of fnHkINLPNOTIFYSTRUCT @ 0x1C0006A80
 * Callers:
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0006A1C (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 fnHkINLPNOTIFYSTRUCT(int a1, __int64 a2, __int64 a3, ...)
{
  int v5; // ebx
  _QWORD *v6; // rcx
  _QWORD v8[15]; // [rsp+40h] [rbp-78h] BYREF
  char v9; // [rsp+C0h] [rbp+8h] BYREF
  int v10; // [rsp+C8h] [rbp+10h] BYREF
  int v11; // [rsp+CCh] [rbp+14h]
  unsigned __int64 v12; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v13; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v15; // [rsp+E0h] [rbp+28h]
  _DWORD *v16; // [rsp+E8h] [rbp+30h]
  va_list va1; // [rsp+F0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _DWORD *);
  v11 = HIDWORD(a2);
  v12 = 0LL;
  v10 = 0;
  memset(v8, 0, 0x60uLL);
  LODWORD(v8[0]) = a1;
  v8[1] = 0LL;
  v8[5] = *(_QWORD *)(a3 + 32);
  LODWORD(v8[6]) = *(_DWORD *)(a3 + 48);
  v8[7] = *(int *)(a3 + 40);
  v8[8] = *(int *)(a3 + 44);
  LODWORD(v8[9]) = *(_DWORD *)(a3 + 52);
  v8[2] = 0LL;
  v8[3] = v15;
  LODWORD(v8[4]) = *v16;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)va);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(127LL);
  v5 = KeUserModeCallback(127LL, v8, 96LL, &v12, &v10);
  EtwTraceEndCallback(127LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)va);
  if ( v5 < 0 || v10 != 24 )
    return 0LL;
  v6 = (_QWORD *)v12;
  if ( v12 + 8 < v12 || v12 + 8 > MmUserProbeAddress )
    v6 = (_QWORD *)MmUserProbeAddress;
  return (unsigned int)*v6;
}
