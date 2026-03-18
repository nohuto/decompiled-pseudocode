/*
 * XREFs of ?AllocateTableEntry@?$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00B97A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 */

__int64 __fastcall DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return Win32AllocPool(ByteSize, 0x74724344u);
}
