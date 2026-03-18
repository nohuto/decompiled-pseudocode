/*
 * XREFs of KiHeteroComputeThreadWorkloadProperties @ 0x140574018
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140308640 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x14045AFC6 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KeSetThreadBamQosLevel @ 0x14045AB80 (KeSetThreadBamQosLevel.c)
 *     KiGetHeteroThreadQos @ 0x14045AE34 (KiGetHeteroThreadQos.c)
 *     KiHeteroComputeThreadImportance @ 0x140573FB4 (KiHeteroComputeThreadImportance.c)
 */

__int64 __fastcall KiHeteroComputeThreadWorkloadProperties(__int64 a1, __int64 a2, __int64 a3)
{
  int HeteroThreadQos; // eax
  __int64 v6; // r9
  unsigned int v7; // ecx
  BOOL v8; // r8d
  char v9; // al
  __int64 result; // rax
  BOOL v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v12 = HIDWORD(a2);
  v11 = 0;
  *(_OWORD *)a3 = 0LL;
  *(_DWORD *)(a3 + 16) = 0;
  HeteroThreadQos = KiGetHeteroThreadQos(a1, a2, &v11);
  v6 = HeteroThreadQos;
  if ( HeteroThreadQos != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    KeSetThreadBamQosLevel(a1, HeteroThreadQos);
  v7 = *(unsigned __int8 *)(a1 + 125);
  v8 = v11;
  if ( v7 >= 5 )
    v7 = *((_DWORD *)&KiDynamicHeteroCpuPolicy + 2 * v6 + v11);
  v9 = *(_BYTE *)(a1 + 195);
  *(_DWORD *)(a3 + 12) = v7;
  *(_BYTE *)a3 = v9;
  *(_DWORD *)(a3 + 4) = v6;
  *(_DWORD *)(a3 + 8) = v8;
  *(_BYTE *)(a3 + 16) = *(_BYTE *)(a1 + 516);
  result = KiHeteroComputeThreadImportance(v6, *(_BYTE *)(a1 + 195));
  *(_WORD *)(a3 + 18) = result;
  return result;
}
