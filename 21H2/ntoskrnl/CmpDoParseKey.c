/*
 * XREFs of CmpDoParseKey @ 0x1406F9170
 * Callers:
 *     CmpParseKey @ 0x1406F8C10 (CmpParseKey.c)
 * Callees:
 *     CmpGetCachedFullKCBName @ 0x140206DDC (CmpGetCachedFullKCBName.c)
 *     CmpFreeTransientPoolWithTag @ 0x140206FA8 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     PsGetCurrentThreadProcess @ 0x1402BDFE0 (PsGetCurrentThreadProcess.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     CmpTransSilentIgnore @ 0x1403510D0 (CmpTransSilentIgnore.c)
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmRmIsKcbStackVisible @ 0x1405CD270 (CmRmIsKcbStackVisible.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1405EC238 (CmpLockHashEntrySharedByKcb.c)
 *     CmpUnlockHashEntry @ 0x1405EC638 (CmpUnlockHashEntry.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405EE830 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405EF620 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpConstructName @ 0x1405F2FBC (CmpConstructName.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1406344E4 (CmpDoesProcessBelongToServiceSession.c)
 *     CmpVEExecuteOpenLogic @ 0x140654F90 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x140655080 (CmpDoWritethroughReparse.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140669070 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140669FA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKeyNodeForKcb @ 0x14066BFD4 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x14066C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpIsKeyDeleted @ 0x140670F30 (CmpIsKeyDeleted.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpCheckKeyOwnerForPca @ 0x14067FCD8 (CmpCheckKeyOwnerForPca.c)
 *     CmpRecordParseFailure @ 0x14068A510 (CmpRecordParseFailure.c)
 *     CmpGetComponentHashAtIndex @ 0x14068AD20 (CmpGetComponentHashAtIndex.c)
 *     CmpRecordParseWalkResult @ 0x140699A64 (CmpRecordParseWalkResult.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x14069D680 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpVEExecuteCreateLogic @ 0x1406A0C50 (CmpVEExecuteCreateLogic.c)
 *     CmpTransSearchAddTransFromHive @ 0x1406A3040 (CmpTransSearchAddTransFromHive.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406B5C14 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406B8398 (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockKcbShared @ 0x1406F2B10 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x1406FB380 (CmpStartKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1406FB3E0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1406FB4F0 (CmpPopulateKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x1406FB540 (CmpIsKeyStackDeleted.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKeyStackSymlink @ 0x1406FBB80 (CmpIsKeyStackSymlink.c)
 *     CmpCleanupPathInfo @ 0x1406FBBD0 (CmpCleanupPathInfo.c)
 *     CmpRecordParseStartingKcb @ 0x1406FBC40 (CmpRecordParseStartingKcb.c)
 *     CmpValidateComponents @ 0x1406FBC60 (CmpValidateComponents.c)
 *     CmpComputeComponentHashes @ 0x1406FBCC0 (CmpComputeComponentHashes.c)
 *     CmpRecordParseCachedSymlinkKcb @ 0x1406FBFF0 (CmpRecordParseCachedSymlinkKcb.c)
 *     CmpOKToFollowLink @ 0x1406FC010 (CmpOKToFollowLink.c)
 *     CmpVEExecuteParseLogic @ 0x1406FC190 (CmpVEExecuteParseLogic.c)
 *     CmpRecordParseKcbCacheResult @ 0x1406FC3E0 (CmpRecordParseKcbCacheResult.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406FC410 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpGetComponentNameAtIndex @ 0x1406FC5A0 (CmpGetComponentNameAtIndex.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406FC600 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071D94C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14071E188 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14071E1C0 (HvLockHiveFlusherExclusive.c)
 *     HvResetDirtyData @ 0x140721924 (HvResetDirtyData.c)
 *     CmpCheckExeOwnerForPca @ 0x14076FB68 (CmpCheckExeOwnerForPca.c)
 *     CmpCreateHiveRootCell @ 0x14078DBF0 (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x1407C3E84 (CmpWaitForHiveMount.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863E04 (CmpReleaseKeyNodeForKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x14086AB2C (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTree @ 0x14086F1B4 (CmpSearchKeyControlBlockTree.c)
 *     CmpLogUnsupportedOperation @ 0x14087634C (CmpLogUnsupportedOperation.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x1408802C8 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _ACCESS_STATE *a2,
        unsigned __int8 a3,
        __int16 a4,
        const UNICODE_STRING *a5,
        __int128 *a6,
        __int64 a7,
        int a8,
        PADAPTER_OBJECT *a9)
{
  bool v10; // r14
  unsigned __int16 v11; // r12
  __int64 v12; // r13
  __int128 v13; // xmm0
  ULONG_PTR v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  ULONG_PTR v17; // r15
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rax
  const UNICODE_STRING *CachedFullKCBName; // rax
  const UNICODE_STRING *v22; // r15
  __int16 v23; // r9
  __int16 v24; // r10
  wchar_t *v25; // r8
  __int16 v26; // cx
  wchar_t *v27; // rax
  __int16 v28; // dx
  int v29; // r15d
  __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  int v33; // eax
  int v34; // r8d
  int v35; // edx
  ULONG_PTR v36; // rbx
  ULONG_PTR v37; // rcx
  int v38; // eax
  __int16 v39; // r10
  char v40; // al
  int v41; // eax
  int v42; // eax
  __int16 v43; // dx
  int v44; // eax
  int v45; // eax
  int v46; // r8d
  int v47; // r15d
  int v48; // eax
  __int16 v49; // r12
  __int64 v50; // rcx
  __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // r8d
  int started; // eax
  int v56; // eax
  __int64 v57; // r12
  __int16 v58; // bx
  int ComponentHashAtIndex; // ecx
  __m128i *v60; // r8
  char v61; // dl
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  ULONG_PTR v69; // rbx
  __int64 v70; // rax
  _OWORD *v71; // rcx
  int SymbolicLinkTarget; // eax
  __int64 v73; // rcx
  __int64 ComponentNameAtIndex; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rax
  __int64 *v78; // rbx
  _OWORD *v79; // r14
  __int64 v80; // rcx
  bool v81; // zf
  bool v82; // r15
  int v83; // r8d
  int v84; // edx
  __int64 v85; // rcx
  __int64 v86; // rbx
  unsigned int v87; // r8d
  int v88; // ebx
  __int64 v89; // rdx
  __int64 v90; // r8
  _DWORD *v91; // r9
  int v92; // edx
  ULONG_PTR v93; // rdx
  ULONG_PTR v94; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  __int64 v97; // rbx
  __int64 v98; // r8
  struct _LOOKASIDE_LIST_EX *v99; // r9
  int v100; // eax
  int KeyBody; // eax
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 KeyNodeForKcb; // rax
  unsigned __int8 v105; // bl
  __int64 v106; // rdx
  __int64 v107; // r8
  _DWORD *v108; // r9
  __int64 v109; // r14
  unsigned __int16 *v110; // rbx
  __int64 v111; // rcx
  __int64 v112; // r14
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // r8
  UNICODE_STRING *v119; // r14
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // r8
  _DWORD *v123; // r9
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v125; // rcx
  __int64 v126; // r8
  int v127; // r8d
  __int64 v128; // r15
  int Logic; // eax
  _KPROCESS *v130; // rax
  __int64 v131; // rcx
  int v132; // eax
  int v133; // eax
  int v134; // edx
  int v135; // eax
  PCUNICODE_STRING v136; // rbx
  int v137; // eax
  int v138; // eax
  int v139; // eax
  __int64 v140; // rbx
  bool v141; // cl
  int v142; // eax
  __int64 v143; // rcx
  PCUNICODE_STRING v144; // rbx
  int v145; // eax
  int v146; // eax
  int v147; // r8d
  int v148; // eax
  void *v149; // rbx
  BOOLEAN v151[8]; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v152; // [rsp+38h] [rbp-C8h]
  int Child; // [rsp+60h] [rbp-A0h] BYREF
  int v154; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v155; // [rsp+68h] [rbp-98h] BYREF
  int v156; // [rsp+6Ah] [rbp-96h] BYREF
  bool v157; // [rsp+70h] [rbp-90h] BYREF
  __int16 v158; // [rsp+71h] [rbp-8Fh]
  int v159; // [rsp+74h] [rbp-8Ch]
  char v160; // [rsp+78h] [rbp-88h]
  int v161[2]; // [rsp+80h] [rbp-80h]
  __int64 v162; // [rsp+88h] [rbp-78h]
  __int64 v163; // [rsp+90h] [rbp-70h]
  __int64 v164; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  struct _ACCESS_STATE *v166; // [rsp+A8h] [rbp-58h]
  __int64 v167; // [rsp+B0h] [rbp-50h] BYREF
  PCUNICODE_STRING String2; // [rsp+B8h] [rbp-48h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v170; // [rsp+C8h] [rbp-38h]
  __int128 v171; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v172; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v173; // [rsp+E8h] [rbp-18h]
  ULONG_PTR v174; // [rsp+F0h] [rbp-10h]
  __int64 v175; // [rsp+F8h] [rbp-8h] BYREF
  ULONG_PTR v176; // [rsp+100h] [rbp+0h] BYREF
  __int128 v177; // [rsp+108h] [rbp+8h] BYREF
  ULONG_PTR v178; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  PADAPTER_OBJECT *v180; // [rsp+130h] [rbp+30h]
  __int64 v181[2]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v182; // [rsp+148h] [rbp+48h]
  int v183[4]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v184; // [rsp+170h] [rbp+70h]
  _OWORD v185[2]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v186[176]; // [rsp+1A0h] [rbp+A0h] BYREF

  v163 = a1;
  v10 = 0;
  v180 = a9;
  String2 = a5;
  v166 = a2;
  v175 = 0LL;
  v11 = 0;
  v12 = 0LL;
  DestinationString = 0LL;
  v13 = *a6;
  v154 = a3;
  v14 = 0LL;
  v170 = (__int64)a6;
  v171 = v13;
  LOWORD(v167) = 0;
  v172 = 0LL;
  v177 = 0LL;
  DmaAdapter = 0LL;
  v164 = 0LL;
  v176 = 0LL;
  v157 = 0;
  *(_QWORD *)v161 = 0LL;
  v160 = 0;
  v155 = 0;
  v158 = 0;
  v159 = 0;
  v178 = 0LL;
  LODWORD(v175) = -1;
  CmpInitializeDelayDerefContext(&v177);
  v156 = (unsigned __int8)v15;
  v173 = v15;
  memset(v186, v15, 0xA8uLL);
  *(_OWORD *)(a7 + 160) = 0LL;
  *(_OWORD *)(a7 + 176) = 0LL;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_OWORD *)v183 = 0LL;
  HIWORD(v183[0]) = -1;
  v185[0] = 0LL;
  WORD1(v185[0]) = -1;
  *(_OWORD *)v181 = 0LL;
  WORD1(v181[0]) = -1;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)(a7 + 216) = 0LL;
  *(_OWORD *)(a7 + 232) = 0LL;
  *(_OWORD *)(a7 + 248) = 0LL;
  *(_OWORD *)(a7 + 264) = 0LL;
  *(_OWORD *)(a7 + 280) = 0LL;
  v16 = *(_QWORD *)(a7 + 88);
  v184 = 0LL;
  v185[1] = 0LL;
  v182 = 0LL;
  CmpRecordParseCachedSymlinkKcb(a7, v16);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v17 = *(_QWORD *)(a7 + 88);
  v18 = *(_QWORD *)(a7 + 72);
  v19 = v163;
  BugCheckParameter2 = v17;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v18 )
  {
    v20 = *(_QWORD *)(v19 + 56);
    if ( v20 && v18 != v20 )
    {
      Child = -1072103422;
      CmpRecordParseFailure(a7, 256, -1072103422);
      goto LABEL_33;
    }
    v162 = 0LL;
  }
  else
  {
    v18 = *(_QWORD *)(v19 + 56);
    v162 = *(_QWORD *)(v19 + 64);
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v19 + 50);
  if ( *(_QWORD *)(v19 + 8) != *((_QWORD *)CmpRegistryRootObject + 1) && v17 )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v17);
    v17 = 0LL;
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry();
  }
  HIBYTE(v154) = 0;
  if ( v17 )
  {
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    HIBYTE(v154) = 1;
    CachedFullKCBName = (const UNICODE_STRING *)CmpGetCachedFullKCBName(v17, (_BYTE *)&v156 + 1);
    v22 = CachedFullKCBName;
    if ( CachedFullKCBName && !BYTE1(v156) && RtlPrefixUnicodeString(CachedFullKCBName, String2, 1u) )
    {
      v23 = String2->Length - v22->Length;
      v24 = String2->MaximumLength - v22->Length;
      v25 = &String2->Buffer[(unsigned __int64)v22->Length >> 1];
      v26 = v23;
      LOWORD(v171) = v23;
      v27 = v25;
      *((_QWORD *)&v171 + 1) = v25;
      v28 = v24;
      WORD1(v171) = v24;
      if ( v23 )
      {
        do
        {
          if ( *v27 != 92 )
            break;
          ++v27;
          v28 -= 2;
          v26 -= 2;
        }
        while ( v26 );
        *((_QWORD *)&v171 + 1) = v27;
        LOWORD(v171) = v26;
        WORD1(v171) = v28;
      }
      v29 = ((*(_DWORD *)(BugCheckParameter2 + 8) >> 21) & 0x3FF) - 1;
      if ( (*(_DWORD *)a7 & 1) != 0 && !v26 )
      {
        v30 = *(_QWORD *)(BugCheckParameter2 + 80);
        v31 = *(unsigned __int16 *)(v30 + 24);
        v81 = (*(_DWORD *)v30 & 1) == 0;
        v32 = *(unsigned __int16 *)(v30 + 24);
        if ( v81 )
          v32 = (unsigned __int64)v31 >> 1;
        else
          LOWORD(v31) = 2 * v31;
        v11 = 1;
        v159 = 1;
        *((_QWORD *)&v171 + 1) = &v25[-v32];
        LOWORD(v171) = v23 + v31;
        WORD1(v171) = v24 + v31;
        --v29;
      }
      v33 = CmpComputeComponentHashes(&v171, (char *)&v156 + 2, v186);
      Child = v33;
      if ( v33 < 0 )
      {
        v34 = v33;
        v35 = 512;
LABEL_31:
        CmpRecordParseFailure(a7, v35, v34);
LABEL_32:
        v17 = BugCheckParameter2;
        goto LABEL_33;
      }
      if ( (unsigned int)(SHIWORD(v156) + v29) > 0x20 )
      {
        Child = -1073741811;
        v35 = 768;
        v34 = -1073741811;
        goto LABEL_31;
      }
      v38 = CmpValidateComponents((unsigned int)SHIWORD(v156), v186);
      Child = v38;
      if ( v38 < 0 )
      {
        v34 = v38;
        v35 = 1024;
        goto LABEL_31;
      }
      v17 = BugCheckParameter2;
      if ( v11 == v39 )
      {
        CmpLockHashEntrySharedByKcb(BugCheckParameter2);
        HIBYTE(v155) = 1;
      }
      CmpLockKcbShared(v17);
      if ( CmpIsKeyDeleted(v17, 0LL) || (*(_DWORD *)(v17 + 8) & 0x40000) != 0 )
      {
        CmpUnlockKcb(v17);
        if ( HIBYTE(v155) )
          CmpUnlockHashEntryByKcb(v17);
        CmpDereferenceKeyControlBlock(v17);
        v11 = 0;
        BugCheckParameter2 = 0LL;
        v17 = 0LL;
        v159 = 0;
        v171 = *(_OWORD *)v170;
        CmpCleanupPathInfo(v186);
        memset(v186, 0, 0xA8uLL);
        v40 = 0;
        HIBYTE(v155) = 0;
      }
      else
      {
        CmpUnlockKcb(v17);
        v40 = HIBYTE(v155);
      }
      goto LABEL_49;
    }
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    v17 = 0LL;
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry();
    HIBYTE(v154) = 0;
  }
  v40 = 0;
LABEL_49:
  BYTE1(v156) = v40;
  if ( !v17 )
  {
    v17 = *(_QWORD *)(v163 + 8);
    v41 = CmpComputeComponentHashes(&v171, (char *)&v156 + 2, v186);
    Child = v41;
    if ( v41 < 0 )
    {
      CmpRecordParseFailure(a7, 1280, v41);
      goto LABEL_364;
    }
    v42 = CmpValidateComponents((unsigned int)SHIWORD(v156), v186);
    Child = v42;
    if ( v42 < 0 )
    {
      CmpRecordParseFailure(a7, 1536, v42);
      goto LABEL_364;
    }
  }
  CmpRecordParseStartingKcb(a7, v17);
  v43 = HIWORD(v156);
  v44 = ((*(_DWORD *)(v17 + 8) >> 21) & 0x3FF) - v11;
  LODWORD(v170) = v11;
  LODWORD(v174) = SHIWORD(v156);
  if ( (unsigned int)(SHIWORD(v156) + v44) > 0x200 )
  {
    Child = -1073741811;
    CmpRecordParseFailure(a7, 1792, -1073741811);
    goto LABEL_364;
  }
  if ( !HIBYTE(v154) )
  {
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v43 = HIWORD(v156);
    HIBYTE(v154) = 1;
  }
  v45 = *(_DWORD *)(v163 + 48);
  if ( (v45 & 9) != 0 )
  {
    v46 = -1073740763;
    if ( (v45 & 1) == 0 )
      v46 = -1073741444;
    Child = v46;
    CmpRecordParseFailure(a7, 2048, v46);
    goto LABEL_364;
  }
  if ( v11 == v43 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v17);
    v14 = v17;
    v164 = v17;
    if ( v17 == BugCheckParameter2 )
    {
      v47 = v159;
      BYTE1(v154) = BYTE1(v156);
      HIBYTE(v155) = 0;
    }
    else
    {
      CmpLockHashEntrySharedByKcb(v17);
      v47 = v159;
      BYTE1(v154) = 1;
    }
LABEL_72:
    v49 = HIWORD(v156);
    if ( (_WORD)v47 == HIWORD(v156) && (*(_DWORD *)a7 & 1) == 0 )
    {
      CmpUnlockHashEntryByKcb(v14);
      BYTE1(v154) = 0;
    }
    CmpLockKcbShared(v14);
    if ( (__int16)v47 >= v49 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    else
    {
      DestinationString.Buffer = *(wchar_t **)(CmpGetComponentNameAtIndex(v186, (unsigned int)(__int16)v47) + 8);
      DestinationString.Length = v171 - 2 * (((__int64)DestinationString.Buffer - *((_QWORD *)&v171 + 1)) >> 1);
      DestinationString.MaximumLength = DestinationString.Length;
    }
    Child = CmpVEExecuteParseLogic(
              v14,
              (unsigned int)&DestinationString,
              a7,
              (_DWORD)String2,
              v154,
              (__int64)&v166->SubjectSecurityContext);
    CmpUnlockKcb(v14);
    if ( Child != -1073741199 )
    {
      CmpRecordParseFailure(a7, 2496, Child);
      goto LABEL_362;
    }
    if ( !(unsigned __int8)CmpOKToFollowLink(*(_QWORD *)(a7 + 64), *(_QWORD *)(v14 + 32)) )
    {
      Child = -1073741790;
      CmpRecordParseFailure(a7, 2560, -1073741790);
      goto LABEL_362;
    }
    v50 = v162;
    if ( v18 || v162 )
    {
      if ( *(_QWORD *)(v14 + 32) != CmpMasterHive )
      {
        if ( (v18 || v162) && *(_WORD *)(v14 + 66) )
        {
          CmpLogUnsupportedOperation(8LL);
          if ( !PsIsCurrentThreadInServerSilo(v53, v52) )
          {
            Child = -1072103419;
            CmpRecordParseFailure(a7, 2816, -1072103419);
            goto LABEL_362;
          }
          v18 = 0LL;
          v51 = 0LL;
        }
        else
        {
          v51 = v162;
        }
LABEL_94:
        if ( !CmpTransSilentIgnore() && (v18 || v51) )
        {
          Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(v14 + 32), v18, v51, 0, (__int64)&v172);
          if ( Child < 0 )
          {
            if ( BYTE1(v154) )
            {
              CmpUnlockHashEntryByKcb(v14);
              BYTE1(v154) = 0;
            }
            CmpUnlockRegistry();
            Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(v14 + 32), v18, v51, 1u, (__int64)&v172);
            CmpLockRegistry();
            v54 = Child;
            HIBYTE(v154) = 1;
            if ( Child >= 0 )
              v54 = -1073741267;
            Child = v54;
            CmpRecordParseFailure(a7, 3072, v54);
            goto LABEL_362;
          }
          v12 = v172;
        }
        started = CmpStartKcbStack(v183, *(unsigned __int16 *)(v14 + 66));
        Child = started;
        if ( started < 0 )
        {
          CmpRecordParseFailure(a7, 3328, started);
          goto LABEL_362;
        }
        v56 = CmpStartKcbStack(v185, *(unsigned __int16 *)(v14 + 66));
        Child = v56;
        if ( v56 < 0 )
        {
          CmpRecordParseFailure(a7, 3584, v56);
          goto LABEL_362;
        }
        v162 = (__int64)v185;
        v57 = (__int64)v183;
        CmpPopulateKcbStack(v183, v14);
        v58 = HIWORD(v156);
        if ( (__int16)v47 < SHIWORD(v156) )
        {
          while ( 1 )
          {
            CmpLockKcbStackShared(v57);
            if ( (unsigned __int8)CmpIsKeyStackDeleted(v57, v12) )
            {
              if ( CmpLoadingSystemHivesActive
                && (v14 = v164, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                && *(_QWORD *)(v164 + 32) == CmpMasterHive
                && (*(_DWORD *)(v164 + 8) & 0x7FE00000) == 0x600000
                && (__int16)v47 > 0
                && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v186, (unsigned int)((__int16)v47 - 1)),
                    (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v75, v76, a7 + 136)) )
              {
                *(_DWORD *)a7 |= 0x100u;
                Child = 259;
                CmpRecordParseFailure(a7, 3840, 259);
              }
              else
              {
                Child = -1073741772;
                CmpRecordParseFailure(a7, 4096, -1073741772);
              }
              goto LABEL_353;
            }
            if ( (unsigned __int8)CmpIsKeyStackSymlink(v57) )
              break;
            CmpUnlockKcbStack(v57);
            CmpGetComponentNameAtIndex(v186, (unsigned int)(__int16)v47);
            ComponentHashAtIndex = CmpGetComponentHashAtIndex((__int64)v186, (__int16)v47);
            v61 = (*(_DWORD *)a7 & 1) != 0 && (__int16)v47 == (_DWORD)v174 - 1;
            LODWORD(v152) = ComponentHashAtIndex + 37 * *(_DWORD *)(v14 + 16);
            v62 = CmpWalkOneLevel(v14, v57, &v176, v162, &v157, v60, ComponentHashAtIndex, v152, v12, v61, a7);
            Child = v62;
            if ( v62 == -1073741772 )
            {
              if ( !CmpLoadingSystemHivesActive )
                goto LABEL_131;
              v14 = v164;
              if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread() || *(_QWORD *)(v164 + 32) != CmpMasterHive )
              {
                v62 = Child;
LABEL_131:
                CmpRecordParseFailure(a7, 5504, v62);
                goto LABEL_362;
              }
              if ( (*(_DWORD *)(v164 + 8) & 0x7FE00000) == 0x600000 && (__int16)v47 > 0 )
              {
                v63 = CmpGetComponentNameAtIndex(v186, (unsigned int)((__int16)v47 - 1));
                if ( (unsigned __int8)CmpWaitForHiveMount(v63, v64, v65, a7 + 136) )
                {
                  *(_DWORD *)a7 |= 0x100u;
                  Child = 259;
                  CmpRecordParseFailure(a7, 5120, 259);
                  goto LABEL_362;
                }
              }
              if ( (*(_DWORD *)(v14 + 8) & 0x7FE00000) == 0x400000 )
              {
                v66 = CmpGetComponentNameAtIndex(v186, (unsigned int)(__int16)v47);
                if ( (unsigned __int8)CmpWaitForHiveMount(v66, v67, v68, a7 + 136) )
                {
                  *(_DWORD *)a7 |= 0x100u;
                  Child = 259;
                  CmpRecordParseFailure(a7, 5376, 259);
                  goto LABEL_362;
                }
              }
              v62 = Child;
              v12 = v172;
            }
            if ( v62 < 0 )
              goto LABEL_131;
            v69 = v176;
            CmpRecordParseWalkResult(a7, v176);
            CmpDereferenceKeyControlBlockUnsafe(v14);
            LOWORD(v47) = v47 + 1;
            v164 = v69;
            v14 = v69;
            BYTE1(v154) = v157;
            v58 = HIWORD(v156);
            v70 = v57;
            v57 = v162;
            v71 = (_OWORD *)v70;
            v162 = v70;
            v176 = 0LL;
            v157 = 0;
            v159 = v47;
            if ( (__int16)v47 >= SHIWORD(v156) )
              goto LABEL_147;
          }
          SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                 v57,
                                 (__int64)v186,
                                 v47,
                                 v58,
                                 v12,
                                 a7,
                                 (__int64)&v177,
                                 (__int64)String2,
                                 (ULONG_PTR *)(a7 + 88));
          Child = SymbolicLinkTarget;
          if ( SymbolicLinkTarget >= 0 )
          {
            *(_DWORD *)a7 &= ~8u;
            if ( !*(_QWORD *)(a7 + 64) )
            {
              v73 = *(_QWORD *)(v14 + 32);
              if ( (*(_DWORD *)(v73 + 4152) & 1) != 0 )
                *(_QWORD *)(a7 + 64) = v73;
            }
            Child = 260;
            CmpRecordParseFailure(a7, 4864, 260);
          }
          else
          {
            CmpRecordParseFailure(a7, 4608, SymbolicLinkTarget);
          }
          goto LABEL_362;
        }
        v71 = v185;
LABEL_147:
        v77 = *(_QWORD *)(v14 + 72);
        v78 = (__int64 *)(v14 + 72);
        *(_QWORD *)v161 = v71;
        v79 = v71;
        v174 = v14 + 72;
        if ( v77 )
        {
          CmpPopulateKcbStack(v71, v77);
          v77 = *v78;
        }
        else
        {
          v79 = 0LL;
          *(_QWORD *)v161 = 0LL;
        }
        v80 = *(_QWORD *)(v163 + 8);
        if ( v77 != v80 && v14 != v80 )
        {
          CmpLockKcbShared(v80);
          BYTE2(v154) = 1;
        }
        v81 = v79 == 0LL;
        if ( v79 )
        {
          CmpLockKcbStackShared(v79);
          v81 = v79 == 0LL;
        }
        v82 = !v81;
        v10 = !v81;
        CmpLockKcbStackShared(v57);
        if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v163, 0LL) )
        {
          v83 = -1073740763;
          v84 = 5888;
          v85 = a7;
          if ( (*(_BYTE *)(v163 + 48) & 1) == 0 )
            v83 = -1073741444;
LABEL_158:
          Child = v83;
          CmpRecordParseFailure(v85, v84, v83);
          v10 = v82;
LABEL_353:
          CmpUnlockKcbStack(v57);
LABEL_354:
          v140 = *(_QWORD *)v161;
LABEL_355:
          if ( v10 )
            CmpUnlockKcbStack(v140);
LABEL_357:
          if ( BYTE2(v154) )
            CmpUnlockKcb(*(_QWORD *)(v163 + 8));
          if ( HIBYTE(v158) )
            CmpUnlockHashEntry(*(PVOID *)(a7 + 48), 0);
          goto LABEL_362;
        }
        LOWORD(v159) = v159 - 1;
        v170 = v14 + 184;
        if ( (*(_DWORD *)(v14 + 184) & 0x20000) != 0 )
        {
          Child = -1073741772;
          CmpRecordParseFailure(a7, 6144, -1073741772);
          v10 = v82;
          goto LABEL_353;
        }
        if ( !CmRmIsKcbStackVisible(v57) )
        {
          Child = -1073741772;
          CmpRecordParseFailure(a7, 6400, -1073741772);
          v10 = v82;
          goto LABEL_353;
        }
        if ( (*(_DWORD *)a7 & 2) != 0 )
        {
          CmpUnlockKcbStack(v57);
          v86 = *(_QWORD *)v161;
          CmpUnlockKcbStack(*(_QWORD *)v161);
          if ( BYTE2(v154) )
            CmpUnlockKcb(*(_QWORD *)(v163 + 8));
          HIBYTE(v158) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
          if ( BYTE2(v154) )
            CmpLockKcbShared(*(_QWORD *)(v163 + 8));
          CmpLockKcbStackTopExclusiveRestShared(v86);
          CmpLockKcbStackTopExclusiveRestShared(v57);
          v162 = CmpGetComponentNameAtIndex(v186, (unsigned int)(__int16)v159);
          v88 = CmpGetComponentHashAtIndex((__int64)v186, v87);
          if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v163, 0LL) )
          {
            v83 = -1073740763;
            v84 = 6656;
            v85 = a7;
            if ( (*(_BYTE *)(v163 + 48) & 1) == 0 )
              v83 = -1073741444;
            goto LABEL_158;
          }
          if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v161, v12) )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 6912, -1073741772);
            v10 = v82;
            goto LABEL_353;
          }
          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v57, v12) )
          {
            v92 = 7168;
LABEL_176:
            Child = -1073741790;
            CmpRecordParseFailure(a7, v92, -1073741790);
            v10 = v82;
            goto LABEL_353;
          }
          if ( *(_QWORD *)(*(_QWORD *)v174 + 32LL) != CmpMasterHive )
          {
            v92 = 7424;
            goto LABEL_176;
          }
          if ( (*(_DWORD *)(*(_QWORD *)v174 + 184LL) & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 7680, -1073741772);
            v10 = v82;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess(a7 + 168, v89, v90, v91);
            *(_DWORD *)(a7 + 160) |= 1u;
          }
          v93 = *(unsigned int *)(a7 + 40);
          v94 = *(_QWORD *)(a7 + 48);
          if ( (_DWORD)v93 == -1 )
          {
            HiveRootCell = CmpCreateHiveRootCell(v94, a7 + 40);
            Child = HiveRootCell;
            if ( HiveRootCell < 0 )
            {
              CmpRecordParseFailure(a7, 7808, HiveRootCell);
              v10 = v82;
              goto LABEL_353;
            }
          }
          else
          {
            updated = CmpUpdateHiveRootCellFlags(v94, v93);
            Child = updated;
            if ( updated < 0 )
            {
              CmpRecordParseFailure(a7, 7936, updated);
              v10 = v82;
              goto LABEL_353;
            }
          }
          *(_WORD *)(v14 + 186) |= 2u;
          LODWORD(v152) = 0;
          *(_DWORD *)v151 = v88;
          Child = CmpCreateKeyControlBlock(
                    *(_QWORD *)(a7 + 48),
                    -1,
                    v14,
                    *(_QWORD *)(a7 + 80),
                    1,
                    (unsigned __int16 *)v162,
                    *(_QWORD *)v151,
                    v152,
                    &v178);
          *(_WORD *)(v14 + 186) = *(_WORD *)(v170 + 2) & 0xFFFD;
          if ( Child < 0 )
          {
            CmpRecordParseFailure(a7, 0x2000, Child);
            v10 = v82;
            goto LABEL_353;
          }
          v97 = v14;
          v14 = v178;
          CmpDereferenceKeyControlBlockUnsafe(v97);
          CmpUnlockHashEntryByKcb(v97);
          BYTE1(v154) = 0;
          v100 = CmpStartKcbStackForTopLayerKcb((__int64)v181, v14, v98, v99);
          Child = v100;
          if ( v100 < 0 )
          {
            CmpRecordParseFailure(a7, 8448, v100);
            v10 = v82;
            goto LABEL_353;
          }
          *(_WORD *)(v97 + 186) |= 2u;
          CmpLockKcbStackTopExclusiveRestShared((__int64)v181);
          *(_WORD *)(v97 + 186) &= ~2u;
          v160 = 1;
          KeyBody = CmpCreateKeyBody(v14, 1, (__int64)v181, (__int64)&DmaAdapter, (__int64)&v155);
          Child = KeyBody;
          if ( KeyBody < 0 )
          {
            CmpRecordParseFailure(a7, 8576, KeyBody);
            v10 = v82;
            goto LABEL_352;
          }
          HvLockHiveFlusherShared(*(_QWORD *)(v97 + 32));
          HvLockHiveFlusherExclusive(*(_QWORD *)(v14 + 32));
          v102 = *(_QWORD *)(v14 + 32);
          v103 = *(unsigned int *)(a7 + 40);
          LODWORD(v170) = *(_DWORD *)(v102 + 104);
          if ( !(unsigned __int8)HvMarkCellDirty(v102, v103, 0LL) )
          {
            Child = -1073741443;
            CmpRecordParseFailure(a7, 8704, -1073741443);
LABEL_196:
            HvUnlockHiveFlusherExclusive(*(_QWORD *)(v14 + 32));
            HvUnlockHiveFlusherShared(*(_QWORD *)(v97 + 32));
            goto LABEL_352;
          }
          Child = CmpCreateChild(*(__int64 *)v161, v57, (__int64)v166, (unsigned __int16 *)v162, a7, 10, 0, 1, v12);
          if ( Child < 0 )
            goto LABEL_196;
          *(_DWORD *)(v14 + 40) = *(_DWORD *)(a7 + 40);
          KeyNodeForKcb = CmpGetKeyNodeForKcb(v14, (__int64)&v175, 1);
          *(_DWORD *)(KeyNodeForKcb + 16) = *(_DWORD *)(v97 + 40);
          ++*(_QWORD *)(v14 + 304);
          CmpRebuildKcbCacheFromNode(v14, KeyNodeForKcb, 0LL, 0);
          CmpReleaseKeyNodeForKcb(v14, &v175);
          if ( !(_DWORD)v170 )
            HvResetDirtyData(*(_QWORD *)(v14 + 32));
          HvUnlockHiveFlusherExclusive(*(_QWORD *)(v14 + 32));
          HvUnlockHiveFlusherShared(*(_QWORD *)(v97 + 32));
          *(_WORD *)(v97 + 8) |= 8u;
          CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v14);
          *(_QWORD *)(v97 + 104) = v14;
          CmpUnlockHashEntry(*(PVOID *)(a7 + 48), 0);
          goto LABEL_201;
        }
        if ( (*(_DWORD *)a7 & 0x20) != 0 )
        {
          CmpUnlockKcbStack(v57);
          v109 = *(_QWORD *)v161;
          CmpUnlockKcbStack(*(_QWORD *)v161);
          CmpLockKcbStackTopExclusiveRestShared(v109);
          CmpLockKcbStackTopExclusiveRestShared(v57);
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v109, v12) )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 8960, -1073741772);
            v10 = v82;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(*v78 + 184) & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 9216, -1073741772);
            v10 = v82;
            goto LABEL_353;
          }
          v110 = (unsigned __int16 *)CmpGetComponentNameAtIndex(v186, (unsigned int)(__int16)v159);
          v111 = *(_DWORD *)(a7 + 24) >> 2;
          LOBYTE(v111) = (*(_DWORD *)(a7 + 24) & 4) != 0;
          if ( !CmpCheckCreateAccessOnKcbStack(
                  v111,
                  v109,
                  a7,
                  (__int64)v166,
                  v154,
                  16 * (*(_DWORD *)(a7 + 24) & 2),
                  v111,
                  v12,
                  &Child) )
          {
            CmpRecordParseFailure(a7, 9472, Child);
            v10 = v82;
            goto LABEL_353;
          }
          CmpCleanUpKcbCachedSymlink(v14);
          *(_WORD *)(v14 + 186) |= 0x40u;
          *(_DWORD *)(v14 + 100) = -1;
          *(_DWORD *)(v14 + 96) = *(_DWORD *)(a7 + 56);
          Child = CmpCreateKeyBody(v14, 1, v57, (__int64)&DmaAdapter, (__int64)&v155);
          v10 = v82;
          if ( Child < 0 )
            goto LABEL_353;
          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v57, v12) )
            goto LABEL_202;
          Child = CmpCreateChild(*(__int64 *)v161, v57, (__int64)v166, v110, a7, 64, 0, 0, v12);
          if ( Child < 0 )
            goto LABEL_353;
LABEL_201:
          *(_DWORD *)(a7 + 32) = 1;
LABEL_202:
          v10 = v82;
LABEL_203:
          v105 = v154;
          goto LABEL_204;
        }
        if ( !(unsigned __int8)CmpIsKeyStackDeleted(v57, v12) )
        {
          if ( (unsigned __int8)CmpIsKeyStackSymlink(v57) && (*(_DWORD *)a7 & 0x200) == 0 )
          {
            if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
            {
              v140 = *(_QWORD *)v161;
              if ( *(_QWORD *)v161 )
                CmpUnlockKcbStack(*(_QWORD *)v161);
              v141 = 0;
              if ( !v140 )
                v141 = v10;
              v10 = v141;
              if ( BYTE2(v154) )
              {
                CmpUnlockKcb(*(_QWORD *)(v163 + 8));
                BYTE2(v154) = 0;
              }
              if ( BYTE1(v154) )
              {
                CmpUnlockHashEntryByKcb(v14);
                BYTE1(v154) = 0;
              }
              v142 = CmpGetSymbolicLinkTarget(
                       v57,
                       (__int64)v186,
                       0,
                       0,
                       v12,
                       a7,
                       (__int64)&v177,
                       (__int64)String2,
                       (ULONG_PTR *)(a7 + 88));
              Child = v142;
              if ( v142 >= 0 )
              {
                *(_DWORD *)a7 &= ~8u;
                if ( !*(_QWORD *)(a7 + 64) )
                {
                  v143 = *(_QWORD *)(v14 + 32);
                  if ( (*(_DWORD *)(v143 + 4152) & 1) != 0 )
                    *(_QWORD *)(a7 + 64) = v143;
                }
                Child = 260;
                CmpRecordParseFailure(a7, 14592, 260);
              }
              else
              {
                CmpRecordParseFailure(a7, 14336, v142);
              }
              goto LABEL_355;
            }
            Child = -1073741771;
            CmpRecordParseFailure(a7, 14080, -1073741771);
            v10 = v82;
            goto LABEL_353;
          }
          if ( (_BYTE)v158 )
          {
            Child = -1073741811;
            CmpRecordParseFailure(a7, 14848, -1073741811);
            v10 = v82;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)v170 & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 15104, -1073741772);
            v10 = v82;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
          {
            Child = -1073741771;
            CmpRecordParseFailure(a7, 15360, -1073741771);
            v10 = v82;
            goto LABEL_353;
          }
          v144 = String2;
          v145 = CmpDoWritethroughReparse(v14, v57, *(__int64 *)v161, 0, 0LL, a7, (UNICODE_STRING *)String2);
          Child = v145;
          if ( v145 != -1073741199 )
          {
            CmpRecordParseFailure(a7, 15424, v145);
            v10 = v82;
            goto LABEL_353;
          }
          v146 = CmpVEExecuteOpenLogic(
                   v14,
                   (_DWORD *)a7,
                   0,
                   (__int64)v144,
                   v154,
                   (__int64)&v166->SubjectSecurityContext);
          Child = v146;
          if ( v146 != -1073741199 )
          {
            CmpRecordParseFailure(a7, 15488, v146);
            v10 = v82;
            goto LABEL_353;
          }
          v105 = v154;
          Child = CmpCreateKeyBody(v14, 0, v57, (__int64)&DmaAdapter, (__int64)&v155);
          v147 = Child;
          v10 = v82;
          if ( Child < 0 )
          {
            if ( Child == -1073741444 )
              v147 = -1073741772;
            Child = v147;
            CmpRecordParseFailure(a7, 15552, v147);
            goto LABEL_353;
          }
LABEL_204:
          if ( *(_DWORD *)(a7 + 32) == 1 )
          {
            *(&DmaAdapter->Size + 1) = WORD1(DmaAdapter->DmaOperations->MapTransfer);
          }
          else if ( !(unsigned __int8)CmpCheckOpenAccessOnKeyBody(
                                        DmaAdapter,
                                        v57,
                                        a7,
                                        v166,
                                        v105,
                                        (*(_DWORD *)(a7 + 24) & 4) != 0,
                                        v12,
                                        (bool *)&v156,
                                        &Child) )
          {
            if ( (_BYTE)v156 )
            {
              if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
              {
                CmpAttachToRegistryProcess(a7 + 168, v106, v107, v108);
                *(_DWORD *)(a7 + 160) |= 1u;
              }
              v173 = CmpConstructName(v14);
            }
            CmpRecordParseFailure(a7, 15584, Child);
            goto LABEL_351;
          }
          *v180 = DmaAdapter;
          DmaAdapter = 0LL;
          if ( !*(_DWORD *)(a7 + 32) )
            *(_DWORD *)(a7 + 32) = 2;
          Child = (_BYTE)v155 != 0 ? 0x40000016 : 0;
LABEL_351:
          HIBYTE(v158) = 0;
          if ( !v160 )
            goto LABEL_353;
LABEL_352:
          CmpUnlockKcbStack(v181);
          goto LABEL_353;
        }
        if ( (_BYTE)v158 )
        {
          Child = -1073741811;
          CmpRecordParseFailure(a7, 9728, -1073741811);
          v10 = v82;
          goto LABEL_353;
        }
        v112 = *(_QWORD *)v161;
        if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v161, v12) || !CmRmIsKcbStackVisible(v112) )
        {
          Child = -1073741772;
          CmpRecordParseFailure(a7, 9984, -1073741772);
          v10 = v82;
          goto LABEL_353;
        }
        if ( (*(_DWORD *)(*v78 + 184) & 0x20000) != 0 )
        {
          Child = -1073741772;
          CmpRecordParseFailure(a7, 10240, -1073741772);
          v10 = v82;
          goto LABEL_353;
        }
        if ( (*(_DWORD *)a7 & 1) == 0 )
        {
          if ( CmpLoadingSystemHivesActive
            && (v14 = v164, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
            && *(_QWORD *)(v164 + 32) == CmpMasterHive
            && (*(_DWORD *)(v164 + 8) & 0x7FE00000) == 0x600000
            && (v113 = CmpGetComponentNameAtIndex(v186, (unsigned int)(__int16)v159),
                (unsigned __int8)CmpWaitForHiveMount(v113, v114, v115, a7 + 136)) )
          {
            *(_DWORD *)a7 |= 0x100u;
            Child = 259;
            CmpRecordParseFailure(a7, 10496, 259);
            v10 = v82;
          }
          else
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 10752, -1073741772);
            v10 = v82;
          }
          goto LABEL_353;
        }
        v162 = v14 + 32;
        if ( *(_QWORD *)(v14 + 32) == CmpMasterHive && CmpNoMasterCreates )
        {
          v14 = v164;
          if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
          {
            if ( CmpLoadingSystemHivesActive
              && (*(_DWORD *)(v164 + 8) & 0x7FE00000) == 0x600000
              && (v116 = CmpGetComponentNameAtIndex(v186, (unsigned int)(__int16)v159),
                  (unsigned __int8)CmpWaitForHiveMount(v116, v117, v118, a7 + 136)) )
            {
              *(_DWORD *)a7 |= 0x100u;
              Child = 259;
              CmpRecordParseFailure(a7, 11008, 259);
              v10 = v82;
            }
            else
            {
              Child = -1073741811;
              CmpRecordParseFailure(a7, 11264, -1073741811);
              v10 = v82;
            }
            goto LABEL_353;
          }
          v12 = v172;
        }
        v119 = (UNICODE_STRING *)CmpGetComponentNameAtIndex(v186, (unsigned int)(__int16)v159);
        v120 = CmpDoWritethroughReparse(v14, v57, *(__int64 *)v161, 1, v119, a7, (UNICODE_STRING *)String2);
        Child = v120;
        if ( v120 != -1073741199 )
        {
          CmpRecordParseFailure(a7, 11392, v120);
          v10 = v82;
          goto LABEL_353;
        }
        if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
        {
          CmpAttachToRegistryProcess(a7 + 168, v121, v122, v123);
          *(_DWORD *)(a7 + 160) |= 1u;
        }
        if ( *(_DWORD *)(*v78 + 40) == -1 )
        {
          if ( !CmpCheckCreateAccessOnKcbStack(
                  16 * (*(_DWORD *)(a7 + 24) & 2u),
                  *(__int64 *)v161,
                  a7,
                  (__int64)v166,
                  v154,
                  16 * (*(_DWORD *)(a7 + 24) & 2),
                  (*(_DWORD *)(a7 + 24) & 4) != 0,
                  v12,
                  &Child) )
          {
            if ( KeGetCurrentThread()->PreviousMode == 1 )
            {
              CurrentThreadProcess = PsGetCurrentThreadProcess();
              if ( !CmpDoesProcessBelongToServiceSession((__int64)CurrentThreadProcess) )
              {
                if ( CmpCheckKeyOwnerForPca(*(__int64 *)v161, v172) )
                {
                  v125 = *v78;
                  LOBYTE(v156) = 1;
                  v173 = CmpConstructName(v125);
                }
              }
            }
            CmpRecordParseFailure(a7, 11520, Child);
            v14 = v164;
            v10 = v82;
            goto LABEL_353;
          }
          CmpUnlockKcbStack(v57);
          CmpUnlockKcbStack(*(_QWORD *)v161);
          if ( BYTE2(v154) )
          {
            CmpUnlockKcb(*(_QWORD *)(v163 + 8));
            BYTE2(v154) = 0;
          }
          LOBYTE(v126) = 1;
          Child = CmpPromoteKey(*(_QWORD *)v161, 0LL, v126);
          v127 = Child;
          if ( Child < 0 )
          {
            if ( Child == -1073741444 )
              v127 = -1073741772;
            Child = v127;
            CmpRecordParseFailure(a7, 11776, v127);
            v10 = v82;
            goto LABEL_354;
          }
          v128 = *(_QWORD *)v161;
        }
        else
        {
          CmpUnlockKcbStack(v57);
          v128 = *(_QWORD *)v161;
          CmpUnlockKcbStack(*(_QWORD *)v161);
          CmpLockKcbStackTopExclusiveRestShared(v128);
        }
        CmpLockKcbStackTopExclusiveRestShared(v57);
        if ( !CmRmIsKcbStackVisible(v57) )
        {
          Child = -1073741772;
          CmpRecordParseFailure(a7, 12032, -1073741772);
          v10 = 1;
          goto LABEL_353;
        }
        if ( (unsigned __int8)CmpIsKeyStackDeleted(v57, v12) )
        {
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v128, v12) || !CmRmIsKcbStackVisible(v128) )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 12288, -1073741772);
            v10 = 1;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(*v78 + 184) & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 12544, -1073741772);
            v10 = 1;
            goto LABEL_353;
          }
          Logic = CmpVEExecuteCreateLogic(
                    *v78,
                    v14,
                    (__m128i *)v119,
                    (__int64)v166,
                    v154,
                    16 * (*(_DWORD *)(a7 + 24) & 2u),
                    v12,
                    a7,
                    (UNICODE_STRING *)String2);
          Child = Logic;
          if ( Logic == -1073741739 )
          {
            *(_DWORD *)a7 |= 0x400u;
            Child = -1073741267;
            CmpRecordParseFailure(a7, 12672, -1073741267);
            v10 = 1;
            goto LABEL_353;
          }
          if ( Logic != -1073741199 )
          {
            CmpRecordParseFailure(a7, 12736, Logic);
            v10 = 1;
            goto LABEL_353;
          }
          if ( !CmpCheckCreateAccessOnKcbStack(
                  16 * (*(_DWORD *)(a7 + 24) & 2u),
                  v128,
                  a7,
                  (__int64)v166,
                  v154,
                  16 * (*(_DWORD *)(a7 + 24) & 2),
                  (*(_DWORD *)(a7 + 24) & 4) != 0,
                  v12,
                  &Child) )
          {
            if ( KeGetCurrentThread()->PreviousMode == 1 )
            {
              v130 = PsGetCurrentThreadProcess();
              if ( !CmpDoesProcessBelongToServiceSession((__int64)v130) )
              {
                if ( CmpCheckKeyOwnerForPca(v128, v172) )
                {
                  v131 = *v78;
                  LOBYTE(v156) = 1;
                  v173 = CmpConstructName(v131);
                }
              }
            }
            CmpRecordParseFailure(a7, 12800, Child);
            v14 = v164;
            v10 = 1;
            goto LABEL_353;
          }
          v132 = CmpCreateKeyBody(v14, 1, v57, (__int64)&DmaAdapter, (__int64)&v155);
          Child = v132;
          if ( v132 < 0 )
          {
            CmpRecordParseFailure(a7, 12928, v132);
            v10 = 1;
            goto LABEL_353;
          }
          v133 = CmpCreateChild(v128, v57, (__int64)v166, &v119->Length, a7, 8 * (*(_WORD *)(a7 + 24) & 2u), 0, 0, v12);
          Child = v133;
          if ( v133 < 0 )
          {
            CmpRecordParseFailure(a7, 12992, v133);
            v10 = 1;
            goto LABEL_353;
          }
          *(_DWORD *)(a7 + 32) = 1;
          goto LABEL_287;
        }
        if ( !(unsigned __int8)CmpIsKeyStackSymlink(v57) || (*(_DWORD *)a7 & 0x200) != 0 )
        {
          if ( (*(_DWORD *)v170 & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 13568, -1073741772);
            v10 = 1;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
          {
            v136 = String2;
            v137 = CmpDoWritethroughReparse(v14, v57, v128, 0, 0LL, a7, (UNICODE_STRING *)String2);
            Child = v137;
            if ( v137 != -1073741199 )
            {
              CmpRecordParseFailure(a7, 13888, v137);
              v10 = 1;
              goto LABEL_353;
            }
            v138 = CmpVEExecuteOpenLogic(
                     v14,
                     (_DWORD *)a7,
                     1,
                     (__int64)v136,
                     v154,
                     (__int64)&v166->SubjectSecurityContext);
            Child = v138;
            if ( v138 != -1073741199 )
            {
              CmpRecordParseFailure(a7, 13952, v138);
              v10 = 1;
              goto LABEL_353;
            }
            v139 = CmpCreateKeyBody(v14, 1, v57, (__int64)&DmaAdapter, (__int64)&v155);
            Child = v139;
            if ( v139 < 0 )
            {
              CmpRecordParseFailure(a7, 14016, v139);
              v10 = 1;
              goto LABEL_353;
            }
LABEL_287:
            v10 = 1;
            goto LABEL_203;
          }
          v134 = 13824;
        }
        else
        {
          if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
          {
            CmpUnlockKcbStack(v128);
            if ( BYTE2(v154) )
            {
              CmpUnlockKcb(*(_QWORD *)(v163 + 8));
              BYTE2(v154) = 0;
            }
            if ( BYTE1(v154) )
            {
              CmpUnlockHashEntryByKcb(v14);
              BYTE1(v154) = 0;
            }
            v135 = CmpGetSymbolicLinkTarget(
                     v57,
                     (__int64)v186,
                     0,
                     0,
                     v12,
                     a7,
                     (__int64)&v177,
                     (__int64)String2,
                     (ULONG_PTR *)(a7 + 88));
            Child = v135;
            if ( v135 >= 0 )
            {
              *(_DWORD *)a7 &= ~8u;
              if ( !*(_QWORD *)(a7 + 64) && (*(_DWORD *)(*(_QWORD *)v162 + 4152LL) & 1) != 0 )
                *(_QWORD *)(a7 + 64) = *(_QWORD *)v162;
              Child = 260;
              CmpRecordParseFailure(a7, 13440, 260);
            }
            else
            {
              CmpRecordParseFailure(a7, 13312, v135);
            }
            goto LABEL_357;
          }
          v134 = 13056;
        }
        Child = -1073741771;
        CmpRecordParseFailure(a7, v134, -1073741771);
        v10 = 1;
        goto LABEL_353;
      }
      v50 = 0LL;
      LOBYTE(v158) = 1;
      v18 = 0LL;
    }
    v51 = v50;
    goto LABEL_94;
  }
  v48 = CmpPerformCompleteKcbCacheLookup(v17, a7, (__int64)&v164, (__int64)&v154 + 1, (__int64)&v167);
  Child = v48;
  if ( v48 >= 0 && v48 != 259 )
  {
    HIWORD(v47) = HIWORD(v159);
    v14 = v164;
    LOWORD(v47) = v167 + v159;
    v159 = v47;
    CmpRecordParseKcbCacheResult(a7, v164, (unsigned int)(__int16)v167);
    goto LABEL_72;
  }
  CmpRecordParseFailure(a7, 2432, v48);
  v14 = v164;
LABEL_362:
  if ( BYTE1(v154) )
    CmpUnlockHashEntryByKcb(v14);
LABEL_364:
  if ( !HIBYTE(v155) )
    goto LABEL_32;
  v17 = BugCheckParameter2;
  CmpUnlockHashEntryByKcb(BugCheckParameter2);
LABEL_33:
  CmpCleanupKcbStack(v183);
  CmpCleanupKcbStack(v185);
  CmpCleanupKcbStack(v181);
  v36 = v176;
  if ( v176 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v14);
    v37 = v36;
  }
  else
  {
    if ( !v14 )
      goto LABEL_369;
    v37 = v14;
  }
  CmpDereferenceKeyControlBlock(v37);
LABEL_369:
  if ( v17 )
    CmpDereferenceKeyControlBlock(v17);
  v148 = *(_DWORD *)(a7 + 100);
  if ( v148 && (v148 & 2) != 0 )
  {
    CmpSearchKeyControlBlockTree(CmpSyncKcbCacheForHive, *(_QWORD *)(a7 + 112), &v177);
    *(_DWORD *)(a7 + 100) &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v177);
  if ( HIBYTE(v154) )
    CmpUnlockRegistry();
  v149 = (void *)v173;
  if ( (_BYTE)v156 )
  {
    if ( !v173 )
      goto LABEL_382;
    if ( (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(a7, v149);
  }
  if ( v149 )
    CmpFreeTransientPoolWithTag(v149, 0x624E4D43u);
LABEL_382:
  if ( (*(_DWORD *)(a7 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(a7 + 168);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpCleanupPathInfo(v186);
  return (unsigned int)Child;
}
