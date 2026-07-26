/*
 * XREFs of ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x1C01220A8
 * Callers:
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01081EC (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::DeleteValue(KRegKey *this, const wchar_t *a2)
{
  __int64 v3; // rdx
  const wchar_t *v4; // rax
  __int64 v5; // rcx
  NTSTATUS result; // eax
  _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0x7FFFLL;
  ValueName = 0LL;
  v4 = L"NetCfgInstanceId";
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  v5 = (0x7FFF - v3) & -(__int64)(v3 != 0);
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
  {
    ValueName.Buffer = L"NetCfgInstanceId";
    ValueName.Length = 2 * v5;
    ValueName.MaximumLength = 2 * v5 + 2;
    return ZwDeleteValueKey(this->m_ptr, &ValueName);
  }
  return result;
}
