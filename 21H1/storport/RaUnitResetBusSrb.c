/*
 * XREFs of RaUnitResetBusSrb @ 0x1C0046520
 * Callers:
 *     RaUnitScsiIrp @ 0x1C000A2D0 (RaUnitScsiIrp.c)
 * Callees:
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1C0044CF8 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004A7A4 (RaidUnitSubmitResetRequest.c)
 */

__int64 __fastcall RaUnitResetBusSrb(__int64 a1, __int64 a2)
{
  if ( (byte_1C0068843 & 0x40) != 0 )
    McTemplateK0zqjujssstq_EtwWriteTransfer(
      a1,
      *(_QWORD *)(a1 + 24) + 5192LL,
      a1 + 169,
      *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4864LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_QWORD *)(a1 + 24) + 5192LL,
      *(_BYTE *)(a1 + 96),
      a1 + 1976,
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      *(_BYTE *)(a1 + 450) & 1,
      1);
  return RaidUnitSubmitResetRequest(a1, a2);
}
