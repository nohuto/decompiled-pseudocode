/*
 * XREFs of _SfnOUTSTRING@32 @ 0x9DE4E
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
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z @ 0x9E356 (-AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z.c)
 *     ?CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z @ 0xC8FDE (-CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z @ 0xCA80C (-CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

ULONG_PTR __stdcall SfnOUTSTRING(int a1, int a2, struct _CALLBACKSTATUS *a3, int a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  ULONG_PTR ThreadWin32Thread; // ecx
  int v10; // esi
  char *v11; // esi
  PKTHREAD v12; // eax
  ULONG_PTR v13; // edi
  PKTHREAD v14; // eax
  int v15; // eax
  int *v16; // ecx
  _DWORD *v17; // eax
  int v18; // edx
  ULONG_PTR v19; // esi
  int v20; // ecx
  char *v21; // eax
  _DWORD *v22; // edi
  ULONG_PTR *v23; // esi
  ULONG_PTR v24; // esi
  _BYTE *v25; // eax
  int *v27; // esi
  int *v28; // esi
  int v29; // eax
  struct _LARGE_STRING *v30; // edi
  unsigned int v31; // [esp+0h] [ebp-2F8h]
  ULONG *v32; // [esp+0h] [ebp-2F8h]
  unsigned int v33; // [esp+0h] [ebp-2F8h]
  int v34; // [esp+0h] [ebp-2F8h]
  unsigned int v35; // [esp+0h] [ebp-2F8h]
  unsigned int *v36; // [esp+4h] [ebp-2F4h]
  unsigned int v37; // [esp+4h] [ebp-2F4h]
  void **v38; // [esp+4h] [ebp-2F4h]
  int v39; // [esp+4h] [ebp-2F4h]
  int v40; // [esp+4h] [ebp-2F4h]
  _BYTE v41[52]; // [esp+10h] [ebp-2E8h] BYREF
  int v42; // [esp+44h] [ebp-2B4h]
  int v43; // [esp+48h] [ebp-2B0h]
  int v44; // [esp+4Ch] [ebp-2ACh]
  _DWORD v45[6]; // [esp+54h] [ebp-2A4h] BYREF
  int v46; // [esp+6Ch] [ebp-28Ch]
  int v47; // [esp+70h] [ebp-288h]
  int v48; // [esp+74h] [ebp-284h]
  int v49; // [esp+8Ch] [ebp-26Ch] BYREF
  int v50; // [esp+90h] [ebp-268h]
  int v51; // [esp+94h] [ebp-264h]
  int v52; // [esp+A0h] [ebp-258h]
  int v53; // [esp+A4h] [ebp-254h] BYREF
  ULONG_PTR v54; // [esp+A8h] [ebp-250h]
  struct _LARGE_STRING *v55; // [esp+ACh] [ebp-24Ch]
  unsigned int v56; // [esp+B0h] [ebp-248h] BYREF
  int v57; // [esp+B4h] [ebp-244h]
  int v58; // [esp+B8h] [ebp-240h]
  char *v59; // [esp+BCh] [ebp-23Ch]
  ULONG_PTR v60; // [esp+C0h] [ebp-238h] BYREF
  int v61; // [esp+C4h] [ebp-234h]
  char v62; // [esp+CAh] [ebp-22Eh] BYREF
  char v63; // [esp+CBh] [ebp-22Dh] BYREF
  ULONG_PTR RegionSize; // [esp+CCh] [ebp-22Ch] BYREF
  char *v65; // [esp+D0h] [ebp-228h]
  char v66[524]; // [esp+D4h] [ebp-224h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2E0h] [ebp-18h]

  v58 = a1;
  v61 = a4;
  v60 = 0;
  v55 = (struct _LARGE_STRING *)(a7 & 1);
  v52 = 0;
  memset(v41, 0, sizeof(v41));
  v65 = v41;
  v56 = 0;
  v53 = 0;
  v54 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  RegionSize = ThreadWin32Thread;
  if ( v58 )
    v57 = *(_DWORD *)(v58 + 20) - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v57 = 0;
  v10 = *(_DWORD *)(v61 + 4);
  if ( (ULongAdd(2, v10 & 0x7FFFFFFF, (int *)&v60, v31, v36) & 0x80000000) != 0
    || (*(_DWORD *)(_gptiCurrent + 264) & 0x8000000) == 0 && v10 < 0 && !v55 && ULongLongToULong(2LL * v60, v32) < 0 )
  {
    goto LABEL_64;
  }
  v11 = AllocCallbackMessage(1, 52, v60, v66, 0, 0x200u, (int)v32, v37);
  v65 = v11;
  v59 = v11;
  if ( !v11 )
    return 0;
  v12 = KeGetCurrentThread();
  W32GetThreadWin32Thread(v12);
  memset(v45, 0, 12);
  if ( v11 != v41 && v11 != v66 )
    PushW32ThreadLock((int)v11, v45, (int)Win32FreePool);
  *((_DWORD *)v11 + 6) = v57;
  *((_DWORD *)v11 + 7) = a2;
  if ( !v55 )
  {
    if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x8000000) != 0 )
    {
      *((_DWORD *)v11 + 8) = (unsigned int)a3 >> 1;
      *(_DWORD *)(_gptiCurrent + 264) &= ~0x8000000u;
      goto LABEL_13;
    }
    goto LABEL_41;
  }
  if ( *(int *)(v61 + 4) < 0 )
  {
LABEL_41:
    *((_DWORD *)v11 + 8) = a3;
    goto LABEL_13;
  }
  *((_DWORD *)v11 + 8) = 2 * (_DWORD)a3;
  *(_DWORD *)(_gptiCurrent + 264) |= 0x8000000u;
  v52 = 1;
LABEL_13:
  *((_DWORD *)v11 + 9) = a5;
  *((_DWORD *)v11 + 10) = a6;
  v13 = v60;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)(v11 + 44), v33, v38) >= 0 )
  {
    *((_DWORD *)v11 + 12) = v13;
    v14 = KeGetCurrentThread();
    v15 = W32GetThreadWin32Thread(v14);
    v49 = *(_DWORD *)(v15 + 228);
    *(_DWORD *)(v15 + 228) = &v49;
    v16 = (int *)v58;
    v50 = v58;
    if ( v58 )
    {
      HMLockObject(v58);
      v16 = (int *)v58;
    }
    ms_exc.registration.TryLevel = 0;
    v17 = *(_DWORD **)(RegionSize + 260);
    v46 = v17[10];
    v47 = v17[11];
    v48 = v17[12];
    v17[11] = v57;
    v18 = 0;
    if ( v16 )
      v18 = *v16;
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
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v62);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v63);
    EtwTraceBeginCallback(35);
    v21 = v65;
    *((_DWORD *)v65 + 3) = 0;
    RegionSize = KeUserModeCallback(35, v21, *(_DWORD *)v21, &v56, &v53);
    EtwTraceEndCallback(35);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v63);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v62);
    ThreadUnlock1();
    ms_exc.registration.TryLevel = 1;
    v22 = (_DWORD *)(*(_DWORD *)(v19 + 260) + 40);
    *v22++ = v46;
    *v22 = v47;
    v22[1] = v48;
    ms_exc.registration.TryLevel = -2;
    if ( (RegionSize & 0x80000000) == 0 && v53 == 12 )
    {
      ms_exc.registration.TryLevel = 2;
      v23 = (ULONG_PTR *)v56;
      if ( v56 + 4 < v56 || v56 + 4 > _MmUserProbeAddress )
        v23 = (ULONG_PTR *)_MmUserProbeAddress;
      v24 = *v23;
      RegionSize = v24;
      v54 = v24;
      ms_exc.registration.TryLevel = -2;
      if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
        goto LABEL_32;
      if ( !v24 )
      {
        if ( a3 )
        {
          ms_exc.registration.TryLevel = 4;
          v25 = *(_BYTE **)(v61 + 8);
          if ( *(int *)(v61 + 4) < 0 )
            *v25 = 0;
          else
            *(_WORD *)v25 = 0;
          ms_exc.registration.TryLevel = -2;
        }
        goto LABEL_32;
      }
      ms_exc.registration.TryLevel = 3;
      v27 = (int *)v56;
      if ( v56 + 12 < v56 || v56 + 12 > _MmUserProbeAddress )
        v27 = (int *)_MmUserProbeAddress;
      v42 = *v27;
      v28 = v27 + 1;
      v43 = *v28;
      v44 = v28[1];
      v45[3] = v42;
      v45[4] = v43;
      v45[5] = v44;
      v29 = *(_DWORD *)(_gptiCurrent + 276);
      if ( !v29 || (*(_BYTE *)(v29 + 44) & 1) == 0 || *(_DWORD *)(v29 + 52) != v61 )
      {
        v30 = v55;
        v24 = CalcOutputStringSize((struct _CALLBACKSTATUS *)(*(_DWORD *)(v61 + 4) >> 31), (unsigned int)v55, v34, v39);
        v54 = v24;
        CopyOutputString(a3, v30, v35, v40);
        ms_exc.registration.TryLevel = -2;
        goto LABEL_32;
      }
      ms_exc.registration.TryLevel = -2;
    }
  }
LABEL_64:
  v24 = 0;
  v54 = 0;
LABEL_32:
  if ( v65 != v41 && v65 != v66 )
  {
    if ( *((_DWORD *)v65 + 5) )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v65 + 5, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v45);
  }
  if ( v52 )
    *(_DWORD *)(_gptiCurrent + 264) &= ~0x8000000u;
  return v24;
}
