/*
 * XREFs of _SfnCOPYGLOBALDATA@32 @ 0x18A2D8
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940 (-CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

char *__stdcall SfnCOPYGLOBALDATA(int *a1, int a2, ULONG_PTR a3, ULONG_PTR a4, int a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  char *result; // eax
  int v11; // esi
  PKTHREAD v12; // eax
  const void *v13; // edx
  const unsigned __int8 *v14; // ecx
  PKTHREAD v15; // eax
  int v16; // eax
  int *v17; // ecx
  _DWORD *v18; // eax
  int v19; // edx
  int v20; // esi
  char *v21; // eax
  _DWORD *v22; // edi
  int *v23; // ecx
  int v24; // esi
  int v25; // [esp+0h] [ebp-2B0h]
  unsigned int v26; // [esp+0h] [ebp-2B0h]
  unsigned int v27; // [esp+4h] [ebp-2ACh]
  void **v28; // [esp+4h] [ebp-2ACh]
  _BYTE v29[32]; // [esp+10h] [ebp-2A0h] BYREF
  _DWORD v30[3]; // [esp+30h] [ebp-280h] BYREF
  int v31; // [esp+3Ch] [ebp-274h]
  int v32; // [esp+40h] [ebp-270h]
  int v33; // [esp+44h] [ebp-26Ch]
  int v34; // [esp+54h] [ebp-25Ch]
  int v35; // [esp+58h] [ebp-258h] BYREF
  int *v36; // [esp+5Ch] [ebp-254h]
  int v37; // [esp+60h] [ebp-250h]
  char *v38; // [esp+6Ch] [ebp-244h]
  unsigned int v39; // [esp+70h] [ebp-240h] BYREF
  int v40; // [esp+74h] [ebp-23Ch] BYREF
  int v41; // [esp+78h] [ebp-238h]
  int v42; // [esp+7Ch] [ebp-234h]
  int *v43; // [esp+80h] [ebp-230h]
  ULONG_PTR MaxCount; // [esp+84h] [ebp-22Ch]
  ULONG_PTR RegionSize; // [esp+88h] [ebp-228h] BYREF
  char v46; // [esp+8Eh] [ebp-222h] BYREF
  char v47; // [esp+8Fh] [ebp-221h] BYREF
  char v48[520]; // [esp+90h] [ebp-220h] BYREF
  CPPEH_RECORD ms_exc; // [esp+298h] [ebp-18h]

  v43 = a1;
  MaxCount = a3;
  RegionSize = a4;
  memset(v29, 0, sizeof(v29));
  v39 = 0;
  v40 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v41 = ThreadWin32Thread;
  if ( a1 )
    v42 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v42 = 0;
  result = AllocCallbackMessage(1, 32, MaxCount, v48, 1u, 0x200u, v25, v27);
  v11 = (int)result;
  v38 = result;
  if ( result )
  {
    v12 = KeGetCurrentThread();
    W32GetThreadWin32Thread(v12);
    memset(v30, 0, sizeof(v30));
    if ( (_BYTE *)v11 != v29 && (char *)v11 != v48 )
      PushW32ThreadLock(v11, v30, (int)Win32FreePool);
    v13 = (const void *)RegionSize;
    if ( !RegionSize )
      goto LABEL_26;
    v14 = (const unsigned __int8 *)MaxCount;
    *(_DWORD *)(v11 + 24) = MaxCount;
    if ( CaptureCallbackData(v13, (char *)v11, v14, (char *)(v11 + 28), v26, v28) < 0 )
      goto LABEL_26;
    v15 = KeGetCurrentThread();
    v16 = W32GetThreadWin32Thread(v15);
    v35 = *(_DWORD *)(v16 + 228);
    *(_DWORD *)(v16 + 228) = &v35;
    v17 = v43;
    v36 = v43;
    if ( v43 )
    {
      HMLockObject(v43);
      v17 = v43;
    }
    ms_exc.registration.TryLevel = 0;
    v18 = *(_DWORD **)(v41 + 260);
    v31 = v18[10];
    v32 = v18[11];
    v33 = v18[12];
    v18[11] = v42;
    if ( v17 )
      v19 = *v17;
    else
      v19 = 0;
    v20 = v41;
    *(_DWORD *)(*(_DWORD *)(v41 + 260) + 40) = v19;
    if ( v17 )
      v17 = *(int **)(v17[5] + 140);
    *(_DWORD *)(*(_DWORD *)(v20 + 260) + 48) = v17;
    ms_exc.registration.TryLevel = -2;
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v46);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47);
    EtwTraceBeginCallback(1);
    v21 = v38;
    *((_DWORD *)v38 + 3) = 0;
    RegionSize = KeUserModeCallback(1, v21, *(_DWORD *)v21, &v39, &v40);
    EtwTraceEndCallback(1);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v46);
    ThreadUnlock1();
    ms_exc.registration.TryLevel = 1;
    v22 = (_DWORD *)(*(_DWORD *)(v20 + 260) + 40);
    *v22++ = v31;
    *v22 = v32;
    v22[1] = v33;
    ms_exc.registration.TryLevel = -2;
    if ( (RegionSize & 0x80000000) != 0 )
      goto LABEL_26;
    if ( v40 == 12 )
    {
      ms_exc.registration.TryLevel = 2;
      v23 = (int *)v39;
      if ( v39 + 4 < v39 || v39 + 4 > _MmUserProbeAddress )
        v23 = (int *)_MmUserProbeAddress;
      v24 = *v23;
      v34 = *v23;
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
LABEL_26:
      v24 = 0;
    }
    if ( v38 != v29 && v38 != v48 )
    {
      if ( *((_DWORD *)v38 + 5) )
      {
        RegionSize = 0;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v38 + 5, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((int)v30);
    }
    return (char *)v24;
  }
  return result;
}
