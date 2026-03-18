/*
 * XREFs of IrqArbPreprocessEntry @ 0x1C00A1DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbPreprocessEntry(__int64 a1, __int64 a2)
{
  char v3; // r8
  char v4; // r8
  _OWORD *PoolWithTag; // rax

  v3 = *(_BYTE *)(a2 + 66) & 0xCF;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL) + 4LL) & 1) != 0 )
    v4 = v3 | 0x20;
  else
    v4 = v3 | 0x10;
  *(_BYTE *)(a2 + 66) = v4;
  if ( (*(_BYTE *)(a2 + 64) & 0x10) != 0 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x49706341u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *(_WORD *)(a2 + 64) |= 0x10u;
    *(_QWORD *)(a2 + 72) = PoolWithTag;
    return 0LL;
  }
  return 3221225626LL;
}
