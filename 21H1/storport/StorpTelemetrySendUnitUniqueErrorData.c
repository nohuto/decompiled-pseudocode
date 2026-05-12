/*
 * XREFs of StorpTelemetrySendUnitUniqueErrorData @ 0x1C0002DF0
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C00076E8 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer @ 0x1C0003374 (McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetrySendUnitUniqueErrorData(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // r9

  if ( (byte_1C0068845 & 8) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    v2 = &unk_1C005A7A0;
    if ( *(_QWORD *)(v1 + 5208) )
      v2 = *(void **)(v1 + 5208);
    McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer(
      a1 + 186,
      a1 + 169,
      *(_BYTE *)(a1 + 450) & 1,
      *(_DWORD *)(v1 + 56),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      v1 + 5192,
      *(_DWORD *)(a1 + 3280),
      *(_QWORD *)(v1 + 4864),
      a1 + 160,
      a1 + 169,
      a1 + 186,
      (__int64)v2,
      *(_BYTE *)(a1 + 450) & 1);
  }
  return 0LL;
}
