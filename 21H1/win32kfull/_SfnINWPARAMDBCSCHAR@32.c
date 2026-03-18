/*
 * XREFs of _SfnINWPARAMDBCSCHAR@32 @ 0x19072C
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
 *     _RtlWCSMessageWParamCharToMB@8 @ 0xC5322 (_RtlWCSMessageWParamCharToMB@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall SfnINWPARAMDBCSCHAR(int *a1, unsigned int a2, int a3, int a4, int a5, int a6, char a7, int a8)
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
  int v18; // ebx
  _DWORD *v19; // edi
  int *v20; // ecx
  int result; // eax
  _DWORD v22[7]; // [esp+10h] [ebp-70h] BYREF
  int v23; // [esp+2Ch] [ebp-54h]
  int v24; // [esp+30h] [ebp-50h]
  int v25; // [esp+34h] [ebp-4Ch]
  _DWORD v26[7]; // [esp+38h] [ebp-48h] BYREF
  int v27; // [esp+5Ch] [ebp-24h]
  unsigned int v28; // [esp+60h] [ebp-20h] BYREF
  int v29; // [esp+64h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+68h] [ebp-18h]

  v28 = 0;
  v29 = 0;
  v26[2] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v27 = ThreadWin32Thread;
  v10 = a1;
  if ( a1 )
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v11 = 0;
  a1 = (int *)v11;
  v22[0] = v11;
  v22[1] = a2;
  v22[6] = a7 & 1;
  if ( (a7 & 1) != 0 )
    RtlWCSMessageWParamCharToMB(a2, (int)&a3);
  v22[2] = a3;
  v22[3] = a4;
  v22[4] = a5;
  v22[5] = a6;
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v26[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v26;
  v26[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  ms_exc.registration.TryLevel = 0;
  v14 = *(_DWORD **)(ThreadWin32Thread + 260);
  v23 = v14[10];
  v24 = v14[11];
  v25 = v14[12];
  v14[11] = a1;
  v15 = 0;
  if ( v10 )
    v15 = *v10;
  v16 = v27;
  *(_DWORD *)(*(_DWORD *)(v27 + 260) + 40) = v15;
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
  EtwTraceBeginCallback(95);
  v18 = KeUserModeCallback(95, v22, 28, &v28, &v29);
  EtwTraceEndCallback(95);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v19 = (_DWORD *)(*(_DWORD *)(v16 + 260) + 40);
  *v19++ = v23;
  *v19 = v24;
  v19[1] = v25;
  ms_exc.registration.TryLevel = -2;
  if ( v18 < 0 || v29 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v20 = (int *)v28;
  if ( v28 + 4 < v28 || v28 + 4 > _MmUserProbeAddress )
    v20 = (int *)_MmUserProbeAddress;
  result = *v20;
  v26[6] = *v20;
  ms_exc.registration.TryLevel = -2;
  return result;
}
