/*
 * XREFs of RtlULongSub @ 0x1402E90B0
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x1404E92D0 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x1406B5190 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14072799C (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x140731624 (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x1407BC3B8 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x14096D950 (BiGetFilePathFromEfiPath.c)
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
