/*
 * XREFs of _SfnOUTLPTITLEBARINFOEX@32 @ 0x1916FB
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

int __stdcall SfnOUTLPTITLEBARINFOEX(int *a1, int a2, int a3, void *a4, int a5, int a6, char a7, int a8)
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
  char *v22; // esi
  _BYTE v24[140]; // [esp+10h] [ebp-194h] BYREF
  int v25; // [esp+9Ch] [ebp-108h]
  int v26; // [esp+A0h] [ebp-104h]
  int v27; // [esp+A4h] [ebp-100h]
  int v28; // [esp+B8h] [ebp-ECh]
  _DWORD v29[3]; // [esp+BCh] [ebp-E8h] BYREF
  int v30; // [esp+D0h] [ebp-D4h] BYREF
  int v31; // [esp+D4h] [ebp-D0h]
  int v32; // [esp+D8h] [ebp-CCh]
  unsigned int v33; // [esp+DCh] [ebp-C8h] BYREF
  void *v34; // [esp+E0h] [ebp-C4h]
  char v35; // [esp+E6h] [ebp-BEh] BYREF
  char v36; // [esp+E7h] [ebp-BDh] BYREF
  _DWORD v37[3]; // [esp+E8h] [ebp-BCh] BYREF
  _BYTE v38[140]; // [esp+F4h] [ebp-B0h] BYREF
  int v39; // [esp+180h] [ebp-24h]
  int v40; // [esp+184h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+18Ch] [ebp-18h]

  v34 = a4;
  v33 = 0;
  v30 = 0;
  v29[2] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v31 = ThreadWin32Thread;
  if ( a1 )
    v10 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v10 = 0;
  v32 = v10;
  v37[0] = v10;
  v37[1] = a2;
  v37[2] = a3;
  qmemcpy(v38, a4, sizeof(v38));
  v39 = a5;
  v40 = a6;
  v11 = KeGetCurrentThread();
  v12 = W32GetThreadWin32Thread(v11);
  v29[0] = *(_DWORD *)(v12 + 228);
  *(_DWORD *)(v12 + 228) = v29;
  v29[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v13 = v31;
  v14 = *(_DWORD **)(v31 + 260);
  v25 = v14[10];
  v26 = v14[11];
  v27 = v14[12];
  v14[11] = v32;
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v35);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(111);
  v17 = KeUserModeCallback(111, v37, 160, &v33, &v30);
  EtwTraceEndCallback(111);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v35);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v18 = (_DWORD *)(*(_DWORD *)(v31 + 260) + 40);
  *v18++ = v25;
  *v18 = v26;
  v18[1] = v27;
  ms_exc.registration.TryLevel = -2;
  if ( v17 >= 0 && v30 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v19 = (int *)v33;
    if ( v33 + 4 < v33 || v33 + 4 > _MmUserProbeAddress )
      v19 = (int *)_MmUserProbeAddress;
    v20 = *v19;
    v28 = *v19;
    ms_exc.registration.TryLevel = -2;
    if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
      return v20;
    v21 = *(_DWORD *)(_gptiCurrent + 276);
    if ( !v21 || (*(_BYTE *)(v21 + 44) & 1) == 0 || *(void **)(v21 + 52) != v34 )
    {
      ms_exc.registration.TryLevel = 3;
      v22 = *(char **)(v33 + 8);
      if ( v22 + 140 < v22 || (unsigned int)(v22 + 140) > _MmUserProbeAddress )
        v22 = (char *)_MmUserProbeAddress;
      qmemcpy(v24, v22, sizeof(v24));
      qmemcpy(v34, v24, 0x8Cu);
      ms_exc.registration.TryLevel = -2;
      return v20;
    }
  }
  return 0;
}
