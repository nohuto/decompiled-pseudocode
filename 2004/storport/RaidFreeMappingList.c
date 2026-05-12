/*
 * XREFs of RaidFreeMappingList @ 0x1C004414C
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C0077970 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidFreeMappingList(void **a1)
{
  PVOID *v1; // rdi
  PVOID *v3; // rbx

  v1 = (PVOID *)*a1;
  if ( *a1 )
  {
    do
    {
      v3 = (PVOID *)*v1;
      MmUnmapIoSpace(v1[1], *((unsigned int *)v1 + 4));
      ExFreePoolWithTag(v1, 0x4D416152u);
      v1 = v3;
    }
    while ( v3 );
  }
  *a1 = 0LL;
}
