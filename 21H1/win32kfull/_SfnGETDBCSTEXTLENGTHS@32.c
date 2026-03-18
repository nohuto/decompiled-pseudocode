/*
 * XREFs of _SfnGETDBCSTEXTLENGTHS@32 @ 0x18AAE2
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z @ 0x9E356 (-AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z.c)
 *     ?CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z @ 0xCA80C (-CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int (*__stdcall SfnGETDBCSTEXTLENGTHS(
        unsigned int *a1,
        int a2,
        ULONG_PTR a3,
        int a4,
        int a5,
        int a6,
        char a7,
        int a8))(void)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // edi
  int v11; // ecx
  void *v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  unsigned int *v15; // edx
  int v16; // edi
  ULONG_PTR v17; // ecx
  _DWORD *v18; // edi
  int *v19; // esi
  int v20; // esi
  unsigned int *v21; // edi
  BOOL v22; // ecx
  ULONG_PTR v24; // esi
  int (*v25)(void); // edi
  void *v26; // eax
  char *v27; // esi
  void *v28; // eax
  ULONG_PTR v29; // eax
  unsigned int v30; // edi
  void *v31; // eax
  int v32; // eax
  _DWORD *v33; // eax
  unsigned int *v34; // edx
  int v35; // esi
  char *v36; // eax
  _DWORD *v37; // edi
  int *v38; // ecx
  int v39; // ecx
  int *v40; // esi
  int *v41; // esi
  int v42; // [esp+0h] [ebp-350h]
  unsigned int v43; // [esp+0h] [ebp-350h]
  int v44; // [esp+0h] [ebp-350h]
  unsigned int v45; // [esp+4h] [ebp-34Ch]
  void **v46; // [esp+4h] [ebp-34Ch]
  int v47; // [esp+4h] [ebp-34Ch]
  _BYTE v48[52]; // [esp+10h] [ebp-340h] BYREF
  _DWORD v49[3]; // [esp+44h] [ebp-30Ch] BYREF
  int v50; // [esp+50h] [ebp-300h]
  int v51; // [esp+54h] [ebp-2FCh]
  int v52; // [esp+58h] [ebp-2F8h]
  _DWORD v53[3]; // [esp+5Ch] [ebp-2F4h] BYREF
  int v54; // [esp+6Ch] [ebp-2E4h]
  int v55; // [esp+70h] [ebp-2E0h]
  int v56; // [esp+74h] [ebp-2DCh]
  int v57; // [esp+78h] [ebp-2D8h]
  int v58; // [esp+7Ch] [ebp-2D4h]
  int v59; // [esp+80h] [ebp-2D0h]
  _DWORD v60[5]; // [esp+9Ch] [ebp-2B4h] BYREF
  int v61; // [esp+B0h] [ebp-2A0h] BYREF
  unsigned int *v62; // [esp+B4h] [ebp-29Ch]
  int v63; // [esp+B8h] [ebp-298h]
  _DWORD v64[3]; // [esp+BCh] [ebp-294h] BYREF
  int v65; // [esp+C8h] [ebp-288h]
  int v66; // [esp+DCh] [ebp-274h]
  void (__stdcall *v67)(int); // [esp+E0h] [ebp-270h]
  int v68; // [esp+E4h] [ebp-26Ch]
  void (__stdcall *v69)(int); // [esp+E8h] [ebp-268h]
  void (__stdcall *v70)(unsigned int *); // [esp+ECh] [ebp-264h]
  struct _CALLBACKSTATUS *v71; // [esp+F0h] [ebp-260h]
  int v72; // [esp+F4h] [ebp-25Ch]
  ULONG_PTR v73; // [esp+F8h] [ebp-258h]
  ULONG_PTR v74; // [esp+FCh] [ebp-254h]
  unsigned int v75; // [esp+100h] [ebp-250h] BYREF
  int v76; // [esp+104h] [ebp-24Ch] BYREF
  ULONG_PTR RegionSize; // [esp+108h] [ebp-248h] BYREF
  int (__stdcall *v78)(int, char *, _DWORD, unsigned int *, int *); // [esp+10Ch] [ebp-244h]
  int v79; // [esp+110h] [ebp-240h]
  unsigned int v80; // [esp+114h] [ebp-23Ch]
  int v81; // [esp+118h] [ebp-238h]
  unsigned int *v82; // [esp+11Ch] [ebp-234h]
  int v83; // [esp+120h] [ebp-230h] BYREF
  unsigned int v84; // [esp+124h] [ebp-22Ch] BYREF
  char *v85; // [esp+128h] [ebp-228h]
  int (*v86)(void); // [esp+12Ch] [ebp-224h]
  char v87; // [esp+130h] [ebp-220h] BYREF
  char v88; // [esp+131h] [ebp-21Fh] BYREF
  char v89; // [esp+132h] [ebp-21Eh] BYREF
  char v90; // [esp+133h] [ebp-21Dh] BYREF
  char v91[516]; // [esp+134h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+338h] [ebp-18h]

  v82 = a1;
  v71 = (struct _CALLBACKSTATUS *)(a4 != 0);
  v80 = a7 & 1;
  v75 = 0;
  v76 = 0;
  v64[2] = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v86 = (int (*)(void))KeGetCurrentThread;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v10 = ThreadWin32Thread;
  v83 = ThreadWin32Thread;
  if ( a1 )
  {
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
    v84 = v11;
  }
  else
  {
    v11 = 0;
    v84 = 0;
  }
  if ( !a1 )
    return 0;
  v81 = *(_DWORD *)(a1[5] + 84);
  v60[0] = v11;
  v60[1] = a2;
  v60[2] = a3;
  v66 = a5;
  v60[3] = a5;
  v65 = a6;
  v60[4] = a6;
  v12 = (void *)v86();
  v13 = W32GetThreadWin32Thread(v12);
  v64[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v64;
  v64[1] = a1;
  v70 = (void (__stdcall *)(unsigned int *))HMLockObject;
  HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v14 = *(_DWORD **)(v10 + 260);
  v57 = v14[10];
  v58 = v14[11];
  v59 = v14[12];
  v14[11] = v84;
  v15 = v82;
  v16 = v83;
  *(_DWORD *)(*(_DWORD *)(v83 + 260) + 40) = *v82;
  *(_DWORD *)(*(_DWORD *)(v16 + 260) + 48) = *(_DWORD *)(v15[5] + 140);
  ms_exc.registration.TryLevel = -2;
  v17 = _gdwInAtomicOperation;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
LABEL_7:
    KeBugCheckEx(0x160u, v17, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v89);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v90);
  v69 = (void (__stdcall *)(int))EtwTraceBeginCallback;
  EtwTraceBeginCallback(6);
  v78 = (int (__stdcall *)(int, char *, _DWORD, unsigned int *, int *))KeUserModeCallback;
  v83 = KeUserModeCallback(6, v60, 20, &v75, &v76);
  v67 = (void (__stdcall *)(int))EtwTraceEndCallback;
  EtwTraceEndCallback(6);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v90);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v89);
  RegionSize = (ULONG_PTR)ThreadUnlock1;
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v18 = (_DWORD *)(*(_DWORD *)(v16 + 260) + 40);
  *v18++ = v57;
  *v18 = v58;
  v18[1] = v59;
  ms_exc.registration.TryLevel = -2;
  if ( v83 < 0 || v76 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v19 = (int *)v75;
  if ( v75 + 4 < v75 || v75 + 4 > _MmUserProbeAddress )
    v19 = (int *)_MmUserProbeAddress;
  v20 = *v19;
  v68 = v20;
  ms_exc.registration.TryLevel = -2;
  if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 || v20 <= 0 || v71 == (struct _CALLBACKSTATUS *)v80 )
    return (int (*)(void))v20;
  v21 = v82;
  if ( *(_DWORD *)(v82[5] + 84) != v81 )
    goto LABEL_32;
  v22 = 0;
  if ( a2 != 14 )
  {
    if ( HMValidateHandleNoSecure(*v82, 1) )
    {
      if ( a2 == 394 )
      {
        v22 = (*(_DWORD *)(v21[5] + 20) & 0x40) == 0 && (*(_DWORD *)(v21[5] + 20) & 0x30) != 0;
        goto LABEL_27;
      }
      if ( a2 == 329 )
      {
        if ( (*(_DWORD *)(v21[5] + 20) & 0x30) != 0 && (*(_DWORD *)(v21[5] + 20) & 0x200) == 0 )
        {
          v22 = 1;
LABEL_28:
          v20 = 4;
          v68 = 4;
          goto LABEL_29;
        }
        v22 = 0;
LABEL_27:
        if ( !v22 )
          goto LABEL_30;
        goto LABEL_28;
      }
    }
    return 0;
  }
LABEL_29:
  if ( v22 )
    return (int (*)(void))v20;
LABEL_30:
  if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x4000000) != 0 )
  {
    if ( a4 )
LABEL_32:
      v20 *= 2;
    return (int (*)(void))v20;
  }
  v24 = v20 + 1;
  v74 = v24;
  v73 = v24;
  memset(v48, 0, sizeof(v48));
  v84 = 0;
  v83 = 0;
  v79 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v25 = v86;
  v26 = (void *)v86();
  v81 = W32GetThreadWin32Thread(v26);
  v72 = v82[5] - *(_DWORD *)(v81 + 256);
  *(_DWORD *)(_gptiCurrent + 264) |= 0x4000000u;
  if ( !v80 )
  {
    v24 *= 2;
    v73 = v24;
  }
  v27 = AllocCallbackMessage(1, 52, v24, v91, 0, 0x200u, v42, v45);
  v85 = v27;
  if ( !v27 )
    return 0;
  v28 = (void *)v25();
  W32GetThreadWin32Thread(v28);
  memset(v53, 0, sizeof(v53));
  if ( v27 != v48 && v27 != v91 )
    PushW32ThreadLock((int)v27, v53, (int)Win32FreePool);
  *((_DWORD *)v27 + 6) = v72;
  *((_DWORD *)v27 + 7) = a2 - 1;
  v29 = v74;
  if ( a2 != 14 )
    v29 = a3;
  *((_DWORD *)v27 + 8) = v29;
  *((_DWORD *)v27 + 9) = v66;
  *((_DWORD *)v27 + 10) = v65;
  v30 = v73;
  if ( AllocateCallbackData(v73, (int)v27, (struct _CAPTUREBUF *)(v27 + 44), v43, v46) < 0 )
    goto LABEL_58;
  *((_DWORD *)v27 + 12) = v30;
  v31 = (void *)v86();
  v32 = W32GetThreadWin32Thread(v31);
  v61 = *(_DWORD *)(v32 + 228);
  *(_DWORD *)(v32 + 228) = &v61;
  v62 = v82;
  v70(v82);
  ms_exc.registration.TryLevel = 3;
  v33 = *(_DWORD **)(v81 + 260);
  v54 = v33[10];
  v55 = v33[11];
  v56 = v33[12];
  v33[11] = v72;
  v34 = v82;
  v35 = v81;
  *(_DWORD *)(*(_DWORD *)(v81 + 260) + 40) = *v82;
  *(_DWORD *)(*(_DWORD *)(v35 + 260) + 48) = *(_DWORD *)(v34[5] + 140);
  ms_exc.registration.TryLevel = -2;
  v17 = _gdwInAtomicOperation;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    goto LABEL_7;
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v87);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v88);
  v69(35);
  v36 = v85;
  *((_DWORD *)v85 + 3) = 0;
  v78 = (int (__stdcall *)(int, char *, _DWORD, unsigned int *, int *))v78(35, v36, *(_DWORD *)v36, &v84, &v83);
  v67(35);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v88);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v87);
  ((void (*)(void))RegionSize)();
  ms_exc.registration.TryLevel = 4;
  v37 = (_DWORD *)(*(_DWORD *)(v35 + 260) + 40);
  *v37++ = v54;
  *v37 = v55;
  v37[1] = v56;
  ms_exc.registration.TryLevel = -2;
  if ( (int)v78 < 0 )
    goto LABEL_58;
  if ( v83 == 12 )
  {
    ms_exc.registration.TryLevel = 5;
    v38 = (int *)v84;
    if ( v84 + 4 < v84 || v84 + 4 > _MmUserProbeAddress )
      v38 = (int *)_MmUserProbeAddress;
    v39 = *v38;
    v86 = (int (*)(void))v39;
    v79 = v39;
    ms_exc.registration.TryLevel = -2;
    if ( (!a8 || (*(_BYTE *)(a8 + 44) & 5) == 0) && v39 > 0 )
    {
      ms_exc.registration.TryLevel = 6;
      v40 = (int *)v84;
      if ( v84 + 12 < v84 || v84 + 12 > _MmUserProbeAddress )
        v40 = (int *)_MmUserProbeAddress;
      v50 = *v40;
      v41 = v40 + 1;
      v51 = *v41;
      v52 = v41[1];
      v49[0] = v50;
      v49[1] = v51;
      v49[2] = v52;
      v39 = CalcOutputStringSize(v39, (int)v49, v71, v80, v44, v47);
      v86 = (int (*)(void))v39;
      v79 = v39;
      ms_exc.registration.TryLevel = -2;
    }
    *(_DWORD *)(_gptiCurrent + 264) &= ~0x4000000u;
  }
  else
  {
LABEL_58:
    v39 = 0;
    v86 = 0;
    v79 = 0;
  }
  if ( v85 != v48 && v85 != v91 )
  {
    if ( *((_DWORD *)v85 + 5) )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v85 + 5, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v53);
    return v86;
  }
  return (int (*)(void))v39;
}
