/*
 * XREFs of SfnOUTSTRING @ 0x1C00E5030
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     MBToWCSEx @ 0x1C00E5BE0 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C00E5C48 (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     strncpycch @ 0x1C025DCD4 (strncpycch.c)
 */

__int64 __fastcall SfnOUTSTRING(
        __int64 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r13d
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rbx
  int v20; // r8d
  unsigned __int64 v21; // rdx
  ULONG_PTR v22; // r15
  __int64 v23; // rax
  unsigned int *v24; // r14
  __int64 v25; // rcx
  unsigned int *v26; // rax
  struct _KTHREAD *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  struct _KTHREAD *v32; // r12
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *v37; // rax
  _QWORD *v38; // r9
  unsigned int v39; // r8d
  char *v40; // rcx
  struct _KTHREAD *v41; // r12
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  struct _KTHREAD *v51; // r15
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 *v56; // rax
  __int64 v57; // rcx
  bool v58; // di
  int v59; // r12d
  __int64 v60; // rcx
  struct _KTHREAD *v61; // r15
  __int64 v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 *v71; // rax
  __int64 v72; // r12
  _BYTE *v73; // rax
  _BYTE *v74; // rcx
  struct _KTHREAD *v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 *v79; // rax
  ULONG64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  int v84; // r14d
  SIZE_T v85; // rdi
  int v86; // r15d
  WCHAR *v87; // rbx
  SIZE_T v88; // rax
  ULONG64 v89; // rcx
  __int64 v90; // r14
  SIZE_T v91; // rax
  WCHAR *v92; // rdx
  WCHAR *v93; // r8
  WCHAR v94; // cx
  unsigned int v95; // esi
  __int64 v96; // r8
  unsigned int v97; // eax
  unsigned __int64 v98; // rax
  SIZE_T v99; // rax
  unsigned int v100; // esi
  unsigned int v101; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v104; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v106; // zf
  __int64 v107; // rax
  int v108; // ebx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rax
  int v112; // ebx
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rax
  int v116; // ebx
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rax
  int v120; // ebx
  __int64 v121; // rcx
  __int64 v122; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v125; // rax
  int v126; // edi
  __int64 v127; // rcx
  __int64 v128; // rax
  unsigned int v129; // eax
  tagDomLock *v130; // rax
  __int64 v131; // rax
  int v132; // ebx
  __int64 v133; // rcx
  __int64 v134; // rax
  char v135; // [rsp+31h] [rbp-3E7h]
  ULONG BytesInUnicodeString; // [rsp+34h] [rbp-3E4h] BYREF
  int v137; // [rsp+38h] [rbp-3E0h]
  unsigned __int64 v138; // [rsp+40h] [rbp-3D8h]
  __int64 v139; // [rsp+48h] [rbp-3D0h]
  __int64 v140; // [rsp+50h] [rbp-3C8h]
  unsigned int v141; // [rsp+58h] [rbp-3C0h]
  int v142; // [rsp+5Ch] [rbp-3BCh] BYREF
  int v143; // [rsp+60h] [rbp-3B8h]
  __int64 v144; // [rsp+68h] [rbp-3B0h]
  __int64 v145; // [rsp+70h] [rbp-3A8h]
  unsigned int v146; // [rsp+78h] [rbp-3A0h]
  int v147; // [rsp+80h] [rbp-398h]
  unsigned __int64 v148; // [rsp+98h] [rbp-380h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-378h] BYREF
  PVOID *v150; // [rsp+A8h] [rbp-370h]
  __int128 v151; // [rsp+B0h] [rbp-368h] BYREF
  void (__fastcall *v152)(_QWORD); // [rsp+C0h] [rbp-358h]
  SIZE_T Length[2]; // [rsp+C8h] [rbp-350h]
  volatile void *Address; // [rsp+D8h] [rbp-340h]
  WCHAR *v155; // [rsp+E8h] [rbp-330h]
  WCHAR *v156; // [rsp+F0h] [rbp-328h]
  ULONG_PTR v157; // [rsp+F8h] [rbp-320h] BYREF
  __int128 v158; // [rsp+100h] [rbp-318h]
  __int64 v159; // [rsp+110h] [rbp-308h]
  __int128 v160; // [rsp+118h] [rbp-300h] BYREF
  __int64 v161; // [rsp+128h] [rbp-2F0h]
  __int128 v162; // [rsp+158h] [rbp-2C0h]
  volatile void *v163; // [rsp+168h] [rbp-2B0h]
  _BYTE v164[96]; // [rsp+170h] [rbp-2A8h] BYREF
  _BYTE v165[512]; // [rsp+1D0h] [rbp-248h] BYREF

  v140 = a4;
  v138 = a3;
  v146 = a2;
  v10 = a7 & 1;
  v137 = v10;
  v11 = 0LL;
  v143 = 0;
  memset(v164, 0, sizeof(v164));
  v150 = (PVOID *)v164;
  v148 = 0LL;
  v142 = 0;
  v144 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  v145 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (CurrentProcess = PsGetCurrentProcess(v16, v15, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v104),
        v106 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
        v13 = 0LL,
        v106) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v13 = *ThreadWin32Thread;
      v145 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(v13 + 472);
  else
    v19 = 0LL;
  v139 = v19;
  v20 = *(_DWORD *)(a4 + 4);
  v21 = (v20 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v21 < (v20 & 0x7FFFFFFFu) )
    goto LABEL_168;
  v141 = (v20 & 0x7FFFFFFF) + 2;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000000) == 0 && v20 < 0 && (a7 & 1) == 0 )
  {
    v21 *= 2LL;
    if ( v21 > 0xFFFFFFFF )
      goto LABEL_168;
    v141 = v21;
  }
  v22 = ((unsigned int)v21 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v22;
  if ( v22 <= 0x800 )
  {
    if ( v22 + 104 > 0x200 )
    {
      v24 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v22 + 104), 1667461973LL);
      if ( !v24 )
        return 0LL;
    }
    else
    {
      v24 = (unsigned int *)v165;
      memset(v165, 0, sizeof(v165));
    }
    v26 = v24 + 26;
    *((_QWORD *)v24 + 4) = 0LL;
    goto LABEL_13;
  }
  v23 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
  v24 = (unsigned int *)v23;
  if ( !v23 )
    return 0LL;
  *(_QWORD *)(v23 + 32) = 0LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v23 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
  {
    Win32FreePool(v24);
    return 0LL;
  }
  v26 = (unsigned int *)*((_QWORD *)v24 + 4);
