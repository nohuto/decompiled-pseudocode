/*
 * XREFs of RtlSidHashInitialize @ 0x14020DF80
 * Callers:
 *     SepTokenFromAccessInformation @ 0x140267814 (SepTokenFromAccessInformation.c)
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     SepCopyTokenAccessInformation @ 0x1405D657C (SepCopyTokenAccessInformation.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     SepSetTokenCapabilities @ 0x1406A97C8 (SepSetTokenCapabilities.c)
 *     SepCreateClaimAttributes @ 0x1406A9F58 (SepCreateClaimAttributes.c)
 *     CmpBuildAdminInformation @ 0x1406C34D4 (CmpBuildAdminInformation.c)
 *     SepDuplicateClaimAttributes @ 0x1409278A0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

NTSTATUS __cdecl RtlSidHashInitialize(
        PSID_AND_ATTRIBUTES SidAttr,
        ULONG SidCount,
        PSID_AND_ATTRIBUTES_HASH SidAttrHash)
{
  __int64 v6; // rax
  __int64 v7; // r9
  _BYTE *Sid; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx

  if ( !SidAttrHash )
    return -1073741811;
  memset(SidAttrHash, 0, sizeof(_SID_AND_ATTRIBUTES_HASH));
  if ( SidAttr && SidCount )
  {
    SidAttrHash->SidAttr = SidAttr;
    SidAttrHash->SidCount = SidCount;
    if ( SidCount > 0x40 )
      SidCount = 64;
    v6 = 1LL;
    v7 = SidCount;
    do
    {
      Sid = SidAttr->Sid;
      ++SidAttr;
      v9 = (unsigned __int8)Sid[4 * (unsigned __int8)Sid[1] + 4];
      v10 = Sid[4 * (unsigned __int8)Sid[1] + 4] & 0xF;
      SidAttrHash->Hash[v10] |= v6;
      SidAttrHash->Hash[((unsigned __int64)v9 >> 4) + 16] |= v6;
      v6 = __ROL8__(v6, 1);
      --v7;
    }
    while ( v7 );
  }
  return 0;
}
