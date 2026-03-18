/*
 * XREFs of PspAddProcessToWorkingSetChangeList @ 0x140904310
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsProcessCallback @ 0x1406ECED0 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 *     MmEnforceWorkingSetLimit @ 0x1402D8388 (MmEnforceWorkingSetLimit.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

char __fastcall PspAddProcessToWorkingSetChangeList(_KPROCESS *Object, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 PoolWithTag; // rax
  unsigned __int64 v6; // rdi
  __int64 *v7; // rcx

  LODWORD(PoolWithTag) = Object[1].DirectoryTableBase;
  if ( (PoolWithTag & 1) == 0 )
  {
    v6 = Object[1].Affinity.Bitmap[16];
    if ( (*(_DWORD *)(v6 + 848) & 1) != 0 )
    {
      LOBYTE(PoolWithTag) = ObReferenceObjectSafeWithTag((__int64)Object);
      if ( (_BYTE)PoolWithTag )
      {
        PoolWithTag = (__int64)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x72437350u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(PoolWithTag + 16) = Object;
          *(_QWORD *)(PoolWithTag + 32) = *(_QWORD *)(v6 + 800);
          *(_QWORD *)(PoolWithTag + 24) = *(_QWORD *)(v6 + 792);
          v7 = (__int64 *)qword_140C13068;
          if ( *(__int64 **)qword_140C13068 != &PspWorkingSetChangeHead )
            __fastfail(3u);
          *(_QWORD *)PoolWithTag = &PspWorkingSetChangeHead;
          *(_QWORD *)(PoolWithTag + 8) = v7;
          *v7 = PoolWithTag;
          qword_140C13068 = PoolWithTag;
        }
        else
        {
          LOBYTE(PoolWithTag) = ObfDereferenceObjectWithTag(Object, 0x624A7350u);
        }
      }
    }
    else
    {
      LOBYTE(PoolWithTag) = MmEnforceWorkingSetLimit(Object, 2, a3, a4);
    }
  }
  return PoolWithTag;
}
