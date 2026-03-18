/*
 * XREFs of EtwpAllocGuidEntry @ 0x14071A318
 * Callers:
 *     EtwpAddGuidEntry @ 0x14071A098 (EtwpAddGuidEntry.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ObLogSecurityDescriptor @ 0x1405F6110 (ObLogSecurityDescriptor.c)
 *     EtwpFreeSecurityDescriptor @ 0x14066A56C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14066A5AC (EtwpGetSecurityDescriptorByGuid.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

char *__fastcall EtwpAllocGuidEntry(__int64 a1, unsigned int *a2)
{
  char *result; // rax
  char *v5; // rbx
  __int128 v6; // xmm0
  void *Src; // [rsp+40h] [rbp+18h] BYREF

  Src = 0LL;
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1A8uLL, 0x47777445u);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0x1A8uLL);
    *((_QWORD *)v5 + 4) = 1LL;
    v6 = *(_OWORD *)a2;
    *((_QWORD *)v5 + 52) = 0LL;
    *((_QWORD *)v5 + 49) = a1;
    *(_OWORD *)(v5 + 40) = v6;
    *((_QWORD *)v5 + 8) = v5 + 56;
    *((_QWORD *)v5 + 7) = v5 + 56;
    *((_QWORD *)v5 + 3) = v5 + 16;
    *((_QWORD *)v5 + 2) = v5 + 16;
    *((_QWORD *)v5 + 51) = 0LL;
    EtwpGetSecurityDescriptorByGuid(a2, &Src);
    if ( (int)ObLogSecurityDescriptor((char *)Src, (_QWORD *)v5 + 9, 1u) < 0 )
    {
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    EtwpFreeSecurityDescriptor(&Src);
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 49) + 4112LL));
    return v5;
  }
  return result;
}
