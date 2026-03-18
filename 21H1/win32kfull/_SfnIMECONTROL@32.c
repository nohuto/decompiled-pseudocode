/*
 * XREFs of _SfnIMECONTROL@32 @ 0x18B448
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
 *     ?AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z @ 0x9E356 (-AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _THREAD_CODEPAGE@0 @ 0x192B9B (_THREAD_CODEPAGE@0.c)
 *     _MBToWCSEx@24 @ 0x1B7288 (_MBToWCSEx@24.c)
 *     _WCSToMBEx@24 @ 0x1B73F3 (_WCSToMBEx@24.c)
 */

char *__stdcall SfnIMECONTROL(int *a1, int a2, unsigned int a3, void *a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // edi
  SIZE_T v11; // eax
  int *v12; // ecx
  char *v13; // esi
  void *v15; // eax
  char *v16; // edx
  SIZE_T v17; // edi
  void *v18; // eax
  int v19; // eax
  int *v20; // ecx
  _DWORD *v21; // eax
  int v22; // edx
  int v23; // esi
  int v24; // ecx
  ULONG_PTR v25; // ecx
  char *v26; // ecx
  _DWORD *v27; // edi
  char **v28; // esi
  char *v29; // esi
  volatile void **v30; // esi
  volatile void **v31; // esi
  size_t v32; // esi
  char *v33; // edi
  char *v34; // eax
  int v35; // eax
  const unsigned __int8 *v36; // edi
  char *v37; // eax
  _BYTE *v38; // edx
  int v39; // ecx
  unsigned __int16 *v40; // ecx
  char *v41; // edx
  ULONG_PTR v42; // edi
  char *v43; // esi
  int v44; // eax
  unsigned __int16 v45; // ax
  unsigned __int16 *v46; // ecx
  void *v47; // eax
  int v48; // eax
  int *v49; // ecx
  _DWORD *v50; // eax
  int v51; // edx
  int v52; // esi
  int v53; // ecx
  char *v54; // eax
  _DWORD *v55; // edi
  char **v56; // edx
  SIZE_T v57; // [esp-8h] [ebp-35Ch]
  int v58; // [esp-4h] [ebp-358h]
  int v59; // [esp-4h] [ebp-358h]
  char *v60; // [esp-4h] [ebp-358h]
  unsigned __int16 *v61; // [esp-4h] [ebp-358h]
  ULONG *v62; // [esp+0h] [ebp-354h]
  unsigned int v63; // [esp+0h] [ebp-354h]
  unsigned int *v64; // [esp+4h] [ebp-350h]
  _DWORD v65[14]; // [esp+1Ch] [ebp-338h] BYREF
  volatile void *v66[5]; // [esp+54h] [ebp-300h] BYREF
  volatile void *Address; // [esp+68h] [ebp-2ECh]
  int v68; // [esp+88h] [ebp-2CCh]
  int v69; // [esp+8Ch] [ebp-2C8h]
  int v70; // [esp+90h] [ebp-2C4h]
  char *v71; // [esp+A4h] [ebp-2B0h]
  char v72; // [esp+ACh] [ebp-2A8h] BYREF
  int v73; // [esp+B0h] [ebp-2A4h] BYREF
  int *v74; // [esp+B4h] [ebp-2A0h]
  int v75; // [esp+B8h] [ebp-29Ch]
  char *v76; // [esp+BCh] [ebp-298h] BYREF
  int (*v77)(void); // [esp+C0h] [ebp-294h]
  unsigned __int16 *v78; // [esp+C4h] [ebp-290h]
  int v79; // [esp+C8h] [ebp-28Ch] BYREF
  int v80; // [esp+CCh] [ebp-288h]
  int v81; // [esp+D0h] [ebp-284h]
  int *v82; // [esp+D4h] [ebp-280h]
  ULONG_PTR v83; // [esp+D8h] [ebp-27Ch]
  ULONG_PTR RegionSize; // [esp+DCh] [ebp-278h] BYREF
  unsigned int v85; // [esp+E0h] [ebp-274h] BYREF
  char *v86; // [esp+E4h] [ebp-270h] BYREF
  char v87; // [esp+E8h] [ebp-26Ch] BYREF
  char v88; // [esp+E9h] [ebp-26Bh] BYREF
  char v89; // [esp+EAh] [ebp-26Ah] BYREF
  char v90; // [esp+EBh] [ebp-269h] BYREF
  char *v91; // [esp+ECh] [ebp-268h] BYREF
  SIZE_T Length; // [esp+F0h] [ebp-264h]
  void *v93; // [esp+F4h] [ebp-260h]
  char *v94; // [esp+F8h] [ebp-25Ch]
  _BYTE v95[28]; // [esp+FCh] [ebp-258h] BYREF
  _DWORD v96[8]; // [esp+118h] [ebp-23Ch] BYREF
  char v97[516]; // [esp+138h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+33Ch] [ebp-18h]

  v82 = a1;
  v93 = a4;
  memset(v65, 0, sizeof(v65));
  v85 = 0;
  v79 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v77 = (int (*)(void))KeGetCurrentThread;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v80 = ThreadWin32Thread;
  if ( a1 )
    v81 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v81 = 0;
  if ( a3 > 0xC )
  {
    if ( a3 == 17 )
      goto LABEL_17;
    if ( a3 == 24 )
    {
      v10 = 1;
      v83 = 0;
      if ( ULongLongToULong((unsigned __int64)*(unsigned int *)v93 << 9, v62) < 0
        || (ULongAdd(4, v83, v12, v63, v64) & 0x80000000) != 0 )
      {
        return 0;
      }
      v11 = v83;
      goto LABEL_18;
    }
LABEL_13:
    v10 = 0;
    v11 = 0;
    goto LABEL_18;
  }
  if ( a3 >= 0xB )
  {
    v58 = 28;
    goto LABEL_9;
  }
  if ( a3 < 7 )
    goto LABEL_13;
  if ( a3 > 8 )
  {
LABEL_17:
    v10 = 1;
    v11 = (a7 & 1) != 0 ? 60 : 92;
    goto LABEL_18;
  }
  v58 = 32;
LABEL_9:
  v10 = 1;
  v11 = v58;
LABEL_18:
  Length = v11;
  if ( v10 )
  {
    v13 = AllocCallbackMessage(v10, 56, v11, v97, 1u, 0x200u, (int)v62, (unsigned int)v64);
    v94 = v13;
    if ( !v13 )
      return 0;
  }
  else
  {
    v13 = (char *)v65;
    v94 = (char *)v65;
    v65[0] = 56;
  }
  v15 = (void *)v77();
  W32GetThreadWin32Thread(v15);
  memset(v66, 0, 12);
  if ( v13 != (char *)v65 && v13 != v97 )
    PushW32ThreadLock((int)v13, v66, (int)Win32FreePool);
  *((_DWORD *)v13 + 6) = v81;
  *((_DWORD *)v13 + 7) = a2;
  *((_DWORD *)v13 + 8) = a3;
  v91 = v13 + 36;
  v16 = (char *)v93;
  *((_DWORD *)v13 + 9) = v93;
  *((_DWORD *)v13 + 10) = a5;
  *((_DWORD *)v13 + 11) = a6;
  switch ( a3 )
  {
    case 7u:
    case 9u:
    case 0xBu:
    case 0x11u:
      v17 = Length;
      if ( AllocateCallbackData(Length, (int)v13, (struct _CAPTUREBUF *)(v13 + 48), (unsigned int)v62, (void **)v64) < 0 )
        goto LABEL_94;
      *((_DWORD *)v13 + 13) = v17;
      v18 = (void *)v77();
      v19 = W32GetThreadWin32Thread(v18);
      v73 = *(_DWORD *)(v19 + 228);
      *(_DWORD *)(v19 + 228) = &v73;
      v20 = v82;
      v74 = v82;
      if ( v82 )
      {
        HMLockObject(v82);
        v20 = v82;
      }
      ms_exc.registration.TryLevel = 0;
      v21 = *(_DWORD **)(v80 + 260);
      v68 = v21[10];
      v69 = v21[11];
      v70 = v21[12];
      v21[11] = v81;
      v22 = 0;
      if ( v20 )
        v22 = *v20;
      v23 = v80;
      *(_DWORD *)(*(_DWORD *)(v80 + 260) + 40) = v22;
      if ( v20 )
        v24 = *(_DWORD *)(v20[5] + 140);
      else
        v24 = 0;
      *(_DWORD *)(*(_DWORD *)(v23 + 260) + 48) = v24;
      ms_exc.registration.TryLevel = -2;
      v25 = _gdwInAtomicOperation;
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        goto LABEL_36;
      ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v90);
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v87);
      EtwTraceBeginCallback(94);
      v26 = v94;
      *((_DWORD *)v94 + 3) = 0;
      v91 = (char *)KeUserModeCallback(94, v26, *(_DWORD *)v26, &v85, &v79);
      EtwTraceEndCallback(94);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v87);
      ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v90);
      ThreadUnlock1();
      ms_exc.registration.TryLevel = 1;
      v27 = (_DWORD *)(*(_DWORD *)(v23 + 260) + 40);
      *v27++ = v68;
      *v27 = v69;
      v27[1] = v70;
      ms_exc.registration.TryLevel = -2;
      if ( (int)v91 < 0 || v79 != 12 )
        goto LABEL_94;
      ms_exc.registration.TryLevel = 2;
      v28 = (char **)v85;
      if ( v85 + 4 < v85 || v85 + 4 > _MmUserProbeAddress )
        v28 = (char **)_MmUserProbeAddress;
      v29 = *v28;
      v86 = v29;
      v71 = v29;
      ms_exc.registration.TryLevel = -2;
      if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
        goto LABEL_95;
      ms_exc.registration.TryLevel = 3;
      v30 = (volatile void **)v85;
      if ( v85 + 12 < v85 || v85 + 12 > _MmUserProbeAddress )
        v30 = (volatile void **)_MmUserProbeAddress;
      v66[3] = *v30;
      v31 = v30 + 1;
      v66[4] = *v31;
      Address = v31[1];
      v32 = Length;
      v33 = (char *)Address;
      ProbeForRead(Address, Length, 4u);
      switch ( a3 )
      {
        case 7u:
          goto LABEL_54;
        case 9u:
          goto LABEL_52;
        case 0xBu:
          goto LABEL_54;
        case 0x11u:
LABEL_52:
          if ( (a7 & 1) != 0 )
          {
            v33[v32 - 1] = 0;
            v34 = (char *)v93 + 28;
            v91 = (char *)v93 + 28;
            qmemcpy(v93, v33, 0x1Cu);
            memset(v34, 0, 0x40u);
            MBToWCSEx(-1, &v91, 32, v59);
          }
          else
          {
LABEL_54:
            memcpy(v93, v33, v32);
          }
          break;
      }
      ms_exc.registration.TryLevel = -2;
      v29 = v86;
      goto LABEL_95;
    case 8u:
    case 0xAu:
    case 0xCu:
    case 0x18u:
      switch ( a3 )
      {
        case 8u:
          v60 = v13 + 36;
          v57 = 32;
          break;
        case 0xCu:
          v60 = v13 + 36;
          v57 = 28;
          break;
        case 0xAu:
          if ( (a7 & 1) != 0 )
          {
            v86 = (char *)v96;
            qmemcpy(v95, v93, sizeof(v95));
            memset(v96, 0, sizeof(v96));
            WCSToMBEx(0, v16 + 28, -1, &v86, 32, 0);
            v35 = CaptureCallbackData(v95, v94, (const unsigned __int8 *)0x3C, v91, (unsigned int)v62, (void **)v64);
            goto LABEL_78;
          }
          v60 = v13 + 36;
          v57 = 92;
          break;
        case 0x18u:
          if ( (a7 & 1) != 0 )
          {
            v86 = &v72;
            v76 = &v72;
            v36 = (const unsigned __int8 *)Length;
            v37 = (char *)Win32AllocPool(Length, 1835627349);
            v91 = v37;
            if ( v37 )
            {
              v78 = (unsigned __int16 *)(v37 + 4);
              v38 = v93;
              v39 = *(_DWORD *)v93;
              *(_DWORD *)v37 = *(_DWORD *)v93;
              RegionSize = v39 << 8;
              if ( v39 << 8 )
              {
                v40 = v78;
                v41 = (char *)(v38 - (_BYTE *)v78);
                v93 = v41;
                v42 = RegionSize;
                do
                {
                  --v42;
                  v86[1] = 0;
                  v61 = v40;
                  v43 = (char *)v40 + (_DWORD)v41;
                  v44 = THREAD_CODEPAGE();
                  WCSToMBEx(v44, v43 + 4, 1, &v76, 2, v61);
                  v86 = v76;
                  if ( v76[1] )
                    v45 = _byteswap_ushort(*(_WORD *)v76);
                  else
                    v45 = (unsigned __int8)*v76;
                  v46 = v78;
                  *v78 = v45;
                  v40 = v46 + 1;
                  v78 = v40;
                  v41 = (char *)v93;
                }
                while ( v42 );
                v13 = v94;
                v36 = (const unsigned __int8 *)Length;
                v37 = v91;
              }
              if ( CaptureCallbackData(v37, v13, v36, v13 + 36, (unsigned int)v62, (void **)v64) >= 0 )
              {
                Win32FreePool(v91);
                goto LABEL_79;
              }
            }
LABEL_94:
            v29 = 0;
            goto LABEL_95;
          }
          v60 = v13 + 36;
          v57 = Length;
          break;
        default:
          goto LABEL_79;
      }
      v35 = CaptureCallbackData(v16, v13, (const unsigned __int8 *)v57, v60, (unsigned int)v62, (void **)v64);
