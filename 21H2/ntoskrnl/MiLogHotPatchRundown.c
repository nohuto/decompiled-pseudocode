/*
 * XREFs of MiLogHotPatchRundown @ 0x1408CBFBC
 * Callers:
 *     MiTracingEnabledCallback @ 0x1408D7A10 (MiTracingEnabledCallback.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140263F30 (_tlgCreate1Sz_char.c)
 *     PsGetProcessId @ 0x14027B6A0 (PsGetProcessId.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402D2F3C (_tlgWriteEx_EtwWriteEx.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFillLogProcessInfo @ 0x14035A1C4 (MiFillLogProcessInfo.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1406CE7A0 (PsGetNextProcess.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     MiGetProcessHotPatchContext @ 0x1408CA1F8 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1408CABA0 (MiIsActiveSystemHotPatch.c)
 */

struct _EX_RUNDOWN_REF *MiLogHotPatchRundown()
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v2; // rax
  unsigned __int64 i; // rbx
  __int64 v4; // r8
  __int64 v5; // r10
  _QWORD **v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  unsigned __int64 k; // rdi
  _QWORD *v11; // rax
  unsigned __int64 j; // rbx
  __int64 v13; // r8
  __int64 v14; // r10
  int v15; // eax
  _QWORD **v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rcx
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  unsigned __int64 m; // rbx
  __int64 v24; // r8
  __int64 v25; // r10
  _QWORD **v26; // rax
  unsigned __int64 v27; // rcx
  _QWORD *v28; // rcx
  PVOID *n; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r10
  _QWORD *ii; // rcx
  _DWORD *v34; // r9
  unsigned __int64 ProcessHotPatchContext; // rbx
  signed __int64 *v36; // rsi
  __int64 v37; // rax
  unsigned __int64 jj; // rbx
  __int64 v39; // r14
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD **v42; // rax
  unsigned __int64 v43; // rcx
  _QWORD *v44; // rcx
  __int64 v45; // rdi
  int v46; // [rsp+28h] [rbp-E0h]
  int v47; // [rsp+30h] [rbp-D8h]
  int v48; // [rsp+48h] [rbp-C0h] BYREF
  int v49; // [rsp+4Ch] [rbp-BCh] BYREF
  int v50; // [rsp+50h] [rbp-B8h] BYREF
  int v51; // [rsp+54h] [rbp-B4h] BYREF
  int v52; // [rsp+58h] [rbp-B0h] BYREF
  int v53; // [rsp+5Ch] [rbp-ACh] BYREF
  int v54; // [rsp+60h] [rbp-A8h] BYREF
  int v55; // [rsp+64h] [rbp-A4h] BYREF
  int v56; // [rsp+68h] [rbp-A0h] BYREF
  int v57; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v58; // [rsp+70h] [rbp-98h] BYREF
  int v59; // [rsp+74h] [rbp-94h] BYREF
  int v60; // [rsp+78h] [rbp-90h] BYREF
  unsigned int ProcessId; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v62; // [rsp+80h] [rbp-88h] BYREF
  int v63; // [rsp+84h] [rbp-84h] BYREF
  int v64; // [rsp+88h] [rbp-80h] BYREF
  int v65; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v66; // [rsp+90h] [rbp-78h] BYREF
  int v67; // [rsp+94h] [rbp-74h] BYREF
  const CHAR *v68; // [rsp+98h] [rbp-70h] BYREF
  int v69; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v71[3]; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+E8h] [rbp-20h] BYREF
  int *v73; // [rsp+108h] [rbp+0h]
  __int64 v74; // [rsp+110h] [rbp+8h]
  int *v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+120h] [rbp+18h]
  int *v77; // [rsp+128h] [rbp+20h]
  __int64 v78; // [rsp+130h] [rbp+28h]
  int *v79; // [rsp+138h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+38h]
  int *v81; // [rsp+148h] [rbp+40h]
  __int64 v82; // [rsp+150h] [rbp+48h]
  _DWORD *v83; // [rsp+158h] [rbp+50h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  __int64 v85; // [rsp+168h] [rbp+60h]
  _DWORD v86[2]; // [rsp+170h] [rbp+68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+178h] [rbp+70h] BYREF
  unsigned int *p_ProcessId; // [rsp+198h] [rbp+90h]
  __int64 v89; // [rsp+1A0h] [rbp+98h]
  char v90[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 *v91; // [rsp+1B8h] [rbp+B0h]
  __int64 v92; // [rsp+1C0h] [rbp+B8h]
  int *v93; // [rsp+1C8h] [rbp+C0h]
  __int64 v94; // [rsp+1D0h] [rbp+C8h]
  int *v95; // [rsp+1D8h] [rbp+D0h]
  __int64 v96; // [rsp+1E0h] [rbp+D8h]
  int *v97; // [rsp+1E8h] [rbp+E0h]
  __int64 v98; // [rsp+1F0h] [rbp+E8h]
  int *v99; // [rsp+1F8h] [rbp+F0h]
  __int64 v100; // [rsp+200h] [rbp+F8h]
  _DWORD *v101; // [rsp+208h] [rbp+100h]
  __int64 v102; // [rsp+210h] [rbp+108h]
  __int64 v103; // [rsp+218h] [rbp+110h]
  _DWORD v104[2]; // [rsp+220h] [rbp+118h] BYREF
  int *v105; // [rsp+228h] [rbp+120h]
  __int64 v106; // [rsp+230h] [rbp+128h]
  int *v107; // [rsp+238h] [rbp+130h]
  __int64 v108; // [rsp+240h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+248h] [rbp+140h] BYREF
  int *v110; // [rsp+268h] [rbp+160h]
  __int64 v111; // [rsp+270h] [rbp+168h]
  int *v112; // [rsp+278h] [rbp+170h]
  __int64 v113; // [rsp+280h] [rbp+178h]
  int *v114; // [rsp+288h] [rbp+180h]
  __int64 v115; // [rsp+290h] [rbp+188h]
  int *v116; // [rsp+298h] [rbp+190h]
  __int64 v117; // [rsp+2A0h] [rbp+198h]
  _DWORD *v118; // [rsp+2A8h] [rbp+1A0h]
  __int64 v119; // [rsp+2B0h] [rbp+1A8h]
  PVOID v120; // [rsp+2B8h] [rbp+1B0h]
  _DWORD v121[2]; // [rsp+2C0h] [rbp+1B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+2C8h] [rbp+1C0h] BYREF
  int *v123; // [rsp+2E8h] [rbp+1E0h]
  __int64 v124; // [rsp+2F0h] [rbp+1E8h]
  int *v125; // [rsp+2F8h] [rbp+1F0h]
  __int64 v126; // [rsp+300h] [rbp+1F8h]
  _DWORD *v127; // [rsp+308h] [rbp+200h]
  __int64 v128; // [rsp+310h] [rbp+208h]
  __int64 v129; // [rsp+318h] [rbp+210h]
  _DWORD v130[2]; // [rsp+320h] [rbp+218h] BYREF
  unsigned __int64 v131; // [rsp+328h] [rbp+220h]
  int v132; // [rsp+330h] [rbp+228h]
  int v133; // [rsp+334h] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+338h] [rbp+230h] BYREF
  int *v135; // [rsp+358h] [rbp+250h]
  __int64 v136; // [rsp+360h] [rbp+258h]
  int *v137; // [rsp+368h] [rbp+260h]
  __int64 v138; // [rsp+370h] [rbp+268h]
  _DWORD *v139; // [rsp+378h] [rbp+270h]
  __int64 v140; // [rsp+380h] [rbp+278h]
  __int64 v141; // [rsp+388h] [rbp+280h]
  _DWORD v142[2]; // [rsp+390h] [rbp+288h] BYREF
  _UNKNOWN *retaddr; // [rsp+3D0h] [rbp+2C8h] BYREF

  result = (struct _EX_RUNDOWN_REF *)&retaddr;
  memset(v71, 0, sizeof(v71));
  v68 = 0LL;
  if ( *(_QWORD *)&qword_140C4EEE0 && dword_140C4CCB0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
    v2 = *(_QWORD **)&MiGlobalHotPatchList;
    i = 0LL;
    while ( v2 )
    {
      i = (unsigned __int64)v2;
      v2 = (_QWORD *)*v2;
    }
    while ( i )
    {
      if ( **(_DWORD **)&qword_140C4EEE0 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 32LL) )
      {
        v48 = *(_DWORD *)(i + 24);
        v136 = 4LL;
        v135 = &v48;
        v49 = *(_DWORD *)(i + 28);
        v137 = &v49;
        v139 = v142;
        v141 = *(_QWORD *)(i + 40);
        v142[0] = *(unsigned __int16 *)(i + 32);
        v138 = 4LL;
        v140 = 2LL;
        v142[1] = 0;
        tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&byte_1400263BD, v4, 1u, v46, v47, 6u, &v134);
      }
      v6 = *(_QWORD ***)(i + 8);
      v7 = i;
      if ( v6 )
      {
        v8 = *v6;
        for ( i = *(_QWORD *)(i + 8); v8; v8 = (_QWORD *)*v8 )
          i = (unsigned __int64)v8;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v7 )
            break;
          v7 = i;
        }
      }
    }
    v9 = (_QWORD *)MiUserSidPatchLists;
    k = 0LL;
    while ( v9 )
    {
      k = (unsigned __int64)v9;
      v9 = (_QWORD *)*v9;
    }
    while ( k )
    {
      v11 = *(_QWORD **)(k + 24);
      j = 0LL;
      while ( v11 )
      {
        j = (unsigned __int64)v11;
        v11 = (_QWORD *)*v11;
      }
      while ( j )
      {
        if ( **(_DWORD **)&qword_140C4EEE0 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 32LL) )
        {
          v50 = *(_DWORD *)(j + 24);
          v124 = 4LL;
          v123 = &v50;
          v51 = *(_DWORD *)(j + 28);
          v125 = &v51;
          v127 = v130;
          v129 = *(_QWORD *)(j + 40);
          v130[0] = *(unsigned __int16 *)(j + 32);
          v131 = k + 40;
          v15 = *(unsigned __int8 *)(k + 41);
          v126 = 4LL;
          v128 = 2LL;
          v130[1] = 0;
          v133 = 0;
          v132 = 4 * v15 + 8;
          tlgWriteEx_EtwWriteEx(v14, (unsigned __int8 *)&word_14002635A, v13, 1u, v46, v47, 7u, &v122);
        }
        v16 = *(_QWORD ***)(j + 8);
        v17 = j;
        if ( v16 )
        {
          v18 = *v16;
          for ( j = *(_QWORD *)(j + 8); v18; v18 = (_QWORD *)*v18 )
            j = (unsigned __int64)v18;
        }
        else
        {
          while ( 1 )
          {
            j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !j || *(_QWORD *)j == v17 )
              break;
            v17 = j;
          }
        }
      }
      v19 = *(_QWORD ***)(k + 8);
      v20 = k;
      if ( v19 )
      {
        v21 = *v19;
        for ( k = *(_QWORD *)(k + 8); v21; v21 = (_QWORD *)*v21 )
          k = (unsigned __int64)v21;
      }
      else
      {
        while ( 1 )
        {
          k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !k || *(_QWORD *)k == v20 )
            break;
          v20 = k;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MiHotPatchListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&MiHotPatchListLock);
    KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MmAcquireLoadLock();
    v22 = (_QWORD *)MiSecureImageActivePatches;
    m = 0LL;
    while ( v22 )
    {
      m = (unsigned __int64)v22;
      v22 = (_QWORD *)*v22;
    }
    while ( m )
    {
      if ( **(_DWORD **)&qword_140C4EEE0 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 32LL) )
      {
        v52 = *(_DWORD *)(m + 24);
        v74 = 4LL;
        v73 = &v52;
        v53 = *(_DWORD *)(m + 28);
        v75 = &v53;
        v54 = *(_DWORD *)(m + 32);
        v77 = &v54;
        v55 = *(_DWORD *)(m + 36);
        v79 = &v55;
        v56 = *(_DWORD *)(m + 40);
        v81 = &v56;
        v83 = v86;
        v85 = *(_QWORD *)(m + 56);
        v86[0] = *(unsigned __int16 *)(m + 48);
        v76 = 4LL;
        v78 = 4LL;
        v80 = 4LL;
        v82 = 4LL;
        v84 = 2LL;
        v86[1] = 0;
        tlgWriteEx_EtwWriteEx(v25, (unsigned __int8 *)&byte_140026133, v24, 1u, v46, v47, 9u, &v72);
      }
      v26 = *(_QWORD ***)(m + 8);
      v27 = m;
      if ( v26 )
      {
        v28 = *v26;
        for ( m = *(_QWORD *)(m + 8); v28; v28 = (_QWORD *)*v28 )
          m = (unsigned __int64)v28;
      }
      else
      {
        while ( 1 )
        {
          m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !m || *(_QWORD *)m == v27 )
            break;
          v27 = m;
        }
      }
    }
    for ( n = (PVOID *)PsLoadedModuleList; n != &PsLoadedModuleList; n = (PVOID *)*n )
    {
      if ( MiIsActiveSystemHotPatch((__int64)n)
        && **(_DWORD **)&qword_140C4EEE0 > 5u
        && tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 32LL) )
      {
        v57 = *(_DWORD *)(v31 + 120);
        v111 = 4LL;
        v110 = &v57;
        v58 = *(_DWORD *)(v31 + 156);
        v112 = &v58;
        v59 = *((_DWORD *)n + 30);
        v114 = &v59;
        v60 = *((_DWORD *)n + 39);
        v116 = &v60;
        v118 = v121;
        v120 = n[10];
        v121[0] = *((unsigned __int16 *)n + 36);
        v113 = 4LL;
        v115 = 4LL;
        v117 = 4LL;
        v119 = 2LL;
        v121[1] = 0;
        tlgWriteEx_EtwWriteEx(v32, (unsigned __int8 *)&byte_1400260BB, v30, 1u, v46, v47, 8u, &v109);
      }
    }
    MmReleaseLoadLock((__int64)CurrentThread);
    for ( ii = 0LL; ; ii = (_QWORD *)v45 )
    {
      result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(ii);
      v45 = (__int64)result;
      if ( !result )
        return result;
      if ( ExAcquireRundownProtection_0(result + 139) )
        break;
LABEL_92:
      ;
    }
    KiStackAttachProcess((_KPROCESS *)v45, 0LL, (__int64)v71, v34);
    ProcessHotPatchContext = (unsigned __int64)MiGetProcessHotPatchContext(v45, 0);
    if ( !ProcessHotPatchContext )
    {
LABEL_91:
      KiUnstackDetachProcess((__int64)v71, 0);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v45 + 1112));
      goto LABEL_92;
    }
    MiFillLogProcessInfo(v45 + 1664, &v69, &v68);
    --CurrentThread->SpecialApcDisable;
    v36 = (signed __int64 *)(ProcessHotPatchContext + 16);
    ExAcquirePushLockSharedEx(ProcessHotPatchContext + 16, 0LL);
    v37 = *(_QWORD *)(ProcessHotPatchContext + 8);
    if ( (v37 & 1) != 0 )
    {
      if ( v37 == 1 )
      {
LABEL_88:
        if ( _InterlockedCompareExchange64(v36, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v36);
        KeAbPostRelease((ULONG_PTR)v36);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        goto LABEL_91;
      }
      jj = v37 ^ (ProcessHotPatchContext | 1);
    }
    else
    {
      jj = *(_QWORD *)(ProcessHotPatchContext + 8);
    }
    while ( jj )
    {
      if ( *(_DWORD *)(jj + 88) )
      {
        v39 = *(_QWORD *)&qword_140C4EEE0;
        if ( **(_DWORD **)&qword_140C4EEE0 > 5u )
        {
          if ( tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 32LL) )
          {
            ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v45);
            p_ProcessId = &ProcessId;
            v89 = 4LL;
            tlgCreate1Sz_char((__int64)v90, v68);
            v40 = *(_QWORD *)(jj + 24);
            v91 = &v70;
            v62 = *(_DWORD *)(jj + 48);
            v93 = &v62;
            v63 = *(_DWORD *)(jj + 52);
            v95 = &v63;
            v64 = *(_DWORD *)(jj + 80);
            v97 = &v64;
            v65 = *(_DWORD *)(jj + 84);
            v99 = &v65;
            v101 = v104;
            v103 = *(_QWORD *)(jj + 72);
            v104[0] = *(unsigned __int16 *)(jj + 64);
            v66 = *(_DWORD *)(jj + 88);
            v105 = &v66;
            v67 = *(_DWORD *)(jj + 32);
            v107 = &v67;
            v70 = v40;
            v92 = 8LL;
            v94 = 4LL;
            v96 = 4LL;
            v98 = 4LL;
            v100 = 4LL;
            v102 = 2LL;
            v104[1] = 0;
            v106 = 4LL;
            v108 = 4LL;
            tlgWriteEx_EtwWriteEx(v39, (unsigned __int8 *)&byte_140026001, v41, 1u, v46, v47, 0xDu, &v87);
          }
        }
      }
      v42 = *(_QWORD ***)(jj + 8);
      v43 = jj;
      if ( v42 )
      {
        v44 = *v42;
        for ( jj = *(_QWORD *)(jj + 8); v44; v44 = (_QWORD *)*v44 )
          jj = (unsigned __int64)v44;
      }
      else
      {
        while ( 1 )
        {
          jj = *(_QWORD *)(jj + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !jj || *(_QWORD *)jj == v43 )
            break;
          v43 = jj;
        }
      }
    }
    goto LABEL_88;
  }
  return result;
}
