/*
 * XREFs of _SfnINLPHLPSTRUCT@32 @ 0x18D5F5
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
 *     ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940 (-CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

char *__stdcall SfnINLPHLPSTRUCT(int *a1, int a2, int a3, unsigned __int16 *a4, int a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // esi
  char *result; // eax
  char *v12; // ebx
  PKTHREAD v13; // eax
  PKTHREAD v14; // eax
  int v15; // eax
  int *v16; // ecx
  _DWORD *v17; // eax
  int v18; // edx
  int v19; // esi
  _DWORD *v20; // edi
  int *v21; // ecx
  int v22; // esi
  PVOID *v23; // ebx
  int v24; // [esp+0h] [ebp-2B8h]
  unsigned int v25; // [esp+0h] [ebp-2B8h]
  unsigned int v26; // [esp+4h] [ebp-2B4h]
  void **v27; // [esp+4h] [ebp-2B4h]
  _BYTE v28[48]; // [esp+10h] [ebp-2A8h] BYREF
  _DWORD v29[3]; // [esp+40h] [ebp-278h] BYREF
  int v30; // [esp+4Ch] [ebp-26Ch]
  int v31; // [esp+50h] [ebp-268h]
  int v32; // [esp+54h] [ebp-264h]
  int v33; // [esp+64h] [ebp-254h]
  int v34; // [esp+68h] [ebp-250h] BYREF
  int *v35; // [esp+6Ch] [ebp-24Ch]
  int v36; // [esp+70h] [ebp-248h]
  unsigned int v37; // [esp+7Ch] [ebp-23Ch] BYREF
  int v38; // [esp+80h] [ebp-238h] BYREF
  int v39; // [esp+84h] [ebp-234h]
  int v40; // [esp+88h] [ebp-230h]
  int *v41; // [esp+8Ch] [ebp-22Ch]
  char *v42; // [esp+90h] [ebp-228h]
  ULONG_PTR RegionSize; // [esp+94h] [ebp-224h] BYREF
  char v44; // [esp+9Ah] [ebp-21Eh] BYREF
  char v45; // [esp+9Bh] [ebp-21Dh] BYREF
  char v46[516]; // [esp+9Ch] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2A0h] [ebp-18h]

  v41 = a1;
  RegionSize = (ULONG_PTR)a4;
  memset(v28, 0, sizeof(v28));
  v37 = 0;
  v38 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v39 = ThreadWin32Thread;
  if ( a1 )
    v10 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v10 = 0;
  v40 = v10;
  result = AllocCallbackMessage(1, 48, *a4, v46, 1u, 0x200u, v24, v26);
  v12 = result;
  v42 = result;
  if ( result )
  {
    v13 = KeGetCurrentThread();
    W32GetThreadWin32Thread(v13);
    memset(v29, 0, sizeof(v29));
    if ( v12 != v28 && v12 != v46 )
      PushW32ThreadLock((int)v12, v29, (int)Win32FreePool);
    *((_DWORD *)v12 + 6) = v10;
    *((_DWORD *)v12 + 7) = a2;
    *((_DWORD *)v12 + 8) = a3;
    if ( CaptureCallbackData(
           (const void *)RegionSize,
           v12,
           (const unsigned __int8 *)*(unsigned __int16 *)RegionSize,
           v12 + 36,
           v25,
           v27) < 0 )
      goto LABEL_25;
    *((_DWORD *)v12 + 10) = a5;
    *((_DWORD *)v12 + 11) = a6;
    v14 = KeGetCurrentThread();
    v15 = W32GetThreadWin32Thread(v14);
    v34 = *(_DWORD *)(v15 + 228);
    *(_DWORD *)(v15 + 228) = &v34;
    v16 = v41;
    v35 = v41;
    if ( v41 )
    {
      HMLockObject(v41);
      v16 = v41;
    }
    ms_exc.registration.TryLevel = 0;
    v17 = *(_DWORD **)(v39 + 260);
    v30 = v17[10];
    v31 = v17[11];
    v32 = v17[12];
    v17[11] = v40;
    if ( v16 )
      v18 = *v16;
    else
      v18 = 0;
    v19 = v39;
    *(_DWORD *)(*(_DWORD *)(v39 + 260) + 40) = v18;
    if ( v16 )
      v16 = *(int **)(v16[5] + 140);
    *(_DWORD *)(*(_DWORD *)(v19 + 260) + 48) = v16;
    ms_exc.registration.TryLevel = -2;
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v44);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
    EtwTraceBeginCallback(14);
    *((_DWORD *)v12 + 3) = 0;
    RegionSize = KeUserModeCallback(14, v12, *(_DWORD *)v12, &v37, &v38);
    EtwTraceEndCallback(14);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v44);
    ThreadUnlock1();
    ms_exc.registration.TryLevel = 1;
    v20 = (_DWORD *)(*(_DWORD *)(v19 + 260) + 40);
    *v20++ = v30;
    *v20 = v31;
    v20[1] = v32;
    ms_exc.registration.TryLevel = -2;
    if ( (RegionSize & 0x80000000) != 0 )
      goto LABEL_25;
    if ( v38 == 12 )
    {
      ms_exc.registration.TryLevel = 2;
      v21 = (int *)v37;
      if ( v37 + 4 < v37 || v37 + 4 > _MmUserProbeAddress )
        v21 = (int *)_MmUserProbeAddress;
      v22 = *v21;
      v33 = *v21;
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
LABEL_25:
      v22 = 0;
    }
    if ( v12 != v28 && v12 != v46 )
    {
      v23 = (PVOID *)(v12 + 20);
      if ( *v23 )
      {
        RegionSize = 0;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v23, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((int)v29);
    }
    return (char *)v22;
  }
  return result;
}
