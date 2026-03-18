/*
 * XREFs of _SfnINPAINTCLIPBRD@32 @ 0x18F764
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
 *     __WindowFromDC@4 @ 0x9A764 (__WindowFromDC@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall SfnINPAINTCLIPBRD(int *a1, int a2, int a3, const void *a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // esi
  int CurrentProcessWin32Process; // eax
  struct tagWND *v13; // eax
  PKTHREAD v14; // eax
  int v15; // eax
  int *v16; // ecx
  int v17; // edx
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // ecx
  int v21; // ebx
  _DWORD *v22; // edi
  int *v23; // ebx
  int v25; // [esp+10h] [ebp-BCh]
  int v26; // [esp+14h] [ebp-B8h]
  int v27; // [esp+18h] [ebp-B4h]
  _DWORD v28[3]; // [esp+28h] [ebp-A4h] BYREF
  int v29; // [esp+3Ch] [ebp-90h]
  const void *v30; // [esp+40h] [ebp-8Ch]
  unsigned int v31; // [esp+44h] [ebp-88h] BYREF
  int v32; // [esp+48h] [ebp-84h] BYREF
  int v33; // [esp+4Ch] [ebp-80h]
  int v34; // [esp+50h] [ebp-7Ch]
  int *v35; // [esp+54h] [ebp-78h]
  char v36; // [esp+5Ah] [ebp-72h] BYREF
  char v37; // [esp+5Bh] [ebp-71h] BYREF
  _DWORD v38[3]; // [esp+5Ch] [ebp-70h] BYREF
  _DWORD v39[19]; // [esp+68h] [ebp-64h] BYREF
  CPPEH_RECORD ms_exc; // [esp+B4h] [ebp-18h]

  v35 = a1;
  v30 = a4;
  v8 = 0;
  v31 = 0;
  v32 = 0;
  v29 = 0;
  v28[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v33 = ThreadWin32Thread;
  if ( a1 )
  {
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
    v34 = v11;
  }
  else
  {
    v11 = 0;
    v34 = 0;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 364), 4u) )
    return v8;
  v38[0] = v11;
  v38[1] = a2;
  v38[2] = a3;
  qmemcpy(v39, v30, 0x40u);
  v39[16] = a5;
  v39[17] = a6;
  v13 = _WindowFromDC();
  v39[0] = _GetDC(v13);
  v14 = KeGetCurrentThread();
  v15 = W32GetThreadWin32Thread(v14);
  v28[0] = *(_DWORD *)(v15 + 228);
  *(_DWORD *)(v15 + 228) = v28;
  v16 = v35;
  v28[1] = v35;
  if ( v35 )
  {
    HMLockObject(v35);
    v16 = v35;
  }
  ms_exc.registration.TryLevel = 0;
  v17 = v33;
  v18 = *(_DWORD **)(v33 + 260);
  v25 = v18[10];
  v26 = v18[11];
  v27 = v18[12];
  v18[11] = v34;
  v19 = 0;
  if ( v16 )
    v19 = *v16;
  *(_DWORD *)(*(_DWORD *)(v17 + 260) + 40) = v19;
  if ( v16 )
    v20 = *(_DWORD *)(v16[5] + 140);
  else
    v20 = 0;
  *(_DWORD *)(*(_DWORD *)(v17 + 260) + 48) = v20;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(23);
  v21 = KeUserModeCallback(23, v38, 84, &v31, &v32);
  EtwTraceEndCallback(23);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v22 = (_DWORD *)(*(_DWORD *)(v33 + 260) + 40);
  *v22++ = v25;
  *v22 = v26;
  v22[1] = v27;
  ms_exc.registration.TryLevel = -2;
  if ( v21 >= 0 && v32 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v23 = (int *)v31;
    if ( v31 + 4 < v31 || v31 + 4 > _MmUserProbeAddress )
      v23 = (int *)_MmUserProbeAddress;
    v8 = *v23;
    v29 = v8;
    ms_exc.registration.TryLevel = -2;
    _ReleaseDC(v39[0]);
    return v8;
  }
  return 0;
}
