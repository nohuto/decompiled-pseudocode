/*
 * XREFs of IoFreeAdapterChannelV3Internal @ 0x1404C11E0
 * Callers:
 *     IoFreeAdapterChannelV3 @ 0x1404C103C (IoFreeAdapterChannelV3.c)
 * Callees:
 *     IoFreeMapRegisters @ 0x14039F780 (IoFreeMapRegisters.c)
 *     HalpFreeDmaChannels @ 0x1404C9E20 (HalpFreeDmaChannels.c)
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
