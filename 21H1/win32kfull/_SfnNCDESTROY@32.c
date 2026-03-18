/*
 * XREFs of _SfnNCDESTROY@32 @ 0x9A370
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
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall SfnNCDESTROY(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // esi
  int *v10; // ebx
  int v11; // eax
  PKTHREAD v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // ecx
  _DWORD *v18; // edi
  int *v19; // ecx
  int result; // eax
  _DWORD v21[6]; // [esp+10h] [ebp-70h] BYREF
  int v22; // [esp+28h] [ebp-58h]
  int v23; // [esp+2Ch] [ebp-54h]
  int v24; // [esp+30h] [ebp-50h]
  _DWORD v25[7]; // [esp+34h] [ebp-4Ch] BYREF
  int v26; // [esp+58h] [ebp-28h]
  unsigned int v27; // [esp+5Ch] [ebp-24h] BYREF
  int v28; // [esp+60h] [ebp-20h] BYREF
  CPPEH_RECORD ms_exc; // [esp+68h] [ebp-18h]

  v27 = 0;
  v28 = 0;
  v25[2] = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v26 = ThreadWin32Thread;
  v10 = a1;
  if ( a1 )
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v11 = 0;
  a1 = (int *)v11;
  v21[0] = v11;
  v21[1] = a2;
  v21[2] = a3;
  v21[3] = a4;
  v21[4] = a5;
  v21[5] = a6;
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v25[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v25;
  v25[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  ms_exc.registration.TryLevel = 0;
  v14 = *(_DWORD **)(ThreadWin32Thread + 260);
  v22 = v14[10];
  v23 = v14[11];
  v24 = v14[12];
  v14[11] = a1;
  v15 = 0;
  if ( v10 )
    v15 = *v10;
  v16 = v26;
  *(_DWORD *)(*(_DWORD *)(v26 + 260) + 40) = v15;
  if ( v10 )
    v17 = *(_DWORD *)(v10[5] + 140);
  else
    v17 = 0;
  *(_DWORD *)(*(_DWORD *)(v16 + 260) + 48) = v17;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  EtwTraceBeginCallback(3);
  a3 = KeUserModeCallback(3, v21, 24, &v27, &v28);
  EtwTraceEndCallback(3);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  if ( v10 )
    *(_DWORD *)(v10[5] + 140) = 0;
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v18 = (_DWORD *)(*(_DWORD *)(v16 + 260) + 40);
  *v18++ = v22;
  *v18 = v23;
  v18[1] = v24;
  ms_exc.registration.TryLevel = -2;
  if ( a3 < 0 || v28 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v19 = (int *)v27;
  if ( v27 + 4 < v27 || v27 + 4 > _MmUserProbeAddress )
    v19 = (int *)_MmUserProbeAddress;
  result = *v19;
  v25[6] = *v19;
  ms_exc.registration.TryLevel = -2;
  return result;
}
