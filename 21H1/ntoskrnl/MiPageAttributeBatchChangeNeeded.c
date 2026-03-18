/*
 * XREFs of MiPageAttributeBatchChangeNeeded @ 0x1403454FC
 * Callers:
 *     MiConvertContiguousPages @ 0x14034534C (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140345564 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 * Callees:
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiPageAttributeBatchChangeNeeded(__int64 a1, __int64 a2)
{
  int v2; // eax
  char v4; // r8
  unsigned int v5; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( v2 == (_DWORD)a2 )
    return 0LL;
  if ( v2 != 1 )
  {
    if ( v2 == 3
      || (v4 = *(_BYTE *)(a1 + 31) & 0xF, _InterlockedOr(v6, 0), v5 = ((_BYTE)KiTbFlushTimeStamp - v4) & 0xF, v5 > 2)
      || (v4 & 1) == 0 && v5 >= 2 )
    {
      MiChangePageAttribute(a1, a2, 4LL);
      return 0LL;
    }
  }
  return 1LL;
}
