/*
 * XREFs of ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x1C0107A20
 * Callers:
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C01071AC (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0107AE0 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueUshort(KRegKey *this, wchar_t *a2, unsigned __int16 *a3)
{
  __int64 v5; // r9
  wchar_t *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  struct _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( !a2 )
  {
LABEL_7:
    v10 = 0;
    result = KRegKey::QueryValueUlong(this, &v9, &v10);
    if ( (int)result >= 0 )
    {
      if ( v10 > 0xFFFF )
      {
        return 3221225621LL;
      }
      else
      {
        *a3 = v10;
        return 0LL;
      }
    }
    return result;
  }
  v5 = 0x7FFFLL;
  v6 = a2;
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
    v9.Buffer = a2;
    v9.Length = 2 * v7;
    v9.MaximumLength = 2 * v7 + 2;
    goto LABEL_7;
  }
  return result;
}
