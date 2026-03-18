/*
 * XREFs of xxxClientFreeDDEHandle @ 0x1C0232698
 * Callers:
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021BC98 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021BCF8 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientFreeDDEHandle(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0;
  v7 = 0;
  v5 = a1;
  v6 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(67LL);
  v2 = KeUserModeCallback(67LL, &v5, 16LL, &v11, &v10);
  EtwTraceEndCallback(67LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  if ( v2 < 0 || v10 != 24 )
    return 0LL;
  v3 = (__int64 *)v11;
  if ( v11 + 8 < v11 || v11 + 8 > MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  result = *v3;
  v8 = *v3;
  return result;
}
