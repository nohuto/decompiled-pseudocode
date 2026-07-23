/*
 * XREFs of KiUpdateNodeAffinitizedFlag @ 0x140265E74
 * Callers:
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KiSetSystemAffinityThread @ 0x14029CC14 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x14029CDF0 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x14029D724 (KiSetAffinityThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateNodeAffinitizedFlag(__int64 a1)
{
  unsigned __int64 v1; // r10
  __int64 v3; // rcx
  int v4; // edx
  __int64 result; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // r11

  v1 = *(_QWORD *)(a1 + 576);
  v3 = *(unsigned __int16 *)(a1 + 584);
  if ( v1 == qword_140CFC848[v3] )
  {
LABEL_2:
    v4 = 1;
  }
  else if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v4 = 0;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      _BitScanReverse64(&v6, v1);
      v7 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(((_DWORD)v3 << 6) + v6)]]
                                 + 192)
                     + 136LL);
      if ( (v1 & v7) != v7 )
        break;
      v1 &= ~v7;
      if ( !v1 )
        goto LABEL_2;
    }
  }
  result = (*(unsigned __int8 *)(a1 + 2) >> 3) & 1;
  if ( v4 == (_DWORD)result )
    _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
  return result;
}
