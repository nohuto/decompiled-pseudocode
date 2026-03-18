/*
 * XREFs of _fnHkINLPDEBUGHOOKSTRUCT@20 @ 0x192C0B
 * Callers:
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ?CopyDebugHookLParam@@YGHIPAT_DEBUGLPARAM@@PAUtagDEBUGHOOKINFO@@@Z @ 0xF4402 (-CopyDebugHookLParam@@YGHIPAT_DEBUGLPARAM@@PAUtagDEBUGHOOKINFO@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned int a2, const void *a3, int a4, int a5)
{
  int v5; // esi
  int *v6; // ecx
  int result; // eax
  union _DEBUGLPARAM *v8; // [esp+0h] [ebp-84h]
  struct tagDEBUGHOOKINFO *v9; // [esp+4h] [ebp-80h]
  unsigned int v10; // [esp+18h] [ebp-6Ch] BYREF
  int v11; // [esp+1Ch] [ebp-68h] BYREF
  char v12; // [esp+22h] [ebp-62h] BYREF
  char v13; // [esp+23h] [ebp-61h] BYREF
  _DWORD v14[2]; // [esp+24h] [ebp-60h] BYREF
  _DWORD v15[5]; // [esp+2Ch] [ebp-58h] BYREF
  int v16[7]; // [esp+40h] [ebp-44h] BYREF
  int v17; // [esp+5Ch] [ebp-28h]
  int v18; // [esp+60h] [ebp-24h]
  int v19; // [esp+64h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+6Ch] [ebp-18h]

  v10 = 0;
  v11 = 0;
  memset(v16, 0, sizeof(v16));
  v17 = 0;
  v14[0] = a1;
  v14[1] = a2;
  qmemcpy(v15, a3, sizeof(v15));
  v18 = a4;
  v19 = a5;
  if ( a2 - 13 <= 1 )
    return 0;
  v17 = CopyDebugHookLParam(v16, a2, (unsigned int)a3, v8, v9);
  v15[2] = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(43);
  v5 = KeUserModeCallback(43, v14, 68, &v10, &v11);
  EtwTraceEndCallback(43);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12);
  if ( v5 < 0 || v11 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v6 = (int *)v10;
  if ( v10 + 4 < v10 || v10 + 4 > _MmUserProbeAddress )
    v6 = (int *)_MmUserProbeAddress;
  result = *v6;
  ms_exc.registration.TryLevel = -2;
  return result;
}
