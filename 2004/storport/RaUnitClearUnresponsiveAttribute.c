/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x1C0046538
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0048C00 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00324E8 (WPP_SF_q.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x1C0045594 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0054414 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitClearUnresponsiveAttribute(__int64 a1)
{
  unsigned int v2; // eax

  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
  {
    if ( (byte_1C0068844 & 1) != 0 )
    {
      v2 = *(_DWORD *)(a1 + 96);
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        v2 >> 8,
        &EventUnitResponsive,
        a1 + 186,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4864LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5192LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 1976,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        4);
    }
    StorpTelemetryMarkUnitResponsive(a1);
    *(_BYTE *)(a1 + 450) &= ~2u;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x30u,
        (__int64)&WPP_315ac634f457316aea96af95ee1292c6_Traceguids,
        a1);
    }
  }
  return 0LL;
}
