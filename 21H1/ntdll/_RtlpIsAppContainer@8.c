/*
 * XREFs of _RtlpIsAppContainer@8 @ 0x4B3490A6
 * Callers:
 *     _RtlpCapabilityCheckSystemCapability@12 @ 0x4B2EF5A6 (_RtlpCapabilityCheckSystemCapability@12.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _NtOpenThreadTokenEx@20 @ 0x4B2F2C70 (_NtOpenThreadTokenEx@20.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _NtDuplicateToken@24 @ 0x4B2F2DA0 (_NtDuplicateToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpIsAppContainer(HANDLE TokenHandle, bool *a2)
{
  NTSTATUS v3; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-38h] BYREF
  int TokenInformation; // [esp+28h] [ebp-20h] BYREF
  ULONG ReturnLength; // [esp+2Ch] [ebp-1Ch] BYREF
  HANDLE ExistingTokenHandle; // [esp+30h] [ebp-18h] BYREF
  HANDLE TokenHandlea; // [esp+34h] [ebp-14h] BYREF
  _DWORD v10[2]; // [esp+38h] [ebp-10h] BYREF
  __int16 v11; // [esp+40h] [ebp-8h]

  TokenHandlea = 0;
  *a2 = 0;
  if ( TokenHandle )
  {
LABEL_7:
    ReturnLength = 0;
    v3 = ZwQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &ReturnLength);
    if ( v3 >= 0 )
      *a2 = TokenInformation != 0;
    goto LABEL_9;
  }
  v3 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFE, 8u, 1u, 0, &TokenHandlea);
  if ( v3 == -1073741700 )
  {
    v3 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFF, 0xAu, 0, &ExistingTokenHandle);
    if ( v3 < 0 )
      goto LABEL_9;
    ObjectAttributes.Length = 24;
    ObjectAttributes.SecurityQualityOfService = v10;
    memset(&ObjectAttributes.RootDirectory, 0, 16);
    v10[0] = 12;
    v10[1] = 2;
    v11 = 1;
    v3 = NtDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    NtClose(ExistingTokenHandle);
  }
  if ( v3 >= 0 )
  {
    TokenHandle = TokenHandlea;
    goto LABEL_7;
  }
LABEL_9:
  if ( TokenHandlea )
    NtClose(TokenHandlea);
  return v3;
}
