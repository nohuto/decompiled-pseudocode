/*
 * XREFs of ZwDuplicateToken @ 0x1403F3E00
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1402FEA00 (RtlCheckTokenMembershipEx.c)
 *     RtlIsSandboxedTokenHandle @ 0x14035FF90 (RtlIsSandboxedTokenHandle.c)
 *     RtlCheckTokenCapability @ 0x1405813C0 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1407001F8 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x140911938 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExistingTokenHandle);
}
