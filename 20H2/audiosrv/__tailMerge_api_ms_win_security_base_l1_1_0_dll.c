/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x18006B1A1
 * Callers:
 *     __imp_load_GetTokenInformation @ 0x18006B195 (__imp_load_GetTokenInformation.c)
 *     __imp_load_MakeAbsoluteSD @ 0x18006B5AF (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_GetSidLengthRequired @ 0x18006B9A2 (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x18006B9B4 (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x18006B9C6 (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x18006B9D8 (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x18006B9EA (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x18006B9FC (__imp_load_IsValidSid.c)
 *     __imp_load_EqualSid @ 0x18006BA0E (__imp_load_EqualSid.c)
 *     __imp_load_InitializeAcl @ 0x18006BA20 (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x18006BA32 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x18006BA44 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetAce @ 0x18006BA56 (__imp_load_GetAce.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x18006BA68 (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x18006BA7A (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x18006BA8C (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x18006BA9E (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x18006BAB0 (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_SetSecurityDescriptorSacl @ 0x18006BAC2 (__imp_load_SetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x18006BAD4 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x18006BAE6 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x18006BAF8 (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x18006BB0A (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_AddAccessAllowedAceEx @ 0x18006BB1C (__imp_load_AddAccessAllowedAceEx.c)
 *     __imp_load_SetKernelObjectSecurity @ 0x18006BB2E (__imp_load_SetKernelObjectSecurity.c)
 *     __imp_load_RevertToSelf @ 0x18006BBAC (__imp_load_RevertToSelf.c)
 *     __imp_load_CheckTokenMembership @ 0x18006BC06 (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x18006BC18 (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x18006BC2A (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x18006BC3C (__imp_load_FreeSid.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x18006BC4E (__imp_load_GetKernelObjectSecurity.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800466C0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_base_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_base_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
