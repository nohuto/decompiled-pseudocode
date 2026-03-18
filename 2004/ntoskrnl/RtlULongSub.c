/*
 * XREFs of RtlULongSub @ 0x140323D30
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x1404E9900 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x1406D3810 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1407280C8 (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x1407341D4 (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x1407BF528 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x14096ECF0 (BiGetFilePathFromEfiPath.c)
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
