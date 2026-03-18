/*
 * XREFs of _fnHkINDWORD@24 @ 0x482EE
 * Callers:
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     _xxxCallCtfHook@16 @ 0x6D91E (_xxxCallCtfHook@16.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall fnHkINDWORD(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // edi
  int v7; // esi
  int *v8; // ecx
  int v9; // esi
  _DWORD *v10; // ecx
  _DWORD v12[9]; // [esp+10h] [ebp-48h] BYREF
  int v13; // [esp+34h] [ebp-24h] BYREF
  unsigned int v14; // [esp+38h] [ebp-20h] BYREF
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v14 = 0;
  v13 = 0;
  v12[0] = a1;
  v12[1] = a2;
  v12[5] = a3;
  v12[2] = a4;
  v12[3] = a5;
  v6 = a6;
  v12[4] = *a6;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  EtwTraceBeginCallback(40);
  v7 = KeUserModeCallback(40, v12, 24, &v14, &v13);
  EtwTraceEndCallback(40);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  if ( v7 < 0 || v13 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v8 = (int *)v14;
  if ( v14 + 4 < v14 || v14 + 4 > _MmUserProbeAddress )
    v8 = (int *)_MmUserProbeAddress;
  v9 = *v8;
  v12[8] = *v8;
  ms_exc.registration.TryLevel = 1;
  v10 = *(_DWORD **)(v14 + 8);
  if ( v10 + 1 < v10 || (unsigned int)(v10 + 1) > _MmUserProbeAddress )
    v10 = (_DWORD *)_MmUserProbeAddress;
  *v6 ^= ((unsigned __int8)*v10 ^ (unsigned __int8)*v6) & 0x10;
  ms_exc.registration.TryLevel = -2;
  return v9;
}
