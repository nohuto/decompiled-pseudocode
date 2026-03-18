/*
 * XREFs of HvUnlockHiveFilePages @ 0x1406E2E54
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140204810 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     HvpViewMapAdjustFlag @ 0x1407A50BC (HvpViewMapAdjustFlag.c)
 */

int __fastcall HvUnlockHiveFilePages(__int64 a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 160);
  if ( (result & 0x800000) != 0 )
  {
    if ( (result & 0x20000) != 0 )
    {
      HvpViewMapAdjustFlag(a1 + 216);
      result = *(_DWORD *)(a1 + 160);
    }
    result &= ~0x800000u;
    *(_DWORD *)(a1 + 160) = result;
  }
  return result;
}
