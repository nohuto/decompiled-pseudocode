/*
 * XREFs of SeCopyClientToken @ 0x1406BA08C
 * Callers:
 *     PsImpersonateClient @ 0x140607260 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x140620580 (SepCreateClientSecurityEx.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091F008 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     SepFinalizeTokenAcls @ 0x1405CDDB0 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     SepSetTokenTrust @ 0x14067EF50 (SepSetTokenTrust.c)
 */

__int64 __fastcall SeCopyClientToken(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        unsigned __int8 *a5,
        PADAPTER_OBJECT *a6)
{
  int inserted; // ebx
  _WORD *v8; // r8
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v12; // [rsp+68h] [rbp-18h]

  v11[0] = 48LL;
  DmaAdapter = 0LL;
  memset(&v11[1], 0, 24);
  v12 = 0LL;
  inserted = SepDuplicateToken(a1, (int)v11, 0, 2, a2, 0, 0, &DmaAdapter);
  if ( inserted < 0 )
    goto LABEL_15;
  if ( a4 )
    inserted = SepSetTokenTrust((__int64)DmaAdapter, a5);
  if ( inserted < 0 )
    goto LABEL_15;
  inserted = ObInsertObjectEx(DmaAdapter, 0LL, 0, 0, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_15;
  if ( ((__int64)DmaAdapter[12].DmaOperations & 0x4000) == 0 || (v8 = *(_WORD **)&DmaAdapter[49].Version) == 0LL )
  {
LABEL_10:
    if ( inserted >= 0 )
      goto LABEL_11;
LABEL_15:
    *a6 = 0LL;
    return (unsigned int)inserted;
  }
  inserted = SepAppendAceToTokenObjectAcl((__int64)DmaAdapter, 0xF01FFu, v8);
  if ( inserted < 0 )
  {
    HalPutDmaAdapter(DmaAdapter);
    goto LABEL_10;
  }
LABEL_11:
  if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
    SepFinalizeTokenAcls(DmaAdapter);
  else
    SepAppendAceToTokenObjectAcl((__int64)DmaAdapter, 8u, SeAliasAdminsSid);
  *a6 = DmaAdapter;
  return (unsigned int)inserted;
}
