/*
 * XREFs of _SfnINOUTLPRECT@32 @ 0xA4082
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

int __stdcall SfnINOUTLPRECT(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ecx
  int v10; // eax
  PKTHREAD v11; // eax
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ebx
  _DWORD *v18; // edi
  int *v19; // ecx
  int v20; // edx
  int v21; // eax
  _DWORD *v22; // ebx
  int *v23; // esi
  int *v24; // esi
  int v26; // [esp+10h] [ebp-9Ch]
  int v27; // [esp+14h] [ebp-98h]
  int v28; // [esp+18h] [ebp-94h]
  int v29; // [esp+1Ch] [ebp-90h]
  int v30; // [esp+20h] [ebp-8Ch]
  int v31; // [esp+24h] [ebp-88h]
  int v32; // [esp+28h] [ebp-84h]
  _DWORD v33[3]; // [esp+40h] [ebp-6Ch] BYREF
  int v34; // [esp+54h] [ebp-58h] BYREF
  int v35; // [esp+58h] [ebp-54h]
  int v36; // [esp+5Ch] [ebp-50h]
  unsigned int v37; // [esp+60h] [ebp-4Ch] BYREF
  _DWORD *v38; // [esp+64h] [ebp-48h]
  char v39; // [esp+6Ah] [ebp-42h] BYREF
  char v40; // [esp+6Bh] [ebp-41h] BYREF
  _DWORD v41[10]; // [esp+6Ch] [ebp-40h] BYREF
  CPPEH_RECORD ms_exc; // [esp+94h] [ebp-18h]

  v38 = a4;
  v37 = 0;
  v34 = 0;
  v33[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v35 = ThreadWin32Thread;
  if ( a1 )
    v10 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v10 = 0;
  v36 = v10;
  v41[0] = v10;
  v41[1] = a2;
  v41[2] = a3;
  v41[3] = *a4;
  v41[4] = a4[1];
  v41[5] = a4[2];
  v41[6] = a4[3];
  v41[7] = a5;
  v41[8] = a6;
  v11 = KeGetCurrentThread();
  v12 = W32GetThreadWin32Thread(v11);
  v33[0] = *(_DWORD *)(v12 + 228);
  *(_DWORD *)(v12 + 228) = v33;
  v33[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v13 = v35;
  v14 = *(_DWORD **)(v35 + 260);
  v30 = v14[10];
  v31 = v14[11];
  v32 = v14[12];
  v14[11] = v36;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0;
  *(_DWORD *)(*(_DWORD *)(v13 + 260) + 40) = v15;
  if ( a1 )
    v16 = *(_DWORD *)(a1[5] + 140);
  else
    v16 = 0;
  *(_DWORD *)(*(_DWORD *)(v13 + 260) + 48) = v16;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v39);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  EtwTraceBeginCallback(20);
  v17 = KeUserModeCallback(20, v41, 36, &v37, &v34);
  EtwTraceEndCallback(20);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v39);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v18 = (_DWORD *)(*(_DWORD *)(v35 + 260) + 40);
  *v18++ = v30;
  *v18 = v31;
  v18[1] = v32;
  ms_exc.registration.TryLevel = -2;
  if ( v17 >= 0 && v34 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v19 = (int *)v37;
    if ( v37 + 4 < v37 || v37 + 4 > _MmUserProbeAddress )
      v19 = (int *)_MmUserProbeAddress;
    v20 = *v19;
    ms_exc.registration.TryLevel = -2;
    if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
      return v20;
    v21 = *(_DWORD *)(_gptiCurrent + 276);
    v22 = v38;
    if ( !v21 || (*(_BYTE *)(v21 + 44) & 1) == 0 || *(_DWORD **)(v21 + 52) != v38 )
    {
      ms_exc.registration.TryLevel = 3;
      v23 = *(int **)(v37 + 8);
      if ( v23 + 4 < v23 || (unsigned int)(v23 + 4) > _MmUserProbeAddress )
        v23 = (int *)_MmUserProbeAddress;
      v26 = *v23;
      v24 = v23 + 1;
      v27 = *v24++;
      v28 = *v24;
      v29 = v24[1];
      *v38 = v26;
      v22[1] = v27;
      v22[2] = v28;
      v22[3] = v29;
      ms_exc.registration.TryLevel = -2;
      return v20;
    }
  }
  return 0;
}
