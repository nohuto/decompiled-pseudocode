/*
 * XREFs of _SfnCOPYDATA@32 @ 0xA297A
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     _xxxSendShutdownData@8 @ 0x194F33 (_xxxSendShutdownData@8.c)
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

int __stdcall SfnCOPYDATA(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  ULONG_PTR ThreadWin32Thread; // ecx
  char *v10; // ebx
  PKTHREAD v11; // eax
  int v12; // ecx
  PKTHREAD v13; // eax
  int v14; // eax
  int *v15; // ecx
  _DWORD *v16; // eax
  int v17; // edx
  ULONG_PTR v18; // edi
  int v19; // ecx
  _DWORD *v20; // edi
  int *v21; // ecx
  int v22; // esi
  PVOID *v23; // ebx
  unsigned int v25; // [esp+0h] [ebp-2C8h]
  void **v26; // [esp+4h] [ebp-2C4h]
  _DWORD v27[15]; // [esp+10h] [ebp-2B8h] BYREF
  _DWORD v28[3]; // [esp+4Ch] [ebp-27Ch] BYREF
  int v29; // [esp+58h] [ebp-270h]
  int v30; // [esp+5Ch] [ebp-26Ch]
  int v31; // [esp+60h] [ebp-268h]
  int v32; // [esp+70h] [ebp-258h]
  int v33; // [esp+74h] [ebp-254h] BYREF
  int *v34; // [esp+78h] [ebp-250h]
  int v35; // [esp+7Ch] [ebp-24Ch]
  unsigned int v36; // [esp+88h] [ebp-240h] BYREF
  int v37; // [esp+8Ch] [ebp-23Ch] BYREF
  int *v38; // [esp+90h] [ebp-238h]
  size_t MaxCount; // [esp+94h] [ebp-234h]
  int v40; // [esp+98h] [ebp-230h]
  int v41; // [esp+9Ch] [ebp-22Ch]
  char *v42; // [esp+A0h] [ebp-228h]
  ULONG_PTR RegionSize; // [esp+A4h] [ebp-224h] BYREF
  char v44; // [esp+AAh] [ebp-21Eh] BYREF
  char v45; // [esp+ABh] [ebp-21Dh] BYREF
  char v46[516]; // [esp+ACh] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2B0h] [ebp-18h]

  v38 = a1;
  v40 = a4;
  memset(v27, 0, sizeof(v27));
  v36 = 0;
  v37 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  RegionSize = ThreadWin32Thread;
  if ( a1 )
    v41 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v41 = 0;
  if ( v40 )
  {
    MaxCount = *(_DWORD *)(v40 + 4);
    v10 = AllocCallbackMessage(1, 60, MaxCount, v46, 1u, 0x200u, v25, (unsigned int)v26);
    v42 = v10;
    if ( !v10 )
      return 0;
  }
  else
  {
    MaxCount = 0;
    v10 = (char *)v27;
    v42 = (char *)v27;
    v27[0] = 60;
  }
  v11 = KeGetCurrentThread();
  W32GetThreadWin32Thread(v11);
  memset(v28, 0, sizeof(v28));
  if ( v10 != (char *)v27 && v10 != v46 )
    PushW32ThreadLock((int)v10, v28, (int)Win32FreePool);
  *((_DWORD *)v10 + 6) = v41;
  *((_DWORD *)v10 + 7) = a2;
  *((_DWORD *)v10 + 8) = a3;
  v12 = v40;
  if ( v40 )
  {
    *((_DWORD *)v10 + 9) = 1;
    *((_DWORD *)v10 + 10) = *(_DWORD *)v12;
    *((_DWORD *)v10 + 11) = *(_DWORD *)(v12 + 4);
    *((_DWORD *)v10 + 12) = *(_DWORD *)(v12 + 8);
    if ( CaptureCallbackData(*(const void **)(v12 + 8), v10, (const unsigned __int8 *)MaxCount, v10 + 48, v25, v26) < 0 )
      goto LABEL_30;
  }
  else
  {
    *((_DWORD *)v10 + 9) = 0;
  }
  *((_DWORD *)v10 + 13) = a5;
  *((_DWORD *)v10 + 14) = a6;
  v13 = KeGetCurrentThread();
  v14 = W32GetThreadWin32Thread(v13);
  v33 = *(_DWORD *)(v14 + 228);
  *(_DWORD *)(v14 + 228) = &v33;
  v15 = v38;
  v34 = v38;
  if ( v38 )
  {
    HMLockObject(v38);
    v15 = v38;
  }
  ms_exc.registration.TryLevel = 0;
  v16 = *(_DWORD **)(RegionSize + 260);
  v29 = v16[10];
  v30 = v16[11];
  v31 = v16[12];
  v16[11] = v41;
  v17 = 0;
  if ( v15 )
    v17 = *v15;
  v18 = RegionSize;
  *(_DWORD *)(*(_DWORD *)(RegionSize + 260) + 40) = v17;
  if ( v15 )
    v19 = *(_DWORD *)(v15[5] + 140);
  else
    v19 = 0;
  *(_DWORD *)(*(_DWORD *)(v18 + 260) + 48) = v19;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v44);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  EtwTraceBeginCallback(0);
  *((_DWORD *)v10 + 3) = 0;
  RegionSize = KeUserModeCallback(0, v10, *(_DWORD *)v10, &v36, &v37);
  EtwTraceEndCallback(0);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v44);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v20 = (_DWORD *)(*(_DWORD *)(v18 + 260) + 40);
  *v20++ = v29;
  *v20 = v30;
  v20[1] = v31;
  ms_exc.registration.TryLevel = -2;
  if ( (RegionSize & 0x80000000) == 0 && v37 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v21 = (int *)v36;
    if ( v36 + 4 < v36 || v36 + 4 > _MmUserProbeAddress )
      v21 = (int *)_MmUserProbeAddress;
    v22 = *v21;
    v32 = *v21;
    ms_exc.registration.TryLevel = -2;
    goto LABEL_22;
  }
LABEL_30:
  v22 = 0;
LABEL_22:
  if ( v10 != (char *)v27 && v10 != v46 )
  {
    v23 = (PVOID *)(v10 + 20);
    if ( *v23 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v23, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v28);
  }
  return v22;
}
