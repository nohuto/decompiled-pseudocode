/*
 * XREFs of MiGetPagesRemainingInResidentPage @ 0x1403F521C
 * Callers:
 *     MiAddPhysicalPagesToCrashDump @ 0x140536198 (MiAddPhysicalPagesToCrashDump.c)
 * Callees:
 *     MiGetBaseResidentPageForBugCheck @ 0x1403F50F0 (MiGetBaseResidentPageForBugCheck.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F536C (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

__int64 __fastcall MiGetPagesRemainingInResidentPage(__int64 a1, int *a2, unsigned int *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  int PfnPageSizeIndex; // eax
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  int v13; // r8d
  __int64 v14; // rdx
  int v16; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0;
  v17 = 0;
  v6 = (a1 + 0x58000000000LL) / 48;
  if ( (KiBugCheckActive & 3) != 0 )
  {
    v7 = MiGetBaseResidentPageForBugCheck(a1);
    if ( v7 )
    {
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(v7, v8, *(unsigned __int8 *)(v7 + 34), v9);
    }
    else
    {
      v11 = *(unsigned __int8 *)(a1 + 34);
      PfnPageSizeIndex = 3;
    }
    v12 = v11 >> 6;
    v13 = v11 & 7;
  }
  else
  {
    PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a1, &v16, &v17);
    v13 = v16;
    v12 = v17;
  }
  if ( PfnPageSizeIndex == 3 )
    v14 = 1LL;
  else
    v14 = MiLargePageSizes[PfnPageSizeIndex];
  *a2 = v13;
  *a3 = v12;
  return v14 + (v6 & ~(v14 - 1)) - v6;
}
