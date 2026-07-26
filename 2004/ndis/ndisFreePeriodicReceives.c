/*
 * XREFs of ndisFreePeriodicReceives @ 0x1C00A2C40
 * Callers:
 *     ndisMPeriodicReceivesResources @ 0x1C00A34FC (ndisMPeriodicReceivesResources.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0005310 (NdisFreeNetBufferList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C008E8F4 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ndisFreePeriodicReceives(PNET_BUFFER_LIST NetBufferList)
{
  PNET_BUFFER_LIST v1; // rbx
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NET_BUFFER_LIST *Alignment; // rbp
  struct _NPAGED_LOOKASIDE_LIST *v4; // rsi
  _MDL *CurrentMdl; // rdi

  if ( NetBufferList )
  {
    v1 = NetBufferList;
    do
    {
      FirstNetBuffer = v1->FirstNetBuffer;
      Alignment = (struct _NET_BUFFER_LIST *)v1->Link.Alignment;
      v1->Link.Alignment = 0LL;
      v4 = (struct _NPAGED_LOOKASIDE_LIST *)v1->MiniportReserved[1];
      CurrentMdl = FirstNetBuffer->CurrentMdl;
      if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
      if ( v4 )
        ExFreeToNPagedLookasideList(v4, CurrentMdl);
      else
        ExFreePoolWithTag(CurrentMdl, 0);
      NdisFreeNetBufferList(v1);
      v1 = Alignment;
    }
    while ( Alignment );
  }
}
