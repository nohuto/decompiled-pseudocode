/*
 * XREFs of _ClientGetMessageMPH@24 @ 0x189F5B
 * Callers:
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall ClientGetMessageMPH(void *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // esi
  int *v8; // ecx
  int v9; // edx
  int v10; // eax
  char *v11; // esi
  _BYTE v13[28]; // [esp+10h] [ebp-5Ch] BYREF
  _DWORD v14[8]; // [esp+2Ch] [ebp-40h] BYREF
  int v15; // [esp+4Ch] [ebp-20h] BYREF
  unsigned int v16; // [esp+50h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v16 = 0;
  v15 = 0;
  v14[0] = a2;
  v14[1] = a3;
  v14[2] = a4;
  v14[3] = a5;
  v14[4] = a6;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  EtwTraceBeginCallback(73);
  v7 = KeUserModeCallback(73, v14, 20, &v16, &v15);
  EtwTraceEndCallback(73);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  if ( v7 < 0 || v15 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v8 = (int *)v16;
  if ( v16 + 4 < v16 || v16 + 4 > _MmUserProbeAddress )
    v8 = (int *)_MmUserProbeAddress;
  v9 = *v8;
  v14[7] = *v8;
  ms_exc.registration.TryLevel = -2;
  v10 = *(_DWORD *)(_gptiCurrent + 276);
  if ( v10 )
  {
    if ( (*(_BYTE *)(v10 + 44) & 1) != 0 && *(void **)(v10 + 52) == a1 )
      return 0;
  }
  ms_exc.registration.TryLevel = 1;
  v11 = *(char **)(v16 + 8);
  if ( v11 + 28 < v11 || (unsigned int)(v11 + 28) > _MmUserProbeAddress )
    v11 = (char *)_MmUserProbeAddress;
  qmemcpy(v13, v11, sizeof(v13));
  qmemcpy(a1, v13, 0x1Cu);
  ms_exc.registration.TryLevel = -2;
  return v9;
}
