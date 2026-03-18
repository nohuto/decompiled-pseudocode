/*
 * XREFs of HvpAllocateNonPagedBin @ 0x140924648
 * Callers:
 *     HvpAllocateBin @ 0x14068D2B8 (HvpAllocateBin.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     CmpClaimGlobalQuota @ 0x14068B144 (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x14079CF18 (CmpReleaseGlobalQuota.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall HvpAllocateNonPagedBin(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v5; // ebx
  void *IndependentPages; // rax
  void *v7; // rsi

  v3 = (unsigned int)a2;
  v5 = 0;
  if ( CmpClaimGlobalQuota((unsigned int)a2, a2) )
  {
    IndependentPages = (void *)MmAllocateIndependentPagesEx(v3, -1, 0LL, 0);
    v7 = IndependentPages;
    if ( IndependentPages )
    {
      memset(IndependentPages, 0, v3);
      *a3 = v7;
    }
    else
    {
      v5 = -1073741670;
      CmpReleaseGlobalQuota(v3);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
