/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x1405917EC
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x14057FCD4 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x140694298 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x14090D084 (PspUmsInitializeContext.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetUmsContextExtendedSize()
{
  unsigned int v0; // ecx

  v0 = 1312;
  if ( MEMORY[0xFFFFF780000003E8] )
    return (unsigned int)(MEMORY[0xFFFFF780000003E8] + 1375);
  return v0;
}
