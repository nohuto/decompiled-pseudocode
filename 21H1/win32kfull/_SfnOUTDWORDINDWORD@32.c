/*
 * XREFs of _SfnOUTDWORDINDWORD@32 @ 0x190EC7
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

int __stdcall SfnOUTDWORDINDWORD(int *a1, int a2, _DWORD *a3, int a4, int a5, int a6, char a7, int a8)
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
  int v21; // edx
  _DWORD *v22; // ecx
  _DWORD v24[2]; // [esp+10h] [ebp-74h] BYREF
  int v25; // [esp+18h] [ebp-6Ch]
  int v26; // [esp+1Ch] [ebp-68h]
  int v27; // [esp+20h] [ebp-64h]
  int v28; // [esp+24h] [ebp-60h]
  int v29; // [esp+28h] [ebp-5Ch]
  int v30; // [esp+2Ch] [ebp-58h]
  int v31; // [esp+30h] [ebp-54h]
  _DWORD v32[8]; // [esp+34h] [ebp-50h] BYREF
  int v33; // [esp+60h] [ebp-24h]
  int v34; // [esp+64h] [ebp-20h] BYREF
  unsigned int v35; // [esp+68h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+6Ch] [ebp-18h]

  v25 = 0;
  v35 = 0;
  v34 = 0;
  v32[2] = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v33 = ThreadWin32Thread;
  v10 = a1;
  if ( a1 )
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v11 = 0;
  a1 = (int *)v11;
  v25 = 0;
  v24[0] = v11;
  v24[1] = a2;
  v26 = a4;
  v27 = a5;
  v28 = a6;
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v32[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v32;
  v32[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  ms_exc.registration.TryLevel = 0;
  v14 = *(_DWORD **)(ThreadWin32Thread + 260);
  v29 = v14[10];
  v30 = v14[11];
  v31 = v14[12];
  v14[11] = a1;
  v15 = 0;
  if ( v10 )
    v15 = *v10;
  v16 = v33;
  *(_DWORD *)(*(_DWORD *)(v33 + 260) + 40) = v15;
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
  EtwTraceBeginCallback(33);
  v18 = KeUserModeCallback(33, v24, 24, &v35, &v34);
  EtwTraceEndCallback(33);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v19 = (_DWORD *)(*(_DWORD *)(v16 + 260) + 40);
  *v19++ = v29;
  *v19 = v30;
  v19[1] = v31;
  ms_exc.registration.TryLevel = -2;
  if ( v18 < 0 || v34 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v20 = (int *)v35;
  if ( v35 + 4 < v35 || v35 + 4 > _MmUserProbeAddress )
    v20 = (int *)_MmUserProbeAddress;
  v21 = *v20;
  v32[7] = *v20;
  ms_exc.registration.TryLevel = -2;
  if ( (!a8 || (*(_BYTE *)(a8 + 44) & 5) == 0) && (a7 & 2) == 0 )
  {
    ms_exc.registration.TryLevel = 3;
    v22 = *(_DWORD **)(v35 + 8);
    if ( (unsigned int)v22 >= _MmUserProbeAddress )
      v22 = (_DWORD *)_MmUserProbeAddress;
    *a3 = *v22;
    ms_exc.registration.TryLevel = -2;
  }
  return v21;
}
