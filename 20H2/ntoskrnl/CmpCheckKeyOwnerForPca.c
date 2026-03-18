/*
 * XREFs of CmpCheckKeyOwnerForPca @ 0x140711958
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 * Callees:
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405F3B08 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1407119B0 (RtlGetOwnerSecurityDescriptor.c)
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
