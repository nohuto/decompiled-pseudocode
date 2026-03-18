/*
 * XREFs of _SfnINOUTMENUGETOBJECT@32 @ 0x18F1B8
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

int __stdcall SfnINOUTMENUGETOBJECT(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ecx
  int *v10; // ebx
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
  int v21; // ebx
  int *v22; // esi
  int *v23; // esi
  _DWORD *v24; // esi
  _DWORD v26[3]; // [esp+1Ch] [ebp-90h] BYREF
  _BYTE v27[20]; // [esp+28h] [ebp-84h] BYREF
  int v28; // [esp+3Ch] [ebp-70h]
  int v29; // [esp+40h] [ebp-6Ch]
  int v30; // [esp+44h] [ebp-68h]
  int v31; // [esp+48h] [ebp-64h]
  int v32; // [esp+4Ch] [ebp-60h]
  int v33; // [esp+60h] [ebp-4Ch]
  int v34; // [esp+64h] [ebp-48h]
  int v35; // [esp+68h] [ebp-44h]
  volatile void *Address; // [esp+6Ch] [ebp-40h]
  _DWORD v37[3]; // [esp+70h] [ebp-3Ch] BYREF
  int v38; // [esp+88h] [ebp-24h] BYREF
  int v39; // [esp+8Ch] [ebp-20h]
  unsigned int v40; // [esp+90h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+94h] [ebp-18h]

  v40 = 0;
  v38 = 0;
  v37[2] = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v39 = ThreadWin32Thread;
  v10 = a1;
  if ( a1 )
  {
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
    a1 = (int *)v11;
  }
  else
  {
    v11 = 0;
    a1 = 0;
  }
  v26[0] = v11;
  v26[1] = a2;
  v26[2] = a3;
  qmemcpy(v27, a4, sizeof(v27));
  v28 = a5;
  v29 = a6;
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v37[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v37;
  v37[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  ms_exc.registration.TryLevel = 0;
  v14 = v39;
  v15 = *(_DWORD **)(v39 + 260);
  v30 = v15[10];
  v31 = v15[11];
  v32 = v15[12];
  v15[11] = a1;
  if ( v10 )
    v16 = *v10;
  else
    v16 = 0;
  *(_DWORD *)(*(_DWORD *)(v14 + 260) + 40) = v16;
  if ( v10 )
    v17 = *(_DWORD *)(v10[5] + 140);
  else
    v17 = 0;
  *(_DWORD *)(*(_DWORD *)(v14 + 260) + 48) = v17;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  EtwTraceBeginCallback(102);
  v18 = KeUserModeCallback(102, v26, 40, &v40, &v38);
  EtwTraceEndCallback(102);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a1 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a2 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v19 = (_DWORD *)(*(_DWORD *)(v39 + 260) + 40);
  *v19++ = v30;
  *v19 = v31;
  v19[1] = v32;
  ms_exc.registration.TryLevel = -2;
  if ( v18 < 0 || v38 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v20 = (int *)v40;
  if ( v40 + 4 < v40 || v40 + 4 > _MmUserProbeAddress )
    v20 = (int *)_MmUserProbeAddress;
  v21 = *v20;
  v33 = *v20;
  ms_exc.registration.TryLevel = -2;
  if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
    return v21;
  ms_exc.registration.TryLevel = 3;
  v22 = (int *)v40;
  if ( v40 + 12 < v40 || v40 + 12 > _MmUserProbeAddress )
    v22 = (int *)_MmUserProbeAddress;
  v34 = *v22;
  v23 = v22 + 1;
  v35 = *v23;
  Address = (volatile void *)v23[1];
  if ( v35 == 4 )
  {
    v24 = Address;
    ProbeForRead(Address, 4u, 4u);
    a4[4] = *v24;
    ms_exc.registration.TryLevel = -2;
    return v21;
  }
  ms_exc.registration.TryLevel = -2;
  return 0;
}
