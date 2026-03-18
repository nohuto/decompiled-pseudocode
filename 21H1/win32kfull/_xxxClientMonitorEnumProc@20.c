/*
 * XREFs of _xxxClientMonitorEnumProc@20 @ 0xA204E
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall xxxClientMonitorEnumProc(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // esi
  int *v6; // ecx
  int result; // eax
  unsigned int v8; // [esp+18h] [ebp-48h] BYREF
  int v9; // [esp+1Ch] [ebp-44h] BYREF
  char v10; // [esp+22h] [ebp-3Eh] BYREF
  char v11; // [esp+23h] [ebp-3Dh] BYREF
  _DWORD v12[9]; // [esp+24h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v8 = 0;
  v9 = 0;
  v12[0] = a1;
  v12[1] = a2;
  v12[2] = *a3;
  v12[3] = a3[1];
  v12[4] = a3[2];
  v12[5] = a3[3];
  v12[6] = a4;
  v12[7] = a5;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(87);
  v5 = KeUserModeCallback(87, v12, 32, &v8, &v9);
  EtwTraceEndCallback(87);
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
