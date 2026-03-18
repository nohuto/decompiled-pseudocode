/*
 * XREFs of CmpDoParseKey @ 0x1405EF1F0
 * Callers:
 *     CmpParseKey @ 0x1405EE060 (CmpParseKey.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140202160 (PsGetServerSiloServiceSessionId.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402036B8 (CmpFreeTransientPoolWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     CmpTransSilentIgnore @ 0x140205F80 (CmpTransSilentIgnore.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     PsGetCurrentThreadProcess @ 0x14034B7B0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405DF248 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUnlockHashEntry @ 0x1405DF608 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1405DF730 (CmpLockHashEntrySharedByKcb.c)
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     RtlPrefixUnicodeString @ 0x1405E60B0 (RtlPrefixUnicodeString.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405E6AE8 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405E77E0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmpConstructName @ 0x1405E8818 (CmpConstructName.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpGetComponentHashAtIndex @ 0x1405ECAB0 (CmpGetComponentHashAtIndex.c)
 *     CmpRecordParseFailure @ 0x1405ECAE0 (CmpRecordParseFailure.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405ECD50 (CmpUnlockHashEntryByKcb.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405EDBB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmRmIsKCBVisible @ 0x1405EDC40 (CmRmIsKCBVisible.c)
 *     CmpGetComponentNameAtIndex @ 0x1405EDC70 (CmpGetComponentNameAtIndex.c)
 *     CmpVEExecuteParseLogic @ 0x1405EDCA0 (CmpVEExecuteParseLogic.c)
 *     CmpOKToFollowLink @ 0x1405EDEE0 (CmpOKToFollowLink.c)
 *     CmpComputeComponentHashes @ 0x1405EE5C0 (CmpComputeComponentHashes.c)
 *     CmpValidateComponents @ 0x1405EE8F0 (CmpValidateComponents.c)
 *     CmpCleanupPathInfo @ 0x1405EE950 (CmpCleanupPathInfo.c)
 *     CmpIsKeyStackSymlink @ 0x1405EE9C0 (CmpIsKeyStackSymlink.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKeyStackDeleted @ 0x1405EEF40 (CmpIsKeyStackDeleted.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405EF010 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpPopulateKcbStack @ 0x1405EF1A0 (CmpPopulateKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405F0A50 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x1405F0A70 (CmpStartKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1405F0AD0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpLockKcbShared @ 0x1405F0BE0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14063A8FC (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14063A934 (HvLockHiveFlusherExclusive.c)
 *     HvResetDirtyData @ 0x14063C05C (HvResetDirtyData.c)
 *     CmpIsKeyDeleted @ 0x14063FC08 (CmpIsKeyDeleted.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14064326C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpGetKeyNodeForKcb @ 0x140644540 (CmpGetKeyNodeForKcb.c)
 *     CmpVEExecuteCreateLogic @ 0x14064FCAC (CmpVEExecuteCreateLogic.c)
 *     CmpTransSearchAddTransFromHive @ 0x140653660 (CmpTransSearchAddTransFromHive.c)
 *     CmpVEExecuteOpenLogic @ 0x1406931B0 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x1406932A0 (CmpDoWritethroughReparse.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14069CD68 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpCheckKeyOwnerForPca @ 0x1406ED54C (CmpCheckKeyOwnerForPca.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406EE570 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140703D58 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14070709C (CmpTryToLockHashEntryExclusive.c)
 *     CmpCheckExeOwnerForPca @ 0x14075D284 (CmpCheckExeOwnerForPca.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x1407B1B44 (CmpWaitForHiveMount.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1408607E8 (CmpReleaseKeyNodeForKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x1408674DC (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086BF24 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpLogUnsupportedOperation @ 0x140872E88 (CmpLogUnsupportedOperation.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x14087D190 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        unsigned __int8 a3,
        __int16 a4,
        const UNICODE_STRING *a5,
        __m128i *a6,
        __int64 a7,
        int a8,
        PADAPTER_OBJECT *a9)
{
  ULONG_PTR v11; // rsi
  __int16 v12; // r12
  __m128i v13; // xmm0
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
  unsigned __int16 *v28; // r14
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
  int v40; // r12d
  int v41; // eax
  int v42; // eax
  __int64 v43; // r13
  unsigned __int8 v44; // r12
  int KeyBody; // eax
  struct _ACCESS_STATE *v46; // rbx
  void *v47; // r12
  ULONG_PTR v48; // rbx
  ULONG_PTR v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v54; // rbx
  int ComponentHashAtIndex; // ecx
  __m128i *v56; // r8
  char v57; // dl
  int v58; // eax
  unsigned __int64 v59; // rsi
  char v60; // al
  __int16 v61; // r8
  __int16 v62; // r9
  wchar_t *v63; // r10
  __int16 v64; // cx
  wchar_t *v65; // rax
  __int16 v66; // dx
  int v67; // esi
  int v68; // eax
  int v69; // eax
  char v70; // si
  int SymbolicLinkTarget; // eax
  __int64 v72; // rcx
  ULONG_PTR v73; // rbx
  __int64 *v74; // rax
  char v75; // al
  int v76; // eax
  __int64 v77; // rcx
  const UNICODE_STRING *v78; // rax
  int v79; // r9d
  int v80; // eax
  __int64 *v81; // r12
  __int64 v82; // rbx
  int v83; // ebx
  int Logic; // eax
  int v85; // eax
  int v86; // r9d
  int Child; // eax
  __int64 v88; // rax
  unsigned int v89; // ecx
  __int64 v90; // rax
  __int16 v91; // cx
  __int64 v92; // r10
  __int64 v93; // rdx
  __int64 v94; // rcx
  int v95; // r8d
  __int64 v96; // rbx
  unsigned int v97; // r8d
  int v98; // ebx
  __int64 v99; // r12
  ULONG_PTR v100; // rdx
  _DWORD *v101; // r12
  ULONG_PTR v102; // rcx
  int HiveRootCell; // eax
  int v104; // r8d
  __int64 v105; // rbx
  __int64 v106; // r8
  struct _LOOKASIDE_LIST_EX *v107; // r9
  __int64 v108; // r9
  unsigned __int8 v109; // dl
  int v110; // eax
  __int64 v111; // rcx
  int v112; // r13d
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rax
  int v116; // edx
  int v117; // r8d
  _KPROCESS *CurrentThreadProcess; // rsi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  int SessionId; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  int v124; // edx
  int v125; // r8d
  int v126; // r8d
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // r8
  int v130; // eax
  int v131; // ecx
  int v132; // r12d
  int v133; // eax
  unsigned __int8 v134; // dl
  int v135; // edx
  int v136; // r8d
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 ComponentNameAtIndex; // rax
  __int64 v143; // rdx
  __int64 v144; // r8
  int v145; // eax
  int v146; // edx
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // r8
  int v150; // edx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // r8
  _KPROCESS *v154; // rsi
  __int64 v155; // rax
  int v156; // ebx
  int v157; // eax
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // r8
  int v161; // eax
  __int64 v162; // rcx
  int v163; // edx
  int v164; // r8d
  int v165; // eax
  int v166; // ebx
  int v167; // eax
  int v168; // r8d
  int v169; // edx
  int v170; // eax
  int v171; // [rsp+20h] [rbp-E0h]
  BOOLEAN ObjectCreated[8]; // [rsp+30h] [rbp-D0h]
  __int64 ObjectCreateda; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v174; // [rsp+38h] [rbp-C8h]
  bool v175; // [rsp+60h] [rbp-A0h]
  int v176; // [rsp+64h] [rbp-9Ch] BYREF
  char v177; // [rsp+68h] [rbp-98h]
  __int16 v178; // [rsp+69h] [rbp-97h] BYREF
  char v179; // [rsp+6Bh] [rbp-95h]
  void *v180; // [rsp+70h] [rbp-90h]
  char v181; // [rsp+78h] [rbp-88h]
  int v182[2]; // [rsp+80h] [rbp-80h]
  __int16 v183; // [rsp+88h] [rbp-78h] BYREF
  int v184; // [rsp+8Ah] [rbp-76h] BYREF
  __int16 v185[2]; // [rsp+90h] [rbp-70h] BYREF
  char v186; // [rsp+94h] [rbp-6Ch]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-68h] BYREF
  BOOLEAN v188[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *v189; // [rsp+A8h] [rbp-58h]
  __int16 v190; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v191; // [rsp+B8h] [rbp-48h]
  PCUNICODE_STRING String2; // [rsp+C0h] [rbp-40h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v194; // [rsp+D0h] [rbp-30h]
  __m128i v195; // [rsp+D8h] [rbp-28h] BYREF
  ULONG_PTR v196; // [rsp+E8h] [rbp-18h]
  __int64 v197; // [rsp+F0h] [rbp-10h]
  __int64 v198; // [rsp+F8h] [rbp-8h] BYREF
  int v199[2]; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+8h] BYREF
  __int128 v201; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  PADAPTER_OBJECT *v203; // [rsp+130h] [rbp+30h]
  __int64 v204[2]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v205; // [rsp+148h] [rbp+48h]
  __int64 v206[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v207; // [rsp+170h] [rbp+70h]
  int v208[4]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v209; // [rsp+190h] [rbp+90h]
  _BYTE v210[176]; // [rsp+1A0h] [rbp+A0h] BYREF

  v197 = a1;
  v203 = a9;
  String2 = a5;
  v189 = a2;
  v198 = 0LL;
  v11 = 0LL;
  v12 = 0;
  DestinationString = 0LL;
  v13 = *a6;
  v178 = a3;
  v14 = 0;
  v191 = (__int64 *)a6;
  v195 = v13;
  v190 = 0;
  *(_QWORD *)v188 = 0LL;
  v201 = 0LL;
  DmaAdapter = 0LL;
  BugCheckParameter4 = 0LL;
  *(_QWORD *)v199 = 0LL;
  v175 = 0;
  v186 = 0;
  v183 = 0;
  v179 = 0;
  v185[0] = 0;
  BugCheckParameter2 = 0LL;
  LODWORD(v198) = -1;
  CmpInitializeDelayDerefContext(&v201);
  v184 = (unsigned __int8)v15;
  v180 = v15;
  memset(v210, (int)v15, 0xA8uLL);
  *(_OWORD *)(a7 + 160) = 0LL;
  *(_OWORD *)(a7 + 176) = 0LL;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_OWORD *)v206 = 0LL;
  WORD1(v206[0]) = -1;
  *(_OWORD *)v208 = 0LL;
  HIWORD(v208[0]) = -1;
  *(_OWORD *)v204 = 0LL;
  WORD1(v204[0]) = -1;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)(a7 + 216) = 0LL;
  *(_OWORD *)(a7 + 232) = 0LL;
  *(_OWORD *)(a7 + 248) = 0LL;
  *(_OWORD *)(a7 + 264) = 0LL;
  *(_OWORD *)(a7 + 280) = 0LL;
  v207 = 0LL;
  v209 = 0LL;
  v205 = 0LL;
  if ( a7 )
    *(_QWORD *)(a7 + 216) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v17 = *(_QWORD *)(a7 + 88);
  v18 = *(_QWORD *)(a7 + 72);
  v196 = v17;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v18 )
  {
    v115 = *(_QWORD *)(a1 + 56);
    if ( v115 && v18 != v115 )
    {
      v176 = -1072103422;
      CmpRecordParseFailure(a7, 256, -1072103422);
      v47 = 0LL;
      goto LABEL_82;
    }
    v194 = 0LL;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 56);
    v194 = *(unsigned __int16 **)(a1 + 64);
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(a1 + 50);
  v19 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( *(_QWORD *)(a1 + 8) != v19 && v17 )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v17);
    v17 = 0LL;
    v196 = 0LL;
    CmpUnlockRegistry(v123, v122);
  }
  v181 = 0;
  if ( !v17 )
  {
LABEL_11:
    v177 = HIBYTE(v183);
    if ( !v17 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      v21 = CmpComputeComponentHashes(&v195, v185, (__int64)v210);
      v176 = v21;
      if ( v21 < 0 )
      {
        CmpRecordParseFailure(a7, 1280, v21);
        v47 = v180;
      }
      else
      {
        v14 = v185[0];
        v22 = CmpValidateComponents(v185[0], (__int64)v210);
        v176 = v22;
        if ( v22 >= 0 )
          goto LABEL_14;
        CmpRecordParseFailure(a7, 1536, v22);
        v47 = v180;
      }
LABEL_79:
      if ( HIBYTE(v183) )
        CmpUnlockHashEntryByKcb(v17);
      goto LABEL_81;
    }
    v20 = v17;
LABEL_14:
    v23 = (unsigned int)v14;
    *(_QWORD *)(a7 + 224) = v20;
    *(_QWORD *)(a7 + 248) = v20;
    v24 = ((*(_DWORD *)(v20 + 8) >> 21) & 0x3FF) - (unsigned __int16)v12;
    LODWORD(v191) = v23;
    if ( (unsigned int)(v23 + v24) > 0x200 )
    {
      v176 = -1073741811;
      CmpRecordParseFailure(a7, 1792, -1073741811);
      v47 = v180;
LABEL_78:
      v17 = v196;
      goto LABEL_79;
    }
    if ( !v181 )
    {
      if ( (*(_DWORD *)a7 & 0x400) != 0 )
        CmpLockRegistryExclusive(v23, v16);
      else
        CmpLockRegistry();
      LODWORD(v23) = (_DWORD)v191;
      v181 = 1;
    }
    v25 = *(_DWORD *)(v197 + 48);
    if ( (v25 & 9) != 0 )
    {
      v126 = -1073741444;
      if ( (v25 & 1) != 0 )
        v126 = -1073740763;
      v176 = v126;
      CmpRecordParseFailure(a7, 2048, v126);
      v47 = v180;
      goto LABEL_78;
    }
    if ( v12 == v14 )
    {
      CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v20);
      v11 = v20;
      BugCheckParameter4 = v20;
      if ( v20 == v196 )
      {
        v75 = v177;
        HIBYTE(v183) = 0;
      }
      else
      {
        CmpLockHashEntrySharedByKcb(v20);
        v75 = 1;
      }
      HIBYTE(v178) = v75;
    }
    else
    {
      v26 = CmpPerformCompleteKcbCacheLookup(
              v20,
              (unsigned __int16)v12,
              v23,
              (__int64)v210,
              (_DWORD *)a7,
              &BugCheckParameter4,
              (_BYTE *)&v178 + 1,
              &v190);
      v176 = v26;
      if ( v26 < 0 || v26 == 259 )
      {
        CmpRecordParseFailure(a7, 2432, v26);
        v11 = BugCheckParameter4;
        goto LABEL_107;
      }
      v27 = v190;
      v11 = BugCheckParameter4;
      v12 += v190;
      *(_QWORD *)(a7 + 232) = BugCheckParameter4;
      *(_BYTE *)(a7 + 256) = v27;
      *(_QWORD *)(a7 + 248) = v11;
    }
    if ( v12 == v14 && (*(_DWORD *)a7 & 1) == 0 )
    {
      CmpUnlockHashEntryByKcb(v11);
      HIBYTE(v178) = 0;
    }
    CmpLockKcbShared(v11);
    if ( v12 < v14 )
    {
      DestinationString.Buffer = *(wchar_t **)(CmpGetComponentNameAtIndex((__int64)v210, v12) + 8);
      DestinationString.Length = v195.m128i_i16[0] - 2 * (((__int64)DestinationString.Buffer - v195.m128i_i64[1]) >> 1);
      DestinationString.MaximumLength = DestinationString.Length;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    v176 = CmpVEExecuteParseLogic(v11, (__int64)&DestinationString, (_DWORD *)a7, (__int64)String2, v178, v189 + 1);
    CmpUnlockKcb(v11);
    if ( v176 == -1073741199 )
    {
      if ( CmpOKToFollowLink(*(_QWORD **)(a7 + 64), *(_QWORD *)(v11 + 32)) )
      {
        v28 = v194;
        if ( v18 || v194 )
        {
          if ( *(_QWORD *)(v11 + 32) == CmpMasterHive )
          {
            BYTE2(v184) = 1;
            v18 = 0LL;
            v28 = 0LL;
          }
          else if ( (v18 || v194) && *(_WORD *)(v11 + 66) )
          {
            CmpLogUnsupportedOperation(8LL);
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              v176 = -1072103419;
              CmpRecordParseFailure(a7, 2816, -1072103419);
              goto LABEL_107;
            }
            v18 = 0LL;
            v28 = 0LL;
          }
        }
        if ( !CmpTransSilentIgnore() && (v18 || v28) )
        {
          v176 = CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 32), v18, (_DWORD)v28, 0, (__int64)v188);
          if ( v176 < 0 )
          {
            if ( HIBYTE(v178) )
            {
              CmpUnlockHashEntryByKcb(v11);
              HIBYTE(v178) = 0;
            }
            CmpUnlockRegistry(v94, v93);
            v176 = CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 32), v18, (_DWORD)v28, 1, (__int64)v188);
            CmpLockRegistry();
            v95 = v176;
            v181 = 1;
            if ( v176 >= 0 )
            {
              v95 = -1073741267;
              v176 = -1073741267;
            }
            CmpRecordParseFailure(a7, 3072, v95);
            v47 = v180;
            goto LABEL_76;
          }
        }
        started = CmpStartKcbStack(v206, *(unsigned __int16 *)(v11 + 66));
        v176 = started;
        if ( started < 0 )
        {
          CmpRecordParseFailure(a7, 3328, started);
        }
        else
        {
          v30 = CmpStartKcbStack(v208, *(unsigned __int16 *)(v11 + 66));
          v176 = v30;
          if ( v30 >= 0 )
          {
            v31 = v206;
            v32 = v208;
            CmpPopulateKcbStack((__int64)v206, v11);
            if ( v12 < v14 )
            {
              while ( 1 )
              {
                CmpLockKcbStackShared(v31);
                v54 = *(_QWORD *)v188;
                if ( CmpIsKeyStackDeleted((__int64)v31, *(__int64 *)v188) )
                {
                  if ( CmpLoadingSystemHivesActive
                    && (v11 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                    && *(_QWORD *)(BugCheckParameter4 + 32) == CmpMasterHive
                    && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                    && v12 > 0
                    && (ComponentNameAtIndex = CmpGetComponentNameAtIndex((__int64)v210, v12 - 1),
                        (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v143, v144, a7 + 136)) )
                  {
                    *(_DWORD *)a7 |= 0x100u;
                    v116 = 3840;
                    v176 = 259;
                    v117 = 259;
                  }
                  else
                  {
                    v116 = 4096;
                    v176 = -1073741772;
                    v117 = -1073741772;
                  }
                  CmpRecordParseFailure(a7, v116, v117);
                  v47 = v180;
                  v34 = v197;
                  v32 = (int *)v180;
                  goto LABEL_68;
                }
                if ( CmpIsKeyStackSymlink((__int64)v31) )
                  break;
                CmpUnlockKcbStack(v31);
                CmpGetComponentNameAtIndex((__int64)v210, v12);
                ComponentHashAtIndex = CmpGetComponentHashAtIndex((__int64)v210, v12);
                v57 = (*(_DWORD *)a7 & 1) != 0 && v12 == (_DWORD)v191 - 1;
                LODWORD(v174) = ComponentHashAtIndex + 37 * *(_DWORD *)(v11 + 16);
                v58 = CmpWalkOneLevel(
                        v11,
                        (__int64)v31,
                        (ULONG_PTR *)v199,
                        (__int64)v32,
                        (bool *)&v184 + 1,
                        v56,
                        ComponentHashAtIndex,
                        v174,
                        *(__int64 *)v188,
                        v57,
                        a7);
                v176 = v58;
                if ( v58 == -1073741772 )
                {
                  if ( !CmpLoadingSystemHivesActive )
                    goto LABEL_106;
                  v11 = BugCheckParameter4;
                  if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread()
                    || *(_QWORD *)(BugCheckParameter4 + 32) != CmpMasterHive )
                  {
                    v58 = v176;
LABEL_106:
                    CmpRecordParseFailure(a7, 5504, v58);
                    goto LABEL_107;
                  }
                  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000 && v12 > 0 )
                  {
                    v139 = CmpGetComponentNameAtIndex((__int64)v210, v12 - 1);
                    if ( (unsigned __int8)CmpWaitForHiveMount(v139, v140, v141, a7 + 136) )
                    {
                      *(_DWORD *)a7 |= 0x100u;
                      v176 = 259;
                      CmpRecordParseFailure(a7, 5120, 259);
                      goto LABEL_107;
                    }
                  }
                  if ( (*(_DWORD *)(v11 + 8) & 0x7FE00000) == 0x400000 )
                  {
                    v127 = CmpGetComponentNameAtIndex((__int64)v210, v12);
                    if ( (unsigned __int8)CmpWaitForHiveMount(v127, v128, v129, a7 + 136) )
                    {
                      *(_DWORD *)a7 |= 0x100u;
                      v176 = 259;
                      CmpRecordParseFailure(a7, 5376, 259);
                      v47 = v180;
                      goto LABEL_76;
                    }
                  }
                  v14 = v185[0];
                  v58 = v176;
                }
                if ( v58 < 0 )
                  goto LABEL_106;
                v73 = *(_QWORD *)v199;
                ++*(_BYTE *)(a7 + 257);
                *(_QWORD *)(a7 + 240) = v73;
                *(_QWORD *)(a7 + 248) = v73;
                CmpDereferenceKeyControlBlockUnsafe(v11);
                HIBYTE(v178) = BYTE1(v184);
                ++v12;
                BugCheckParameter4 = v73;
                v74 = v31;
                *(_QWORD *)v199 = 0LL;
                v31 = (__int64 *)v32;
                BYTE1(v184) = 0;
                v32 = (int *)v74;
                v11 = v73;
                if ( v12 >= v14 )
                  goto LABEL_39;
              }
              SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                     (__int64)v31,
                                     (__int64)v210,
                                     v12,
                                     v14,
                                     v54,
                                     a7,
                                     (__int64)&v201,
                                     (__int64)String2,
                                     (ULONG_PTR *)(a7 + 88));
              v176 = SymbolicLinkTarget;
              if ( SymbolicLinkTarget < 0 )
              {
                CmpRecordParseFailure(a7, 4608, SymbolicLinkTarget);
                goto LABEL_107;
              }
              *(_DWORD *)a7 &= ~8u;
              if ( !*(_QWORD *)(a7 + 64) )
              {
                v72 = *(_QWORD *)(v11 + 32);
                if ( (*(_DWORD *)(v72 + 4152) & 1) != 0 )
                  *(_QWORD *)(a7 + 64) = v72;
              }
              v176 = 260;
              CmpRecordParseFailure(a7, 4864, 260);
              v47 = v180;
              goto LABEL_76;
            }
LABEL_39:
            v33 = *(_QWORD *)(v11 + 72);
            *(_QWORD *)v182 = v32;
            v191 = (__int64 *)(v11 + 72);
            if ( v33 )
            {
              CmpPopulateKcbStack((__int64)v32, v33);
              v33 = *(_QWORD *)(v11 + 72);
            }
            else
            {
              v32 = 0LL;
              *(_QWORD *)v182 = 0LL;
            }
            v34 = v197;
            v35 = *(_QWORD *)(v197 + 8);
            if ( v33 != v35 && v11 != v35 )
            {
              CmpLockKcbShared(v35);
              v179 = 1;
            }
            v36 = v32 == 0LL;
            if ( v32 )
            {
              CmpLockKcbStackShared(v32);
              v36 = v32 == 0LL;
            }
            v37 = !v36;
            v177 = !v36;
            v175 = !v36;
            CmpLockKcbStackShared(v31);
            if ( CmpIsKeyDeletedForKeyBody(v34, 0LL) )
            {
              v145 = -1073740763;
              if ( (*(_BYTE *)(v34 + 48) & 1) == 0 )
                v145 = -1073741444;
              v176 = v145;
              CmpRecordParseFailure(a7, 5888, v145);
              v47 = v180;
              v175 = v37;
              goto LABEL_68;
            }
            v38 = v12 - 1;
            v39 = (_DWORD *)(v11 + 184);
            if ( (*(_DWORD *)(v11 + 184) & 0x20000) != 0 )
            {
              v176 = -1073741772;
              CmpRecordParseFailure(a7, 6144, -1073741772);
              v175 = v37;
              goto LABEL_276;
            }
            if ( !CmRmIsKCBVisible(v11, *(__int64 *)v188) )
            {
              v176 = -1073741772;
              CmpRecordParseFailure(a7, 6400, -1073741772);
              v47 = v180;
              v175 = v37;
              goto LABEL_67;
            }
            if ( (*(_DWORD *)a7 & 2) == 0 )
            {
              if ( (*(_DWORD *)a7 & 0x20) == 0 )
              {
                if ( !CmpIsKeyStackDeleted((__int64)v31, *(__int64 *)v188) )
                {
                  if ( CmpIsKeyStackSymlink((__int64)v31) && (*(_DWORD *)a7 & 0x200) == 0 )
                  {
                    if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                    {
                      v32 = *(int **)v182;
                      v175 = v37;
                      if ( *(_QWORD *)v182 )
                      {
                        CmpUnlockKcbStack(*(_QWORD *)v182);
                        v175 = 0;
                      }
                      if ( v179 )
                      {
                        CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                        v179 = 0;
                      }
                      if ( HIBYTE(v178) )
                      {
                        CmpUnlockHashEntryByKcb(v11);
                        HIBYTE(v178) = 0;
                      }
                      v76 = CmpGetSymbolicLinkTarget(
                              (__int64)v31,
                              (__int64)v210,
                              0,
                              0,
                              *(__int64 *)v188,
                              a7,
                              (__int64)&v201,
                              (__int64)String2,
                              (ULONG_PTR *)(a7 + 88));
                      v176 = v76;
                      if ( v76 < 0 )
                      {
                        CmpRecordParseFailure(a7, 14336, v76);
                        v47 = v180;
                      }
                      else
                      {
                        *(_DWORD *)a7 &= ~8u;
                        if ( !*(_QWORD *)(a7 + 64) )
                        {
                          v77 = *(_QWORD *)(v11 + 32);
                          if ( (*(_DWORD *)(v77 + 4152) & 1) != 0 )
                            *(_QWORD *)(a7 + 64) = v77;
                        }
                        v176 = 260;
                        CmpRecordParseFailure(a7, 14592, 260);
                        v47 = v180;
                      }
                      goto LABEL_69;
                    }
                    v176 = -1073741771;
                    v124 = 14080;
                    v125 = -1073741771;
                    goto LABEL_255;
                  }
                  if ( !BYTE2(v184) )
                  {
                    if ( (*v39 & 0x20000) != 0 )
                    {
                      v124 = 15104;
                      v176 = -1073741772;
                      v125 = -1073741772;
                      goto LABEL_255;
                    }
                    if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                    {
                      v176 = -1073741771;
                      v124 = 15360;
                      v125 = -1073741771;
                      goto LABEL_255;
                    }
                    v40 = (int)String2;
                    v32 = *(int **)v182;
                    v41 = CmpDoWritethroughReparse(v11, (int)v31, v182[0], 0, 0LL, a7, (__int64)String2);
                    v176 = v41;
                    if ( v41 == -1073741199 )
                    {
                      v42 = CmpVEExecuteOpenLogic(v11, a7, 0, v40, v178, (__int64)&v189[1]);
                      v176 = v42;
                      if ( v42 == -1073741199 )
                      {
                        v43 = *(_QWORD *)v188;
                        v44 = v178;
                        KeyBody = CmpCreateKeyBody(
                                    v11,
                                    v178,
                                    a7,
                                    *(__int64 *)v188,
                                    0,
                                    (__int64)v31,
                                    (ULONG_PTR **)&DmaAdapter,
                                    (bool *)&v183);
                        v176 = KeyBody;
                        v175 = v37;
                        if ( KeyBody >= 0 )
                        {
LABEL_59:
                          v46 = (struct _ACCESS_STATE *)v189;
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
                                                  (char *)&v184,
                                                  &v176) )
                          {
                            *v203 = DmaAdapter;
                            DmaAdapter = 0LL;
                            if ( !*(_DWORD *)(a7 + 32) )
                              *(_DWORD *)(a7 + 32) = 2;
                            v47 = 0LL;
                            if ( (_BYTE)v183 )
                              v176 = 1073741846;
                            else
                              v176 = 0;
                          }
                          else
                          {
                            if ( (_BYTE)v184 )
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
                              v47 = v180;
                            }
                            CmpRecordParseFailure(a7, 15584, v176);
                          }
                          HIBYTE(v184) = 0;
                          if ( !v186 )
                            goto LABEL_67;
                          goto LABEL_227;
                        }
                        v124 = 15552;
                        if ( KeyBody == -1073741444 )
                          KeyBody = -1073741772;
                        v176 = KeyBody;
                        v125 = KeyBody;
LABEL_255:
                        CmpRecordParseFailure(a7, v124, v125);
                        v47 = v180;
                        v175 = v37;
                        goto LABEL_67;
                      }
                      CmpRecordParseFailure(a7, 15488, v42);
                      v175 = v37;
                    }
                    else
                    {
                      CmpRecordParseFailure(a7, 15424, v41);
                      v175 = v37;
                    }
LABEL_241:
                    v47 = v180;
                    goto LABEL_68;
                  }
                  v124 = 14848;
LABEL_254:
                  v176 = -1073741811;
                  v125 = -1073741811;
                  goto LABEL_255;
                }
                if ( BYTE2(v184) )
                {
                  v124 = 9728;
                  goto LABEL_254;
                }
                if ( CmpIsKeyStackDeleted(*(__int64 *)v182, *(__int64 *)v188)
                  || !CmRmIsKCBVisible(*v191, *(__int64 *)v188) )
                {
                  v124 = 9984;
                  v176 = -1073741772;
                  v125 = -1073741772;
                  goto LABEL_255;
                }
                if ( (*(_DWORD *)(*v191 + 184) & 0x20000) != 0 )
                {
                  v176 = -1073741772;
                  CmpRecordParseFailure(a7, 10240, -1073741772);
                  v175 = v37;
                }
                else
                {
                  if ( (*(_DWORD *)a7 & 1) != 0 )
                  {
                    v194 = (unsigned __int16 *)(v11 + 32);
                    if ( *(_QWORD *)(v11 + 32) == CmpMasterHive )
                    {
                      if ( CmpNoMasterCreates )
                      {
                        v11 = BugCheckParameter4;
                        if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
                        {
                          if ( !CmpLoadingSystemHivesActive
                            || (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) != 0x600000
                            || (v151 = CmpGetComponentNameAtIndex((__int64)v210, v38),
                                !(unsigned __int8)CmpWaitForHiveMount(v151, v152, v153, a7 + 136)) )
                          {
                            v124 = 11264;
                            goto LABEL_254;
                          }
                          v150 = 11008;
                          goto LABEL_343;
                        }
                      }
                    }
                    v78 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex((__int64)v210, v38);
                    LOBYTE(v79) = 1;
                    BugCheckParameter2 = (ULONG_PTR)v78;
                    v80 = CmpDoWritethroughReparse(v11, (int)v31, v182[0], v79, v78, a7, (__int64)String2);
                    v176 = v80;
                    if ( v80 != -1073741199 )
                    {
                      v125 = v80;
                      v124 = 11392;
                      goto LABEL_255;
                    }
                    if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                    {
                      CmpAttachToRegistryProcess(a7 + 168);
                      *(_DWORD *)(a7 + 160) |= 1u;
                    }
                    v81 = v191;
                    if ( *(_DWORD *)(*v191 + 40) != -1 )
                    {
                      CmpUnlockKcbStack(v31);
                      CmpUnlockKcbStack(*(_QWORD *)v182);
                      CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)v182);
                      goto LABEL_173;
                    }
                    if ( (unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                            16 * (*(_DWORD *)(a7 + 24) & 2u),
                                            v182[0],
                                            a7,
                                            (_DWORD)v189,
                                            v178,
                                            16 * (*(_DWORD *)(a7 + 24) & 2u),
                                            (*(_DWORD *)(a7 + 24) & 4) != 0,
                                            *(__int64 *)v188,
                                            (__int64)&v176) )
                    {
                      CmpUnlockKcbStack(v31);
                      CmpUnlockKcbStack(*(_QWORD *)v182);
                      if ( v179 )
                      {
                        CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                        v179 = 0;
                      }
                      LOBYTE(v160) = 1;
                      v161 = CmpPromoteKey(*(_QWORD *)v182, 0LL, v160);
                      v176 = v161;
                      if ( v161 < 0 )
                      {
                        if ( v161 == -1073741444 )
                          v161 = -1073741772;
                        v176 = v161;
                        CmpRecordParseFailure(a7, 11776, v161);
                        v47 = v180;
                        v32 = *(int **)v182;
                        goto LABEL_70;
                      }
LABEL_173:
                      CmpLockKcbStackTopExclusiveRestShared((__int64)v31);
                      v82 = *(_QWORD *)v188;
                      if ( !CmRmIsKCBVisible(v11, *(__int64 *)v188) )
                      {
                        v176 = -1073741772;
                        CmpRecordParseFailure(a7, 12032, -1073741772);
                        v175 = 1;
                        goto LABEL_192;
                      }
                      if ( CmpIsKeyStackDeleted((__int64)v31, v82) )
                      {
                        v43 = v82;
                        if ( CmpIsKeyStackDeleted(*(__int64 *)v182, v82) || !CmRmIsKCBVisible(*v81, v82) )
                        {
                          v176 = -1073741772;
                          CmpRecordParseFailure(a7, 12288, -1073741772);
                          v175 = 1;
                          goto LABEL_192;
                        }
                        if ( (*(_DWORD *)(*v81 + 184) & 0x20000) != 0 )
                        {
                          v176 = -1073741772;
                          CmpRecordParseFailure(a7, 12544, -1073741772);
                          v175 = 1;
                          goto LABEL_192;
                        }
                        ObjectCreateda = v82;
                        v83 = BugCheckParameter2;
                        Logic = CmpVEExecuteCreateLogic(
                                  *v81,
                                  (_DWORD)String2,
                                  BugCheckParameter2,
                                  (_DWORD)v189,
                                  v178,
                                  16 * (*(_DWORD *)(a7 + 24) & 2u),
                                  ObjectCreateda,
                                  a7,
                                  (__int64)String2);
                        v176 = Logic;
                        if ( Logic == -1073741739 )
                        {
                          *(_DWORD *)a7 |= 0x400u;
                          v176 = -1073741267;
                          CmpRecordParseFailure(a7, 12672, -1073741267);
                          v175 = 1;
                          goto LABEL_192;
                        }
                        if ( Logic != -1073741199 )
                        {
                          CmpRecordParseFailure(a7, 12736, Logic);
                          v175 = 1;
                          goto LABEL_192;
                        }
                        if ( (unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                                16 * (*(_DWORD *)(a7 + 24) & 2u),
                                                v182[0],
                                                a7,
                                                (_DWORD)v189,
                                                v178,
                                                16 * (*(_DWORD *)(a7 + 24) & 2u),
                                                (*(_DWORD *)(a7 + 24) & 4) != 0,
                                                v43,
                                                (__int64)&v176) )
                        {
                          v44 = v178;
                          v85 = CmpCreateKeyBody(
                                  v11,
                                  v178,
                                  a7,
                                  v43,
                                  1,
                                  (__int64)v31,
                                  (ULONG_PTR **)&DmaAdapter,
                                  (bool *)&v183);
                          v176 = v85;
                          if ( v85 < 0 )
                          {
                            CmpRecordParseFailure(a7, 12928, v85);
                            v175 = 1;
                            goto LABEL_192;
                          }
                          v86 = v83;
                          v46 = (struct _ACCESS_STATE *)v189;
                          Child = CmpCreateChild(
                                    v182[0],
                                    (_DWORD)v31,
                                    (_DWORD)v189,
                                    v86,
                                    a7,
                                    8 * (*(_WORD *)(a7 + 24) & 2u),
                                    0,
                                    v43);
                          v176 = Child;
                          if ( Child < 0 )
                          {
                            CmpRecordParseFailure(a7, 12992, Child);
                            v47 = v180;
                            v175 = 1;
                            goto LABEL_67;
                          }
                          *(_DWORD *)(a7 + 32) = 1;
LABEL_184:
                          v175 = 1;
                          goto LABEL_60;
                        }
                        if ( KeGetCurrentThread()->PreviousMode == 1 )
                        {
                          CurrentThreadProcess = PsGetCurrentThreadProcess();
                          ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess);
                          ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
                          SessionId = MmGetSessionIdEx((__int64)CurrentThreadProcess);
                          v32 = *(int **)v182;
                          if ( SessionId != ServerSiloServiceSessionId
                            && (unsigned __int8)CmpCheckKeyOwnerForPca(*(_QWORD *)v182) )
                          {
                            v162 = *v81;
                            LOBYTE(v184) = 1;
                            v47 = (void *)CmpConstructName(v162);
                            goto LABEL_239;
                          }
                        }
                        else
                        {
                          v32 = *(int **)v182;
                        }
                        v47 = v180;
LABEL_239:
                        CmpRecordParseFailure(a7, 12800, v176);
                        v11 = BugCheckParameter4;
                        v175 = 1;
                        goto LABEL_68;
                      }
                      if ( !CmpIsKeyStackSymlink((__int64)v31) || (*(_DWORD *)a7 & 0x200) != 0 )
                      {
                        if ( (*v39 & 0x20000) != 0 )
                        {
                          v176 = -1073741772;
                          CmpRecordParseFailure(a7, 13568, -1073741772);
                          v175 = 1;
                          goto LABEL_192;
                        }
                        if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                        {
                          v166 = (int)String2;
                          v32 = *(int **)v182;
                          v167 = CmpDoWritethroughReparse(v11, (int)v31, v182[0], 0, 0LL, a7, (__int64)String2);
                          v176 = v167;
                          if ( v167 == -1073741199 )
                          {
                            v44 = v178;
                            LOBYTE(v168) = 1;
                            v167 = CmpVEExecuteOpenLogic(v11, a7, v168, v166, v178, (__int64)&v189[1]);
                            v176 = v167;
                            if ( v167 == -1073741199 )
                            {
                              v43 = *(_QWORD *)v188;
                              v170 = CmpCreateKeyBody(
                                       v11,
                                       v44,
                                       a7,
                                       *(__int64 *)v188,
                                       1,
                                       (__int64)v31,
                                       (ULONG_PTR **)&DmaAdapter,
                                       (bool *)&v183);
                              v176 = v170;
                              if ( v170 >= 0 )
                              {
                                v46 = (struct _ACCESS_STATE *)v189;
                                goto LABEL_184;
                              }
                              v164 = v170;
                              v163 = 14016;
LABEL_378:
                              CmpRecordParseFailure(a7, v163, v164);
                              v175 = 1;
                              goto LABEL_192;
                            }
                            v169 = 13952;
                          }
                          else
                          {
                            v169 = 13888;
                          }
                          CmpRecordParseFailure(a7, v169, v167);
                          v175 = 1;
                          goto LABEL_241;
                        }
                        v163 = 13824;
                      }
                      else
                      {
                        if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                        {
                          CmpUnlockKcbStack(*(_QWORD *)v182);
                          if ( v179 )
                          {
                            CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                            v179 = 0;
                          }
                          if ( HIBYTE(v178) )
                          {
                            CmpUnlockHashEntryByKcb(v11);
                            HIBYTE(v178) = 0;
                          }
                          v165 = CmpGetSymbolicLinkTarget(
                                   (__int64)v31,
                                   (__int64)v210,
                                   0,
                                   0,
                                   v82,
                                   a7,
                                   (__int64)&v201,
                                   (__int64)String2,
                                   (ULONG_PTR *)(a7 + 88));
                          v176 = v165;
                          if ( v165 >= 0 )
                          {
                            *(_DWORD *)a7 &= ~8u;
                            if ( !*(_QWORD *)(a7 + 64) && (*(_DWORD *)(*(_QWORD *)v194 + 4152LL) & 1) != 0 )
                              *(_QWORD *)(a7 + 64) = *(_QWORD *)v194;
                            v176 = 260;
                            CmpRecordParseFailure(a7, 13440, 260);
                            v47 = v180;
                          }
                          else
                          {
                            CmpRecordParseFailure(a7, 13312, v165);
                            v47 = v180;
                          }
                          goto LABEL_72;
                        }
                        v163 = 13056;
                      }
                      v176 = -1073741771;
                      v164 = -1073741771;
                      goto LABEL_378;
                    }
                    if ( KeGetCurrentThread()->PreviousMode == 1 )
                    {
                      v154 = PsGetCurrentThreadProcess();
                      v155 = PsGetProcessServerSilo((__int64)v154);
                      v156 = PsGetServerSiloServiceSessionId(v155);
                      v157 = MmGetSessionIdEx((__int64)v154);
                      v32 = *(int **)v182;
                      if ( v157 != v156 && (unsigned __int8)CmpCheckKeyOwnerForPca(*(_QWORD *)v182) )
                      {
                        v158 = *v81;
                        LOBYTE(v184) = 1;
                        v159 = CmpConstructName(v158);
                        v37 = v177;
                        v47 = (void *)v159;
LABEL_356:
                        CmpRecordParseFailure(a7, 11520, v176);
                        v11 = BugCheckParameter4;
                        v175 = v37;
                        goto LABEL_68;
                      }
                      v37 = v177;
                    }
                    else
                    {
                      v32 = *(int **)v182;
                    }
                    v47 = v180;
                    goto LABEL_356;
                  }
                  if ( CmpLoadingSystemHivesActive )
                  {
                    v11 = BugCheckParameter4;
                    if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                      && *(_QWORD *)(BugCheckParameter4 + 32) == CmpMasterHive
                      && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000 )
                    {
                      v147 = CmpGetComponentNameAtIndex((__int64)v210, v38);
                      if ( (unsigned __int8)CmpWaitForHiveMount(v147, v148, v149, a7 + 136) )
                      {
                        v150 = 10496;
LABEL_343:
                        *(_DWORD *)a7 |= 0x100u;
                        v176 = 259;
                        CmpRecordParseFailure(a7, v150, 259);
                        v175 = v37;
                        goto LABEL_192;
                      }
                    }
                  }
                  v176 = -1073741772;
                  CmpRecordParseFailure(a7, 10752, -1073741772);
                  v175 = v37;
                }
LABEL_192:
                v47 = v180;
LABEL_67:
                v32 = *(int **)v182;
LABEL_68:
                CmpUnlockKcbStack(v31);
LABEL_69:
                v37 = v175;
LABEL_70:
                if ( v37 )
                  CmpUnlockKcbStack(v32);
LABEL_72:
                if ( v179 )
                  CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                if ( HIBYTE(v184) )
                  CmpUnlockHashEntry(*(PVOID *)(a7 + 48), 0);
                goto LABEL_76;
              }
              CmpUnlockKcbStack(v31);
              CmpUnlockKcbStack(*(_QWORD *)v182);
              CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)v182);
              CmpLockKcbStackTopExclusiveRestShared((__int64)v31);
              v43 = *(_QWORD *)v188;
              if ( CmpIsKeyStackDeleted(*(__int64 *)v182, *(__int64 *)v188) )
              {
                v176 = -1073741772;
                CmpRecordParseFailure(a7, 8960, -1073741772);
                v175 = v37;
                goto LABEL_192;
              }
              if ( (*(_DWORD *)(*v191 + 184) & 0x20000) != 0 )
              {
                v176 = -1073741772;
                CmpRecordParseFailure(a7, 9216, -1073741772);
                v175 = v37;
                goto LABEL_192;
              }
              v130 = CmpGetComponentNameAtIndex((__int64)v210, v38);
              v131 = *(_DWORD *)(a7 + 24);
              v132 = v130;
              if ( (v131 & 2) != 0 )
                v133 = 32;
              else
                v133 = 0;
              if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                       (unsigned int)&v176,
                                       v182[0],
                                       a7,
                                       (_DWORD)v189,
                                       v178,
                                       v133,
                                       (v131 & 4) != 0,
                                       v43,
                                       (__int64)&v176) )
              {
                CmpRecordParseFailure(a7, 9472, v176);
                v175 = v37;
                goto LABEL_192;
              }
              CmpCleanUpKcbCachedSymlink(v11);
              *(_WORD *)(v11 + 186) |= 0x40u;
              v134 = v178;
              *(_DWORD *)(v11 + 100) = -1;
              *(_DWORD *)(v11 + 96) = *(_DWORD *)(a7 + 56);
              v176 = CmpCreateKeyBody(v11, v134, a7, v43, 1, (__int64)v31, (ULONG_PTR **)&DmaAdapter, (bool *)&v183);
              v175 = v37;
              if ( v176 >= 0 )
              {
                if ( !CmpIsKeyStackDeleted((__int64)v31, v43) )
                {
LABEL_274:
                  v44 = v178;
                  v175 = v37;
                  goto LABEL_59;
                }
                v176 = CmpCreateChild(v182[0], (_DWORD)v31, (_DWORD)v189, v132, a7, 64, 0, v43);
                v175 = v37;
                if ( v176 >= 0 )
                {
                  *(_DWORD *)(a7 + 32) = 1;
                  goto LABEL_274;
                }
              }
LABEL_276:
              v47 = v180;
              goto LABEL_67;
            }
            CmpUnlockKcbStack(v31);
            v96 = *(_QWORD *)v182;
            CmpUnlockKcbStack(*(_QWORD *)v182);
            if ( v179 )
              CmpUnlockKcb(*(_QWORD *)(v34 + 8));
            HIBYTE(v184) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
            if ( v179 )
              CmpLockKcbShared(*(_QWORD *)(v34 + 8));
            CmpLockKcbStackTopExclusiveRestShared(v96);
            CmpLockKcbStackTopExclusiveRestShared((__int64)v31);
            v194 = (unsigned __int16 *)CmpGetComponentNameAtIndex((__int64)v210, v38);
            v98 = CmpGetComponentHashAtIndex((__int64)v210, v97);
            if ( CmpIsKeyDeletedForKeyBody(v34, 0LL) )
            {
              HiveRootCell = -1073740763;
              v146 = 6656;
              if ( (*(_BYTE *)(v34 + 48) & 1) == 0 )
                HiveRootCell = -1073741444;
            }
            else
            {
              v99 = *(_QWORD *)v188;
              if ( CmpIsKeyStackDeleted(*(__int64 *)v182, *(__int64 *)v188) )
              {
                HiveRootCell = -1073741772;
                v146 = 6912;
              }
              else
              {
                if ( !CmpIsKeyStackDeleted((__int64)v31, v99) )
                {
                  v176 = -1073741790;
                  v146 = 7168;
                  v104 = -1073741790;
                  goto LABEL_324;
                }
                if ( *(_QWORD *)(*v191 + 32) != CmpMasterHive )
                {
                  v176 = -1073741790;
                  v146 = 7424;
                  v104 = -1073741790;
                  goto LABEL_324;
                }
                if ( (*(_DWORD *)(*v191 + 184) & 0x20000) == 0 )
                {
                  if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                  {
                    CmpAttachToRegistryProcess(a7 + 168);
                    *(_DWORD *)(a7 + 160) |= 1u;
                  }
                  v100 = *(unsigned int *)(a7 + 40);
                  v101 = (_DWORD *)(a7 + 40);
                  v102 = *(_QWORD *)(a7 + 48);
                  if ( (_DWORD)v100 == -1 )
                  {
                    HiveRootCell = CmpCreateHiveRootCell(v102, a7 + 40);
                    v176 = HiveRootCell;
                    if ( HiveRootCell < 0 )
                    {
                      v146 = 7808;
                      goto LABEL_322;
                    }
                  }
                  else
                  {
                    HiveRootCell = CmpUpdateHiveRootCellFlags(v102, v100);
                    v176 = HiveRootCell;
                    if ( HiveRootCell < 0 )
                    {
                      v146 = 7936;
                      goto LABEL_322;
                    }
                  }
                  *(_WORD *)(v11 + 186) |= 2u;
                  LODWORD(v174) = 0;
                  *(_DWORD *)ObjectCreated = v98;
                  v176 = CmpCreateKeyControlBlock(
                           *(_QWORD *)(a7 + 48),
                           -1,
                           v11,
                           *(_QWORD *)(a7 + 80),
                           1,
                           v194,
                           *(_QWORD *)ObjectCreated,
                           v174,
                           &BugCheckParameter2);
                  *(_WORD *)(v11 + 186) &= ~2u;
                  v104 = v176;
                  if ( v176 < 0 )
                  {
                    v146 = 0x2000;
                    goto LABEL_324;
                  }
                  v105 = v11;
                  v11 = BugCheckParameter2;
                  CmpDereferenceKeyControlBlockUnsafe(v105);
                  CmpUnlockHashEntryByKcb(v105);
                  HIBYTE(v178) = 0;
                  HiveRootCell = CmpStartKcbStackForTopLayerKcb((__int64)v204, v11, v106, v107);
                  v176 = HiveRootCell;
                  if ( HiveRootCell >= 0 )
                  {
                    *(_WORD *)(v105 + 186) |= 2u;
                    CmpLockKcbStackTopExclusiveRestShared((__int64)v204);
                    v108 = *(_QWORD *)v188;
                    v109 = v178;
                    *(_WORD *)(v105 + 186) &= ~2u;
                    v186 = 1;
                    v110 = CmpCreateKeyBody(
                             v11,
                             v109,
                             a7,
                             v108,
                             1,
                             (__int64)v204,
                             (ULONG_PTR **)&DmaAdapter,
                             (bool *)&v183);
                    v176 = v110;
                    if ( v110 < 0 )
                    {
                      CmpRecordParseFailure(a7, 8576, v110);
                      v47 = v180;
                      v175 = v177;
                    }
                    else
                    {
                      HvLockHiveFlusherShared(*(_QWORD *)(v105 + 32));
                      HvLockHiveFlusherExclusive(*(_QWORD *)(v11 + 32));
                      v111 = *(_QWORD *)(v11 + 32);
                      v112 = *(_DWORD *)(v111 + 104);
                      if ( (unsigned __int8)HvMarkCellDirty(v111, (unsigned int)*v101, 0LL) )
                      {
                        v176 = CmpCreateChild(
                                 v182[0],
                                 (_DWORD)v31,
                                 (_DWORD)v189,
                                 (_DWORD)v194,
                                 a7,
                                 10,
                                 1,
                                 *(__int64 *)v188);
                        if ( v176 >= 0 )
                        {
                          LOBYTE(v113) = 1;
                          *(_DWORD *)(v11 + 40) = *v101;
                          *(_DWORD *)(CmpGetKeyNodeForKcb(v11, &v198, v113, v114) + 16) = *(_DWORD *)(v105 + 40);
                          ++*(_QWORD *)(v11 + 304);
                          CmpRebuildKcbCacheFromNode(v11);
                          CmpReleaseKeyNodeForKcb(v11, &v198);
                          if ( !v112 )
                            HvResetDirtyData(*(_QWORD *)(v11 + 32));
                          HvUnlockHiveFlusherExclusive(*(_QWORD *)(v11 + 32));
                          HvUnlockHiveFlusherShared(*(_QWORD *)(v105 + 32));
                          *(_WORD *)(v105 + 8) |= 8u;
                          CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v11);
                          *(_QWORD *)(v105 + 104) = v11;
                          CmpUnlockHashEntry(*(PVOID *)(a7 + 48), 0);
                          v43 = *(_QWORD *)v188;
                          v44 = v178;
                          v175 = v177;
                          *(_DWORD *)(a7 + 32) = 1;
                          goto LABEL_59;
                        }
                      }
                      else
                      {
                        v176 = -1073741443;
                        CmpRecordParseFailure(a7, 8704, -1073741443);
                      }
                      HvUnlockHiveFlusherExclusive(*(_QWORD *)(v11 + 32));
                      HvUnlockHiveFlusherShared(*(_QWORD *)(v105 + 32));
                      v47 = v180;
                    }
LABEL_227:
                    CmpUnlockKcbStack(v204);
                    goto LABEL_67;
                  }
                  v146 = 8448;
LABEL_322:
                  v104 = HiveRootCell;
LABEL_324:
                  CmpRecordParseFailure(a7, v146, v104);
                  v175 = v177;
                  goto LABEL_192;
                }
                HiveRootCell = -1073741772;
                v146 = 7680;
              }
            }
            v176 = HiveRootCell;
            goto LABEL_322;
          }
          CmpRecordParseFailure(a7, 3584, v30);
        }
      }
      else
      {
        v176 = -1073741790;
        CmpRecordParseFailure(a7, 2560, -1073741790);
      }
    }
    else
    {
      CmpRecordParseFailure(a7, 2496, v176);
    }
LABEL_107:
    v47 = v180;
LABEL_76:
    if ( HIBYTE(v178) )
      CmpUnlockHashEntryByKcb(v11);
    goto LABEL_78;
  }
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive(v19, v16);
  else
    CmpLockRegistry();
  v59 = *(_QWORD *)(v17 + 296);
  LOBYTE(v14) = 1;
  v60 = 0;
  v181 = 1;
  if ( (v59 & 1) != 0 )
  {
    v60 = 1;
    v59 &= ~1uLL;
  }
  if ( !v59 || v60 || !RtlPrefixUnicodeString((PCUNICODE_STRING)v59, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(v17);
    v17 = 0LL;
    v196 = 0LL;
    CmpUnlockRegistry(v138, v137);
    v14 = v185[0];
    v181 = 0;
LABEL_127:
    v11 = BugCheckParameter4;
    goto LABEL_11;
  }
  v61 = String2->Length - *(_WORD *)v59;
  v62 = String2->MaximumLength - *(_WORD *)v59;
  v63 = &String2->Buffer[(unsigned __int64)*(unsigned __int16 *)v59 >> 1];
  v64 = v61;
  v195.m128i_i16[0] = v61;
  v65 = v63;
  v195.m128i_i64[1] = (__int64)v63;
  v66 = v62;
  v195.m128i_i16[1] = v62;
  if ( v61 )
  {
    do
    {
      if ( *v65 != 92 )
        break;
      ++v65;
      v66 -= 2;
      v64 -= 2;
    }
    while ( v64 );
    v195.m128i_i64[1] = (__int64)v65;
    v195.m128i_i16[0] = v64;
    v195.m128i_i16[1] = v66;
  }
  v67 = ((*(_DWORD *)(v17 + 8) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) != 0 && !v64 )
  {
    v88 = *(_QWORD *)(v17 + 80);
    v89 = *(unsigned __int16 *)(v88 + 24);
    v36 = (*(_DWORD *)v88 & 1) == 0;
    v90 = *(unsigned __int16 *)(v88 + 24);
    if ( v36 )
    {
      v195.m128i_i16[0] = v89 + v61;
      v92 = (__int64)&v63[-((unsigned __int64)v89 >> 1)];
      v195.m128i_i16[1] = v89 + v62;
    }
    else
    {
      v91 = 2 * v89;
      v92 = (__int64)&v63[-v90];
      v195.m128i_i16[1] = v62 + v91;
      v195.m128i_i16[0] = v61 + v91;
    }
    v195.m128i_i64[1] = v92;
    v12 = 1;
    --v67;
  }
  v68 = CmpComputeComponentHashes(&v195, v185, (__int64)v210);
  v176 = v68;
  if ( v68 >= 0 )
  {
    v14 = v185[0];
    if ( (unsigned int)(v185[0] + v67) > 0x20 )
    {
      v176 = -1073741811;
      v135 = 768;
      v136 = -1073741811;
    }
    else
    {
      v69 = CmpValidateComponents(v185[0], (__int64)v210);
      v176 = v69;
      if ( v69 >= 0 )
      {
        if ( v12 == v14 )
        {
          CmpLockHashEntrySharedByKcb(v17);
          v70 = 1;
          HIBYTE(v183) = 1;
        }
        else
        {
          v70 = 0;
        }
        CmpLockKcbShared(v17);
        if ( (unsigned __int8)CmpIsKeyDeleted(v17, 0LL) || (*(_DWORD *)(v17 + 8) & 0x40000) != 0 )
        {
          CmpUnlockKcb(v17);
          if ( v70 )
            CmpUnlockHashEntryByKcb(v17);
          CmpDereferenceKeyControlBlock(v17);
          v17 = 0LL;
          v196 = 0LL;
          v12 = 0;
          v195 = *(__m128i *)v191;
          CmpCleanupPathInfo((__int64)v210);
          memset(v210, 0, 0xA8uLL);
          HIBYTE(v183) = 0;
        }
        else
        {
          CmpUnlockKcb(v17);
        }
        goto LABEL_127;
      }
      v136 = v69;
      v135 = 1024;
    }
    CmpRecordParseFailure(a7, v135, v136);
    v11 = BugCheckParameter4;
    v47 = v180;
LABEL_81:
    LOBYTE(v14) = v181;
    goto LABEL_82;
  }
  CmpRecordParseFailure(a7, 512, v68);
  v11 = BugCheckParameter4;
  v47 = v180;
LABEL_82:
  CmpCleanupKcbStack(v206);
  CmpCleanupKcbStack(v208);
  CmpCleanupKcbStack(v204);
  v48 = *(_QWORD *)v199;
  if ( *(_QWORD *)v199 )
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
    LOBYTE(v171) = 1;
    CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, *(_QWORD *)(a7 + 112), &v201, 0LL, v171);
    *(_DWORD *)(a7 + 100) &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v201);
  if ( (_BYTE)v14 )
    CmpUnlockRegistry(v52, v51);
  if ( (_BYTE)v184 )
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
  CmpCleanupPathInfo((__int64)v210);
  return (unsigned int)v176;
}
