/*
 * XREFs of _xxxClientCallDefWindowProc@4 @ 0x1934F1
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall xxxClientCallDefWindowProc(_DWORD *this)
{
  int v1; // esi
  int *v2; // ecx
  int result; // eax
  _DWORD v4[9]; // [esp+10h] [ebp-48h] BYREF
  unsigned int v5; // [esp+34h] [ebp-24h] BYREF
  int v6; // [esp+38h] [ebp-20h] BYREF
  char v7; // [esp+3Eh] [ebp-1Ah] BYREF
  char v8; // [esp+3Fh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v5 = 0;
  v6 = 0;
  v4[0] = *this;
  v4[1] = this[1];
  v4[2] = this[2];
  v4[3] = this[3];
  v4[4] = this[4];
  v4[5] = this[5];
  v4[6] = this[6];
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v7);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v8);
  EtwTraceBeginCallback(128);
  v1 = KeUserModeCallback(128, v4, 28, &v5, &v6);
  EtwTraceEndCallback(128);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v8);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v7);
  if ( v1 < 0 || v6 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v2 = (int *)v5;
  if ( v5 + 4 < v5 || v5 + 4 > _MmUserProbeAddress )
    v2 = (int *)_MmUserProbeAddress;
  result = *v2;
  v4[8] = *v2;
  ms_exc.registration.TryLevel = -2;
  return result;
}
