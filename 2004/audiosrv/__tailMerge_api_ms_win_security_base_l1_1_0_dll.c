/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x18006BB01
 * Callers:
 *     __imp_load_GetTokenInformation @ 0x18006BAF5 (__imp_load_GetTokenInformation.c)
 *     __imp_load_MakeAbsoluteSD @ 0x18006BF0F (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_GetSidLengthRequired @ 0x18006C302 (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x18006C314 (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x18006C326 (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x18006C338 (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x18006C34A (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x18006C35C (__imp_load_IsValidSid.c)
 *     __imp_load_EqualSid @ 0x18006C36E (__imp_load_EqualSid.c)
 *     __imp_load_InitializeAcl @ 0x18006C380 (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x18006C392 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x18006C3A4 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetAce @ 0x18006C3B6 (__imp_load_GetAce.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x18006C3C8 (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x18006C3DA (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x18006C3EC (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x18006C3FE (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x18006C410 (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_SetSecurityDescriptorSacl @ 0x18006C422 (__imp_load_SetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x18006C434 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x18006C446 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x18006C458 (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x18006C46A (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_AddAccessAllowedAceEx @ 0x18006C47C (__imp_load_AddAccessAllowedAceEx.c)
 *     __imp_load_SetKernelObjectSecurity @ 0x18006C48E (__imp_load_SetKernelObjectSecurity.c)
 *     __imp_load_RevertToSelf @ 0x18006C50C (__imp_load_RevertToSelf.c)
 *     __imp_load_CheckTokenMembership @ 0x18006C566 (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x18006C578 (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x18006C58A (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x18006C59C (__imp_load_FreeSid.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x18006C5AE (__imp_load_GetKernelObjectSecurity.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180046E80 (__delayLoadHelper2.c)
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
