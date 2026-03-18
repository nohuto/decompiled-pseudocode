/*
 * XREFs of MiLogMapFileEvent @ 0x1408C6F88
 * Callers:
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiUnmapVad @ 0x140685B60 (MiUnmapVad.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x14052EB00 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x1408C6DAC (MiFillMapFileInfo.c)
 */

void __fastcall MiLogMapFileEvent(__int64 a1, unsigned __int16 a2)
{
  char v2; // al
  _OWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a1 + 48) & 0x70;
  memset(v4, 0, sizeof(v4));
  if ( v2 != 16 )
  {
    MiFillMapFileInfo(a1, (__int64)v4);
    MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v4, 44, 4200707);
  }
}
