/*
 * XREFs of _RtlpHpAllocateHeap@16 @ 0x4B37803E
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 *     _RtlpLogHeapAllocateEvent@16 @ 0x4B36EDB6 (_RtlpLogHeapAllocateEvent@16.c)
 *     _RtlpHpAllocateHeapInternal@20 @ 0x4B3781B0 (_RtlpHpAllocateHeapInternal@20.c)
 *     _RtlpHpCalculateAllocSize@8 @ 0x4B378261 (_RtlpHpCalculateAllocSize@8.c)
 *     _RtlpHpCheckAllocationSizeLimit@12 @ 0x4B378285 (_RtlpHpCheckAllocationSizeLimit@12.c)
 *     _RtlpHpExtrasAppend@28 @ 0x4B378332 (_RtlpHpExtrasAppend@28.c)
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 */

int __fastcall RtlpHpAllocateHeap(int a1, unsigned int a2, int a3, __int16 a4)
{
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  size_t v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v15; // [esp-Ch] [ebp-34h]
  int v16; // [esp+10h] [ebp-18h]
  int v17; // [esp+14h] [ebp-14h]
  int v19; // [esp+1Ch] [ebp-Ch] BYREF
  int v20; // [esp+20h] [ebp-8h] BYREF
  int v21; // [esp+24h] [ebp-4h]

  v21 = a1;
  v5 = (a3 | *(_DWORD *)(a1 + 12)) & 0x93000F0B;
  if ( !RtlpHpCheckAllocationSizeLimit(a1 + 24) )
    goto LABEL_2;
  v16 = 0;
  v9 = 0;
  v19 = 0;
  if ( (v5 & 0x1000000) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 16);
    v16 = v10;
    if ( v10 )
    {
      v5 |= 8u;
      if ( RtlpCallInterceptRoutine(v10, a1, 0, 1, (int)&v19) < 0 )
      {
LABEL_2:
        v17 = 0;
LABEL_3:
        v20 = 0;
        v6 = 0;
LABEL_4:
        v7 = v21;
        goto LABEL_5;
      }
      v9 = v19;
    }
  }
  if ( a4 )
    v5 |= 8u;
  v11 = RtlpHpCalculateAllocSize(a2 + v9, v5);
  v17 = v11;
  if ( v11 < a2 || a2 > 0x7FFFFFFF )
    goto LABEL_3;
  v6 = RtlpHpAllocateHeapInternal(v11, v5 & 0x13000003, &v20);
  if ( !v6 )
    goto LABEL_4;
  if ( (v5 & 0x30000F08) == 0 )
    goto LABEL_4;
  v13 = RtlpHpExtrasAppend(a2, v12, v19, v5, a4);
  if ( !v16 )
    goto LABEL_4;
  *(_BYTE *)(v13 + 2) ^= (v16 ^ *(_BYTE *)(v13 + 2)) & 0xF;
  if ( RtlpCallInterceptRoutine(v16, v21, v6, 2, v13 + 8) >= 0 )
    goto LABEL_4;
  v15 = v5;
  v7 = v21;
  RtlpHpFreeHeap(v15, 0, 0);
  v6 = 0;
LABEL_5:
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v8 = 2147353472;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(v7, v6, v17, v20);
  return v6;
}
