/*
 * XREFs of _SfnINOUTDRAG@32 @ 0x18E682
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

int __stdcall SfnINOUTDRAG(int *a1, int a2, int a3, void *a4, int a5, int a6, char a7, int a8)
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
  int v21; // edx
  int v22; // eax
  char *v23; // esi
  _BYTE v25[28]; // [esp+10h] [ebp-A4h] BYREF
  _DWORD v26[5]; // [esp+2Ch] [ebp-88h] BYREF
  _BYTE v27[28]; // [esp+40h] [ebp-74h] BYREF
  int v28; // [esp+5Ch] [ebp-58h]
  int v29; // [esp+60h] [ebp-54h]
  int v30; // [esp+64h] [ebp-50h]
  int v31; // [esp+78h] [ebp-3Ch]
  _DWORD v32[3]; // [esp+7Ch] [ebp-38h] BYREF
  int v33; // [esp+90h] [ebp-24h] BYREF
  int v34; // [esp+94h] [ebp-20h]
  unsigned int v35; // [esp+98h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+9Ch] [ebp-18h]

  v35 = 0;
  v33 = 0;
  v32[2] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v34 = ThreadWin32Thread;
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
  v26[0] = v11;
  v26[1] = a2;
  v26[2] = a3;
  qmemcpy(v27, a4, sizeof(v27));
  v26[3] = a5;
  v26[4] = a6;
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v32[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v32;
  v32[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  ms_exc.registration.TryLevel = 0;
  v14 = v34;
  v15 = *(_DWORD **)(v34 + 260);
  v28 = v15[10];
  v29 = v15[11];
  v30 = v15[12];
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
  EtwTraceBeginCallback(5);
  v18 = KeUserModeCallback(5, v26, 48, &v35, &v33);
  EtwTraceEndCallback(5);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v19 = (_DWORD *)(*(_DWORD *)(v34 + 260) + 40);
  *v19++ = v28;
  *v19 = v29;
  v19[1] = v30;
  ms_exc.registration.TryLevel = -2;
  if ( v18 >= 0 && v33 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v20 = (int *)v35;
    if ( v35 + 4 < v35 || v35 + 4 > _MmUserProbeAddress )
      v20 = (int *)_MmUserProbeAddress;
    v21 = *v20;
    v31 = *v20;
    ms_exc.registration.TryLevel = -2;
    if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
      return v21;
    v22 = *(_DWORD *)(_gptiCurrent + 276);
    if ( !v22 || (*(_BYTE *)(v22 + 44) & 1) == 0 || *(void **)(v22 + 52) != a4 )
    {
      ms_exc.registration.TryLevel = 3;
      v23 = *(char **)(v35 + 8);
      if ( v23 + 28 < v23 || (unsigned int)(v23 + 28) > _MmUserProbeAddress )
        v23 = (char *)_MmUserProbeAddress;
      qmemcpy(v25, v23, sizeof(v25));
      qmemcpy(a4, v25, 0x1Cu);
      ms_exc.registration.TryLevel = -2;
      return v21;
    }
  }
  return 0;
}
