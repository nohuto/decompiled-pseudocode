/*
 * XREFs of _RtlpHpReAllocateHeap@24 @ 0x4B37955B
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 *     _RtlpLogHeapReallocateEvent@24 @ 0x4B36F15A (_RtlpLogHeapReallocateEvent@24.c)
 *     _RtlpHpCheckAllocationSizeLimit@12 @ 0x4B378285 (_RtlpHpCheckAllocationSizeLimit@12.c)
 *     _RtlpHpExtrasGet@16 @ 0x4B3783B5 (_RtlpHpExtrasGet@16.c)
 *     _RtlpHpReallocComputeSizes@20 @ 0x4B3797A5 (_RtlpHpReallocComputeSizes@20.c)
 *     _RtlpHpLargeReAlloc@16 @ 0x4B37A510 (_RtlpHpLargeReAlloc@16.c)
 *     _RtlpHpSegReAlloc@16 @ 0x4B37D316 (_RtlpHpSegReAlloc@16.c)
 *     _RtlCSparseBitmapBitmaskRead@12 @ 0x4B37DCEF (_RtlCSparseBitmapBitmaskRead@12.c)
 */

int __fastcall RtlpHpReAllocateHeap(int a1, int a2, int a3, unsigned int a4, _DWORD *a5, _WORD *a6)
{
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // edx
  unsigned int v10; // eax
  __int16 v11; // cx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  size_t v20; // [esp-4h] [ebp-3Ch]
  int v21[3]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v22; // [esp+1Ch] [ebp-1Ch]
  unsigned int v23; // [esp+20h] [ebp-18h]
  int v24; // [esp+24h] [ebp-14h]
  unsigned int v25; // [esp+28h] [ebp-10h]
  int v26; // [esp+2Ch] [ebp-Ch]
  int v27; // [esp+30h] [ebp-8h]

  v7 = (a2 | *(_DWORD *)(a1 + 12)) & 0x93000F0B;
  if ( a4 > 0x7FFFFFFF || !RtlpHpCheckAllocationSizeLimit(a4, a1, a1 + 24) )
    return 0;
  v8 = a3;
  v24 = a3;
  if ( !RtlpHpReallocComputeSizes(a4, v7, v21) || v23 < a4 )
    return -1;
  v9 = v21[0];
  v10 = 0;
  v25 = v21[0];
  if ( a6 )
  {
    v10 = RtlpHpExtrasGet(a1, a3, v7, a5);
    if ( !v10 || v10 == -1 )
      v11 = 0;
    else
      v11 = *(_WORD *)v10;
    *a6 = v11;
    v9 = v25;
  }
  else if ( a5 )
  {
    *a5 = v21[0];
  }
  if ( v9 == a4 )
    goto LABEL_42;
  v12 = 0;
  v26 = 0;
  if ( (v7 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      if ( (v10 || (v10 = RtlpHpExtrasGet(a1, a3, v7, 0)) != 0) && v10 != -1 )
      {
        v12 = *(_BYTE *)(v10 + 2) & 0xF;
        v26 = v12;
        if ( v12 )
        {
          if ( RtlpCallInterceptRoutine(v12, a1, a3, 5, v10 + 8) < 0 )
            return -1;
        }
      }
    }
  }
  v27 = v7 & 0x12000001 | 0x1000000;
  if ( (_WORD)a3 )
  {
    v14 = 0;
  }
  else
  {
    v13 = RtlCSparseBitmapBitmaskRead(v12);
    if ( !v13 )
    {
LABEL_27:
      v15 = RtlpHpLargeReAlloc(a3, v21);
      goto LABEL_29;
    }
    v14 = v13 - 1;
  }
  if ( v14 == 2 )
    goto LABEL_27;
  v15 = RtlpHpSegReAlloc(a3, v21);
LABEL_29:
  v8 = v15;
  if ( v26 )
  {
    if ( !v15 || v15 == -1 )
    {
      v15 = v24;
      v27 = v24;
    }
    else
    {
      v27 = v15;
    }
    v16 = RtlpHpExtrasGet(a1, v15, v7, 0);
    RtlpCallInterceptRoutine(v26, a1, v27, 6, v16 + 8);
  }
  if ( v8 && v8 != -1 )
  {
    v17 = v22;
    if ( (v7 & 2) != 0 && v22 > v25 )
    {
      LODWORD(v20) = v22 - v25;
      memset((void *)(v25 + v8), 0, v20);
      v17 = v22;
    }
    if ( (v7 & 0x10000000) != 0 )
    {
      *(_DWORD *)(v17 + v8) = -1414812757;
      *(_DWORD *)(v17 + v8 + 4) = -1414812757;
    }
LABEL_42:
    if ( RtlGetCurrentServiceSessionId() )
      v18 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v18 = 2147353472;
    if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v8 )
      RtlpLogHeapReallocateEvent(a1, v8, v24, v21[0], v22, 3);
  }
  return v8;
}
