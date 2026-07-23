/*
 * XREFs of MiLogHotPatchRundown @ 0x1408CC11C
 * Callers:
 *     MiTracingEnabledCallback @ 0x1408D7B70 (MiTracingEnabledCallback.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     MiFillLogProcessInfo @ 0x14029EF60 (MiFillLogProcessInfo.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     MiGetProcessHotPatchContext @ 0x1408CA358 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1408CAD00 (MiIsActiveSystemHotPatch.c)
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
  unsigned __int64 ProcessHotPatchContext; // rbx
  signed __int64 *v35; // rsi
  __int64 v36; // rax
  unsigned __int64 jj; // rbx
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD **v41; // rax
  unsigned __int64 v42; // rcx
  _QWORD *v43; // rcx
  __int64 v44; // rdi
  int v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+30h] [rbp-D8h]
  int v47; // [rsp+48h] [rbp-C0h] BYREF
  int v48; // [rsp+4Ch] [rbp-BCh] BYREF
  int v49; // [rsp+50h] [rbp-B8h] BYREF
  int v50; // [rsp+54h] [rbp-B4h] BYREF
  int v51; // [rsp+58h] [rbp-B0h] BYREF
  int v52; // [rsp+5Ch] [rbp-ACh] BYREF
  int v53; // [rsp+60h] [rbp-A8h] BYREF
  int v54; // [rsp+64h] [rbp-A4h] BYREF
  int v55; // [rsp+68h] [rbp-A0h] BYREF
  int v56; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v57; // [rsp+70h] [rbp-98h] BYREF
  int v58; // [rsp+74h] [rbp-94h] BYREF
  int v59; // [rsp+78h] [rbp-90h] BYREF
  unsigned int ProcessId; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v61; // [rsp+80h] [rbp-88h] BYREF
  int v62; // [rsp+84h] [rbp-84h] BYREF
  int v63; // [rsp+88h] [rbp-80h] BYREF
  int v64; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v65; // [rsp+90h] [rbp-78h] BYREF
  int v66; // [rsp+94h] [rbp-74h] BYREF
  const CHAR *v67; // [rsp+98h] [rbp-70h] BYREF
  int v68; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v70[3]; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+E8h] [rbp-20h] BYREF
  int *v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  int *v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+18h]
  int *v76; // [rsp+128h] [rbp+20h]
  __int64 v77; // [rsp+130h] [rbp+28h]
  int *v78; // [rsp+138h] [rbp+30h]
  __int64 v79; // [rsp+140h] [rbp+38h]
  int *v80; // [rsp+148h] [rbp+40h]
  __int64 v81; // [rsp+150h] [rbp+48h]
  _DWORD *v82; // [rsp+158h] [rbp+50h]
  __int64 v83; // [rsp+160h] [rbp+58h]
  __int64 v84; // [rsp+168h] [rbp+60h]
  _DWORD v85[2]; // [rsp+170h] [rbp+68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+178h] [rbp+70h] BYREF
  unsigned int *p_ProcessId; // [rsp+198h] [rbp+90h]
  __int64 v88; // [rsp+1A0h] [rbp+98h]
  char v89[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 *v90; // [rsp+1B8h] [rbp+B0h]
  __int64 v91; // [rsp+1C0h] [rbp+B8h]
  int *v92; // [rsp+1C8h] [rbp+C0h]
  __int64 v93; // [rsp+1D0h] [rbp+C8h]
  int *v94; // [rsp+1D8h] [rbp+D0h]
  __int64 v95; // [rsp+1E0h] [rbp+D8h]
  int *v96; // [rsp+1E8h] [rbp+E0h]
  __int64 v97; // [rsp+1F0h] [rbp+E8h]
  int *v98; // [rsp+1F8h] [rbp+F0h]
  __int64 v99; // [rsp+200h] [rbp+F8h]
  _DWORD *v100; // [rsp+208h] [rbp+100h]
  __int64 v101; // [rsp+210h] [rbp+108h]
  __int64 v102; // [rsp+218h] [rbp+110h]
  _DWORD v103[2]; // [rsp+220h] [rbp+118h] BYREF
  int *v104; // [rsp+228h] [rbp+120h]
  __int64 v105; // [rsp+230h] [rbp+128h]
  int *v106; // [rsp+238h] [rbp+130h]
  __int64 v107; // [rsp+240h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+248h] [rbp+140h] BYREF
  int *v109; // [rsp+268h] [rbp+160h]
  __int64 v110; // [rsp+270h] [rbp+168h]
  int *v111; // [rsp+278h] [rbp+170h]
  __int64 v112; // [rsp+280h] [rbp+178h]
  int *v113; // [rsp+288h] [rbp+180h]
  __int64 v114; // [rsp+290h] [rbp+188h]
  int *v115; // [rsp+298h] [rbp+190h]
  __int64 v116; // [rsp+2A0h] [rbp+198h]
  _DWORD *v117; // [rsp+2A8h] [rbp+1A0h]
  __int64 v118; // [rsp+2B0h] [rbp+1A8h]
  PVOID v119; // [rsp+2B8h] [rbp+1B0h]
  _DWORD v120[2]; // [rsp+2C0h] [rbp+1B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+2C8h] [rbp+1C0h] BYREF
  int *v122; // [rsp+2E8h] [rbp+1E0h]
  __int64 v123; // [rsp+2F0h] [rbp+1E8h]
  int *v124; // [rsp+2F8h] [rbp+1F0h]
  __int64 v125; // [rsp+300h] [rbp+1F8h]
  _DWORD *v126; // [rsp+308h] [rbp+200h]
  __int64 v127; // [rsp+310h] [rbp+208h]
  __int64 v128; // [rsp+318h] [rbp+210h]
  _DWORD v129[2]; // [rsp+320h] [rbp+218h] BYREF
  unsigned __int64 v130; // [rsp+328h] [rbp+220h]
  int v131; // [rsp+330h] [rbp+228h]
  int v132; // [rsp+334h] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR v133; // [rsp+338h] [rbp+230h] BYREF
  int *v134; // [rsp+358h] [rbp+250h]
  __int64 v135; // [rsp+360h] [rbp+258h]
  int *v136; // [rsp+368h] [rbp+260h]
  __int64 v137; // [rsp+370h] [rbp+268h]
  _DWORD *v138; // [rsp+378h] [rbp+270h]
  __int64 v139; // [rsp+380h] [rbp+278h]
  __int64 v140; // [rsp+388h] [rbp+280h]
  _DWORD v141[2]; // [rsp+390h] [rbp+288h] BYREF
  _UNKNOWN *retaddr; // [rsp+3D0h] [rbp+2C8h] BYREF

  result = (struct _EX_RUNDOWN_REF *)&retaddr;
  memset(v70, 0, sizeof(v70));
  v67 = 0LL;
  if ( *(_QWORD *)&qword_140C4EF20 && dword_140C4CCF0 )
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
      if ( **(_DWORD **)&qword_140C4EF20 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 32LL) )
      {
        v47 = *(_DWORD *)(i + 24);
        v135 = 4LL;
        v134 = &v47;
        v48 = *(_DWORD *)(i + 28);
        v136 = &v48;
        v138 = v141;
        v140 = *(_QWORD *)(i + 40);
        v141[0] = *(unsigned __int16 *)(i + 32);
        v137 = 4LL;
        v139 = 2LL;
        v141[1] = 0;
        tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&word_140026436, v4, 1u, v45, v46, 6u, &v133);
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
        if ( **(_DWORD **)&qword_140C4EF20 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 32LL) )
        {
          v49 = *(_DWORD *)(j + 24);
          v123 = 4LL;
          v122 = &v49;
          v50 = *(_DWORD *)(j + 28);
          v124 = &v50;
          v126 = v129;
          v128 = *(_QWORD *)(j + 40);
          v129[0] = *(unsigned __int16 *)(j + 32);
          v130 = k + 40;
          v15 = *(unsigned __int8 *)(k + 41);
          v125 = 4LL;
          v127 = 2LL;
          v129[1] = 0;
          v132 = 0;
          v131 = 4 * v15 + 8;
          tlgWriteEx_EtwWriteEx(v14, (unsigned __int8 *)&unk_1400267B0, v13, 1u, v45, v46, 7u, &v121);
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
      if ( **(_DWORD **)&qword_140C4EF20 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 32LL) )
      {
        v51 = *(_DWORD *)(m + 24);
        v73 = 4LL;
        v72 = &v51;
        v52 = *(_DWORD *)(m + 28);
        v74 = &v52;
        v53 = *(_DWORD *)(m + 32);
        v76 = &v53;
        v54 = *(_DWORD *)(m + 36);
        v78 = &v54;
        v55 = *(_DWORD *)(m + 40);
        v80 = &v55;
        v82 = v85;
        v84 = *(_QWORD *)(m + 56);
        v85[0] = *(unsigned __int16 *)(m + 48);
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 2LL;
        v85[1] = 0;
        tlgWriteEx_EtwWriteEx(v25, (unsigned __int8 *)&word_14002671A, v24, 1u, v45, v46, 9u, &v71);
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
        && **(_DWORD **)&qword_140C4EF20 > 5u
        && tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 32LL) )
      {
        v56 = *(_DWORD *)(v31 + 120);
        v110 = 4LL;
        v109 = &v56;
        v57 = *(_DWORD *)(v31 + 156);
        v111 = &v57;
        v58 = *((_DWORD *)n + 30);
        v113 = &v58;
        v59 = *((_DWORD *)n + 39);
        v115 = &v59;
        v117 = v120;
        v119 = n[10];
        v120[0] = *((unsigned __int16 *)n + 36);
        v112 = 4LL;
        v114 = 4LL;
        v116 = 4LL;
        v118 = 2LL;
        v120[1] = 0;
        tlgWriteEx_EtwWriteEx(v32, (unsigned __int8 *)&word_1400266A2, v30, 1u, v45, v46, 8u, &v108);
      }
    }
    MmReleaseLoadLock((__int64)CurrentThread);
    for ( ii = 0LL; ; ii = (_QWORD *)v44 )
    {
      result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(ii);
      v44 = (__int64)result;
      if ( !result )
        return result;
      if ( ExAcquireRundownProtection(result + 139) )
        break;
LABEL_92:
      ;
    }
    KiStackAttachProcess((_KPROCESS *)v44, 0, (__int64)v70);
    ProcessHotPatchContext = (unsigned __int64)MiGetProcessHotPatchContext(v44, 0);
    if ( !ProcessHotPatchContext )
    {
LABEL_91:
      KiUnstackDetachProcess((__int64)v70, 0LL);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v44 + 1112));
      goto LABEL_92;
    }
    MiFillLogProcessInfo(v44 + 1664, &v68, &v67);
    --CurrentThread->SpecialApcDisable;
    v35 = (signed __int64 *)(ProcessHotPatchContext + 16);
    ExAcquirePushLockSharedEx(ProcessHotPatchContext + 16, 0LL);
    v36 = *(_QWORD *)(ProcessHotPatchContext + 8);
    if ( (v36 & 1) != 0 )
    {
      if ( v36 == 1 )
      {
LABEL_88:
        if ( _InterlockedCompareExchange64(v35, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v35);
        KeAbPostRelease((ULONG_PTR)v35);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        goto LABEL_91;
      }
      jj = v36 ^ (ProcessHotPatchContext | 1);
    }
    else
    {
      jj = *(_QWORD *)(ProcessHotPatchContext + 8);
    }
    while ( jj )
    {
      if ( *(_DWORD *)(jj + 88) )
      {
        v38 = *(_QWORD *)&qword_140C4EF20;
        if ( **(_DWORD **)&qword_140C4EF20 > 5u )
        {
          if ( tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 32LL) )
          {
            ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v44);
            p_ProcessId = &ProcessId;
            v88 = 4LL;
            tlgCreate1Sz_char((__int64)v89, v67);
            v39 = *(_QWORD *)(jj + 24);
            v90 = &v69;
            v61 = *(_DWORD *)(jj + 48);
            v92 = &v61;
            v62 = *(_DWORD *)(jj + 52);
            v94 = &v62;
            v63 = *(_DWORD *)(jj + 80);
            v96 = &v63;
            v64 = *(_DWORD *)(jj + 84);
            v98 = &v64;
            v100 = v103;
            v102 = *(_QWORD *)(jj + 72);
            v103[0] = *(unsigned __int16 *)(jj + 64);
            v65 = *(_DWORD *)(jj + 88);
            v104 = &v65;
            v66 = *(_DWORD *)(jj + 32);
            v106 = &v66;
            v69 = v39;
            v91 = 8LL;
            v93 = 4LL;
            v95 = 4LL;
            v97 = 4LL;
            v99 = 4LL;
            v101 = 2LL;
            v103[1] = 0;
            v105 = 4LL;
            v107 = 4LL;
            tlgWriteEx_EtwWriteEx(v38, (unsigned __int8 *)&unk_1400265E8, v40, 1u, v45, v46, 0xDu, &v86);
          }
        }
      }
      v41 = *(_QWORD ***)(jj + 8);
      v42 = jj;
      if ( v41 )
      {
        v43 = *v41;
        for ( jj = *(_QWORD *)(jj + 8); v43; v43 = (_QWORD *)*v43 )
          jj = (unsigned __int64)v43;
      }
      else
      {
        while ( 1 )
        {
          jj = *(_QWORD *)(jj + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !jj || *(_QWORD *)jj == v42 )
            break;
          v42 = jj;
        }
      }
    }
    goto LABEL_88;
  }
  return result;
}
