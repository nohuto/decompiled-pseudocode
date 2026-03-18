/*
 * XREFs of UsbDevice_DropEndpointsCompletion @ 0x1C0045890
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010224 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_DropEndpointsCompletion(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r9d
  unsigned int v5; // edi
  int v6; // edx
  char v8; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *(unsigned __int8 *)(v2 + 135);
      v4 = 73;
LABEL_9:
      v8 = v3;
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        v3,
        12,
        v4,
        (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
        v8,
        *(_QWORD *)v2);
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  v5 = 1;
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *(unsigned __int8 *)(a1 + 61);
      v4 = 75;
      goto LABEL_9;
    }
LABEL_10:
    if ( *(_DWORD *)(v2 + 448) == 259 )
      *(_DWORD *)(v2 + 448) = -1073741823;
    v5 = 2;
    return UsbDevice_QueueConfigureEndpointEvent(v2, v5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      v6,
      12,
      74,
      (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v2);
  }
  return UsbDevice_QueueConfigureEndpointEvent(v2, v5);
}
