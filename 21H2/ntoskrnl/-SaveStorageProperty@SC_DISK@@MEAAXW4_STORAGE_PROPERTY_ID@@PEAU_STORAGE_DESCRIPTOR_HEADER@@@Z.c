/*
 * XREFs of ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140651480
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140652340 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406D9550 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

void __fastcall SC_DISK::SaveStorageProperty(
        SC_DISK *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  __int64 v4; // rax
  void **v5; // rbx

  if ( a2 > StorageDeviceResiliencyProperty )
  {
    switch ( a2 )
    {
      case '9':
        v4 = 304LL;
        break;
      case ':':
        v4 = 328LL;
        break;
      case '<':
        v4 = 368LL;
        break;
      case 'A':
        return;
      default:
        goto LABEL_18;
    }
  }
  else
  {
    switch ( a2 )
    {
      case StorageDeviceResiliencyProperty:
        v4 = 336LL;
        break;
      case StorageDeviceWriteCacheProperty:
        v4 = 312LL;
        break;
      case StorageAccessAlignmentProperty:
        v4 = 296LL;
        break;
      case StorageDeviceSeekPenaltyProperty:
        v4 = 344LL;
        break;
      case StorageDeviceTrimProperty:
        v4 = 360LL;
        break;
      case StorageDeviceLBProvisioningProperty:
        v4 = 352LL;
        break;
      default:
LABEL_18:
        SC_DEVICE::SaveStorageProperty(this, a2, a3);
        return;
    }
  }
  v5 = (void **)((char *)this + v4);
  if ( (SC_DISK *)((char *)this + v4) )
  {
    if ( *v5 )
      SC_ENV::Free(*v5);
    *v5 = a3;
  }
}
