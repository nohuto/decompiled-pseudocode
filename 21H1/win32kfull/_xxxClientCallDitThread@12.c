/*
 * XREFs of _xxxClientCallDitThread@12 @ 0x4762C
 * Callers:
 *     _ClientCallDitThread@12 @ 0x47614 (_ClientCallDitThread@12.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __fastcall xxxClientCallDitThread(int a1, const void *a2, void *a3)
{
  int v3; // esi
  int *v4; // ecx
  int v5; // edx
  int v6; // eax
  char *v7; // esi
  _BYTE v9[100]; // [esp+10h] [ebp-190h] BYREF
  int v10; // [esp+7Ch] [ebp-124h]
  int v11; // [esp+80h] [ebp-120h] BYREF
  unsigned int v12; // [esp+84h] [ebp-11Ch] BYREF
  char v13; // [esp+8Ah] [ebp-116h] BYREF
  char v14; // [esp+8Bh] [ebp-115h] BYREF
  _DWORD v15[2]; // [esp+8Ch] [ebp-114h] BYREF
  _BYTE v16[136]; // [esp+94h] [ebp-10Ch] BYREF
  _BYTE v17[100]; // [esp+11Ch] [ebp-84h] BYREF
  int v18; // [esp+180h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+188h] [ebp-18h]

  v12 = 0;
  v11 = 0;
  v15[1] = 0;
  v18 = 0;
  v15[0] = a1;
  qmemcpy(v16, a2, sizeof(v16));
  qmemcpy(v17, a3, sizeof(v17));
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v13);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  EtwTraceBeginCallback(56);
  v3 = KeUserModeCallback(56, v15, 248, &v12, &v11);
  EtwTraceEndCallback(56);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v13);
  if ( v3 < 0 || v11 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v4 = (int *)v12;
  if ( v12 + 4 < v12 || v12 + 4 > _MmUserProbeAddress )
    v4 = (int *)_MmUserProbeAddress;
  v5 = *v4;
  v10 = *v4;
  ms_exc.registration.TryLevel = -2;
  v6 = *(_DWORD *)(_gptiCurrent + 276);
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6 + 44) & 1) != 0 && *(void **)(v6 + 52) == a3 )
      return 0;
  }
  ms_exc.registration.TryLevel = 1;
  v7 = *(char **)(v12 + 8);
  if ( v7 + 100 < v7 || (unsigned int)(v7 + 100) > _MmUserProbeAddress )
    v7 = (char *)_MmUserProbeAddress;
  qmemcpy(v9, v7, sizeof(v9));
  qmemcpy(a3, v9, 0x64u);
  ms_exc.registration.TryLevel = -2;
  return v5;
}
