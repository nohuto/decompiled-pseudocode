/*
 * XREFs of IopLiveDumpAllocateMappingResources @ 0x14089A89C
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1408995EC (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     memset @ 0x140411300 (memset.c)
 *     MmAllocateDumpHibernateResources @ 0x14078ADCC (MmAllocateDumpHibernateResources.c)
 *     IopLiveDumpFreeMappingResources @ 0x14089AB2C (IopLiveDumpFreeMappingResources.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpAllocateMappingResources(__int64 a1)
{
  unsigned int v1; // r14d
  SIZE_T v3; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v5; // ebx
  int v7; // ebp
  __int64 i; // rsi
  __int64 v9; // r15
  void *DumpHibernateResources; // rax
  PMDL Mdl; // rax

  v1 = KeNumberProcessors_0;
  v3 = 16LL * (unsigned int)KeNumberProcessors_0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x706D644Cu);
  v5 = 0;
  *(_QWORD *)(a1 + 792) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    *(_DWORD *)(a1 + 784) = v1;
    v7 = 0;
    if ( !v1 )
      return v5;
    for ( i = 0LL; ; i += 16LL )
    {
      v9 = *(_QWORD *)(a1 + 792);
      DumpHibernateResources = (void *)MmAllocateDumpHibernateResources(0x10000uLL);
      *(_QWORD *)(i + v9) = DumpHibernateResources;
      if ( !DumpHibernateResources )
        break;
      Mdl = IoAllocateMdl(DumpHibernateResources, 0x10000u, 0, 0, 0LL);
      *(_QWORD *)(i + v9 + 8) = Mdl;
      if ( !Mdl )
        break;
      if ( ++v7 >= v1 )
        return v5;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 784) = 0;
  }
  IopLiveDumpFreeMappingResources(a1);
  return (unsigned int)-1073741670;
}
