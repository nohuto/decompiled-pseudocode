/*
 * XREFs of IopLiveDumpAllocateMappingResources @ 0x140897FCC
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140896D1C (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmAllocateDumpHibernateResources @ 0x14078ED5C (MmAllocateDumpHibernateResources.c)
 *     IopLiveDumpFreeMappingResources @ 0x14089825C (IopLiveDumpFreeMappingResources.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpAllocateMappingResources(__int64 a1)
{
  unsigned int v1; // r14d
  SIZE_T v3; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // ebp
  __int64 i; // rsi
  __int64 v12; // r15
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
    v10 = 0;
    if ( !v1 )
      return v5;
    for ( i = 0LL; ; i += 16LL )
    {
      v12 = *(_QWORD *)(a1 + 792);
      DumpHibernateResources = (void *)MmAllocateDumpHibernateResources(0x10000uLL, v7, v8, v9);
      *(_QWORD *)(i + v12) = DumpHibernateResources;
      if ( !DumpHibernateResources )
        break;
      Mdl = IoAllocateMdl(DumpHibernateResources, 0x10000u, 0, 0, 0LL);
      *(_QWORD *)(i + v12 + 8) = Mdl;
      if ( !Mdl )
        break;
      if ( ++v10 >= v1 )
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
