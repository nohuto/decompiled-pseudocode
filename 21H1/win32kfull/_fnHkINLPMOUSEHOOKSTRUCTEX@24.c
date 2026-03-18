/*
 * XREFs of _fnHkINLPMOUSEHOOKSTRUCTEX@24 @ 0x192E44
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

int __fastcall fnHkINLPMOUSEHOOKSTRUCTEX(int a1, int a2, const void *a3, int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // edi
  int v7; // esi
  int *v8; // ecx
  int v9; // esi
  _DWORD *v10; // ecx
  _DWORD v12[5]; // [esp+10h] [ebp-58h] BYREF
  _BYTE v13[24]; // [esp+24h] [ebp-44h] BYREF
  int v14; // [esp+44h] [ebp-24h]
  int v15; // [esp+48h] [ebp-20h] BYREF
  unsigned int v16; // [esp+4Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]

  v16 = 0;
  v15 = 0;
  v12[0] = a1;
  v12[1] = a2;
  qmemcpy(v13, a3, sizeof(v13));
  v12[2] = a4;
  v12[3] = a5;
  v6 = a6;
  v12[4] = *a6;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  EtwTraceBeginCallback(44);
  v7 = KeUserModeCallback(44, v12, 44, &v16, &v15);
  EtwTraceEndCallback(44);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  if ( v7 < 0 || v15 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v8 = (int *)v16;
  if ( v16 + 4 < v16 || v16 + 4 > _MmUserProbeAddress )
    v8 = (int *)_MmUserProbeAddress;
  v9 = *v8;
  v14 = *v8;
  ms_exc.registration.TryLevel = 1;
  v10 = *(_DWORD **)(v16 + 8);
  if ( v10 + 1 < v10 || (unsigned int)(v10 + 1) > _MmUserProbeAddress )
    v10 = (_DWORD *)_MmUserProbeAddress;
  *v6 ^= ((unsigned __int8)*v10 ^ (unsigned __int8)*v6) & 0x10;
  ms_exc.registration.TryLevel = -2;
  return v9;
}
