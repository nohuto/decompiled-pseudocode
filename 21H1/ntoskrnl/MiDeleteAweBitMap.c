/*
 * XREFs of MiDeleteAweBitMap @ 0x1408D149C
 * Callers:
 *     MiDeleteAweInfo @ 0x1408D14F4 (MiDeleteAweInfo.c)
 *     MiResizeAweBitMap @ 0x1408D1B94 (MiResizeAweBitMap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweBitMap(ULONG_PTR a1, _QWORD *a2)
{
  void *v4; // rcx
  __int64 v5; // rdx

  v4 = (void *)a2[1];
  v5 = 0LL;
  if ( v4 )
  {
    if ( a1 )
    {
      LOBYTE(v5) = (*a2 & 0x3FLL) != 0;
      PsReturnProcessNonPagedPoolQuota(a1, 8 * ((*a2 >> 6) + v5));
      v4 = (void *)a2[1];
    }
    ExFreePoolWithTag(v4, 0);
  }
}