LABEL_78:
      if ( v35 < 0 )
        goto LABEL_94;
LABEL_79:
      v47 = (void *)v77();
      v48 = W32GetThreadWin32Thread(v47);
      v73 = *(_DWORD *)(v48 + 228);
      *(_DWORD *)(v48 + 228) = &v73;
      v49 = v82;
      v74 = v82;
      if ( v82 )
      {
        HMLockObject(v82);
        v49 = v82;
      }
      ms_exc.registration.TryLevel = 4;
      v50 = *(_DWORD **)(v80 + 260);
      v68 = v50[10];
      v69 = v50[11];
      v70 = v50[12];
      v50[11] = v81;
      v51 = 0;
      if ( v49 )
        v51 = *v49;
      v52 = v80;
      *(_DWORD *)(*(_DWORD *)(v80 + 260) + 40) = v51;
      if ( v49 )
        v53 = *(_DWORD *)(v49[5] + 140);
      else
        v53 = 0;
      *(_DWORD *)(*(_DWORD *)(v52 + 260) + 48) = v53;
      ms_exc.registration.TryLevel = -2;
      v25 = _gdwInAtomicOperation;
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
LABEL_36:
        KeBugCheckEx(0x160u, v25, 0, 0, 0);
      ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v88);
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v89);
      EtwTraceBeginCallback(94);
      v54 = v94;
      *((_DWORD *)v94 + 3) = 0;
      RegionSize = KeUserModeCallback(94, v54, *(_DWORD *)v54, &v85, &v79);
      EtwTraceEndCallback(94);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v89);
      ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v88);
      ThreadUnlock1();
      ms_exc.registration.TryLevel = 5;
      v55 = (_DWORD *)(*(_DWORD *)(v52 + 260) + 40);
      *v55++ = v68;
      *v55 = v69;
      v55[1] = v70;
      ms_exc.registration.TryLevel = -2;
      if ( (RegionSize & 0x80000000) != 0 || v79 != 12 )
        goto LABEL_94;
      ms_exc.registration.TryLevel = 6;
      v56 = (char **)v85;
      if ( v85 + 4 < v85 || v85 + 4 > _MmUserProbeAddress )
        v56 = (char **)_MmUserProbeAddress;
      v29 = *v56;
      v71 = *v56;
      ms_exc.registration.TryLevel = -2;
LABEL_95:
      if ( v94 != (char *)v65 && v94 != v97 )
      {
        if ( *((_DWORD *)v94 + 5) )
        {
          RegionSize = 0;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v94 + 5, &RegionSize, 0x8000u);
        }
        PopAndFreeAlwaysW32ThreadLock((int)v66);
      }
      return v29;
    default:
      goto LABEL_79;
  }
}
