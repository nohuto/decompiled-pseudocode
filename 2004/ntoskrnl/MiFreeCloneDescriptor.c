/*
 * XREFs of MiFreeCloneDescriptor @ 0x1408D60E8
 * Callers:
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408D5A60 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140220980 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiUnlockPagedAddress @ 0x140531520 (MiUnlockPagedAddress.c)
 *     MiDecrementCloneHeaderCount @ 0x140554B20 (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
