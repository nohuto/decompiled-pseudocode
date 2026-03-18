/*
 * XREFs of _SfnINLPDRAWITEMSTRUCT@32 @ 0x18CF89
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
 *     __WindowFromDC@4 @ 0x9A764 (__WindowFromDC@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall SfnINLPDRAWITEMSTRUCT(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ecx
  const void *v10; // edi
  int ObjectOwner; // esi
  struct tagWND *v12; // ecx
  PKTHREAD v13; // eax
  int v14; // eax
  int v15; // edx
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ebx
  _DWORD *v20; // edi
  int *v21; // ecx
  int v22; // edi
  int v23; // ebx
  _DWORD *v24; // esi
  int v26; // [esp+10h] [ebp-ACh]
  int v27; // [esp+14h] [ebp-A8h]
  int v28; // [esp+18h] [ebp-A4h]
  _DWORD v29[3]; // [esp+2Ch] [ebp-90h] BYREF
  _DWORD *v30; // [esp+40h] [ebp-7Ch]
  int v31; // [esp+44h] [ebp-78h]
  unsigned int v32; // [esp+48h] [ebp-74h] BYREF
  int v33; // [esp+4Ch] [ebp-70h] BYREF
  int v34; // [esp+50h] [ebp-6Ch]
  int v35; // [esp+54h] [ebp-68h]
  char v36; // [esp+5Ah] [ebp-62h] BYREF
  char v37; // [esp+5Bh] [ebp-61h] BYREF
  _DWORD v38[3]; // [esp+5Ch] [ebp-60h] BYREF
  _BYTE v39[48]; // [esp+68h] [ebp-54h] BYREF
  int v40; // [esp+98h] [ebp-24h]
  int v41; // [esp+9Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+A4h] [ebp-18h]

  v30 = a4;
  v32 = 0;
  v33 = 0;
  v29[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v34 = ThreadWin32Thread;
  if ( a1 )
    v35 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v35 = 0;
  v31 = 0;
  v10 = v30;
  ObjectOwner = GreGetObjectOwner(v30[6], 1);
  if ( ObjectOwner != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    if ( v30[6] )
    {
      v12 = _WindowFromDC();
      if ( v12 )
      {
        v31 = v30[6];
        v30[6] = _GetDC(v12);
      }
    }
  }
  v38[0] = v35;
  v38[1] = a2;
  v38[2] = a3;
  qmemcpy(v39, v10, sizeof(v39));
  v40 = a5;
  v41 = a6;
  v13 = KeGetCurrentThread();
  v14 = W32GetThreadWin32Thread(v13);
  v29[0] = *(_DWORD *)(v14 + 228);
  *(_DWORD *)(v14 + 228) = v29;
  v29[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v15 = v34;
  v16 = *(_DWORD **)(v34 + 260);
  v26 = v16[10];
  v27 = v16[11];
  v28 = v16[12];
  v16[11] = v35;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0;
  *(_DWORD *)(*(_DWORD *)(v15 + 260) + 40) = v17;
  if ( a1 )
    v18 = *(_DWORD *)(a1[5] + 140);
  else
    v18 = 0;
  *(_DWORD *)(*(_DWORD *)(v15 + 260) + 48) = v18;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(12);
  v19 = KeUserModeCallback(12, v38, 68, &v32, &v33);
  EtwTraceEndCallback(12);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v20 = (_DWORD *)(*(_DWORD *)(v34 + 260) + 40);
  *v20++ = v26;
  *v20 = v27;
  v20[1] = v28;
  ms_exc.registration.TryLevel = -2;
  if ( v19 < 0 || v33 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v21 = (int *)v32;
  if ( v32 + 4 < v32 || v32 + 4 > _MmUserProbeAddress )
    v21 = (int *)_MmUserProbeAddress;
  v22 = *v21;
  ms_exc.registration.TryLevel = -2;
  v23 = v31;
  if ( v31 && (!a8 || (*(_BYTE *)(a8 + 44) & 5) == 0) && (a7 & 2) == 0 )
  {
    v24 = v30;
    _ReleaseDC(v30[6]);
    v24[6] = v23;
  }
  return v22;
}
