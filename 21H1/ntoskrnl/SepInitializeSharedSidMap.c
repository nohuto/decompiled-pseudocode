/*
 * XREFs of SepInitializeSharedSidMap @ 0x1407A70DC
 * Callers:
 *     SepVariableInitialization @ 0x140A61FA8 (SepVariableInitialization.c)
 * Callees:
 *     RtlCreateHashTable @ 0x1403730E0 (RtlCreateHashTable.c)
 */

__int64 SepInitializeSharedSidMap()
{
  PRTL_DYNAMIC_HASH_TABLE *v0; // rcx
  unsigned int v1; // ebx

  v0 = (PRTL_DYNAMIC_HASH_TABLE *)g_SepSidMapping;
  v1 = 0;
  *(_QWORD *)g_SepSidMapping = 0LL;
  *++v0 = 0LL;
  if ( !RtlCreateHashTable(v0, 0, 0) )
    return (unsigned int)-1073741801;
  return v1;
}
