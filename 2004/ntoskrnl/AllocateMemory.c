/*
 * XREFs of AllocateMemory @ 0x1405B5310
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405B535C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405B55EC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AllocateMemory(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x4E4C53u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
