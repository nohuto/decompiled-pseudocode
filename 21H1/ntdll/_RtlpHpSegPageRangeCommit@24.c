/*
 * XREFs of _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B
 * Callers:
 *     _RtlpHpMetadataCommit@24 @ 0x4B3793EF (_RtlpHpMetadataCommit@24.c)
 *     _RtlpHpSegAlloc@20 @ 0x4B37B40B (_RtlpHpSegAlloc@20.c)
 *     _RtlpHpSegLfhVsCommit@12 @ 0x4B37BD10 (_RtlpHpSegLfhVsCommit@12.c)
 *     _RtlpHpSegLfhVsDecommit@12 @ 0x4B37BD60 (_RtlpHpSegLfhVsDecommit@12.c)
 *     _RtlpHpSegPageRangeCoalesce@20 @ 0x4B37CA1F (_RtlpHpSegPageRangeCoalesce@20.c)
 *     _RtlpHpSegReAlloc@16 @ 0x4B37D316 (_RtlpHpSegReAlloc@16.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpLogHeapDecommit@16 @ 0x4B36EF8E (_RtlpLogHeapDecommit@16.c)
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 *     _RtlpHpSegPageRangeHandleCommit@20 @ 0x4B37CEB5 (_RtlpHpSegPageRangeHandleCommit@20.c)
 *     _RtlpHpSegUpdateCommit@12 @ 0x4B37DA58 (_RtlpHpSegUpdateCommit@12.c)
 */

int __fastcall RtlpHpSegPageRangeCommit(int a1, int a2, unsigned int a3, int a4, unsigned int a5, _DWORD *a6)
{
  unsigned int v6; // esi
  char v7; // al
  int v8; // edx
  unsigned int v9; // ebx
  int i; // ecx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int result; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // [esp+Ch] [ebp-2Ch]
  unsigned int v22; // [esp+14h] [ebp-24h] BYREF
  int v23; // [esp+18h] [ebp-20h]
  int v24; // [esp+1Ch] [ebp-1Ch]
  unsigned int v25; // [esp+20h] [ebp-18h]
  int v26; // [esp+24h] [ebp-14h]
  int v27; // [esp+28h] [ebp-10h]
  int v28; // [esp+2Ch] [ebp-Ch]
  int v29; // [esp+30h] [ebp-8h]
  int v30; // [esp+34h] [ebp-4h]

  v6 = a3;
  v24 = 2;
  v7 = *(_BYTE *)(a1 + 9) & 7;
  v23 = a2;
  v30 = (a5 >> 22) & 2;
  v29 = v7 == 0 ? 1023 : 511;
  v8 = (a2 - (a2 & *(_DWORD *)a1)) >> 4 << *(_BYTE *)(a1 + 5);
  v28 = v8;
  if ( a4 <= 0 )
  {
    v9 = a3 - a4;
  }
  else
  {
    v24 = 0;
    v9 = a4 + a3;
  }
  for ( i = 0; ; i = v12 + v27 )
  {
    v27 = i;
    if ( v6 >= v9 )
      break;
    v11 = v29 - (v29 & (v6 + v8)) + 1;
    if ( v11 >= v9 - v6 )
      v11 = v9 - v6;
    a3 = v6;
    v22 = v11;
    v12 = RtlpHpSegPageRangeHandleCommit(&a3, &v22, v24);
    v20 = v12;
    if ( v12 )
    {
      v13 = v23 & *(_DWORD *)a1;
      v26 = v13;
      v25 = v28 + a3;
      if ( v12 > 0 )
      {
        v14 = 4096;
        if ( (a5 & 2) != 0 )
          v14 = 1073745920;
      }
      else
      {
        v14 = 0x4000;
      }
      result = RtlpHpSegMgrCommit(a1, v13, v25, v22, v12, v14, v30);
      if ( result < 0 )
        return result;
      v16 = v20;
      if ( v20 > 0 )
      {
        RtlpHpSegPageRangeHandleCommit(&a3, &v22, 1);
        v16 = v20;
      }
      RtlpHpSegUpdateCommit(v16);
      if ( RtlGetCurrentServiceSessionId() )
        v17 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v17 = 2147353472;
      if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v18 = v26 + (v25 << 12);
        v19 = *(_DWORD *)(a1 + 36);
        if ( v20 <= 0 )
          RtlpLogHeapDecommit(v19, v18, v22 << 12, 13);
        else
          RtlpLogHeapCommit(v19, v18, v22 << 12, 10);
      }
      v12 = v20;
    }
    v6 += v11;
    v8 = v28;
  }
  if ( a6 )
    *a6 = i;
  return 0;
}
