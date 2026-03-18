/*
 * XREFs of _SfnINLPDELETEITEMSTRUCT@32 @ 0x18CD4E
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

int __stdcall SfnINLPDELETEITEMSTRUCT(int *a1, int a2, int a3, const void *a4, int a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ecx
  int *v10; // ebx
  int v11; // eax
  PKTHREAD v12; // eax
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // ebx
  _DWORD *v19; // edi
  int *v20; // ecx
  int result; // eax
  _DWORD v22[3]; // [esp+10h] [ebp-7Ch] BYREF
  _BYTE v23[20]; // [esp+1Ch] [ebp-70h] BYREF
  int v24; // [esp+30h] [ebp-5Ch]
  int v25; // [esp+34h] [ebp-58h]
  int v26; // [esp+38h] [ebp-54h]
  int v27; // [esp+3Ch] [ebp-50h]
  int v28; // [esp+40h] [ebp-4Ch]
  _DWORD v29[7]; // [esp+44h] [ebp-48h] BYREF
  unsigned int v30; // [esp+68h] [ebp-24h] BYREF
  int v31; // [esp+6Ch] [ebp-20h] BYREF
  int v32; // [esp+70h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v30 = 0;
  v31 = 0;
  v29[2] = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v32 = ThreadWin32Thread;
  v10 = a1;
  if ( a1 )
  {
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
    a1 = (int *)v11;
  }
  else
  {
    v11 = 0;
    a1 = 0;
  }
  v22[0] = v11;
  v22[1] = a2;
  v22[2] = a3;
  qmemcpy(v23, a4, sizeof(v23));
  v24 = a5;
  v25 = a6;
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v29[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v29;
  v29[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  ms_exc.registration.TryLevel = 0;
  v14 = v32;
  v15 = *(_DWORD **)(v32 + 260);
  v26 = v15[10];
  v27 = v15[11];
  v28 = v15[12];
  v15[11] = a1;
  if ( v10 )
    v16 = *v10;
  else
    v16 = 0;
  *(_DWORD *)(*(_DWORD *)(v14 + 260) + 40) = v16;
  if ( v10 )
    v17 = *(_DWORD *)(v10[5] + 140);
  else
    v17 = 0;
  *(_DWORD *)(*(_DWORD *)(v14 + 260) + 48) = v17;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  EtwTraceBeginCallback(11);
  v18 = KeUserModeCallback(11, v22, 40, &v30, &v31);
  EtwTraceEndCallback(11);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v19 = (_DWORD *)(*(_DWORD *)(v32 + 260) + 40);
  *v19++ = v26;
  *v19 = v27;
  v19[1] = v28;
  ms_exc.registration.TryLevel = -2;
  if ( v18 < 0 || v31 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v20 = (int *)v30;
  if ( v30 + 4 < v30 || v30 + 4 > _MmUserProbeAddress )
    v20 = (int *)_MmUserProbeAddress;
  result = *v20;
  v29[6] = *v20;
  ms_exc.registration.TryLevel = -2;
  return result;
}
