/*
 * XREFs of MiDeleteAweBitMap @ 0x1408D862C
 * Callers:
 *     MiDeleteAweInfo @ 0x1408D8684 (MiDeleteAweInfo.c)
 *     MiResizeAweBitMap @ 0x1408D8D24 (MiResizeAweBitMap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140230440 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
