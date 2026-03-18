/*
 * XREFs of _xxxClientCallLocalMouseHooks@12 @ 0x193975
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall xxxClientCallLocalMouseHooks(int a1, const void *a2, int a3)
{
  int v3; // esi
  int *v4; // ecx
  int result; // eax
  int v6; // [esp+10h] [ebp-4Ch] BYREF
  _BYTE v7[24]; // [esp+14h] [ebp-48h] BYREF
  int v8; // [esp+2Ch] [ebp-30h]
  int v9; // [esp+34h] [ebp-28h]
  unsigned int v10; // [esp+38h] [ebp-24h] BYREF
  int v11; // [esp+3Ch] [ebp-20h] BYREF
  char v12; // [esp+43h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v10 = 0;
  v11 = 0;
  v6 = a1;
  qmemcpy(v7, a2, sizeof(v7));
  v8 = a3;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  EtwTraceBeginCallback(120);
  v3 = KeUserModeCallback(120, &v6, 32, &v10, &v11);
  EtwTraceEndCallback(120);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12);
  if ( v3 < 0 || v11 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v4 = (int *)v10;
  if ( v10 + 4 < v10 || v10 + 4 > _MmUserProbeAddress )
    v4 = (int *)_MmUserProbeAddress;
  result = *v4;
  v9 = *v4;
  ms_exc.registration.TryLevel = -2;
  return result;
}
