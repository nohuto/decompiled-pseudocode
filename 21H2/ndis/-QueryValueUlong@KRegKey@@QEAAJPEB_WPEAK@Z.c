/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C01078D8
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C00318D0 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEB_W@Z @ 0x1C0107128 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C010717C (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C01075F4 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong(KRegKey *this, wchar_t *a2, unsigned int *a3)
{
  wchar_t *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS result; // eax
  void *m_ptr; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-18h]

  ValueName = 0LL;
  if ( !a2 )
  {
LABEL_7:
    m_ptr = this->m_ptr;
    ResultLength = 0;
    v14 = 0;
    KeyValueInformation = 0LL;
    result = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( result >= 0 )
    {
      if ( DWORD1(KeyValueInformation) == 4 )
      {
        if ( DWORD2(KeyValueInformation) == 4 )
        {
          *a3 = HIDWORD(KeyValueInformation);
          return 0;
        }
        else
        {
          return -1073741789;
        }
      }
      else
      {
        return -1073741788;
      }
    }
    return result;
  }
  v6 = a2;
  v7 = 0x7FFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = (0x7FFF - v7) & -(__int64)(v7 != 0);
  result = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * v8;
    ValueName.MaximumLength = 2 * v8 + 2;
    goto LABEL_7;
  }
  return result;
}
