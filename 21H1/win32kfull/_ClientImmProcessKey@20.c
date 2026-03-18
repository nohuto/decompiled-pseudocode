/*
 * XREFs of _ClientImmProcessKey@20 @ 0xA2FC8
 * Callers:
 *     _xxxImmProcessKey@20 @ 0xA2CE0 (_xxxImmProcessKey@20.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall ClientImmProcessKey(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *v6; // ecx
  int result; // eax
  _DWORD v8[7]; // [esp+10h] [ebp-3Ch] BYREF
  unsigned int v9; // [esp+2Ch] [ebp-20h] BYREF
  int v10; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v9 = 0;
  v10 = 0;
  v8[0] = a1;
  v8[1] = a2;
  v8[2] = a3;
  v8[3] = a4;
  v8[4] = a5;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  EtwTraceBeginCallback(93);
  v5 = KeUserModeCallback(93, v8, 20, &v9, &v10);
  EtwTraceEndCallback(93);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  if ( v5 < 0 || v10 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v6 = (int *)v9;
  if ( v9 + 4 < v9 || v9 + 4 > _MmUserProbeAddress )
    v6 = (int *)_MmUserProbeAddress;
  result = *v6;
  v8[6] = *v6;
  ms_exc.registration.TryLevel = -2;
  return result;
}
