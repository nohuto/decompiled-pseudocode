/*
 * XREFs of PfpFlushEventBuffers @ 0x1407D9BE8
 * Callers:
 *     PfpFlushBuffers @ 0x1407D9F00 (PfpFlushBuffers.c)
 * Callees:
 *     PfTFullEventListAdd @ 0x14024029C (PfTFullEventListAdd.c)
 *     PfFbBufferListInsertInFree @ 0x14035FAE8 (PfFbBufferListInsertInFree.c)
 *     PfFbBufferListFlushStandby @ 0x14035FB90 (PfFbBufferListFlushStandby.c)
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PfpCopyEvent @ 0x1407D9CC0 (PfpCopyEvent.c)
 */

__int64 PfpFlushEventBuffers()
{
  struct _SLIST_ENTRY *v0; // rbx
  int v1; // esi
  PSLIST_ENTRY v2; // rcx
  struct _SLIST_ENTRY *v3; // rax
  struct _SLIST_ENTRY *v4; // rdi
  struct _SLIST_ENTRY *v5; // r14
  struct _SLIST_ENTRY *v8; // rcx

  v0 = 0LL;
  v1 = 0;
  PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140C4EAC0);
  v2 = RtlpInterlockedFlushSList(&stru_140C4EB40);
  if ( v2 )
  {
    do
    {
      v3 = v2;
      v2 = v2->Next;
      v3->Next = v0;
      v0 = v3;
    }
    while ( v2 );
    while ( 1 )
    {
      v4 = v0;
      v0 = v0->Next;
      v5 = v4 + 3;
      if ( *((_DWORD *)&v4[2].Next + 2) )
        break;
LABEL_6:
      PfFbBufferListInsertInFree(
        (_SLIST_ENTRY *)&stru_140C4EAC0,
        v4,
        LODWORD(v4[2].Next) - (_DWORD)v4,
        *((_DWORD *)&v4[2].Next + 3),
        1);
      if ( !v0 )
        return (unsigned int)v1;
    }
    while ( 1 )
    {
      v1 = PfpCopyEvent(v5);
      if ( v1 < 0 )
        break;
      v5 += (LODWORD(v5->Next) >> 2) & 0x3FF;
      if ( (*((_DWORD *)&v4[2].Next + 2))-- == 1 )
        goto LABEL_6;
    }
    memmove(&v4[3], v5, (unsigned int)(LODWORD(v4[2].Next) - (_DWORD)v5));
    v8 = v4;
    while ( 1 )
    {
      PfTFullEventListAdd(v8);
      if ( !v0 )
        break;
      v8 = v0;
      v0 = v0->Next;
    }
  }
  return (unsigned int)v1;
}
