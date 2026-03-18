/*
 * XREFs of _xxxClientCharToWchar@8 @ 0x193A6A
 * Callers:
 *     _EditionClientCharToWchar@8 @ 0x15EA7C (_EditionClientCharToWchar@8.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall xxxClientCharToWchar(__int16 a1, __int16 a2)
{
  int v2; // esi
  int *v3; // ecx
  int result; // eax
  unsigned int v5; // [esp+18h] [ebp-28h] BYREF
  int v6; // [esp+1Ch] [ebp-24h] BYREF
  _WORD v7[3]; // [esp+20h] [ebp-20h] BYREF
  char v8; // [esp+26h] [ebp-1Ah] BYREF
  char v9; // [esp+27h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v5 = 0;
  v6 = 0;
  v7[0] = a1;
  v7[1] = a2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(82);
  v2 = KeUserModeCallback(82, v7, 4, &v5, &v6);
  EtwTraceEndCallback(82);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  if ( v2 < 0 || v6 != 12 )
    return 95;
  ms_exc.registration.TryLevel = 0;
  v3 = (int *)v5;
  if ( v5 + 4 < v5 || v5 + 4 > _MmUserProbeAddress )
    v3 = (int *)_MmUserProbeAddress;
  result = *v3;
  ms_exc.registration.TryLevel = -2;
  return result;
}
