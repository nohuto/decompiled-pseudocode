/*
 * XREFs of CcMdlReadComplete2 @ 0x1406AC2D8
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x14029A930 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x14061B410 (CcMdlReadComplete.c)
 * Callees:
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
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
