/*
 * XREFs of SeSubProcessToken @ 0x14068F0A8
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14068EDF8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140210E90 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140211030 (SepCreateAccessStateFromSubjectContext.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1402E2248 (SeTokenGetNoChildProcessRestricted.c)
 *     SepSetTokenBnoIsolation @ 0x1402E22E4 (SepSetTokenBnoIsolation.c)
 *     SepSetTrustLevelForProcessToken @ 0x1402E3768 (SepSetTrustLevelForProcessToken.c)
 *     SepMandatorySubProcessToken @ 0x1402E37EC (SepMandatorySubProcessToken.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402E3978 (SepDesktopAppxSubProcessToken.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     memset @ 0x140411300 (memset.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140595828 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140595A20 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepFinalizeTokenAcls @ 0x1405CDDB0 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 *     SeCreateAccessState @ 0x1405FDD40 (SeCreateAccessState.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x14061FA40 (PsReferenceEffectiveToken.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14068D15C (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x14068DF6C (SepSetTokenLowboxNumber.c)
 *     SepSetTokenSessionById @ 0x14068F030 (SepSetTokenSessionById.c)
 *     SepSetProcessUniqueAttribute @ 0x14068F688 (SepSetProcessUniqueAttribute.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14072B81C (EtwTimLogProhibitChildProcessCreation.c)
 *     SepAddTokenOriginClaim @ 0x140925380 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        PADAPTER_OBJECT *a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        _BYTE *a11)
{
  _BYTE *v11; // r14
  unsigned int v16; // r14d
  struct _DMA_ADAPTER *v17; // rax
  struct _DMA_ADAPTER *v18; // rbx
  int inserted; // edi
  bool v20; // bl
  PADAPTER_OBJECT v21; // rcx
  unsigned int DmaOperations; // eax
  PADAPTER_OBJECT v23; // rcx
  PADAPTER_OBJECT *v24; // rcx
  char v26; // [rsp+40h] [rbp-C0h] BYREF
  bool v27; // [rsp+41h] [rbp-BFh] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-B8h] BYREF
  bool v29; // [rsp+50h] [rbp-B0h] BYREF
  bool v30; // [rsp+51h] [rbp-AFh] BYREF
  char v31; // [rsp+52h] [rbp-AEh] BYREF
  char v32; // [rsp+53h] [rbp-ADh] BYREF
  char v33; // [rsp+54h] [rbp-ACh]
  bool v34; // [rsp+55h] [rbp-ABh] BYREF
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  PADAPTER_OBJECT *v41; // [rsp+80h] [rbp-80h]
  __int128 v42; // [rsp+88h] [rbp-78h] BYREF
  PADAPTER_OBJECT v43; // [rsp+98h] [rbp-68h]
  struct _LIST_ENTRY *Flink; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-48h]
  __int128 v47; // [rsp+C8h] [rbp-38h]
  struct _ACCESS_STATE v48; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v49[28]; // [rsp+180h] [rbp+80h] BYREF

  v11 = a11;
  v40 = a8;
  v41 = a3;
  v38 = a2;
  DmaAdapter = 0LL;
  HIDWORD(v42) = 0;
  v37 = (__int64)a11;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  memset(&v48, 0, sizeof(v48));
  memset(v49, 0, sizeof(v49));
  *a3 = 0LL;
  *(_WORD *)a11 = 0;
  a11[2] = 0;
  v34 = 0;
  v36 = 0;
  v35 = 0;
  v27 = 0;
  v30 = 0;
  v29 = 0;
  v26 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v39 = 0LL;
  SeTokenGetNoChildProcessRestricted(a2, &v27, &v30, &v29);
  if ( v27 || v29 )
  {
    v16 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      v17 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), &v35, &v34, &v36, 0LL);
      v18 = v17;
      if ( v35 == 2 && v36 < 2
        || (v16 = SeTokenIsNoChildProcessRestrictionEnforced((__int64)v17) ? 0xC000049D : 0, v35 != 1) )
      {
        if ( v18 )
          HalPutDmaAdapter(v18);
      }
      else
      {
        ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v18);
      }
    }
    inserted = 0;
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v16;
    if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
      inserted = *(_QWORD *)(a1 + 2240) != 0LL ? inserted : 0;
    if ( inserted >= 0 )
      goto LABEL_23;
    if ( v30 && *(_DWORD *)(a6 + 12) )
      inserted = 0;
    if ( inserted >= 0 )
    {
LABEL_23:
      v11 = (_BYTE *)v37;
    }
    else
    {
      v20 = v27;
      EtwTimLogProhibitChildProcessCreation(
        (unsigned int)v27 + 1,
        *(_QWORD *)(a6 + 16),
        (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
        (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL));
      if ( v20 )
        goto LABEL_57;
      v11 = (_BYTE *)v37;
    }
  }
  LODWORD(v45) = 48;
  *((_QWORD *)&v45 + 1) = 0LL;
  DWORD2(v46) = 0;
  *(_QWORD *)&v46 = 0LL;
  v47 = 0LL;
  inserted = SepDuplicateToken(v38, (int)&v45, 0, 1, 0, 0, 1, &DmaAdapter);
  if ( inserted < 0 )
    goto LABEL_22;
  v21 = DmaAdapter;
  if ( ((__int64)DmaAdapter[12].DmaOperations & 0x4000) != 0 )
  {
    DmaOperations = (unsigned int)DmaAdapter[7].DmaOperations;
    if ( DmaOperations != a5 )
    {
      SepDereferenceLowBoxNumberEntry(DmaOperations, (__int64)DmaAdapter[67].DmaOperations);
      DmaAdapter[67].DmaOperations = 0LL;
      SepSetTokenSessionById((__int64)DmaAdapter, a5, 0, 0LL, 0LL);
      LODWORD(DmaAdapter[7].DmaOperations) = a5;
      inserted = SepSetTokenLowboxNumber((__int64)DmaAdapter, *(_QWORD *)&DmaAdapter[49].Version);
      if ( inserted < 0 )
        goto LABEL_58;
      v21 = DmaAdapter;
    }
  }
  SepSetTokenSessionById((__int64)v21, a5, 0, 0LL, 0LL);
  LODWORD(DmaAdapter[7].DmaOperations) = a5;
  LODWORD(DmaAdapter[12].DmaOperations) &= ~0x200000u;
  if ( (*(_DWORD *)a6 & 1) != 0 )
  {
    LODWORD(DmaAdapter[12].DmaOperations) |= 0x80000u;
    if ( (*(_DWORD *)a6 & 4) != 0 )
      LODWORD(DmaAdapter[12].DmaOperations) |= 0x100000u;
  }
  inserted = SepSetTokenBnoIsolation((__int64)DmaAdapter, 0, 0LL, 0, 0LL);
  if ( inserted < 0 )
    goto LABEL_58;
  inserted = SepDesktopAppxSubProcessToken((PERESOURCE *)DmaAdapter, a1, *(_DWORD *)(a6 + 4), &v31, &v32);
  if ( inserted < 0 )
    goto LABEL_58;
  inserted = SepMandatorySubProcessToken((_DWORD *)(v38 & -(__int64)((a4 & 2) != 0)), (__int64)DmaAdapter, a1, &v39);
  if ( inserted < 0 )
    goto LABEL_58;
  inserted = SepSetTrustLevelForProcessToken((__int64)DmaAdapter, a1, &v26);
  if ( inserted < 0 )
    goto LABEL_58;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    inserted = SepSetProcessUniqueAttribute(DmaAdapter);
    if ( inserted < 0 )
      goto LABEL_58;
  }
  v23 = DmaAdapter;
  if ( ((__int64)DmaAdapter[12].DmaOperations & 0x4000) != 0 && (a7 & 1) != 0 )
  {
    inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)DmaAdapter, a7);
    if ( inserted < 0 )
      goto LABEL_58;
    v23 = DmaAdapter;
  }
  if ( v40 )
  {
    SepAddTokenOriginClaim(v40, a9, v23);
    v23 = DmaAdapter;
  }
  if ( !a10 )
  {
LABEL_46:
    if ( (a4 & 2) == 0 || v39 )
      v26 = 1;
    if ( v26 )
    {
      v43 = v23;
      *(_QWORD *)&v42 = 0LL;
      DWORD2(v42) = 0;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      SepCreateAccessStateFromSubjectContext(&v42, &v48, v49, 0, 0LL);
    }
    else
    {
      SeCreateAccessState((int)&v48, (int)v49, 0, 0LL);
    }
    v33 = 1;
    inserted = ObInsertObjectEx(DmaAdapter, &v48, 0, 0, 0, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
        SepFinalizeTokenAcls(DmaAdapter);
      else
        SepAppendAceToTokenObjectAcl((__int64)DmaAdapter, 8u, SeAliasAdminsSid);
      v24 = v41;
      BYTE4(DmaAdapter[12].DmaOperations) = a4 & 1;
      *v24 = DmaAdapter;
      *v11 = v26;
      v11[1] = v31;
      v11[2] = v32;
LABEL_57:
      if ( inserted >= 0 )
        goto LABEL_60;
      goto LABEL_58;
    }
LABEL_22:
    DmaAdapter = 0LL;
    goto LABEL_57;
  }
  inserted = SepSetTokenBnoIsolation(
               (__int64)v23,
               *(_BYTE *)(a10 + 32),
               (__int128 *)a10,
               *(_DWORD *)(a10 + 16),
               *(_QWORD *)(a10 + 24));
  if ( inserted >= 0 )
  {
    v23 = DmaAdapter;
    goto LABEL_46;
  }
LABEL_58:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_60:
  if ( v33 )
  {
    SepDeleteAccessState((__int64)&v48);
    if ( !v26 )
      SeReleaseSubjectContext(&v48.SubjectSecurityContext);
  }
  return (unsigned int)inserted;
}
