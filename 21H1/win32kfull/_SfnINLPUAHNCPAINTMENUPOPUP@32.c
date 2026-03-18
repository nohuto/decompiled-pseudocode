/*
 * XREFs of _SfnINLPUAHNCPAINTMENUPOPUP@32 @ 0x18E3FD
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
 *     __ServerFixupMenuDC@16 @ 0xB932A (__ServerFixupMenuDC@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall SfnINLPUAHNCPAINTMENUPOPUP(int *a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  int v8; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *v11; // ebx
  _DWORD *v12; // edi
  HDC v13; // eax
  PKTHREAD v14; // eax
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // ebx
  _DWORD *v21; // edi
  int *v22; // ecx
  int v23; // esi
  _DWORD v25[8]; // [esp+10h] [ebp-7Ch] BYREF
  int v26; // [esp+30h] [ebp-5Ch]
  int v27; // [esp+34h] [ebp-58h]
  int v28; // [esp+38h] [ebp-54h]
  _DWORD v29[7]; // [esp+3Ch] [ebp-50h] BYREF
  HDC v30; // [esp+60h] [ebp-2Ch]
  int v31; // [esp+64h] [ebp-28h]
  unsigned int v32; // [esp+68h] [ebp-24h] BYREF
  int v33; // [esp+6Ch] [ebp-20h] BYREF
  int v34; // [esp+70h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v8 = 0;
  v32 = 0;
  v33 = 0;
  v29[2] = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v34 = ThreadWin32Thread;
  v11 = a1;
  if ( a1 )
    v8 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  a1 = (int *)v8;
  v31 = 0;
  v12 = (_DWORD *)a4;
  v13 = _ServerFixupMenuDC(*(HDC *)(a4 + 4), *(_DWORD *)a4, 0, 0);
  v30 = v13;
  if ( v13 )
  {
    v31 = v12[1];
    v12[1] = v13;
  }
  v25[0] = v8;
  v25[1] = a2 & 0x1FFFF;
  v25[2] = a3;
  v25[3] = *v12;
  v25[4] = v12[1];
  v25[5] = v12[2];
  v25[6] = a5;
  v25[7] = a6;
  v14 = KeGetCurrentThread();
  v15 = W32GetThreadWin32Thread(v14);
  v29[0] = *(_DWORD *)(v15 + 228);
  *(_DWORD *)(v15 + 228) = v29;
  v29[1] = v11;
  if ( v11 )
    HMLockObject(v11);
  ms_exc.registration.TryLevel = 0;
  v16 = v34;
  v17 = *(_DWORD **)(v34 + 260);
  v26 = v17[10];
  v27 = v17[11];
  v28 = v17[12];
  v17[11] = a1;
  if ( v11 )
    v18 = *v11;
  else
    v18 = 0;
  *(_DWORD *)(*(_DWORD *)(v16 + 260) + 40) = v18;
  if ( v11 )
    v19 = *(_DWORD *)(v11[5] + 140);
  else
    v19 = 0;
  *(_DWORD *)(*(_DWORD *)(v16 + 260) + 48) = v19;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  EtwTraceBeginCallback(110);
  v20 = KeUserModeCallback(110, v25, 32, &v32, &v33);
  EtwTraceEndCallback(110);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v21 = (_DWORD *)(*(_DWORD *)(v34 + 260) + 40);
  *v21++ = v26;
  *v21 = v27;
  v21[1] = v28;
  ms_exc.registration.TryLevel = -2;
  if ( v20 < 0 || v33 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v22 = (int *)v32;
  if ( v32 + 4 < v32 || v32 + 4 > _MmUserProbeAddress )
    v22 = (int *)_MmUserProbeAddress;
  v23 = *v22;
  v29[6] = *v22;
  ms_exc.registration.TryLevel = -2;
  if ( v30 )
  {
    _ReleaseDC(v30);
    if ( (!a8 || (*(_BYTE *)(a8 + 44) & 5) == 0) && (a7 & 2) == 0 )
      *(_DWORD *)(a4 + 4) = v31;
  }
  return v23;
}
