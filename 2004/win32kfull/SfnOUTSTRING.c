/*
 * XREFs of SfnOUTSTRING @ 0x1C00E8DD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     MBToWCSEx @ 0x1C00E9980 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C00E99E8 (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     strncpycch @ 0x1C025F2E8 (strncpycch.c)
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
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  bool v60; // di
  int v61; // r12d
  __int64 v62; // rcx
  struct _KTHREAD *v63; // r15
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 *v73; // rax
  __int64 v74; // r12
  _BYTE *v75; // rax
  _BYTE *v76; // rcx
  struct _KTHREAD *v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 *v81; // rax
  ULONG64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  int v86; // r14d
  SIZE_T v87; // rdi
  int v88; // r15d
  WCHAR *v89; // rbx
  SIZE_T v90; // rax
  ULONG64 v91; // rcx
  __int64 v92; // r14
  SIZE_T v93; // rax
  WCHAR *v94; // rdx
  WCHAR *v95; // r8
  WCHAR v96; // cx
  unsigned int v97; // esi
  __int64 v98; // r8
  unsigned int v99; // eax
  unsigned __int64 v100; // rax
  SIZE_T v101; // rax
  unsigned int v102; // esi
  unsigned int v103; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v106; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v108; // zf
  __int64 v109; // rax
  int v110; // ebx
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // ebx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rax
  int v118; // ebx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rax
  int v122; // ebx
  __int64 v123; // rcx
  __int64 v124; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v127; // rax
  int v128; // edi
  __int64 v129; // rcx
  __int64 v130; // rax
  unsigned int v131; // eax
  tagDomLock *v132; // rax
  __int64 v133; // rax
  int v134; // ebx
  __int64 v135; // rcx
  __int64 v136; // rax
  char v137; // [rsp+31h] [rbp-3E7h]
  ULONG BytesInUnicodeString; // [rsp+34h] [rbp-3E4h] BYREF
  int v139; // [rsp+38h] [rbp-3E0h]
  unsigned __int64 v140; // [rsp+40h] [rbp-3D8h]
  __int64 v141; // [rsp+48h] [rbp-3D0h]
  __int64 v142; // [rsp+50h] [rbp-3C8h]
  unsigned int v143; // [rsp+58h] [rbp-3C0h]
  int v144; // [rsp+5Ch] [rbp-3BCh] BYREF
  int v145; // [rsp+60h] [rbp-3B8h]
  __int64 v146; // [rsp+68h] [rbp-3B0h]
  __int64 v147; // [rsp+70h] [rbp-3A8h]
  unsigned int v148; // [rsp+78h] [rbp-3A0h]
  int v149; // [rsp+80h] [rbp-398h]
  unsigned __int64 v150; // [rsp+98h] [rbp-380h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-378h] BYREF
  PVOID *v152; // [rsp+A8h] [rbp-370h]
  __int128 v153; // [rsp+B0h] [rbp-368h] BYREF
  void (__fastcall *v154)(_QWORD); // [rsp+C0h] [rbp-358h]
  SIZE_T Length[2]; // [rsp+C8h] [rbp-350h]
  volatile void *Address; // [rsp+D8h] [rbp-340h]
  WCHAR *v157; // [rsp+E8h] [rbp-330h]
  WCHAR *v158; // [rsp+F0h] [rbp-328h]
  ULONG_PTR v159; // [rsp+F8h] [rbp-320h] BYREF
  __int128 v160; // [rsp+100h] [rbp-318h]
  __int64 v161; // [rsp+110h] [rbp-308h]
  __int128 v162; // [rsp+118h] [rbp-300h] BYREF
  __int64 v163; // [rsp+128h] [rbp-2F0h]
  __int128 v164; // [rsp+158h] [rbp-2C0h]
  volatile void *v165; // [rsp+168h] [rbp-2B0h]
  _BYTE v166[96]; // [rsp+170h] [rbp-2A8h] BYREF
  _BYTE v167[512]; // [rsp+1D0h] [rbp-248h] BYREF

  v142 = a4;
  v140 = a3;
  v148 = a2;
  v10 = a7 & 1;
  v139 = v10;
  v11 = 0LL;
  v145 = 0;
  memset(v166, 0, sizeof(v166));
  v152 = (PVOID *)v166;
  v150 = 0LL;
  v144 = 0;
  v146 = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  v147 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (CurrentProcess = PsGetCurrentProcess(v16, v15, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v106),
        v108 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
        v13 = 0LL,
        v108) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v13 = *ThreadWin32Thread;
      v147 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(v13 + 464);
  else
    v19 = 0LL;
  v141 = v19;
  v20 = *(_DWORD *)(a4 + 4);
  v21 = (v20 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v21 < (v20 & 0x7FFFFFFFu) )
    goto LABEL_168;
  v143 = (v20 & 0x7FFFFFFF) + 2;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x8000000) == 0 && v20 < 0 && (a7 & 1) == 0 )
  {
    v21 *= 2LL;
    if ( v21 > 0xFFFFFFFF )
      goto LABEL_168;
    v143 = v21;
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
      v24 = (unsigned int *)v167;
      memset(v167, 0, sizeof(v167));
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
  v152 = (PVOID *)v24;
  v27 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v25)
    || (v109 = PsGetCurrentProcess(v29, v28, v30),
        v110 = PsGetProcessSessionIdEx(v109),
        v112 = PsGetCurrentThreadProcess(v111),
        v108 = v110 == (unsigned int)PsGetProcessSessionIdEx(v112),
        v19 = v141,
        v108) )
  {
    PsGetThreadWin32Thread(v27);
  }
  v153 = 0LL;
  v154 = 0LL;
  if ( v24 != (unsigned int *)v166 && v24 != (unsigned int *)v167 )
  {
    v32 = KeGetCurrentThread();
    v33 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v31)
      || (v113 = PsGetCurrentProcess(v35, v34, v36),
          v114 = PsGetProcessSessionIdEx(v113),
          v116 = PsGetCurrentThreadProcess(v115),
          v108 = v114 == (unsigned int)PsGetProcessSessionIdEx(v116),
          v19 = v141,
          v108) )
    {
      v37 = (__int64 *)PsGetThreadWin32Thread(v32);
      if ( v37 )
        v33 = *v37;
    }
    *(_QWORD *)&v153 = *(_QWORD *)(v33 + 16);
    *(_QWORD *)(v33 + 16) = &v153;
    *((_QWORD *)&v153 + 1) = v24;
    v154 = (void (__fastcall *)(_QWORD))Win32FreePool;
    v10 = v139;
  }
  *((_QWORD *)v24 + 5) = v19;
  v24[12] = v148;
  if ( v10 )
  {
    if ( *(int *)(v142 + 4) >= 0 )
    {
      *((_QWORD *)v24 + 7) = 2 * v140;
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x8000000u;
      v145 = 1;
      goto LABEL_24;
    }
  }
  else if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x8000000) != 0 )
  {
    *((_QWORD *)v24 + 7) = v140 >> 1;
    *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000000u;
    goto LABEL_24;
  }
  *((_QWORD *)v24 + 7) = v140;
LABEL_24:
  *((_QWORD *)v24 + 8) = a5;
  *((_QWORD *)v24 + 9) = a6;
  v38 = v24 + 20;
  v39 = v143;
  if ( v143 > v24[1] )
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
    || (v117 = PsGetCurrentProcess(v44, v43, v45),
        v118 = PsGetProcessSessionIdEx(v117),
        v120 = PsGetCurrentThreadProcess(v119),
        v108 = v118 == (unsigned int)PsGetProcessSessionIdEx(v120),
        v19 = v141,
        v108) )
  {
    v46 = (__int64 *)PsGetThreadWin32Thread(v41);
    if ( v46 )
      v42 = *v46;
  }
  *(_QWORD *)&v162 = *(_QWORD *)(v42 + 408);
  *(_QWORD *)(v42 + 408) = &v162;
  *((_QWORD *)&v162 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v47 = v147;
  v48 = *(_QWORD *)(v147 + 472);
  v160 = *(_OWORD *)(v48 + 64);
  v161 = *(_QWORD *)(v48 + 80);
  *(_QWORD *)(v48 + 72) = v19;
  if ( a1 )
    v49 = *a1;
  else
    v49 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v47 + 472) + 64LL) = v49;
  if ( a1 )
    v50 = *(_QWORD *)(a1[5] + 224);
  else
    v50 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v47 + 472) + 80LL) = v50;
  if ( gdwInAtomicOperation )
  {
    v50 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v51 = KeGetCurrentThread();
  v52 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v50)
    || (v121 = PsGetCurrentProcess(v54, v53, v55),
        v122 = PsGetProcessSessionIdEx(v121),
        v124 = PsGetCurrentThreadProcess(v123),
        v122 == (unsigned int)PsGetProcessSessionIdEx(v124)) )
  {
    v56 = (__int64 *)PsGetThreadWin32Thread(v51);
    if ( v56 )
      v52 = *v56;
  }
  v137 = *(_BYTE *)(v52 + 1472);
  *(_BYTE *)(v52 + 1472) = 0;
  if ( (v137 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v52 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v60 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v58, v57, v59);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v24 + 2) = 0LL;
  v61 = KeUserModeCallback(35LL, v24, *v24, &v150, &v144);
  EtwTraceEndCallback(35LL);
  if ( v60 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v63 = KeGetCurrentThread();
  v64 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v62)
    || (v127 = PsGetCurrentProcess(v66, v65, v67),
        v128 = PsGetProcessSessionIdEx(v127),
        v130 = PsGetCurrentThreadProcess(v129),
        v128 == (unsigned int)PsGetProcessSessionIdEx(v130)) )
  {
    v68 = (__int64 *)PsGetThreadWin32Thread(v63);
    if ( v68 )
      v64 = *v68;
  }
  if ( (v137 & 1) != 0 )
  {
    v131 = DLT_THREADINFO::getDLT();
    v132 = (tagDomLock *)GetDomainLockRef(v131);
    tagDomLock::LockShared(v132);
    tagObjLock::LockExclusive((tagObjLock *)(v64 + 384));
  }
  *(_BYTE *)(v64 + 1472) = v137;
  ThreadUnlock1(v70, v69, v71);
  v72 = *(_QWORD *)(v47 + 472);
  *(_OWORD *)(v72 + 64) = v160;
  *(_QWORD *)(v72 + 80) = v161;
  if ( v61 < 0 || v144 != 24 )
  {
LABEL_167:
    v11 = 0LL;
    goto LABEL_168;
  }
  v73 = (__int64 *)v150;
  if ( v150 + 8 < v150 || v150 + 8 > MmUserProbeAddress )
    v73 = (__int64 *)MmUserProbeAddress;
  v74 = *v73;
  v146 = *v73;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
  {
LABEL_142:
    v11 = 0LL;
    goto LABEL_66;
  }
  if ( !v74 )
  {
    if ( v140 )
    {
      v75 = *(_BYTE **)(v142 + 8);
      v11 = 0LL;
      if ( *(int *)(v142 + 4) < 0 )
        *v75 = 0;
      else
        *(_WORD *)v75 = 0;
      goto LABEL_66;
    }
    goto LABEL_142;
  }
  v83 = v150;
  if ( v150 + 24 < v150 || v150 + 24 > MmUserProbeAddress )
    v83 = MmUserProbeAddress;
  *(_OWORD *)Length = *(_OWORD *)v83;
  Address = *(volatile void **)(v83 + 16);
  v164 = *(_OWORD *)Length;
  v165 = Address;
  v84 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( !v84 )
  {
    v85 = v142;
LABEL_81:
    v86 = *(_DWORD *)(v85 + 4);
    BytesInUnicodeString = 0;
    v87 = LODWORD(Length[1]);
    v88 = v139;
    if ( LODWORD(Length[1]) )
    {
      v89 = (WCHAR *)Address;
      ProbeForRead(Address, LODWORD(Length[1]), (v139 ^ 1) + 1);
    }
    else
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v89 = (WCHAR *)Address;
    }
    if ( v86 < 0 )
    {
      if ( v88 )
      {
        LODWORD(v90) = v87;
        if ( (unsigned int)v74 < (unsigned int)v87 )
          LODWORD(v90) = v74;
        BytesInUnicodeString = v90;
      }
      else
      {
        v100 = 2LL * (unsigned int)v74;
        if ( v100 >= v87 )
          LODWORD(v100) = v87;
        RtlUnicodeToMultiByteSize(&BytesInUnicodeString, v89, v100);
        LODWORD(v90) = BytesInUnicodeString;
      }
    }
    else if ( v88 )
    {
      if ( (unsigned int)v74 >= (unsigned int)v87 )
        LODWORD(v74) = v87;
      RtlMultiByteToUnicodeSize(&BytesInUnicodeString, (const CHAR *)v89, v74);
      LODWORD(v90) = BytesInUnicodeString >> 1;
      BytesInUnicodeString >>= 1;
    }
    else
    {
      if ( (unsigned int)v74 >= (unsigned int)v87 >> 1 )
        v90 = v87 >> 1;
      else
        LODWORD(v90) = v74;
      BytesInUnicodeString = v90;
    }
    v74 = (unsigned int)v90;
    v146 = (unsigned int)v90;
    if ( (_DWORD)v87 )
    {
      ProbeForRead(v89, v87, (v88 ^ 1) + 1);
    }
    else
    {
      v91 = MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v92 = v142;
    if ( *(int *)(v142 + 4) >= 0 )
    {
      if ( v88 )
      {
        v98 = LODWORD(Length[0]);
        if ( LODWORD(Length[0]) >= (unsigned int)v87 )
          v98 = (unsigned int)v87;
        v97 = v140;
        v99 = MBToWCSEx(v91, v89, v98, v142 + 8, v140);
        if ( v99 < v97 )
        {
          *(_WORD *)(*(_QWORD *)(v92 + 8) + 2LL * v99) = 0;
          *(_DWORD *)v92 = 2 * v99;
          goto LABEL_133;
        }
      }
      else
      {
        if ( (unsigned int)v140 >= (unsigned int)v87 >> 1 )
          v93 = v87 >> 1;
        else
          LODWORD(v93) = v140;
        v149 = v93;
        v158 = v89;
        v94 = *(WCHAR **)(v142 + 8);
        v157 = v94;
        v95 = v94;
        while ( (_DWORD)v93 )
        {
          v96 = *v89;
          *v94++ = *v89;
          v157 = v94;
          v158 = ++v89;
          if ( !v96 )
            break;
          LODWORD(v93) = v93 - 1;
          v149 = v93;
        }
        v97 = v94 - v95;
      }
      *(_DWORD *)v92 = 2 * v97;
LABEL_133:
      v11 = 0LL;
      goto LABEL_66;
    }
    if ( v88 )
    {
      if ( (unsigned int)v140 < (unsigned int)v87 )
        LODWORD(v87) = v140;
      v103 = strncpycch(*(_QWORD *)(v142 + 8), v89, (unsigned int)v87);
    }
    else
    {
      if ( LODWORD(Length[0]) >= (unsigned int)v87 >> 1 )
        v101 = v87 >> 1;
      else
        LODWORD(v101) = Length[0];
      v102 = v140;
      v103 = WCSToMBEx(0LL, v89, (unsigned int)v101, v142 + 8, v140);
      if ( v103 >= v102 )
        goto LABEL_118;
      *(_BYTE *)(v103 + *(_QWORD *)(v92 + 8)) = 0;
    }
    v102 = v103;
LABEL_118:
    *(_DWORD *)v92 = v102;
    goto LABEL_133;
  }
  v85 = v142;
  if ( (*(_DWORD *)(v84 + 84) & 1) == 0 || *(_QWORD *)(v84 + 96) != v142 )
    goto LABEL_81;
  v11 = 0LL;
LABEL_168:
  v74 = 0LL;
  v146 = 0LL;
LABEL_66:
  if ( v152 != (PVOID *)v166 )
  {
    v76 = v167;
    if ( v152 != (PVOID *)v167 )
    {
      if ( v152[4] )
      {
        v159 = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v152 + 4, &v159, 0x8000u);
      }
      v77 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v76)
        || (v133 = PsGetCurrentProcess(v79, v78, v80),
            v134 = PsGetProcessSessionIdEx(v133),
            v136 = PsGetCurrentThreadProcess(v135),
            v134 == (unsigned int)PsGetProcessSessionIdEx(v136)) )
      {
        v81 = (__int64 *)PsGetThreadWin32Thread(v77);
        if ( v81 )
          v11 = *v81;
      }
      *(_QWORD *)(v11 + 16) = v153;
      v154(*((_QWORD *)&v153 + 1));
      v74 = v146;
    }
  }
  if ( v145 )
    *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000000u;
  return v74;
}
