/*
 * XREFs of IopLiveDumpFreeMappingResources @ 0x14093C640
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x14093C164 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x14093CFC8 (IopLiveDumpReleaseResources.c)
 * Callees:
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     MmReleaseDumpHibernateResources @ 0x14080051C (MmReleaseDumpHibernateResources.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeMappingResources(__int64 a1)
{
  unsigned int i; // edi
  unsigned __int64 *v3; // rsi
  struct _MDL *v4; // rcx

  if ( *(_QWORD *)(a1 + 888) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 880); ++i )
    {
      v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 888) + 16LL * i);
      if ( *v3 )
        MmReleaseDumpHibernateResources(*v3);
      v4 = (struct _MDL *)v3[1];
      if ( v4 )
        IoFreeMdl(v4);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 888), 0x706D644Cu);
    *(_QWORD *)(a1 + 888) = 0LL;
    *(_DWORD *)(a1 + 880) = 0;
  }
}
