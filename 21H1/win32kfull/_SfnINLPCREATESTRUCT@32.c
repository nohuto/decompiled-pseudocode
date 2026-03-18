/*
 * XREFs of _SfnINLPCREATESTRUCT@32 @ 0x448FE
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _IS_USERCRIT_OWNED_SHAREDONLY@0 @ 0x4159E (_IS_USERCRIT_OWNED_SHAREDONLY@0.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940 (-CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?CaptureUnicodeCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0xC466E (-CaptureUnicodeCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0xC8EC4 (-CaptureAnsiCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

_DWORD *__stdcall SfnINLPCREATESTRUCT(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, char a7, int a8)
{
  _DWORD *v8; // ebx
  PKTHREAD CurrentThread; // edi
  ULONG_PTR *ThreadWin32Thread; // eax
  ULONG_PTR v11; // ecx
  unsigned int v12; // ecx
  int v13; // edi
  unsigned int v14; // edx
  int v15; // edi
  int v16; // ecx
  _DWORD *result; // eax
  PKTHREAD v18; // esi
  _DWORD *v19; // edx
  bool v20; // zf
  int v21; // edi
  int v22; // eax
  unsigned int v23; // eax
  char *v24; // ecx
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // eax
  size_t v28; // eax
  PKTHREAD v29; // edi
  int v30; // esi
  int *v31; // eax
  int *v32; // edx
  _DWORD *v33; // eax
  int v34; // ecx
  ULONG_PTR v35; // esi
  int v36; // ecx
  _DWORD *v37; // edi
  int *v38; // ecx
  int v39; // esi
  PVOID *v40; // ebx
  void *v41; // [esp-4h] [ebp-324h]
  void *v42; // [esp-4h] [ebp-324h]
  void *v43; // [esp-4h] [ebp-324h]
  ULONG *v44; // [esp+0h] [ebp-320h]
  unsigned int *v45; // [esp+4h] [ebp-31Ch]
  _DWORD v46[25]; // [esp+10h] [ebp-310h] BYREF
  _BYTE v47[12]; // [esp+74h] [ebp-2ACh] BYREF
  int v48; // [esp+80h] [ebp-2A0h]
  int v49; // [esp+84h] [ebp-29Ch]
  int v50; // [esp+88h] [ebp-298h]
  int v51; // [esp+98h] [ebp-288h]
  int v52; // [esp+A8h] [ebp-278h]
  unsigned int v53; // [esp+ACh] [ebp-274h]
  int v54; // [esp+B0h] [ebp-270h] BYREF
  int *v55; // [esp+B4h] [ebp-26Ch]
  int v56; // [esp+B8h] [ebp-268h]
  unsigned int v57; // [esp+D0h] [ebp-250h] BYREF
  int v58; // [esp+D4h] [ebp-24Ch] BYREF
  int v59; // [esp+D8h] [ebp-248h]
  int v60; // [esp+DCh] [ebp-244h]
  int *v61; // [esp+E0h] [ebp-240h]
  char v62; // [esp+E7h] [ebp-239h]
  unsigned int v63; // [esp+E8h] [ebp-238h] BYREF
  unsigned int v64; // [esp+ECh] [ebp-234h] BYREF
  ULONG_PTR RegionSize; // [esp+F0h] [ebp-230h] BYREF
  char v66; // [esp+F6h] [ebp-22Ah] BYREF
  bool v67; // [esp+F7h] [ebp-229h] BYREF
  _DWORD *v68; // [esp+F8h] [ebp-228h]
  int v69; // [esp+FCh] [ebp-224h]
  _BYTE v70[520]; // [esp+100h] [ebp-220h] BYREF
  CPPEH_RECORD ms_exc; // [esp+308h] [ebp-18h]
  int v72; // [esp+340h] [ebp+20h]

  v61 = a1;
  v68 = a4;
  v64 = 0;
  v63 = 0;
  v69 = 0;
  v72 = a7 & 1;
  memset(v46, 0, 0x60u);
  v8 = v46;
  v57 = 0;
  v58 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  CurrentThread = KeGetCurrentThread();
  RegionSize = 0;
  if ( IsThreadCrossSessionAttached() || (ThreadWin32Thread = (ULONG_PTR *)PsGetThreadWin32Thread(CurrentThread)) == 0 )
  {
    v11 = 0;
  }
  else
  {
    v11 = *ThreadWin32Thread;
    RegionSize = *ThreadWin32Thread;
  }
  if ( v61 )
    v60 = v61[5] - *(_DWORD *)(v11 + 256);
  else
    v60 = 0;
  if ( a4 )
  {
    v12 = a4[9];
    if ( v12 )
    {
      v13 = a4[13] >> 31;
      if ( v13 != v72 || v12 >= (unsigned int)_MmSystemRangeStart )
      {
        if ( ULongAdd((unsigned int)&v64, (unsigned int)v44, v45) < 0
          || v13 && !v72 && ULongLongToULong(2LL * v64, v44) < 0 )
        {
          goto LABEL_87;
        }
        v69 = 1;
      }
    }
    v14 = a4[10];
    if ( (v14 & 0xFFFF0000) == 0 || (v15 = a4[16] >> 31, v15 == v72) && v14 < (unsigned int)_MmSystemRangeStart )
    {
      v16 = v69;
    }
    else
    {
      if ( ULongAdd((unsigned int)&v63, (unsigned int)v44, v45) < 0
        || v15 && !v72 && ULongLongToULong(2LL * v63, v44) < 0 )
      {
        goto LABEL_87;
      }
      v16 = v69 + 1;
    }
  }
  else
  {
    v16 = 0;
  }
  if ( v64 + v63 >= v64 )
  {
    v53 = v64 + v63;
    if ( v16 )
    {
      result = AllocCallbackMessage(v64 + v63, v70, 1u, 0x200u, (int)v44, (unsigned int)v45);
      v8 = result;
      v69 = (int)result;
      if ( !result )
        return result;
    }
    else
    {
      v8 = v46;
      v69 = (int)v46;
      memset(&v46[1], 0, 0x5Cu);
      v46[0] = 96;
    }
    v18 = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
      PsGetThreadWin32Thread(v18);
    memset(v47, 0, sizeof(v47));
    if ( v8 != v46 && v8 != (_DWORD *)v70 )
      PushW32ThreadLock(v8, v47, Win32FreePool);
    v8[6] = v60;
    v8[7] = a2;
    v8[8] = a3;
    v19 = v68;
    v20 = v68 == 0;
    v8[9] = v68 != 0;
    if ( v20 )
      goto LABEL_67;
    qmemcpy(v8 + 10, v19, 0x30u);
    if ( v64 )
    {
      if ( (int)v19[13] < 0 )
      {
        ms_exc.registration.TryLevel = 1;
        v24 = (char *)v19[9];
        v62 = *v24;
        ms_exc.registration.TryLevel = -2;
        v21 = v72;
        if ( v62 == -1 )
        {
          if ( v72 )
          {
            v22 = CaptureCallbackData(3u, v8 + 19, (unsigned int)v44, (void **)v45);
          }
          else
          {
            v59 = 0;
            ms_exc.registration.TryLevel = 2;
            v59 = ((unsigned __int16)(*(_DWORD *)v24 >> 8) << 16) | 0xFFFF;
            ms_exc.registration.TryLevel = -2;
            v22 = CaptureCallbackData(4u, v8 + 19, (unsigned int)v44, (void **)v45);
          }
        }
        else
        {
          v25 = v19[12];
          v42 = v8 + 19;
          if ( v72 )
            v22 = CaptureCallbackData(v25 + 1, v42, (unsigned int)v44, (void **)v45);
          else
            v22 = CaptureUnicodeCallbackData(2 * v25 + 2, v42, (unsigned int)v44, (void **)v45);
        }
      }
      else
      {
        ms_exc.registration.TryLevel = 0;
        v52 = *(unsigned __int16 *)v19[9];
        ms_exc.registration.TryLevel = -2;
        v21 = v72;
        v41 = v8 + 19;
        if ( (_WORD)v52 == 0xFFFF )
        {
          if ( v72 )
            v22 = CaptureCallbackData(3u, v41, (unsigned int)v44, (void **)v45);
          else
            v22 = CaptureCallbackData(4u, v41, (unsigned int)v44, (void **)v45);
        }
        else
        {
          v23 = v19[12];
          if ( v72 )
            v22 = CaptureAnsiCallbackData((v23 >> 1) + 1, v41, (unsigned int)v44, (void **)v45);
          else
            v22 = CaptureCallbackData(v23 + 2, v41, (unsigned int)v44, (void **)v45);
        }
      }
      if ( v22 < 0 )
        goto LABEL_87;
      v19 = v68;
    }
    else
    {
      v21 = v72;
    }
    if ( !v63 )
    {
LABEL_67:
      v8[22] = a5;
      v8[23] = a6;
      v29 = KeGetCurrentThread();
      v30 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        v31 = (int *)PsGetThreadWin32Thread(v29);
        if ( v31 )
          v30 = *v31;
      }
      v54 = *(_DWORD *)(v30 + 228);
      *(_DWORD *)(v30 + 228) = &v54;
      v32 = v61;
      v55 = v61;
      if ( v61 )
      {
        HMLockObject(v61);
        v32 = v61;
      }
      ms_exc.registration.TryLevel = 3;
      v33 = *(_DWORD **)(RegionSize + 260);
      v48 = v33[10];
      v49 = v33[11];
      v50 = v33[12];
      v33[11] = v60;
      if ( v32 )
        v34 = *v32;
      else
        v34 = 0;
      v35 = RegionSize;
      *(_DWORD *)(*(_DWORD *)(RegionSize + 260) + 40) = v34;
      if ( v32 )
        v36 = *(_DWORD *)(v32[5] + 140);
      else
        v36 = 0;
      *(_DWORD *)(*(_DWORD *)(v35 + 260) + 48) = v36;
      ms_exc.registration.TryLevel = -2;
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v66);
      v67 = IS_USERCRIT_OWNED_SHAREDONLY();
      UserSessionSwitchLeaveCrit();
      EtwTraceBeginCallback(10);
      v8[3] = 0;
      RegionSize = KeUserModeCallback(10, v8, *v8, &v57, &v58);
      EtwTraceEndCallback(10);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v67);
      ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v66);
      ThreadUnlock1();
      ms_exc.registration.TryLevel = 4;
      v37 = (_DWORD *)(*(_DWORD *)(v35 + 260) + 40);
      *v37++ = v48;
      *v37 = v49;
      v37[1] = v50;
      ms_exc.registration.TryLevel = -2;
      if ( (RegionSize & 0x80000000) == 0 && v58 == 12 )
      {
        ms_exc.registration.TryLevel = 5;
        v38 = (int *)v57;
        if ( v57 + 4 < v57 || v57 + 4 > _MmUserProbeAddress )
          v38 = (int *)_MmUserProbeAddress;
        v39 = *v38;
        v51 = *v38;
        ms_exc.registration.TryLevel = -2;
        goto LABEL_88;
      }
      goto LABEL_87;
    }
    v26 = v19[15];
    v43 = v8 + 20;
    if ( (int)v19[16] < 0 )
    {
      if ( !v21 )
      {
        v27 = CaptureUnicodeCallbackData(2 * v26 + 2, v43, (unsigned int)v44, (void **)v45);
LABEL_66:
        if ( v27 < 0 )
          goto LABEL_87;
        goto LABEL_67;
      }
      v28 = v26 + 1;
    }
    else
    {
      if ( v21 )
      {
        v27 = CaptureAnsiCallbackData((v26 >> 1) + 1, v43, (unsigned int)v44, (void **)v45);
        goto LABEL_66;
      }
      v28 = v26 + 2;
    }
    v27 = CaptureCallbackData(v28, v43, (unsigned int)v44, (void **)v45);
    goto LABEL_66;
  }
LABEL_87:
  v39 = 0;
LABEL_88:
  if ( v8 != v46 && v8 != (_DWORD *)v70 )
  {
    v40 = (PVOID *)(v8 + 5);
    if ( *v40 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v40, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v47);
  }
  return (_DWORD *)v39;
}
