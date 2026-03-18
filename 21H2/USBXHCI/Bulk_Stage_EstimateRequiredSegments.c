/*
 * XREFs of Bulk_Stage_EstimateRequiredSegments @ 0x1C000F614
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000F538 (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x1C003FF60 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDDDDD @ 0x1C0044FB4 (WPP_RECORDER_SF_DDDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredSegments(_DWORD *a1, int *a2)
{
  __int64 v4; // rbx
  int v5; // r9d
  unsigned int v6; // edi
  unsigned int v7; // ecx
  int v8; // edi
  __int64 v9; // rax
  __int64 result; // rax
  unsigned int v11; // r10d
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // r8d

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 336LL) & 8) != 0 )
  {
    v8 = 1;
  }
  else
  {
    v5 = *(_DWORD *)(v4 + 192);
    v6 = *(_DWORD *)(v4 + 196) - v5 - (unsigned int)(*(_DWORD *)(v4 + 196) - v5) % a1[20];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
        *(_DWORD *)(v4 + 196),
        v5);
    v7 = a1[21];
    if ( v7 > v6 )
    {
      v11 = *(_DWORD *)(v4 + 196) - *(_DWORD *)(v4 + 196) % a1[20];
      v12 = (v7 - v6 + v11 - 1) / v11;
      v8 = v12;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = *(_QWORD *)(v4 + 48);
        v14 = *(unsigned __int8 *)(v13 + 135);
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          v13,
          v14,
          33,
          (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
          v14,
          *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
          *(_DWORD *)(v4 + 64),
          v11,
          v12);
      }
    }
    else
    {
      v8 = 0;
    }
  }
  v9 = *(_QWORD *)(v4 + 40);
  *a2 = v8;
  result = *(_QWORD *)(v9 + 336);
  if ( (result & 0x2000000000000LL) != 0 )
  {
    result = *(_QWORD *)(v4 + 48);
    if ( *(_DWORD *)(result + 20) == 3 )
    {
      result = *(_QWORD *)(v4 + 56);
      if ( *(_DWORD *)(result + 120) == 6 )
      {
        result = (unsigned int)(v8 + 1);
        *a2 = result;
      }
    }
  }
  return result;
}
