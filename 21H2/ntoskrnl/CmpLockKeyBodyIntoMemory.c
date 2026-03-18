/*
 * XREFs of CmpLockKeyBodyIntoMemory @ 0x1409152A4
 * Callers:
 *     CmOpenKeyForBugCheckRecovery @ 0x14090E160 (CmOpenKeyForBugCheckRecovery.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall CmpLockKeyBodyIntoMemory(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 v5; // r15
  char *TransientPoolWithTag; // rax
  char *v7; // rbx

  v5 = *(_QWORD *)(a1 + 8);
  TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x80uLL, 0x34394D43u, a4);
  v7 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, 0x80uLL);
    *((_WORD *)v7 + 4) = 8 * (((unsigned __int16)((a1 & 0xFFF) + 4207) >> 12) + 6);
    *((_QWORD *)v7 + 4) = a1 & 0xFFFFFFFFFFFFF000uLL;
    *((_DWORD *)v7 + 11) = a1 & 0xFFF;
    *((_DWORD *)v7 + 10) = 112;
    MmProbeAndLockPages((PMDL)v7, 0, IoModifyAccess);
    *((_QWORD *)v7 + 8) = 0LL;
    *((_WORD *)v7 + 36) = 8 * (((unsigned __int16)((v5 & 0xFFF) + 4407) >> 12) + 6);
    *((_WORD *)v7 + 37) = 0;
    *((_QWORD *)v7 + 12) = v5 & 0xFFFFFFFFFFFFF000uLL;
    *((_DWORD *)v7 + 27) = v5 & 0xFFF;
    *((_DWORD *)v7 + 26) = 312;
    MmProbeAndLockPages((PMDL)(v7 + 64), 0, IoModifyAccess);
    *(_QWORD *)(a1 + 104) = v7;
    *(_WORD *)(a1 + 48) |= 0x20u;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
}
