/*
 * XREFs of _xxxClientGetDDEHookData@12 @ 0x19445B
 * Callers:
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall xxxClientGetDDEHookData(int a1, int a2, void *a3)
{
  int v5; // esi
  int *v6; // ecx
  int v7; // edx
  int v8; // eax
  char *v9; // esi
  _BYTE v11[44]; // [esp+10h] [ebp-94h] BYREF
  int v12; // [esp+44h] [ebp-60h]
  int v13; // [esp+48h] [ebp-5Ch] BYREF
  unsigned int v14; // [esp+4Ch] [ebp-58h] BYREF
  char v15; // [esp+52h] [ebp-52h] BYREF
  char v16; // [esp+53h] [ebp-51h] BYREF
  _DWORD v17[14]; // [esp+54h] [ebp-50h] BYREF
  CPPEH_RECORD ms_exc; // [esp+8Ch] [ebp-18h]

  v14 = 0;
  v13 = 0;
  memset(v17, 0, 0x34u);
  v17[1] = a2;
  v17[0] = a1;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v15);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(71);
  v5 = KeUserModeCallback(71, v17, 52, &v14, &v13);
  EtwTraceEndCallback(71);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v15);
  if ( v5 < 0 || v13 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v6 = (int *)v14;
  if ( v14 + 4 < v14 || v14 + 4 > _MmUserProbeAddress )
    v6 = (int *)_MmUserProbeAddress;
  v7 = *v6;
  v12 = *v6;
  ms_exc.registration.TryLevel = -2;
  v8 = *(_DWORD *)(_gptiCurrent + 276);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 44) & 1) != 0 && *(void **)(v8 + 52) == a3 )
      return 0;
  }
  ms_exc.registration.TryLevel = 1;
  v9 = *(char **)(v14 + 8);
  if ( v9 + 44 < v9 || (unsigned int)(v9 + 44) > _MmUserProbeAddress )
    v9 = (char *)_MmUserProbeAddress;
  qmemcpy(v11, v9, sizeof(v11));
  qmemcpy(a3, v11, 0x2Cu);
  ms_exc.registration.TryLevel = -2;
  return v7;
}
