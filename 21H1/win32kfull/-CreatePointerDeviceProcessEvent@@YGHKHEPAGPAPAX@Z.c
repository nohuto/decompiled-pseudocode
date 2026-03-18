/*
 * XREFs of ?CreatePointerDeviceProcessEvent@@YGHKHEPAGPAPAX@Z @ 0xD5244
 * Callers:
 *     _CreatePointerDeviceProcessEvents@0 @ 0xD520C (_CreatePointerDeviceProcessEvents@0.c)
 * Callees:
 *     _StringCchPrintfW @ 0xD54EC (_StringCchPrintfW.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge CreatePointerDeviceProcessEvent@<eax>(
        int a1@<edx>,
        ACCESS_MASK a2@<ecx>,
        BOOLEAN InitialState,
        int a4,
        void **a5,
        unsigned __int16 *a6,
        void **a7)
{
  int v7; // ebx
  int v8; // esi
  ULONG v9; // eax
  void *v10; // eax
  PSID v11; // edi
  NTSTATUS v12; // eax
  ULONG v13; // eax
  void *v14; // eax
  NTSTATUS v15; // eax
  ULONG v16; // esi
  int v17; // eax
  NTSTATUS v18; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-258h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+24h] [ebp-240h] BYREF
  PHANDLE EventHandle; // [esp+2Ch] [ebp-238h]
  int v23; // [esp+30h] [ebp-234h]
  int v24; // [esp+34h] [ebp-230h]
  ACCESS_MASK AccessMask; // [esp+38h] [ebp-22Ch]
  ULONG AclLength; // [esp+3Ch] [ebp-228h]
  PSID Sid; // [esp+40h] [ebp-224h]
  PSID v28; // [esp+44h] [ebp-220h]
  struct _SID_IDENTIFIER_AUTHORITY v29; // [esp+48h] [ebp-21Ch] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+50h] [ebp-214h] BYREF
  wchar_t pszDest[258]; // [esp+58h] [ebp-20Ch] BYREF

  AccessMask = a2;
  v24 = a4;
  v7 = 0;
  v8 = 0;
  EventHandle = a5;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v23 = a1;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)v29.Value = 0;
  *(_WORD *)&v29.Value[4] = 256;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v9 = RtlLengthRequiredSid(1u);
  v10 = (void *)Win32AllocPoolWithQuota(v9, 1702064981);
  v11 = v10;
  v28 = v10;
  if ( v10 )
  {
    *RtlSubAuthoritySid(v10, 0) = 18;
    v12 = RtlInitializeSid(v11, &IdentifierAuthority, 1u);
  }
  else
  {
    v12 = -1073741801;
  }
  if ( v12 >= 0 )
  {
    v13 = RtlLengthRequiredSid(1u);
    v14 = (void *)Win32AllocPoolWithQuota(v13, 1702064981);
    Sid = v14;
    if ( v14 )
    {
      *RtlSubAuthoritySid(v14, 0) = 0;
      v15 = RtlInitializeSid(Sid, &v29, 1u);
    }
    else
    {
      v15 = -1073741801;
    }
    if ( v15 >= 0 )
    {
      v16 = RtlLengthSid(v11);
      AclLength = v16 + 40 + RtlLengthSid(Sid);
      v17 = Win32AllocPool(AclLength + 20, 2020635477);
      v8 = v17;
      if ( v17 && RtlCreateAcl((PACL)(v17 + 20), AclLength, 2u) >= 0 )
      {
        v18 = RtlAddAccessAllowedAce((PACL)(v8 + 20), 2u, AccessMask, Sid);
        v11 = v28;
        if ( v18 >= 0
          && RtlAddAccessAllowedAce((PACL)(v8 + 20), 2u, (ACCESS_MASK)&loc_1F0002 + 1, v28) >= 0
          && RtlCreateSecurityDescriptor((PSECURITY_DESCRIPTOR)v8, 1u) >= 0
          && RtlSetDaclSecurityDescriptor((PSECURITY_DESCRIPTOR)v8, 1u, (PACL)(v8 + 20), 0) >= 0 )
        {
          if ( _gSessionId )
          {
            if ( StringCchPrintfW(pszDest, 0x100u, L"%ws\\%ld\\BaseNamedObjects\\%ws", L"\\Sessions", _gSessionId, v24) >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, pszDest);
              ObjectAttributes.Length = 24;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.RootDirectory = 0;
              ObjectAttributes.Attributes = 192;
              ObjectAttributes.SecurityDescriptor = (PVOID)v8;
              ObjectAttributes.SecurityQualityOfService = 0;
              if ( ZwCreateEvent(
                     EventHandle,
                     (ACCESS_MASK)&loc_1F0002 + 1,
                     &ObjectAttributes,
                     (EVENT_TYPE)(v23 == 0),
                     InitialState) >= 0 )
                v7 = 1;
            }
          }
        }
      }
      else
      {
        v11 = v28;
      }
    }
    if ( Sid )
      Win32FreePool(Sid);
  }
  if ( v11 )
    Win32FreePool(v11);
  if ( v8 )
    Win32FreePool(v8);
  return v7;
}
