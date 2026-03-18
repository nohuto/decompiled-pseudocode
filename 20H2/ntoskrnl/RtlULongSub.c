/*
 * XREFs of RtlULongSub @ 0x1402F0F2C
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x1404ED190 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x14069FC10 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140736B58 (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x140743664 (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x1407CDDB8 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x140974AC0 (BiGetFilePathFromEfiPath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongSub(ULONG ulMinuend, ULONG ulSubtrahend, ULONG *pulResult)
{
  ULONG v3; // r9d

  if ( ulMinuend < ulSubtrahend )
    v3 = -1;
  else
    v3 = ulMinuend - ulSubtrahend;
  *pulResult = v3;
  return ulMinuend < ulSubtrahend ? 0xC0000095 : 0;
}
