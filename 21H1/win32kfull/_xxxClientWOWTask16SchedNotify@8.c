/*
 * XREFs of _xxxClientWOWTask16SchedNotify@8 @ 0x194E4D
 * Callers:
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall xxxClientWOWTask16SchedNotify(void *this)
{
  int v1; // esi
  int *v2; // ecx
  int result; // eax
  _DWORD v4[4]; // [esp+10h] [ebp-34h] BYREF
  unsigned int v5; // [esp+20h] [ebp-24h] BYREF
  int v6; // [esp+24h] [ebp-20h] BYREF
  char v7; // [esp+2Ah] [ebp-1Ah] BYREF
  char v8; // [esp+2Bh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v5 = 0;
  v6 = 0;
  v4[0] = this;
  v4[1] = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v7);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v8);
  EtwTraceBeginCallback(91);
  v1 = KeUserModeCallback(91, v4, 8, &v5, &v6);
  EtwTraceEndCallback(91);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v8);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v7);
  if ( v1 < 0 || v6 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v2 = (int *)v5;
  if ( v5 + 4 < v5 || v5 + 4 > _MmUserProbeAddress )
    v2 = (int *)_MmUserProbeAddress;
  result = *v2;
  v4[3] = *v2;
  ms_exc.registration.TryLevel = -2;
  return result;
}
