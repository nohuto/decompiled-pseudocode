/*
 * XREFs of ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C0115238
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C00318D0 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ndisCheckAlwaysStartFlag(struct KRegKey *a1, bool *a2)
{
  int v4; // edi
  __int64 v5; // r8
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  NTSTATUS result; // eax
  void *m_ptr; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-28h] BYREF
  int v13; // [rsp+58h] [rbp-18h]

  v4 = 0;
  v5 = 0x7FFFLL;
  v6 = L"AlwaysStartDevice";
  ValueName = 0LL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = (0x7FFF - v5) & -(__int64)(v5 != 0);
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    ValueName.Buffer = L"AlwaysStartDevice";
    ValueName.Length = 2 * v7;
    ValueName.MaximumLength = 2 * v7 + 2;
    m_ptr = a1->m_ptr;
    ResultLength = 0;
    v13 = 0;
    KeyValueInformation = 0LL;
    result = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( result >= 0 )
    {
      if ( DWORD1(KeyValueInformation) == 4 )
      {
        if ( DWORD2(KeyValueInformation) == 4 )
        {
          v4 = HIDWORD(KeyValueInformation);
          result = 0;
        }
        else
        {
          result = -1073741789;
        }
      }
      else
      {
        result = -1073741788;
      }
    }
  }
  if ( result == -1073741772 )
  {
    *a2 = 0;
  }
  else
  {
    if ( result )
      return result;
    *a2 = v4 != 0;
  }
  return 0;
}
