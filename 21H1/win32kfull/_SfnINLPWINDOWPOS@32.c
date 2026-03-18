/*
 * XREFs of _SfnINLPWINDOWPOS@32 @ 0x43456
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
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall SfnINLPWINDOWPOS(int *a1, int a2, int a3, const void *a4, int a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // edi
  int v9; // esi
  int *ThreadWin32Thread; // eax
  int v12; // eax
  PKTHREAD v13; // edi
  int v14; // esi
  int *v15; // eax
  int v16; // ecx
  _DWORD *v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // ebx
  _DWORD *v21; // edi
  int *v22; // ecx
  int result; // eax
  _DWORD v24[3]; // [esp+10h] [ebp-88h] BYREF
  _BYTE v25[28]; // [esp+1Ch] [ebp-7Ch] BYREF
  int v26; // [esp+38h] [ebp-60h]
  int v27; // [esp+3Ch] [ebp-5Ch]
  int v28; // [esp+40h] [ebp-58h]
  int v29; // [esp+44h] [ebp-54h]
  int v30; // [esp+48h] [ebp-50h]
  _DWORD v31[7]; // [esp+4Ch] [ebp-4Ch] BYREF
  unsigned int v32; // [esp+70h] [ebp-28h] BYREF
  int v33; // [esp+74h] [ebp-24h] BYREF
  int v34; // [esp+78h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+80h] [ebp-18h]
  int v36; // [esp+A0h] [ebp+8h]
  bool v37; // [esp+A3h] [ebp+Bh]

  v32 = 0;
  v33 = 0;
  v31[2] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v34 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v9 = *ThreadWin32Thread;
      v34 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
    v12 = a1[5] - *(_DWORD *)(v9 + 256);
  else
    v12 = 0;
  v36 = v12;
  v24[0] = v12;
  v24[1] = a2;
  v24[2] = a3;
  qmemcpy(v25, a4, sizeof(v25));
  v26 = a5;
  v27 = a6;
  v13 = KeGetCurrentThread();
  v14 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v15 = (int *)PsGetThreadWin32Thread(v13);
    if ( v15 )
      v14 = *v15;
  }
  v31[0] = *(_DWORD *)(v14 + 228);
  *(_DWORD *)(v14 + 228) = v31;
  v31[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v16 = v34;
  v17 = *(_DWORD **)(v34 + 260);
  v28 = v17[10];
  v29 = v17[11];
  v30 = v17[12];
  v17[11] = v36;
  v18 = 0;
  if ( a1 )
    v18 = *a1;
  *(_DWORD *)(*(_DWORD *)(v16 + 260) + 40) = v18;
  if ( a1 )
    v19 = *(_DWORD *)(a1[5] + 140);
  else
    v19 = 0;
  *(_DWORD *)(*(_DWORD *)(v16 + 260) + 48) = v19;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  v37 = IS_USERCRIT_OWNED_SHAREDONLY();
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(17);
  v20 = KeUserModeCallback(17, v24, 48, &v32, &v33);
  EtwTraceEndCallback(17);
  if ( v37 )
    EnterSharedCrit(0, 1);
  else
    EnterCrit(0, 1);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v21 = (_DWORD *)(*(_DWORD *)(v34 + 260) + 40);
  *v21++ = v28;
  *v21 = v29;
  v21[1] = v30;
  ms_exc.registration.TryLevel = -2;
  if ( v20 < 0 || v33 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v22 = (int *)v32;
  if ( v32 + 4 < v32 || v32 + 4 > _MmUserProbeAddress )
    v22 = (int *)_MmUserProbeAddress;
  result = *v22;
  v31[6] = *v22;
  ms_exc.registration.TryLevel = -2;
  return result;
}
