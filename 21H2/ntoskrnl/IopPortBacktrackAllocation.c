/*
 * XREFs of IopPortBacktrackAllocation @ 0x1408A3260
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteRange @ 0x1407615C0 (RtlDeleteRange.c)
 *     IopPortGetNextAlias @ 0x1407C8054 (IopPortGetNextAlias.c)
 */

__int64 __fastcall IopPortBacktrackAllocation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rdi
  char NextAlias; // al
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  for ( i = *a2; ; RtlDeleteRange(v8, i, *(_QWORD *)(v7 + 16) + i - 1, v6) )
  {
    NextAlias = IopPortGetNextAlias(*(_DWORD *)(a2[5] + 36), v2, &i);
    v8 = *(_QWORD *)(a1 + 48);
    if ( !NextAlias )
      break;
    v2 = i;
  }
  return RtlDeleteRange(v8, *a2, a2[1], v6);
}
