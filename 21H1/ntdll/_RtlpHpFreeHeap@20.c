/*
 * XREFs of _RtlpHpFreeHeap@20 @ 0x4B3784F8
 * Callers:
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlpHpAllocateHeap@16 @ 0x4B37803E (_RtlpHpAllocateHeap@16.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 *     _RtlpHpReallocMove@16 @ 0x4B37981A (_RtlpHpReallocMove@16.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 *     _RtlpLogHeapFreeEvent@12 @ 0x4B36F097 (_RtlpLogHeapFreeEvent@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpExtrasGet@16 @ 0x4B3783B5 (_RtlpHpExtrasGet@16.c)
 *     _RtlpHpSizeHeap@12 @ 0x4B37999D (_RtlpHpSizeHeap@12.c)
 *     _RtlpHpSizeHeapInternal@16 @ 0x4B379A08 (_RtlpHpSizeHeapInternal@16.c)
 *     _RtlpHpLargeFree@12 @ 0x4B37A3A3 (_RtlpHpLargeFree@12.c)
 *     _RtlpHpSegFree@12 @ 0x4B37B8B6 (_RtlpHpSegFree@12.c)
 *     _RtlCSparseBitmapBitmaskRead@12 @ 0x4B37DCEF (_RtlCSparseBitmapBitmaskRead@12.c)
 */

int __fastcall RtlpHpFreeHeap(_DWORD *a1, int a2, int a3, _DWORD *a4, _WORD *a5)
{
  int v6; // eax
  void *v7; // ecx
  int v8; // ebx
  int v9; // esi
  unsigned int v10; // eax
  __int16 v11; // cx
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v17; // [esp+Ch] [ebp-4h]

  v17 = a2;
  v6 = a1[3];
  v7 = (void *)a1[44];
  v8 = v6 & 0x11000001 | a3;
  if ( v7 && v7 == NtCurrentTeb()->ClientId.UniqueThread )
    v8 |= 1u;
  v9 = 0;
  v10 = 0;
  if ( a5 )
  {
    v10 = RtlpHpExtrasGet((int)a1, a2, v8, a4);
    if ( !v10 || v10 == -1 )
      v11 = 0;
    else
      v11 = *(_WORD *)v10;
    *a5 = v11;
    v12 = a4;
  }
  else
  {
    v12 = a4;
    if ( !a4 )
      goto LABEL_13;
    v13 = RtlpHpSizeHeapInternal(v8, 0);
    v12 = a4;
    *a4 = v13;
    v10 = 0;
  }
  a2 = v17;
LABEL_13:
  if ( (v8 & 0x1000000) != 0
    || !a1[4]
    || !v10 && (v10 = RtlpHpExtrasGet((int)a1, a2, v8, v12)) == 0
    || v10 == -1
    || (LOBYTE(v12) = *(_BYTE *)(v10 + 2), ((unsigned __int8)v12 & 0xF) == 0)
    || RtlpCallInterceptRoutine((unsigned __int8)v12 & 0xF, (int)a1, v17, 3, v10 + 8) >= 0 )
  {
    if ( (a1[3] & 0x10000000) != 0 && RtlpHpSizeHeap(v8) == -1 )
    {
      RtlpLogHeapFailure(9, (int)a1, v17, 0, 0, 0);
      return v9;
    }
    if ( !(_WORD)v17 )
    {
      v14 = RtlCSparseBitmapBitmaskRead(v12);
      if ( !v14 )
      {
LABEL_27:
        v9 = RtlpHpLargeFree(v8) != 0;
        if ( RtlGetCurrentServiceSessionId() )
          v15 = (int)NtCurrentPeb()->SharedData + 550;
        else
          v15 = 2147353472;
        if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v9 )
          RtlpLogHeapFreeEvent((int)a1, v17, 3);
        return v9;
      }
      v9 = v14 - 1;
    }
    if ( v9 != 2 )
      return RtlpHpSegFree(&a1[32 * v9 + 64], v8);
    goto LABEL_27;
  }
  return v9;
}
