/*
 * XREFs of MiCloneLargeFileOnlyVad @ 0x1408CFE10
 * Callers:
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiDecrementLargeSubsections @ 0x140540650 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1405416C0 (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiCloneLargeFileOnlyVad(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 32);
  v2 = *(unsigned int *)(a1 + 24);
  v8 = 0LL;
  v9 = 0LL;
  MiGetProtoPteAddress(a1, v2 | (v1 << 32), 0, &v8);
  MiGetProtoPteAddress(a1, *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32), 0, &v9);
  v4 = v8;
  v5 = v8;
  if ( (unsigned int)MiIncrementLargeSubsections(v8, *((unsigned int *)v8 + 11)) != -1 )
  {
    do
    {
      if ( v5 == v9 )
        return 0LL;
      v6 = v5;
      v5 = (__int64 *)v5[2];
    }
    while ( (unsigned int)MiIncrementLargeSubsections(v5, *((unsigned int *)v5 + 11)) != -1 );
    if ( v6 )
      MiDecrementLargeSubsections(v4, v6);
  }
  return 3221225626LL;
}
