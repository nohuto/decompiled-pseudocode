/*
 * XREFs of _fnHkINLPMSLLHOOKSTRUCT@20 @ 0x192F9B
 * Callers:
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __fastcall fnHkINLPMSLLHOOKSTRUCT(int a1, int a2, const void *a3, int a4, int a5)
{
  int v5; // esi
  int *v6; // ecx
  int result; // eax
  unsigned int v8; // [esp+18h] [ebp-54h] BYREF
  int v9; // [esp+1Ch] [ebp-50h] BYREF
  char v10; // [esp+22h] [ebp-4Ah] BYREF
  char v11; // [esp+23h] [ebp-49h] BYREF
  _DWORD v12[4]; // [esp+24h] [ebp-48h] BYREF
  _BYTE v13[24]; // [esp+34h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v8 = 0;
  v9 = 0;
  v12[0] = a1;
  v12[1] = a2;
  qmemcpy(v13, a3, sizeof(v13));
  v12[2] = a4;
  v12[3] = a5;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(46);
  v5 = KeUserModeCallback(46, v12, 40, &v8, &v9);
  EtwTraceEndCallback(46);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v10);
  if ( v5 < 0 || v9 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v6 = (int *)v8;
  if ( v8 + 4 < v8 || v8 + 4 > _MmUserProbeAddress )
    v6 = (int *)_MmUserProbeAddress;
  result = *v6;
  ms_exc.registration.TryLevel = -2;
  return result;
}
