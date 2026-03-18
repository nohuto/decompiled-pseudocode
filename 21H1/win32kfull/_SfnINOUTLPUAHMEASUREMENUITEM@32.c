/*
 * XREFs of _SfnINOUTLPUAHMEASUREMENUITEM@32 @ 0xB8942
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
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall SfnINOUTLPUAHMEASUREMENUITEM(int *a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // edi
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
  int v21; // edi
  int v22; // esi
  _DWORD *v23; // ebx
  int v24; // eax
  char *v25; // esi
  _BYTE v27[92]; // [esp+10h] [ebp-13Ch] BYREF
  int v28; // [esp+6Ch] [ebp-E0h]
  int v29; // [esp+70h] [ebp-DCh]
  int v30; // [esp+74h] [ebp-D8h]
  int v31; // [esp+88h] [ebp-C4h]
  _DWORD v32[3]; // [esp+8Ch] [ebp-C0h] BYREF
  int v33; // [esp+A0h] [ebp-ACh]
  int v34; // [esp+A4h] [ebp-A8h]
  int v35; // [esp+A8h] [ebp-A4h] BYREF
  int v36; // [esp+ACh] [ebp-A0h]
  unsigned int v37; // [esp+B0h] [ebp-9Ch] BYREF
  int v38; // [esp+B4h] [ebp-98h]
  _DWORD *v39; // [esp+B8h] [ebp-94h]
  char v40; // [esp+BEh] [ebp-8Eh] BYREF
  char v41; // [esp+BFh] [ebp-8Dh] BYREF
  _DWORD v42[3]; // [esp+C0h] [ebp-8Ch] BYREF
  _BYTE v43[92]; // [esp+CCh] [ebp-80h] BYREF
  int v44; // [esp+128h] [ebp-24h]
  int v45; // [esp+12Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+134h] [ebp-18h]

  v39 = (_DWORD *)a4;
  v37 = 0;
  v35 = 0;
  v32[2] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v38 = ThreadWin32Thread;
  if ( a1 )
    v10 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v10 = 0;
  v36 = v10;
  v34 = 0;
  v11 = _ServerFixupMenuDC(*(HDC *)(a4 + 28), *(_DWORD *)(a4 + 36), 1);
  v33 = v11;
  if ( v11 )
  {
    v34 = *(_DWORD *)(a4 + 28);
    *(_DWORD *)(a4 + 28) = v11;
  }
  v42[0] = v10;
  v42[1] = a2 & 0x1FFFF;
  v42[2] = a3;
  qmemcpy(v43, (const void *)a4, sizeof(v43));
  v44 = a5;
  v45 = a6;
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v32[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v32;
  v32[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v14 = v38;
  v15 = *(_DWORD **)(v38 + 260);
  v28 = v15[10];
  v29 = v15[11];
  v30 = v15[12];
  v15[11] = v36;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0;
  *(_DWORD *)(*(_DWORD *)(v14 + 260) + 40) = v16;
  if ( a1 )
    v17 = *(_DWORD *)(a1[5] + 140);
  else
    v17 = 0;
  *(_DWORD *)(*(_DWORD *)(v14 + 260) + 48) = v17;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(109);
  v18 = KeUserModeCallback(109, v42, 112, &v37, &v35);
  EtwTraceEndCallback(109);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v19 = (_DWORD *)(*(_DWORD *)(v38 + 260) + 40);
  *v19++ = v28;
  *v19 = v29;
  v19[1] = v30;
  ms_exc.registration.TryLevel = -2;
  if ( v18 < 0 || v35 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v20 = (int *)v37;
  if ( v37 + 4 < v37 || v37 + 4 > _MmUserProbeAddress )
    v20 = (int *)_MmUserProbeAddress;
  v21 = *v20;
  v38 = v21;
  v31 = v21;
  ms_exc.registration.TryLevel = -2;
  v22 = a8;
  if ( !a8 || (*(_BYTE *)(a8 + 44) & 5) == 0 )
  {
    v23 = v39;
    if ( (a7 & 2) != 0 )
      goto LABEL_22;
    v24 = *(_DWORD *)(_gptiCurrent + 276);
    if ( !v24 || (*(_BYTE *)(v24 + 44) & 1) == 0 || *(_DWORD **)(v24 + 52) != v39 )
    {
      ms_exc.registration.TryLevel = 3;
      v25 = *(char **)(v37 + 8);
      if ( v25 + 92 < v25 || (unsigned int)(v25 + 92) > _MmUserProbeAddress )
        v25 = (char *)_MmUserProbeAddress;
      qmemcpy(v27, v25, sizeof(v27));
      qmemcpy(v39, v27, 0x5Cu);
      ms_exc.registration.TryLevel = -2;
      v22 = a8;
      v21 = v38;
      goto LABEL_22;
    }
    return 0;
  }
  v23 = v39;
LABEL_22:
  if ( v33 )
  {
    _ReleaseDC(v33);
    if ( (!v22 || (*(_BYTE *)(v22 + 44) & 5) == 0) && (a7 & 2) == 0 )
      v23[7] = v34;
  }
  return v21;
}
