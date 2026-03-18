/*
 * XREFs of _DisassociateShellFrameAppThreads2@8 @ 0x141CCF
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _NtUserAttachThreadInput@12 @ 0xC4BFA (_NtUserAttachThreadInput@12.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall DisassociateShellFrameAppThreads2(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *result; // eax
  struct _LIST_ENTRY *Flink; // ecx
  struct _LIST_ENTRY *Blink; // edx

  for ( result = gShellFrameAppThreadsAssociationList.Flink;
        result != &gShellFrameAppThreadsAssociationList;
        result = result->Flink )
  {
    if ( result[1].Flink == a1 && result[1].Blink == a2 )
      goto LABEL_7;
  }
  result = 0;
LABEL_7:
  a2[86].Flink = (struct _LIST_ENTRY *)((int)a2[86].Flink & ~0x80000u);
  if ( result )
  {
    Flink = result->Flink;
    if ( result->Flink->Blink != result || (Blink = result->Blink, Blink->Flink != result) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    return (struct _LIST_ENTRY *)Win32FreePool(result);
  }
  return result;
}
