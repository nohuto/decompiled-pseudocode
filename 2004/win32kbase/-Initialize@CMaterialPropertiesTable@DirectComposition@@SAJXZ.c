/*
 * XREFs of ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C000BC6C
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C0056A50 (DCompositionSessionInitialize.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 DirectComposition::CMaterialPropertiesTable::Initialize(void)
{
  struct _RTL_GENERIC_TABLE *v0; // rax
  struct _RTL_GENERIC_TABLE *v1; // rbx
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  NTSTATUS v4; // ebx

  v0 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolZInit(0x48uLL);
  v1 = v0;
  if ( v0 )
    RtlInitializeGenericTable(
      v0,
      DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::CompareTableEntries,
      DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::AllocateTableEntry,
      (PRTL_GENERIC_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
      0LL);
  else
    v1 = 0LL;
  Table = v1;
  if ( !v1 )
    return (unsigned int)-1073741801;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 1935885124LL);
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
      Win32FreePool(Resource);
      Resource = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
