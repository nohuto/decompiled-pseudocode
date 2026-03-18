/*
 * XREFs of _SfnINSIZECLIPBRD@32 @ 0x18FDC5
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
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall SfnINSIZECLIPBRD(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // esi
  int CurrentProcessWin32Process; // eax
  PKTHREAD v13; // eax
  int v14; // eax
  int *v15; // ecx
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // ebx
  _DWORD *v21; // edi
  int *v22; // ebx
  int v24; // [esp+10h] [ebp-88h]
  int v25; // [esp+14h] [ebp-84h]
  int v26; // [esp+18h] [ebp-80h]
  _DWORD v27[3]; // [esp+28h] [ebp-70h] BYREF
  int v28; // [esp+3Ch] [ebp-5Ch]
  unsigned int v29; // [esp+40h] [ebp-58h] BYREF
  int v30; // [esp+44h] [ebp-54h] BYREF
  int v31; // [esp+48h] [ebp-50h]
  int v32; // [esp+4Ch] [ebp-4Ch]
  int *v33; // [esp+50h] [ebp-48h]
  char v34; // [esp+56h] [ebp-42h] BYREF
  char v35; // [esp+57h] [ebp-41h] BYREF
  _DWORD v36[10]; // [esp+58h] [ebp-40h] BYREF
  CPPEH_RECORD ms_exc; // [esp+80h] [ebp-18h]

  v33 = a1;
  v8 = 0;
  v29 = 0;
  v30 = 0;
  v28 = 0;
  v27[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v31 = ThreadWin32Thread;
  if ( a1 )
  {
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
    v32 = v11;
  }
  else
  {
    v11 = 0;
    v32 = 0;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 364), 4u) )
    return v8;
  v36[0] = v11;
  v36[1] = a2;
  v36[2] = a3;
  v36[3] = *a4;
  v36[4] = a4[1];
  v36[5] = a4[2];
  v36[6] = a4[3];
  v36[7] = a5;
  v36[8] = a6;
  v13 = KeGetCurrentThread();
  v14 = W32GetThreadWin32Thread(v13);
  v27[0] = *(_DWORD *)(v14 + 228);
  *(_DWORD *)(v14 + 228) = v27;
  v15 = v33;
  v27[1] = v33;
  if ( v33 )
  {
    HMLockObject(v33);
    v15 = v33;
  }
  ms_exc.registration.TryLevel = 0;
  v16 = v31;
  v17 = *(_DWORD **)(v31 + 260);
  v24 = v17[10];
  v25 = v17[11];
  v26 = v17[12];
  v17[11] = v32;
  v18 = 0;
  if ( v15 )
    v18 = *v15;
  *(_DWORD *)(*(_DWORD *)(v16 + 260) + 40) = v18;
  if ( v15 )
    v19 = *(_DWORD *)(v15[5] + 140);
  else
    v19 = 0;
  *(_DWORD *)(*(_DWORD *)(v16 + 260) + 48) = v19;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v34);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(24);
  v20 = KeUserModeCallback(24, v36, 36, &v29, &v30);
  EtwTraceEndCallback(24);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v34);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v21 = (_DWORD *)(*(_DWORD *)(v31 + 260) + 40);
  *v21++ = v24;
  *v21 = v25;
  v21[1] = v26;
  ms_exc.registration.TryLevel = -2;
  if ( v20 >= 0 && v30 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v22 = (int *)v29;
    if ( v29 + 4 < v29 || v29 + 4 > _MmUserProbeAddress )
      v22 = (int *)_MmUserProbeAddress;
    v8 = *v22;
    v28 = v8;
    ms_exc.registration.TryLevel = -2;
    return v8;
  }
  return 0;
}