LABEL_13:
  *v24 = 104;
  *((_QWORD *)v24 + 2) = v26;
  *(_QWORD *)(v24 + 1) = (unsigned int)RegionSize;
  v24[6] = 96;
  v150 = (PVOID *)v24;
  v27 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v25)
    || (v107 = PsGetCurrentProcess(v29, v28, v30),
        v108 = PsGetProcessSessionIdEx(v107),
        v110 = PsGetCurrentThreadProcess(v109),
        v106 = v108 == (unsigned int)PsGetProcessSessionIdEx(v110),
        v19 = v139,
        v106) )
  {
    PsGetThreadWin32Thread(v27);
  }
  v151 = 0LL;
  v152 = 0LL;
  if ( v24 != (unsigned int *)v164 && v24 != (unsigned int *)v165 )
  {
    v32 = KeGetCurrentThread();
    v33 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v31)
      || (v111 = PsGetCurrentProcess(v35, v34, v36),
          v112 = PsGetProcessSessionIdEx(v111),
          v114 = PsGetCurrentThreadProcess(v113),
          v106 = v112 == (unsigned int)PsGetProcessSessionIdEx(v114),
          v19 = v139,
          v106) )
    {
      v37 = (__int64 *)PsGetThreadWin32Thread(v32);
      if ( v37 )
        v33 = *v37;
    }
    *(_QWORD *)&v151 = *(_QWORD *)(v33 + 16);
    *(_QWORD *)(v33 + 16) = &v151;
    *((_QWORD *)&v151 + 1) = v24;
    v152 = (void (__fastcall *)(_QWORD))Win32FreePool;
    v10 = v137;
  }
  *((_QWORD *)v24 + 5) = v19;
  v24[12] = v146;
  if ( v10 )
  {
    if ( *(int *)(v140 + 4) >= 0 )
    {
      *((_QWORD *)v24 + 7) = 2 * v138;
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000000u;
      v143 = 1;
      goto LABEL_24;
    }
  }
  else if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000000) != 0 )
  {
    *((_QWORD *)v24 + 7) = v138 >> 1;
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000000u;
    goto LABEL_24;
  }
  *((_QWORD *)v24 + 7) = v138;
