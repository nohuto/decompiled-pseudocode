/*
 * XREFs of RtlpGetExtraStuffPointerUnsafe @ 0x1800F3FE4
 * Callers:
 *     RtlpWalkHeap @ 0x1800F4EEC (RtlpWalkHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetExtraStuffPointerUnsafe(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned __int16 v4; // ax
  int v5; // [rsp+8h] [rbp-10h]

  if ( *(_BYTE *)(a2 + 15) == 4 )
    return a2 - 32;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v3 = *(_DWORD *)(a2 + 8);
    LOWORD(v5) = v3;
    if ( (v3 & *(_DWORD *)(a1 + 124)) != 0 )
      v5 = *(_DWORD *)(a1 + 136) ^ v3;
    v4 = v5;
  }
  else
  {
    v4 = *(_WORD *)(a2 + 8);
  }
  return a2 + 16LL * v4 - 16;
}
