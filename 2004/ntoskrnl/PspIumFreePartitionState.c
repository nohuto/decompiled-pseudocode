/*
 * XREFs of PspIumFreePartitionState @ 0x14057E8B0
 * Callers:
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MmFreeSecureKernelPages @ 0x14054E264 (MmFreeSecureKernelPages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PspIumFreePartitionState(unsigned int *P)
{
  signed __int64 v2; // rax
  unsigned int v3; // eax
  __int128 Object; // [rsp+30h] [rbp-20h] BYREF
  char *v5; // [rsp+40h] [rbp-10h]

  v5 = 0LL;
  v2 = *((_QWORD *)P + 2);
  Object = 0LL;
  if ( v2 )
  {
    DWORD1(Object) = 0;
    v5 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 2, (signed __int64)&Object, v2) )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  MmUnlockPages((PMDL)P + 2);
  v3 = P[1];
  if ( v3 )
  {
    memmove((void *)(*((_QWORD *)P + 20) + 48LL + 8LL * P[39]), P + 6, 8LL * v3);
    P[39] += P[1];
  }
  MmFreeSecureKernelPages(*((PMDL *)P + 20), 0);
  HalPutDmaAdapter(*((PADAPTER_OBJECT *)P + 1));
  ExFreePoolWithTag(P, 0);
}
