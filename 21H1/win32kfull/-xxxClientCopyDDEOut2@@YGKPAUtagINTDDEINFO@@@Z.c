/*
 * XREFs of ?xxxClientCopyDDEOut2@@YGKPAUtagINTDDEINFO@@@Z @ 0x18966E
 * Callers:
 *     _xxxClientCopyDDEOut1@4 @ 0x193E2A (_xxxClientCopyDDEOut1@4.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

unsigned int __thiscall xxxClientCopyDDEOut2(_DWORD *this)
{
  int v2; // esi
  unsigned int *v3; // ecx
  unsigned int result; // eax
  _DWORD v5[11]; // [esp+10h] [ebp-50h] BYREF
  unsigned int v6; // [esp+3Ch] [ebp-24h] BYREF
  int v7; // [esp+40h] [ebp-20h] BYREF
  char v8; // [esp+46h] [ebp-1Ah] BYREF
  char v9; // [esp+47h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v6 = 0;
  v7 = 0;
  qmemcpy(v5, this, 0x24u);
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(63);
  v2 = KeUserModeCallback(63, v5, 36, &v6, &v7);
  EtwTraceEndCallback(63);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  this[3] = v5[3];
  if ( v2 < 0 || v7 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v3 = (unsigned int *)v6;
  if ( v6 + 4 < v6 || v6 + 4 > _MmUserProbeAddress )
    v3 = (unsigned int *)_MmUserProbeAddress;
  result = *v3;
  v5[10] = *v3;
  ms_exc.registration.TryLevel = -2;
  return result;
}
