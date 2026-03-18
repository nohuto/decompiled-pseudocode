/*
 * XREFs of _SfnINLPMDICREATESTRUCT@32 @ 0x18DE71
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

char *__stdcall SfnINLPMDICREATESTRUCT(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, char a7, int a8)
{
  char *v8; // ebx
  PKTHREAD CurrentThread; // eax
  ULONG_PTR ThreadWin32Thread; // ecx
  unsigned int v11; // ecx
  int v12; // edi
  char *result; // eax
  PKTHREAD v14; // eax
  _DWORD *v15; // esi
  unsigned int v16; // eax
  const CHAR *v17; // edx
  int v18; // eax
  const unsigned __int8 *v19; // eax
  unsigned int v20; // eax
  const CHAR *v21; // edx
  int v22; // eax
  const unsigned __int8 *v23; // eax
  PKTHREAD v24; // eax
  int v25; // eax
  int *v26; // edx
  _DWORD *v27; // eax
  int v28; // esi
  ULONG_PTR v29; // edi
  int v30; // edx
  _DWORD *v31; // edi
  int *v32; // ecx
  int v33; // esi
  PVOID *v34; // ebx
  char *v35; // [esp-4h] [ebp-2F0h]
  char *v36; // [esp-4h] [ebp-2F0h]
  ULONG *v37; // [esp+0h] [ebp-2ECh]
  unsigned int v38; // [esp+0h] [ebp-2ECh]
  unsigned int *v39; // [esp+4h] [ebp-2E8h]
  void **v40; // [esp+4h] [ebp-2E8h]
  _DWORD v41[22]; // [esp+10h] [ebp-2DCh] BYREF
  _DWORD v42[3]; // [esp+68h] [ebp-284h] BYREF
  int v43; // [esp+74h] [ebp-278h]
  int v44; // [esp+78h] [ebp-274h]
  int v45; // [esp+7Ch] [ebp-270h]
  int v46; // [esp+8Ch] [ebp-260h]
  int v47; // [esp+90h] [ebp-25Ch] BYREF
  int *v48; // [esp+94h] [ebp-258h]
  int v49; // [esp+98h] [ebp-254h]
  unsigned int v50; // [esp+A4h] [ebp-248h] BYREF
  int v51; // [esp+A8h] [ebp-244h] BYREF
  _DWORD *v52; // [esp+ACh] [ebp-240h]
  ULONG_PTR v53; // [esp+B0h] [ebp-23Ch] BYREF
  int v54; // [esp+B4h] [ebp-238h]
  int *v55; // [esp+B8h] [ebp-234h]
  unsigned int v56; // [esp+BCh] [ebp-230h] BYREF
  unsigned int v57; // [esp+C0h] [ebp-22Ch] BYREF
  ULONG_PTR RegionSize; // [esp+C4h] [ebp-228h] BYREF
  char v59; // [esp+CAh] [ebp-222h] BYREF
  char v60; // [esp+CBh] [ebp-221h] BYREF
  int v61; // [esp+CCh] [ebp-220h]
  char v62[516]; // [esp+D0h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2D4h] [ebp-18h]
  int v64; // [esp+30Ch] [ebp+20h]

  v55 = a1;
  v52 = a4;
  v57 = 0;
  v56 = 0;
  v61 = 0;
  v53 = 0;
  v64 = a7 & 1;
  memset(v41, 0, sizeof(v41));
  v8 = (char *)v41;
  v50 = 0;
  v51 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  RegionSize = ThreadWin32Thread;
  if ( v55 )
    v54 = v55[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v54 = 0;
  v11 = a4[1];
  if ( v11 && (v11 >= (unsigned int)_MmSystemRangeStart || a4[10] >> 31 != v64) )
  {
    if ( (ULongAdd(2, a4[9], (int *)&v57, (unsigned int)v37, v39) & 0x80000000) != 0
      || (int)a4[10] < 0 && !v64 && ULongLongToULong(2LL * v57, v37) < 0 )
    {
      goto LABEL_65;
    }
    v61 = 1;
  }
  if ( (*a4 & 0xFFFF0000) == 0 || *a4 < (unsigned int)_MmSystemRangeStart && a4[13] >> 31 == v64 )
  {
    v12 = v61;
  }
  else
  {
    if ( (ULongAdd(2, a4[12], (int *)&v56, (unsigned int)v37, v39) & 0x80000000) != 0
      || (int)a4[13] < 0 && !v64 && ULongLongToULong(2LL * v56, v37) < 0 )
    {
      goto LABEL_65;
    }
    v12 = v61 + 1;
  }
  if ( (ULongAdd(v56, v57, (int *)&v53, (unsigned int)v37, v39) & 0x80000000) == 0 )
  {
    if ( v12 )
    {
      result = AllocCallbackMessage(v12, 88, v53, v62, 1u, 0x200u, v38, (unsigned int)v40);
      v8 = result;
      v61 = (int)result;
      if ( !result )
        return result;
    }
    else
    {
      v8 = (char *)v41;
      v61 = (int)v41;
      memset(&v41[1], 0, 0x54u);
      v41[0] = 88;
    }
    v14 = KeGetCurrentThread();
    W32GetThreadWin32Thread(v14);
    memset(v42, 0, sizeof(v42));
    if ( v8 != (char *)v41 && v8 != v62 )
      PushW32ThreadLock((int)v8, v42, (int)Win32FreePool);
    *((_DWORD *)v8 + 6) = v54;
    *((_DWORD *)v8 + 7) = a2;
    *((_DWORD *)v8 + 8) = a3;
    qmemcpy(v8 + 36, a4, 0x24u);
    v15 = v52;
    if ( !v57 )
      goto LABEL_39;
    v16 = v52[9];
    v17 = (const CHAR *)v52[11];
    v35 = v8 + 40;
    if ( (int)v52[10] < 0 )
    {
      if ( !v64 )
      {
        v18 = CaptureUnicodeCallbackData(v17, (int)v8, 2 * v16 + 2, v35, v38, v40);
LABEL_38:
        if ( v18 < 0 )
          goto LABEL_65;
LABEL_39:
        if ( !v56 )
        {
LABEL_49:
          *((_DWORD *)v8 + 18) = a5;
          *((_DWORD *)v8 + 19) = a6;
          v24 = KeGetCurrentThread();
          v25 = W32GetThreadWin32Thread(v24);
          v47 = *(_DWORD *)(v25 + 228);
          *(_DWORD *)(v25 + 228) = &v47;
          v26 = v55;
          v48 = v55;
          if ( v55 )
          {
            HMLockObject(v55);
            v26 = v55;
          }
          ms_exc.registration.TryLevel = 0;
          v27 = *(_DWORD **)(RegionSize + 260);
          v43 = v27[10];
          v44 = v27[11];
          v45 = v27[12];
          v27[11] = v54;
          v28 = 0;
          if ( v26 )
            v28 = *v26;
          v29 = RegionSize;
          *(_DWORD *)(*(_DWORD *)(RegionSize + 260) + 40) = v28;
          if ( v26 )
            v30 = *(_DWORD *)(v26[5] + 140);
          else
            v30 = 0;
          *(_DWORD *)(*(_DWORD *)(v29 + 260) + 48) = v30;
          ms_exc.registration.TryLevel = -2;
          if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
          ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v59);
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v60);
          EtwTraceBeginCallback(15);
          *((_DWORD *)v8 + 3) = 0;
          RegionSize = KeUserModeCallback(15, v8, *(_DWORD *)v8, &v50, &v51);
          EtwTraceEndCallback(15);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v60);
          ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v59);
          ThreadUnlock1();
          ms_exc.registration.TryLevel = 1;
          v31 = (_DWORD *)(*(_DWORD *)(v29 + 260) + 40);
          *v31++ = v43;
          *v31 = v44;
          v31[1] = v45;
          ms_exc.registration.TryLevel = -2;
          if ( (RegionSize & 0x80000000) == 0 && v51 == 12 )
          {
            ms_exc.registration.TryLevel = 2;
            v32 = (int *)v50;
            if ( v50 + 4 < v50 || v50 + 4 > _MmUserProbeAddress )
              v32 = (int *)_MmUserProbeAddress;
            v33 = *v32;
            v46 = *v32;
            ms_exc.registration.TryLevel = -2;
            goto LABEL_66;
          }
          goto LABEL_65;
        }
        v20 = v15[12];
        v21 = (const CHAR *)v15[14];
        v36 = v8 + 36;
        if ( (int)v15[13] < 0 )
        {
          if ( !v64 )
          {
            v22 = CaptureUnicodeCallbackData(v21, (int)v8, 2 * v20 + 2, v36, v38, v40);
LABEL_48:
            if ( v22 < 0 )
              goto LABEL_65;
            goto LABEL_49;
          }
          v23 = (const unsigned __int8 *)(v20 + 1);
        }
        else
        {
          if ( v64 )
          {
            v22 = CaptureAnsiCallbackData((const WCHAR *)v21, (int)v8, (v20 >> 1) + 1, v36, v38, v40);
            goto LABEL_48;
          }
          v23 = (const unsigned __int8 *)(v20 + 2);
        }
        v22 = CaptureCallbackData(v21, v8, v23, v36, v38, v40);
        goto LABEL_48;
      }
      v19 = (const unsigned __int8 *)(v16 + 1);
    }
    else
    {
      if ( v64 )
      {
        v18 = CaptureAnsiCallbackData((const WCHAR *)v17, (int)v8, (v16 >> 1) + 1, v35, v38, v40);
        goto LABEL_38;
      }
      v19 = (const unsigned __int8 *)(v16 + 2);
    }
    v18 = CaptureCallbackData(v17, v8, v19, v35, v38, v40);
    goto LABEL_38;
  }
LABEL_65:
  v33 = 0;
LABEL_66:
  if ( v8 != (char *)v41 && v8 != v62 )
  {
    v34 = (PVOID *)(v8 + 20);
    if ( *v34 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v34, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v42);
  }
  return (char *)v33;
}
