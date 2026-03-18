/*
 * XREFs of _SfnOUTLPRECT@32 @ 0x191150
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

int __stdcall SfnOUTLPRECT(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, char a7, int a8)
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
  int v21; // ecx
  int v22; // eax
  int *v23; // esi
  int *v24; // esi
  _DWORD *v25; // edi
  _DWORD v27[5]; // [esp+10h] [ebp-7Ch] BYREF
  int v28; // [esp+24h] [ebp-68h]
  int v29; // [esp+28h] [ebp-64h]
  int v30; // [esp+2Ch] [ebp-60h]
  int v31; // [esp+30h] [ebp-5Ch]
  int v32; // [esp+34h] [ebp-58h]
  int v33; // [esp+38h] [ebp-54h]
  int v34; // [esp+3Ch] [ebp-50h]
  _DWORD v35[8]; // [esp+40h] [ebp-4Ch] BYREF
  int v36; // [esp+68h] [ebp-24h]
  int v37; // [esp+6Ch] [ebp-20h] BYREF
  unsigned int v38; // [esp+70h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v38 = 0;
  v37 = 0;
  v35[2] = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v36 = ThreadWin32Thread;
  v10 = a1;
  if ( a1 )
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v11 = 0;
  a1 = (int *)v11;
  v27[0] = v11;
  v27[1] = a2;
  v27[2] = a3;
  v27[3] = a5;
  v27[4] = a6;
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v35[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v35;
  v35[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  ms_exc.registration.TryLevel = 0;
  v14 = *(_DWORD **)(ThreadWin32Thread + 260);
  v32 = v14[10];
  v33 = v14[11];
  v34 = v14[12];
  v14[11] = a1;
  v15 = 0;
  if ( v10 )
    v15 = *v10;
  v16 = v36;
  *(_DWORD *)(*(_DWORD *)(v36 + 260) + 40) = v15;
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
  EtwTraceBeginCallback(34);
  v18 = KeUserModeCallback(34, v27, 20, &v38, &v37);
  EtwTraceEndCallback(34);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v19 = (_DWORD *)(*(_DWORD *)(v16 + 260) + 40);
  *v19++ = v32;
  *v19 = v33;
  v19[1] = v34;
  ms_exc.registration.TryLevel = -2;
  if ( v18 >= 0 && v37 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v20 = (int *)v38;
    if ( v38 + 4 < v38 || v38 + 4 > _MmUserProbeAddress )
      v20 = (int *)_MmUserProbeAddress;
    v21 = *v20;
    v35[7] = v21;
    ms_exc.registration.TryLevel = -2;
    if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
      return v21;
    v22 = *(_DWORD *)(_gptiCurrent + 276);
    if ( !v22 || (*(_BYTE *)(v22 + 44) & 1) == 0 || *(_DWORD **)(v22 + 52) != a4 )
    {
      ms_exc.registration.TryLevel = 3;
      v23 = *(int **)(v38 + 8);
      if ( v23 + 4 < v23 || (unsigned int)(v23 + 4) > _MmUserProbeAddress )
        v23 = (int *)_MmUserProbeAddress;
      v28 = *v23;
      v24 = v23 + 1;
      v29 = *v24++;
      v30 = *v24;
      v31 = v24[1];
      v25 = a4;
      *a4 = v28;
      *++v25 = v29;
      *++v25 = v30;
      v25[1] = v31;
      ms_exc.registration.TryLevel = -2;
      return v21;
    }
  }
  return 0;
}
