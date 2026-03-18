/*
 * XREFs of ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x1C0009250
 * Callers:
 *     CreatePointerDeviceProcessEvents @ 0x1C00091F4 (CreatePointerDeviceProcessEvents.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00095B8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall CreatePointerDeviceProcessEvent(
        ACCESS_MASK AccessMask,
        int a2,
        BOOLEAN a3,
        unsigned __int16 *a4,
        void **a5)
{
  unsigned int v6; // r12d
  struct _ACL *v7; // rbx
  ULONG v8; // eax
  void *v9; // rax
  void *v10; // rsi
  NTSTATUS v11; // r14d
  NTSTATUS v12; // eax
  ULONG v13; // eax
  void *v14; // rax
  void *v15; // rdi
  ULONG v16; // ebx
  ULONG v17; // r15d
  struct _ACL *v18; // rax
  struct _ACL *v19; // r14
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp-78h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v27; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[256]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v7 = 0LL;
  *(_DWORD *)v27.Value = 0;
  *(_WORD *)&v27.Value[4] = 256;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  v8 = RtlLengthRequiredSid(1u);
  v9 = (void *)Win32AllocPoolWithQuota(v8, 1702064981LL);
  v10 = v9;
  v11 = -1073741801;
  if ( v9 )
  {
    *RtlSubAuthoritySid(v9, 0) = 18;
    v12 = RtlInitializeSid(v10, &IdentifierAuthority, 1u);
  }
  else
  {
    v12 = -1073741801;
  }
  if ( v12 >= 0 )
  {
    v13 = RtlLengthRequiredSid(1u);
    v14 = (void *)Win32AllocPoolWithQuota(v13, 1702064981LL);
    v15 = v14;
    if ( v14 )
    {
      *RtlSubAuthoritySid(v14, 0) = 0;
      v11 = RtlInitializeSid(v15, &v27, 1u);
    }
    if ( v11 >= 0 )
    {
      v16 = RtlLengthSid(v10);
      v17 = v16 + RtlLengthSid(v15) + 40;
      v18 = (struct _ACL *)Win32AllocPool(v17 + 40LL, 2020635477LL);
      v7 = v18;
      if ( v18 )
      {
        v19 = v18 + 5;
        if ( RtlCreateAcl(v18 + 5, v17, 2u) >= 0
          && RtlAddAccessAllowedAce(v19, 2u, AccessMask, v15) >= 0
          && RtlAddAccessAllowedAce(v19, 2u, 0x1F0003u, v10) >= 0
          && RtlCreateSecurityDescriptor(v7, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(v7, 1u, v19, 0) >= 0 )
        {
          if ( gSessionId )
          {
            if ( StringCchPrintfW(
                   SourceString,
                   0x100uLL,
                   L"%ws\\%ld\\BaseNamedObjects\\%ws",
                   L"\\Sessions",
                   gSessionId,
                   a4) >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, SourceString);
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 192;
              ObjectAttributes.SecurityDescriptor = v7;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              if ( ZwCreateEvent(a5, 0x1F0003u, &ObjectAttributes, (EVENT_TYPE)(a2 == 0), a3) >= 0 )
                v6 = 1;
            }
          }
        }
      }
    }
    if ( v15 )
      Win32FreePool(v15);
  }
  if ( v10 )
    Win32FreePool(v10);
  if ( v7 )
    Win32FreePool(v7);
  return v6;
}
