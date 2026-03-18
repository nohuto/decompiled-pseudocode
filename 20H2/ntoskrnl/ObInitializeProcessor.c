/*
 * XREFs of ObInitializeProcessor @ 0x14078BCBC
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x14031F360 (MmIsThisAnNtAsSystem.c)
 *     ExInitializeSystemLookasideList @ 0x14099EDC4 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObInitializeProcessor(_QWORD *a1)
{
  BOOLEAN IsThisAnNtAsSystem; // bp
  PVOID PoolWithTag; // rax
  void *v4; // rbx
  PVOID v5; // rax
  void *v6; // rbx
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  a1[265] = &ObpCreateInfoLookasideList;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4943624Fu);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    ExInitializeSystemLookasideList(
      (_DWORD)PoolWithTag,
      512,
      64,
      1229152847,
      IsThisAnNtAsSystem != 0 ? 64 : 32,
      (__int64)&ExSystemLookasideListHead);
  else
    v4 = &ObpCreateInfoLookasideList;
  a1[264] = v4;
  a1[267] = &ObpNameBufferLookasideList;
  v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4D4E624Fu);
  v6 = v5;
  if ( v5 )
    ExInitializeSystemLookasideList(
      (_DWORD)v5,
      1,
      248,
      1296982607,
      IsThisAnNtAsSystem != 0 ? 32 : 16,
      (__int64)&ExSystemLookasideListHead);
  else
    v6 = &ObpNameBufferLookasideList;
  result = 0LL;
  a1[266] = v6;
  return result;
}
