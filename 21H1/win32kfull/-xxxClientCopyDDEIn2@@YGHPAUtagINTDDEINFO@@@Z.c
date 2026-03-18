/*
 * XREFs of ?xxxClientCopyDDEIn2@@YGHPAUtagINTDDEINFO@@@Z @ 0x189584
 * Callers:
 *     _xxxClientCopyDDEIn1@12 @ 0x193B53 (_xxxClientCopyDDEIn1@12.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall xxxClientCopyDDEIn2(const void *this)
{
  int v1; // esi
  int *v2; // ecx
  int result; // eax
  _BYTE v4[36]; // [esp+10h] [ebp-50h] BYREF
  int v5; // [esp+38h] [ebp-28h]
  unsigned int v6; // [esp+3Ch] [ebp-24h] BYREF
  int v7; // [esp+40h] [ebp-20h] BYREF
  char v8; // [esp+46h] [ebp-1Ah] BYREF
  char v9; // [esp+47h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v6 = 0;
  v7 = 0;
  qmemcpy(v4, this, sizeof(v4));
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(61);
  v1 = KeUserModeCallback(61, v4, 36, &v6, &v7);
  EtwTraceEndCallback(61);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  if ( v1 < 0 || v7 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v2 = (int *)v6;
  if ( v6 + 4 < v6 || v6 + 4 > _MmUserProbeAddress )
    v2 = (int *)_MmUserProbeAddress;
  result = *v2;
  v5 = *v2;
  ms_exc.registration.TryLevel = -2;
  return result;
}
