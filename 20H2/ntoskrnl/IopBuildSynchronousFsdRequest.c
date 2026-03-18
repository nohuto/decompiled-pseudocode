/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x1406C2190
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x1406C2150 (IoBuildSynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x140762AB4 (PnpQueryInterface.c)
 *     IopCreateArcName @ 0x14077C538 (IopCreateArcName.c)
 *     HalpQueryPccInterface @ 0x140868E6C (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x140912128 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140318510 (IopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7, a8);
  v9 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = a6;
    IopQueueThreadIrp(result);
    return v9;
  }
  return result;
}
