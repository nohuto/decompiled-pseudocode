/*
 * XREFs of ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C000A680
 * Callers:
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C000A508 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C005C9C8 (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     BmlGetNextBestTargetMode @ 0x1C013B14C (BmlGetNextBestTargetMode.c)
 *     _BmlGetPathModeListForPath @ 0x1C02EC830 (_BmlGetPathModeListForPath.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02ECB80 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::GetNextMode(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODE *const a2)
{
  DMMVIDPNSOURCEMODESET *v4; // rdx
  struct DMMVIDPNSOURCEMODE *result; // rax
  __int64 v6; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  v4 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNSOURCEMODESET *)((char *)v4 - 8);
  if ( v4 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    return 0LL;
  return result;
}
