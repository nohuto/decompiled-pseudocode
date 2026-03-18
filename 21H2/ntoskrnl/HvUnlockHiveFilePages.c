/*
 * XREFs of HvUnlockHiveFilePages @ 0x1406EA2F0
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14020B1F8 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     HvpViewMapAdjustFlag @ 0x14083D5F4 (HvpViewMapAdjustFlag.c)
 */

int __fastcall HvUnlockHiveFilePages(__int64 a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 160);
  if ( (result & 0x800000) != 0 )
  {
    if ( (result & 0x20000) != 0 )
    {
      HvpViewMapAdjustFlag(a1 + 224);
      result = *(_DWORD *)(a1 + 160);
    }
    result &= ~0x800000u;
    *(_DWORD *)(a1 + 160) = result;
  }
  return result;
}
