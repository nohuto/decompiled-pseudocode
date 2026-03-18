/*
 * XREFs of xxxClientRimDevCallback @ 0x1C0122974
 * Callers:
 *     RIMDevChangeDoUsermodeCallback @ 0x1C0122798 (RIMDevChangeDoUsermodeCallback.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientRimDevCallback(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        __int64 a9,
        __int64 a10)
{
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 result; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+54h] [rbp-34h]
  int v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+5Ch] [rbp-2Ch]
  __int16 v19; // [rsp+60h] [rbp-28h]
  __int16 v20; // [rsp+62h] [rbp-26h]
  int v21; // [rsp+64h] [rbp-24h]
  __int64 v22; // [rsp+68h] [rbp-20h]
  __int64 v23; // [rsp+70h] [rbp-18h]
  int v24; // [rsp+90h] [rbp+8h] BYREF

  v13 = 0LL;
  v24 = 0;
  v21 = 0;
  v14[0] = a5;
  v14[1] = a6;
  v15 = a3;
  v16 = a1;
  v17 = a2;
  v18 = a4;
  v19 = a7;
  v20 = a8;
  v22 = a9;
  v23 = a10;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  EtwTraceBeginCallback(118LL);
  v10 = KeUserModeCallback(118LL, v14, 56LL, &v13, &v24);
  EtwTraceEndCallback(118LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a8);
  if ( v10 < 0 || v24 != 24 )
    return 0LL;
  v11 = (__int64 *)v13;
  if ( v13 + 8 < v13 || v13 + 8 > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  result = *v11;
  a5 = *v11;
  return result;
}
