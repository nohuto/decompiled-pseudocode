/*
 * XREFs of CmpCheckKeyOwnerForPca @ 0x1406ED54C
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 * Callees:
 *     RtlEqualSid @ 0x140298E50 (RtlEqualSid.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405E76D4 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406ED5B0 (RtlGetOwnerSecurityDescriptor.c)
 */

BOOLEAN __fastcall CmpCheckKeyOwnerForPca(__int64 a1)
{
  __int64 SecurityCacheEntryForKcbStack; // rax
  BOOLEAN OwnerDefaulted; // [rsp+38h] [rbp+10h] BYREF
  PSID Owner; // [rsp+40h] [rbp+18h] BYREF

  Owner = 0LL;
  if ( CmpTrustedInstallerSid
    && (SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, 0LL),
        RtlGetOwnerSecurityDescriptor(
          (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
          &Owner,
          &OwnerDefaulted) >= 0)
    && Owner )
  {
    return RtlEqualSid(CmpTrustedInstallerSid, Owner);
  }
  else
  {
    return 0;
  }
}
