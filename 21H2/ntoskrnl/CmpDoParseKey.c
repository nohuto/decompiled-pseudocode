/*
 * XREFs of CmpDoParseKey @ 0x140710550
 * Callers:
 *     CmpParseKey @ 0x14070FFF0 (CmpParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023C620 (PsGetCurrentThreadProcess.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     CmpGetCachedFullKCBName @ 0x1402AB70C (CmpGetCachedFullKCBName.c)
 *     CmpTransSilentIgnore @ 0x14035BE20 (CmpTransSilentIgnore.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmRmIsKcbStackVisible @ 0x1405CD270 (CmRmIsKcbStackVisible.c)
 *     CmpCheckKeyOwnerForPca @ 0x1405DA778 (CmpCheckKeyOwnerForPca.c)
 *     CmpTransSearchAddTransFromHive @ 0x1405DED40 (CmpTransSearchAddTransFromHive.c)
 *     CmpRecordParseFailure @ 0x1405E99A0 (CmpRecordParseFailure.c)
 *     CmpGetComponentHashAtIndex @ 0x1405EA1B0 (CmpGetComponentHashAtIndex.c)
 *     CmpRecordParseWalkResult @ 0x1405F8C24 (CmpRecordParseWalkResult.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1405FC750 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpVEExecuteCreateLogic @ 0x1405FFF90 (CmpVEExecuteCreateLogic.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406150D4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406177B8 (CmpTryToLockHashEntryExclusive.c)
 *     CmpVEExecuteOpenLogic @ 0x140649DB0 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x140649EA0 (CmpDoWritethroughReparse.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14065DE90 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14065EDC4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKeyNodeForKcb @ 0x140660DF4 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x140660E70 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406643E8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpIsKeyDeleted @ 0x140667410 (CmpIsKeyDeleted.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x14068F9C8 (CmpDoesProcessBelongToServiceSession.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1406DB998 (CmpLockHashEntrySharedByKcb.c)
 *     CmpUnlockHashEntry @ 0x1406DBD98 (CmpUnlockHashEntry.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406DDF90 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpConstructName @ 0x1406E271C (CmpConstructName.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     HvResetDirtyData @ 0x1406F917C (HvResetDirtyData.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1406F97EC (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406F9824 (HvLockHiveFlusherExclusive.c)
 *     CmpLockKcbShared @ 0x140709EF0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x140712760 (CmpStartKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1407127C0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1407128D0 (CmpPopulateKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x140712920 (CmpIsKeyStackDeleted.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKeyStackSymlink @ 0x140712F60 (CmpIsKeyStackSymlink.c)
 *     CmpCleanupPathInfo @ 0x140712FB0 (CmpCleanupPathInfo.c)
 *     CmpRecordParseStartingKcb @ 0x140713020 (CmpRecordParseStartingKcb.c)
 *     CmpValidateComponents @ 0x140713040 (CmpValidateComponents.c)
 *     CmpComputeComponentHashes @ 0x1407130A0 (CmpComputeComponentHashes.c)
 *     CmpRecordParseCachedSymlinkKcb @ 0x1407133D0 (CmpRecordParseCachedSymlinkKcb.c)
 *     CmpOKToFollowLink @ 0x1407133F0 (CmpOKToFollowLink.c)
 *     CmpVEExecuteParseLogic @ 0x140713570 (CmpVEExecuteParseLogic.c)
 *     CmpRecordParseKcbCacheResult @ 0x1407137C0 (CmpRecordParseKcbCacheResult.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407137F0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpGetComponentNameAtIndex @ 0x140713980 (CmpGetComponentNameAtIndex.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 *     CmpCheckExeOwnerForPca @ 0x14076FD28 (CmpCheckExeOwnerForPca.c)
 *     CmpCreateHiveRootCell @ 0x14078DDB0 (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x1407C43A4 (CmpWaitForHiveMount.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863F5C (CmpReleaseKeyNodeForKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x14086AC8C (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTree @ 0x14086F314 (CmpSearchKeyControlBlockTree.c)
 *     CmpLogUnsupportedOperation @ 0x1408764AC (CmpLogUnsupportedOperation.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x140880428 (CmpPromoteKey.c)
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
  ULONG_PTR v77; // rax
  ULONG_PTR *v78; // rbx
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
  int v89; // edx
  ULONG_PTR v90; // rdx
  ULONG_PTR v91; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  __int64 v94; // rbx
  __int64 v95; // r8
  struct _LOOKASIDE_LIST_EX *v96; // r9
  int v97; // eax
  int KeyBody; // eax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 KeyNodeForKcb; // rax
  unsigned __int8 v102; // bl
  __int64 v103; // r14
  UNICODE_STRING *v104; // rbx
  __int64 v105; // rcx
  __int64 v106; // r14
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // r8
  UNICODE_STRING *v113; // r14
  int v114; // eax
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v116; // rcx
  __int64 v117; // r8
  int v118; // r8d
  __int64 v119; // r15
  int Logic; // eax
  _KPROCESS *v121; // rax
  __int64 v122; // rcx
  int v123; // eax
  int v124; // eax
  int v125; // edx
  int v126; // eax
  PCUNICODE_STRING v127; // rbx
  int v128; // eax
  int v129; // eax
  int v130; // eax
  __int64 v131; // rbx
  bool v132; // cl
  int v133; // eax
  __int64 v134; // rcx
  PCUNICODE_STRING v135; // rbx
  int v136; // eax
  int v137; // eax
  int v138; // r8d
  int v139; // eax
  void *v140; // rbx
  BOOLEAN v142[8]; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v143; // [rsp+38h] [rbp-C8h]
  int Child; // [rsp+60h] [rbp-A0h] BYREF
  int v145; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v146; // [rsp+68h] [rbp-98h] BYREF
  int v147; // [rsp+6Ah] [rbp-96h] BYREF
  bool v148; // [rsp+70h] [rbp-90h] BYREF
  __int16 v149; // [rsp+71h] [rbp-8Fh]
  int v150; // [rsp+74h] [rbp-8Ch]
  char v151; // [rsp+78h] [rbp-88h]
  int v152[2]; // [rsp+80h] [rbp-80h]
  __int64 v153; // [rsp+88h] [rbp-78h]
  __int64 v154; // [rsp+90h] [rbp-70h]
  __int64 v155; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  struct _ACCESS_STATE *v157; // [rsp+A8h] [rbp-58h]
  __int64 v158; // [rsp+B0h] [rbp-50h] BYREF
  PCUNICODE_STRING String2; // [rsp+B8h] [rbp-48h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v161; // [rsp+C8h] [rbp-38h]
  __int128 v162; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v163; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v164; // [rsp+E8h] [rbp-18h]
  ULONG_PTR v165; // [rsp+F0h] [rbp-10h]
  __int64 v166; // [rsp+F8h] [rbp-8h] BYREF
  ULONG_PTR v167; // [rsp+100h] [rbp+0h] BYREF
  __int128 v168; // [rsp+108h] [rbp+8h] BYREF
  ULONG_PTR v169; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  PADAPTER_OBJECT *v171; // [rsp+130h] [rbp+30h]
  __int64 v172[2]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v173; // [rsp+148h] [rbp+48h]
  int v174[4]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v175; // [rsp+170h] [rbp+70h]
  _OWORD v176[2]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v177[176]; // [rsp+1A0h] [rbp+A0h] BYREF

  v154 = a1;
  v10 = 0;
  v171 = a9;
  String2 = a5;
  v157 = a2;
  v166 = 0LL;
  v11 = 0;
  v12 = 0LL;
  DestinationString = 0LL;
  v13 = *a6;
  v145 = a3;
  v14 = 0LL;
  v161 = (__int64)a6;
  v162 = v13;
  LOWORD(v158) = 0;
  v163 = 0LL;
  v168 = 0LL;
  DmaAdapter = 0LL;
  v155 = 0LL;
  v167 = 0LL;
  v148 = 0;
  *(_QWORD *)v152 = 0LL;
  v151 = 0;
  v146 = 0;
  v149 = 0;
  v150 = 0;
  v169 = 0LL;
  LODWORD(v166) = -1;
  CmpInitializeDelayDerefContext(&v168);
  v147 = (unsigned __int8)v15;
  v164 = v15;
  memset(v177, v15, 0xA8uLL);
  *(_OWORD *)(a7 + 160) = 0LL;
  *(_OWORD *)(a7 + 176) = 0LL;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_OWORD *)v174 = 0LL;
  HIWORD(v174[0]) = -1;
  v176[0] = 0LL;
  WORD1(v176[0]) = -1;
  *(_OWORD *)v172 = 0LL;
  WORD1(v172[0]) = -1;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)(a7 + 216) = 0LL;
  *(_OWORD *)(a7 + 232) = 0LL;
  *(_OWORD *)(a7 + 248) = 0LL;
  *(_OWORD *)(a7 + 264) = 0LL;
  *(_OWORD *)(a7 + 280) = 0LL;
  v16 = *(_QWORD *)(a7 + 88);
  v175 = 0LL;
  v176[1] = 0LL;
  v173 = 0LL;
  CmpRecordParseCachedSymlinkKcb(a7, v16);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v17 = *(_QWORD *)(a7 + 88);
  v18 = *(_QWORD *)(a7 + 72);
  v19 = v154;
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
    v153 = 0LL;
  }
  else
  {
    v18 = *(_QWORD *)(v19 + 56);
    v153 = *(_QWORD *)(v19 + 64);
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
  HIBYTE(v145) = 0;
  if ( v17 )
  {
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    HIBYTE(v145) = 1;
    CachedFullKCBName = (const UNICODE_STRING *)CmpGetCachedFullKCBName(v17, (_BYTE *)&v147 + 1);
    v22 = CachedFullKCBName;
    if ( CachedFullKCBName && !BYTE1(v147) && RtlPrefixUnicodeString(CachedFullKCBName, String2, 1u) )
    {
      v23 = String2->Length - v22->Length;
      v24 = String2->MaximumLength - v22->Length;
      v25 = &String2->Buffer[(unsigned __int64)v22->Length >> 1];
      v26 = v23;
      LOWORD(v162) = v23;
      v27 = v25;
      *((_QWORD *)&v162 + 1) = v25;
      v28 = v24;
      WORD1(v162) = v24;
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
        *((_QWORD *)&v162 + 1) = v27;
        LOWORD(v162) = v26;
        WORD1(v162) = v28;
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
        v150 = 1;
        *((_QWORD *)&v162 + 1) = &v25[-v32];
        LOWORD(v162) = v23 + v31;
        WORD1(v162) = v24 + v31;
        --v29;
      }
      v33 = CmpComputeComponentHashes(&v162, (char *)&v147 + 2, v177);
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
      if ( (unsigned int)(SHIWORD(v147) + v29) > 0x20 )
      {
        Child = -1073741811;
        v35 = 768;
        v34 = -1073741811;
        goto LABEL_31;
      }
      v38 = CmpValidateComponents((unsigned int)SHIWORD(v147), v177);
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
        HIBYTE(v146) = 1;
      }
      CmpLockKcbShared(v17);
      if ( CmpIsKeyDeleted(v17, 0LL) || (*(_DWORD *)(v17 + 8) & 0x40000) != 0 )
      {
        CmpUnlockKcb(v17);
        if ( HIBYTE(v146) )
          CmpUnlockHashEntryByKcb(v17);
        CmpDereferenceKeyControlBlock(v17);
        v11 = 0;
        BugCheckParameter2 = 0LL;
        v17 = 0LL;
        v150 = 0;
        v162 = *(_OWORD *)v161;
        CmpCleanupPathInfo(v177);
        memset(v177, 0, 0xA8uLL);
        v40 = 0;
        HIBYTE(v146) = 0;
      }
      else
      {
        CmpUnlockKcb(v17);
        v40 = HIBYTE(v146);
      }
      goto LABEL_49;
    }
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    v17 = 0LL;
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry();
    HIBYTE(v145) = 0;
  }
  v40 = 0;
LABEL_49:
  BYTE1(v147) = v40;
  if ( !v17 )
  {
    v17 = *(_QWORD *)(v154 + 8);
    v41 = CmpComputeComponentHashes(&v162, (char *)&v147 + 2, v177);
    Child = v41;
    if ( v41 < 0 )
    {
      CmpRecordParseFailure(a7, 1280, v41);
      goto LABEL_364;
    }
    v42 = CmpValidateComponents((unsigned int)SHIWORD(v147), v177);
    Child = v42;
    if ( v42 < 0 )
    {
      CmpRecordParseFailure(a7, 1536, v42);
      goto LABEL_364;
    }
  }
  CmpRecordParseStartingKcb(a7, v17);
  v43 = HIWORD(v147);
  v44 = ((*(_DWORD *)(v17 + 8) >> 21) & 0x3FF) - v11;
  LODWORD(v161) = v11;
  LODWORD(v165) = SHIWORD(v147);
  if ( (unsigned int)(SHIWORD(v147) + v44) > 0x200 )
  {
    Child = -1073741811;
    CmpRecordParseFailure(a7, 1792, -1073741811);
    goto LABEL_364;
  }
  if ( !HIBYTE(v145) )
  {
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v43 = HIWORD(v147);
    HIBYTE(v145) = 1;
  }
  v45 = *(_DWORD *)(v154 + 48);
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
    v155 = v17;
    if ( v17 == BugCheckParameter2 )
    {
      v47 = v150;
      BYTE1(v145) = BYTE1(v147);
      HIBYTE(v146) = 0;
    }
    else
    {
      CmpLockHashEntrySharedByKcb(v17);
      v47 = v150;
      BYTE1(v145) = 1;
    }
LABEL_72:
    v49 = HIWORD(v147);
    if ( (_WORD)v47 == HIWORD(v147) && (*(_DWORD *)a7 & 1) == 0 )
    {
      CmpUnlockHashEntryByKcb(v14);
      BYTE1(v145) = 0;
    }
    CmpLockKcbShared(v14);
    if ( (__int16)v47 >= v49 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    else
    {
      DestinationString.Buffer = *(wchar_t **)(CmpGetComponentNameAtIndex(v177, (unsigned int)(__int16)v47) + 8);
      DestinationString.Length = v162 - 2 * (((__int64)DestinationString.Buffer - *((_QWORD *)&v162 + 1)) >> 1);
      DestinationString.MaximumLength = DestinationString.Length;
    }
    Child = CmpVEExecuteParseLogic(
              v14,
              (unsigned int)&DestinationString,
              a7,
              (_DWORD)String2,
              v145,
              (__int64)&v157->SubjectSecurityContext);
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
    v50 = v153;
    if ( v18 || v153 )
    {
      if ( *(PVOID *)(v14 + 32) != CmpMasterHive )
      {
        if ( (v18 || v153) && *(_WORD *)(v14 + 66) )
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
          v51 = v153;
        }
LABEL_94:
        if ( !CmpTransSilentIgnore() && (v18 || v51) )
        {
          Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(v14 + 32), v18, v51, 0, (__int64)&v163);
          if ( Child < 0 )
          {
            if ( BYTE1(v145) )
            {
              CmpUnlockHashEntryByKcb(v14);
              BYTE1(v145) = 0;
            }
            CmpUnlockRegistry();
            Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(v14 + 32), v18, v51, 1u, (__int64)&v163);
            CmpLockRegistry();
            v54 = Child;
            HIBYTE(v145) = 1;
            if ( Child >= 0 )
              v54 = -1073741267;
            Child = v54;
            CmpRecordParseFailure(a7, 3072, v54);
            goto LABEL_362;
          }
          v12 = v163;
        }
        started = CmpStartKcbStack(v174, *(unsigned __int16 *)(v14 + 66));
        Child = started;
        if ( started < 0 )
        {
          CmpRecordParseFailure(a7, 3328, started);
          goto LABEL_362;
        }
        v56 = CmpStartKcbStack(v176, *(unsigned __int16 *)(v14 + 66));
        Child = v56;
        if ( v56 < 0 )
        {
          CmpRecordParseFailure(a7, 3584, v56);
          goto LABEL_362;
        }
        v153 = (__int64)v176;
        v57 = (__int64)v174;
        CmpPopulateKcbStack(v174, v14);
        v58 = HIWORD(v147);
        if ( (__int16)v47 < SHIWORD(v147) )
        {
          while ( 1 )
          {
            CmpLockKcbStackShared(v57);
            if ( (unsigned __int8)CmpIsKeyStackDeleted(v57, v12) )
            {
              if ( CmpLoadingSystemHivesActive
                && (v14 = v155, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                && *(PVOID *)(v155 + 32) == CmpMasterHive
                && (*(_DWORD *)(v155 + 8) & 0x7FE00000) == 0x600000
                && (__int16)v47 > 0
                && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v177, (unsigned int)((__int16)v47 - 1)),
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
            CmpGetComponentNameAtIndex(v177, (unsigned int)(__int16)v47);
            ComponentHashAtIndex = CmpGetComponentHashAtIndex((__int64)v177, (__int16)v47);
            v61 = (*(_DWORD *)a7 & 1) != 0 && (__int16)v47 == (_DWORD)v165 - 1;
            LODWORD(v143) = ComponentHashAtIndex + 37 * *(_DWORD *)(v14 + 16);
            v62 = CmpWalkOneLevel(v14, v57, &v167, v153, &v148, v60, ComponentHashAtIndex, v143, v12, v61, a7);
            Child = v62;
            if ( v62 == -1073741772 )
            {
              if ( !CmpLoadingSystemHivesActive )
                goto LABEL_131;
              v14 = v155;
              if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread() || *(PVOID *)(v155 + 32) != CmpMasterHive )
              {
                v62 = Child;
LABEL_131:
                CmpRecordParseFailure(a7, 5504, v62);
                goto LABEL_362;
              }
              if ( (*(_DWORD *)(v155 + 8) & 0x7FE00000) == 0x600000 && (__int16)v47 > 0 )
              {
                v63 = CmpGetComponentNameAtIndex(v177, (unsigned int)((__int16)v47 - 1));
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
                v66 = CmpGetComponentNameAtIndex(v177, (unsigned int)(__int16)v47);
                if ( (unsigned __int8)CmpWaitForHiveMount(v66, v67, v68, a7 + 136) )
                {
                  *(_DWORD *)a7 |= 0x100u;
                  Child = 259;
                  CmpRecordParseFailure(a7, 5376, 259);
                  goto LABEL_362;
                }
              }
              v62 = Child;
              v12 = v163;
            }
            if ( v62 < 0 )
              goto LABEL_131;
            v69 = v167;
            CmpRecordParseWalkResult(a7, v167);
            CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)v14);
            LOWORD(v47) = v47 + 1;
            v155 = v69;
            v14 = v69;
            BYTE1(v145) = v148;
            v58 = HIWORD(v147);
            v70 = v57;
            v57 = v153;
            v71 = (_OWORD *)v70;
            v153 = v70;
            v167 = 0LL;
            v148 = 0;
            v150 = v47;
            if ( (__int16)v47 >= SHIWORD(v147) )
              goto LABEL_147;
          }
          SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                 v57,
                                 (__int64)v177,
                                 v47,
                                 v58,
                                 v12,
                                 a7,
                                 (__int64)&v168,
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
        v71 = v176;
LABEL_147:
        v77 = *(_QWORD *)(v14 + 72);
        v78 = (ULONG_PTR *)(v14 + 72);
        *(_QWORD *)v152 = v71;
        v79 = v71;
        v165 = v14 + 72;
        if ( v77 )
        {
          CmpPopulateKcbStack(v71, v77);
          v77 = *v78;
        }
        else
        {
          v79 = 0LL;
          *(_QWORD *)v152 = 0LL;
        }
        v80 = *(_QWORD *)(v154 + 8);
        if ( v77 != v80 && v14 != v80 )
        {
          CmpLockKcbShared(v80);
          BYTE2(v145) = 1;
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
        if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v154, 0LL) )
        {
          v83 = -1073740763;
          v84 = 5888;
          v85 = a7;
          if ( (*(_BYTE *)(v154 + 48) & 1) == 0 )
            v83 = -1073741444;
LABEL_158:
          Child = v83;
          CmpRecordParseFailure(v85, v84, v83);
          v10 = v82;
LABEL_353:
          CmpUnlockKcbStack(v57);
LABEL_354:
          v131 = *(_QWORD *)v152;
LABEL_355:
          if ( v10 )
            CmpUnlockKcbStack(v131);
LABEL_357:
          if ( BYTE2(v145) )
            CmpUnlockKcb(*(_QWORD *)(v154 + 8));
          if ( HIBYTE(v149) )
            CmpUnlockHashEntry(*(_QWORD **)(a7 + 48), 0);
          goto LABEL_362;
        }
        LOWORD(v150) = v150 - 1;
        v161 = v14 + 184;
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
          v86 = *(_QWORD *)v152;
          CmpUnlockKcbStack(*(_QWORD *)v152);
          if ( BYTE2(v145) )
            CmpUnlockKcb(*(_QWORD *)(v154 + 8));
          HIBYTE(v149) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
          if ( BYTE2(v145) )
            CmpLockKcbShared(*(_QWORD *)(v154 + 8));
          CmpLockKcbStackTopExclusiveRestShared(v86);
          CmpLockKcbStackTopExclusiveRestShared(v57);
          v153 = CmpGetComponentNameAtIndex(v177, (unsigned int)(__int16)v150);
          v88 = CmpGetComponentHashAtIndex((__int64)v177, v87);
          if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v154, 0LL) )
          {
            v83 = -1073740763;
            v84 = 6656;
            v85 = a7;
            if ( (*(_BYTE *)(v154 + 48) & 1) == 0 )
              v83 = -1073741444;
            goto LABEL_158;
          }
          if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v152, v12) )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 6912, -1073741772);
            v10 = v82;
            goto LABEL_353;
          }
          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v57, v12) )
          {
            v89 = 7168;
LABEL_176:
            Child = -1073741790;
            CmpRecordParseFailure(a7, v89, -1073741790);
            v10 = v82;
            goto LABEL_353;
          }
          if ( *(PVOID *)(*(_QWORD *)v165 + 32LL) != CmpMasterHive )
          {
            v89 = 7424;
            goto LABEL_176;
          }
          if ( (*(_DWORD *)(*(_QWORD *)v165 + 184LL) & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 7680, -1073741772);
            v10 = v82;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess(a7 + 168);
            *(_DWORD *)(a7 + 160) |= 1u;
          }
          v90 = *(unsigned int *)(a7 + 40);
          v91 = *(_QWORD *)(a7 + 48);
          if ( (_DWORD)v90 == -1 )
          {
            HiveRootCell = CmpCreateHiveRootCell(v91, a7 + 40);
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
            updated = CmpUpdateHiveRootCellFlags(v91, v90);
            Child = updated;
            if ( updated < 0 )
            {
              CmpRecordParseFailure(a7, 7936, updated);
              v10 = v82;
              goto LABEL_353;
            }
          }
          *(_WORD *)(v14 + 186) |= 2u;
          LODWORD(v143) = 0;
          *(_DWORD *)v142 = v88;
          Child = CmpCreateKeyControlBlock(
                    *(_QWORD *)(a7 + 48),
                    -1,
                    v14,
                    *(_QWORD *)(a7 + 80),
                    1,
                    (unsigned __int16 *)v153,
                    *(_QWORD *)v142,
                    v143,
                    &v169);
          *(_WORD *)(v14 + 186) = *(_WORD *)(v161 + 2) & 0xFFFD;
          if ( Child < 0 )
          {
            CmpRecordParseFailure(a7, 0x2000, Child);
            v10 = v82;
            goto LABEL_353;
          }
          v94 = v14;
          v14 = v169;
          CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)v94);
          CmpUnlockHashEntryByKcb(v94);
          BYTE1(v145) = 0;
          v97 = CmpStartKcbStackForTopLayerKcb((__int64)v172, v14, v95, v96);
          Child = v97;
          if ( v97 < 0 )
          {
            CmpRecordParseFailure(a7, 8448, v97);
            v10 = v82;
            goto LABEL_353;
          }
          *(_WORD *)(v94 + 186) |= 2u;
          CmpLockKcbStackTopExclusiveRestShared((__int64)v172);
          *(_WORD *)(v94 + 186) &= ~2u;
          v151 = 1;
          KeyBody = CmpCreateKeyBody(v14, 1, (__int64)v172, (__int64)&DmaAdapter, (__int64)&v146);
          Child = KeyBody;
          if ( KeyBody < 0 )
          {
            CmpRecordParseFailure(a7, 8576, KeyBody);
            v10 = v82;
            goto LABEL_352;
          }
          HvLockHiveFlusherShared(*(_QWORD *)(v94 + 32));
          HvLockHiveFlusherExclusive(*(_QWORD *)(v14 + 32));
          v99 = *(_QWORD *)(v14 + 32);
          v100 = *(unsigned int *)(a7 + 40);
          LODWORD(v161) = *(_DWORD *)(v99 + 104);
          if ( !(unsigned __int8)HvMarkCellDirty(v99, v100, 0LL) )
          {
            Child = -1073741443;
            CmpRecordParseFailure(a7, 8704, -1073741443);
LABEL_196:
            HvUnlockHiveFlusherExclusive(*(_QWORD *)(v14 + 32));
            HvUnlockHiveFlusherShared(*(_QWORD *)(v94 + 32));
            goto LABEL_352;
          }
          Child = CmpCreateChild(*(__int64 *)v152, v57, (__int64)v157, (UNICODE_STRING *)v153, a7, 10, 0, 1, v12);
          if ( Child < 0 )
            goto LABEL_196;
          *(_DWORD *)(v14 + 40) = *(_DWORD *)(a7 + 40);
          KeyNodeForKcb = CmpGetKeyNodeForKcb(v14, (__int64)&v166, 1);
          *(_DWORD *)(KeyNodeForKcb + 16) = *(_DWORD *)(v94 + 40);
          ++*(_QWORD *)(v14 + 304);
          CmpRebuildKcbCacheFromNode(v14, KeyNodeForKcb, 0LL, 0);
          CmpReleaseKeyNodeForKcb(v14, &v166);
          if ( !(_DWORD)v161 )
            HvResetDirtyData(*(_QWORD *)(v14 + 32));
          HvUnlockHiveFlusherExclusive(*(_QWORD *)(v14 + 32));
          HvUnlockHiveFlusherShared(*(_QWORD *)(v94 + 32));
          *(_WORD *)(v94 + 8) |= 8u;
          CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v14);
          *(_QWORD *)(v94 + 104) = v14;
          CmpUnlockHashEntry(*(_QWORD **)(a7 + 48), 0);
          goto LABEL_201;
        }
        if ( (*(_DWORD *)a7 & 0x20) != 0 )
        {
          CmpUnlockKcbStack(v57);
          v103 = *(_QWORD *)v152;
          CmpUnlockKcbStack(*(_QWORD *)v152);
          CmpLockKcbStackTopExclusiveRestShared(v103);
          CmpLockKcbStackTopExclusiveRestShared(v57);
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v103, v12) )
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
          v104 = (UNICODE_STRING *)CmpGetComponentNameAtIndex(v177, (unsigned int)(__int16)v150);
          v105 = *(_DWORD *)(a7 + 24) >> 2;
          LOBYTE(v105) = (*(_DWORD *)(a7 + 24) & 4) != 0;
          if ( !CmpCheckCreateAccessOnKcbStack(
                  v105,
                  v103,
                  a7,
                  (__int64)v157,
                  v145,
                  16 * (*(_DWORD *)(a7 + 24) & 2),
                  v105,
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
          Child = CmpCreateKeyBody(v14, 1, v57, (__int64)&DmaAdapter, (__int64)&v146);
          v10 = v82;
          if ( Child < 0 )
            goto LABEL_353;
          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v57, v12) )
            goto LABEL_202;
          Child = CmpCreateChild(*(__int64 *)v152, v57, (__int64)v157, v104, a7, 64, 0, 0, v12);
          if ( Child < 0 )
            goto LABEL_353;
LABEL_201:
          *(_DWORD *)(a7 + 32) = 1;
LABEL_202:
          v10 = v82;
LABEL_203:
          v102 = v145;
          goto LABEL_204;
        }
        if ( !(unsigned __int8)CmpIsKeyStackDeleted(v57, v12) )
        {
          if ( (unsigned __int8)CmpIsKeyStackSymlink(v57) && (*(_DWORD *)a7 & 0x200) == 0 )
          {
            if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
            {
              v131 = *(_QWORD *)v152;
              if ( *(_QWORD *)v152 )
                CmpUnlockKcbStack(*(_QWORD *)v152);
              v132 = 0;
              if ( !v131 )
                v132 = v10;
              v10 = v132;
              if ( BYTE2(v145) )
              {
                CmpUnlockKcb(*(_QWORD *)(v154 + 8));
                BYTE2(v145) = 0;
              }
              if ( BYTE1(v145) )
              {
                CmpUnlockHashEntryByKcb(v14);
                BYTE1(v145) = 0;
              }
              v133 = CmpGetSymbolicLinkTarget(
                       v57,
                       (__int64)v177,
                       0,
                       0,
                       v12,
                       a7,
                       (__int64)&v168,
                       (__int64)String2,
                       (ULONG_PTR *)(a7 + 88));
              Child = v133;
              if ( v133 >= 0 )
              {
                *(_DWORD *)a7 &= ~8u;
                if ( !*(_QWORD *)(a7 + 64) )
                {
                  v134 = *(_QWORD *)(v14 + 32);
                  if ( (*(_DWORD *)(v134 + 4152) & 1) != 0 )
                    *(_QWORD *)(a7 + 64) = v134;
                }
                Child = 260;
                CmpRecordParseFailure(a7, 14592, 260);
              }
              else
              {
                CmpRecordParseFailure(a7, 14336, v133);
              }
              goto LABEL_355;
            }
            Child = -1073741771;
            CmpRecordParseFailure(a7, 14080, -1073741771);
            v10 = v82;
            goto LABEL_353;
          }
          if ( (_BYTE)v149 )
          {
            Child = -1073741811;
            CmpRecordParseFailure(a7, 14848, -1073741811);
            v10 = v82;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)v161 & 0x20000) != 0 )
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
          v135 = String2;
          v136 = CmpDoWritethroughReparse(v14, v57, *(__int64 *)v152, 0, 0LL, a7, (UNICODE_STRING *)String2);
          Child = v136;
          if ( v136 != -1073741199 )
          {
            CmpRecordParseFailure(a7, 15424, v136);
            v10 = v82;
            goto LABEL_353;
          }
          v137 = CmpVEExecuteOpenLogic(v14, (_DWORD *)a7, 0, (__int64)v135, v145);
          Child = v137;
          if ( v137 != -1073741199 )
          {
            CmpRecordParseFailure(a7, 15488, v137);
            v10 = v82;
            goto LABEL_353;
          }
          v102 = v145;
          Child = CmpCreateKeyBody(v14, 0, v57, (__int64)&DmaAdapter, (__int64)&v146);
          v138 = Child;
          v10 = v82;
          if ( Child < 0 )
          {
            if ( Child == -1073741444 )
              v138 = -1073741772;
            Child = v138;
            CmpRecordParseFailure(a7, 15552, v138);
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
                                        v157,
                                        v102,
                                        (*(_DWORD *)(a7 + 24) & 4) != 0,
                                        v12,
                                        (bool *)&v147,
                                        &Child) )
          {
            if ( (_BYTE)v147 )
            {
              if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
              {
                CmpAttachToRegistryProcess(a7 + 168);
                *(_DWORD *)(a7 + 160) |= 1u;
              }
              v164 = CmpConstructName(v14);
            }
            CmpRecordParseFailure(a7, 15584, Child);
            goto LABEL_351;
          }
          *v171 = DmaAdapter;
          DmaAdapter = 0LL;
          if ( !*(_DWORD *)(a7 + 32) )
            *(_DWORD *)(a7 + 32) = 2;
          Child = (_BYTE)v146 != 0 ? 0x40000016 : 0;
LABEL_351:
          HIBYTE(v149) = 0;
          if ( !v151 )
            goto LABEL_353;
LABEL_352:
          CmpUnlockKcbStack(v172);
          goto LABEL_353;
        }
        if ( (_BYTE)v149 )
        {
          Child = -1073741811;
          CmpRecordParseFailure(a7, 9728, -1073741811);
          v10 = v82;
          goto LABEL_353;
        }
        v106 = *(_QWORD *)v152;
        if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v152, v12) || !CmRmIsKcbStackVisible(v106) )
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
            && (v14 = v155, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
            && *(PVOID *)(v155 + 32) == CmpMasterHive
            && (*(_DWORD *)(v155 + 8) & 0x7FE00000) == 0x600000
            && (v107 = CmpGetComponentNameAtIndex(v177, (unsigned int)(__int16)v150),
                (unsigned __int8)CmpWaitForHiveMount(v107, v108, v109, a7 + 136)) )
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
        v153 = v14 + 32;
        if ( *(PVOID *)(v14 + 32) == CmpMasterHive && CmpNoMasterCreates )
        {
          v14 = v155;
          if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
          {
            if ( CmpLoadingSystemHivesActive
              && (*(_DWORD *)(v155 + 8) & 0x7FE00000) == 0x600000
              && (v110 = CmpGetComponentNameAtIndex(v177, (unsigned int)(__int16)v150),
                  (unsigned __int8)CmpWaitForHiveMount(v110, v111, v112, a7 + 136)) )
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
          v12 = v163;
        }
        v113 = (UNICODE_STRING *)CmpGetComponentNameAtIndex(v177, (unsigned int)(__int16)v150);
        v114 = CmpDoWritethroughReparse(v14, v57, *(__int64 *)v152, 1, v113, a7, (UNICODE_STRING *)String2);
        Child = v114;
        if ( v114 != -1073741199 )
        {
          CmpRecordParseFailure(a7, 11392, v114);
          v10 = v82;
          goto LABEL_353;
        }
        if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
        {
          CmpAttachToRegistryProcess(a7 + 168);
          *(_DWORD *)(a7 + 160) |= 1u;
        }
        if ( *(_DWORD *)(*v78 + 40) == -1 )
        {
          if ( !CmpCheckCreateAccessOnKcbStack(
                  16 * (*(_DWORD *)(a7 + 24) & 2u),
                  *(__int64 *)v152,
                  a7,
                  (__int64)v157,
                  v145,
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
                if ( CmpCheckKeyOwnerForPca(*(__int64 *)v152, v163) )
                {
                  v116 = *v78;
                  LOBYTE(v147) = 1;
                  v164 = CmpConstructName(v116);
                }
              }
            }
            CmpRecordParseFailure(a7, 11520, Child);
            v14 = v155;
            v10 = v82;
            goto LABEL_353;
          }
          CmpUnlockKcbStack(v57);
          CmpUnlockKcbStack(*(_QWORD *)v152);
          if ( BYTE2(v145) )
          {
            CmpUnlockKcb(*(_QWORD *)(v154 + 8));
            BYTE2(v145) = 0;
          }
          LOBYTE(v117) = 1;
          Child = CmpPromoteKey(*(_QWORD *)v152, 0LL, v117);
          v118 = Child;
          if ( Child < 0 )
          {
            if ( Child == -1073741444 )
              v118 = -1073741772;
            Child = v118;
            CmpRecordParseFailure(a7, 11776, v118);
            v10 = v82;
            goto LABEL_354;
          }
          v119 = *(_QWORD *)v152;
        }
        else
        {
          CmpUnlockKcbStack(v57);
          v119 = *(_QWORD *)v152;
          CmpUnlockKcbStack(*(_QWORD *)v152);
          CmpLockKcbStackTopExclusiveRestShared(v119);
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
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v119, v12) || !CmRmIsKcbStackVisible(v119) )
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
                    (__int64)v113,
                    (__int64)v157,
                    v145,
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
                  v119,
                  a7,
                  (__int64)v157,
                  v145,
                  16 * (*(_DWORD *)(a7 + 24) & 2),
                  (*(_DWORD *)(a7 + 24) & 4) != 0,
                  v12,
                  &Child) )
          {
            if ( KeGetCurrentThread()->PreviousMode == 1 )
            {
              v121 = PsGetCurrentThreadProcess();
              if ( !CmpDoesProcessBelongToServiceSession((__int64)v121) )
              {
                if ( CmpCheckKeyOwnerForPca(v119, v163) )
                {
                  v122 = *v78;
                  LOBYTE(v147) = 1;
                  v164 = CmpConstructName(v122);
                }
              }
            }
            CmpRecordParseFailure(a7, 12800, Child);
            v14 = v155;
            v10 = 1;
            goto LABEL_353;
          }
          v123 = CmpCreateKeyBody(v14, 1, v57, (__int64)&DmaAdapter, (__int64)&v146);
          Child = v123;
          if ( v123 < 0 )
          {
            CmpRecordParseFailure(a7, 12928, v123);
            v10 = 1;
            goto LABEL_353;
          }
          v124 = CmpCreateChild(v119, v57, (__int64)v157, v113, a7, 8 * (*(_WORD *)(a7 + 24) & 2u), 0, 0, v12);
          Child = v124;
          if ( v124 < 0 )
          {
            CmpRecordParseFailure(a7, 12992, v124);
            v10 = 1;
            goto LABEL_353;
          }
          *(_DWORD *)(a7 + 32) = 1;
          goto LABEL_287;
        }
        if ( !(unsigned __int8)CmpIsKeyStackSymlink(v57) || (*(_DWORD *)a7 & 0x200) != 0 )
        {
          if ( (*(_DWORD *)v161 & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 13568, -1073741772);
            v10 = 1;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
          {
            v127 = String2;
            v128 = CmpDoWritethroughReparse(v14, v57, v119, 0, 0LL, a7, (UNICODE_STRING *)String2);
            Child = v128;
            if ( v128 != -1073741199 )
            {
              CmpRecordParseFailure(a7, 13888, v128);
              v10 = 1;
              goto LABEL_353;
            }
            v129 = CmpVEExecuteOpenLogic(v14, (_DWORD *)a7, 1, (__int64)v127, v145);
            Child = v129;
            if ( v129 != -1073741199 )
            {
              CmpRecordParseFailure(a7, 13952, v129);
              v10 = 1;
              goto LABEL_353;
            }
            v130 = CmpCreateKeyBody(v14, 1, v57, (__int64)&DmaAdapter, (__int64)&v146);
            Child = v130;
            if ( v130 < 0 )
            {
              CmpRecordParseFailure(a7, 14016, v130);
              v10 = 1;
              goto LABEL_353;
            }
LABEL_287:
            v10 = 1;
            goto LABEL_203;
          }
          v125 = 13824;
        }
        else
        {
          if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
          {
            CmpUnlockKcbStack(v119);
            if ( BYTE2(v145) )
            {
              CmpUnlockKcb(*(_QWORD *)(v154 + 8));
              BYTE2(v145) = 0;
            }
            if ( BYTE1(v145) )
            {
              CmpUnlockHashEntryByKcb(v14);
              BYTE1(v145) = 0;
            }
            v126 = CmpGetSymbolicLinkTarget(
                     v57,
                     (__int64)v177,
                     0,
                     0,
                     v12,
                     a7,
                     (__int64)&v168,
                     (__int64)String2,
                     (ULONG_PTR *)(a7 + 88));
            Child = v126;
            if ( v126 >= 0 )
            {
              *(_DWORD *)a7 &= ~8u;
              if ( !*(_QWORD *)(a7 + 64) && (*(_DWORD *)(*(_QWORD *)v153 + 4152LL) & 1) != 0 )
                *(_QWORD *)(a7 + 64) = *(_QWORD *)v153;
              Child = 260;
              CmpRecordParseFailure(a7, 13440, 260);
            }
            else
            {
              CmpRecordParseFailure(a7, 13312, v126);
            }
            goto LABEL_357;
          }
          v125 = 13056;
        }
        Child = -1073741771;
        CmpRecordParseFailure(a7, v125, -1073741771);
        v10 = 1;
        goto LABEL_353;
      }
      v50 = 0LL;
      LOBYTE(v149) = 1;
      v18 = 0LL;
    }
    v51 = v50;
    goto LABEL_94;
  }
  v48 = CmpPerformCompleteKcbCacheLookup(v17, a7, (__int64)&v155, (__int64)&v145 + 1, (__int64)&v158);
  Child = v48;
  if ( v48 >= 0 && v48 != 259 )
  {
    HIWORD(v47) = HIWORD(v150);
    v14 = v155;
    LOWORD(v47) = v158 + v150;
    v150 = v47;
    CmpRecordParseKcbCacheResult(a7, v155, (unsigned int)(__int16)v158);
    goto LABEL_72;
  }
  CmpRecordParseFailure(a7, 2432, v48);
  v14 = v155;
LABEL_362:
  if ( BYTE1(v145) )
    CmpUnlockHashEntryByKcb(v14);
LABEL_364:
  if ( !HIBYTE(v146) )
    goto LABEL_32;
  v17 = BugCheckParameter2;
  CmpUnlockHashEntryByKcb(BugCheckParameter2);
LABEL_33:
  CmpCleanupKcbStack(v174);
  CmpCleanupKcbStack(v176);
  CmpCleanupKcbStack(v172);
  v36 = v167;
  if ( v167 )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)v14);
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
  v139 = *(_DWORD *)(a7 + 100);
  if ( v139 && (v139 & 2) != 0 )
  {
    CmpSearchKeyControlBlockTree(CmpSyncKcbCacheForHive, *(_QWORD *)(a7 + 112), &v168);
    *(_DWORD *)(a7 + 100) &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v168);
  if ( HIBYTE(v145) )
    CmpUnlockRegistry();
  v140 = (void *)v164;
  if ( (_BYTE)v147 )
  {
    if ( !v164 )
      goto LABEL_382;
    if ( (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(a7, v140);
  }
  if ( v140 )
    CmpFreeTransientPoolWithTag(v140, 0x624E4D43u);
LABEL_382:
  if ( (*(_DWORD *)(a7 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(a7 + 168);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpCleanupPathInfo(v177);
  return (unsigned int)Child;
}
