/*
 * XREFs of IopPortAddAllocation @ 0x1407C7FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddRange @ 0x1407645D0 (RtlAddRange.c)
 *     IopPortGetNextAlias @ 0x1407C8054 (IopPortGetNextAlias.c)
 */

__int64 __fastcall IopPortAddAllocation(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r10
  unsigned __int64 i; // [rsp+50h] [rbp+8h] BYREF

  RtlAddRange(
    *(_QWORD *)(a1 + 48),
    *(_QWORD *)a2,
    *(_QWORD *)(a2 + 8),
    *(_BYTE *)(a2 + 66),
    2 * (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 36LL) & 1) + 1,
    0LL,
    *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL));
  v4 = *(_QWORD *)a2;
  for ( i = *(_QWORD *)a2;
        ;
        RtlAddRange(
          *(_QWORD *)(a1 + 48),
          i,
          *(_QWORD *)(v6 + 16) + i - 1,
          *(_BYTE *)(a2 + 66) | 0x10,
          2 * (*(_BYTE *)(v6 + 36) & 1) + 1,
          0LL,
          *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL)) )
  {
    result = IopPortGetNextAlias(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL), v4, &i);
    if ( !(_BYTE)result )
      break;
    v4 = i;
  }
  return result;
}
