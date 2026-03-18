/*
 * XREFs of VfThunkRemoveTargetNotify @ 0x1409BF464
 * Callers:
 *     VfTargetDriversRemove @ 0x14036F7DC (VfTargetDriversRemove.c)
 * Callees:
 *     ViThunkFreeSharedThunksArray @ 0x1409BF438 (ViThunkFreeSharedThunksArray.c)
 */

void __fastcall VfThunkRemoveTargetNotify(void **a1)
{
  void **v2; // rcx

  v2 = a1 + 3;
  if ( (*(_DWORD *)v2 & 1) == 0 )
  {
    ViThunkFreeSharedThunksArray(v2);
    ViThunkFreeSharedThunksArray(a1 + 4);
    ViThunkFreeSharedThunksArray(a1 + 5);
    ViThunkFreeSharedThunksArray(a1 + 6);
  }
}
