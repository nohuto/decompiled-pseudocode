/*
 * XREFs of ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C012D47C
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C013B6C0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00545EC (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 */

unsigned __int16 *__fastcall GetProcessAppContainerSid(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  BOOL v3; // edi
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v5; // rsi
  char *v6; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp+8h] BYREF

  TokenInformation = 0LL;
  UnicodeString = 0LL;
  v2 = 0LL;
  v3 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2);
  v5 = PsReferencePrimaryToken(CurrentProcess);
  if ( SeQueryInformationToken(v5, TokenAppContainerSid, &TokenInformation) >= 0
    && RtlConvertSidToUnicodeString(&UnicodeString, *(PSID *)TokenInformation, 1u) >= 0 )
  {
    v6 = (char *)Win32AllocPoolWithQuotaZInit(UnicodeString.Length + 2LL, 0x79747355u);
    v2 = (__int64)v6;
    if ( v6 )
      v3 = (int)RtlStringCchCopyNW(
                  v6,
                  UnicodeString.Length + 1LL,
                  (char *)UnicodeString.Buffer,
                  (unsigned __int64)UnicodeString.Length >> 1) >= 0;
  }
  PsDereferenceImpersonationToken(v5);
  RtlFreeUnicodeString(&UnicodeString);
  if ( !v3 && v2 )
  {
    Win32FreePool(v2);
    v2 = 0LL;
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return (unsigned __int16 *)v2;
}
