/*
 * XREFs of ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x1C0122114
 * Callers:
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C010717C (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::SetValueUlong(KRegKey *this, wchar_t *a2, int a3)
{
  __int64 v4; // r9
  wchar_t *v5; // rax
  __int64 v6; // rcx
  NTSTATUS result; // eax
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  ValueName = 0LL;
  if ( !a2 )
    goto LABEL_7;
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = (0x7FFF - v4) & -(__int64)(v4 != 0);
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * v6;
    ValueName.MaximumLength = 2 * v6 + 2;
LABEL_7:
    m_ptr = this->m_ptr;
    Data = a3;
    return ZwSetValueKey(m_ptr, &ValueName, 0, 4u, &Data, 4u);
  }
  return result;
}
