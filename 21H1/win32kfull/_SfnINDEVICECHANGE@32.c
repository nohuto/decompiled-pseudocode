/*
 * XREFs of _SfnINDEVICECHANGE@32 @ 0xC8560
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

int __stdcall SfnINDEVICECHANGE(int *a1, int a2, int a3, ULONG_PTR *a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  ULONG_PTR ThreadWin32Thread; // ecx
  ULONG_PTR v10; // ecx
  const unsigned __int8 **v11; // esi
  char *v12; // ebx
  PKTHREAD v13; // eax
  PKTHREAD v14; // eax
  int v15; // eax
  int *v16; // ecx
  _DWORD *v17; // eax
  int v18; // edx
  ULONG_PTR v19; // esi
  int v20; // ecx
  _DWORD *v21; // edi
  int *v22; // ecx
  int v23; // esi
  PVOID *v25; // ebx
  int v26; // [esp+0h] [ebp-2BCh]
  unsigned int v27; // [esp+0h] [ebp-2BCh]
  unsigned int v28; // [esp+4h] [ebp-2B8h]
  void **v29; // [esp+4h] [ebp-2B8h]
  _BYTE v30[52]; // [esp+10h] [ebp-2ACh] BYREF
  _DWORD v31[3]; // [esp+44h] [ebp-278h] BYREF
  int v32; // [esp+50h] [ebp-26Ch]
  int v33; // [esp+54h] [ebp-268h]
  int v34; // [esp+58h] [ebp-264h]
  int v35; // [esp+68h] [ebp-254h]
  int v36; // [esp+6Ch] [ebp-250h] BYREF
  int *v37; // [esp+70h] [ebp-24Ch]
  int v38; // [esp+74h] [ebp-248h]
  unsigned int v39; // [esp+80h] [ebp-23Ch] BYREF
  int v40; // [esp+84h] [ebp-238h] BYREF
  int *v41; // [esp+88h] [ebp-234h]
  ULONG_PTR v42; // [esp+8Ch] [ebp-230h]
  int v43; // [esp+90h] [ebp-22Ch]
  ULONG_PTR RegionSize; // [esp+94h] [ebp-228h] BYREF
  ULONG_PTR *v45; // [esp+98h] [ebp-224h]
  char v46; // [esp+9Eh] [ebp-21Eh] BYREF
  char v47; // [esp+9Fh] [ebp-21Dh] BYREF
  char v48[516]; // [esp+A0h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2A4h] [ebp-18h]
  int v50; // [esp+2DCh] [ebp+20h]

  v41 = a1;
  v45 = a4;
  v50 = a7 & 1;
  memset(v30, 0, sizeof(v30));
  v39 = 0;
  v40 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  RegionSize = ThreadWin32Thread;
  if ( a1 )
    v43 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v43 = 0;
  v10 = 0;
  v42 = 0;
  v11 = (const unsigned __int8 **)v45;
  if ( (a3 & 0x8000) != 0 && v45 && v45 >= _MmSystemRangeStart )
  {
    v10 = *v45;
    v42 = *v45;
  }
  v12 = AllocCallbackMessage(1, 52, v10, v48, 1u, 0x200u, v26, v28);
  v45 = (ULONG_PTR *)v12;
  if ( !v12 )
    return 0;
  v13 = KeGetCurrentThread();
  W32GetThreadWin32Thread(v13);
  memset(v31, 0, sizeof(v31));
  if ( v12 != v30 && v12 != v48 )
    PushW32ThreadLock((int)v12, v31, (int)Win32FreePool);
  *((_DWORD *)v12 + 6) = v43;
  *((_DWORD *)v12 + 7) = a2;
  *((_DWORD *)v12 + 8) = a3;
  if ( v42 )
  {
    if ( CaptureCallbackData(v11, v12, *v11, v12 + 44, v27, v29) < 0 )
      goto LABEL_29;
  }
  else
  {
    *((_DWORD *)v12 + 11) = v11;
  }
  *((_DWORD *)v12 + 12) = v50;
  *((_DWORD *)v12 + 9) = a5;
  *((_DWORD *)v12 + 10) = a6;
  v14 = KeGetCurrentThread();
  v15 = W32GetThreadWin32Thread(v14);
  v36 = *(_DWORD *)(v15 + 228);
  *(_DWORD *)(v15 + 228) = &v36;
  v16 = v41;
  v37 = v41;
  if ( v41 )
  {
    HMLockObject(v41);
    v16 = v41;
  }
  ms_exc.registration.TryLevel = 0;
  v17 = *(_DWORD **)(RegionSize + 260);
  v32 = v17[10];
  v33 = v17[11];
  v34 = v17[12];
  v17[11] = v43;
  if ( v16 )
    v18 = *v16;
  else
    v18 = 0;
  v19 = RegionSize;
  *(_DWORD *)(*(_DWORD *)(RegionSize + 260) + 40) = v18;
  if ( v16 )
    v20 = *(_DWORD *)(v16[5] + 140);
  else
    v20 = 0;
  *(_DWORD *)(*(_DWORD *)(v19 + 260) + 48) = v20;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v46);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47);
  EtwTraceBeginCallback(28);
  *((_DWORD *)v12 + 3) = 0;
  RegionSize = KeUserModeCallback(28, v12, *(_DWORD *)v12, &v39, &v40);
  EtwTraceEndCallback(28);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v46);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v21 = (_DWORD *)(*(_DWORD *)(v19 + 260) + 40);
  *v21++ = v32;
  *v21 = v33;
  v21[1] = v34;
  ms_exc.registration.TryLevel = -2;
  if ( (RegionSize & 0x80000000) == 0 && v40 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v22 = (int *)v39;
    if ( v39 + 4 < v39 || v39 + 4 > _MmUserProbeAddress )
      v22 = (int *)_MmUserProbeAddress;
    v23 = *v22;
    v35 = *v22;
    ms_exc.registration.TryLevel = -2;
    goto LABEL_22;
  }
LABEL_29:
  v23 = 0;
LABEL_22:
  if ( v12 != v30 && v12 != v48 )
  {
    v25 = (PVOID *)(v12 + 20);
    if ( *v25 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v25, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v31);
  }
  return v23;
}
