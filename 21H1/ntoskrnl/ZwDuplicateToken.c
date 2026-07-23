/*
 * XREFs of ZwDuplicateToken @ 0x1403F2B70
 * Callers:
 *     RtlIsSandboxedTokenHandle @ 0x140322680 (RtlIsSandboxedTokenHandle.c)
 *     RtlCheckTokenMembershipEx @ 0x14035C130 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140580C40 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1406DD598 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x140910598 (RtlpIsAppContainer.c)
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
