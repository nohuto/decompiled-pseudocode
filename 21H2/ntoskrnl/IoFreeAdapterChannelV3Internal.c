/*
 * XREFs of IoFreeAdapterChannelV3Internal @ 0x14051295C
 * Callers:
 *     IoFreeAdapterChannelV3 @ 0x1405127BC (IoFreeAdapterChannelV3.c)
 * Callees:
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 *     HalpFreeDmaChannels @ 0x140519E90 (HalpFreeDmaChannels.c)
 */

void __fastcall IoFreeAdapterChannelV3Internal(__int64 a1)
{
  ULONG v1; // r8d

  v1 = *(_DWORD *)(a1 + 240);
  if ( v1 )
  {
    IoFreeMapRegisters((PDMA_ADAPTER)a1, *(PVOID *)(a1 + 232), v1);
    *(_DWORD *)(a1 + 240) = 0;
  }
  if ( !*(_BYTE *)(a1 + 433) )
  {
    if ( *(_DWORD *)(a1 + 384) )
      HalpFreeDmaChannels(a1);
  }
}
