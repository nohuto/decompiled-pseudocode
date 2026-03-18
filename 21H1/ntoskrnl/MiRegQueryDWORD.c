/*
 * XREFs of MiRegQueryDWORD @ 0x1405C6D54
 * Callers:
 *     MiValidateExistingImage @ 0x14063B24C (MiValidateExistingImage.c)
 *     MiValidateSectionSigningPolicy @ 0x14063B5E4 (MiValidateSectionSigningPolicy.c)
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 */

__int64 __fastcall MiRegQueryDWORD(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rdx
  const wchar_t *v5; // rax
  __int64 v6; // r8
  NTSTATUS v7; // ebx
  __int64 v8; // rdx
  const wchar_t *v9; // rax
  __int64 v10; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  __int128 v14; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp+27h] BYREF
  int v18; // [rsp+9Ch] [rbp+2Bh]
  unsigned int v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A4h] [rbp+33h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v4 = 0x7FFFLL;
  ValueName = 0LL;
  v5 = L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Control\\CI";
  v14 = 0LL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = (0x7FFF - v4) & -(__int64)(v4 != 0);
  v7 = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    *((_QWORD *)&v14 + 1) = L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Control\\CI";
    LOWORD(v14) = 2 * v6;
    WORD1(v14) = 2 * v6 + 2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      v8 = 0x7FFFLL;
      v9 = L"Disable26178932";
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v8;
      }
      while ( v8 );
      v10 = (0x7FFF - v8) & -(__int64)(v8 != 0);
      v7 = v8 == 0 ? 0xC000000D : 0;
      if ( v8 )
      {
        ValueName.Buffer = L"Disable26178932";
        ValueName.Length = 2 * v10;
        ValueName.MaximumLength = 2 * v10 + 2;
        v7 = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
        if ( v7 >= 0 )
        {
          if ( v18 == 4 && v19 >= 4 )
            *a3 = v20;
          else
            v7 = -1073741811;
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v7;
}
