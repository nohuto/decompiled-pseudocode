/*
 * XREFs of EtwpCovSampProcessEnsureContext @ 0x140945970
 * Callers:
 *     EtwpCovSampImageNotify @ 0x140945220 (EtwpCovSampImageNotify.c)
 * Callees:
 *     EtwpCovSampProcessCleanup @ 0x1409458D0 (EtwpCovSampProcessCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampProcessEnsureContext(__int64 a1)
{
  unsigned int v1; // ebx
  _OWORD *PoolWithTag; // rax
  unsigned __int64 v4; // rcx
  signed __int64 v5; // rax
  void *v6; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 2544) )
  {
    if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x56777445u);
      v4 = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        PoolWithTag[2] = 0LL;
        *((_QWORD *)PoolWithTag + 6) = 0LL;
        v5 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2544), (signed __int64)PoolWithTag, 0LL);
        v6 = (void *)(v4 & -(__int64)(v5 != 0));
        if ( v6 )
        {
          EtwpCovSampProcessCleanup(v4 & -(__int64)(v5 != 0), 1);
          ExFreePoolWithTag(v6, 0x56777445u);
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v1;
}
