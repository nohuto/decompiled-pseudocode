/*
 * XREFs of MiLogMapFileEvent @ 0x1408C1148
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiUnmapVad @ 0x140601100 (MiUnmapVad.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x14052B130 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x1408C0F6C (MiFillMapFileInfo.c)
 */

char __fastcall MiLogMapFileEvent(__int64 a1, __int16 a2)
{
  char result; // al
  _OWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF

  result = *(_DWORD *)(a1 + 48) & 0x70;
  memset(v4, 0, sizeof(v4));
  if ( result != 16 )
  {
    MiFillMapFileInfo(a1, (__int64)v4);
    return MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v4, 44, 4200707);
  }
  return result;
}
