/*
 * XREFs of _xxxClientCallWinEventProc@12 @ 0x145FC
 * Callers:
 *     _xxxProcessNotifyWinEvent@4 @ 0x143A2 (_xxxProcessNotifyWinEvent@4.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall xxxClientCallWinEventProc(int a1, int *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // esi
  int *v5; // ecx
  int result; // eax
  _DWORD v7[10]; // [esp+10h] [ebp-4Ch] BYREF
  unsigned int v8; // [esp+38h] [ebp-24h] BYREF
  int v9; // [esp+3Ch] [ebp-20h] BYREF
  char v10; // [esp+43h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v8 = 0;
  v9 = 0;
  v7[0] = a1;
  v3 = 0;
  if ( a2 )
    v3 = *a2;
  v7[1] = v3;
  v7[3] = a3[5];
  v7[2] = a3[4];
  v7[4] = a3[6];
  v7[5] = a3[7];
  v7[6] = a3[8];
  v7[7] = a3[9];
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  EtwTraceBeginCallback(88);
  v4 = KeUserModeCallback(88, v7, 32, &v8, &v9);
  EtwTraceEndCallback(88);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v10);
  if ( v4 < 0 || v9 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v5 = (int *)v8;
  if ( v8 + 4 < v8 || v8 + 4 > _MmUserProbeAddress )
    v5 = (int *)_MmUserProbeAddress;
  result = *v5;
  v7[9] = *v5;
  ms_exc.registration.TryLevel = -2;
  return result;
}
