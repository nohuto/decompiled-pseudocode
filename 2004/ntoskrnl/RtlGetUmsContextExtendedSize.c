/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x14058DDBC
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x14057C2A4 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x1406B1BF4 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x140907464 (PspUmsInitializeContext.c)
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
