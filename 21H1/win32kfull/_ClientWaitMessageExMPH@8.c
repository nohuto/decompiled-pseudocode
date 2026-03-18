/*
 * XREFs of _ClientWaitMessageExMPH@8 @ 0x18A18E
 * Callers:
 *     _xxxWaitMessageEx@12 @ 0xA19D2 (_xxxWaitMessageEx@12.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall ClientWaitMessageExMPH(int a1, int a2)
{
  int v2; // esi
  int *v3; // ecx
  int result; // eax
  _DWORD v5[4]; // [esp+10h] [ebp-34h] BYREF
  unsigned int v6; // [esp+20h] [ebp-24h] BYREF
  int v7; // [esp+24h] [ebp-20h] BYREF
  char v8; // [esp+2Ah] [ebp-1Ah] BYREF
  char v9; // [esp+2Bh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v6 = 0;
  v7 = 0;
  v5[0] = a1;
  v5[1] = a2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(89);
  v2 = KeUserModeCallback(89, v5, 8, &v6, &v7);
  EtwTraceEndCallback(89);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  if ( v2 < 0 || v7 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v3 = (int *)v6;
  if ( v6 + 4 < v6 || v6 + 4 > _MmUserProbeAddress )
    v3 = (int *)_MmUserProbeAddress;
  result = *v3;
  v5[3] = *v3;
  ms_exc.registration.TryLevel = -2;
  return result;
}
