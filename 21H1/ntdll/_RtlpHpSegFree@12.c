/*
 * XREFs of _RtlpHpSegFree@12 @ 0x4B37B8B6
 * Callers:
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 *     _RtlpHpSegLfhVsFree@16 @ 0x4B37BE10 (_RtlpHpSegLfhVsFree@16.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpLogHeapFreeEvent@12 @ 0x4B36F097 (_RtlpLogHeapFreeEvent@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpLfhBucketUpdateStats@12 @ 0x4B3763A4 (_RtlpHpLfhBucketUpdateStats@12.c)
 *     _RtlpHpLfhSubsegmentFreeBlock@16 @ 0x4B377416 (_RtlpHpLfhSubsegmentFreeBlock@16.c)
 *     _RtlpHpSegDescriptorValidate@8 @ 0x4B37B82D (_RtlpHpSegDescriptorValidate@8.c)
 *     _RtlpHpSegPageRangeShrink@16 @ 0x4B37D0E7 (_RtlpHpSegPageRangeShrink@16.c)
 *     _RtlpHpVsContextFree@20 @ 0x4B37F419 (_RtlpHpVsContextFree@20.c)
 */

int __fastcall RtlpHpSegFree(int a1, unsigned int a2, int a3)
{
  int v5; // eax
  int v6; // esi
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h] BYREF

  v5 = RtlpHpSegDescriptorValidate(a1, a2);
  v6 = v5;
  v12 = v5;
  if ( v5 )
  {
    v7 = (v5 & *(_DWORD *)a1) + ((v5 - (v5 & *(_DWORD *)a1)) >> 4 << *(_BYTE *)(a1 + 4));
    if ( a2 <= v7 )
    {
      RtlpHpSegPageRangeShrink(0, a3);
      v6 = 1;
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v10 = 2147353472;
      if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapFreeEvent(*(_DWORD *)(a1 + 36), a2, 3);
    }
    else
    {
      if ( (*(_BYTE *)(v5 + 12) & 0xC) == 8 )
      {
        v6 = RtlpHpLfhSubsegmentFreeBlock(*(_RTL_SRWLOCK **)(a1 + 20), v7, a2, a3);
      }
      else
      {
        v6 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(a1 + 24), a2, a3, (int)&v13);
        if ( v6 )
        {
          v8 = *(_DWORD *)(a1 + 20);
          if ( v13 <= (unsigned int)*(unsigned __int16 *)(v8 + 32) - 8 )
            RtlpHpLfhBucketUpdateStats(v13, v8, a2, 0);
        }
      }
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v9 = 2147353472;
      if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v6 )
        RtlpLogHeapFreeEvent(*(_DWORD *)(a1 + 36), a2, ((*(_BYTE *)(v12 + 12) & 0xC) != 8) + 2);
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_DWORD *)(a1 + 36), a2, 0, 0, 0);
  }
  return v6;
}
