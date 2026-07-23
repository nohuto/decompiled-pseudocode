/*
 * XREFs of SeCopyClientToken @ 0x1406E2A38
 * Callers:
 *     PsImpersonateClient @ 0x140681160 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x140682590 (SepCreateClientSecurityEx.c)
 *     SepCopyClientTokenAndSetSilo @ 0x140919398 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     SepSetTokenTrust @ 0x140667740 (SepSetTokenTrust.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140668DA0 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
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
  PADAPTER_OBJECT v8; // rcx
  _WORD *v10; // r8
  int appended; // eax
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v13[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+68h] [rbp-18h]

  v13[0] = 48LL;
  DmaAdapter = 0LL;
  memset(&v13[1], 0, 24);
  v14 = 0LL;
  inserted = SepDuplicateToken(a1, (int)v13, 0, 2, a2, 0, 0, &DmaAdapter);
  if ( inserted < 0 )
    goto LABEL_13;
  if ( a4 )
    inserted = SepSetTokenTrust((__int64)DmaAdapter, a5);
  if ( inserted < 0 )
    goto LABEL_13;
  inserted = ObInsertObjectEx(DmaAdapter, 0LL, 0, 0, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_13;
  v8 = DmaAdapter;
  if ( ((__int64)DmaAdapter[12].DmaOperations & 0x4000) != 0 )
  {
    v10 = *(_WORD **)&DmaAdapter[49].Version;
    if ( v10 )
    {
      appended = SepAppendAceToTokenObjectAcl((__int64)DmaAdapter, 0xF01FFu, v10);
      v8 = DmaAdapter;
      inserted = appended;
      if ( appended >= 0 )
        goto LABEL_8;
      HalPutDmaAdapter(DmaAdapter);
      v8 = DmaAdapter;
    }
  }
  if ( inserted < 0 )
  {
LABEL_13:
    *a6 = 0LL;
    return (unsigned int)inserted;
  }
LABEL_8:
  SepAppendAceToTokenObjectAcl((__int64)v8, 8u, SeAliasAdminsSid);
  *a6 = DmaAdapter;
  return (unsigned int)inserted;
}
