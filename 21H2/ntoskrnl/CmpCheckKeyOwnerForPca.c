/*
 * XREFs of CmpCheckKeyOwnerForPca @ 0x1406793E4
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140679440 (RtlGetOwnerSecurityDescriptor.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140721BF0 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

BOOLEAN __fastcall CmpCheckKeyOwnerForPca(__int64 a1, __int64 a2)
{
  __int64 SecurityCacheEntryForKcbStack; // rax
  BOOLEAN OwnerDefaulted; // [rsp+40h] [rbp+18h] BYREF
  PSID Owner; // [rsp+48h] [rbp+20h] BYREF

  Owner = 0LL;
  if ( CmpTrustedInstallerSid
    && (SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL),
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
