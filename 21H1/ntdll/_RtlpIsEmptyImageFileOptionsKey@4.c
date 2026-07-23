/*
 * XREFs of _RtlpIsEmptyImageFileOptionsKey@4 @ 0x4B342529
 * Callers:
 *     _RtlpDeleteEmptyImageFileOptionsKey@4 @ 0x4B342483 (_RtlpDeleteEmptyImageFileOptionsKey@4.c)
 *     _RtlpIsEmptyImageFileOptionsKey@4 @ 0x4B342529 (_RtlpIsEmptyImageFileOptionsKey@4.c)
 * Callees:
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _NtEnumerateValueKey@24 @ 0x4B2F2A90 (_NtEnumerateValueKey@24.c)
 *     _ZwEnumerateKey@24 @ 0x4B2F2CA0 (_ZwEnumerateKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpIsEmptyImageFileOptionsKey@4 @ 0x4B342529 (_RtlpIsEmptyImageFileOptionsKey@4.c)
 */

char __thiscall RtlpIsEmptyImageFileOptionsKey(void *this)
{
  void *v1; // ebx
  ULONG i; // edi
  NTSTATUS inited; // esi
  ULONG v4; // edi
  NTSTATUS v5; // esi
  char IsEmptyImageFileOptionsKey; // bl
  _UNICODE_STRING String2; // [esp+Ch] [ebp-274h] BYREF
  _UNICODE_STRING DestinationString; // [esp+14h] [ebp-26Ch] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+1Ch] [ebp-264h] BYREF
  void *v11; // [esp+34h] [ebp-24Ch]
  ULONG ResultLength; // [esp+38h] [ebp-248h] BYREF
  HANDLE KeyHandle; // [esp+3Ch] [ebp-244h] BYREF
  _UNICODE_STRING String1; // [esp+40h] [ebp-240h] BYREF
  _BYTE KeyValueInformation[8]; // [esp+48h] [ebp-238h] BYREF
  unsigned __int16 v16; // [esp+50h] [ebp-230h]
  unsigned __int16 v17; // [esp+54h] [ebp-22Ch] BYREF
  char v18; // [esp+58h] [ebp-228h] BYREF

  KeyHandle = 0;
  v1 = this;
  v11 = this;
  for ( i = 0; ; ++i )
  {
    inited = NtEnumerateValueKey(v1, i, KeyValueBasicInformation, KeyValueInformation, 0x230u, &ResultLength);
    if ( inited >= 0 )
    {
      if ( i )
        break;
      String1.Length = v16;
      String1.MaximumLength = v16;
      String1.Buffer = &v17;
      if ( RtlInitUnicodeStringEx(&DestinationString, L"UseFilter") < 0 )
        break;
      inited = RtlInitUnicodeStringEx(&String2, L"FilterFullPath");
      if ( inited < 0
        || RtlCompareUnicodeString(&String1, &DestinationString, 1u) && RtlCompareUnicodeString(&String1, &String2, 1u) )
      {
        break;
      }
    }
    if ( inited < 0 )
    {
      if ( inited == -2147483622 )
      {
        v4 = 0;
        do
        {
          v5 = ZwEnumerateKey(v1, v4, KeyBasicInformation, KeyValueInformation, 0x230u, &ResultLength);
          if ( v5 >= 0 )
          {
            ObjectAttributes.SecurityDescriptor = 0;
            ObjectAttributes.SecurityQualityOfService = 0;
            String1.Length = v17;
            String1.MaximumLength = v17;
            String1.Buffer = (wchar_t *)&v18;
            ObjectAttributes.ObjectName = &String1;
            ObjectAttributes.Length = 24;
            ObjectAttributes.RootDirectory = v1;
            ObjectAttributes.Attributes = 576;
            v5 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
            if ( v5 >= 0 )
            {
              IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(KeyHandle);
              NtClose(KeyHandle);
              if ( !IsEmptyImageFileOptionsKey )
                return 0;
              v1 = v11;
            }
          }
          ++v4;
        }
        while ( v5 >= 0 );
        if ( v5 == -2147483622 )
          return 1;
      }
      return 0;
    }
  }
  return 0;
}
