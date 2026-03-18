/*
 * XREFs of _xxxClientCopyImage@20 @ 0x16E68
 * Callers:
 *     _xxxCreateWindowSmIcon@12 @ 0x13138 (_xxxCreateWindowSmIcon@12.c)
 *     _xxxCreateClassSmIcon@4 @ 0x137DE (_xxxCreateClassSmIcon@4.c)
 *     ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146 (-xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall xxxClientCopyImage(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  int *v7; // ecx
  ULONG v8; // edx
  int result; // eax
  _DWORD v10[7]; // [esp+10h] [ebp-3Ch] BYREF
  unsigned int v11; // [esp+2Ch] [ebp-20h] BYREF
  int v12; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v11 = 0;
  v12 = 0;
  v10[0] = a1;
  v10[1] = a2;
  v10[2] = a3;
  v10[3] = a4;
  v10[4] = a5;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  EtwTraceBeginCallback(64);
  v6 = KeUserModeCallback(64, v10, 20, &v11, &v12);
  EtwTraceEndCallback(64);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  if ( v6 < 0 || v12 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v7 = (int *)v11;
  v8 = v11 + 4;
  if ( v11 + 4 < v11 || v8 > _MmUserProbeAddress )
    v7 = (int *)_MmUserProbeAddress;
  result = *v7;
  v10[6] = result;
  ms_exc.registration.TryLevel = -2;
  if ( result )
  {
    if ( a2 )
    {
      LOBYTE(v8) = 3;
      return HMValidateHandleNoRip(result, v8);
    }
  }
  return result;
}