LABEL_24:
  *((_QWORD *)v24 + 8) = a5;
  *((_QWORD *)v24 + 9) = a6;
  v38 = v24 + 20;
  v39 = v141;
  if ( v141 > v24[1] )
    goto LABEL_167;
  v40 = (char *)*((_QWORD *)v24 + 2);
  *((_QWORD *)v24 + 2) = &v40[v22];
  if ( *((_QWORD *)v24 + 4) )
  {
    *v38 = v40;
  }
  else
  {
    *v38 = v40 - (char *)v24;
    v40 = (char *)v24 + v24[6];
    *(_DWORD *)&v40[4 * v24[2]++] = 80;
  }
  v24[22] = v39;
  v41 = KeGetCurrentThread();
  v42 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v40)
    || (v115 = PsGetCurrentProcess(v44, v43, v45),
        v116 = PsGetProcessSessionIdEx(v115),
        v118 = PsGetCurrentThreadProcess(v117),
        v106 = v116 == (unsigned int)PsGetProcessSessionIdEx(v118),
        v19 = v139,
        v106) )
  {
    v46 = (__int64 *)PsGetThreadWin32Thread(v41);
    if ( v46 )
      v42 = *v46;
  }
  *(_QWORD *)&v160 = *(_QWORD *)(v42 + 416);
  *(_QWORD *)(v42 + 416) = &v160;
  *((_QWORD *)&v160 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v47 = v145;
  v48 = *(_QWORD *)(v145 + 480);
  v158 = *(_OWORD *)(v48 + 64);
  v159 = *(_QWORD *)(v48 + 80);
  *(_QWORD *)(v48 + 72) = v19;
  if ( a1 )
    v49 = *a1;
  else
    v49 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v47 + 480) + 64LL) = v49;
  if ( a1 )
    v50 = *(_QWORD *)(a1[5] + 224);
  else
    v50 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v47 + 480) + 80LL) = v50;
  if ( gdwInAtomicOperation )
  {
    v50 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v51 = KeGetCurrentThread();
  v52 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v50)
    || (v119 = PsGetCurrentProcess(v54, v53, v55),
        v120 = PsGetProcessSessionIdEx(v119),
        v122 = PsGetCurrentThreadProcess(v121),
        v120 == (unsigned int)PsGetProcessSessionIdEx(v122)) )
  {
    v56 = (__int64 *)PsGetThreadWin32Thread(v51);
    if ( v56 )
      v52 = *v56;
  }
  v135 = *(_BYTE *)(v52 + 1480);
  *(_BYTE *)(v52 + 1480) = 0;
  if ( (v135 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v52 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v58 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v57);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v24 + 2) = 0LL;
  v59 = KeUserModeCallback(35LL, v24, *v24, &v148, &v142);
  EtwTraceEndCallback(35LL);
  if ( v58 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v61 = KeGetCurrentThread();
  v62 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v60)
    || (v125 = PsGetCurrentProcess(v64, v63, v65),
        v126 = PsGetProcessSessionIdEx(v125),
        v128 = PsGetCurrentThreadProcess(v127),
        v126 == (unsigned int)PsGetProcessSessionIdEx(v128)) )
  {
    v66 = (__int64 *)PsGetThreadWin32Thread(v61);
    if ( v66 )
      v62 = *v66;
  }
  if ( (v135 & 1) != 0 )
  {
    v129 = DLT_THREADINFO::getDLT();
    v130 = (tagDomLock *)GetDomainLockRef(v129);
    tagDomLock::LockShared(v130);
    tagObjLock::LockExclusive((tagObjLock *)(v62 + 392));
  }
  *(_BYTE *)(v62 + 1480) = v135;
  ThreadUnlock1(v68, v67, v69);
  v70 = *(_QWORD *)(v47 + 480);
  *(_OWORD *)(v70 + 64) = v158;
  *(_QWORD *)(v70 + 80) = v159;
  if ( v59 < 0 || v142 != 24 )
  {
LABEL_167:
    v11 = 0LL;
    goto LABEL_168;
  }
  v71 = (__int64 *)v148;
  if ( v148 + 8 < v148 || v148 + 8 > MmUserProbeAddress )
    v71 = (__int64 *)MmUserProbeAddress;
  v72 = *v71;
  v144 = *v71;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
  {
LABEL_142:
    v11 = 0LL;
    goto LABEL_66;
  }
  if ( !v72 )
  {
    if ( v138 )
    {
      v73 = *(_BYTE **)(v140 + 8);
      v11 = 0LL;
      if ( *(int *)(v140 + 4) < 0 )
        *v73 = 0;
      else
        *(_WORD *)v73 = 0;
      goto LABEL_66;
    }
    goto LABEL_142;
  }
  v81 = v148;
  if ( v148 + 24 < v148 || v148 + 24 > MmUserProbeAddress )
    v81 = MmUserProbeAddress;
  *(_OWORD *)Length = *(_OWORD *)v81;
  Address = *(volatile void **)(v81 + 16);
  v162 = *(_OWORD *)Length;
  v163 = Address;
  v82 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( !v82 )
  {
    v83 = v140;
LABEL_81:
    v84 = *(_DWORD *)(v83 + 4);
    BytesInUnicodeString = 0;
    v85 = LODWORD(Length[1]);
    v86 = v137;
    if ( LODWORD(Length[1]) )
    {
      v87 = (WCHAR *)Address;
      ProbeForRead(Address, LODWORD(Length[1]), (v137 ^ 1) + 1);
    }
    else
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v87 = (WCHAR *)Address;
    }
    if ( v84 < 0 )
    {
      if ( v86 )
      {
        LODWORD(v88) = v85;
        if ( (unsigned int)v72 < (unsigned int)v85 )
          LODWORD(v88) = v72;
        BytesInUnicodeString = v88;
      }
      else
      {
        v98 = 2LL * (unsigned int)v72;
        if ( v98 >= v85 )
          LODWORD(v98) = v85;
        RtlUnicodeToMultiByteSize(&BytesInUnicodeString, v87, v98);
        LODWORD(v88) = BytesInUnicodeString;
      }
    }
    else if ( v86 )
    {
      if ( (unsigned int)v72 >= (unsigned int)v85 )
        LODWORD(v72) = v85;
      RtlMultiByteToUnicodeSize(&BytesInUnicodeString, (const CHAR *)v87, v72);
      LODWORD(v88) = BytesInUnicodeString >> 1;
      BytesInUnicodeString >>= 1;
    }
    else
    {
      if ( (unsigned int)v72 >= (unsigned int)v85 >> 1 )
        v88 = v85 >> 1;
      else
        LODWORD(v88) = v72;
      BytesInUnicodeString = v88;
    }
    v72 = (unsigned int)v88;
    v144 = (unsigned int)v88;
    if ( (_DWORD)v85 )
    {
      ProbeForRead(v87, v85, (v86 ^ 1) + 1);
    }
    else
    {
      v89 = MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v90 = v140;
    if ( *(int *)(v140 + 4) >= 0 )
    {
      if ( v86 )
      {
        v96 = LODWORD(Length[0]);
        if ( LODWORD(Length[0]) >= (unsigned int)v85 )
          v96 = (unsigned int)v85;
        v95 = v138;
        v97 = MBToWCSEx(v89, v87, v96, v140 + 8, v138);
        if ( v97 < v95 )
        {
          *(_WORD *)(*(_QWORD *)(v90 + 8) + 2LL * v97) = 0;
          *(_DWORD *)v90 = 2 * v97;
          goto LABEL_133;
        }
      }
      else
      {
        if ( (unsigned int)v138 >= (unsigned int)v85 >> 1 )
          v91 = v85 >> 1;
        else
          LODWORD(v91) = v138;
        v147 = v91;
        v156 = v87;
        v92 = *(WCHAR **)(v140 + 8);
        v155 = v92;
        v93 = v92;
        while ( (_DWORD)v91 )
        {
          v94 = *v87;
          *v92++ = *v87;
          v155 = v92;
          v156 = ++v87;
          if ( !v94 )
            break;
          LODWORD(v91) = v91 - 1;
          v147 = v91;
        }
        v95 = v92 - v93;
      }
      *(_DWORD *)v90 = 2 * v95;
LABEL_133:
      v11 = 0LL;
      goto LABEL_66;
    }
    if ( v86 )
    {
      if ( (unsigned int)v138 < (unsigned int)v85 )
        LODWORD(v85) = v138;
      v101 = strncpycch(*(_QWORD *)(v140 + 8), v87, (unsigned int)v85);
    }
    else
    {
      if ( LODWORD(Length[0]) >= (unsigned int)v85 >> 1 )
        v99 = v85 >> 1;
      else
        LODWORD(v99) = Length[0];
      v100 = v138;
      v101 = WCSToMBEx(0LL, v87, (unsigned int)v99, v140 + 8, v138);
      if ( v101 >= v100 )
        goto LABEL_118;
      *(_BYTE *)(v101 + *(_QWORD *)(v90 + 8)) = 0;
    }
    v100 = v101;
LABEL_118:
    *(_DWORD *)v90 = v100;
    goto LABEL_133;
  }
  v83 = v140;
  if ( (*(_DWORD *)(v82 + 84) & 1) == 0 || *(_QWORD *)(v82 + 96) != v140 )
    goto LABEL_81;
  v11 = 0LL;
LABEL_168:
  v72 = 0LL;
  v144 = 0LL;
LABEL_66:
  if ( v150 != (PVOID *)v164 )
  {
    v74 = v165;
    if ( v150 != (PVOID *)v165 )
    {
      if ( v150[4] )
      {
        v157 = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v150 + 4, &v157, 0x8000u);
      }
      v75 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v74)
        || (v131 = PsGetCurrentProcess(v77, v76, v78),
            v132 = PsGetProcessSessionIdEx(v131),
            v134 = PsGetCurrentThreadProcess(v133),
            v132 == (unsigned int)PsGetProcessSessionIdEx(v134)) )
      {
        v79 = (__int64 *)PsGetThreadWin32Thread(v75);
        if ( v79 )
          v11 = *v79;
      }
      *(_QWORD *)(v11 + 16) = v151;
      v152(*((_QWORD *)&v151 + 1));
      v72 = v144;
    }
  }
  if ( v143 )
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000000u;
  return v72;
}
