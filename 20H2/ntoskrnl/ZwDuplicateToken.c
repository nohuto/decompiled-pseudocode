/*
 * XREFs of ZwDuplicateToken @ 0x1403F89B0
 * Callers:
 *     RtlIsSandboxedTokenHandle @ 0x140330E20 (RtlIsSandboxedTokenHandle.c)
 *     RtlCheckTokenMembershipEx @ 0x140340930 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140584D20 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1406D34D8 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x140917478 (RtlpIsAppContainer.c)
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
