/*
 * XREFs of CmpDoParseKey @ 0x140624810
 * Callers:
 *     CmpParseKey @ 0x140623680 (CmpParseKey.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     CmpTransSilentIgnore @ 0x14025EEA0 (CmpTransSilentIgnore.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402E5A50 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentThreadProcess @ 0x14030E2D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpVEExecuteOpenLogic @ 0x1405E9C70 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x1405E9D60 (CmpDoWritethroughReparse.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14061C108 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CE00 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpConstructName @ 0x14061DE38 (CmpConstructName.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpGetComponentHashAtIndex @ 0x1406220D0 (CmpGetComponentHashAtIndex.c)
 *     CmpRecordParseFailure @ 0x140622100 (CmpRecordParseFailure.c)
 *     CmpUnlockHashEntryByKcb @ 0x140622370 (CmpUnlockHashEntryByKcb.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmRmIsKCBVisible @ 0x140623260 (CmRmIsKCBVisible.c)
 *     CmpGetComponentNameAtIndex @ 0x140623290 (CmpGetComponentNameAtIndex.c)
 *     CmpVEExecuteParseLogic @ 0x1406232C0 (CmpVEExecuteParseLogic.c)
 *     CmpOKToFollowLink @ 0x140623500 (CmpOKToFollowLink.c)
 *     CmpComputeComponentHashes @ 0x140623BE0 (CmpComputeComponentHashes.c)
 *     CmpValidateComponents @ 0x140623F10 (CmpValidateComponents.c)
 *     CmpCleanupPathInfo @ 0x140623F70 (CmpCleanupPathInfo.c)
 *     CmpIsKeyStackSymlink @ 0x140623FE0 (CmpIsKeyStackSymlink.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKeyStackDeleted @ 0x140624560 (CmpIsKeyStackDeleted.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140624630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpPopulateKcbStack @ 0x1406247C0 (CmpPopulateKcbStack.c)
 *     CmpCleanupKcbStack @ 0x140626070 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x140626090 (CmpStartKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1406260F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpLockKcbShared @ 0x140626200 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpTransSearchAddTransFromHive @ 0x140656950 (CmpTransSearchAddTransFromHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14068847C (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406884B4 (HvLockHiveFlusherExclusive.c)
 *     HvResetDirtyData @ 0x140689BDC (HvResetDirtyData.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14068E788 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpIsKeyDeleted @ 0x14069178C (CmpIsKeyDeleted.c)
 *     CmpGetKeyNodeForKcb @ 0x140692A30 (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406958E8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUnlockHashEntry @ 0x140695CA8 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntrySharedByKcb @ 0x140695DD0 (CmpLockHashEntrySharedByKcb.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140696828 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpCheckKeyOwnerForPca @ 0x1406CC24C (CmpCheckKeyOwnerForPca.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406CD270 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpVEExecuteCreateLogic @ 0x1406D038C (CmpVEExecuteCreateLogic.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406E11E4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E36A8 (CmpTryToLockHashEntryExclusive.c)
 *     CmpCheckExeOwnerForPca @ 0x14075AD9C (CmpCheckExeOwnerForPca.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x1407AE9E4 (CmpWaitForHiveMount.c)
 *     CmpReleaseKeyNodeForKcb @ 0x14085F494 (CmpReleaseKeyNodeForKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x1408661BC (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086ABD4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpLogUnsupportedOperation @ 0x140871B98 (CmpLogUnsupportedOperation.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
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
  PCUNICODE_STRING v40; // r12
  int v41; // eax
  int v42; // eax
  __int64 v43; // r13
  char v44; // r12
  int KeyBody; // eax
  struct _ACCESS_STATE *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r8
  _DWORD *v49; // r9
  void *v50; // r12
  ULONG_PTR v51; // rbx
  ULONG_PTR v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  _DWORD *v57; // r9
  __int64 v59; // rbx
  int ComponentHashAtIndex; // ecx
  __m128i *v61; // r8
  char v62; // dl
  int v63; // eax
  unsigned __int64 v64; // rsi
  char v65; // al
  __int16 v66; // r8
  __int16 v67; // r9
  wchar_t *v68; // r10
  __int16 v69; // cx
  wchar_t *v70; // rax
  __int16 v71; // dx
  int v72; // esi
  int v73; // eax
  int v74; // eax
  char v75; // si
  int SymbolicLinkTarget; // eax
  __int64 v77; // rcx
  ULONG_PTR v78; // rbx
  __int64 *v79; // rax
  char v80; // al
  int v81; // eax
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // r8
  _DWORD *v86; // r9
  __int64 *v87; // r12
  __int64 v88; // rbx
  int v89; // ebx
  int Logic; // eax
  int v91; // eax
  int v92; // r9d
  int Child; // eax
  __int64 v94; // rax
  unsigned int v95; // ecx
  __int64 v96; // rax
  __int16 v97; // cx
  __int64 v98; // r10
  __int64 v99; // rdx
  __int64 v100; // rcx
  int v101; // r8d
  __int64 v102; // rbx
  unsigned int v103; // r8d
  int v104; // ebx
  __int64 v105; // r12
  __int64 v106; // r8
  _DWORD *v107; // r9
  __int64 v108; // rdx
  ULONG_PTR v109; // rdx
  _DWORD *v110; // r12
  ULONG_PTR v111; // rcx
  int HiveRootCell; // eax
  int v113; // r8d
  __int64 v114; // rbx
  __int64 v115; // r8
  struct _LOOKASIDE_LIST_EX *v116; // r9
  __int64 v117; // r9
  char v118; // dl
  int v119; // eax
  __int64 v120; // rcx
  int v121; // r13d
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  int v125; // edx
  int v126; // r8d
  _KPROCESS *CurrentThreadProcess; // rsi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  int SessionId; // eax
  __int64 v131; // rdx
  __int64 v132; // rcx
  int v133; // edx
  int v134; // r8d
  int v135; // r8d
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // r8
  int v139; // eax
  int v140; // ecx
  int v141; // r12d
  int v142; // eax
  char v143; // dl
  int v144; // edx
  int v145; // r8d
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 ComponentNameAtIndex; // rax
  __int64 v152; // rdx
  __int64 v153; // r8
  int v154; // eax
  int v155; // edx
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // r8
  int v159; // edx
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // r8
  _KPROCESS *v163; // rsi
  __int64 v164; // rax
  int v165; // ebx
  int v166; // eax
  __int64 v167; // rcx
  __int64 v168; // rax
  __int64 v169; // r8
  int v170; // eax
  __int64 v171; // rcx
  int v172; // edx
  int v173; // r8d
  int v174; // eax
  PCUNICODE_STRING v175; // rbx
  int v176; // eax
  int v177; // edx
  int v178; // eax
  int v179; // [rsp+20h] [rbp-E0h]
  char v180[8]; // [rsp+28h] [rbp-D8h]
  BOOLEAN ObjectCreated[8]; // [rsp+30h] [rbp-D0h]
  __int64 ObjectCreateda; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v183; // [rsp+38h] [rbp-C8h]
  bool v184; // [rsp+60h] [rbp-A0h]
  int v185; // [rsp+64h] [rbp-9Ch] BYREF
  char v186; // [rsp+68h] [rbp-98h]
  __int16 v187; // [rsp+69h] [rbp-97h] BYREF
  char v188; // [rsp+6Bh] [rbp-95h]
  void *v189; // [rsp+70h] [rbp-90h]
  char v190; // [rsp+78h] [rbp-88h]
  int v191[2]; // [rsp+80h] [rbp-80h]
  __int16 v192; // [rsp+88h] [rbp-78h] BYREF
  int v193; // [rsp+8Ah] [rbp-76h] BYREF
  __int16 v194[2]; // [rsp+90h] [rbp-70h] BYREF
  char v195; // [rsp+94h] [rbp-6Ch]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-68h] BYREF
  BOOLEAN v197[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *v198; // [rsp+A8h] [rbp-58h]
  __int16 v199; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v200; // [rsp+B8h] [rbp-48h]
  PCUNICODE_STRING String2; // [rsp+C0h] [rbp-40h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v203; // [rsp+D0h] [rbp-30h]
  __m128i v204; // [rsp+D8h] [rbp-28h] BYREF
  ULONG_PTR v205; // [rsp+E8h] [rbp-18h]
  __int64 v206; // [rsp+F0h] [rbp-10h]
  __int64 v207; // [rsp+F8h] [rbp-8h] BYREF
  int v208[2]; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+8h] BYREF
  __int128 v210; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  PADAPTER_OBJECT *v212; // [rsp+130h] [rbp+30h]
  __int64 v213[2]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v214; // [rsp+148h] [rbp+48h]
  __int64 v215[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v216; // [rsp+170h] [rbp+70h]
  int v217[4]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v218; // [rsp+190h] [rbp+90h]
  _BYTE v219[176]; // [rsp+1A0h] [rbp+A0h] BYREF

  v206 = a1;
  v212 = a9;
  String2 = a5;
  v198 = a2;
  v207 = 0LL;
  v11 = 0LL;
  v12 = 0;
  DestinationString = 0LL;
  v13 = *a6;
  v187 = a3;
  v14 = 0;
  v200 = (__int64 *)a6;
  v204 = v13;
  v199 = 0;
  *(_QWORD *)v197 = 0LL;
  v210 = 0LL;
  DmaAdapter = 0LL;
  BugCheckParameter4 = 0LL;
  *(_QWORD *)v208 = 0LL;
  v184 = 0;
  v195 = 0;
  v192 = 0;
  v188 = 0;
  v194[0] = 0;
  BugCheckParameter2 = 0LL;
  LODWORD(v207) = -1;
  CmpInitializeDelayDerefContext(&v210);
  v193 = (unsigned __int8)v15;
  v189 = v15;
  memset(v219, (int)v15, 0xA8uLL);
  *(_OWORD *)(a7 + 160) = 0LL;
  *(_OWORD *)(a7 + 176) = 0LL;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_OWORD *)v215 = 0LL;
  WORD1(v215[0]) = -1;
  *(_OWORD *)v217 = 0LL;
  HIWORD(v217[0]) = -1;
  *(_OWORD *)v213 = 0LL;
  WORD1(v213[0]) = -1;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)(a7 + 216) = 0LL;
  *(_OWORD *)(a7 + 232) = 0LL;
  *(_OWORD *)(a7 + 248) = 0LL;
  *(_OWORD *)(a7 + 264) = 0LL;
  *(_OWORD *)(a7 + 280) = 0LL;
  v216 = 0LL;
  v218 = 0LL;
  v214 = 0LL;
  if ( a7 )
    *(_QWORD *)(a7 + 216) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v17 = *(_QWORD *)(a7 + 88);
  v18 = *(_QWORD *)(a7 + 72);
  v205 = v17;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v18 )
  {
    v124 = *(_QWORD *)(a1 + 56);
    if ( v124 && v18 != v124 )
    {
      v185 = -1072103422;
      CmpRecordParseFailure(a7, 256, -1072103422);
      v50 = 0LL;
      goto LABEL_82;
    }
    v203 = 0LL;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 56);
    v203 = *(unsigned __int16 **)(a1 + 64);
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(a1 + 50);
  v19 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( *(_QWORD *)(a1 + 8) != v19 && v17 )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v17);
    v17 = 0LL;
    v205 = 0LL;
    CmpUnlockRegistry(v132, v131);
  }
  v190 = 0;
  if ( !v17 )
  {
LABEL_11:
    v186 = HIBYTE(v192);
    if ( !v17 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      v21 = CmpComputeComponentHashes(&v204, v194, (__int64)v219);
      v185 = v21;
      if ( v21 < 0 )
      {
        CmpRecordParseFailure(a7, 1280, v21);
        v50 = v189;
      }
      else
      {
        v14 = v194[0];
        v22 = CmpValidateComponents(v194[0], (__int64)v219);
        v185 = v22;
        if ( v22 >= 0 )
          goto LABEL_14;
        CmpRecordParseFailure(a7, 1536, v22);
        v50 = v189;
      }
LABEL_79:
      if ( HIBYTE(v192) )
        CmpUnlockHashEntryByKcb(v17);
      goto LABEL_81;
    }
    v20 = v17;
LABEL_14:
    v23 = (unsigned int)v14;
    *(_QWORD *)(a7 + 224) = v20;
    *(_QWORD *)(a7 + 248) = v20;
    v24 = ((*(_DWORD *)(v20 + 8) >> 21) & 0x3FF) - (unsigned __int16)v12;
    LODWORD(v200) = v23;
    if ( (unsigned int)(v23 + v24) > 0x200 )
    {
      v185 = -1073741811;
      CmpRecordParseFailure(a7, 1792, -1073741811);
      v50 = v189;
LABEL_78:
      v17 = v205;
      goto LABEL_79;
    }
    if ( !v190 )
    {
      if ( (*(_DWORD *)a7 & 0x400) != 0 )
        CmpLockRegistryExclusive(v23, v16);
      else
        CmpLockRegistry();
      LODWORD(v23) = (_DWORD)v200;
      v190 = 1;
    }
    v25 = *(_DWORD *)(v206 + 48);
    if ( (v25 & 9) != 0 )
    {
      v135 = -1073741444;
      if ( (v25 & 1) != 0 )
        v135 = -1073740763;
      v185 = v135;
      CmpRecordParseFailure(a7, 2048, v135);
      v50 = v189;
      goto LABEL_78;
    }
    if ( v12 == v14 )
    {
      CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v20);
      v11 = v20;
      BugCheckParameter4 = v20;
      if ( v20 == v205 )
      {
        v80 = v186;
        HIBYTE(v192) = 0;
      }
      else
      {
        CmpLockHashEntrySharedByKcb(v20);
        v80 = 1;
      }
      HIBYTE(v187) = v80;
    }
    else
    {
      v26 = CmpPerformCompleteKcbCacheLookup(
              v20,
              (unsigned __int16)v12,
              v23,
              (__int64)v219,
              (_DWORD *)a7,
              &BugCheckParameter4,
              (_BYTE *)&v187 + 1,
              &v199);
      v185 = v26;
      if ( v26 < 0 || v26 == 259 )
      {
        CmpRecordParseFailure(a7, 2432, v26);
        v11 = BugCheckParameter4;
        goto LABEL_107;
      }
      v27 = v199;
      v11 = BugCheckParameter4;
      v12 += v199;
      *(_QWORD *)(a7 + 232) = BugCheckParameter4;
      *(_BYTE *)(a7 + 256) = v27;
      *(_QWORD *)(a7 + 248) = v11;
    }
    if ( v12 == v14 && (*(_DWORD *)a7 & 1) == 0 )
    {
      CmpUnlockHashEntryByKcb(v11);
      HIBYTE(v187) = 0;
    }
    CmpLockKcbShared(v11);
    if ( v12 < v14 )
    {
      DestinationString.Buffer = *(wchar_t **)(CmpGetComponentNameAtIndex((__int64)v219, v12) + 8);
      DestinationString.Length = v204.m128i_i16[0] - 2 * (((__int64)DestinationString.Buffer - v204.m128i_i64[1]) >> 1);
      DestinationString.MaximumLength = DestinationString.Length;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    v185 = CmpVEExecuteParseLogic(v11, (__int64)&DestinationString, (_DWORD *)a7, String2, v187, v198 + 1);
    CmpUnlockKcb(v11);
    if ( v185 == -1073741199 )
    {
      if ( CmpOKToFollowLink(*(_QWORD **)(a7 + 64), *(_QWORD *)(v11 + 32)) )
      {
        v28 = v203;
        if ( v18 || v203 )
        {
          if ( *(PVOID *)(v11 + 32) == CmpMasterHive )
          {
            BYTE2(v193) = 1;
            v18 = 0LL;
            v28 = 0LL;
          }
          else if ( (v18 || v203) && *(_WORD *)(v11 + 66) )
          {
            CmpLogUnsupportedOperation(8LL);
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              v185 = -1072103419;
              CmpRecordParseFailure(a7, 2816, -1072103419);
              goto LABEL_107;
            }
            v18 = 0LL;
            v28 = 0LL;
          }
        }
        if ( !CmpTransSilentIgnore() && (v18 || v28) )
        {
          v185 = CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 32), v18, (_DWORD)v28, 0, (__int64)v197);
          if ( v185 < 0 )
          {
            if ( HIBYTE(v187) )
            {
              CmpUnlockHashEntryByKcb(v11);
              HIBYTE(v187) = 0;
            }
            CmpUnlockRegistry(v100, v99);
            v185 = CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 32), v18, (_DWORD)v28, 1, (__int64)v197);
            CmpLockRegistry();
            v101 = v185;
            v190 = 1;
            if ( v185 >= 0 )
            {
              v101 = -1073741267;
              v185 = -1073741267;
            }
            CmpRecordParseFailure(a7, 3072, v101);
            v50 = v189;
            goto LABEL_76;
          }
        }
        started = CmpStartKcbStack(v215, *(unsigned __int16 *)(v11 + 66));
        v185 = started;
        if ( started < 0 )
        {
          CmpRecordParseFailure(a7, 3328, started);
        }
        else
        {
          v30 = CmpStartKcbStack(v217, *(unsigned __int16 *)(v11 + 66));
          v185 = v30;
          if ( v30 >= 0 )
          {
            v31 = v215;
            v32 = v217;
            CmpPopulateKcbStack((__int64)v215, v11);
            if ( v12 < v14 )
            {
              while ( 1 )
              {
                CmpLockKcbStackShared(v31);
                v59 = *(_QWORD *)v197;
                if ( CmpIsKeyStackDeleted((__int64)v31, *(__int64 *)v197) )
                {
                  if ( CmpLoadingSystemHivesActive
                    && (v11 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                    && *(PVOID *)(BugCheckParameter4 + 32) == CmpMasterHive
                    && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                    && v12 > 0
                    && (ComponentNameAtIndex = CmpGetComponentNameAtIndex((__int64)v219, v12 - 1),
                        (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v152, v153, a7 + 136)) )
                  {
                    *(_DWORD *)a7 |= 0x100u;
                    v125 = 3840;
                    v185 = 259;
                    v126 = 259;
                  }
                  else
                  {
                    v125 = 4096;
                    v185 = -1073741772;
                    v126 = -1073741772;
                  }
                  CmpRecordParseFailure(a7, v125, v126);
                  v50 = v189;
                  v34 = v206;
                  v32 = (int *)v189;
                  goto LABEL_68;
                }
                if ( CmpIsKeyStackSymlink((__int64)v31) )
                  break;
                CmpUnlockKcbStack(v31);
                CmpGetComponentNameAtIndex((__int64)v219, v12);
                ComponentHashAtIndex = CmpGetComponentHashAtIndex((__int64)v219, v12);
                v62 = (*(_DWORD *)a7 & 1) != 0 && v12 == (_DWORD)v200 - 1;
                LODWORD(v183) = ComponentHashAtIndex + 37 * *(_DWORD *)(v11 + 16);
                v63 = CmpWalkOneLevel(
                        v11,
                        (__int64)v31,
                        (ULONG_PTR *)v208,
                        (__int64)v32,
                        (bool *)&v193 + 1,
                        v61,
                        ComponentHashAtIndex,
                        v183,
                        *(__int64 *)v197,
                        v62,
                        a7);
                v185 = v63;
                if ( v63 == -1073741772 )
                {
                  if ( !CmpLoadingSystemHivesActive )
                    goto LABEL_106;
                  v11 = BugCheckParameter4;
                  if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread()
                    || *(PVOID *)(BugCheckParameter4 + 32) != CmpMasterHive )
                  {
                    v63 = v185;
LABEL_106:
                    CmpRecordParseFailure(a7, 5504, v63);
                    goto LABEL_107;
                  }
                  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000 && v12 > 0 )
                  {
                    v148 = CmpGetComponentNameAtIndex((__int64)v219, v12 - 1);
                    if ( (unsigned __int8)CmpWaitForHiveMount(v148, v149, v150, a7 + 136) )
                    {
                      *(_DWORD *)a7 |= 0x100u;
                      v185 = 259;
                      CmpRecordParseFailure(a7, 5120, 259);
                      goto LABEL_107;
                    }
                  }
                  if ( (*(_DWORD *)(v11 + 8) & 0x7FE00000) == 0x400000 )
                  {
                    v136 = CmpGetComponentNameAtIndex((__int64)v219, v12);
                    if ( (unsigned __int8)CmpWaitForHiveMount(v136, v137, v138, a7 + 136) )
                    {
                      *(_DWORD *)a7 |= 0x100u;
                      v185 = 259;
                      CmpRecordParseFailure(a7, 5376, 259);
                      v50 = v189;
                      goto LABEL_76;
                    }
                  }
                  v14 = v194[0];
                  v63 = v185;
                }
                if ( v63 < 0 )
                  goto LABEL_106;
                v78 = *(_QWORD *)v208;
                ++*(_BYTE *)(a7 + 257);
                *(_QWORD *)(a7 + 240) = v78;
                *(_QWORD *)(a7 + 248) = v78;
                CmpDereferenceKeyControlBlockUnsafe(v11);
                HIBYTE(v187) = BYTE1(v193);
                ++v12;
                BugCheckParameter4 = v78;
                v79 = v31;
                *(_QWORD *)v208 = 0LL;
                v31 = (__int64 *)v32;
                BYTE1(v193) = 0;
                v32 = (int *)v79;
                v11 = v78;
                if ( v12 >= v14 )
                  goto LABEL_39;
              }
              SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                     (__int64)v31,
                                     (__int64)v219,
                                     v12,
                                     v14,
                                     v59,
                                     a7,
                                     (__int64)&v210,
                                     (__int64)String2,
                                     (ULONG_PTR *)(a7 + 88));
              v185 = SymbolicLinkTarget;
              if ( SymbolicLinkTarget < 0 )
              {
                CmpRecordParseFailure(a7, 4608, SymbolicLinkTarget);
                goto LABEL_107;
              }
              *(_DWORD *)a7 &= ~8u;
              if ( !*(_QWORD *)(a7 + 64) )
              {
                v77 = *(_QWORD *)(v11 + 32);
                if ( (*(_DWORD *)(v77 + 4152) & 1) != 0 )
                  *(_QWORD *)(a7 + 64) = v77;
              }
              v185 = 260;
              CmpRecordParseFailure(a7, 4864, 260);
              v50 = v189;
              goto LABEL_76;
            }
LABEL_39:
            v33 = *(_QWORD *)(v11 + 72);
            *(_QWORD *)v191 = v32;
            v200 = (__int64 *)(v11 + 72);
            if ( v33 )
            {
              CmpPopulateKcbStack((__int64)v32, v33);
              v33 = *(_QWORD *)(v11 + 72);
            }
            else
            {
              v32 = 0LL;
              *(_QWORD *)v191 = 0LL;
            }
            v34 = v206;
            v35 = *(_QWORD *)(v206 + 8);
            if ( v33 != v35 && v11 != v35 )
            {
              CmpLockKcbShared(v35);
              v188 = 1;
            }
            v36 = v32 == 0LL;
            if ( v32 )
            {
              CmpLockKcbStackShared(v32);
              v36 = v32 == 0LL;
            }
            v37 = !v36;
            v186 = !v36;
            v184 = !v36;
            CmpLockKcbStackShared(v31);
            if ( CmpIsKeyDeletedForKeyBody(v34, 0LL) )
            {
              v154 = -1073740763;
              if ( (*(_BYTE *)(v34 + 48) & 1) == 0 )
                v154 = -1073741444;
              v185 = v154;
              CmpRecordParseFailure(a7, 5888, v154);
              v50 = v189;
              v184 = v37;
              goto LABEL_68;
            }
            v38 = v12 - 1;
            v39 = (_DWORD *)(v11 + 184);
            if ( (*(_DWORD *)(v11 + 184) & 0x20000) != 0 )
            {
              v185 = -1073741772;
              CmpRecordParseFailure(a7, 6144, -1073741772);
              v184 = v37;
              goto LABEL_276;
            }
            if ( !CmRmIsKCBVisible(v11, *(__int64 *)v197) )
            {
              v185 = -1073741772;
              CmpRecordParseFailure(a7, 6400, -1073741772);
              v50 = v189;
              v184 = v37;
              goto LABEL_67;
            }
            if ( (*(_DWORD *)a7 & 2) == 0 )
            {
              if ( (*(_DWORD *)a7 & 0x20) == 0 )
              {
                if ( !CmpIsKeyStackDeleted((__int64)v31, *(__int64 *)v197) )
                {
                  if ( CmpIsKeyStackSymlink((__int64)v31) && (*(_DWORD *)a7 & 0x200) == 0 )
                  {
                    if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                    {
                      v32 = *(int **)v191;
                      v184 = v37;
                      if ( *(_QWORD *)v191 )
                      {
                        CmpUnlockKcbStack(*(_QWORD *)v191);
                        v184 = 0;
                      }
                      if ( v188 )
                      {
                        CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                        v188 = 0;
                      }
                      if ( HIBYTE(v187) )
                      {
                        CmpUnlockHashEntryByKcb(v11);
                        HIBYTE(v187) = 0;
                      }
                      v81 = CmpGetSymbolicLinkTarget(
                              (__int64)v31,
                              (__int64)v219,
                              0,
                              0,
                              *(__int64 *)v197,
                              a7,
                              (__int64)&v210,
                              (__int64)String2,
                              (ULONG_PTR *)(a7 + 88));
                      v185 = v81;
                      if ( v81 < 0 )
                      {
                        CmpRecordParseFailure(a7, 14336, v81);
                        v50 = v189;
                      }
                      else
                      {
                        *(_DWORD *)a7 &= ~8u;
                        if ( !*(_QWORD *)(a7 + 64) )
                        {
                          v82 = *(_QWORD *)(v11 + 32);
                          if ( (*(_DWORD *)(v82 + 4152) & 1) != 0 )
                            *(_QWORD *)(a7 + 64) = v82;
                        }
                        v185 = 260;
                        CmpRecordParseFailure(a7, 14592, 260);
                        v50 = v189;
                      }
                      goto LABEL_69;
                    }
                    v185 = -1073741771;
                    v133 = 14080;
                    v134 = -1073741771;
                    goto LABEL_255;
                  }
                  if ( !BYTE2(v193) )
                  {
                    if ( (*v39 & 0x20000) != 0 )
                    {
                      v133 = 15104;
                      v185 = -1073741772;
                      v134 = -1073741772;
                      goto LABEL_255;
                    }
                    if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                    {
                      v185 = -1073741771;
                      v133 = 15360;
                      v134 = -1073741771;
                      goto LABEL_255;
                    }
                    v40 = String2;
                    v32 = *(int **)v191;
                    v41 = CmpDoWritethroughReparse(
                            v11,
                            (__int64)v31,
                            *(__int64 *)v191,
                            0,
                            0LL,
                            a7,
                            (UNICODE_STRING *)String2);
                    v185 = v41;
                    if ( v41 == -1073741199 )
                    {
                      *(_QWORD *)v180 = v198 + 1;
                      v42 = CmpVEExecuteOpenLogic(v11, (_DWORD *)a7, 0, (__int64)v40, v187);
                      v185 = v42;
                      if ( v42 == -1073741199 )
                      {
                        v43 = *(_QWORD *)v197;
                        v44 = v187;
                        KeyBody = CmpCreateKeyBody(
                                    v11,
                                    v187,
                                    a7,
                                    *(__int64 *)v197,
                                    0,
                                    (__int64)v31,
                                    (ULONG_PTR **)&DmaAdapter,
                                    (bool *)&v192);
                        v185 = KeyBody;
                        v184 = v37;
                        if ( KeyBody >= 0 )
                        {
LABEL_59:
                          v46 = (struct _ACCESS_STATE *)v198;
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
                                                  (char *)&v193,
                                                  &v185) )
                          {
                            *v212 = DmaAdapter;
                            DmaAdapter = 0LL;
                            if ( !*(_DWORD *)(a7 + 32) )
                              *(_DWORD *)(a7 + 32) = 2;
                            v50 = 0LL;
                            if ( (_BYTE)v192 )
                              v185 = 1073741846;
                            else
                              v185 = 0;
                          }
                          else
                          {
                            if ( (_BYTE)v193 )
                            {
                              if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                              {
                                CmpAttachToRegistryProcess(a7 + 168, v47, v48, v49);
                                *(_DWORD *)(a7 + 160) |= 1u;
                              }
                              v50 = (void *)CmpConstructName(v11);
                            }
                            else
                            {
                              v50 = v189;
                            }
                            CmpRecordParseFailure(a7, 15584, v185);
                          }
                          HIBYTE(v193) = 0;
                          if ( !v195 )
                            goto LABEL_67;
                          goto LABEL_227;
                        }
                        v133 = 15552;
                        if ( KeyBody == -1073741444 )
                          KeyBody = -1073741772;
                        v185 = KeyBody;
                        v134 = KeyBody;
LABEL_255:
                        CmpRecordParseFailure(a7, v133, v134);
                        v50 = v189;
                        v184 = v37;
                        goto LABEL_67;
                      }
                      CmpRecordParseFailure(a7, 15488, v42);
                      v184 = v37;
                    }
                    else
                    {
                      CmpRecordParseFailure(a7, 15424, v41);
                      v184 = v37;
                    }
LABEL_241:
                    v50 = v189;
                    goto LABEL_68;
                  }
                  v133 = 14848;
LABEL_254:
                  v185 = -1073741811;
                  v134 = -1073741811;
                  goto LABEL_255;
                }
                if ( BYTE2(v193) )
                {
                  v133 = 9728;
                  goto LABEL_254;
                }
                if ( CmpIsKeyStackDeleted(*(__int64 *)v191, *(__int64 *)v197)
                  || !CmRmIsKCBVisible(*v200, *(__int64 *)v197) )
                {
                  v133 = 9984;
                  v185 = -1073741772;
                  v134 = -1073741772;
                  goto LABEL_255;
                }
                if ( (*(_DWORD *)(*v200 + 184) & 0x20000) != 0 )
                {
                  v185 = -1073741772;
                  CmpRecordParseFailure(a7, 10240, -1073741772);
                  v184 = v37;
                }
                else
                {
                  if ( (*(_DWORD *)a7 & 1) != 0 )
                  {
                    v203 = (unsigned __int16 *)(v11 + 32);
                    if ( *(PVOID *)(v11 + 32) == CmpMasterHive )
                    {
                      if ( CmpNoMasterCreates )
                      {
                        v11 = BugCheckParameter4;
                        if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
                        {
                          if ( !CmpLoadingSystemHivesActive
                            || (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) != 0x600000
                            || (v160 = CmpGetComponentNameAtIndex((__int64)v219, v38),
                                !(unsigned __int8)CmpWaitForHiveMount(v160, v161, v162, a7 + 136)) )
                          {
                            v133 = 11264;
                            goto LABEL_254;
                          }
                          v159 = 11008;
                          goto LABEL_343;
                        }
                      }
                    }
                    BugCheckParameter2 = CmpGetComponentNameAtIndex((__int64)v219, v38);
                    v83 = CmpDoWritethroughReparse(
                            v11,
                            (__int64)v31,
                            *(__int64 *)v191,
                            1,
                            (PCUNICODE_STRING)BugCheckParameter2,
                            a7,
                            (UNICODE_STRING *)String2);
                    v185 = v83;
                    if ( v83 != -1073741199 )
                    {
                      v134 = v83;
                      v133 = 11392;
                      goto LABEL_255;
                    }
                    if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                    {
                      CmpAttachToRegistryProcess(a7 + 168, v84, v85, v86);
                      *(_DWORD *)(a7 + 160) |= 1u;
                    }
                    v87 = v200;
                    if ( *(_DWORD *)(*v200 + 40) != -1 )
                    {
                      CmpUnlockKcbStack(v31);
                      CmpUnlockKcbStack(*(_QWORD *)v191);
                      CmpLockKcbStackTopExclusiveRestShared(*(_QWORD *)v191);
                      goto LABEL_173;
                    }
                    if ( (unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                            16 * (*(_DWORD *)(a7 + 24) & 2u),
                                            v191[0],
                                            a7,
                                            (_DWORD)v198,
                                            v187,
                                            16 * (*(_DWORD *)(a7 + 24) & 2u),
                                            (*(_DWORD *)(a7 + 24) & 4) != 0,
                                            *(__int64 *)v197,
                                            (__int64)&v185) )
                    {
                      CmpUnlockKcbStack(v31);
                      CmpUnlockKcbStack(*(_QWORD *)v191);
                      if ( v188 )
                      {
                        CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                        v188 = 0;
                      }
                      LOBYTE(v169) = 1;
                      v170 = CmpPromoteKey(*(_QWORD *)v191, 0LL, v169);
                      v185 = v170;
                      if ( v170 < 0 )
                      {
                        if ( v170 == -1073741444 )
                          v170 = -1073741772;
                        v185 = v170;
                        CmpRecordParseFailure(a7, 11776, v170);
                        v50 = v189;
                        v32 = *(int **)v191;
                        goto LABEL_70;
                      }
LABEL_173:
                      CmpLockKcbStackTopExclusiveRestShared(v31);
                      v88 = *(_QWORD *)v197;
                      if ( !CmRmIsKCBVisible(v11, *(__int64 *)v197) )
                      {
                        v185 = -1073741772;
                        CmpRecordParseFailure(a7, 12032, -1073741772);
                        v184 = 1;
                        goto LABEL_192;
                      }
                      if ( CmpIsKeyStackDeleted((__int64)v31, v88) )
                      {
                        v43 = v88;
                        if ( CmpIsKeyStackDeleted(*(__int64 *)v191, v88) || !CmRmIsKCBVisible(*v87, v88) )
                        {
                          v185 = -1073741772;
                          CmpRecordParseFailure(a7, 12288, -1073741772);
                          v184 = 1;
                          goto LABEL_192;
                        }
                        if ( (*(_DWORD *)(*v87 + 184) & 0x20000) != 0 )
                        {
                          v185 = -1073741772;
                          CmpRecordParseFailure(a7, 12544, -1073741772);
                          v184 = 1;
                          goto LABEL_192;
                        }
                        ObjectCreateda = v88;
                        v89 = BugCheckParameter2;
                        Logic = CmpVEExecuteCreateLogic(
                                  *v87,
                                  (_DWORD)String2,
                                  BugCheckParameter2,
                                  (_DWORD)v198,
                                  v187,
                                  16 * (*(_DWORD *)(a7 + 24) & 2u),
                                  ObjectCreateda,
                                  a7,
                                  (__int64)String2);
                        v185 = Logic;
                        if ( Logic == -1073741739 )
                        {
                          *(_DWORD *)a7 |= 0x400u;
                          v185 = -1073741267;
                          CmpRecordParseFailure(a7, 12672, -1073741267);
                          v184 = 1;
                          goto LABEL_192;
                        }
                        if ( Logic != -1073741199 )
                        {
                          CmpRecordParseFailure(a7, 12736, Logic);
                          v184 = 1;
                          goto LABEL_192;
                        }
                        if ( (unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                                16 * (*(_DWORD *)(a7 + 24) & 2u),
                                                v191[0],
                                                a7,
                                                (_DWORD)v198,
                                                v187,
                                                16 * (*(_DWORD *)(a7 + 24) & 2u),
                                                (*(_DWORD *)(a7 + 24) & 4) != 0,
                                                v43,
                                                (__int64)&v185) )
                        {
                          v44 = v187;
                          v91 = CmpCreateKeyBody(
                                  v11,
                                  v187,
                                  a7,
                                  v43,
                                  1,
                                  (__int64)v31,
                                  (ULONG_PTR **)&DmaAdapter,
                                  (bool *)&v192);
                          v185 = v91;
                          if ( v91 < 0 )
                          {
                            CmpRecordParseFailure(a7, 12928, v91);
                            v184 = 1;
                            goto LABEL_192;
                          }
                          v92 = v89;
                          v46 = (struct _ACCESS_STATE *)v198;
                          Child = CmpCreateChild(
                                    v191[0],
                                    (_DWORD)v31,
                                    (_DWORD)v198,
                                    v92,
                                    a7,
                                    8 * (*(_WORD *)(a7 + 24) & 2u),
                                    0,
                                    v43);
                          v185 = Child;
                          if ( Child < 0 )
                          {
                            CmpRecordParseFailure(a7, 12992, Child);
                            v50 = v189;
                            v184 = 1;
                            goto LABEL_67;
                          }
                          *(_DWORD *)(a7 + 32) = 1;
LABEL_184:
                          v184 = 1;
                          goto LABEL_60;
                        }
                        if ( KeGetCurrentThread()->PreviousMode == 1 )
                        {
                          CurrentThreadProcess = PsGetCurrentThreadProcess();
                          ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess);
                          ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
                          SessionId = MmGetSessionIdEx((__int64)CurrentThreadProcess);
                          v32 = *(int **)v191;
                          if ( SessionId != ServerSiloServiceSessionId
                            && (unsigned __int8)CmpCheckKeyOwnerForPca(*(_QWORD *)v191) )
                          {
                            v171 = *v87;
                            LOBYTE(v193) = 1;
                            v50 = (void *)CmpConstructName(v171);
                            goto LABEL_239;
                          }
                        }
                        else
                        {
                          v32 = *(int **)v191;
                        }
                        v50 = v189;
LABEL_239:
                        CmpRecordParseFailure(a7, 12800, v185);
                        v11 = BugCheckParameter4;
                        v184 = 1;
                        goto LABEL_68;
                      }
                      if ( !CmpIsKeyStackSymlink((__int64)v31) || (*(_DWORD *)a7 & 0x200) != 0 )
                      {
                        if ( (*v39 & 0x20000) != 0 )
                        {
                          v185 = -1073741772;
                          CmpRecordParseFailure(a7, 13568, -1073741772);
                          v184 = 1;
                          goto LABEL_192;
                        }
                        if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                        {
                          v175 = String2;
                          v32 = *(int **)v191;
                          v176 = CmpDoWritethroughReparse(
                                   v11,
                                   (__int64)v31,
                                   *(__int64 *)v191,
                                   0,
                                   0LL,
                                   a7,
                                   (UNICODE_STRING *)String2);
                          v185 = v176;
                          if ( v176 == -1073741199 )
                          {
                            v44 = v187;
                            *(_QWORD *)v180 = v198 + 1;
                            v176 = CmpVEExecuteOpenLogic(v11, (_DWORD *)a7, 1, (__int64)v175, v187);
                            v185 = v176;
                            if ( v176 == -1073741199 )
                            {
                              v43 = *(_QWORD *)v197;
                              v178 = CmpCreateKeyBody(
                                       v11,
                                       v44,
                                       a7,
                                       *(__int64 *)v197,
                                       1,
                                       (__int64)v31,
                                       (ULONG_PTR **)&DmaAdapter,
                                       (bool *)&v192);
                              v185 = v178;
                              if ( v178 >= 0 )
                              {
                                v46 = (struct _ACCESS_STATE *)v198;
                                goto LABEL_184;
                              }
                              v173 = v178;
                              v172 = 14016;
LABEL_378:
                              CmpRecordParseFailure(a7, v172, v173);
                              v184 = 1;
                              goto LABEL_192;
                            }
                            v177 = 13952;
                          }
                          else
                          {
                            v177 = 13888;
                          }
                          CmpRecordParseFailure(a7, v177, v176);
                          v184 = 1;
                          goto LABEL_241;
                        }
                        v172 = 13824;
                      }
                      else
                      {
                        if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                        {
                          CmpUnlockKcbStack(*(_QWORD *)v191);
                          if ( v188 )
                          {
                            CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                            v188 = 0;
                          }
                          if ( HIBYTE(v187) )
                          {
                            CmpUnlockHashEntryByKcb(v11);
                            HIBYTE(v187) = 0;
                          }
                          v174 = CmpGetSymbolicLinkTarget(
                                   (__int64)v31,
                                   (__int64)v219,
                                   0,
                                   0,
                                   v88,
                                   a7,
                                   (__int64)&v210,
                                   (__int64)String2,
                                   (ULONG_PTR *)(a7 + 88));
                          v185 = v174;
                          if ( v174 >= 0 )
                          {
                            *(_DWORD *)a7 &= ~8u;
                            if ( !*(_QWORD *)(a7 + 64) && (*(_DWORD *)(*(_QWORD *)v203 + 4152LL) & 1) != 0 )
                              *(_QWORD *)(a7 + 64) = *(_QWORD *)v203;
                            v185 = 260;
                            CmpRecordParseFailure(a7, 13440, 260);
                            v50 = v189;
                          }
                          else
                          {
                            CmpRecordParseFailure(a7, 13312, v174);
                            v50 = v189;
                          }
                          goto LABEL_72;
                        }
                        v172 = 13056;
                      }
                      v185 = -1073741771;
                      v173 = -1073741771;
                      goto LABEL_378;
                    }
                    if ( KeGetCurrentThread()->PreviousMode == 1 )
                    {
                      v163 = PsGetCurrentThreadProcess();
                      v164 = PsGetProcessServerSilo((__int64)v163);
                      v165 = PsGetServerSiloServiceSessionId(v164);
                      v166 = MmGetSessionIdEx((__int64)v163);
                      v32 = *(int **)v191;
                      if ( v166 != v165 && (unsigned __int8)CmpCheckKeyOwnerForPca(*(_QWORD *)v191) )
                      {
                        v167 = *v87;
                        LOBYTE(v193) = 1;
                        v168 = CmpConstructName(v167);
                        v37 = v186;
                        v50 = (void *)v168;
LABEL_356:
                        CmpRecordParseFailure(a7, 11520, v185);
                        v11 = BugCheckParameter4;
                        v184 = v37;
                        goto LABEL_68;
                      }
                      v37 = v186;
                    }
                    else
                    {
                      v32 = *(int **)v191;
                    }
                    v50 = v189;
                    goto LABEL_356;
                  }
                  if ( CmpLoadingSystemHivesActive )
                  {
                    v11 = BugCheckParameter4;
                    if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                      && *(PVOID *)(BugCheckParameter4 + 32) == CmpMasterHive
                      && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000 )
                    {
                      v156 = CmpGetComponentNameAtIndex((__int64)v219, v38);
                      if ( (unsigned __int8)CmpWaitForHiveMount(v156, v157, v158, a7 + 136) )
                      {
                        v159 = 10496;
LABEL_343:
                        *(_DWORD *)a7 |= 0x100u;
                        v185 = 259;
                        CmpRecordParseFailure(a7, v159, 259);
                        v184 = v37;
                        goto LABEL_192;
                      }
                    }
                  }
                  v185 = -1073741772;
                  CmpRecordParseFailure(a7, 10752, -1073741772);
                  v184 = v37;
                }
LABEL_192:
                v50 = v189;
LABEL_67:
                v32 = *(int **)v191;
LABEL_68:
                CmpUnlockKcbStack(v31);
LABEL_69:
                v37 = v184;
LABEL_70:
                if ( v37 )
                  CmpUnlockKcbStack(v32);
LABEL_72:
                if ( v188 )
                  CmpUnlockKcb(*(_QWORD *)(v34 + 8));
                if ( HIBYTE(v193) )
                  CmpUnlockHashEntry(*(PVOID *)(a7 + 48));
                goto LABEL_76;
              }
              CmpUnlockKcbStack(v31);
              CmpUnlockKcbStack(*(_QWORD *)v191);
              CmpLockKcbStackTopExclusiveRestShared(*(_QWORD *)v191);
              CmpLockKcbStackTopExclusiveRestShared(v31);
              v43 = *(_QWORD *)v197;
              if ( CmpIsKeyStackDeleted(*(__int64 *)v191, *(__int64 *)v197) )
              {
                v185 = -1073741772;
                CmpRecordParseFailure(a7, 8960, -1073741772);
                v184 = v37;
                goto LABEL_192;
              }
              if ( (*(_DWORD *)(*v200 + 184) & 0x20000) != 0 )
              {
                v185 = -1073741772;
                CmpRecordParseFailure(a7, 9216, -1073741772);
                v184 = v37;
                goto LABEL_192;
              }
              v139 = CmpGetComponentNameAtIndex((__int64)v219, v38);
              v140 = *(_DWORD *)(a7 + 24);
              v141 = v139;
              if ( (v140 & 2) != 0 )
                v142 = 32;
              else
                v142 = 0;
              if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                       (unsigned int)&v185,
                                       v191[0],
                                       a7,
                                       (_DWORD)v198,
                                       v187,
                                       v142,
                                       (v140 & 4) != 0,
                                       v43,
                                       (__int64)&v185) )
              {
                CmpRecordParseFailure(a7, 9472, v185);
                v184 = v37;
                goto LABEL_192;
              }
              CmpCleanUpKcbCachedSymlink(v11);
              *(_WORD *)(v11 + 186) |= 0x40u;
              v143 = v187;
              *(_DWORD *)(v11 + 100) = -1;
              *(_DWORD *)(v11 + 96) = *(_DWORD *)(a7 + 56);
              v185 = CmpCreateKeyBody(v11, v143, a7, v43, 1, (__int64)v31, (ULONG_PTR **)&DmaAdapter, (bool *)&v192);
              v184 = v37;
              if ( v185 >= 0 )
              {
                if ( !CmpIsKeyStackDeleted((__int64)v31, v43) )
                {
LABEL_274:
                  v44 = v187;
                  v184 = v37;
                  goto LABEL_59;
                }
                v185 = CmpCreateChild(v191[0], (_DWORD)v31, (_DWORD)v198, v141, a7, 64, 0, v43);
                v184 = v37;
                if ( v185 >= 0 )
                {
                  *(_DWORD *)(a7 + 32) = 1;
                  goto LABEL_274;
                }
              }
LABEL_276:
              v50 = v189;
              goto LABEL_67;
            }
            CmpUnlockKcbStack(v31);
            v102 = *(_QWORD *)v191;
            CmpUnlockKcbStack(*(_QWORD *)v191);
            if ( v188 )
              CmpUnlockKcb(*(_QWORD *)(v34 + 8));
            HIBYTE(v193) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
            if ( v188 )
              CmpLockKcbShared(*(_QWORD *)(v34 + 8));
            CmpLockKcbStackTopExclusiveRestShared(v102);
            CmpLockKcbStackTopExclusiveRestShared(v31);
            v203 = (unsigned __int16 *)CmpGetComponentNameAtIndex((__int64)v219, v38);
            v104 = CmpGetComponentHashAtIndex((__int64)v219, v103);
            if ( CmpIsKeyDeletedForKeyBody(v34, 0LL) )
            {
              HiveRootCell = -1073740763;
              v155 = 6656;
              if ( (*(_BYTE *)(v34 + 48) & 1) == 0 )
                HiveRootCell = -1073741444;
            }
            else
            {
              v105 = *(_QWORD *)v197;
              if ( CmpIsKeyStackDeleted(*(__int64 *)v191, *(__int64 *)v197) )
              {
                HiveRootCell = -1073741772;
                v155 = 6912;
              }
              else
              {
                if ( !CmpIsKeyStackDeleted((__int64)v31, v105) )
                {
                  v185 = -1073741790;
                  v155 = 7168;
                  v113 = -1073741790;
                  goto LABEL_324;
                }
                v108 = *v200;
                if ( *(PVOID *)(*v200 + 32) != CmpMasterHive )
                {
                  v185 = -1073741790;
                  v155 = 7424;
                  v113 = -1073741790;
                  goto LABEL_324;
                }
                if ( (*(_DWORD *)(v108 + 184) & 0x20000) == 0 )
                {
                  if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                  {
                    CmpAttachToRegistryProcess(a7 + 168, v108, v106, v107);
                    *(_DWORD *)(a7 + 160) |= 1u;
                  }
                  v109 = *(unsigned int *)(a7 + 40);
                  v110 = (_DWORD *)(a7 + 40);
                  v111 = *(_QWORD *)(a7 + 48);
                  if ( (_DWORD)v109 == -1 )
                  {
                    HiveRootCell = CmpCreateHiveRootCell(v111, a7 + 40);
                    v185 = HiveRootCell;
                    if ( HiveRootCell < 0 )
                    {
                      v155 = 7808;
                      goto LABEL_322;
                    }
                  }
                  else
                  {
                    HiveRootCell = CmpUpdateHiveRootCellFlags(v111, v109);
                    v185 = HiveRootCell;
                    if ( HiveRootCell < 0 )
                    {
                      v155 = 7936;
                      goto LABEL_322;
                    }
                  }
                  *(_WORD *)(v11 + 186) |= 2u;
                  LODWORD(v183) = 0;
                  *(_DWORD *)ObjectCreated = v104;
                  v185 = CmpCreateKeyControlBlock(
                           *(_QWORD *)(a7 + 48),
                           -1,
                           v11,
                           *(_QWORD *)(a7 + 80),
                           1,
                           v203,
                           *(_QWORD *)ObjectCreated,
                           v183,
                           &BugCheckParameter2);
                  *(_WORD *)(v11 + 186) &= ~2u;
                  v113 = v185;
                  if ( v185 < 0 )
                  {
                    v155 = 0x2000;
                    goto LABEL_324;
                  }
                  v114 = v11;
                  v11 = BugCheckParameter2;
                  CmpDereferenceKeyControlBlockUnsafe(v114);
                  CmpUnlockHashEntryByKcb(v114);
                  HIBYTE(v187) = 0;
                  HiveRootCell = CmpStartKcbStackForTopLayerKcb((__int64)v213, v11, v115, v116);
                  v185 = HiveRootCell;
                  if ( HiveRootCell >= 0 )
                  {
                    *(_WORD *)(v114 + 186) |= 2u;
                    CmpLockKcbStackTopExclusiveRestShared(v213);
                    v117 = *(_QWORD *)v197;
                    v118 = v187;
                    *(_WORD *)(v114 + 186) &= ~2u;
                    v195 = 1;
                    v119 = CmpCreateKeyBody(
                             v11,
                             v118,
                             a7,
                             v117,
                             1,
                             (__int64)v213,
                             (ULONG_PTR **)&DmaAdapter,
                             (bool *)&v192);
                    v185 = v119;
                    if ( v119 < 0 )
                    {
                      CmpRecordParseFailure(a7, 8576, v119);
                      v50 = v189;
                      v184 = v186;
                    }
                    else
                    {
                      HvLockHiveFlusherShared(*(_QWORD *)(v114 + 32));
                      HvLockHiveFlusherExclusive(*(_QWORD *)(v11 + 32));
                      v120 = *(_QWORD *)(v11 + 32);
                      v121 = *(_DWORD *)(v120 + 104);
                      if ( (unsigned __int8)HvMarkCellDirty(v120, (unsigned int)*v110, 0LL) )
                      {
                        v185 = CmpCreateChild(
                                 v191[0],
                                 (_DWORD)v31,
                                 (_DWORD)v198,
                                 (_DWORD)v203,
                                 a7,
                                 10,
                                 1,
                                 *(__int64 *)v197);
                        if ( v185 >= 0 )
                        {
                          LOBYTE(v122) = 1;
                          *(_DWORD *)(v11 + 40) = *v110;
                          *(_DWORD *)(CmpGetKeyNodeForKcb(v11, &v207, v122, v123) + 16) = *(_DWORD *)(v114 + 40);
                          ++*(_QWORD *)(v11 + 304);
                          CmpRebuildKcbCacheFromNode(v11);
                          CmpReleaseKeyNodeForKcb(v11, &v207);
                          if ( !v121 )
                            HvResetDirtyData(*(_QWORD *)(v11 + 32));
                          HvUnlockHiveFlusherExclusive(*(_QWORD *)(v11 + 32));
                          HvUnlockHiveFlusherShared(*(_QWORD *)(v114 + 32));
                          *(_WORD *)(v114 + 8) |= 8u;
                          CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v11);
                          *(_QWORD *)(v114 + 104) = v11;
                          CmpUnlockHashEntry(*(PVOID *)(a7 + 48));
                          v43 = *(_QWORD *)v197;
                          v44 = v187;
                          v184 = v186;
                          *(_DWORD *)(a7 + 32) = 1;
                          goto LABEL_59;
                        }
                      }
                      else
                      {
                        v185 = -1073741443;
                        CmpRecordParseFailure(a7, 8704, -1073741443);
                      }
                      HvUnlockHiveFlusherExclusive(*(_QWORD *)(v11 + 32));
                      HvUnlockHiveFlusherShared(*(_QWORD *)(v114 + 32));
                      v50 = v189;
                    }
LABEL_227:
                    CmpUnlockKcbStack(v213);
                    goto LABEL_67;
                  }
                  v155 = 8448;
LABEL_322:
                  v113 = HiveRootCell;
LABEL_324:
                  CmpRecordParseFailure(a7, v155, v113);
                  v184 = v186;
                  goto LABEL_192;
                }
                HiveRootCell = -1073741772;
                v155 = 7680;
              }
            }
            v185 = HiveRootCell;
            goto LABEL_322;
          }
          CmpRecordParseFailure(a7, 3584, v30);
        }
      }
      else
      {
        v185 = -1073741790;
        CmpRecordParseFailure(a7, 2560, -1073741790);
      }
    }
    else
    {
      CmpRecordParseFailure(a7, 2496, v185);
    }
LABEL_107:
    v50 = v189;
LABEL_76:
    if ( HIBYTE(v187) )
      CmpUnlockHashEntryByKcb(v11);
    goto LABEL_78;
  }
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive(v19, v16);
  else
    CmpLockRegistry();
  v64 = *(_QWORD *)(v17 + 296);
  LOBYTE(v14) = 1;
  v65 = 0;
  v190 = 1;
  if ( (v64 & 1) != 0 )
  {
    v65 = 1;
    v64 &= ~1uLL;
  }
  if ( !v64 || v65 || !RtlPrefixUnicodeString((PCUNICODE_STRING)v64, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(v17);
    v17 = 0LL;
    v205 = 0LL;
    CmpUnlockRegistry(v147, v146);
    v14 = v194[0];
    v190 = 0;
LABEL_127:
    v11 = BugCheckParameter4;
    goto LABEL_11;
  }
  v66 = String2->Length - *(_WORD *)v64;
  v67 = String2->MaximumLength - *(_WORD *)v64;
  v68 = &String2->Buffer[(unsigned __int64)*(unsigned __int16 *)v64 >> 1];
  v69 = v66;
  v204.m128i_i16[0] = v66;
  v70 = v68;
  v204.m128i_i64[1] = (__int64)v68;
  v71 = v67;
  v204.m128i_i16[1] = v67;
  if ( v66 )
  {
    do
    {
      if ( *v70 != 92 )
        break;
      ++v70;
      v71 -= 2;
      v69 -= 2;
    }
    while ( v69 );
    v204.m128i_i64[1] = (__int64)v70;
    v204.m128i_i16[0] = v69;
    v204.m128i_i16[1] = v71;
  }
  v72 = ((*(_DWORD *)(v17 + 8) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) != 0 && !v69 )
  {
    v94 = *(_QWORD *)(v17 + 80);
    v95 = *(unsigned __int16 *)(v94 + 24);
    v36 = (*(_DWORD *)v94 & 1) == 0;
    v96 = *(unsigned __int16 *)(v94 + 24);
    if ( v36 )
    {
      v204.m128i_i16[0] = v95 + v66;
      v98 = (__int64)&v68[-((unsigned __int64)v95 >> 1)];
      v204.m128i_i16[1] = v95 + v67;
    }
    else
    {
      v97 = 2 * v95;
      v98 = (__int64)&v68[-v96];
      v204.m128i_i16[1] = v67 + v97;
      v204.m128i_i16[0] = v66 + v97;
    }
    v204.m128i_i64[1] = v98;
    v12 = 1;
    --v72;
  }
  v73 = CmpComputeComponentHashes(&v204, v194, (__int64)v219);
  v185 = v73;
  if ( v73 >= 0 )
  {
    v14 = v194[0];
    if ( (unsigned int)(v194[0] + v72) > 0x20 )
    {
      v185 = -1073741811;
      v144 = 768;
      v145 = -1073741811;
    }
    else
    {
      v74 = CmpValidateComponents(v194[0], (__int64)v219);
      v185 = v74;
      if ( v74 >= 0 )
      {
        if ( v12 == v14 )
        {
          CmpLockHashEntrySharedByKcb(v17);
          v75 = 1;
          HIBYTE(v192) = 1;
        }
        else
        {
          v75 = 0;
        }
        CmpLockKcbShared(v17);
        if ( (unsigned __int8)CmpIsKeyDeleted(v17, 0LL) || (*(_DWORD *)(v17 + 8) & 0x40000) != 0 )
        {
          CmpUnlockKcb(v17);
          if ( v75 )
            CmpUnlockHashEntryByKcb(v17);
          CmpDereferenceKeyControlBlock(v17);
          v17 = 0LL;
          v205 = 0LL;
          v12 = 0;
          v204 = *(__m128i *)v200;
          CmpCleanupPathInfo((__int64)v219);
          memset(v219, 0, 0xA8uLL);
          HIBYTE(v192) = 0;
        }
        else
        {
          CmpUnlockKcb(v17);
        }
        goto LABEL_127;
      }
      v145 = v74;
      v144 = 1024;
    }
    CmpRecordParseFailure(a7, v144, v145);
    v11 = BugCheckParameter4;
    v50 = v189;
LABEL_81:
    LOBYTE(v14) = v190;
    goto LABEL_82;
  }
  CmpRecordParseFailure(a7, 512, v73);
  v11 = BugCheckParameter4;
  v50 = v189;
LABEL_82:
  CmpCleanupKcbStack(v215);
  CmpCleanupKcbStack(v217);
  CmpCleanupKcbStack(v213);
  v51 = *(_QWORD *)v208;
  if ( *(_QWORD *)v208 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v11);
    v52 = v51;
  }
  else
  {
    if ( !v11 )
      goto LABEL_86;
    v52 = v11;
  }
  CmpDereferenceKeyControlBlock(v52);
LABEL_86:
  if ( v17 )
    CmpDereferenceKeyControlBlock(v17);
  v53 = *(_DWORD *)(a7 + 100);
  if ( v53 && (v53 & 2) != 0 )
  {
    LOBYTE(v179) = 1;
    CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, *(_QWORD *)(a7 + 112), &v210, 0LL, v179, *(_QWORD *)v180);
    *(_DWORD *)(a7 + 100) &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v210);
  if ( (_BYTE)v14 )
    CmpUnlockRegistry(v55, v54);
  if ( (_BYTE)v193 )
  {
    if ( !v50 )
      goto LABEL_94;
    if ( (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(a7, v50);
  }
  if ( v50 )
    CmpFreeTransientPoolWithTag(v50, 0x624E4D43u);
LABEL_94:
  if ( (*(_DWORD *)(a7 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(a7 + 168, v54, v56, v57);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpCleanupPathInfo((__int64)v219);
  return (unsigned int)v185;
}
