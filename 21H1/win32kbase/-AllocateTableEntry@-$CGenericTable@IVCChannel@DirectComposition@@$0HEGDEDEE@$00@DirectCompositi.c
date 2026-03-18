/*
 * XREFs of ?AllocateTableEntry@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00400D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 */

__int64 __fastcall DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return Win32AllocPoolWithQuota(ByteSize, 1952662340LL);
}
