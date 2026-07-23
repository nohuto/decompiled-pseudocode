/*
 * XREFs of IsRegistryKeyLocked @ 0x1407B4650
 * Callers:
 *     NtLockProductActivationKeys @ 0x1407B4270 (NtLockProductActivationKeys.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IsRegistryKeyLocked(void *a1, _BYTE *a2)
{
  NTSTATUS v3; // ebx
  struct _DMA_ADAPTER *v4; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  DmaAdapter = 0LL;
  *a2 = 0;
  v3 = ObReferenceObjectByHandle(a1, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, (PVOID *)&DmaAdapter, 0LL);
  if ( v3 >= 0 )
  {
    v4 = DmaAdapter;
    *a2 = (__int64)DmaAdapter->DmaOperations->PutDmaAdapter & 0x80;
    HalPutDmaAdapter(v4);
  }
  return (unsigned int)v3;
}
