/*
 * XREFs of _xxxClientCallDelegateThread@12 @ 0x19370C
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall xxxClientCallDelegateThread(int a1, _DWORD *a2, int a3)
{
  int v3; // esi
  int *v4; // ecx
  int result; // eax
  _DWORD v6[11]; // [esp+10h] [ebp-50h] BYREF
  unsigned int v7; // [esp+3Ch] [ebp-24h] BYREF
  int v8; // [esp+40h] [ebp-20h] BYREF
  char v9; // [esp+47h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v7 = 0;
  v8 = 0;
  v6[0] = a1;
  v6[1] = a3;
  v6[2] = *a2;
  v6[3] = a2[1];
  v6[4] = a2[2];
  v6[5] = a2[3];
  v6[6] = a2[4];
  v6[7] = a2[5];
  v6[8] = a2[6];
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v9);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  EtwTraceBeginCallback(50);
  v3 = KeUserModeCallback(50, v6, 36, &v7, &v8);
  EtwTraceEndCallback(50);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v9);
  if ( v3 < 0 || v8 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v4 = (int *)v7;
  if ( v7 + 4 < v7 || v7 + 4 > _MmUserProbeAddress )
    v4 = (int *)_MmUserProbeAddress;
  result = *v4;
  v6[10] = *v4;
  ms_exc.registration.TryLevel = -2;
  return result;
}
