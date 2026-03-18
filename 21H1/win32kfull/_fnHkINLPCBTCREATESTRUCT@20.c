/*
 * XREFs of _fnHkINLPCBTCREATESTRUCT@20 @ 0xC8910
 * Callers:
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
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
 *     _GetThreadDesktopWindow@4 @ 0x9E52A (_GetThreadDesktopWindow@4.c)
 *     ?CaptureUnicodeCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0xC466E (-CaptureUnicodeCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0xC8EC4 (-CaptureAnsiCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

ULONG_PTR __fastcall fnHkINLPCBTCREATESTRUCT(int a1, ULONG_PTR a2, int a3, int a4, int a5)
{
  int ThreadDesktopWindow; // esi
  char *v6; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ecx
  _DWORD *v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // esi
  PKTHREAD v13; // eax
  _DWORD *v14; // esi
  int v15; // edi
  unsigned int v16; // eax
  const void *v17; // edx
  const unsigned __int8 *v18; // eax
  int v19; // eax
  PKTHREAD v20; // eax
  int v21; // eax
  int *v22; // edx
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // esi
  int v26; // ecx
  _DWORD *v27; // edi
  ULONG_PTR *v28; // ecx
  int v29; // eax
  char *v30; // esi
  int v31; // edx
  ULONG_PTR v32; // esi
  unsigned __int16 *v34; // edx
  char *v35; // ecx
  unsigned int v36; // eax
  const CHAR *v37; // edx
  const unsigned __int8 *v38; // eax
  int v39; // eax
  char *v40; // ecx
  int v41; // eax
  int v42; // ecx
  PVOID *v43; // ebx
  void *v44; // [esp-4h] [ebp-3A0h]
  char *v45; // [esp-4h] [ebp-3A0h]
  ULONG *v46; // [esp+0h] [ebp-39Ch]
  unsigned int v47; // [esp+0h] [ebp-39Ch]
  unsigned int *v48; // [esp+4h] [ebp-398h]
  void **v49; // [esp+4h] [ebp-398h]
  _BYTE v50[52]; // [esp+10h] [ebp-38Ch] BYREF
  _DWORD v51[24]; // [esp+44h] [ebp-358h] BYREF
  _DWORD v52[13]; // [esp+A4h] [ebp-2F8h] BYREF
  int v53; // [esp+E0h] [ebp-2BCh]
  _DWORD v54[3]; // [esp+E4h] [ebp-2B8h] BYREF
  int v55; // [esp+F0h] [ebp-2ACh]
  int v56; // [esp+F4h] [ebp-2A8h]
  int v57; // [esp+F8h] [ebp-2A4h]
  ULONG_PTR v58; // [esp+10Ch] [ebp-290h]
  int v59; // [esp+11Ch] [ebp-280h] BYREF
  int *v60; // [esp+120h] [ebp-27Ch]
  int v61; // [esp+124h] [ebp-278h]
  int v62; // [esp+13Ch] [ebp-260h]
  int v63; // [esp+140h] [ebp-25Ch] BYREF
  int v64; // [esp+144h] [ebp-258h]
  int *v65; // [esp+148h] [ebp-254h]
  ULONG_PTR v66; // [esp+14Ch] [ebp-250h] BYREF
  int v67; // [esp+150h] [ebp-24Ch]
  unsigned int v68; // [esp+154h] [ebp-248h] BYREF
  int v69; // [esp+158h] [ebp-244h]
  char v70; // [esp+15Fh] [ebp-23Dh]
  int v71; // [esp+160h] [ebp-23Ch]
  _DWORD *v72; // [esp+164h] [ebp-238h] BYREF
  unsigned int v73; // [esp+168h] [ebp-234h] BYREF
  unsigned int v74; // [esp+16Ch] [ebp-230h] BYREF
  ULONG_PTR RegionSize; // [esp+170h] [ebp-22Ch] BYREF
  char v76; // [esp+176h] [ebp-226h] BYREF
  char v77; // [esp+177h] [ebp-225h] BYREF
  int v78; // [esp+178h] [ebp-224h]
  char v79[520]; // [esp+17Ch] [ebp-220h] BYREF
  CPPEH_RECORD ms_exc; // [esp+384h] [ebp-18h]

  RegionSize = a2;
  v62 = a1;
  v71 = a3;
  v74 = 0;
  v73 = 0;
  v78 = 0;
  v66 = 0;
  memset(v50, 0, sizeof(v50));
  ThreadDesktopWindow = GetThreadDesktopWindow(0);
  v65 = (int *)ThreadDesktopWindow;
  memset(v51, 0, sizeof(v51));
  v6 = (char *)v51;
  v68 = 0;
  v63 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v64 = ThreadWin32Thread;
  if ( ThreadDesktopWindow )
    v69 = *(_DWORD *)(ThreadDesktopWindow + 20) - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v69 = 0;
  v9 = *(_DWORD **)v71;
  v72 = v9;
  v10 = v9[9];
  if ( v10 )
  {
    v67 = v9[13] >> 31;
    if ( v67 != a5 || v10 >= (unsigned int)_MmSystemRangeStart )
    {
      if ( (ULongAdd(2, v9[12], (int *)&v74, (unsigned int)v46, v48) & 0x80000000) != 0
        || v67 && !a5 && ULongLongToULong(2LL * v74, v46) < 0 )
      {
        goto LABEL_57;
      }
      v78 = 1;
    }
  }
  v11 = v9[10];
  if ( (v11 & 0xFFFF0000) == 0 || (v67 = v9[16] >> 31, v67 == a5) && v11 < (unsigned int)_MmSystemRangeStart )
  {
    v12 = v78;
  }
  else
  {
    if ( (ULongAdd(2, v9[15], (int *)&v73, (unsigned int)v46, v48) & 0x80000000) != 0
      || v67 && !a5 && ULongLongToULong(2LL * v73, v46) < 0 )
    {
      goto LABEL_57;
    }
    v12 = v78 + 1;
  }
  if ( (ULongAdd(v73, v74, (int *)&v66, (unsigned int)v46, v48) & 0x80000000) == 0 )
  {
    if ( v12 )
    {
      v6 = AllocCallbackMessage(v12, 96, v66, v79, 1u, 0x200u, v47, (unsigned int)v49);
      v78 = (int)v6;
      if ( !v6 )
        return 0;
    }
    else
    {
      v6 = (char *)v51;
      v78 = (int)v51;
      memset(&v51[1], 0, 0x5Cu);
      v51[0] = 96;
    }
    v13 = KeGetCurrentThread();
    W32GetThreadWin32Thread(v13);
    memset(v54, 0, sizeof(v54));
    if ( v6 != (char *)v51 && v6 != v79 )
      PushW32ThreadLock((int)v6, v54, (int)Win32FreePool);
    *((_DWORD *)v6 + 6) = v69;
    *((_DWORD *)v6 + 7) = v62;
    *((_DWORD *)v6 + 8) = RegionSize;
    qmemcpy(v6 + 36, *(const void **)v71, 0x30u);
    v14 = v72;
    if ( !v74 )
    {
LABEL_20:
      v15 = a5;
      goto LABEL_21;
    }
    if ( (int)v72[13] < 0 )
    {
      ms_exc.registration.TryLevel = 1;
      v40 = (char *)v72[9];
      v70 = *v40;
      ms_exc.registration.TryLevel = -2;
      if ( v70 == -1 )
      {
        if ( a5 )
        {
          v41 = CaptureCallbackData(v40, v6, (const unsigned __int8 *)3, v6 + 72, v47, v49);
        }
        else
        {
          v72 = 0;
          ms_exc.registration.TryLevel = 2;
          v72 = (_DWORD *)(((unsigned __int16)(*(_DWORD *)v40 >> 8) << 16) | 0xFFFF);
          ms_exc.registration.TryLevel = -2;
          v41 = CaptureCallbackData(&v72, v6, (const unsigned __int8 *)4, v6 + 72, v47, v49);
        }
        if ( v41 < 0 )
          goto LABEL_57;
        goto LABEL_20;
      }
      v42 = v72[12];
      v37 = (const CHAR *)v72[14];
      v15 = a5;
      v45 = v6 + 72;
      if ( a5 )
      {
        v38 = (const unsigned __int8 *)(v42 + 1);
        v35 = v6;
        goto LABEL_55;
      }
      v39 = CaptureUnicodeCallbackData(v37, (int)v6, 2 * v42 + 2, v45, v47, v49);
    }
    else
    {
      ms_exc.registration.TryLevel = 0;
      v34 = (unsigned __int16 *)v72[9];
      v53 = *v34;
      ms_exc.registration.TryLevel = -2;
      v15 = a5;
      v45 = v6 + 72;
      v35 = v6;
      if ( (_WORD)v53 == 0xFFFF )
      {
        if ( a5 )
          v39 = CaptureCallbackData((char *)v34 + 1, v6, (const unsigned __int8 *)3, v45, v47, v49);
        else
          v39 = CaptureCallbackData(v34, v6, (const unsigned __int8 *)4, v45, v47, v49);
      }
      else
      {
        v36 = v72[12];
        v37 = (const CHAR *)v72[14];
        if ( !a5 )
        {
          v38 = (const unsigned __int8 *)(v36 + 2);
LABEL_55:
          v39 = CaptureCallbackData(v37, v35, v38, v45, v47, v49);
          goto LABEL_56;
        }
        v39 = CaptureAnsiCallbackData((v36 >> 1) + 1, v45, v47, v49);
      }
    }
LABEL_56:
    if ( v39 < 0 )
      goto LABEL_57;
LABEL_21:
    if ( !v73 )
    {
LABEL_27:
      *((_DWORD *)v6 + 21) = *(_DWORD *)(v71 + 4);
      *((_DWORD *)v6 + 22) = a4;
      *((_DWORD *)v6 + 23) = v15;
      v20 = KeGetCurrentThread();
      v21 = W32GetThreadWin32Thread(v20);
      v59 = *(_DWORD *)(v21 + 228);
      *(_DWORD *)(v21 + 228) = &v59;
      v22 = v65;
      v60 = v65;
      if ( v65 )
      {
        HMLockObject(v65);
        v22 = v65;
      }
      ms_exc.registration.TryLevel = 3;
      v23 = *(_DWORD **)(v64 + 260);
      v55 = v23[10];
      v56 = v23[11];
      v57 = v23[12];
      v23[11] = v69;
      if ( v22 )
        v24 = *v22;
      else
        v24 = 0;
      v25 = v64;
      *(_DWORD *)(*(_DWORD *)(v64 + 260) + 40) = v24;
      if ( v22 )
        v26 = *(_DWORD *)(v22[5] + 140);
      else
        v26 = 0;
      *(_DWORD *)(*(_DWORD *)(v25 + 260) + 48) = v26;
      ms_exc.registration.TryLevel = -2;
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v77);
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v76);
      EtwTraceBeginCallback(42);
      *((_DWORD *)v6 + 3) = 0;
      RegionSize = KeUserModeCallback(42, v6, *(_DWORD *)v6, &v68, &v63);
      EtwTraceEndCallback(42);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v76);
      ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v77);
      ThreadUnlock1();
      ms_exc.registration.TryLevel = 4;
      v27 = (_DWORD *)(*(_DWORD *)(v25 + 260) + 40);
      *v27++ = v55;
      *v27 = v56;
      v27[1] = v57;
      ms_exc.registration.TryLevel = -2;
      if ( (RegionSize & 0x80000000) == 0 && v63 == 12 )
      {
        ms_exc.registration.TryLevel = 5;
        v28 = (ULONG_PTR *)v68;
        if ( v68 + 4 < v68 || v68 + 4 > _MmUserProbeAddress )
          v28 = (ULONG_PTR *)_MmUserProbeAddress;
        RegionSize = *v28;
        v58 = RegionSize;
        ms_exc.registration.TryLevel = -2;
        v29 = *(_DWORD *)(_gptiCurrent + 276);
        if ( !v29 || (*(_BYTE *)(v29 + 44) & 1) == 0 || *(_BYTE **)(v29 + 52) != v50 )
        {
          ms_exc.registration.TryLevel = 6;
          v30 = *(char **)(v68 + 8);
          if ( v30 + 52 < v30 || (unsigned int)(v30 + 52) > _MmUserProbeAddress )
            v30 = (char *)_MmUserProbeAddress;
          qmemcpy(v52, v30, sizeof(v52));
          qmemcpy(v50, v52, sizeof(v50));
          ms_exc.registration.TryLevel = -2;
          v31 = v71;
          *(_DWORD *)(v71 + 4) = v52[12];
          *(_DWORD *)(*(_DWORD *)v31 + 28) = v52[7];
          *(_DWORD *)(*(_DWORD *)v31 + 24) = v52[6];
          *(_DWORD *)(*(_DWORD *)v31 + 20) = v52[5];
          *(_DWORD *)(*(_DWORD *)v31 + 16) = v52[4];
          v32 = RegionSize;
          goto LABEL_42;
        }
      }
      goto LABEL_57;
    }
    v16 = v14[15];
    v17 = (const void *)v14[17];
    v44 = v6 + 76;
    if ( (int)v14[16] >= 0 )
    {
      if ( !v15 )
      {
        v18 = (const unsigned __int8 *)(v16 + 2);
        goto LABEL_25;
      }
      v19 = CaptureAnsiCallbackData((v16 >> 1) + 1, v44, v47, v49);
    }
    else
    {
      if ( v15 )
      {
        v18 = (const unsigned __int8 *)(v16 + 1);
LABEL_25:
        v19 = CaptureCallbackData(v17, v6, v18, (char *)v44, v47, v49);
        goto LABEL_26;
      }
      v19 = CaptureUnicodeCallbackData((const CHAR *)v17, (int)v6, 2 * v16 + 2, (char *)v44, v47, v49);
    }
LABEL_26:
    if ( v19 < 0 )
      goto LABEL_57;
    goto LABEL_27;
  }
LABEL_57:
  v32 = 0;
LABEL_42:
  if ( v6 != (char *)v51 && v6 != v79 )
  {
    v43 = (PVOID *)(v6 + 20);
    if ( *v43 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v43, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v54);
  }
  return v32;
}
