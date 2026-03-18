/*
 * XREFs of IopLiveDumpFreeMappingResources @ 0x140893B5C
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x1408938CC (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x14089414C (IopLiveDumpReleaseResources.c)
 * Callees:
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     MmReleaseDumpHibernateResources @ 0x14075FB64 (MmReleaseDumpHibernateResources.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeMappingResources(__int64 a1)
{
  unsigned int i; // edi
  unsigned __int64 *v3; // rsi
  struct _MDL *v4; // rcx

  if ( *(_QWORD *)(a1 + 792) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 784); ++i )
    {
      v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 792) + 16LL * i);
      if ( *v3 )
        MmReleaseDumpHibernateResources(*v3);
      v4 = (struct _MDL *)v3[1];
      if ( v4 )
        IoFreeMdl(v4);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0x706D644Cu);
    *(_QWORD *)(a1 + 792) = 0LL;
    *(_DWORD *)(a1 + 784) = 0;
  }
}
