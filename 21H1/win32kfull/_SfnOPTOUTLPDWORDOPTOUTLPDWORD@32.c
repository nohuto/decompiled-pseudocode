/*
 * XREFs of _SfnOPTOUTLPDWORDOPTOUTLPDWORD@32 @ 0x190C25
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

int __stdcall SfnOPTOUTLPDWORDOPTOUTLPDWORD(int *a1, int a2, _DWORD *a3, _DWORD *a4, int a5, int a6, char a7, int a8)
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
  int v21; // esi
  _DWORD *v22; // ecx
  _DWORD *v23; // ecx
  _DWORD v25[4]; // [esp+10h] [ebp-6Ch] BYREF
  int v26; // [esp+20h] [ebp-5Ch]
  int v27; // [esp+24h] [ebp-58h]
  int v28; // [esp+28h] [ebp-54h]
  _DWORD v29[8]; // [esp+2Ch] [ebp-50h] BYREF
  int v30; // [esp+58h] [ebp-24h]
  int v31; // [esp+5Ch] [ebp-20h] BYREF
  unsigned int v32; // [esp+60h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v32 = 0;
  v31 = 0;
  v29[2] = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v30 = ThreadWin32Thread;
  v10 = a1;
  if ( a1 )
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v11 = 0;
  a1 = (int *)v11;
  v25[0] = v11;
  v25[1] = a2;
  v25[2] = a5;
  v25[3] = a6;
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v29[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v29;
  v29[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  ms_exc.registration.TryLevel = 0;
  v14 = *(_DWORD **)(ThreadWin32Thread + 260);
  v26 = v14[10];
  v27 = v14[11];
  v28 = v14[12];
  v14[11] = a1;
  v15 = 0;
  if ( v10 )
    v15 = *v10;
  v16 = v30;
  *(_DWORD *)(*(_DWORD *)(v30 + 260) + 40) = v15;
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
  EtwTraceBeginCallback(31);
  v18 = KeUserModeCallback(31, v25, 16, &v32, &v31);
  EtwTraceEndCallback(31);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v19 = (_DWORD *)(*(_DWORD *)(v16 + 260) + 40);
  *v19++ = v26;
  *v19 = v27;
  v19[1] = v28;
  ms_exc.registration.TryLevel = -2;
  if ( v18 < 0 || v31 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v20 = (int *)v32;
  if ( v32 + 4 < v32 || v32 + 4 > _MmUserProbeAddress )
    v20 = (int *)_MmUserProbeAddress;
  v21 = *v20;
  v29[7] = *v20;
  ms_exc.registration.TryLevel = -2;
  if ( (!a8 || (*(_BYTE *)(a8 + 44) & 5) == 0) && (a7 & 2) == 0 )
  {
    ms_exc.registration.TryLevel = 3;
    if ( a3 )
    {
      v22 = *(_DWORD **)(v32 + 8);
      if ( (unsigned int)v22 >= _MmUserProbeAddress )
        v22 = (_DWORD *)_MmUserProbeAddress;
      *a3 = *v22;
    }
    if ( a4 )
    {
      v23 = (_DWORD *)(*(_DWORD *)(v32 + 8) + 4);
      if ( (unsigned int)v23 >= _MmUserProbeAddress )
        v23 = (_DWORD *)_MmUserProbeAddress;
      *a4 = *v23;
    }
    ms_exc.registration.TryLevel = -2;
  }
  return v21;
}
