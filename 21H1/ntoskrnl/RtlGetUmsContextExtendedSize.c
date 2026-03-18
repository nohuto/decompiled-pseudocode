/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x14058D6CC
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x14057BC64 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x140707AB4 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x1409061B4 (PspUmsInitializeContext.c)
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
