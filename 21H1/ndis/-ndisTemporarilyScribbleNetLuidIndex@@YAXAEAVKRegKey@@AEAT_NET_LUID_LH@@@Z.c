/*
 * XREFs of ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C0106E20
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031330 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C011EBA0 (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 */

void __fastcall ndisTemporarilyScribbleNetLuidIndex(struct KRegKey *a1, union _NET_LUID_LH *a2)
{
  int v4; // esi
  __int64 v5; // r8
  const wchar_t *v6; // rax
  __int64 v7; // rdx
  NTSTATUS v8; // eax
  void *m_ptr; // rcx
  __int64 v10; // r8
  ULONG64 v11; // r10
  const wchar_t *v12; // rax
  __int64 v13; // rdx
  void *v14; // rcx
  ULONG Data; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+58h] [rbp-18h]

  v4 = 0;
  v5 = 0x7FFFLL;
  v6 = L"NetLuidIndex";
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
  v8 = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    ValueName.Buffer = L"NetLuidIndex";
    ValueName.Length = 2 * v7;
    ValueName.MaximumLength = 2 * v7 + 2;
    m_ptr = a1->m_ptr;
    Data = 0;
    v18 = 0;
    KeyValueInformation = 0LL;
    v8 = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &Data);
    if ( v8 >= 0 )
    {
      if ( DWORD1(KeyValueInformation) == 4 )
      {
        if ( DWORD2(KeyValueInformation) == 4 )
        {
          v4 = HIDWORD(KeyValueInformation);
          v8 = 0;
        }
        else
        {
          v8 = -1073741789;
        }
      }
      else
      {
        v8 = -1073741788;
      }
    }
  }
  if ( v8 < 0 || v4 != ((a2->Value >> 24) & 0xFFFFFF) )
  {
    v10 = 0x7FFFLL;
    v11 = (a2->Value >> 24) & 0xFFFFFF;
    v12 = L"NetLuidIndex";
    ValueName = 0LL;
    do
    {
      if ( !*v12 )
        break;
      ++v12;
      --v10;
    }
    while ( v10 );
    v13 = (0x7FFF - v10) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64);
    if ( v10 )
    {
      ValueName.Buffer = L"NetLuidIndex";
      ValueName.Length = 2 * v13;
      ValueName.MaximumLength = 2 * v13 + 2;
      v14 = a1->m_ptr;
      Data = v11;
      ZwSetValueKey(v14, &ValueName, 0, 4u, &Data, 4u);
    }
    NdisTraceLoggingTemporarilyScribbleNetLuidIndex(a2);
  }
}
