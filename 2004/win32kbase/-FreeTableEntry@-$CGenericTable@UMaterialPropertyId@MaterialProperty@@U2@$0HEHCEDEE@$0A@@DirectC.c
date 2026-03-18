/*
 * XREFs of ?FreeTableEntry@?$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@DirectComposition@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1C0049D80
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry(
        struct _RTL_AVL_TABLE *Table,
        PVOID Buffer)
{
  Win32FreePool(Buffer);
}
