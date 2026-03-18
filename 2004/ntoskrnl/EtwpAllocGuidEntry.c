/*
 * XREFs of EtwpAllocGuidEntry @ 0x140636DE0
 * Callers:
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ObLogSecurityDescriptor @ 0x140669810 (ObLogSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14066ABD4 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x14066B088 (EtwpFreeSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall EtwpAllocGuidEntry(__int64 a1, __int128 *a2)
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
    v6 = *a2;
    *((_QWORD *)v5 + 52) = 0LL;
    *((_QWORD *)v5 + 49) = a1;
    *(_OWORD *)(v5 + 40) = v6;
    *((_QWORD *)v5 + 8) = v5 + 56;
    *((_QWORD *)v5 + 7) = v5 + 56;
    *((_QWORD *)v5 + 3) = v5 + 16;
    *((_QWORD *)v5 + 2) = v5 + 16;
    *((_QWORD *)v5 + 51) = 0LL;
    EtwpGetSecurityDescriptorByGuid(a2, &Src);
    if ( (int)ObLogSecurityDescriptor(Src) < 0 )
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
