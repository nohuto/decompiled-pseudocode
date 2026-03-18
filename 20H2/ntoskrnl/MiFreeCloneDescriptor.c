/*
 * XREFs of MiFreeCloneDescriptor @ 0x1408DBF28
 * Callers:
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408DB8A0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140230440 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiUnlockPagedAddress @ 0x140534EF0 (MiUnlockPagedAddress.c)
 *     MiDecrementCloneHeaderCount @ 0x1405584F0 (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCloneDescriptor(ULONG_PTR a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // rdi
  void *v7; // r14

  v2 = (_QWORD *)a2[7];
  v3 = 0LL;
  v4 = a2[8];
  v7 = (void *)v2[2];
  if ( v4 )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)v7 + v3);
      v3 += 4096LL;
    }
    while ( v3 < v4 );
  }
  PsReturnProcessNonPagedPoolQuota(a1, v4);
  MiDecrementCloneHeaderCount(v2[3]);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(a2, 0);
}
