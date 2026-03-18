/*
 * XREFs of _xxxClientRimDevCallback@40 @ 0x194C4E
 * Callers:
 *     _RIMDevChangeDoUsermodeCallback@4 @ 0x14024B (_RIMDevChangeDoUsermodeCallback@4.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall xxxClientRimDevCallback(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // esi
  int *v11; // ecx
  int result; // eax
  _DWORD v13[6]; // [esp+10h] [ebp-4Ch] BYREF
  __int16 v14; // [esp+28h] [ebp-34h]
  __int16 v15; // [esp+2Ah] [ebp-32h]
  int v16; // [esp+2Ch] [ebp-30h]
  int v17; // [esp+30h] [ebp-2Ch]
  int v18; // [esp+38h] [ebp-24h]
  unsigned int v19; // [esp+3Ch] [ebp-20h] BYREF
  int v20; // [esp+40h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v19 = 0;
  v20 = 0;
  v13[0] = a5;
  v13[1] = a6;
  v13[2] = a3;
  v13[3] = a1;
  v13[4] = a2;
  v13[5] = a4;
  v14 = a7;
  v15 = a8;
  v16 = a9;
  v17 = a10;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a8 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a7 + 3));
  EtwTraceBeginCallback(118);
  v10 = KeUserModeCallback(118, v13, 36, &v19, &v20);
  EtwTraceEndCallback(118);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a7 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a8 + 3));
  if ( v10 < 0 || v20 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v11 = (int *)v19;
  if ( v19 + 4 < v19 || v19 + 4 > _MmUserProbeAddress )
    v11 = (int *)_MmUserProbeAddress;
  result = *v11;
  v18 = *v11;
  ms_exc.registration.TryLevel = -2;
  return result;
}
