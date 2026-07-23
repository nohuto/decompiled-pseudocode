/*
 * XREFs of RtlpHpLargeAllocReport @ 0x18010E730
 * Callers:
 *     RtlpHpLargeWalkHeap @ 0x180002CE8 (RtlpHpLargeWalkHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLargeAllocReport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int16 *v9; // r8
  __int64 v10; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *(_QWORD *)a3 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 32);
  *(_BYTE *)(a3 + 17) = 64;
  *(_WORD *)(a3 + 18) = 16385;
  *(_QWORD *)(a3 + 8) = (v5 & 0xFFFFFFFFFFFFF000uLL) - v4;
  *(_BYTE *)(a3 + 16) = *(_BYTE *)(a2 + 24);
  result = *(unsigned __int16 *)(a2 + 24);
  *(_QWORD *)(a3 + 36) = result;
  if ( (*(_BYTE *)(a2 + 32) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v7 = *(_QWORD *)(a3 + 8) + *(_QWORD *)a3;
    v8 = v7 + 16;
    if ( (*(_DWORD *)(a1 + 20) & 0x10000000) == 0 )
      v8 = v7;
    v9 = (unsigned __int16 *)((v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v10 = *((_QWORD *)v9 + 1);
    *(_WORD *)(a3 + 18) |= 0x10u;
    *(_QWORD *)(a3 + 24) = v10;
    *(_WORD *)(a3 + 18) |= *((_BYTE *)v9 + 2) >> 4 << 8;
    result = *v9;
    *(_WORD *)(a3 + 32) = result;
  }
  return result;
}
