/*
 * XREFs of SeSubProcessToken @ 0x1406F7240
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406F6E68 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140206730 (SepCreateAccessStateFromSubjectContext.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     SepSetTrustLevelForProcessToken @ 0x140339568 (SepSetTrustLevelForProcessToken.c)
 *     SepMandatorySubProcessToken @ 0x1403395EC (SepMandatorySubProcessToken.c)
 *     SepDesktopAppxSubProcessToken @ 0x140339778 (SepDesktopAppxSubProcessToken.c)
 *     SepSetTokenBnoIsolation @ 0x140339BA0 (SepSetTokenBnoIsolation.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140339C30 (SeTokenGetNoChildProcessRestricted.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140591698 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140591890 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405EE698 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     PsReferenceEffectiveToken @ 0x140609900 (PsReferenceEffectiveToken.c)
 *     SeCreateAccessState @ 0x140613740 (SeCreateAccessState.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140613AC0 (SepAppendAceToTokenObjectAcl.c)
 *     SepSetTokenLowboxNumber @ 0x14067833C (SepSetTokenLowboxNumber.c)
 *     SepSetProcessUniqueAttribute @ 0x1406F76FC (SepSetProcessUniqueAttribute.c)
 *     SepSetTokenSessionById @ 0x1406F7AEC (SepSetTokenSessionById.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14071BA00 (EtwTimLogProhibitChildProcessCreation.c)
 *     SepAddTokenOriginClaim @ 0x14091E450 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        PADAPTER_OBJECT *a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        char *a11)
{
  __int64 v15; // r14
  int inserted; // edi
  int v17; // ecx
  PADAPTER_OBJECT v18; // rcx
  PADAPTER_OBJECT *v19; // rcx
  char *v20; // rcx
  unsigned int DmaOperations; // eax
  unsigned int v23; // r14d
  bool v24; // bl
  struct _DMA_ADAPTER *v25; // rax
  struct _DMA_ADAPTER *v26; // rbx
  int v27; // eax
  char v28; // [rsp+40h] [rbp-C0h] BYREF
  bool v29; // [rsp+41h] [rbp-BFh] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-B8h] BYREF
  bool v31; // [rsp+50h] [rbp-B0h] BYREF
  bool v32; // [rsp+51h] [rbp-AFh] BYREF
  char v33; // [rsp+52h] [rbp-AEh] BYREF
  _BYTE v34[9]; // [rsp+53h] [rbp-ADh] BYREF
  int v35; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  PADAPTER_OBJECT *v38; // [rsp+70h] [rbp-90h]
  char *v39; // [rsp+78h] [rbp-88h]
  __int128 v40; // [rsp+80h] [rbp-80h] BYREF
  PADAPTER_OBJECT v41; // [rsp+90h] [rbp-70h]
  struct _LIST_ENTRY *Flink; // [rsp+98h] [rbp-68h]
  __int128 v43; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-50h]
  __int128 v45; // [rsp+C0h] [rbp-40h]
  struct _ACCESS_STATE v46; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v47[28]; // [rsp+170h] [rbp+70h] BYREF

  v38 = a3;
  v37 = a2;
  v39 = a11;
  DmaAdapter = 0LL;
  HIDWORD(v40) = 0;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  memset(&v46, 0, sizeof(v46));
  memset(v47, 0, sizeof(v47));
  *a3 = 0LL;
  v34[2] = 0;
  *(_WORD *)a11 = 0;
  a11[2] = 0;
  v28 = 0;
  v33 = 0;
  *(_WORD *)v34 = 0;
  v36 = 0LL;
  v35 = 0;
  *(_DWORD *)&v34[5] = 0;
  v29 = 0;
  v32 = 0;
  v31 = 0;
  SeTokenGetNoChildProcessRestricted(a2, &v29, &v32, &v31);
  if ( v31 || v29 )
  {
    inserted = 0;
    v23 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      v25 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), &v34[5], &v34[2], &v35, 0LL);
      v26 = v25;
      if ( *(_DWORD *)&v34[5] == 2 && v35 < 2
        || (v23 = SeTokenIsNoChildProcessRestrictionEnforced((__int64)v25) ? 0xC000049D : 0, *(_DWORD *)&v34[5] != 1) )
      {
        if ( v26 )
          HalPutDmaAdapter(v26);
      }
      else
      {
        ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v26);
      }
    }
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v23;
    if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
      inserted = *(_QWORD *)(a1 + 2240) != 0LL ? inserted : 0;
    if ( inserted < 0 )
    {
      if ( v32 && *(_DWORD *)(a6 + 12) )
        inserted = 0;
      if ( inserted < 0 )
      {
        v24 = v29;
        EtwTimLogProhibitChildProcessCreation(
          (unsigned int)v29 + 1,
          *(_QWORD *)(a6 + 16),
          (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
          (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL));
        if ( v24 )
        {
LABEL_22:
          if ( inserted >= 0 )
            goto LABEL_23;
          goto LABEL_59;
        }
      }
    }
  }
  *((_QWORD *)&v43 + 1) = 0LL;
  DWORD2(v44) = 0;
  *(_QWORD *)&v44 = 0LL;
  v15 = v37;
  LODWORD(v43) = 48;
  v45 = 0LL;
  inserted = SepDuplicateToken(v37, (int)&v43, 0, 1, 0, 0, 1, &DmaAdapter);
  if ( inserted < 0 )
  {
LABEL_52:
    DmaAdapter = 0LL;
    goto LABEL_22;
  }
  v17 = (int)DmaAdapter;
  if ( ((__int64)DmaAdapter[12].DmaOperations & 0x4000) != 0 )
  {
    DmaOperations = (unsigned int)DmaAdapter[7].DmaOperations;
    if ( DmaOperations != a5 )
    {
      SepDereferenceLowBoxNumberEntry(DmaOperations, (__int64)DmaAdapter[67].DmaOperations);
      DmaAdapter[67].DmaOperations = 0LL;
      SepSetTokenSessionById((_DWORD)DmaAdapter, a5, 0, 0, 0LL);
      LODWORD(DmaAdapter[7].DmaOperations) = a5;
      v27 = SepSetTokenLowboxNumber((__int64)DmaAdapter, *(_QWORD *)&DmaAdapter[49].Version);
      inserted = v27;
      if ( v27 < 0 )
        goto LABEL_59;
      v17 = (int)DmaAdapter;
    }
  }
  SepSetTokenSessionById(v17, a5, 0, 0, 0LL);
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
    goto LABEL_59;
  inserted = SepDesktopAppxSubProcessToken((PERESOURCE *)DmaAdapter, a1, *(_DWORD *)(a6 + 4), &v33, v34);
  if ( inserted < 0 )
    goto LABEL_59;
  inserted = SepMandatorySubProcessToken((_DWORD *)(v15 & -(__int64)((a4 & 2) != 0)), (__int64)DmaAdapter, a1, &v36);
  if ( inserted < 0 )
    goto LABEL_59;
  inserted = SepSetTrustLevelForProcessToken((__int64)DmaAdapter, a1, &v28);
  if ( inserted < 0 )
    goto LABEL_59;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    inserted = SepSetProcessUniqueAttribute(DmaAdapter);
    if ( inserted < 0 )
      goto LABEL_59;
  }
  v18 = DmaAdapter;
  if ( ((__int64)DmaAdapter[12].DmaOperations & 0x4000) != 0 && (a7 & 1) != 0 )
  {
    inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)DmaAdapter, a7);
    if ( inserted < 0 )
      goto LABEL_59;
    v18 = DmaAdapter;
  }
  if ( a8 )
  {
    SepAddTokenOriginClaim(a8, a9, v18);
    v18 = DmaAdapter;
  }
  if ( !a10 )
  {
LABEL_16:
    if ( (a4 & 2) == 0 || v36 )
      v28 = 1;
    if ( v28 )
    {
      v41 = v18;
      *(_QWORD *)&v40 = 0LL;
      DWORD2(v40) = 0;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      SepCreateAccessStateFromSubjectContext(&v40, &v46, v47, 0, 0LL);
    }
    else
    {
      SeCreateAccessState((int)&v46, (int)v47, 0, 0LL);
    }
    v34[1] = 1;
    inserted = ObInsertObjectEx(DmaAdapter, &v46, 0, 0, 0, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      SepAppendAceToTokenObjectAcl((__int64)DmaAdapter, 8, SeAliasAdminsSid);
      v19 = v38;
      BYTE4(DmaAdapter[12].DmaOperations) = a4 & 1;
      *v19 = DmaAdapter;
      v20 = v39;
      *v39 = v28;
      v20[1] = v33;
      v20[2] = v34[0];
      goto LABEL_22;
    }
    goto LABEL_52;
  }
  inserted = SepSetTokenBnoIsolation(
               (__int64)v18,
               *(_BYTE *)(a10 + 32),
               (__int128 *)a10,
               *(_DWORD *)(a10 + 16),
               *(_QWORD *)(a10 + 24));
  if ( inserted >= 0 )
  {
    v18 = DmaAdapter;
    goto LABEL_16;
  }
LABEL_59:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_23:
  if ( v34[1] )
  {
    SepDeleteAccessState((__int64)&v46);
    if ( !v28 )
      SeReleaseSubjectContext(&v46.SubjectSecurityContext);
  }
  return (unsigned int)inserted;
}
