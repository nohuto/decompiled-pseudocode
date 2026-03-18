/*
 * XREFs of _SfnGESTURE@32 @ 0x18A8A8
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
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall SfnGESTURE(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // edi
  int *v12; // ebx
  PKTHREAD v13; // eax
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  int v19; // ebx
  _DWORD *v20; // edi
  int *v21; // ecx
  int result; // eax
  _DWORD v23[6]; // [esp+10h] [ebp-6Ch] BYREF
  int v24; // [esp+28h] [ebp-54h]
  int v25; // [esp+2Ch] [ebp-50h]
  int v26; // [esp+30h] [ebp-4Ch]
  _DWORD v27[7]; // [esp+34h] [ebp-48h] BYREF
  int v28; // [esp+58h] [ebp-24h]
  unsigned int v29; // [esp+5Ch] [ebp-20h] BYREF
  int v30; // [esp+60h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v8 = 0;
  v29 = 0;
  v30 = 0;
  v27[2] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v11 = ThreadWin32Thread;
  v28 = ThreadWin32Thread;
  v12 = a1;
  if ( a1 )
    v8 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  a1 = (int *)v8;
  if ( !HMValidateHandle(a4, 21) )
    return 0;
  v23[0] = v8;
  v23[1] = a2;
  v23[2] = a3;
  v23[3] = a4;
  v23[4] = a5;
  v23[5] = a6;
  v13 = KeGetCurrentThread();
  v14 = W32GetThreadWin32Thread(v13);
  v27[0] = *(_DWORD *)(v14 + 228);
  *(_DWORD *)(v14 + 228) = v27;
  v27[1] = v12;
  if ( v12 )
    HMLockObject(v12);
  ms_exc.registration.TryLevel = 0;
  v15 = *(_DWORD **)(v11 + 260);
  v24 = v15[10];
  v25 = v15[11];
  v26 = v15[12];
  v15[11] = a1;
  v16 = 0;
  if ( v12 )
    v16 = *v12;
  v17 = v28;
  *(_DWORD *)(*(_DWORD *)(v28 + 260) + 40) = v16;
  if ( v12 )
    v18 = *(_DWORD *)(v12[5] + 140);
  else
    v18 = 0;
  *(_DWORD *)(*(_DWORD *)(v17 + 260) + 48) = v18;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a1 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a4 + 3));
  EtwTraceBeginCallback(113);
  v19 = KeUserModeCallback(113, v23, 24, &v29, &v30);
  EtwTraceEndCallback(113);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a4 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a1 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v20 = (_DWORD *)(*(_DWORD *)(v17 + 260) + 40);
  *v20++ = v24;
  *v20 = v25;
  v20[1] = v26;
  ms_exc.registration.TryLevel = -2;
  if ( v19 < 0 || v30 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v21 = (int *)v29;
  if ( v29 + 4 < v29 || v29 + 4 > _MmUserProbeAddress )
    v21 = (int *)_MmUserProbeAddress;
  result = *v21;
  v27[6] = *v21;
  ms_exc.registration.TryLevel = -2;
  return result;
}
