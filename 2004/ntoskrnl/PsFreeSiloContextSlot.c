/*
 * XREFs of PsFreeSiloContextSlot @ 0x140902670
 * Callers:
 *     VrpRegistryUnload @ 0x14087F720 (VrpRegistryUnload.c)
 * Callees:
 *     PspStorageGetObject @ 0x1402005B0 (PspStorageGetObject.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     PspGetNextSilo @ 0x140657710 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x14090BB64 (PspStorageFreeSlot.c)
 */

__int64 __fastcall PsFreeSiloContextSlot(unsigned int a1)
{
  ULONG_PTR *i; // rcx
  __int64 v3; // rcx
  ULONG_PTR *NextSilo; // rax
  ULONG_PTR *v5; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  DmaAdapter = 0LL;
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = (ULONG_PTR *)PspGetNextSilo(i, 0);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    v3 = NextSilo[163];
    if ( v3 && (int)PspStorageGetObject(v3, a1, (unsigned __int64 *)&DmaAdapter) >= 0 )
    {
      HalPutDmaAdapter(DmaAdapter);
      KeBugCheckEx(0x199u, v5[163], 0LL, 0LL, 0LL);
    }
  }
  return PspStorageFreeSlot(a1);
}
