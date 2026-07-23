/*
 * XREFs of MiFreeRegistryPageRange @ 0x140A4DD08
 * Callers:
 *     MmFreeLoaderBlock @ 0x140A4D7D0 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiFreeRegistryPageRange(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  char v9; // al
  int v10; // [rsp+38h] [rbp+10h] BYREF

  result = MiSwizzleInvalidPte(128LL);
  v7 = result;
  if ( v4 )
  {
    v8 = 48 * v5 - 0x57FFFFFFFE8LL;
    do
    {
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v10, v4, v5, v6);
        while ( *(__int64 *)v8 < 0 );
      }
      v9 = *(_BYTE *)(v8 + 10) | 0x10;
      *(_QWORD *)(v8 - 8) = v7;
      *(_BYTE *)(v8 + 10) = v9;
      MiDecrementShareCount(v8 - 24);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
      v8 += 48LL;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
