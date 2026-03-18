/*
 * XREFs of _fnHkINLPRECT@20 @ 0x1931BD
 * Callers:
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __fastcall fnHkINLPRECT(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // esi
  int *v6; // ecx
  int v7; // ecx
  int v8; // eax
  int *v9; // esi
  int *v10; // esi
  int v12; // [esp+10h] [ebp-6Ch]
  int v13; // [esp+14h] [ebp-68h]
  int v14; // [esp+18h] [ebp-64h]
  int v15; // [esp+1Ch] [ebp-60h]
  int v16; // [esp+30h] [ebp-4Ch] BYREF
  unsigned int v17; // [esp+34h] [ebp-48h] BYREF
  char v18; // [esp+3Ah] [ebp-42h] BYREF
  char v19; // [esp+3Bh] [ebp-41h] BYREF
  _DWORD v20[10]; // [esp+3Ch] [ebp-40h] BYREF
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v17 = 0;
  v16 = 0;
  v20[0] = a1;
  v20[1] = a2;
  v20[2] = *a3;
  v20[3] = a3[1];
  v20[4] = a3[2];
  v20[5] = a3[3];
  v20[6] = a4;
  v20[7] = a5;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  EtwTraceBeginCallback(48);
  v5 = KeUserModeCallback(48, v20, 32, &v17, &v16);
  EtwTraceEndCallback(48);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v18);
  if ( v5 < 0 || v16 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v6 = (int *)v17;
  if ( v17 + 4 < v17 || v17 + 4 > _MmUserProbeAddress )
    v6 = (int *)_MmUserProbeAddress;
  v7 = *v6;
  ms_exc.registration.TryLevel = -2;
  v8 = *(_DWORD *)(_gptiCurrent + 276);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 44) & 1) != 0 && *(_DWORD **)(v8 + 52) == a3 )
      return 0;
  }
  ms_exc.registration.TryLevel = 1;
  v9 = *(int **)(v17 + 8);
  if ( v9 + 4 < v9 || (unsigned int)(v9 + 4) > _MmUserProbeAddress )
    v9 = (int *)_MmUserProbeAddress;
  v12 = *v9;
  v10 = v9 + 1;
  v13 = *v10++;
  v14 = *v10;
  v15 = v10[1];
  *a3 = v12;
  a3[1] = v13;
  a3[2] = v14;
  a3[3] = v15;
  ms_exc.registration.TryLevel = -2;
  return v7;
}
