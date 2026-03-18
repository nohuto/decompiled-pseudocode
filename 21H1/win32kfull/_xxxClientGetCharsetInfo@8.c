/*
 * XREFs of _xxxClientGetCharsetInfo@8 @ 0xE8F48
 * Callers:
 *     _EditionInitSystemCharsetInfoForLayout@8 @ 0xE8EB0 (_EditionInitSystemCharsetInfoForLayout@8.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __fastcall xxxClientGetCharsetInfo(int a1, void *a2)
{
  int v3; // esi
  int *v4; // ecx
  int v5; // edx
  int v6; // eax
  char *v7; // esi
  _BYTE v9[32]; // [esp+10h] [ebp-78h] BYREF
  int v10; // [esp+38h] [ebp-50h]
  int v11; // [esp+3Ch] [ebp-4Ch] BYREF
  unsigned int v12; // [esp+40h] [ebp-48h] BYREF
  char v13; // [esp+46h] [ebp-42h] BYREF
  char v14; // [esp+47h] [ebp-41h] BYREF
  _DWORD v15[10]; // [esp+48h] [ebp-40h] BYREF
  CPPEH_RECORD ms_exc; // [esp+70h] [ebp-18h]

  v12 = 0;
  v11 = 0;
  memset(&v15[1], 0, 32);
  v15[0] = a1;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v13);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  EtwTraceBeginCallback(69);
  v3 = KeUserModeCallback(69, v15, 36, &v12, &v11);
  EtwTraceEndCallback(69);
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
    if ( (*(_BYTE *)(v6 + 44) & 1) != 0 && *(void **)(v6 + 52) == a2 )
      return 0;
  }
  ms_exc.registration.TryLevel = 1;
  v7 = *(char **)(v12 + 8);
  if ( v7 + 32 < v7 || (unsigned int)(v7 + 32) > _MmUserProbeAddress )
    v7 = (char *)_MmUserProbeAddress;
  qmemcpy(v9, v7, sizeof(v9));
  qmemcpy(a2, v9, 0x20u);
  ms_exc.registration.TryLevel = -2;
  return v5;
}
