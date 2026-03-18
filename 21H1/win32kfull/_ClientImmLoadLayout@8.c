/*
 * XREFs of _ClientImmLoadLayout@8 @ 0xEA14C
 * Callers:
 *     _xxxImmLoadLayout@4 @ 0xEA0CC (_xxxImmLoadLayout@4.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall ClientImmLoadLayout(int a1, void *a2)
{
  int v3; // esi
  int *v4; // ecx
  int v5; // edx
  int v6; // eax
  char *v7; // esi
  _BYTE v9[348]; // [esp+10h] [ebp-190h] BYREF
  int v10; // [esp+174h] [ebp-2Ch]
  int v11; // [esp+178h] [ebp-28h] BYREF
  int v12; // [esp+17Ch] [ebp-24h] BYREF
  unsigned int v13; // [esp+180h] [ebp-20h] BYREF
  char v14; // [esp+186h] [ebp-1Ah] BYREF
  char v15; // [esp+187h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+188h] [ebp-18h]

  v13 = 0;
  v12 = 0;
  v11 = a1;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v14);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(92);
  v3 = KeUserModeCallback(92, &v11, 4, &v13, &v12);
  EtwTraceEndCallback(92);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v14);
  if ( v3 >= 0 && v12 == 12 )
  {
    ms_exc.registration.TryLevel = 0;
    v4 = (int *)v13;
    if ( v13 + 4 < v13 || v13 + 4 > _MmUserProbeAddress )
      v4 = (int *)_MmUserProbeAddress;
    v5 = *v4;
    v10 = v5;
    ms_exc.registration.TryLevel = -2;
    if ( !v5 )
      return v5;
    v6 = *(_DWORD *)(_gptiCurrent + 276);
    if ( !v6 || (*(_BYTE *)(v6 + 44) & 1) == 0 || *(void **)(v6 + 52) != a2 )
    {
      ms_exc.registration.TryLevel = 1;
      v7 = *(char **)(v13 + 8);
      if ( v7 + 348 < v7 || (unsigned int)(v7 + 348) > _MmUserProbeAddress )
        v7 = (char *)_MmUserProbeAddress;
      qmemcpy(v9, v7, sizeof(v9));
      qmemcpy(a2, v9, 0x15Cu);
      ms_exc.registration.TryLevel = -2;
      return v5;
    }
  }
  return 0;
}
