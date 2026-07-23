/*
 * XREFs of KiSelectIdealProcessorForProcess @ 0x14029AAE4
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x14029AA54 (KiSetIdealNodeProcessByGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectIdealProcessorForProcess(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // r8d
  unsigned __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  __int64 v8; // rax

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 376);
  v4 = *((unsigned __int16 *)a2 + 4);
  v5 = *a2 & *(_QWORD *)(a1 + 136);
  if ( v3 )
  {
    LOWORD(v6) = *(_WORD *)(a1 + 110) & 0x3F;
    v7 = ~((1LL << (*(_WORD *)(a1 + 110) & 0x3F)) - 1) & v3;
    do
    {
      v8 = v7 & ~(1LL << v6);
      v7 = *(_QWORD *)(a1 + 376);
      if ( v8 )
        v7 = v8;
      _BitScanForward64((unsigned __int64 *)&v6, v7);
      v5 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)((v4 << 6) + v6)]];
    }
    while ( (v2 & *(_QWORD *)(v5 + 33896)) == 0 );
    _BitScanForward64(&v5, v2 & *(_QWORD *)(v5 + 33896));
    *(_WORD *)(a1 + 110) = v5;
  }
  else
  {
    _BitScanForward64(&v5, v5);
  }
  return LOWORD(KiProcessorNumberToIndexMappingTable[(unsigned int)(v5 + (v4 << 6))]);
}
