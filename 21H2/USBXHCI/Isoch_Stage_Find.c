/*
 * XREFs of Isoch_Stage_Find @ 0x1C0007610
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C000FA58 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C003FF60 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C00401BC (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C0041A90 (WPP_RECORDER_SF_DDqDD.c)
 */

__int64 __fastcall Isoch_Stage_Find(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  __int64 v9; // r8
  __int64 v10; // r10
  char v11; // al
  unsigned __int8 *v12; // r10
  int v13; // ecx
  int v14; // eax
  __int64 NextStage; // rdi
  int v17; // edx
  __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // edx

  v3 = *(unsigned __int16 *)(a3 + 2);
  v4 = (__int64 *)(a1 + 384);
  v5 = *(__int64 **)(a1 + 384);
  if ( (__int64 *)(a1 + 384) == v5 )
  {
LABEL_20:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = HIDWORD(*(_QWORD *)a3);
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v18,
        14,
        19,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
        BYTE4(*(_QWORD *)a3),
        v3);
    }
    return 0LL;
  }
  while ( 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v17 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
      LOBYTE(v17) = 5;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v17,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        18,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
        v5[3]);
    }
    v9 = HIDWORD(*(_QWORD *)a3);
    v10 = *(unsigned int *)(v5[6] + 128);
    if ( v10 == v9 )
      break;
    v5 = (__int64 *)*v5;
    if ( v4 == v5 )
      goto LABEL_20;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v19 = *(_DWORD *)(a2 + 12);
    v20 = HIBYTE(v19);
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v20,
      v9,
      20,
      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
      SHIBYTE(v19),
      BYTE2(v19) & 0x1F,
      v10,
      v9,
      v3);
  }
  v11 = *((_BYTE *)v5 + 130);
  v12 = (unsigned __int8 *)(v5 + 16);
  v13 = *((unsigned __int8 *)v5 + 132);
  *((_BYTE *)v5 + 133) = v13;
  *((_BYTE *)v5 + 134) = v11;
  if ( !v11
    || (v14 = *v12,
        --*((_BYTE *)v5 + 134),
        NextStage = (__int64)v5 + (unsigned int)(v13 * v14) + 144,
        *((_BYTE *)v5 + 133) = (v13 + 1) % (unsigned int)*((unsigned __int8 *)v5 + 129),
        !NextStage) )
  {
LABEL_24:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v5[3],
        HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
        22,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
        v5[3],
        BYTE4(*(_QWORD *)a3),
        v3);
    return 0LL;
  }
  while ( v3 > *(_DWORD *)(NextStage + 44) )
  {
    NextStage = StageQueue_ForwardScanGetNextStage(v12);
    if ( !NextStage )
      goto LABEL_24;
  }
  if ( !v3 || v3 > *(_DWORD *)(NextStage + 48) - 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v21 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
        LOBYTE(v21) = 5;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v21,
          14,
          21,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          HIBYTE(*(_DWORD *)(a2 + 12)),
          HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
          *(_DWORD *)(NextStage + 48),
          v3 + 1);
      }
    }
    *((_DWORD *)v5 + 25) = v3 + 1;
    *(_DWORD *)(NextStage + 48) = v3 + 1;
  }
  return NextStage;
}
