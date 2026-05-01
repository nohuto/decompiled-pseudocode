/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardCompareHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardMergeHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@@@QEAAJ_K0@Z @ 0x180066EAC
 * Callers:
 *     ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x180051650 (-SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800671C0 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

int __fastcall CTSimpleArray<SIZE_CONSTRAINTS_CACHE_ENTRY,4294967294,CTPolicyCoTaskMem<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardCompareHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardMergeHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2,
        void *a3)
{
  unsigned __int64 v3; // rbx
  int result; // eax
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v3 = 4294967294LL;
  result = -2147024774;
  if ( a2 <= 0xFFFFFFFE )
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = 0;
    if ( a2 > v6 )
    {
      v7 = 2 * v6;
      if ( is_mul_ok(v6, 2uLL) )
      {
        result = 0;
      }
      else
      {
        v7 = -1LL;
        result = -2147024362;
      }
      if ( result >= 0 )
      {
        v8 = v7 - v6;
        v9 = v6 + 4096;
        if ( v8 <= 0x1000 )
          v9 = v7;
        v10 = v9;
        if ( a2 > v9 )
          v10 = a2;
        if ( v10 <= 0xFFFFFFFE )
        {
          v3 = v9;
          if ( a2 > v9 )
            v3 = a2;
        }
        v11 = 0LL;
        if ( is_mul_ok(v3, 0x14uLL) )
        {
          result = CTCoAllocPolicy::Realloc(&v11, (v3 * (unsigned __int128)0x14uLL) >> 64, *(void **)a1, 20 * v3, &v11);
          if ( result >= 0 )
          {
            *(_QWORD *)a1 = v11;
            *(_QWORD *)(a1 + 24) = v3;
          }
        }
        else
        {
          return -2147024362;
        }
      }
    }
  }
  return result;
}
