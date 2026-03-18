/*
 * XREFs of _SfnSENTDDEMSG@32 @ 0x1922F9
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
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 */

int __stdcall SfnSENTDDEMSG(int *a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // edi
  PKTHREAD v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // edx
  int v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // ebx
  _DWORD *v20; // edi
  int *v21; // ecx
  int result; // eax
  int v23[7]; // [esp+10h] [ebp-8Ch] BYREF
  int v24; // [esp+2Ch] [ebp-70h] BYREF
  int v25; // [esp+30h] [ebp-6Ch]
  int v26; // [esp+34h] [ebp-68h]
  int v27; // [esp+38h] [ebp-64h]
  int v28; // [esp+3Ch] [ebp-60h]
  int v29; // [esp+40h] [ebp-5Ch]
  BOOL v30; // [esp+44h] [ebp-58h]
  int v31; // [esp+48h] [ebp-54h]
  int v32; // [esp+4Ch] [ebp-50h]
  int v33; // [esp+50h] [ebp-4Ch]
  _DWORD v34[7]; // [esp+54h] [ebp-48h] BYREF
  int v35; // [esp+78h] [ebp-24h]
  unsigned int v36; // [esp+7Ch] [ebp-20h] BYREF
  int v37; // [esp+80h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+84h] [ebp-18h]
  int v39; // [esp+A4h] [ebp+8h]

  memset(v23, 0, sizeof(v23));
  v36 = 0;
  v37 = 0;
  v34[2] = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v10 = ThreadWin32Thread;
  v35 = ThreadWin32Thread;
  if ( a1 )
    v39 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v39 = 0;
  a2 &= ~0x40000000u;
  v12 = KeGetCurrentThread();
  v13 = W32GetThreadWin32Thread(v12);
  v34[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v34;
  v34[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v14 = *(_DWORD **)(v10 + 260);
  v31 = v14[10];
  v32 = v14[11];
  v33 = v14[12];
  v14[11] = v39;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0;
  v16 = v35;
  *(_DWORD *)(*(_DWORD *)(v35 + 260) + 40) = v15;
  if ( a1 )
    v17 = *(_DWORD *)(a1[5] + 140);
  else
    v17 = 0;
  *(_DWORD *)(*(_DWORD *)(v16 + 260) + 48) = v17;
  ms_exc.registration.TryLevel = -2;
  if ( a2 >= 0 )
  {
    v24 = v39;
    v25 = a2;
    v26 = a3;
    v18 = a4;
  }
  else
  {
    if ( a1 )
      v23[0] = *a1;
    v23[1] = a2 & 0x7FFFFFFF;
    v23[2] = a3;
    v23[3] = a4;
    xxxDDETrackGetMessageHook(v23);
    v24 = _HMObjectFromHandle(v23[0]) - *(_DWORD *)(v16 + 256);
    v25 = v23[1];
    v26 = v23[2];
    v18 = v23[3];
  }
  v27 = v18;
  v28 = a5;
  v29 = a6;
  v30 = (a7 & 1) == 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a3 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a2 + 3));
  EtwTraceBeginCallback(38);
  v19 = KeUserModeCallback(38, &v24, 28, &v36, &v37);
  EtwTraceEndCallback(38);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a2 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a3 + 3));
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v20 = (_DWORD *)(*(_DWORD *)(v16 + 260) + 40);
  *v20++ = v31;
  *v20 = v32;
  v20[1] = v33;
  ms_exc.registration.TryLevel = -2;
  if ( v19 < 0 || v37 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v21 = (int *)v36;
  if ( v36 + 4 < v36 || v36 + 4 > _MmUserProbeAddress )
    v21 = (int *)_MmUserProbeAddress;
  result = *v21;
  v34[6] = *v21;
  ms_exc.registration.TryLevel = -2;
  return result;
}
