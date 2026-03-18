/*
 * XREFs of _SfnPOWERBROADCAST@32 @ 0xA4C38
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
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
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall SfnPOWERBROADCAST(unsigned int *a1, int a2, unsigned int a3, _DWORD *a4, int a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ecx
  unsigned int v10; // ecx
  int v11; // ebx
  char *v12; // ebx
  PKTHREAD v13; // eax
  PKTHREAD v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  ULONG_PTR v17; // ecx
  int v18; // edx
  int v19; // esi
  int v20; // ecx
  _DWORD *v21; // edi
  int *v22; // ecx
  int v23; // esi
  int v25; // ecx
  PVOID *v26; // ebx
  unsigned __int16 v27; // [esp-8h] [ebp-2C4h]
  unsigned int v28; // [esp+0h] [ebp-2BCh]
  unsigned int *v29; // [esp+4h] [ebp-2B8h]
  _DWORD v30[12]; // [esp+10h] [ebp-2ACh] BYREF
  _DWORD v31[3]; // [esp+40h] [ebp-27Ch] BYREF
  int v32; // [esp+4Ch] [ebp-270h]
  int v33; // [esp+50h] [ebp-26Ch]
  int v34; // [esp+54h] [ebp-268h]
  int v35; // [esp+64h] [ebp-258h]
  int v36; // [esp+68h] [ebp-254h] BYREF
  unsigned int *v37; // [esp+6Ch] [ebp-250h]
  int v38; // [esp+70h] [ebp-24Ch]
  unsigned int v39; // [esp+7Ch] [ebp-240h] BYREF
  int v40; // [esp+80h] [ebp-23Ch] BYREF
  int v41; // [esp+84h] [ebp-238h]
  int v42; // [esp+88h] [ebp-234h]
  _DWORD *v43; // [esp+8Ch] [ebp-230h]
  ULONG_PTR MaxCount; // [esp+90h] [ebp-22Ch] BYREF
  ULONG_PTR RegionSize; // [esp+94h] [ebp-228h] BYREF
  _DWORD *v46; // [esp+98h] [ebp-224h]
  char v47; // [esp+9Eh] [ebp-21Eh] BYREF
  char v48; // [esp+9Fh] [ebp-21Dh] BYREF
  char v49[516]; // [esp+A0h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2A4h] [ebp-18h]

  RegionSize = (ULONG_PTR)a1;
  v43 = a4;
  v46 = (_DWORD *)(a3 & 0x8000);
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
  v41 = ThreadWin32Thread;
  if ( a1 )
    v42 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v42 = 0;
  if ( a1 )
    v10 = *a1;
  else
    v10 = 0;
  if ( !HMValidateHandleNoSecure(v10, 1) )
    return 0;
  switch ( a3 )
  {
    case 0u:
      v27 = 769;
      goto LABEL_46;
    case 4u:
      SetOrClrWF(0, (int)a1, 0x301u, 1);
      v27 = 770;
LABEL_46:
      v25 = 1;
      goto LABEL_43;
    case 2u:
      if ( (*(_BYTE *)(a1[5] + 11) & 1) == 0 )
        return 0;
      v27 = 769;
      goto LABEL_42;
  }
  if ( a3 <= 5 )
    goto LABEL_44;
  if ( a3 <= 7 )
  {
    SetOrClrWF(0, (int)a1, 0x301u, 1);
    v27 = 770;
LABEL_42:
    v25 = 0;
LABEL_43:
    SetOrClrWF(v25, (int)a1, v27, 1);
    goto LABEL_44;
  }
  if ( a3 == 32787 )
  {
    v11 = 1;
    goto LABEL_13;
  }
LABEL_44:
  v11 = 0;
LABEL_13:
  MaxCount = 0;
  if ( v46
    && v43
    && v43 >= _MmSystemRangeStart
    && (ULongAdd(v43[4], 0x14u, (int *)&MaxCount, v28, v29) & 0x80000000) != 0 )
  {
    return 0;
  }
  if ( !v11 )
  {
    v12 = (char *)v30;
    v46 = v30;
    v30[0] = 48;
    goto LABEL_19;
  }
  v12 = AllocCallbackMessage(v11, 48, MaxCount, v49, 1u, 0x200u, v28, (unsigned int)v29);
  v46 = v12;
  if ( !v12 )
    return 0;
LABEL_19:
  v13 = KeGetCurrentThread();
  W32GetThreadWin32Thread(v13);
  memset(v31, 0, sizeof(v31));
  if ( v12 != (char *)v30 && v12 != v49 )
    PushW32ThreadLock((int)v12, v31, (int)Win32FreePool);
  *((_DWORD *)v12 + 6) = v42;
  *((_DWORD *)v12 + 7) = a2;
  *((_DWORD *)v12 + 8) = a3;
  if ( MaxCount )
  {
    if ( CaptureCallbackData(v43, v12, (const unsigned __int8 *)MaxCount, v12 + 44, v28, (void **)v29) < 0 )
      goto LABEL_58;
  }
  else
  {
    *((_DWORD *)v12 + 11) = v43;
  }
  *((_DWORD *)v12 + 9) = a5;
  *((_DWORD *)v12 + 10) = a6;
  v14 = KeGetCurrentThread();
  v15 = W32GetThreadWin32Thread(v14);
  v36 = *(_DWORD *)(v15 + 228);
  *(_DWORD *)(v15 + 228) = &v36;
  v37 = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v16 = *(_DWORD **)(v41 + 260);
  v32 = v16[10];
  v33 = v16[11];
  v34 = v16[12];
  v16[11] = v42;
  v17 = RegionSize;
  if ( RegionSize )
    v18 = *(_DWORD *)RegionSize;
  else
    v18 = 0;
  v19 = v41;
  *(_DWORD *)(*(_DWORD *)(v41 + 260) + 40) = v18;
  if ( v17 )
    v20 = *(_DWORD *)(*(_DWORD *)(v17 + 20) + 140);
  else
    v20 = 0;
  *(_DWORD *)(*(_DWORD *)(v19 + 260) + 48) = v20;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v47);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  EtwTraceBeginCallback(29);
  *((_DWORD *)v12 + 3) = 0;
  RegionSize = KeUserModeCallback(29, v12, *(_DWORD *)v12, &v39, &v40);
  EtwTraceEndCallback(29);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v47);
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
    goto LABEL_36;
  }
LABEL_58:
  v23 = 0;
LABEL_36:
  if ( v12 != (char *)v30 && v12 != v49 )
  {
    v26 = (PVOID *)(v12 + 20);
    if ( *v26 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v26, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v31);
  }
  return v23;
}
