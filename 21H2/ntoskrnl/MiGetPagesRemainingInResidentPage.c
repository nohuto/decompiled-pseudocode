/*
 * XREFs of MiGetPagesRemainingInResidentPage @ 0x1403F69B8
 * Callers:
 *     MiAddPhysicalPagesToCrashDump @ 0x140537ED8 (MiAddPhysicalPagesToCrashDump.c)
 * Callees:
 *     MiGetBaseResidentPageForBugCheck @ 0x1403F688C (MiGetBaseResidentPageForBugCheck.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6B08 (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

__int64 __fastcall MiGetPagesRemainingInResidentPage(__int64 a1, int *a2, unsigned int *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  int PfnPageSizeIndex; // eax
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  int v11; // r8d
  __int64 v12; // rdx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0;
  v15 = 0;
  v6 = (a1 + 0x58000000000LL) / 48;
  if ( (KiBugCheckActive & 3) != 0 )
  {
    v7 = MiGetBaseResidentPageForBugCheck(a1);
    if ( v7 )
    {
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(v7);
    }
    else
    {
      v9 = *(unsigned __int8 *)(a1 + 34);
      PfnPageSizeIndex = 3;
    }
    v10 = v9 >> 6;
    v11 = v9 & 7;
  }
  else
  {
    PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a1, &v14, &v15);
    v11 = v14;
    v10 = v15;
  }
  if ( PfnPageSizeIndex == 3 )
    v12 = 1LL;
  else
    v12 = MiLargePageSizes[PfnPageSizeIndex];
  *a2 = v11;
  *a3 = v10;
  return v12 + (v6 & ~(v12 - 1)) - v6;
}
