/*
 * XREFs of NdisRetreatNetBufferListDataStart @ 0x1C00ACF30
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C00AD0A0 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C00AD4D0 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     NdisAdvanceNetBufferDataStart @ 0x1C00078F0 (NdisAdvanceNetBufferDataStart.c)
 *     NdisRetreatNetBufferDataStart @ 0x1C00083D0 (NdisRetreatNetBufferDataStart.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlHandler)
{
  int v5; // esi
  struct _NET_BUFFER *FirstNetBuffer; // rbx
  PMDL (__stdcall *v10)(PULONG); // r15
  void (__stdcall *v11)(PMDL); // rbp
  struct _NET_BUFFER *i; // rdi

  v5 = 0;
  if ( (FreeMdlHandler == 0LL) == (AllocateMdlHandler == 0LL) )
  {
    FirstNetBuffer = NetBufferList->FirstNetBuffer;
    v10 = ndisAllocateMdlInternal;
    v11 = ndisFreeMdlInternal;
    if ( AllocateMdlHandler )
    {
      v10 = AllocateMdlHandler;
      v11 = FreeMdlHandler;
    }
    while ( FirstNetBuffer )
    {
      v5 = NdisRetreatNetBufferDataStart(FirstNetBuffer, DataOffsetDelta, DataBackFill, v10);
      if ( v5 < 0 )
      {
        for ( i = NetBufferList->FirstNetBuffer; i != FirstNetBuffer; i = (struct _NET_BUFFER *)i->Link.Alignment )
          NdisAdvanceNetBufferDataStart(i, DataOffsetDelta, 1u, v11);
        return v5;
      }
      FirstNetBuffer = (struct _NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0xAu,
        &WPP_b4ded7699c0d348bfd391eb0aa005077_Traceguids);
    return -1073741811;
  }
  return v5;
}
