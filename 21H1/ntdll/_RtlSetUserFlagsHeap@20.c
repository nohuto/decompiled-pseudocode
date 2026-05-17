/*
 * XREFs of _RtlSetUserFlagsHeap@20 @ 0x4B357160
 * Callers:
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 * Callees:
 *     @RtlpProbeUserBufferSafe@8 @ 0x4B2AA492 (@RtlpProbeUserBufferSafe@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 *     _RtlpHpConvertFlagsToSegmentFlags@4 @ 0x4B35D732 (_RtlpHpConvertFlagsToSegmentFlags@4.c)
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpSetUserFlags@20 @ 0x4B379956 (_RtlpHpSetUserFlags@20.c)
 */

char __stdcall RtlSetUserFlagsHeap(int a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  char v5; // bl
  void *v6; // ecx
  int v7; // esi
  int v8; // ecx
  int v9; // esi
  struct _TEB *v10; // esi
  char v11; // al
  struct _TEB *v12; // esi
  int v14; // [esp+0h] [ebp-3Ch]
  int v15; // [esp+4h] [ebp-38h]
  int v16; // [esp+18h] [ebp-24h]
  int v17; // [esp+18h] [ebp-24h]
  int v18; // [esp+1Ch] [ebp-20h]
  char v19; // [esp+22h] [ebp-1Ah]
  char v20; // [esp+23h] [ebp-19h]

  v5 = 0;
  v19 = 0;
  v20 = 0;
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    goto LABEL_38;
  if ( *(_DWORD *)(a1 + 8) != -571548178 )
  {
    v17 = *(_DWORD *)(a1 + 68) | a2;
    if ( (v17 & 0x61000000) != 0 && (v17 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap(a3, a4, a5, v14, v15);
    if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    {
      v7 = a3;
      v8 = RtlpProbeUserBufferSafe(a1, a3);
LABEL_21:
      if ( v8 && *(char *)(v8 + 7) >= 0 )
      {
        if ( (v17 & 1) == 0 )
        {
          RtlEnterCriticalSection(*(_DWORD *)(a1 + 200));
          v19 = 1;
        }
        v9 = v7 - 8;
        if ( *(_BYTE *)(v9 + 7) == 5 )
          v9 -= 8 * *(unsigned __int8 *)(v9 + 6);
        v18 = v9;
        if ( *(_DWORD *)(a1 + 76) )
        {
          *(_DWORD *)v9 ^= *(_DWORD *)(a1 + 80);
          if ( *(_BYTE *)(v9 + 3) != (*(_BYTE *)v9 ^ (unsigned __int8)(*(_BYTE *)(v9 + 1) ^ *(_BYTE *)(v9 + 2))) )
            RtlpAnalyzeHeapFailure(v8);
        }
        if ( (*(_BYTE *)(v9 + 7) & 0x3F) != 0 )
        {
          v11 = *(_BYTE *)(v9 + 2) & ~(unsigned __int8)(a4 >> 4);
          *(_BYTE *)(v9 + 2) = v11;
          *(_BYTE *)(v9 + 2) = v11 | (a5 >> 4);
          v20 = 1;
        }
        else
        {
          NtCurrentTeb()->LastStatusValue = -1073741811;
          v10 = NtCurrentTeb();
          v10->LastErrorValue = RtlNtStatusToDosError(-1073741811);
          v9 = v18;
        }
        if ( *(_DWORD *)(a1 + 76) )
        {
          *(_BYTE *)(v9 + 3) = *(_BYTE *)v9 ^ *(_BYTE *)(v9 + 1) ^ *(_BYTE *)(v9 + 2);
          *(_DWORD *)v9 ^= *(_DWORD *)(a1 + 80);
        }
        if ( v19 )
          RtlLeaveCriticalSection(*(_DWORD *)(a1 + 200));
        return v20;
      }
LABEL_38:
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v12 = NtCurrentTeb();
      v12->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return v5;
    }
    if ( (a3 & 7) != 0 )
    {
      RtlpLogHeapFailure(a3, 0, 0, 0);
    }
    else
    {
      v8 = a3 - 8;
      if ( *(_BYTE *)(a3 - 8 + 7) == 5 )
        v8 -= 8 * *(unsigned __int8 *)(v8 + 6);
      if ( (*(_BYTE *)(v8 + 7) & 0x3F) != 0 )
        goto LABEL_20;
      RtlpLogHeapFailure(v8, 0, 0, 0);
    }
    v8 = 0;
LABEL_20:
    v7 = a3;
    goto LABEL_21;
  }
  v16 = RtlpHpConvertFlagsToSegmentFlags(a2);
  v6 = *(void **)(a1 + 176);
  if ( v6 && v6 == NtCurrentTeb()->ClientId.UniqueThread )
    v16 |= 1u;
  if ( !a3 )
    goto LABEL_38;
  v5 = RtlpHpSetUserFlags(v16, a4, a5);
  if ( !v5 )
    goto LABEL_38;
  return v5;
}
