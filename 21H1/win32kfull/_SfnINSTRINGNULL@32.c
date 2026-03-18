/*
 * XREFs of _SfnINSTRINGNULL@32 @ 0xA436C
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     ?_SfnINBOXSTRING@@YGJJPAUtagWND@@IIJKP6GHXZKPAUtagSMS@@@Z @ 0x19FF69 (-_SfnINBOXSTRING@@YGJJPAUtagWND@@IIJKP6GHXZKPAUtagSMS@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940 (-CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?CaptureUnicodeCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0xC466E (-CaptureUnicodeCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0xC8EC4 (-CaptureAnsiCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall SfnINSTRINGNULL(int *a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  char *v8; // ebx
  PKTHREAD CurrentThread; // eax
  ULONG_PTR ThreadWin32Thread; // ecx
  int v11; // edi
  PKTHREAD v12; // eax
  unsigned int v13; // eax
  const unsigned __int8 *v14; // eax
  int v15; // eax
  PKTHREAD v16; // eax
  int v17; // eax
  int *v18; // ecx
  _DWORD *v19; // eax
  int v20; // edx
  ULONG_PTR v21; // esi
  int v22; // ecx
  _DWORD *v23; // edi
  int *v24; // ecx
  int v25; // esi
  int v27; // eax
  PVOID *v28; // ebx
  void *v29; // [esp-4h] [ebp-2C4h]
  ULONG *v30; // [esp+0h] [ebp-2C0h]
  unsigned int *v31; // [esp+4h] [ebp-2BCh]
  _DWORD v32[12]; // [esp+10h] [ebp-2B0h] BYREF
  _DWORD v33[3]; // [esp+40h] [ebp-280h] BYREF
  int v34; // [esp+4Ch] [ebp-274h]
  int v35; // [esp+50h] [ebp-270h]
  int v36; // [esp+54h] [ebp-26Ch]
  int v37; // [esp+64h] [ebp-25Ch]
  int v38; // [esp+68h] [ebp-258h] BYREF
  int *v39; // [esp+6Ch] [ebp-254h]
  int v40; // [esp+70h] [ebp-250h]
  unsigned int v41; // [esp+7Ch] [ebp-244h] BYREF
  int v42; // [esp+80h] [ebp-240h] BYREF
  int v43; // [esp+84h] [ebp-23Ch]
  int v44; // [esp+88h] [ebp-238h]
  int *v45; // [esp+8Ch] [ebp-234h]
  char *v46; // [esp+90h] [ebp-230h]
  ULONG_PTR v47; // [esp+94h] [ebp-22Ch] BYREF
  ULONG_PTR RegionSize; // [esp+98h] [ebp-228h] BYREF
  char v49; // [esp+9Eh] [ebp-222h] BYREF
  char v50; // [esp+9Fh] [ebp-221h] BYREF
  char v51[520]; // [esp+A0h] [ebp-220h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2A8h] [ebp-18h]
  int v53; // [esp+2E0h] [ebp+20h]

  v45 = a1;
  v53 = a7 & 1;
  memset(v32, 0, sizeof(v32));
  v8 = (char *)v32;
  v41 = 0;
  v42 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  RegionSize = ThreadWin32Thread;
  if ( v45 )
    v44 = v45[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v44 = 0;
  v11 = 0;
  v43 = 0;
  v47 = 0;
  if ( a4 && (*(_DWORD *)(a4 + 8) >= (unsigned int)_MmSystemRangeStart || *(_DWORD *)(a4 + 4) >> 31 != v53) )
  {
    v11 = 1;
    v43 = 1;
    if ( (ULongAdd(2, *(_DWORD *)a4, (int *)&v47, (unsigned int)v30, v31) & 0x80000000) != 0
      || *(int *)(a4 + 4) < 0 && !v53 && ULongLongToULong(2LL * v47, v30) < 0 )
    {
      goto LABEL_41;
    }
  }
  if ( v11 )
  {
    v8 = AllocCallbackMessage(v11, 48, v47, v51, 1u, 0x200u, (int)v30, (unsigned int)v31);
    v46 = v8;
    if ( !v8 )
      return 0;
  }
  else
  {
    v8 = (char *)v32;
    v46 = (char *)v32;
    memset(v32, 0, sizeof(v32));
    v32[0] = 48;
  }
  v12 = KeGetCurrentThread();
  W32GetThreadWin32Thread(v12);
  memset(v33, 0, sizeof(v33));
  if ( v8 != (char *)v32 && v8 != v51 )
    PushW32ThreadLock((int)v8, v33, (int)Win32FreePool);
  *((_DWORD *)v8 + 6) = v44;
  *((_DWORD *)v8 + 7) = a2;
  *((_DWORD *)v8 + 8) = a3;
  if ( v43 )
  {
    v13 = *(_DWORD *)a4;
    v29 = v8 + 44;
    if ( *(int *)(a4 + 4) < 0 )
    {
      if ( v53 )
      {
        v14 = (const unsigned __int8 *)(v13 + 1);
        goto LABEL_16;
      }
      v15 = CaptureUnicodeCallbackData(2 * v13 + 2, v29, (unsigned int)v30, (void **)v31);
    }
    else
    {
      if ( !v53 )
      {
        v14 = (const unsigned __int8 *)(v13 + 2);
LABEL_16:
        v15 = CaptureCallbackData(*(const void **)(a4 + 8), v8, v14, (char *)v29, (unsigned int)v30, (void **)v31);
        goto LABEL_17;
      }
      v15 = CaptureAnsiCallbackData((v13 >> 1) + 1, v29, (unsigned int)v30, (void **)v31);
    }
LABEL_17:
    if ( v15 < 0 )
      goto LABEL_41;
    goto LABEL_18;
  }
  if ( a4 )
    v27 = *(_DWORD *)(a4 + 8);
  else
    v27 = 0;
  *((_DWORD *)v8 + 11) = v27;
LABEL_18:
  *((_DWORD *)v8 + 9) = a5;
  *((_DWORD *)v8 + 10) = a6;
  v16 = KeGetCurrentThread();
  v17 = W32GetThreadWin32Thread(v16);
  v38 = *(_DWORD *)(v17 + 228);
  *(_DWORD *)(v17 + 228) = &v38;
  v18 = v45;
  v39 = v45;
  if ( v45 )
  {
    HMLockObject(v45);
    v18 = v45;
  }
  ms_exc.registration.TryLevel = 0;
  v19 = *(_DWORD **)(RegionSize + 260);
  v34 = v19[10];
  v35 = v19[11];
  v36 = v19[12];
  v19[11] = v44;
  if ( v18 )
    v20 = *v18;
  else
    v20 = 0;
  v21 = RegionSize;
  *(_DWORD *)(*(_DWORD *)(RegionSize + 260) + 40) = v20;
  if ( v18 )
    v22 = *(_DWORD *)(v18[5] + 140);
  else
    v22 = 0;
  *(_DWORD *)(*(_DWORD *)(v21 + 260) + 48) = v22;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v49);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  EtwTraceBeginCallback(27);
  *((_DWORD *)v8 + 3) = 0;
  RegionSize = KeUserModeCallback(27, v8, *(_DWORD *)v8, &v41, &v42);
  EtwTraceEndCallback(27);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v49);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v23 = (_DWORD *)(*(_DWORD *)(v21 + 260) + 40);
  *v23++ = v34;
  *v23 = v35;
  v23[1] = v36;
  ms_exc.registration.TryLevel = -2;
  if ( (RegionSize & 0x80000000) == 0 && v42 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v24 = (int *)v41;
    if ( v41 + 4 < v41 || v41 + 4 > _MmUserProbeAddress )
      v24 = (int *)_MmUserProbeAddress;
    v25 = *v24;
    v37 = *v24;
    ms_exc.registration.TryLevel = -2;
    goto LABEL_30;
  }
LABEL_41:
  v25 = 0;
LABEL_30:
  if ( v8 != (char *)v32 && v8 != v51 )
  {
    v28 = (PVOID *)(v8 + 20);
    if ( *v28 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v28, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v33);
  }
  return v25;
}
