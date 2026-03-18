/*
 * XREFs of CmQueryKey @ 0x1407C1B70
 * Callers:
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KCBNeedsVirtualImage_0 @ 0x14053F084 (KCBNeedsVirtualImage_0.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpQueryKeyData @ 0x1406A4D98 (CmpQueryKeyData.c)
 *     CmpSetKcbAtLayerHeight @ 0x1406B98FC (CmpSetKcbAtLayerHeight.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406E137C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmGetKeyFlags @ 0x1406EB534 (CmGetKeyFlags.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     CmpUnlockTwoKcbs @ 0x1407C2FB4 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1407C300C (CmpLockTwoKcbsShared.c)
 *     CmpConstructNameFromKeyNodes @ 0x1407C8830 (CmpConstructNameFromKeyNodes.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140915854 (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x140916454 (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140916E20 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, __int64 a6)
{
  int v7; // r12d
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int LayeredKey; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _LOOKASIDE_LIST_EX *v28; // r9
  int v29; // r12d
  void *v30; // rbx
  unsigned int v31; // ecx
  SIZE_T v32; // r13
  PVOID TransientPoolWithTag; // rax
  int v34; // r11d
  char v35; // r12
  __int16 j; // dx
  __int64 v37; // rcx
  __int64 i; // r10
  __int64 v39; // r10
  int v40; // eax
  const void **v41; // rsi
  PVOID ProcessAuditId; // rcx
  unsigned int v43; // edx
  unsigned int v44; // eax
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v52; // ebx
  __int64 v53; // rsi
  bool v54; // al
  unsigned int v55; // r8d
  unsigned int v56; // r8d
  int v57; // edx
  unsigned int v58; // edx
  int v59; // ecx
  unsigned int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rbx
  int v63; // r8d
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  char v69; // [rsp+54h] [rbp-164h]
  unsigned int v70; // [rsp+58h] [rbp-160h] BYREF
  __int64 v71[2]; // [rsp+60h] [rbp-158h] BYREF
  __int64 v72; // [rsp+70h] [rbp-148h] BYREF
  const void **v73; // [rsp+78h] [rbp-140h] BYREF
  const void **p_UnicodeString; // [rsp+80h] [rbp-138h]
  unsigned int *v75; // [rsp+88h] [rbp-130h] BYREF
  __int64 v76; // [rsp+90h] [rbp-128h]
  __int64 v77; // [rsp+98h] [rbp-120h]
  __int64 v78; // [rsp+A0h] [rbp-118h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-110h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v81; // [rsp+D8h] [rbp-E0h]
  __int128 v82; // [rsp+E0h] [rbp-D8h] BYREF
  int v83; // [rsp+F0h] [rbp-C8h]
  __int64 v84; // [rsp+F8h] [rbp-C0h]
  __int64 v85; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+108h] [rbp-B0h] BYREF
  __int128 v87; // [rsp+110h] [rbp-A8h] BYREF
  __int128 v88; // [rsp+120h] [rbp-98h]
  __int128 v89; // [rsp+130h] [rbp-88h]
  _BYTE v90[48]; // [rsp+140h] [rbp-78h] BYREF

  v7 = a3;
  v9 = a1;
  v72 = a1;
  v77 = a1;
  v81 = a1;
  v71[1] = a2;
  v75 = a4;
  v71[0] = a6;
  p_UnicodeString = 0LL;
  v10 = 0LL;
  v78 = 0LL;
  UnicodeString = 0LL;
  memset(v90, 0, sizeof(v90));
  v82 = 0LL;
  CmpInitializeDelayDerefContext(&v82);
  CmpAttachToRegistryProcess(v90);
  CmpLockRegistry(v12, v11, v13);
  v14 = *(_QWORD *)(v9 + 8);
  v73 = (const void **)v14;
  if ( *(_WORD *)(v14 + 66) )
  {
    LayeredKey = CmQueryLayeredKey(v9, v7, a4, a5, (unsigned int *)v71[0]);
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v9 + 56) || *(_QWORD *)(v9 + 64) )
  {
    CmpLockKcbShared(v14);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v9, 0LL) )
    {
      LayeredKey = -1073740763;
      if ( (*(_DWORD *)(v9 + 48) & 1) == 0 )
        LayeredKey = -1073741444;
      CmpUnlockKcb(v14);
      goto LABEL_3;
    }
    CmpUnlockKcb(v14);
    LayeredKey = CmpTransSearchAddTransFromKeyBody((_QWORD *)v9, &v78);
    if ( LayeredKey < 0 )
    {
LABEL_3:
      CmpUnlockRegistry(v16, v15, v18, v19);
      CmpDetachFromRegistryProcess(v90);
      return (unsigned int)LayeredKey;
    }
    v10 = v78;
  }
  if ( a2 )
  {
    v14 = *(_QWORD *)(a2 + 8);
    v73 = (const void **)v14;
    CmpLockTwoKcbsShared(*(_QWORD *)(a2 + 8), *(_QWORD *)(v9 + 8));
  }
  else
  {
    CmpLockKcbShared(*(_QWORD *)(v9 + 8));
  }
  if ( v7 == 3 )
  {
    v21 = *(_QWORD *)(v9 + 8);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v9, v10) )
    {
      if ( (*(_DWORD *)(v9 + 48) & 1) != 0 )
      {
        LayeredKey = -1073740763;
        goto LABEL_146;
      }
      v25 = -1073741444;
    }
    else
    {
      v25 = 0;
    }
    v70 = v25;
    if ( !*(_QWORD *)(v21 + 80) )
    {
      LayeredKey = -1073741670;
      goto LABEL_146;
    }
    if ( CmpVEEnabled && (*(_DWORD *)(v21 + 184) & 0x1000000) != 0 )
    {
      LayeredKey = -1073741670;
      if ( (int)CmVirtualKCBToRealPath(v21, &UnicodeString) >= 0 )
        p_UnicodeString = (const void **)&UnicodeString;
LABEL_64:
      if ( !p_UnicodeString )
        goto LABEL_146;
      v43 = *(unsigned __int16 *)p_UnicodeString;
      *(_DWORD *)v71[0] = v43 + 4;
      if ( a5 >= 4 )
      {
        *a4 = v43;
        v44 = a5 - 4;
        LayeredKey = v70;
        if ( a5 - 4 < v43 )
          LayeredKey = -2147483643;
        if ( v44 >= v43 )
          v44 = v43;
        memmove(a4 + 1, p_UnicodeString[1], v44);
      }
      else
      {
        LayeredKey = -1073741789;
      }
      goto LABEL_106;
    }
    v76 = 0LL;
    v83 = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    WORD1(SubjectContext.ClientToken) = -1;
    v73 = 0LL;
    v69 = CmpAcquireShutdownRundown(v23, v22, v24);
    v29 = *(__int16 *)(v21 + 66);
    v30 = 0LL;
    v31 = 0;
    if ( v29 >= 2 )
      v31 = v29 - 1;
    if ( v31 )
    {
      v32 = 8LL * v31;
      TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v32, 0x35364D43u, v28);
      v30 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        LayeredKey = -1073741670;
        v34 = -1073741670;
LABEL_34:
        if ( v34 < 0 )
          goto LABEL_57;
        v26 = *(unsigned __int16 *)(v21 + 66);
        WORD1(SubjectContext.ClientToken) = v26;
        if ( (_WORD)v26 )
        {
          for ( i = *(_QWORD *)(v21 + 192); i; i = *(_QWORD *)(v39 + 24) )
          {
            CmpSetKcbAtLayerHeight((__int64)&SubjectContext, v26, *(_QWORD *)(i + 16));
            LOWORD(v26) = v26 - 1;
          }
        }
        else
        {
          *(_QWORD *)&SubjectContext.ImpersonationLevel = v21;
        }
        if ( v34 < 0 )
        {
LABEL_57:
          v35 = v69;
        }
        else
        {
          v35 = v69;
          if ( v69 )
          {
            v84 = 0LL;
            for ( j = WORD1(SubjectContext.ClientToken); j >= 0; --j )
            {
              v37 = j < 2
                  ? *((_QWORD *)&SubjectContext.ImpersonationLevel + j)
                  : *((_QWORD *)SubjectContext.ProcessAuditId + j - 2);
              if ( *(_WORD *)(v37 + 66) && *(_BYTE *)(v37 + 65) == 1 )
                break;
              if ( *(_DWORD *)(v37 + 40) != -1 )
              {
                if ( *(_DWORD *)(v21 + 40) != -1 || (*(_DWORD *)(v21 + 184) & 0x40000) == 0 )
                {
                  v40 = CmpConstructNameFromKeyNodes(&SubjectContext, &v73);
                  goto LABEL_55;
                }
                break;
              }
            }
          }
          v40 = CmpConstructNameFromKcbNameBlocks(v21, &v73);
LABEL_55:
          if ( v40 >= 0 )
          {
            v41 = v73;
            v76 = (__int64)v73;
            v73 = 0LL;
LABEL_59:
            ProcessAuditId = SubjectContext.ProcessAuditId;
            if ( SubjectContext.ProcessAuditId )
              CmSiFreeMemory((PPRIVILEGE_SET)SubjectContext.ProcessAuditId);
            if ( v35 )
              CmpReleaseShutdownRundown(ProcessAuditId, v26, v27);
            p_UnicodeString = v41;
            v9 = v72;
            goto LABEL_64;
          }
        }
        v41 = (const void **)v76;
        goto LABEL_59;
      }
      memset(TransientPoolWithTag, 0, v32);
    }
    WORD1(SubjectContext.ClientToken) = -1;
    LOWORD(SubjectContext.ClientToken) = v29;
    SubjectContext.ProcessAuditId = v30;
    v34 = 0;
    LayeredKey = -1073741670;
    goto LABEL_34;
  }
  if ( (!a2 || !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v10))
    && !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v9, v10) )
  {
    switch ( v7 )
    {
      case 5:
        *(_DWORD *)v71[0] = 12;
        if ( a5 >= 0xC )
        {
          *a4 = CmGetKeyFlags(v14, v10, v45, v46);
          a4[1] = 0;
          v48 = 0;
          if ( *(int *)(v14 + 40) < 0 )
          {
            v48 = 1;
            a4[1] = 1;
          }
          v49 = *(_DWORD *)(v14 + 184);
          if ( (v49 & 0x100000) != 0 )
          {
            a4[1] = v48 | 2;
            v49 = *(_DWORD *)(v14 + 184);
          }
          a4[2] = (unsigned __int8)v49 >> 4;
          LayeredKey = 0;
        }
        else
        {
          LayeredKey = -1073741789;
        }
        break;
      case 6:
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        CurrentThread = KeGetCurrentThread();
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
        v52 = 4;
        *(_DWORD *)v71[0] = 4;
        if ( a5 >= 4 )
        {
          v53 = (__int64)v73;
          v54 = KCBNeedsVirtualImage_0((__int64)v73);
          v55 = v54 | *a4 & 0xFFFFFFFE;
          *a4 = v55;
          v56 = v55 & 0xFFFFFFFD;
          *a4 = v56;
          v57 = v56;
          if ( v54 && (*(_DWORD *)(v53 + 184) & 0x20) == 0 )
          {
            v57 = v56 | 2;
            *a4 = v56 | 2;
          }
          if ( !CmpVEEnabled || (*(_DWORD *)(v53 + 184) & 0x1000000) == 0 )
            v52 = 0;
          v58 = v52 | v57 & 0xFFFFFFFB;
          *a4 = v58;
          v59 = v58 ^ ((unsigned __int8)v58 ^ (unsigned __int8)(*(_DWORD *)(v53 + 184) >> 22)) & 8;
          *a4 = v59;
          *a4 = v59 ^ ((unsigned __int8)v59 ^ (unsigned __int8)(*(_DWORD *)(v53 + 184) >> 19)) & 0x10;
          LayeredKey = 0;
        }
        else
        {
          LayeredKey = -1073741789;
        }
        SeReleaseSubjectContext(&SubjectContext);
        break;
      case 8:
        *(_DWORD *)v71[0] = 4;
        if ( a5 < 4 )
        {
          LayeredKey = -1073741789;
          goto LABEL_146;
        }
        v60 = *a4;
        if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 4112LL) & 1) != 0 )
          *a4 = v60 & 0xFFFFFFFE;
        else
          *a4 = v60 | 1;
        LayeredKey = 0;
LABEL_108:
        if ( a2 )
        {
          if ( ((v7 - 3) & 0xFFFFFFFC) != 0 || v7 == 4 )
          {
            v61 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL);
            if ( *(_QWORD *)(*(_QWORD *)(v9 + 8) + 168LL) < v61 )
              *(_QWORD *)a4 = v61;
          }
          if ( ((v7 - 2) & 0xFFFFFFFD) == 0 )
          {
            LODWORD(v72) = 0;
            v85 = 0LL;
            LODWORD(v75) = 0;
            v87 = 0LL;
            v88 = 0LL;
            v89 = 0LL;
            v62 = v78;
            if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                 *(_QWORD *)(a2 + 8),
                                 *(_QWORD *)(v9 + 8),
                                 -1,
                                 v78,
                                 (__int64)&v82,
                                 (__int64)&v85,
                                 (__int64)&v75,
                                 0LL,
                                 (__int64)&v72) == -2147483622 )
            {
              if ( v7 == 2 )
                a4[5] = v72;
              else
                a4[3] = v72;
            }
            LOBYTE(v63) = 1;
            if ( (unsigned int)CmEnumerateValueKeyFromMergedView(v9, a2, v63, -1, 0, 0LL, 0, 0LL, (__int64)&v72) == -2147483622 )
            {
              if ( v7 == 2 )
                a4[8] = v72;
              else
                a4[5] = v72;
            }
            LayeredKey = CmpQueryKeyData(*(_QWORD *)(v9 + 8), v7, (int)&v87, 48, v71[0], v62);
            if ( (int)(LayeredKey + 0x80000000) < 0 || LayeredKey == -2147483643 )
            {
              if ( v7 == 2 )
              {
                if ( DWORD2(v88) > a4[6] )
                  a4[6] = DWORD2(v88);
                if ( DWORD1(v89) > a4[9] )
                  a4[9] = DWORD1(v89);
                if ( DWORD2(v89) > a4[10] )
                  a4[10] = DWORD2(v89);
              }
              else
              {
                if ( (unsigned int)v88 > a4[4] )
                  a4[4] = v88;
                if ( DWORD2(v88) > a4[6] )
                  a4[6] = DWORD2(v88);
                if ( HIDWORD(v88) > a4[7] )
                  a4[7] = HIDWORD(v88);
              }
            }
          }
        }
        else if ( CmpVEEnabled )
        {
          v64 = *(_QWORD *)(v9 + 8);
          if ( (*(_DWORD *)(v64 + 184) & 0x1000000) != 0 && ((v7 - 2) & 0xFFFFFFFD) == 0 )
          {
            v70 = 0;
            v86 = 0LL;
            LODWORD(v71[0]) = 0;
            LayeredKey = CmpFindSubKeyByNumberFromMergedView(
                           v64,
                           0,
                           -1,
                           v78,
                           (__int64)&v82,
                           (__int64)&v86,
                           (__int64)v71,
                           0LL,
                           (__int64)&v70);
            if ( LayeredKey == -2147483622 )
            {
              if ( v7 == 2 )
                a4[5] = v70;
              else
                a4[3] = v70;
              LayeredKey = 0;
            }
          }
        }
        goto LABEL_146;
      default:
        LayeredKey = CmpQueryKeyData(v14, v7, (int)a4, a5, v71[0], v10);
        break;
    }
LABEL_106:
    if ( LayeredKey < 0 )
      goto LABEL_146;
    v7 = a3;
    goto LABEL_108;
  }
  v47 = -1073741444;
  if ( (*(_BYTE *)(v9 + 48) & 1) != 0 )
    v47 = -1073740763;
  LayeredKey = v47;
LABEL_146:
  if ( a2 )
    CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(v81 + 8));
  else
    CmpUnlockKcb(*(_QWORD *)(v81 + 8));
  CmpDrainDelayDerefContext((_QWORD **)&v82);
  CmpUnlockRegistry(v66, v65, v67, v68);
  CmpDetachFromRegistryProcess(v90);
  if ( UnicodeString.Buffer )
  {
    RtlFreeUnicodeString(&UnicodeString);
    return (unsigned int)LayeredKey;
  }
  else
  {
    if ( !p_UnicodeString )
      return (unsigned int)LayeredKey;
    CmpFreeTransientPoolWithTag(p_UnicodeString, 0x624E4D43u);
    return (unsigned int)LayeredKey;
  }
}
