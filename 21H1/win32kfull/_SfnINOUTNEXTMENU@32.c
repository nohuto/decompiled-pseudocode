/*
 * XREFs of _SfnINOUTNEXTMENU@32 @ 0x18F4A3
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

int __stdcall SfnINOUTNEXTMENU(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, char a7, int a8)
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
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // ebx
  int *v24; // esi
  int *v25; // esi
  _DWORD v27[8]; // [esp+10h] [ebp-84h] BYREF
  int v28; // [esp+30h] [ebp-64h]
  int v29; // [esp+34h] [ebp-60h]
  int v30; // [esp+38h] [ebp-5Ch]
  int v31; // [esp+3Ch] [ebp-58h]
  int v32; // [esp+40h] [ebp-54h]
  int v33; // [esp+44h] [ebp-50h]
  _DWORD v34[8]; // [esp+48h] [ebp-4Ch] BYREF
  int v35; // [esp+70h] [ebp-24h] BYREF
  int v36; // [esp+74h] [ebp-20h]
  unsigned int v37; // [esp+78h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+7Ch] [ebp-18h]

  v37 = 0;
  v35 = 0;
  v34[2] = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v36 = ThreadWin32Thread;
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
  v27[0] = v11;
  v27[1] = a2;
  v27[2] = a3;
  v27[6] = a5;
  v27[7] = a6;
  v27[3] = *a4;
  v27[4] = a4[1];
  v27[5] = a4[2];
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v34[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v34;
  v34[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  ms_exc.registration.TryLevel = 0;
  v14 = v36;
  v15 = *(_DWORD **)(v36 + 260);
  v31 = v15[10];
  v32 = v15[11];
  v33 = v15[12];
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
  EtwTraceBeginCallback(30);
  v18 = KeUserModeCallback(30, v27, 32, &v37, &v35);
  EtwTraceEndCallback(30);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v19 = (_DWORD *)(*(_DWORD *)(v36 + 260) + 40);
  *v19++ = v31;
  *v19 = v32;
  v19[1] = v33;
  ms_exc.registration.TryLevel = -2;
  if ( v18 >= 0 && v35 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v20 = (int *)v37;
    if ( v37 + 4 < v37 || v37 + 4 > _MmUserProbeAddress )
      v20 = (int *)_MmUserProbeAddress;
    v21 = *v20;
    v34[7] = v21;
    ms_exc.registration.TryLevel = -2;
    if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
      return v21;
    v22 = *(_DWORD *)(_gptiCurrent + 276);
    v23 = a4;
    if ( !v22 || (*(_BYTE *)(v22 + 44) & 1) == 0 || *(_DWORD **)(v22 + 52) != a4 )
    {
      ms_exc.registration.TryLevel = 3;
      v24 = *(int **)(v37 + 8);
      if ( v24 + 3 < v24 || (unsigned int)(v24 + 3) > _MmUserProbeAddress )
        v24 = (int *)_MmUserProbeAddress;
      v28 = *v24;
      v25 = v24 + 1;
      v29 = *v25;
      v30 = v25[1];
      *a4 = v28;
      v23[1] = v29;
      v23[2] = v30;
      ms_exc.registration.TryLevel = -2;
      return v21;
    }
  }
  return 0;
}
