/*
 * XREFs of _SfnINLPUAHDRAWMENUITEM@32 @ 0xB8FCA
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _IS_USERCRIT_OWNED_SHAREDONLY@0 @ 0x4159E (_IS_USERCRIT_OWNED_SHAREDONLY@0.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __ServerFixupMenuDC@16 @ 0xB932A (__ServerFixupMenuDC@16.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall SfnINLPUAHDRAWMENUITEM(int *a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  int *ThreadWin32Thread; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  PKTHREAD v12; // edi
  int v13; // esi
  int *v14; // eax
  int v15; // edx
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ebx
  _DWORD *v20; // edi
  int *v21; // ecx
  int v22; // esi
  int v23; // ecx
  PKTHREAD v24; // eax
  int v26; // [esp+10h] [ebp-F4h]
  int v27; // [esp+14h] [ebp-F0h]
  int v28; // [esp+18h] [ebp-ECh]
  _DWORD v29[3]; // [esp+2Ch] [ebp-D8h] BYREF
  int v30; // [esp+40h] [ebp-C4h]
  int v31; // [esp+44h] [ebp-C0h]
  unsigned int v32; // [esp+48h] [ebp-BCh] BYREF
  int v33; // [esp+4Ch] [ebp-B8h] BYREF
  int v34; // [esp+50h] [ebp-B4h]
  PKTHREAD CurrentThread; // [esp+54h] [ebp-B0h]
  int v36; // [esp+58h] [ebp-ACh]
  char v37; // [esp+5Eh] [ebp-A6h] BYREF
  bool v38; // [esp+5Fh] [ebp-A5h]
  _DWORD v39[3]; // [esp+60h] [ebp-A4h] BYREF
  _BYTE v40[116]; // [esp+6Ch] [ebp-98h] BYREF
  int v41; // [esp+E0h] [ebp-24h]
  int v42; // [esp+E4h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+ECh] [ebp-18h]

  v30 = a4;
  v32 = 0;
  v33 = 0;
  v29[2] = 0;
  CurrentThread = KeGetCurrentThread();
  v36 = 0;
  if ( IsThreadCrossSessionAttached() || (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread)) == 0 )
  {
    v9 = 0;
  }
  else
  {
    v9 = *ThreadWin32Thread;
    v36 = v9;
  }
  if ( a1 )
    v10 = a1[5] - *(_DWORD *)(v9 + 256);
  else
    v10 = 0;
  v34 = v10;
  CurrentThread = 0;
  v11 = _ServerFixupMenuDC(*(HDC *)(a4 + 24), *(_DWORD *)(a4 + 60), 1);
  v31 = v11;
  if ( v11 )
  {
    CurrentThread = *(PKTHREAD *)(a4 + 24);
    *(_DWORD *)(a4 + 24) = v11;
    *(_DWORD *)(a4 + 52) = v11;
  }
  v39[0] = v10;
  v39[1] = a2;
  v39[2] = a3;
  qmemcpy(v40, (const void *)a4, sizeof(v40));
  v41 = a5;
  v42 = a6;
  v12 = KeGetCurrentThread();
  v13 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v14 = (int *)PsGetThreadWin32Thread(v12);
    if ( v14 )
      v13 = *v14;
  }
  v29[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v29;
  v29[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v15 = v36;
  v16 = *(_DWORD **)(v36 + 260);
  v26 = v16[10];
  v27 = v16[11];
  v28 = v16[12];
  v16[11] = v34;
  v17 = 0;
  if ( a1 )
    v17 = *a1;
  *(_DWORD *)(*(_DWORD *)(v15 + 260) + 40) = v17;
  if ( a1 )
    v18 = *(_DWORD *)(a1[5] + 140);
  else
    v18 = 0;
  *(_DWORD *)(*(_DWORD *)(v15 + 260) + 48) = v18;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37);
  v38 = IS_USERCRIT_OWNED_SHAREDONLY();
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(107);
  v19 = KeUserModeCallback(107, v39, 136, &v32, &v33);
  EtwTraceEndCallback(107);
  if ( v38 )
    EnterSharedCrit(0, 1);
  else
    EnterCrit(0, 1);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v20 = (_DWORD *)(*(_DWORD *)(v36 + 260) + 40);
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
  if ( v31 )
  {
    _ReleaseDC(v31);
    if ( (!a8 || (*(_BYTE *)(a8 + 44) & 5) == 0) && (a7 & 2) == 0 )
    {
      v23 = v30;
      v24 = CurrentThread;
      *(_DWORD *)(v30 + 24) = CurrentThread;
      *(_DWORD *)(v23 + 52) = v24;
    }
  }
  return v22;
}
