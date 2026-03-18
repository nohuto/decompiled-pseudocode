/*
 * XREFs of ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C009A054
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0096B50 (UserAllocDefaultCompositionSecurityDescriptor.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 __fastcall AllocateLocalSystemSid(void **a1)
{
  ULONG v2; // eax
  void *v3; // rax
  void *v4; // rbx
  NTSTATUS v5; // edi
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v2 = RtlLengthRequiredSid(1u);
  v3 = (void *)Win32AllocPoolWithQuota(v2, 0x65737355u);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    v5 = RtlInitializeSid(v3, &IdentifierAuthority, 1u);
    if ( v5 < 0 )
    {
      Win32FreePool((__int64)v4);
    }
    else
    {
      *RtlSubAuthoritySid(v4, 0) = 18;
      *a1 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
