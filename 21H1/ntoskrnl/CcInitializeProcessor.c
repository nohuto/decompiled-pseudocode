/*
 * XREFs of CcInitializeProcessor @ 0x14077EE70
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 *     CcInitializeCacheManager @ 0x140A397E8 (CcInitializeCacheManager.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x14033F550 (MmIsThisAnNtAsSystem.c)
 *     ExInitializeSystemLookasideList @ 0x140997D24 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcInitializeProcessor(__int64 a1)
{
  BOOLEAN IsThisAnNtAsSystem; // al
  BOOLEAN v3; // si
  PVOID PoolWithTag; // rbx
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  *(_QWORD *)(a1 + 2152) = &CcTwilightLookasideList;
  v3 = IsThisAnNtAsSystem;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4B576343u);
  if ( PoolWithTag )
    ExInitializeSystemLookasideList(
      (_DWORD)PoolWithTag,
      512,
      136,
      1264018243,
      v3 != 0 ? 256 : 128,
      (__int64)&ExSystemLookasideListHead);
  else
    PoolWithTag = &CcTwilightLookasideList;
  result = 0LL;
  *(_QWORD *)(a1 + 2144) = PoolWithTag;
  return result;
}
