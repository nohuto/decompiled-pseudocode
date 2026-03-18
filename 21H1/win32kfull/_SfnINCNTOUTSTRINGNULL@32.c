/*
 * XREFs of _SfnINCNTOUTSTRINGNULL@32 @ 0x18C3A4
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

char *__stdcall SfnINCNTOUTSTRINGNULL(
        int a1,
        int a2,
        struct _CALLBACKSTATUS *a3,
        struct _CALLBACKSTATUS **a4,
        int a5,
        int a6,
        char a7,
        int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ecx
  int v10; // esi
  char *result; // eax
  int v12; // esi
  PKTHREAD v13; // eax
  ULONG_PTR v14; // edi
  PKTHREAD v15; // eax
  int v16; // eax
  int *v17; // ecx
  _DWORD *v18; // eax
  int v19; // edx
  signed int v20; // esi
  int v21; // ecx
  char *v22; // eax
  _DWORD *v23; // edi
  ULONG *v24; // esi
  ULONG v25; // esi
  unsigned int *v26; // esi
  unsigned int *v27; // esi
  int v28; // eax
  struct _LARGE_STRING *v29; // edi
  unsigned int v30; // [esp+0h] [ebp-2E4h]
  ULONG *v31; // [esp+0h] [ebp-2E4h]
  unsigned int v32; // [esp+0h] [ebp-2E4h]
  int v33; // [esp+0h] [ebp-2E4h]
  unsigned int v34; // [esp+0h] [ebp-2E4h]
  unsigned int *v35; // [esp+4h] [ebp-2E0h]
  unsigned int v36; // [esp+4h] [ebp-2E0h]
  void **v37; // [esp+4h] [ebp-2E0h]
  int v38; // [esp+4h] [ebp-2E0h]
  int v39; // [esp+4h] [ebp-2E0h]
  _BYTE v40[52]; // [esp+10h] [ebp-2D4h] BYREF
  _DWORD v41[3]; // [esp+44h] [ebp-2A0h] BYREF
  unsigned int v42[3]; // [esp+50h] [ebp-294h] BYREF
  unsigned int v43; // [esp+5Ch] [ebp-288h]
  unsigned int v44; // [esp+60h] [ebp-284h]
  unsigned int v45; // [esp+64h] [ebp-280h]
  int v46; // [esp+68h] [ebp-27Ch]
  int v47; // [esp+6Ch] [ebp-278h]
  int v48; // [esp+70h] [ebp-274h]
  int v49; // [esp+84h] [ebp-260h] BYREF
  int v50; // [esp+88h] [ebp-25Ch]
  int v51; // [esp+8Ch] [ebp-258h]
  int v52; // [esp+98h] [ebp-24Ch] BYREF
  ULONG v53; // [esp+9Ch] [ebp-248h]
  unsigned int v54; // [esp+A0h] [ebp-244h] BYREF
  int v55; // [esp+A4h] [ebp-240h]
  int v56; // [esp+A8h] [ebp-23Ch]
  ULONG_PTR RegionSize[2]; // [esp+ACh] [ebp-238h] BYREF
  struct _CALLBACKSTATUS **v58; // [esp+B4h] [ebp-230h]
  ULONG_PTR v59; // [esp+B8h] [ebp-22Ch] BYREF
  signed int v60; // [esp+BCh] [ebp-228h]
  char *v61; // [esp+C0h] [ebp-224h]
  char v62; // [esp+C6h] [ebp-21Eh] BYREF
  char v63; // [esp+C7h] [ebp-21Dh] BYREF
  char v64[516]; // [esp+C8h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2CCh] [ebp-18h]

  v56 = a1;
  v58 = a4;
  v59 = 0;
  RegionSize[0] = a7 & 1;
  memset(v40, 0, sizeof(v40));
  v61 = v40;
  v54 = 0;
  v52 = 0;
  v53 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v60 = ThreadWin32Thread;
  if ( v56 )
    v55 = *(_DWORD *)(v56 + 20) - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v55 = 0;
  v10 = (int)v58[1];
  if ( (ULongAdd(2, v10 & 0x7FFFFFFF, (int *)&v59, v30, v35) & 0x80000000) != 0
    || v10 < 0 && !RegionSize[0] && ULongLongToULong(2LL * v59, v31) < 0 )
  {
    goto LABEL_43;
  }
  result = AllocCallbackMessage(1, 52, v59, v64, 0, 0x200u, (int)v31, v36);
  v12 = (int)result;
  v61 = result;
  RegionSize[1] = (ULONG_PTR)result;
  if ( !result )
    return result;
  v13 = KeGetCurrentThread();
  W32GetThreadWin32Thread(v13);
  memset(v41, 0, sizeof(v41));
  if ( (_BYTE *)v12 != v40 && (char *)v12 != v64 )
    PushW32ThreadLock(v12, v41, (int)Win32FreePool);
  if ( (unsigned int)a3 < 2 )
    goto LABEL_43;
  *(_DWORD *)(v12 + 24) = v55;
  *(_DWORD *)(v12 + 28) = a2;
  *(_DWORD *)(v12 + 32) = a3;
  *(_DWORD *)(v12 + 36) = a5;
  *(_DWORD *)(v12 + 40) = a6;
  v14 = v59;
  if ( AllocateCallbackData(v59, v12, (struct _CAPTUREBUF *)(v12 + 44), v32, v37) < 0 )
    goto LABEL_43;
  *(_DWORD *)(v12 + 48) = v14;
  v15 = KeGetCurrentThread();
  v16 = W32GetThreadWin32Thread(v15);
  v49 = *(_DWORD *)(v16 + 228);
  *(_DWORD *)(v16 + 228) = &v49;
  v17 = (int *)v56;
  v50 = v56;
  if ( v56 )
  {
    HMLockObject(v56);
    v17 = (int *)v56;
  }
  ms_exc.registration.TryLevel = 0;
  v18 = *(_DWORD **)(v60 + 260);
  v46 = v18[10];
  v47 = v18[11];
  v48 = v18[12];
  v18[11] = v55;
  v19 = 0;
  if ( v17 )
    v19 = *v17;
  v20 = v60;
  *(_DWORD *)(*(_DWORD *)(v60 + 260) + 40) = v19;
  if ( v17 )
    v21 = *(_DWORD *)(v17[5] + 140);
  else
    v21 = 0;
  *(_DWORD *)(*(_DWORD *)(v20 + 260) + 48) = v21;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v62);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v63);
  EtwTraceBeginCallback(8);
  v22 = v61;
  *((_DWORD *)v61 + 3) = 0;
  v60 = KeUserModeCallback(8, v22, *(_DWORD *)v22, &v54, &v52);
  EtwTraceEndCallback(8);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v63);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v62);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v23 = (_DWORD *)(*(_DWORD *)(v20 + 260) + 40);
  *v23++ = v46;
  *v23 = v47;
  v23[1] = v48;
  ms_exc.registration.TryLevel = -2;
  if ( v60 < 0 || v52 != 12 )
    goto LABEL_43;
  ms_exc.registration.TryLevel = 2;
  v24 = (ULONG *)v54;
  if ( v54 + 4 < v54 || v54 + 4 > _MmUserProbeAddress )
    v24 = (ULONG *)_MmUserProbeAddress;
  v25 = *v24;
  v60 = v25;
  v53 = v25;
  ms_exc.registration.TryLevel = -2;
  if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_44;
  ms_exc.registration.TryLevel = 3;
  v26 = (unsigned int *)v54;
  if ( v54 + 12 < v54 || v54 + 12 > _MmUserProbeAddress )
    v26 = (unsigned int *)_MmUserProbeAddress;
  v43 = *v26;
  v27 = v26 + 1;
  v44 = *v27;
  v45 = v27[1];
  v42[0] = v43;
  v42[1] = v44;
  v42[2] = v45;
  if ( !v44 )
  {
    v25 = v60;
    goto LABEL_42;
  }
  v28 = *(_DWORD *)(_gptiCurrent + 276);
  if ( !v28 || (*(_BYTE *)(v28 + 44) & 1) == 0 || *(struct _CALLBACKSTATUS ***)(v28 + 52) != v58 )
  {
    v29 = (struct _LARGE_STRING *)RegionSize[0];
    v25 = CalcOutputStringSize(
            v60,
            (int)v42,
            (struct _CALLBACKSTATUS *)((unsigned int)v58[1] >> 31),
            RegionSize[0],
            v33,
            v38);
    v53 = v25;
    CopyOutputString(v58, v42, a3, v29, v34, v39);
LABEL_42:
    ms_exc.registration.TryLevel = -2;
    goto LABEL_44;
  }
  ms_exc.registration.TryLevel = -2;
LABEL_43:
  v25 = 0;
  v53 = 0;
LABEL_44:
  if ( v61 != v40 && v61 != v64 )
  {
    if ( *((_DWORD *)v61 + 5) )
    {
      RegionSize[0] = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v61 + 5, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v41);
  }
  return (char *)v25;
}
