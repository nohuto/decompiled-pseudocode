/*
 * XREFs of MiFreeCloneDescriptor @ 0x140980D40
 * Callers:
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x1409806C8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x14025D494 (MiUnlockPagedAddress.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiDecrementCloneHeaderCount @ 0x1405BA5F0 (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCloneDescriptor(struct _KPROCESS *a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
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
