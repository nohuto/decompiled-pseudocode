/*
 * XREFs of MiPageAttributeBatchChangeNeeded @ 0x140334EC0
 * Callers:
 *     MiConvertContiguousPages @ 0x140334AA4 (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140334C04 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiPageAttributeBatchChangeNeeded(__int64 a1, unsigned int a2)
{
  int v2; // eax
  char v4; // r8
  unsigned int v5; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( v2 == a2 )
    return 0LL;
  if ( v2 != 1 )
  {
    if ( v2 == 3
      || (v4 = *(_BYTE *)(a1 + 31) & 0xF, _InterlockedOr(v6, 0), v5 = ((_BYTE)KiTbFlushTimeStamp - v4) & 0xF, v5 > 2)
      || (v4 & 1) == 0 && v5 >= 2 )
    {
      MiChangePageAttribute(a1, a2, 4);
      return 0LL;
    }
  }
  return 1LL;
}
