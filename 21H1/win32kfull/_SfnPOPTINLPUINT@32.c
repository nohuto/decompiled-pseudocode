/*
 * XREFs of _SfnPOPTINLPUINT@32 @ 0x191A41
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
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

char *__stdcall SfnPOPTINLPUINT(int *a1, int a2, unsigned int a3, const void *a4, int a5, int a6, int a7, int a8)
{
  char *v8; // ebx
  PKTHREAD CurrentThread; // eax
  ULONG_PTR ThreadWin32Thread; // eax
  int v11; // esi
  int v12; // edi
  char *result; // eax
  PKTHREAD v14; // eax
  PKTHREAD v15; // eax
  int v16; // eax
  int *v17; // ecx
  _DWORD *v18; // eax
  int v19; // edx
  ULONG_PTR v20; // esi
  _DWORD *v21; // edi
  int *v22; // ecx
  int v23; // esi
  PVOID *v24; // ebx
  ULONG *v25; // [esp+0h] [ebp-2BCh]
  void **v26; // [esp+4h] [ebp-2B8h]
  _DWORD v27[12]; // [esp+10h] [ebp-2ACh] BYREF
  _DWORD v28[3]; // [esp+40h] [ebp-27Ch] BYREF
  int v29; // [esp+4Ch] [ebp-270h]
  int v30; // [esp+50h] [ebp-26Ch]
  int v31; // [esp+54h] [ebp-268h]
  int v32; // [esp+64h] [ebp-258h]
  int v33; // [esp+68h] [ebp-254h] BYREF
  int *v34; // [esp+6Ch] [ebp-250h]
  int v35; // [esp+70h] [ebp-24Ch]
  unsigned int v36; // [esp+7Ch] [ebp-240h] BYREF
  int v37; // [esp+80h] [ebp-23Ch] BYREF
  int v38; // [esp+84h] [ebp-238h]
  int *v39; // [esp+88h] [ebp-234h]
  const void *v40; // [esp+8Ch] [ebp-230h]
  ULONG_PTR MaxCount; // [esp+90h] [ebp-22Ch]
  char *v42; // [esp+94h] [ebp-228h]
  ULONG_PTR RegionSize; // [esp+98h] [ebp-224h] BYREF
  char v44; // [esp+9Eh] [ebp-21Eh] BYREF
  char v45; // [esp+9Fh] [ebp-21Dh] BYREF
  char v46[516]; // [esp+A0h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2A4h] [ebp-18h]

  v39 = a1;
  v40 = a4;
  MaxCount = 0;
  memset(v27, 0, sizeof(v27));
  v8 = (char *)v27;
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
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v11 = 0;
  v38 = v11;
  v12 = 0;
  if ( v40 )
  {
    v12 = 1;
    if ( ULongLongToULong(4LL * a3, v25) < 0 )
      goto LABEL_33;
  }
  if ( v12 )
  {
    result = AllocCallbackMessage(v12, 48, MaxCount, v46, 1u, 0x200u, (int)v25, (unsigned int)v26);
    v8 = result;
    v42 = result;
    if ( !result )
      return result;
  }
  else
  {
    v8 = (char *)v27;
    v42 = (char *)v27;
    memset(v27, 0, sizeof(v27));
    v27[0] = 48;
  }
  v14 = KeGetCurrentThread();
  W32GetThreadWin32Thread(v14);
  memset(v28, 0, sizeof(v28));
  if ( v8 != (char *)v27 && v8 != v46 )
    PushW32ThreadLock((int)v8, v28, (int)Win32FreePool);
  *((_DWORD *)v8 + 6) = v11;
  *((_DWORD *)v8 + 7) = a2;
  *((_DWORD *)v8 + 8) = a3;
  if ( v40 )
  {
    if ( CaptureCallbackData(v40, v8, (const unsigned __int8 *)MaxCount, v8 + 36, (unsigned int)v25, v26) < 0 )
      goto LABEL_33;
  }
  else
  {
    *((_DWORD *)v8 + 9) = 0;
  }
  *((_DWORD *)v8 + 10) = a5;
  *((_DWORD *)v8 + 11) = a6;
  v15 = KeGetCurrentThread();
  v16 = W32GetThreadWin32Thread(v15);
  v33 = *(_DWORD *)(v16 + 228);
  *(_DWORD *)(v16 + 228) = &v33;
  v17 = v39;
  v34 = v39;
  if ( v39 )
  {
    HMLockObject(v39);
    v17 = v39;
  }
  ms_exc.registration.TryLevel = 0;
  v18 = *(_DWORD **)(RegionSize + 260);
  v29 = v18[10];
  v30 = v18[11];
  v31 = v18[12];
  v18[11] = v38;
  if ( v17 )
    v19 = *v17;
  else
    v19 = 0;
  v20 = RegionSize;
  *(_DWORD *)(*(_DWORD *)(RegionSize + 260) + 40) = v19;
  if ( v17 )
    v17 = *(int **)(v17[5] + 140);
  *(_DWORD *)(*(_DWORD *)(v20 + 260) + 48) = v17;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v44);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  EtwTraceBeginCallback(36);
  *((_DWORD *)v8 + 3) = 0;
  RegionSize = KeUserModeCallback(36, v8, *(_DWORD *)v8, &v36, &v37);
  EtwTraceEndCallback(36);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v44);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v21 = (_DWORD *)(*(_DWORD *)(v20 + 260) + 40);
  *v21++ = v29;
  *v21 = v30;
  v21[1] = v31;
  ms_exc.registration.TryLevel = -2;
  if ( (RegionSize & 0x80000000) == 0 && v37 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v22 = (int *)v36;
    if ( v36 + 4 < v36 || v36 + 4 > _MmUserProbeAddress )
      v22 = (int *)_MmUserProbeAddress;
    v23 = *v22;
    v32 = *v22;
    ms_exc.registration.TryLevel = -2;
    goto LABEL_34;
  }
LABEL_33:
  v23 = 0;
LABEL_34:
  if ( v8 != (char *)v27 && v8 != v46 )
  {
    v24 = (PVOID *)(v8 + 20);
    if ( *v24 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v24, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v28);
  }
  return (char *)v23;
}
