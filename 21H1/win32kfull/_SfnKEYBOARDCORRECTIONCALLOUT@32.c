/*
 * XREFs of _SfnKEYBOARDCORRECTIONCALLOUT@32 @ 0x190967
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

int __stdcall SfnKEYBOARDCORRECTIONCALLOUT(int *a1, int a2, int a3, const void *a4, int a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // edx
  PKTHREAD v11; // eax
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // ebx
  _DWORD *v18; // edi
  int *v19; // ecx
  int result; // eax
  int v21; // [esp+10h] [ebp-1A4h]
  int v22; // [esp+14h] [ebp-1A0h]
  int v23; // [esp+18h] [ebp-19Ch]
  _DWORD v24[3]; // [esp+2Ch] [ebp-188h] BYREF
  unsigned int v25; // [esp+40h] [ebp-174h] BYREF
  int v26; // [esp+44h] [ebp-170h] BYREF
  int v27; // [esp+48h] [ebp-16Ch]
  int v28; // [esp+4Ch] [ebp-168h]
  char v29; // [esp+52h] [ebp-162h] BYREF
  char v30; // [esp+53h] [ebp-161h] BYREF
  _DWORD v31[3]; // [esp+54h] [ebp-160h] BYREF
  _BYTE v32[304]; // [esp+60h] [ebp-154h] BYREF
  int v33; // [esp+190h] [ebp-24h]
  int v34; // [esp+194h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+19Ch] [ebp-18h]

  v25 = 0;
  v26 = 0;
  v24[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v27 = ThreadWin32Thread;
  if ( a1 )
  {
    v10 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
    v28 = v10;
  }
  else
  {
    v10 = 0;
    v28 = 0;
  }
  if ( ThreadWin32Thread == *(_DWORD *)(a8 + 16) )
    return 0;
  v31[0] = v10;
  v31[1] = a2 & 0x1FFFF;
  v31[2] = a3;
  qmemcpy(v32, a4, sizeof(v32));
  v33 = a5;
  v34 = a6;
  v11 = KeGetCurrentThread();
  v12 = W32GetThreadWin32Thread(v11);
  v24[0] = *(_DWORD *)(v12 + 228);
  *(_DWORD *)(v12 + 228) = v24;
  v24[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v13 = v27;
  v14 = *(_DWORD **)(v27 + 260);
  v21 = v14[10];
  v22 = v14[11];
  v23 = v14[12];
  v14[11] = v28;
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v29);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  EtwTraceBeginCallback(52);
  v17 = KeUserModeCallback(52, v31, 324, &v25, &v26);
  EtwTraceEndCallback(52);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v29);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v18 = (_DWORD *)(*(_DWORD *)(v27 + 260) + 40);
  *v18++ = v21;
  *v18 = v22;
  v18[1] = v23;
  ms_exc.registration.TryLevel = -2;
  if ( v17 < 0 || v26 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v19 = (int *)v25;
  if ( v25 + 4 < v25 || v25 + 4 > _MmUserProbeAddress )
    v19 = (int *)_MmUserProbeAddress;
  result = *v19;
  ms_exc.registration.TryLevel = -2;
  return result;
}
