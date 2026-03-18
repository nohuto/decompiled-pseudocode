/*
 * XREFs of _xxxClientAllocWindowClassExtraBytes@4 @ 0x48166
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

volatile void *__thiscall xxxClientAllocWindowClassExtraBytes(void *this)
{
  int v2; // esi
  volatile void **v3; // ecx
  volatile void *v4; // esi
  void *v6; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v7; // [esp+20h] [ebp-24h] BYREF
  int v8; // [esp+24h] [ebp-20h] BYREF
  char v9; // [esp+2Ah] [ebp-1Ah] BYREF
  char v10; // [esp+2Bh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v7 = 0;
  v8 = 0;
  v6 = this;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v9);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  EtwTraceBeginCallback(123);
  v2 = KeUserModeCallback(123, &v6, 4, &v7, &v8);
  EtwTraceEndCallback(123);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v9);
  if ( v2 < 0 || v8 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v3 = (volatile void **)v7;
  if ( v7 + 4 < v7 || v7 + 4 > _MmUserProbeAddress )
    v3 = (volatile void **)_MmUserProbeAddress;
  v4 = *v3;
  ms_exc.registration.TryLevel = 1;
  ProbeForRead(v4, (SIZE_T)this, 1u);
  ms_exc.registration.TryLevel = -2;
  return v4;
}
