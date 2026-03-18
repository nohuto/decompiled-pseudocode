/*
 * XREFs of fnHkINLPCBTACTIVATESTRUCT @ 0x1C014EE30
 * Callers:
 *     xxxCallCtfHook @ 0x1C0091874 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C009AFE0 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall fnHkINLPCBTACTIVATESTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  ULONG64 v6; // rcx
  _DWORD v8[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int128 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-18h]
  __int64 v12; // [rsp+68h] [rbp-10h]
  char v13; // [rsp+80h] [rbp+8h] BYREF
  int v14; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+90h] [rbp+18h] BYREF

  v15 = 0LL;
  v14 = 0;
  v8[1] = 0;
  v8[0] = a1;
  v9 = a2;
  *((_DWORD *)a3 + 1) = 0;
  v10 = *a3;
  v11 = a4;
  v12 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(41LL);
  v5 = KeUserModeCallback(41LL, v8, 48LL, &v15, &v14);
  EtwTraceEndCallback(41LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  if ( v5 < 0 || v14 != 24 )
    return 0LL;
  v6 = v15;
  if ( v15 + 8 < v15 || v15 + 8 > MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  return *(_QWORD *)v6;
}
