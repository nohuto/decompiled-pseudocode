/*
 * XREFs of _fnHkINLPNOTIFYSTRUCT@24 @ 0x19309A
 * Callers:
 *     ?xxxCallTSFNotifyHook@@YGXPAUtagNOTIFY@@@Z @ 0x1556EF (-xxxCallTSFNotifyHook@@YGXPAUtagNOTIFY@@@Z.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall fnHkINLPNOTIFYSTRUCT(void *this, _DWORD *a2, int a3, int a4, _DWORD *a5)
{
  int v5; // esi
  int *v6; // ecx
  int result; // eax
  _DWORD v8[15]; // [esp+10h] [ebp-5Ch] BYREF
  unsigned int v9; // [esp+4Ch] [ebp-20h] BYREF
  int v10; // [esp+50h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v9 = 0;
  v10 = 0;
  memset(&v8[10], 0, 12);
  v8[0] = this;
  v8[1] = 0;
  v8[5] = a2[5];
  v8[6] = a2[8];
  v8[7] = a2[6];
  v8[8] = a2[7];
  v8[9] = a2[9];
  v8[2] = 0;
  v8[3] = a4;
  v8[4] = *a5;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a2 + 3));
  EtwTraceBeginCallback(127);
  v5 = KeUserModeCallback(127, v8, 52, &v9, &v10);
  EtwTraceEndCallback(127);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a2 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  if ( v5 < 0 || v10 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v6 = (int *)v9;
  if ( v9 + 4 < v9 || v9 + 4 > _MmUserProbeAddress )
    v6 = (int *)_MmUserProbeAddress;
  result = *v6;
  v8[14] = *v6;
  ms_exc.registration.TryLevel = -2;
  return result;
}
