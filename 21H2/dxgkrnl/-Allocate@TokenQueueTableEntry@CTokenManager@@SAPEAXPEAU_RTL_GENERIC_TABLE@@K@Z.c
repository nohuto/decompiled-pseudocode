/*
 * XREFs of ?Allocate@TokenQueueTableEntry@CTokenManager@@SAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C001F5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CTokenManager::TokenQueueTableEntry::Allocate(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize,
        __int64 a3,
        __int64 a4)
{
  return operator new[](ByteSize, 0x65744D54u, 256LL, a4);
}
