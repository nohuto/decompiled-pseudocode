/*
 * XREFs of CmpDoParseKey @ 0x140619BF0
 * Callers:
 *     CmpParseKey @ 0x140619690 (CmpParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     CmpTransSilentIgnore @ 0x140227220 (CmpTransSilentIgnore.c)
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14023F2F0 (PsGetServerSiloServiceSessionId.c)
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     PsGetCurrentThreadProcess @ 0x14031C770 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     HvResetDirtyData @ 0x1405DF25C (HvResetDirtyData.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpVEExecuteOpenLogic @ 0x14060BF80 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x14060C070 (CmpDoWritethroughReparse.c)
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     CmpLockKcbShared @ 0x140613810 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x14061B490 (CmpStartKcbStack.c)
 *     CmpLockKcbStackShared @ 0x14061B4F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpPopulateKcbStack @ 0x14061B600 (CmpPopulateKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x14061B650 (CmpIsKeyStackDeleted.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKeyStackSymlink @ 0x14061BC50 (CmpIsKeyStackSymlink.c)
 *     CmpCleanupPathInfo @ 0x14061BCA0 (CmpCleanupPathInfo.c)
 *     CmpValidateComponents @ 0x14061BD10 (CmpValidateComponents.c)
 *     CmpComputeComponentHashes @ 0x14061BD70 (CmpComputeComponentHashes.c)
 *     CmpOKToFollowLink @ 0x14061C0A0 (CmpOKToFollowLink.c)
 *     CmpVEExecuteParseLogic @ 0x14061C220 (CmpVEExecuteParseLogic.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x14061C460 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpGetComponentNameAtIndex @ 0x14061C5F0 (CmpGetComponentNameAtIndex.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CAE0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14061D4F4 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     HvLockHiveFlusherExclusive @ 0x14064CF38 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14064CF54 (HvUnlockHiveFlusherExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpLockHashEntrySharedByKcb @ 0x140670A48 (CmpLockHashEntrySharedByKcb.c)
 *     CmpUnlockHashEntry @ 0x140670E48 (CmpUnlockHashEntry.c)
 *     RtlPrefixUnicodeString @ 0x140671570 (RtlPrefixUnicodeString.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406721C0 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpCreateKeyControlBlock @ 0x1406723D0 (CmpCreateKeyControlBlock.c)
 *     CmpConstructName @ 0x140675CDC (CmpConstructName.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x140679110 (CmpWalkOneLevel.c)
 *     CmRmIsKCBVisible @ 0x1406A11E0 (CmRmIsKCBVisible.c)
 *     CmpTransSearchAddTransFromHive @ 0x1406A1440 (CmpTransSearchAddTransFromHive.c)
 *     CmpRecordParseFailure @ 0x1406B34E0 (CmpRecordParseFailure.c)
 *     CmpGetComponentHashAtIndex @ 0x1406B4DA0 (CmpGetComponentHashAtIndex.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406C2490 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpVEExecuteCreateLogic @ 0x1406C4C5C (CmpVEExecuteCreateLogic.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406D7214 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406D9B0C (CmpTryToLockHashEntryExclusive.c)
 *     CmpIsKeyDeleted @ 0x140700E04 (CmpIsKeyDeleted.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1407028D4 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x140702950 (CmpUnlockHashEntryByKcb.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140704958 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpCheckKeyOwnerForPca @ 0x140711958 (CmpCheckKeyOwnerForPca.c)
 *     CmpCheckExeOwnerForPca @ 0x14076B9E4 (CmpCheckExeOwnerForPca.c)
 *     CmpCreateHiveRootCell @ 0x140789E10 (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x1407BFA84 (CmpWaitForHiveMount.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140866204 (CmpReleaseKeyNodeForKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x14086CEFC (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1408719A4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpLogUnsupportedOperation @ 0x1408789D8 (CmpLogUnsupportedOperation.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _ACCESS_STATE *a2,
        unsigned __int8 a3,
        __int16 a4,
        const UNICODE_STRING *a5,
        _OWORD *a6,
        __int64 a7,
        int a8,
        PADAPTER_OBJECT *a9)
{
  ULONG_PTR v11; // rsi
  __int16 v12; // r12
  __int128 v13; // xmm0
  __int16 v14; // r15
  void *v15; // rdx
  __int64 v16; // rdx
  ULONG_PTR v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rcx
  ULONG_PTR v20; // r14
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char v27; // al
  __int64 v28; // r14
  int started; // eax
  int v30; // eax
  __int64 *v31; // r14
  int *v32; // r13
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rcx
  bool v36; // zf
  bool v37; // bl
  __int16 v38; // r12
  _DWORD *v39; // r13
  PCUNICODE_STRING v40; // r12
  unsigned int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // r13
  unsigned __int8 v44; // r12
  int KeyBody; // eax
  struct _ACCESS_STATE *v46; // rbx
  void *v47; // r12
  ULONG_PTR v48; // rbx
  ULONG_PTR v49; // rcx
  int v50; // eax
  __int64 v52; // rbx
  __int64 v53; // rax
  int ComponentHashAtIndex; // ecx
  __int64 v55; // r8
  char v56; // dl
  int v57; // eax
  unsigned __int64 v58; // rsi
  char v59; // al
  __int16 v60; // r8
  __int16 v61; // r9
  wchar_t *v62; // r10
  __int16 v63; // cx
  wchar_t *v64; // rax
  __int16 v65; // dx
  int v66; // esi
  int v67; // eax
  int v68; // eax
  char v69; // si
  int SymbolicLinkTarget; // eax
  __int64 v71; // rcx
  ULONG_PTR v72; // rbx
  __int64 *v73; // rax
  char v74; // al
  int v75; // eax
  __int64 v76; // rcx
  unsigned int v77; // eax
  _QWORD *v78; // r12
  __int64 v79; // rbx
  int v80; // ebx
  unsigned int Logic; // eax
  int v82; // eax
  int v83; // r9d
  int Child; // eax
  __int64 v85; // rax
  unsigned int v86; // ecx
  __int64 v87; // rax
  __int16 v88; // cx
  wchar_t *v89; // r10
  __int64 v90; // r8
  __int64 v91; // rbx
  __int64 v92; // r8
  int v93; // ebx
  __int64 v94; // r12
  ULONG_PTR v95; // rdx
  _DWORD *v96; // r12
  ULONG_PTR v97; // rcx
  int HiveRootCell; // eax
  __int64 v99; // r8
  ULONG_PTR v100; // rbx
  __int64 v101; // r9
  unsigned __int8 v102; // dl
  int v103; // eax
  __int64 v104; // rcx
  int v105; // r13d
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // r8
  _KPROCESS *CurrentThreadProcess; // rsi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  int SessionId; // eax
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r8
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r8
  int v121; // eax
  int v122; // ecx
  int v123; // r12d
  int v124; // eax
  unsigned __int8 v125; // dl
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 ComponentNameAtIndex; // rax
  __int64 v132; // rdx
  __int64 v133; // r8
  unsigned int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // rdx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // r8
  _KPROCESS *v143; // rsi
  __int64 v144; // rax
  int v145; // ebx
  int v146; // eax
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // r8
  int v150; // eax
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // r8
  int v154; // eax
  PCUNICODE_STRING v155; // rbx
  unsigned int v156; // eax
  __int64 v157; // rdx
  int v158; // eax
  int v159; // [rsp+20h] [rbp-E0h]
  char v160[8]; // [rsp+28h] [rbp-D8h]
  __int64 ObjectCreated; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v162; // [rsp+38h] [rbp-C8h]
  bool v163; // [rsp+60h] [rbp-A0h]
  int v164; // [rsp+64h] [rbp-9Ch] BYREF
  char v165; // [rsp+68h] [rbp-98h]
  __int16 v166; // [rsp+69h] [rbp-97h] BYREF
  char v167; // [rsp+6Bh] [rbp-95h]
  void *v168; // [rsp+70h] [rbp-90h]
  char v169; // [rsp+78h] [rbp-88h]
  int v170[2]; // [rsp+80h] [rbp-80h]
  __int16 v171; // [rsp+88h] [rbp-78h] BYREF
  int v172; // [rsp+8Ah] [rbp-76h] BYREF
  _WORD v173[2]; // [rsp+90h] [rbp-70h] BYREF
  char v174; // [rsp+94h] [rbp-6Ch]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-68h] BYREF
  BOOLEAN v176[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _ACCESS_STATE *v177; // [rsp+A8h] [rbp-58h]
  __int64 v178; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v179; // [rsp+B8h] [rbp-48h]
  PCUNICODE_STRING String2; // [rsp+C0h] [rbp-40h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v182; // [rsp+D0h] [rbp-30h]
  __int128 v183; // [rsp+D8h] [rbp-28h] BYREF
  ULONG_PTR v184; // [rsp+E8h] [rbp-18h]
  __int64 v185; // [rsp+F0h] [rbp-10h]
  __int64 v186; // [rsp+F8h] [rbp-8h] BYREF
  int v187[2]; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+8h] BYREF
  __int128 v189; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  PADAPTER_OBJECT *v191; // [rsp+130h] [rbp+30h]
  __int64 v192[2]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v193; // [rsp+148h] [rbp+48h]
  __int64 v194[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v195; // [rsp+170h] [rbp+70h]
  int v196[4]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v197; // [rsp+190h] [rbp+90h]
  _BYTE v198[176]; // [rsp+1A0h] [rbp+A0h] BYREF

  v185 = a1;
  v191 = a9;
  String2 = a5;
  v177 = a2;
  v186 = 0LL;
  v11 = 0LL;
  v12 = 0;
  DestinationString = 0LL;
  v13 = *a6;
  v166 = a3;
  v14 = 0;
  v179 = a6;
  v183 = v13;
  LOWORD(v178) = 0;
  *(_QWORD *)v176 = 0LL;
  v189 = 0LL;
  DmaAdapter = 0LL;
  BugCheckParameter4 = 0LL;
  *(_QWORD *)v187 = 0LL;
  v163 = 0;
  v174 = 0;
  v171 = 0;
  v167 = 0;
  v173[0] = 0;
  BugCheckParameter2 = 0LL;
  LODWORD(v186) = -1;
  CmpInitializeDelayDerefContext(&v189);
  v172 = (unsigned __int8)v15;
  v168 = v15;
  memset(v198, (int)v15, 0xA8uLL);
  *(_OWORD *)(a7 + 160) = 0LL;
  *(_OWORD *)(a7 + 176) = 0LL;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_OWORD *)v194 = 0LL;
  WORD1(v194[0]) = -1;
  *(_OWORD *)v196 = 0LL;
  HIWORD(v196[0]) = -1;
  *(_OWORD *)v192 = 0LL;
  WORD1(v192[0]) = -1;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)(a7 + 216) = 0LL;
  *(_OWORD *)(a7 + 232) = 0LL;
  *(_OWORD *)(a7 + 248) = 0LL;
  *(_OWORD *)(a7 + 264) = 0LL;
  *(_OWORD *)(a7 + 280) = 0LL;
  v195 = 0LL;
  v197 = 0LL;
  v193 = 0LL;
  if ( a7 )
    *(_QWORD *)(a7 + 216) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v17 = *(_QWORD *)(a7 + 88);
  v18 = *(_QWORD *)(a7 + 72);
  v184 = v17;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v18 )
  {
    v108 = *(_QWORD *)(a1 + 56);
    if ( v108 && v18 != v108 )
    {
      v164 = -1072103422;
      CmpRecordParseFailure(a7, 256LL, 3222863874LL);
      v47 = 0LL;
      goto LABEL_82;
    }
    v182 = 0LL;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 56);
    v182 = *(_QWORD *)(a1 + 64);
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(a1 + 50);
  v19 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( *(_QWORD *)(a1 + 8) != v19 && v17 )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v17);
    v17 = 0LL;
    v184 = 0LL;
    CmpUnlockRegistry();
  }
  v169 = 0;
  if ( !v17 )
  {
LABEL_11:
    v165 = HIBYTE(v171);
    if ( !v17 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      v21 = CmpComputeComponentHashes(&v183, v173, v198);
      v164 = v21;
      if ( v21 < 0 )
      {
        CmpRecordParseFailure(a7, 1280LL, (unsigned int)v21);
        v47 = v168;
      }
      else
      {
        v14 = v173[0];
        v22 = CmpValidateComponents(v173[0], v198);
        v164 = v22;
        if ( v22 >= 0 )
          goto LABEL_14;
        CmpRecordParseFailure(a7, 1536LL, (unsigned int)v22);
        v47 = v168;
      }
LABEL_79:
      if ( HIBYTE(v171) )
        CmpUnlockHashEntryByKcb(v17);
      goto LABEL_81;
    }
    v20 = v17;
LABEL_14:
    v23 = (unsigned int)v14;
    *(_QWORD *)(a7 + 224) = v20;
    *(_QWORD *)(a7 + 248) = v20;
    v24 = ((*(_DWORD *)(v20 + 8) >> 21) & 0x3FF) - (unsigned __int16)v12;
    LODWORD(v179) = v23;
    if ( (unsigned int)(v23 + v24) > 0x200 )
    {
      v164 = -1073741811;
      CmpRecordParseFailure(a7, 1792LL, 3221225485LL);
      v47 = v168;
LABEL_78:
      v17 = v184;
      goto LABEL_79;
    }
    if ( !v169 )
    {
      if ( (*(_DWORD *)a7 & 0x400) != 0 )
        CmpLockRegistryExclusive(v23, v16);
      else
        CmpLockRegistry();
      v169 = 1;
    }
    v25 = *(_DWORD *)(v185 + 48);
    if ( (v25 & 9) != 0 )
    {
      v117 = 3221225852LL;
      if ( (v25 & 1) != 0 )
        v117 = 3221226533LL;
      v164 = v117;
      CmpRecordParseFailure(a7, 2048LL, v117);
      v47 = v168;
      goto LABEL_78;
    }
    if ( v12 == v14 )
    {
      CmpReferenceKeyControlBlockUnsafe(v20);
      v11 = v20;
      BugCheckParameter4 = v20;
      if ( v20 == v184 )
      {
        v74 = v165;
        HIBYTE(v171) = 0;
      }
      else
      {
        CmpLockHashEntrySharedByKcb(v20);
        v74 = 1;
      }
      HIBYTE(v166) = v74;
    }
    else
    {
      v26 = CmpPerformCompleteKcbCacheLookup(v20, a7, (__int64)&BugCheckParameter4, (__int64)&v166 + 1, (__int64)&v178);
      v164 = v26;
      if ( v26 < 0 || v26 == 259 )
      {
        CmpRecordParseFailure(a7, 2432LL, (unsigned int)v26);
        v11 = BugCheckParameter4;
        goto LABEL_107;
      }
      v27 = v178;
      v11 = BugCheckParameter4;
      v12 += v178;
      *(_QWORD *)(a7 + 232) = BugCheckParameter4;
      *(_BYTE *)(a7 + 256) = v27;
      *(_QWORD *)(a7 + 248) = v11;
    }
    if ( v12 == v14 && (*(_DWORD *)a7 & 1) == 0 )
    {
      CmpUnlockHashEntryByKcb(v11);
      HIBYTE(v166) = 0;
    }
    CmpLockKcbShared(v11);
    if ( v12 < v14 )
    {
      DestinationString.Buffer = *(wchar_t **)(CmpGetComponentNameAtIndex(v198, (unsigned int)v12) + 8);
      DestinationString.Length = v183 - 2 * (((__int64)DestinationString.Buffer - *((_QWORD *)&v183 + 1)) >> 1);
      DestinationString.MaximumLength = DestinationString.Length;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    v164 = CmpVEExecuteParseLogic(
             v11,
             (unsigned int)&DestinationString,
             a7,
             (_DWORD)String2,
             v166,
             (__int64)&v177->SubjectSecurityContext);
    CmpUnlockKcb(v11);
    if ( v164 == -1073741199 )
    {
      if ( (unsigned __int8)CmpOKToFollowLink(*(_QWORD *)(a7 + 64), *(_QWORD *)(v11 + 32)) )
      {
        v28 = v182;
        if ( v18 || v182 )
        {
          if ( *(PVOID *)(v11 + 32) == CmpMasterHive )
          {
            BYTE2(v172) = 1;
            v18 = 0LL;
            v28 = 0LL;
          }
          else if ( (v18 || v182) && *(_WORD *)(v11 + 66) )
          {
            CmpLogUnsupportedOperation(8LL);
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              v164 = -1072103419;
              CmpRecordParseFailure(a7, 2816LL, 3222863877LL);
              goto LABEL_107;
            }
            v18 = 0LL;
            v28 = 0LL;
          }
        }
        if ( !CmpTransSilentIgnore() && (v18 || v28) )
        {
          v164 = CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 32), v18, v28, 0, (__int64)v176);
          if ( v164 < 0 )
          {
            if ( HIBYTE(v166) )
            {
              CmpUnlockHashEntryByKcb(v11);
              HIBYTE(v166) = 0;
            }
            CmpUnlockRegistry();
            v164 = CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 32), v18, v28, 1, (__int64)v176);
            CmpLockRegistry();
            v90 = (unsigned int)v164;
            v169 = 1;
            if ( v164 >= 0 )
            {
              v90 = 3221226029LL;
              v164 = -1073741267;
            }
            CmpRecordParseFailure(a7, 3072LL, v90);
            v47 = v168;
            goto LABEL_76;
          }
        }
        started = CmpStartKcbStack(v194, *(unsigned __int16 *)(v11 + 66));
        v164 = started;
        if ( started < 0 )
        {
          CmpRecordParseFailure(a7, 3328LL, (unsigned int)started);
        }
        else
        {
          v30 = CmpStartKcbStack(v196, *(unsigned __int16 *)(v11 + 66));
          v164 = v30;
          if ( v30 >= 0 )
          {
            v31 = v194;
            v32 = v196;
            CmpPopulateKcbStack(v194, v11);
            if ( v12 < v14 )
            {
              while ( 1 )
              {
                CmpLockKcbStackShared(v31);
                v52 = *(_QWORD *)v176;
                if ( (unsigned __int8)CmpIsKeyStackDeleted(v31, *(_QWORD *)v176) )
                {
                  if ( CmpLoadingSystemHivesActive
                    && (v11 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                    && *(PVOID *)(BugCheckParameter4 + 32) == CmpMasterHive
                    && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                    && v12 > 0
                    && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v198, (unsigned int)(v12 - 1)),
                        (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v132, v133, a7 + 136)) )
                  {
                    *(_DWORD *)a7 |= 0x100u;
                    v109 = 3840LL;
                    v164 = 259;
                    v110 = 259LL;
                  }
                  else
                  {
                    v109 = 4096LL;
                    v164 = -1073741772;
                    v110 = 3221225524LL;
                  }
                  CmpRecordParseFailure(a7, v109, v110);
                  v47 = v168;
                  v34 = v185;
                  v32 = (int *)v168;
                  goto LABEL_68;
                }
                if ( (unsigned __int8)CmpIsKeyStackSymlink(v31) )
                  break;
                CmpUnlockKcbStack(v31);
                v53 = CmpGetComponentNameAtIndex(v198, (unsigned int)v12);
                ComponentHashAtIndex = CmpGetComponentHashAtIndex(v198, (unsigned int)v12, v53);
                v56 = (*(_DWORD *)a7 & 1) != 0 && v12 == (_DWORD)v179 - 1;
                LODWORD(v162) = ComponentHashAtIndex + 37 * *(_DWORD *)(v11 + 16);
                v57 = CmpWalkOneLevel(
                        v11,
                        (int)v31,
                        (int)v187,
                        (int)v32,
                        (__int64)&v172 + 1,
                        v55,
                        ComponentHashAtIndex,
                        v162,
                        *(__int64 *)v176,
                        v56,
                        a7);
                v164 = v57;
                if ( v57 == -1073741772 )
                {
                  if ( !CmpLoadingSystemHivesActive )
                    goto LABEL_106;
                  v11 = BugCheckParameter4;
                  if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread()
                    || *(PVOID *)(BugCheckParameter4 + 32) != CmpMasterHive )
                  {
                    v57 = v164;
LABEL_106:
                    CmpRecordParseFailure(a7, 5504LL, (unsigned int)v57);
                    goto LABEL_107;
                  }
                  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000 && v12 > 0 )
                  {
                    v128 = CmpGetComponentNameAtIndex(v198, (unsigned int)(v12 - 1));
                    if ( (unsigned __int8)CmpWaitForHiveMount(v128, v129, v130, a7 + 136) )
                    {
                      *(_DWORD *)a7 |= 0x100u;
                      v164 = 259;
                      CmpRecordParseFailure(a7, 5120LL, 259LL);
                      goto LABEL_107;
                    }
                  }
                  if ( (*(_DWORD *)(v11 + 8) & 0x7FE00000) == 0x400000 )
                  {
                    v118 = CmpGetComponentNameAtIndex(v198, (unsigned int)v12);
                    if ( (unsigned __int8)CmpWaitForHiveMount(v118, v119, v120, a7 + 136) )
                    {
                      *(_DWORD *)a7 |= 0x100u;
                      v164 = 259;
                      CmpRecordParseFailure(a7, 5376LL, 259LL);
                      v47 = v168;
                      goto LABEL_76;
                    }
                  }
                  v14 = v173[0];
                  v57 = v164;
                }
                if ( v57 < 0 )
                  goto LABEL_106;
                v72 = *(_QWORD *)v187;
                ++*(_BYTE *)(a7 + 257);
                *(_QWORD *)(a7 + 240) = v72;
                *(_QWORD *)(a7 + 248) = v72;
                CmpDereferenceKeyControlBlockUnsafe(v11);
                HIBYTE(v166) = BYTE1(v172);
                ++v12;
                BugCheckParameter4 = v72;
                v73 = v31;
                *(_QWORD *)v187 = 0LL;
                v31 = (__int64 *)v32;
                BYTE1(v172) = 0;
                v32 = (int *)v73;
                v11 = v72;
                if ( v12 >= v14 )
                  goto LABEL_39;
              }
              SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                     (_DWORD)v31,
                                     (unsigned int)v198,
                                     (unsigned __int16)v12,
                                     (unsigned __int16)v14,
                                     v52,
                                     a7,
                                     (__int64)&v189,
                                     (__int64)String2,
                                     a7 + 88);
              v164 = SymbolicLinkTarget;
              if ( SymbolicLinkTarget < 0 )
              {
                CmpRecordParseFailure(a7, 4608LL, (unsigned int)SymbolicLinkTarget);
                goto LABEL_107;
              }
              *(_DWORD *)a7 &= ~8u;
              if ( !*(_QWORD *)(a7 + 64) )
              {
                v71 = *(_QWORD *)(v11 + 32);
                if ( (*(_DWORD *)(v71 + 4152) & 1) != 0 )
                  *(_QWORD *)(a7 + 64) = v71;
              }
              v164 = 260;
              CmpRecordParseFailure(a7, 4864LL, 260LL);
              v47 = v168;
              goto LABEL_76;
            }
LABEL_39:
            v33 = *(_QWORD *)(v11 + 72);
            *(_QWORD *)v170 = v32;
            v179 = (_QWORD *)(v11 + 72);
            if ( v33 )
            {
              CmpPopulateKcbStack(v32, v33);
              v33 = *(_QWORD *)(v11 + 72);
            }
            else
            {
              v32 = 0LL;
              *(_QWORD *)v170 = 0LL;
            }
            v34 = v185;
            v35 = *(_QWORD *)(v185 + 8);
            if ( v33 != v35 && v11 != v35 )
            {
              CmpLockKcbShared(v35);
              v167 = 1;
            }
            v36 = v32 == 0LL;
            if ( v32 )
            {
              CmpLockKcbStackShared(v32);
              v36 = v32 == 0LL;
            }
            v37 = !v36;
            v165 = !v36;
            v163 = !v36;
            CmpLockKcbStackShared(v31);
            if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v34, 0LL) )
            {
              v134 = -1073740763;
              if ( (*(_BYTE *)(v34 + 48) & 1) == 0 )
                v134 = -1073741444;
              v164 = v134;
              CmpRecordParseFailure(a7, 5888LL, v134);
              v47 = v168;
              v163 = v37;
              goto LABEL_68;
            }
            v38 = v12 - 1;
            v39 = (_DWORD *)(v11 + 184);
            if ( (*(_DWORD *)(v11 + 184) & 0x20000) != 0 )
            {
              v164 = -1073741772;
              CmpRecordParseFailure(a7, 6144LL, 3221225524LL);
              v163 = v37;
              goto LABEL_276;
            }
            if ( !(unsigned __int8)CmRmIsKCBVisible(v11, *(_QWORD *)v176) )
            {
              v164 = -1073741772;
              CmpRecordParseFailure(a7, 6400LL, 3221225524LL);
              v47 = v168;
              v163 = v37;
              goto LABEL_67;
            }
            if ( (*(_DWORD *)a7 & 2) == 0 )
            {
              if ( (*(_DWORD *)a7 & 0x20) == 0 )
              {
                if ( !(unsigned __int8)CmpIsKeyStackDeleted(v31, *(_QWORD *)v176) )
                {
                  if ( (unsigned __int8)CmpIsKeyStackSymlink(v31) && (*(_DWORD *)a7 & 0x200) == 0 )
                  {
                    if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                    {
                      v32 = *(int **)v170;
                      v163 = v37;
                      if ( *(_QWORD *)v170 )
                      {
                        CmpUnlockKcbStack(*(_QWORD *)v170);
                        v163 = 0;
                      }
                      if ( v167 )
                      {
                        CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                        v167 = 0;
                      }
                      if ( HIBYTE(v166) )
                      {
                        CmpUnlockHashEntryByKcb(v11);
                        HIBYTE(v166) = 0;
                      }
                      v75 = CmpGetSymbolicLinkTarget(
                              (_DWORD)v31,
                              (unsigned int)v198,
                              0,
                              0,
                              *(__int64 *)v176,
                              a7,
                              (__int64)&v189,
                              (__int64)String2,
                              a7 + 88);
                      v164 = v75;
                      if ( v75 < 0 )
                      {
                        CmpRecordParseFailure(a7, 14336LL, (unsigned int)v75);
                        v47 = v168;
                      }
                      else
                      {
                        *(_DWORD *)a7 &= ~8u;
                        if ( !*(_QWORD *)(a7 + 64) )
                        {
                          v76 = *(_QWORD *)(v11 + 32);
                          if ( (*(_DWORD *)(v76 + 4152) & 1) != 0 )
                            *(_QWORD *)(a7 + 64) = v76;
                        }
                        v164 = 260;
                        CmpRecordParseFailure(a7, 14592LL, 260LL);
                        v47 = v168;
                      }
                      goto LABEL_69;
                    }
                    v164 = -1073741771;
                    v115 = 14080LL;
                    v116 = 3221225525LL;
                    goto LABEL_255;
                  }
                  if ( !BYTE2(v172) )
                  {
                    if ( (*v39 & 0x20000) != 0 )
                    {
                      v115 = 15104LL;
                      v164 = -1073741772;
                      v116 = 3221225524LL;
                      goto LABEL_255;
                    }
                    if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                    {
                      v164 = -1073741771;
                      v115 = 15360LL;
                      v116 = 3221225525LL;
                      goto LABEL_255;
                    }
                    v40 = String2;
                    v32 = *(int **)v170;
                    v41 = CmpDoWritethroughReparse(
                            v11,
                            (__int64)v31,
                            *(__int64 *)v170,
                            0,
                            0LL,
                            a7,
                            (UNICODE_STRING *)String2);
                    v164 = v41;
                    if ( v41 == -1073741199 )
                    {
                      *(_QWORD *)v160 = &v177->SubjectSecurityContext;
                      v42 = CmpVEExecuteOpenLogic(v11, (_DWORD *)a7, 0, (__int64)v40, v166);
                      v164 = v42;
                      if ( v42 == -1073741199 )
                      {
                        v43 = *(_QWORD *)v176;
                        v44 = v166;
                        KeyBody = CmpCreateKeyBody(
                                    v11,
                                    v166,
                                    a7,
                                    *(__int64 *)v176,
                                    0,
                                    (__int64)v31,
                                    (ULONG_PTR **)&DmaAdapter,
                                    (bool *)&v171);
                        v164 = KeyBody;
                        v163 = v37;
                        if ( KeyBody >= 0 )
                        {
LABEL_59:
                          v46 = v177;
LABEL_60:
                          if ( *(_DWORD *)(a7 + 32) == 1
                            || (unsigned __int8)CmpCheckOpenAccessOnKeyBody(
                                                  DmaAdapter,
                                                  (__int64)v31,
                                                  (_DWORD *)a7,
                                                  v46,
                                                  v44,
                                                  (*(_DWORD *)(a7 + 24) & 4) != 0,
                                                  v43,
                                                  (char *)&v172,
                                                  &v164) )
                          {
                            *v191 = DmaAdapter;
                            DmaAdapter = 0LL;
                            if ( !*(_DWORD *)(a7 + 32) )
                              *(_DWORD *)(a7 + 32) = 2;
                            v47 = 0LL;
                            if ( (_BYTE)v171 )
                              v164 = 1073741846;
                            else
                              v164 = 0;
                          }
                          else
                          {
                            if ( (_BYTE)v172 )
                            {
                              if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                              {
                                CmpAttachToRegistryProcess(a7 + 168);
                                *(_DWORD *)(a7 + 160) |= 1u;
                              }
                              v47 = (void *)CmpConstructName(v11);
                            }
                            else
                            {
                              v47 = v168;
                            }
                            CmpRecordParseFailure(a7, 15584LL, (unsigned int)v164);
                          }
                          HIBYTE(v172) = 0;
                          if ( !v174 )
                            goto LABEL_67;
                          goto LABEL_227;
                        }
                        v115 = 15552LL;
                        if ( KeyBody == -1073741444 )
                          KeyBody = -1073741772;
                        v164 = KeyBody;
                        v116 = (unsigned int)KeyBody;
LABEL_255:
                        CmpRecordParseFailure(a7, v115, v116);
                        v47 = v168;
                        v163 = v37;
                        goto LABEL_67;
                      }
                      CmpRecordParseFailure(a7, 15488LL, v42);
                      v163 = v37;
                    }
                    else
                    {
                      CmpRecordParseFailure(a7, 15424LL, v41);
                      v163 = v37;
                    }
LABEL_241:
                    v47 = v168;
                    goto LABEL_68;
                  }
                  v115 = 14848LL;
LABEL_254:
                  v164 = -1073741811;
                  v116 = 3221225485LL;
                  goto LABEL_255;
                }
                if ( BYTE2(v172) )
                {
                  v115 = 9728LL;
                  goto LABEL_254;
                }
                if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v170, *(_QWORD *)v176)
                  || !(unsigned __int8)CmRmIsKCBVisible(*v179, *(_QWORD *)v176) )
                {
                  v115 = 9984LL;
                  v164 = -1073741772;
                  v116 = 3221225524LL;
                  goto LABEL_255;
                }
                if ( (*(_DWORD *)(*v179 + 184LL) & 0x20000) != 0 )
                {
                  v164 = -1073741772;
                  CmpRecordParseFailure(a7, 10240LL, 3221225524LL);
                  v163 = v37;
                }
                else
                {
                  if ( (*(_DWORD *)a7 & 1) != 0 )
                  {
                    v182 = v11 + 32;
                    if ( *(PVOID *)(v11 + 32) == CmpMasterHive )
                    {
                      if ( CmpNoMasterCreates )
                      {
                        v11 = BugCheckParameter4;
                        if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
                        {
                          if ( !CmpLoadingSystemHivesActive
                            || (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) != 0x600000
                            || (v140 = CmpGetComponentNameAtIndex(v198, (unsigned int)v38),
                                !(unsigned __int8)CmpWaitForHiveMount(v140, v141, v142, a7 + 136)) )
                          {
                            v115 = 11264LL;
                            goto LABEL_254;
                          }
                          v139 = 11008LL;
                          goto LABEL_343;
                        }
                      }
                    }
                    BugCheckParameter2 = CmpGetComponentNameAtIndex(v198, (unsigned int)v38);
                    v77 = CmpDoWritethroughReparse(
                            v11,
                            (__int64)v31,
                            *(__int64 *)v170,
                            1,
                            (PCUNICODE_STRING)BugCheckParameter2,
                            a7,
                            (UNICODE_STRING *)String2);
                    v164 = v77;
                    if ( v77 != -1073741199 )
                    {
                      v116 = v77;
                      v115 = 11392LL;
                      goto LABEL_255;
                    }
                    if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                    {
                      CmpAttachToRegistryProcess(a7 + 168);
                      *(_DWORD *)(a7 + 160) |= 1u;
                    }
                    v78 = v179;
                    if ( *(_DWORD *)(*v179 + 40LL) != -1 )
                    {
                      CmpUnlockKcbStack(v31);
                      CmpUnlockKcbStack(*(_QWORD *)v170);
                      CmpLockKcbStackTopExclusiveRestShared(*(_QWORD *)v170);
                      goto LABEL_173;
                    }
                    if ( (unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                            16 * (*(_DWORD *)(a7 + 24) & 2u),
                                            v170[0],
                                            a7,
                                            (_DWORD)v177,
                                            v166,
                                            16 * (*(_DWORD *)(a7 + 24) & 2u),
                                            (*(_DWORD *)(a7 + 24) & 4) != 0,
                                            *(__int64 *)v176,
                                            (__int64)&v164) )
                    {
                      CmpUnlockKcbStack(v31);
                      CmpUnlockKcbStack(*(_QWORD *)v170);
                      if ( v167 )
                      {
                        CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                        v167 = 0;
                      }
                      LOBYTE(v149) = 1;
                      v150 = CmpPromoteKey(*(_QWORD *)v170, 0LL, v149);
                      v164 = v150;
                      if ( v150 < 0 )
                      {
                        if ( v150 == -1073741444 )
                          v150 = -1073741772;
                        v164 = v150;
                        CmpRecordParseFailure(a7, 11776LL, (unsigned int)v150);
                        v47 = v168;
                        v32 = *(int **)v170;
                        goto LABEL_70;
                      }
LABEL_173:
                      CmpLockKcbStackTopExclusiveRestShared(v31);
                      v79 = *(_QWORD *)v176;
                      if ( !(unsigned __int8)CmRmIsKCBVisible(v11, *(_QWORD *)v176) )
                      {
                        v164 = -1073741772;
                        CmpRecordParseFailure(a7, 12032LL, 3221225524LL);
                        v163 = 1;
                        goto LABEL_192;
                      }
                      if ( (unsigned __int8)CmpIsKeyStackDeleted(v31, v79) )
                      {
                        v43 = v79;
                        if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v170, v79)
                          || !(unsigned __int8)CmRmIsKCBVisible(*v78, v79) )
                        {
                          v164 = -1073741772;
                          CmpRecordParseFailure(a7, 12288LL, 3221225524LL);
                          v163 = 1;
                          goto LABEL_192;
                        }
                        if ( (*(_DWORD *)(*v78 + 184LL) & 0x20000) != 0 )
                        {
                          v164 = -1073741772;
                          CmpRecordParseFailure(a7, 12544LL, 3221225524LL);
                          v163 = 1;
                          goto LABEL_192;
                        }
                        ObjectCreated = v79;
                        v80 = BugCheckParameter2;
                        Logic = CmpVEExecuteCreateLogic(
                                  *v78,
                                  v11,
                                  BugCheckParameter2,
                                  (_DWORD)v177,
                                  v166,
                                  16 * (*(_DWORD *)(a7 + 24) & 2u),
                                  ObjectCreated,
                                  a7,
                                  (__int64)String2);
                        v164 = Logic;
                        if ( Logic == -1073741739 )
                        {
                          *(_DWORD *)a7 |= 0x400u;
                          v164 = -1073741267;
                          CmpRecordParseFailure(a7, 12672LL, 3221226029LL);
                          v163 = 1;
                          goto LABEL_192;
                        }
                        if ( Logic != -1073741199 )
                        {
                          CmpRecordParseFailure(a7, 12736LL, Logic);
                          v163 = 1;
                          goto LABEL_192;
                        }
                        if ( (unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                                16 * (*(_DWORD *)(a7 + 24) & 2u),
                                                v170[0],
                                                a7,
                                                (_DWORD)v177,
                                                v166,
                                                16 * (*(_DWORD *)(a7 + 24) & 2u),
                                                (*(_DWORD *)(a7 + 24) & 4) != 0,
                                                v43,
                                                (__int64)&v164) )
                        {
                          v44 = v166;
                          v82 = CmpCreateKeyBody(
                                  v11,
                                  v166,
                                  a7,
                                  v43,
                                  1,
                                  (__int64)v31,
                                  (ULONG_PTR **)&DmaAdapter,
                                  (bool *)&v171);
                          v164 = v82;
                          if ( v82 < 0 )
                          {
                            CmpRecordParseFailure(a7, 12928LL, (unsigned int)v82);
                            v163 = 1;
                            goto LABEL_192;
                          }
                          v83 = v80;
                          v46 = v177;
                          Child = CmpCreateChild(
                                    v170[0],
                                    (_DWORD)v31,
                                    (_DWORD)v177,
                                    v83,
                                    a7,
                                    8 * (*(_WORD *)(a7 + 24) & 2u),
                                    0,
                                    0,
                                    v43);
                          v164 = Child;
                          if ( Child < 0 )
                          {
                            CmpRecordParseFailure(a7, 12992LL, (unsigned int)Child);
                            v47 = v168;
                            v163 = 1;
                            goto LABEL_67;
                          }
                          *(_DWORD *)(a7 + 32) = 1;
LABEL_184:
                          v163 = 1;
                          goto LABEL_60;
                        }
                        if ( KeGetCurrentThread()->PreviousMode == 1 )
                        {
                          CurrentThreadProcess = PsGetCurrentThreadProcess();
                          ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess);
                          ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
                          SessionId = MmGetSessionIdEx((__int64)CurrentThreadProcess);
                          v32 = *(int **)v170;
                          if ( SessionId != ServerSiloServiceSessionId
                            && (unsigned __int8)CmpCheckKeyOwnerForPca(*(_QWORD *)v170) )
                          {
                            v151 = *v78;
                            LOBYTE(v172) = 1;
                            v47 = (void *)CmpConstructName(v151);
                            goto LABEL_239;
                          }
                        }
                        else
                        {
                          v32 = *(int **)v170;
                        }
                        v47 = v168;
LABEL_239:
                        CmpRecordParseFailure(a7, 12800LL, (unsigned int)v164);
                        v11 = BugCheckParameter4;
                        v163 = 1;
                        goto LABEL_68;
                      }
                      if ( !(unsigned __int8)CmpIsKeyStackSymlink(v31) || (*(_DWORD *)a7 & 0x200) != 0 )
                      {
                        if ( (*v39 & 0x20000) != 0 )
                        {
                          v164 = -1073741772;
                          CmpRecordParseFailure(a7, 13568LL, 3221225524LL);
                          v163 = 1;
                          goto LABEL_192;
                        }
                        if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                        {
                          v155 = String2;
                          v32 = *(int **)v170;
                          v156 = CmpDoWritethroughReparse(
                                   v11,
                                   (__int64)v31,
                                   *(__int64 *)v170,
                                   0,
                                   0LL,
                                   a7,
                                   (UNICODE_STRING *)String2);
                          v164 = v156;
                          if ( v156 == -1073741199 )
                          {
                            v44 = v166;
                            *(_QWORD *)v160 = &v177->SubjectSecurityContext;
                            v156 = CmpVEExecuteOpenLogic(v11, (_DWORD *)a7, 1, (__int64)v155, v166);
                            v164 = v156;
                            if ( v156 == -1073741199 )
                            {
                              v43 = *(_QWORD *)v176;
                              v158 = CmpCreateKeyBody(
                                       v11,
                                       v44,
                                       a7,
                                       *(__int64 *)v176,
                                       1,
                                       (__int64)v31,
                                       (ULONG_PTR **)&DmaAdapter,
                                       (bool *)&v171);
                              v164 = v158;
                              if ( v158 >= 0 )
                              {
                                v46 = v177;
                                goto LABEL_184;
                              }
                              v153 = (unsigned int)v158;
                              v152 = 14016LL;
LABEL_378:
                              CmpRecordParseFailure(a7, v152, v153);
                              v163 = 1;
                              goto LABEL_192;
                            }
                            v157 = 13952LL;
                          }
                          else
                          {
                            v157 = 13888LL;
                          }
                          CmpRecordParseFailure(a7, v157, v156);
                          v163 = 1;
                          goto LABEL_241;
                        }
                        v152 = 13824LL;
                      }
                      else
                      {
                        if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                        {
                          CmpUnlockKcbStack(*(_QWORD *)v170);
                          if ( v167 )
                          {
                            CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                            v167 = 0;
                          }
                          if ( HIBYTE(v166) )
                          {
                            CmpUnlockHashEntryByKcb(v11);
                            HIBYTE(v166) = 0;
                          }
                          v154 = CmpGetSymbolicLinkTarget(
                                   (_DWORD)v31,
                                   (unsigned int)v198,
                                   0,
                                   0,
                                   v79,
                                   a7,
                                   (__int64)&v189,
                                   (__int64)String2,
                                   a7 + 88);
                          v164 = v154;
                          if ( v154 >= 0 )
                          {
                            *(_DWORD *)a7 &= ~8u;
                            if ( !*(_QWORD *)(a7 + 64) && (*(_DWORD *)(*(_QWORD *)v182 + 4152LL) & 1) != 0 )
                              *(_QWORD *)(a7 + 64) = *(_QWORD *)v182;
                            v164 = 260;
                            CmpRecordParseFailure(a7, 13440LL, 260LL);
                            v47 = v168;
                          }
                          else
                          {
                            CmpRecordParseFailure(a7, 13312LL, (unsigned int)v154);
                            v47 = v168;
                          }
                          goto LABEL_72;
                        }
                        v152 = 13056LL;
                      }
                      v164 = -1073741771;
                      v153 = 3221225525LL;
                      goto LABEL_378;
                    }
                    if ( KeGetCurrentThread()->PreviousMode == 1 )
                    {
                      v143 = PsGetCurrentThreadProcess();
                      v144 = PsGetProcessServerSilo((__int64)v143);
                      v145 = PsGetServerSiloServiceSessionId(v144);
                      v146 = MmGetSessionIdEx((__int64)v143);
                      v32 = *(int **)v170;
                      if ( v146 != v145 && (unsigned __int8)CmpCheckKeyOwnerForPca(*(_QWORD *)v170) )
                      {
                        v147 = *v78;
                        LOBYTE(v172) = 1;
                        v148 = CmpConstructName(v147);
                        v37 = v165;
                        v47 = (void *)v148;
LABEL_356:
                        CmpRecordParseFailure(a7, 11520LL, (unsigned int)v164);
                        v11 = BugCheckParameter4;
                        v163 = v37;
                        goto LABEL_68;
                      }
                      v37 = v165;
                    }
                    else
                    {
                      v32 = *(int **)v170;
                    }
                    v47 = v168;
                    goto LABEL_356;
                  }
                  if ( CmpLoadingSystemHivesActive )
                  {
                    v11 = BugCheckParameter4;
                    if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                      && *(PVOID *)(BugCheckParameter4 + 32) == CmpMasterHive
                      && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000 )
                    {
                      v136 = CmpGetComponentNameAtIndex(v198, (unsigned int)v38);
                      if ( (unsigned __int8)CmpWaitForHiveMount(v136, v137, v138, a7 + 136) )
                      {
                        v139 = 10496LL;
LABEL_343:
                        *(_DWORD *)a7 |= 0x100u;
                        v164 = 259;
                        CmpRecordParseFailure(a7, v139, 259LL);
                        v163 = v37;
                        goto LABEL_192;
                      }
                    }
                  }
                  v164 = -1073741772;
                  CmpRecordParseFailure(a7, 10752LL, 3221225524LL);
                  v163 = v37;
                }
LABEL_192:
                v47 = v168;
LABEL_67:
                v32 = *(int **)v170;
LABEL_68:
                CmpUnlockKcbStack(v31);
LABEL_69:
                v37 = v163;
LABEL_70:
                if ( v37 )
                  CmpUnlockKcbStack(v32);
LABEL_72:
                if ( v167 )
                  CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                if ( HIBYTE(v172) )
                  CmpUnlockHashEntry(*(PVOID *)(a7 + 48));
                goto LABEL_76;
              }
              CmpUnlockKcbStack(v31);
              CmpUnlockKcbStack(*(_QWORD *)v170);
              CmpLockKcbStackTopExclusiveRestShared(*(_QWORD *)v170);
              CmpLockKcbStackTopExclusiveRestShared(v31);
              v43 = *(_QWORD *)v176;
              if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v170, *(_QWORD *)v176) )
              {
                v164 = -1073741772;
                CmpRecordParseFailure(a7, 8960LL, 3221225524LL);
                v163 = v37;
                goto LABEL_192;
              }
              if ( (*(_DWORD *)(*v179 + 184LL) & 0x20000) != 0 )
              {
                v164 = -1073741772;
                CmpRecordParseFailure(a7, 9216LL, 3221225524LL);
                v163 = v37;
                goto LABEL_192;
              }
              v121 = CmpGetComponentNameAtIndex(v198, (unsigned int)v38);
              v122 = *(_DWORD *)(a7 + 24);
              v123 = v121;
              if ( (v122 & 2) != 0 )
                v124 = 32;
              else
                v124 = 0;
              if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                       (unsigned int)&v164,
                                       v170[0],
                                       a7,
                                       (_DWORD)v177,
                                       v166,
                                       v124,
                                       (v122 & 4) != 0,
                                       v43,
                                       (__int64)&v164) )
              {
                CmpRecordParseFailure(a7, 9472LL, (unsigned int)v164);
                v163 = v37;
                goto LABEL_192;
              }
              CmpCleanUpKcbCachedSymlink(v11, &v189);
              *(_WORD *)(v11 + 186) |= 0x40u;
              v125 = v166;
              *(_DWORD *)(v11 + 100) = -1;
              *(_DWORD *)(v11 + 96) = *(_DWORD *)(a7 + 56);
              v164 = CmpCreateKeyBody(v11, v125, a7, v43, 1, (__int64)v31, (ULONG_PTR **)&DmaAdapter, (bool *)&v171);
              v163 = v37;
              if ( v164 >= 0 )
              {
                if ( !(unsigned __int8)CmpIsKeyStackDeleted(v31, v43) )
                {
LABEL_274:
                  v44 = v166;
                  v163 = v37;
                  goto LABEL_59;
                }
                v164 = CmpCreateChild(v170[0], (_DWORD)v31, (_DWORD)v177, v123, a7, 64, 0, 0, v43);
                v163 = v37;
                if ( v164 >= 0 )
                {
                  *(_DWORD *)(a7 + 32) = 1;
                  goto LABEL_274;
                }
              }
LABEL_276:
              v47 = v168;
              goto LABEL_67;
            }
            CmpUnlockKcbStack(v31);
            v91 = *(_QWORD *)v170;
            CmpUnlockKcbStack(*(_QWORD *)v170);
            if ( v167 )
              CmpUnlockKcb(*(_QWORD *)(v34 + 8));
            HIBYTE(v172) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
            if ( v167 )
              CmpLockKcbShared(*(_QWORD *)(v34 + 8));
            CmpLockKcbStackTopExclusiveRestShared(v91);
            CmpLockKcbStackTopExclusiveRestShared(v31);
            v182 = CmpGetComponentNameAtIndex(v198, (unsigned int)v38);
            v93 = CmpGetComponentHashAtIndex(v198, (unsigned int)v92, v92);
            if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v34, 0LL) )
            {
              HiveRootCell = -1073740763;
              v135 = 6656LL;
              if ( (*(_BYTE *)(v34 + 48) & 1) == 0 )
                HiveRootCell = -1073741444;
            }
            else
            {
              v94 = *(_QWORD *)v176;
              if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v170, *(_QWORD *)v176) )
              {
                HiveRootCell = -1073741772;
                v135 = 6912LL;
              }
              else
              {
                if ( !(unsigned __int8)CmpIsKeyStackDeleted(v31, v94) )
                {
                  v164 = -1073741790;
                  v135 = 7168LL;
                  v99 = 3221225506LL;
                  goto LABEL_324;
                }
                if ( *(PVOID *)(*v179 + 32LL) != CmpMasterHive )
                {
                  v164 = -1073741790;
                  v135 = 7424LL;
                  v99 = 3221225506LL;
                  goto LABEL_324;
                }
                if ( (*(_DWORD *)(*v179 + 184LL) & 0x20000) == 0 )
                {
                  if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                  {
                    CmpAttachToRegistryProcess(a7 + 168);
                    *(_DWORD *)(a7 + 160) |= 1u;
                  }
                  v95 = *(unsigned int *)(a7 + 40);
                  v96 = (_DWORD *)(a7 + 40);
                  v97 = *(_QWORD *)(a7 + 48);
                  if ( (_DWORD)v95 == -1 )
                  {
                    HiveRootCell = CmpCreateHiveRootCell(v97, a7 + 40);
                    v164 = HiveRootCell;
                    if ( HiveRootCell < 0 )
                    {
                      v135 = 7808LL;
                      goto LABEL_322;
                    }
                  }
                  else
                  {
                    HiveRootCell = CmpUpdateHiveRootCellFlags(v97, v95);
                    v164 = HiveRootCell;
                    if ( HiveRootCell < 0 )
                    {
                      v135 = 7936LL;
                      goto LABEL_322;
                    }
                  }
                  *(_WORD *)(v11 + 186) |= 2u;
                  v164 = CmpCreateKeyControlBlock(
                           *(_QWORD *)(a7 + 48),
                           0xFFFFFFFFLL,
                           v11,
                           *(_QWORD *)(a7 + 80),
                           1,
                           v182,
                           v93,
                           0,
                           &BugCheckParameter2);
                  *(_WORD *)(v11 + 186) &= ~2u;
                  v99 = (unsigned int)v164;
                  if ( v164 < 0 )
                  {
                    v135 = 0x2000LL;
                    goto LABEL_324;
                  }
                  v100 = v11;
                  v11 = BugCheckParameter2;
                  CmpDereferenceKeyControlBlockUnsafe(v100);
                  CmpUnlockHashEntryByKcb(v100);
                  HIBYTE(v166) = 0;
                  HiveRootCell = CmpStartKcbStackForTopLayerKcb(v192, v11);
                  v164 = HiveRootCell;
                  if ( HiveRootCell >= 0 )
                  {
                    *(_WORD *)(v100 + 186) |= 2u;
                    CmpLockKcbStackTopExclusiveRestShared(v192);
                    v101 = *(_QWORD *)v176;
                    v102 = v166;
                    *(_WORD *)(v100 + 186) &= ~2u;
                    v174 = 1;
                    v103 = CmpCreateKeyBody(
                             v11,
                             v102,
                             a7,
                             v101,
                             1,
                             (__int64)v192,
                             (ULONG_PTR **)&DmaAdapter,
                             (bool *)&v171);
                    v164 = v103;
                    if ( v103 < 0 )
                    {
                      CmpRecordParseFailure(a7, 8576LL, (unsigned int)v103);
                      v47 = v168;
                      v163 = v165;
                    }
                    else
                    {
                      HvLockHiveFlusherShared(*(_QWORD *)(v100 + 32));
                      HvLockHiveFlusherExclusive(*(_QWORD *)(v11 + 32));
                      v104 = *(_QWORD *)(v11 + 32);
                      v105 = *(_DWORD *)(v104 + 104);
                      if ( (unsigned __int8)HvMarkCellDirty(v104, (unsigned int)*v96, 0LL) )
                      {
                        v164 = CmpCreateChild(v170[0], (_DWORD)v31, (_DWORD)v177, v182, a7, 10, 0, 1, *(__int64 *)v176);
                        if ( v164 >= 0 )
                        {
                          LOBYTE(v106) = 1;
                          *(_DWORD *)(v11 + 40) = *v96;
                          *(_DWORD *)(CmpGetKeyNodeForKcb(v11, &v186, v106, v107) + 16) = *(_DWORD *)(v100 + 40);
                          ++*(_QWORD *)(v11 + 304);
                          CmpRebuildKcbCacheFromNode(v11);
                          CmpReleaseKeyNodeForKcb(v11, &v186);
                          if ( !v105 )
                            HvResetDirtyData(*(_QWORD *)(v11 + 32));
                          HvUnlockHiveFlusherExclusive(*(_QWORD *)(v11 + 32));
                          HvUnlockHiveFlusherShared(*(_QWORD *)(v100 + 32));
                          *(_WORD *)(v100 + 8) |= 8u;
                          CmpReferenceKeyControlBlockUnsafe(v11);
                          *(_QWORD *)(v100 + 104) = v11;
                          CmpUnlockHashEntry(*(PVOID *)(a7 + 48));
                          v43 = *(_QWORD *)v176;
                          v44 = v166;
                          v163 = v165;
                          *(_DWORD *)(a7 + 32) = 1;
                          goto LABEL_59;
                        }
                      }
                      else
                      {
                        v164 = -1073741443;
                        CmpRecordParseFailure(a7, 8704LL, 3221225853LL);
                      }
                      HvUnlockHiveFlusherExclusive(*(_QWORD *)(v11 + 32));
                      HvUnlockHiveFlusherShared(*(_QWORD *)(v100 + 32));
                      v47 = v168;
                    }
LABEL_227:
                    CmpUnlockKcbStack(v192);
                    goto LABEL_67;
                  }
                  v135 = 8448LL;
LABEL_322:
                  v99 = (unsigned int)HiveRootCell;
LABEL_324:
                  CmpRecordParseFailure(a7, v135, v99);
                  v163 = v165;
                  goto LABEL_192;
                }
                HiveRootCell = -1073741772;
                v135 = 7680LL;
              }
            }
            v164 = HiveRootCell;
            goto LABEL_322;
          }
          CmpRecordParseFailure(a7, 3584LL, (unsigned int)v30);
        }
      }
      else
      {
        v164 = -1073741790;
        CmpRecordParseFailure(a7, 2560LL, 3221225506LL);
      }
    }
    else
    {
      CmpRecordParseFailure(a7, 2496LL, (unsigned int)v164);
    }
LABEL_107:
    v47 = v168;
LABEL_76:
    if ( HIBYTE(v166) )
      CmpUnlockHashEntryByKcb(v11);
    goto LABEL_78;
  }
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive(v19, v16);
  else
    CmpLockRegistry();
  v58 = *(_QWORD *)(v17 + 296);
  LOBYTE(v14) = 1;
  v59 = 0;
  v169 = 1;
  if ( (v58 & 1) != 0 )
  {
    v59 = 1;
    v58 &= ~1uLL;
  }
  if ( !v58 || v59 || !RtlPrefixUnicodeString((PCUNICODE_STRING)v58, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(v17);
    v17 = 0LL;
    v184 = 0LL;
    CmpUnlockRegistry();
    v14 = v173[0];
    v169 = 0;
LABEL_127:
    v11 = BugCheckParameter4;
    goto LABEL_11;
  }
  v60 = String2->Length - *(_WORD *)v58;
  v61 = String2->MaximumLength - *(_WORD *)v58;
  v62 = &String2->Buffer[(unsigned __int64)*(unsigned __int16 *)v58 >> 1];
  v63 = v60;
  LOWORD(v183) = v60;
  v64 = v62;
  *((_QWORD *)&v183 + 1) = v62;
  v65 = v61;
  WORD1(v183) = v61;
  if ( v60 )
  {
    do
    {
      if ( *v64 != 92 )
        break;
      ++v64;
      v65 -= 2;
      v63 -= 2;
    }
    while ( v63 );
    *((_QWORD *)&v183 + 1) = v64;
    LOWORD(v183) = v63;
    WORD1(v183) = v65;
  }
  v66 = ((*(_DWORD *)(v17 + 8) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) != 0 && !v63 )
  {
    v85 = *(_QWORD *)(v17 + 80);
    v86 = *(unsigned __int16 *)(v85 + 24);
    v36 = (*(_DWORD *)v85 & 1) == 0;
    v87 = *(unsigned __int16 *)(v85 + 24);
    if ( v36 )
    {
      LOWORD(v183) = v86 + v60;
      v89 = &v62[-((unsigned __int64)v86 >> 1)];
      WORD1(v183) = v86 + v61;
    }
    else
    {
      v88 = 2 * v86;
      v89 = &v62[-v87];
      WORD1(v183) = v61 + v88;
      LOWORD(v183) = v60 + v88;
    }
    *((_QWORD *)&v183 + 1) = v89;
    v12 = 1;
    --v66;
  }
  v67 = CmpComputeComponentHashes(&v183, v173, v198);
  v164 = v67;
  if ( v67 >= 0 )
  {
    v14 = v173[0];
    if ( (unsigned int)(v173[0] + v66) > 0x20 )
    {
      v164 = -1073741811;
      v126 = 768LL;
      v127 = 3221225485LL;
    }
    else
    {
      v68 = CmpValidateComponents(v173[0], v198);
      v164 = v68;
      if ( v68 >= 0 )
      {
        if ( v12 == v14 )
        {
          CmpLockHashEntrySharedByKcb(v17);
          v69 = 1;
          HIBYTE(v171) = 1;
        }
        else
        {
          v69 = 0;
        }
        CmpLockKcbShared(v17);
        if ( (unsigned __int8)CmpIsKeyDeleted(v17, 0LL) || (*(_DWORD *)(v17 + 8) & 0x40000) != 0 )
        {
          CmpUnlockKcb(v17);
          if ( v69 )
            CmpUnlockHashEntryByKcb(v17);
          CmpDereferenceKeyControlBlock(v17);
          v17 = 0LL;
          v184 = 0LL;
          v12 = 0;
          v183 = *(_OWORD *)v179;
          CmpCleanupPathInfo(v198);
          memset(v198, 0, 0xA8uLL);
          HIBYTE(v171) = 0;
        }
        else
        {
          CmpUnlockKcb(v17);
        }
        goto LABEL_127;
      }
      v127 = (unsigned int)v68;
      v126 = 1024LL;
    }
    CmpRecordParseFailure(a7, v126, v127);
    v11 = BugCheckParameter4;
    v47 = v168;
LABEL_81:
    LOBYTE(v14) = v169;
    goto LABEL_82;
  }
  CmpRecordParseFailure(a7, 512LL, (unsigned int)v67);
  v11 = BugCheckParameter4;
  v47 = v168;
LABEL_82:
  CmpCleanupKcbStack(v194);
  CmpCleanupKcbStack(v196);
  CmpCleanupKcbStack(v192);
  v48 = *(_QWORD *)v187;
  if ( *(_QWORD *)v187 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v11);
    v49 = v48;
  }
  else
  {
    if ( !v11 )
      goto LABEL_86;
    v49 = v11;
  }
  CmpDereferenceKeyControlBlock(v49);
LABEL_86:
  if ( v17 )
    CmpDereferenceKeyControlBlock(v17);
  v50 = *(_DWORD *)(a7 + 100);
  if ( v50 && (v50 & 2) != 0 )
  {
    LOBYTE(v159) = 1;
    CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, *(_QWORD *)(a7 + 112), &v189, 0LL, v159, *(_QWORD *)v160);
    *(_DWORD *)(a7 + 100) &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v189);
  if ( (_BYTE)v14 )
    CmpUnlockRegistry();
  if ( (_BYTE)v172 )
  {
    if ( !v47 )
      goto LABEL_94;
    if ( (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(a7, v47);
  }
  if ( v47 )
    CmpFreeTransientPoolWithTag(v47, 0x624E4D43u);
LABEL_94:
  if ( (*(_DWORD *)(a7 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(a7 + 168);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpCleanupPathInfo(v198);
  return (unsigned int)v164;
}
