/*
 * XREFs of MiLogHotPatchRundown @ 0x1408C766C
 * Callers:
 *     MiTracingEnabledCallback @ 0x1408D30C0 (MiTracingEnabledCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     MiFillLogProcessInfo @ 0x14030CA50 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14032274C (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x14033DAA4 (_tlgCreate1Sz_char.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     MiGetProcessHotPatchContext @ 0x1408C58A8 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1408C6250 (MiIsActiveSystemHotPatch.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  unsigned __int64 m; // rbx
  __int64 v27; // r8
  __int64 v28; // r10
  _QWORD **v29; // rax
  unsigned __int64 v30; // rcx
  _QWORD *v31; // rcx
  PVOID *n; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r10
  _QWORD *ii; // rcx
  _DWORD *v37; // r9
  unsigned __int64 ProcessHotPatchContext; // rbx
  __int64 v39; // r8
  _DWORD *v40; // r9
  signed __int64 *v41; // rsi
  __int64 v42; // rax
  unsigned __int64 jj; // rbx
  __int64 v44; // r14
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD **v47; // rax
  unsigned __int64 v48; // rcx
  _QWORD *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdi
  int v54; // [rsp+28h] [rbp-E0h]
  int v55; // [rsp+30h] [rbp-D8h]
  int v56; // [rsp+48h] [rbp-C0h] BYREF
  int v57; // [rsp+4Ch] [rbp-BCh] BYREF
  int v58; // [rsp+50h] [rbp-B8h] BYREF
  int v59; // [rsp+54h] [rbp-B4h] BYREF
  int v60; // [rsp+58h] [rbp-B0h] BYREF
  int v61; // [rsp+5Ch] [rbp-ACh] BYREF
  int v62; // [rsp+60h] [rbp-A8h] BYREF
  int v63; // [rsp+64h] [rbp-A4h] BYREF
  int v64; // [rsp+68h] [rbp-A0h] BYREF
  int v65; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v66; // [rsp+70h] [rbp-98h] BYREF
  int v67; // [rsp+74h] [rbp-94h] BYREF
  int v68; // [rsp+78h] [rbp-90h] BYREF
  unsigned int ProcessId; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v70; // [rsp+80h] [rbp-88h] BYREF
  int v71; // [rsp+84h] [rbp-84h] BYREF
  int v72; // [rsp+88h] [rbp-80h] BYREF
  int v73; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v74; // [rsp+90h] [rbp-78h] BYREF
  int v75; // [rsp+94h] [rbp-74h] BYREF
  const CHAR *v76; // [rsp+98h] [rbp-70h] BYREF
  int v77; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v79[3]; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+E8h] [rbp-20h] BYREF
  int *v81; // [rsp+108h] [rbp+0h]
  __int64 v82; // [rsp+110h] [rbp+8h]
  int *v83; // [rsp+118h] [rbp+10h]
  __int64 v84; // [rsp+120h] [rbp+18h]
  int *v85; // [rsp+128h] [rbp+20h]
  __int64 v86; // [rsp+130h] [rbp+28h]
  int *v87; // [rsp+138h] [rbp+30h]
  __int64 v88; // [rsp+140h] [rbp+38h]
  int *v89; // [rsp+148h] [rbp+40h]
  __int64 v90; // [rsp+150h] [rbp+48h]
  _DWORD *v91; // [rsp+158h] [rbp+50h]
  __int64 v92; // [rsp+160h] [rbp+58h]
  __int64 v93; // [rsp+168h] [rbp+60h]
  _DWORD v94[2]; // [rsp+170h] [rbp+68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+178h] [rbp+70h] BYREF
  unsigned int *p_ProcessId; // [rsp+198h] [rbp+90h]
  __int64 v97; // [rsp+1A0h] [rbp+98h]
  char v98[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 *v99; // [rsp+1B8h] [rbp+B0h]
  __int64 v100; // [rsp+1C0h] [rbp+B8h]
  int *v101; // [rsp+1C8h] [rbp+C0h]
  __int64 v102; // [rsp+1D0h] [rbp+C8h]
  int *v103; // [rsp+1D8h] [rbp+D0h]
  __int64 v104; // [rsp+1E0h] [rbp+D8h]
  int *v105; // [rsp+1E8h] [rbp+E0h]
  __int64 v106; // [rsp+1F0h] [rbp+E8h]
  int *v107; // [rsp+1F8h] [rbp+F0h]
  __int64 v108; // [rsp+200h] [rbp+F8h]
  _DWORD *v109; // [rsp+208h] [rbp+100h]
  __int64 v110; // [rsp+210h] [rbp+108h]
  __int64 v111; // [rsp+218h] [rbp+110h]
  _DWORD v112[2]; // [rsp+220h] [rbp+118h] BYREF
  int *v113; // [rsp+228h] [rbp+120h]
  __int64 v114; // [rsp+230h] [rbp+128h]
  int *v115; // [rsp+238h] [rbp+130h]
  __int64 v116; // [rsp+240h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v117; // [rsp+248h] [rbp+140h] BYREF
  int *v118; // [rsp+268h] [rbp+160h]
  __int64 v119; // [rsp+270h] [rbp+168h]
  int *v120; // [rsp+278h] [rbp+170h]
  __int64 v121; // [rsp+280h] [rbp+178h]
  int *v122; // [rsp+288h] [rbp+180h]
  __int64 v123; // [rsp+290h] [rbp+188h]
  int *v124; // [rsp+298h] [rbp+190h]
  __int64 v125; // [rsp+2A0h] [rbp+198h]
  _DWORD *v126; // [rsp+2A8h] [rbp+1A0h]
  __int64 v127; // [rsp+2B0h] [rbp+1A8h]
  PVOID v128; // [rsp+2B8h] [rbp+1B0h]
  _DWORD v129[2]; // [rsp+2C0h] [rbp+1B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v130; // [rsp+2C8h] [rbp+1C0h] BYREF
  int *v131; // [rsp+2E8h] [rbp+1E0h]
  __int64 v132; // [rsp+2F0h] [rbp+1E8h]
  int *v133; // [rsp+2F8h] [rbp+1F0h]
  __int64 v134; // [rsp+300h] [rbp+1F8h]
  _DWORD *v135; // [rsp+308h] [rbp+200h]
  __int64 v136; // [rsp+310h] [rbp+208h]
  __int64 v137; // [rsp+318h] [rbp+210h]
  _DWORD v138[2]; // [rsp+320h] [rbp+218h] BYREF
  unsigned __int64 v139; // [rsp+328h] [rbp+220h]
  int v140; // [rsp+330h] [rbp+228h]
  int v141; // [rsp+334h] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR v142; // [rsp+338h] [rbp+230h] BYREF
  int *v143; // [rsp+358h] [rbp+250h]
  __int64 v144; // [rsp+360h] [rbp+258h]
  int *v145; // [rsp+368h] [rbp+260h]
  __int64 v146; // [rsp+370h] [rbp+268h]
  _DWORD *v147; // [rsp+378h] [rbp+270h]
  __int64 v148; // [rsp+380h] [rbp+278h]
  __int64 v149; // [rsp+388h] [rbp+280h]
  _DWORD v150[2]; // [rsp+390h] [rbp+288h] BYREF
  _UNKNOWN *retaddr; // [rsp+3D0h] [rbp+2C8h] BYREF

  result = (struct _EX_RUNDOWN_REF *)&retaddr;
  memset(v79, 0, sizeof(v79));
  v76 = 0LL;
  if ( *(_QWORD *)&qword_140C4EE20 && dword_140C4CBF0 )
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
      if ( **(_DWORD **)&qword_140C4EE20 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EE20, 32LL) )
      {
        v56 = *(_DWORD *)(i + 24);
        v144 = 4LL;
        v143 = &v56;
        v57 = *(_DWORD *)(i + 28);
        v145 = &v57;
        v147 = v150;
        v149 = *(_QWORD *)(i + 40);
        v150[0] = *(unsigned __int16 *)(i + 32);
        v146 = 4LL;
        v148 = 2LL;
        v150[1] = 0;
        tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&byte_140024F07, v4, 1u, v54, v55, 6u, &v142);
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
        if ( **(_DWORD **)&qword_140C4EE20 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EE20, 32LL) )
        {
          v58 = *(_DWORD *)(j + 24);
          v132 = 4LL;
          v131 = &v58;
          v59 = *(_DWORD *)(j + 28);
          v133 = &v59;
          v135 = v138;
          v137 = *(_QWORD *)(j + 40);
          v138[0] = *(unsigned __int16 *)(j + 32);
          v139 = k + 40;
          v15 = *(unsigned __int8 *)(k + 41);
          v134 = 4LL;
          v136 = 2LL;
          v138[1] = 0;
          v141 = 0;
          v140 = 4 * v15 + 8;
          tlgWriteEx_EtwWriteEx(v14, (unsigned __int8 *)&word_140024F5A, v13, 1u, v54, v55, 7u, &v130);
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
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v22, v23, v24);
    MmAcquireLoadLock();
    v25 = (_QWORD *)MiSecureImageActivePatches;
    m = 0LL;
    while ( v25 )
    {
      m = (unsigned __int64)v25;
      v25 = (_QWORD *)*v25;
    }
    while ( m )
    {
      if ( **(_DWORD **)&qword_140C4EE20 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EE20, 32LL) )
      {
        v60 = *(_DWORD *)(m + 24);
        v82 = 4LL;
        v81 = &v60;
        v61 = *(_DWORD *)(m + 28);
        v83 = &v61;
        v62 = *(_DWORD *)(m + 32);
        v85 = &v62;
        v63 = *(_DWORD *)(m + 36);
        v87 = &v63;
        v64 = *(_DWORD *)(m + 40);
        v89 = &v64;
        v91 = v94;
        v93 = *(_QWORD *)(m + 56);
        v94[0] = *(unsigned __int16 *)(m + 48);
        v84 = 4LL;
        v86 = 4LL;
        v88 = 4LL;
        v90 = 4LL;
        v92 = 2LL;
        v94[1] = 0;
        tlgWriteEx_EtwWriteEx(v28, (unsigned __int8 *)&byte_140024FBD, v27, 1u, v54, v55, 9u, &v80);
      }
      v29 = *(_QWORD ***)(m + 8);
      v30 = m;
      if ( v29 )
      {
        v31 = *v29;
        for ( m = *(_QWORD *)(m + 8); v31; v31 = (_QWORD *)*v31 )
          m = (unsigned __int64)v31;
      }
      else
      {
        while ( 1 )
        {
          m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !m || *(_QWORD *)m == v30 )
            break;
          v30 = m;
        }
      }
    }
    for ( n = (PVOID *)PsLoadedModuleList; n != &PsLoadedModuleList; n = (PVOID *)*n )
    {
      if ( MiIsActiveSystemHotPatch((__int64)n)
        && **(_DWORD **)&qword_140C4EE20 > 5u
        && tlgKeywordOn(*(__int64 *)&qword_140C4EE20, 32LL) )
      {
        v65 = *(_DWORD *)(v34 + 120);
        v119 = 4LL;
        v118 = &v65;
        v66 = *(_DWORD *)(v34 + 156);
        v120 = &v66;
        v67 = *((_DWORD *)n + 30);
        v122 = &v67;
        v68 = *((_DWORD *)n + 39);
        v124 = &v68;
        v126 = v129;
        v128 = n[10];
        v129[0] = *((unsigned __int16 *)n + 36);
        v121 = 4LL;
        v123 = 4LL;
        v125 = 4LL;
        v127 = 2LL;
        v129[1] = 0;
        tlgWriteEx_EtwWriteEx(v35, (unsigned __int8 *)&byte_140025053, v33, 1u, v54, v55, 8u, &v117);
      }
    }
    MmReleaseLoadLock((__int64)CurrentThread);
    for ( ii = 0LL; ; ii = (_QWORD *)v53 )
    {
      result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(ii);
      v53 = (__int64)result;
      if ( !result )
        return result;
      if ( ExAcquireRundownProtection_0(result + 139) )
        break;
LABEL_92:
      ;
    }
    KiStackAttachProcess((_KPROCESS *)v53, 0LL, (__int64)v79, v37);
    ProcessHotPatchContext = (unsigned __int64)MiGetProcessHotPatchContext(v53, 0);
    if ( !ProcessHotPatchContext )
    {
LABEL_91:
      KiUnstackDetachProcess((__int64)v79, 0LL, v39, v40);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v53 + 1112));
      goto LABEL_92;
    }
    MiFillLogProcessInfo(v53 + 1664, &v77, &v76);
    --CurrentThread->SpecialApcDisable;
    v41 = (signed __int64 *)(ProcessHotPatchContext + 16);
    ExAcquirePushLockSharedEx(ProcessHotPatchContext + 16, 0LL);
    v42 = *(_QWORD *)(ProcessHotPatchContext + 8);
    if ( (v42 & 1) != 0 )
    {
      if ( v42 == 1 )
      {
LABEL_88:
        if ( _InterlockedCompareExchange64(v41, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v41);
        KeAbPostRelease((ULONG_PTR)v41);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v50, v51, v52);
        goto LABEL_91;
      }
      jj = v42 ^ (ProcessHotPatchContext | 1);
    }
    else
    {
      jj = *(_QWORD *)(ProcessHotPatchContext + 8);
    }
    while ( jj )
    {
      if ( *(_DWORD *)(jj + 88) )
      {
        v44 = *(_QWORD *)&qword_140C4EE20;
        if ( **(_DWORD **)&qword_140C4EE20 > 5u )
        {
          if ( tlgKeywordOn(*(__int64 *)&qword_140C4EE20, 32LL) )
          {
            ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v53);
            p_ProcessId = &ProcessId;
            v97 = 4LL;
            tlgCreate1Sz_char((__int64)v98, v76);
            v45 = *(_QWORD *)(jj + 24);
            v99 = &v78;
            v70 = *(_DWORD *)(jj + 48);
            v101 = &v70;
            v71 = *(_DWORD *)(jj + 52);
            v103 = &v71;
            v72 = *(_DWORD *)(jj + 80);
            v105 = &v72;
            v73 = *(_DWORD *)(jj + 84);
            v107 = &v73;
            v109 = v112;
            v111 = *(_QWORD *)(jj + 72);
            v112[0] = *(unsigned __int16 *)(jj + 64);
            v74 = *(_DWORD *)(jj + 88);
            v113 = &v74;
            v75 = *(_DWORD *)(jj + 32);
            v115 = &v75;
            v78 = v45;
            v100 = 8LL;
            v102 = 4LL;
            v104 = 4LL;
            v106 = 4LL;
            v108 = 4LL;
            v110 = 2LL;
            v112[1] = 0;
            v114 = 4LL;
            v116 = 4LL;
            tlgWriteEx_EtwWriteEx(v44, (unsigned __int8 *)&byte_140024E4D, v46, 1u, v54, v55, 0xDu, &v95);
          }
        }
      }
      v47 = *(_QWORD ***)(jj + 8);
      v48 = jj;
      if ( v47 )
      {
        v49 = *v47;
        for ( jj = *(_QWORD *)(jj + 8); v49; v49 = (_QWORD *)*v49 )
          jj = (unsigned __int64)v49;
      }
      else
      {
        while ( 1 )
        {
          jj = *(_QWORD *)(jj + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !jj || *(_QWORD *)jj == v48 )
            break;
          v48 = jj;
        }
      }
    }
    goto LABEL_88;
  }
  return result;
}
