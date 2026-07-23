/*
 * XREFs of ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C3B40
 * Callers:
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C1C70 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     ?ExtractDeviceStrings@SC_DEVICE@@AEAAJXZ @ 0x1405C3788 (-ExtractDeviceStrings@SC_DEVICE@@AEAAJXZ.c)
 *     ?ExtractFaultDomainIds@SC_DEVICE@@AEAAJXZ @ 0x1405C38B8 (-ExtractFaultDomainIds@SC_DEVICE@@AEAAJXZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140706430 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

void __fastcall SC_DEVICE::SaveStorageProperty(
        SC_DEVICE *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  __int64 v6; // rbx
  void *v7; // rcx

  if ( a2 )
  {
    switch ( a2 )
    {
      case StorageAdapterProperty:
        v6 = 152LL;
        break;
      case StorageDeviceIdProperty:
        v6 = 176LL;
        break;
      case StorageMiniportProperty:
        v6 = 184LL;
        break;
      case StorageAdapterCryptoProperty|StorageDeviceIdProperty:
        v6 = 168LL;
        break;
      default:
        goto LABEL_17;
    }
  }
  else
  {
    v6 = 160LL;
  }
  v7 = *(void **)((char *)this + v6);
  if ( v7 )
    SC_ENV::Free(v7);
  *(_QWORD *)((char *)this + v6) = a3;
  a3 = 0LL;
  if ( a2 )
  {
    if ( a2 == (StorageAdapterCryptoProperty|StorageDeviceIdProperty) )
      SC_DEVICE::ExtractFaultDomainIds(this);
    return;
  }
  SC_DEVICE::ExtractDeviceStrings(this);
LABEL_17:
  if ( a3 )
    SC_ENV::Free(a3);
}
