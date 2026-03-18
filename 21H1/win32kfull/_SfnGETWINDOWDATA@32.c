/*
 * XREFs of _SfnGETWINDOWDATA@32 @ 0x18B312
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall SfnGETWINDOWDATA(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int *v12; // ecx
  int result; // eax
  _DWORD v14[8]; // [esp+10h] [ebp-40h] BYREF
  unsigned int v15; // [esp+30h] [ebp-20h] BYREF
  int v16; // [esp+34h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v15 = 0;
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  v9 = 0;
  if ( a1 )
    v9 = *a1;
  v14[0] = v9;
  v14[1] = a2;
  v14[2] = a3;
  v14[3] = a4;
  v14[4] = a5;
  if ( (*(_BYTE *)(a1[5] + 10) & 8) != 0 )
    v10 = *(_DWORD *)(_gpsi + 244);
  else
    v10 = *(_DWORD *)(_gpsi + 340);
  v14[5] = v10;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  EtwTraceBeginCallback(125);
  v11 = KeUserModeCallback(125, v14, 24, &v15, &v16);
  EtwTraceEndCallback(125);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  if ( v11 < 0 || v16 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v12 = (int *)v15;
  if ( v15 + 4 < v15 || v15 + 4 > _MmUserProbeAddress )
    v12 = (int *)_MmUserProbeAddress;
  result = *v12;
  v14[7] = *v12;
  ms_exc.registration.TryLevel = -2;
  return result;
}
