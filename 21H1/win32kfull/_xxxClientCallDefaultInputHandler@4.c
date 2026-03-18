/*
 * XREFs of _xxxClientCallDefaultInputHandler@4 @ 0x1935FC
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z @ 0x189294 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z.c)
 */

int __thiscall xxxClientCallDefaultInputHandler(_DWORD *this)
{
  int v2; // esi
  int *v3; // ecx
  int result; // eax
  _DWORD v5[9]; // [esp+10h] [ebp-48h] BYREF
  unsigned int v6; // [esp+34h] [ebp-24h] BYREF
  int v7; // [esp+38h] [ebp-20h] BYREF
  char v8; // [esp+3Eh] [ebp-1Ah] BYREF
  char v9; // [esp+3Fh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v6 = 0;
  v7 = 0;
  InputTraceLogging::Delivery::CallDefaultInputHandler((int)this);
  v5[0] = *this;
  v5[1] = this[1];
  v5[2] = this[2];
  v5[3] = this[3];
  v5[4] = this[4];
  v5[5] = this[5];
  v5[6] = this[6];
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(116);
  v2 = KeUserModeCallback(116, v5, 28, &v6, &v7);
  EtwTraceEndCallback(116);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  if ( v2 < 0 || v7 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v3 = (int *)v6;
  if ( v6 + 4 < v6 || v6 + 4 > _MmUserProbeAddress )
    v3 = (int *)_MmUserProbeAddress;
  result = *v3;
  v5[8] = *v3;
  ms_exc.registration.TryLevel = -2;
  return result;
}
