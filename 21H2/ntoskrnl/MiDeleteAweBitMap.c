/*
 * XREFs of MiDeleteAweBitMap @ 0x14097CF84
 * Callers:
 *     MiDeleteAweInfo @ 0x14097CFDC (MiDeleteAweInfo.c)
 *     MiResizeAweBitMap @ 0x14097D688 (MiResizeAweBitMap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweBitMap(struct _KPROCESS *a1, _QWORD *a2)
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
