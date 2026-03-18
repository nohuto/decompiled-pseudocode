/*
 * XREFs of CcMdlReadComplete2 @ 0x140644270
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x1402C0A60 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x1406E6320 (CcMdlReadComplete.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 */

void __fastcall CcMdlReadComplete2(__int64 a1, struct _MDL *a2)
{
  struct _MDL *v2; // rdi
  struct _MDL *Next; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      Next = v2->Next;
      MmUnlockPages(v2);
      IoFreeMdl(v2);
      v2 = Next;
    }
    while ( Next );
  }
}
