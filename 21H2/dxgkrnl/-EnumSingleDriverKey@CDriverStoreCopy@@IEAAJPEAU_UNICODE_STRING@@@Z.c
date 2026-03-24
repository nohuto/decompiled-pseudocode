/*
 * XREFs of ?EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0263120
 * Callers:
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0263340 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C02631CC (-EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGK.c)
 */

__int64 __fastcall CDriverStoreCopy::EnumSingleDriverKey(CDriverStoreCopy *this, struct _UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  int v6; // eax

  v2 = 0;
  result = CDriverStoreCopy::EnumSingleRegistry(this, a2, L"\\CopyToVmOverwrite", 0LL, 0);
  if ( (int)result >= 0 )
  {
    result = CDriverStoreCopy::EnumSingleRegistry(this, a2, L"\\CopyToVmWhenNewer", 0LL, 1);
    if ( (int)result >= 0 )
    {
      result = CDriverStoreCopy::EnumSingleRegistry(this, a2, L"\\CopyToVmOverwriteWow64", 1LL, 0);
      if ( (int)result >= 0 )
      {
        v6 = CDriverStoreCopy::EnumSingleRegistry(this, a2, L"\\CopyToVmWhenNewerWow64", 1LL, 1);
        if ( v6 < 0 )
          return (unsigned int)v6;
        return v2;
      }
    }
  }
  return result;
}
