/*
 * XREFs of ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C00B6228
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C00B6200 (DCompositionSessionInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 DirectComposition::CMaterialPropertiesTable::Initialize(void)
{
  struct _RTL_GENERIC_TABLE *v0; // rax
  struct _RTL_GENERIC_TABLE *v1; // rbx
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  NTSTATUS v4; // ebx

  v0 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolZInit(0x48uLL, 0x74724344u);
  v1 = v0;
  if ( v0 )
    RtlInitializeGenericTable(
      v0,
      (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::CompareTableEntries,
      DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::AllocateTableEntry,
      (PRTL_GENERIC_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
      0LL);
  else
    v1 = 0LL;
  Table = v1;
  if ( !v1 )
    return (unsigned int)-1073741801;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  Resource = v3;
  if ( v3 )
  {
    v4 = ExInitializeResourceLite(v3);
    if ( v4 < 0 )
    {
      Win32FreePool((__int64)Resource);
      Resource = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
