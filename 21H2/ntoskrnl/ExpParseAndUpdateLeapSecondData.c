/*
 * XREFs of ExpParseAndUpdateLeapSecondData @ 0x1407AAB88
 * Callers:
 *     ExpReadLeapSecondData @ 0x1407A93B8 (ExpReadLeapSecondData.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlParseLeapSecondData @ 0x140980D0C (RtlParseLeapSecondData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpParseAndUpdateLeapSecondData(__int64 a1, __int64 a2)
{
  char *v2; // rsi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  size_t v10; // r15
  char *PoolWithTag; // rax
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 4) == 3 && (v5 = *(unsigned int *)(a1 + 8), v5 == 12 * (v5 / 0xC)) )
  {
    v6 = v5 / 0xC;
    v7 = 8 * (*(_DWORD *)(a1 + 8) / 0xCu) + 8;
    if ( v7 > 0x1000 )
      return 2;
    if ( !(_DWORD)v6 )
      return 0;
    if ( (unsigned int)v6 <= *(_DWORD *)(a2 + 4) )
      return (unsigned int)v6 < *(_DWORD *)(a2 + 4) ? 3 : 0;
    v10 = v7;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x6453704Cu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      return 7;
    memset(PoolWithTag, 0, v10);
    v8 = RtlParseLeapSecondData(a1 + 12, (unsigned int)v6, a2, v2);
    if ( !v8 )
    {
      memmove((void *)(a2 + 8), v2 + 8, 8LL * (unsigned int)v6);
      _InterlockedOr(v12, 0);
      *(_DWORD *)(a2 + 4) = v6;
    }
  }
  else
  {
    v8 = 1;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x6453704Cu);
  return v8;
}
