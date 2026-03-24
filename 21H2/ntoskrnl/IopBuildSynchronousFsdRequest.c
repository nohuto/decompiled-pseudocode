/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x1406D1900
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x1406D18C0 (IoBuildSynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x140765D84 (PnpQueryInterface.c)
 *     IopCreateArcName @ 0x140780318 (IopCreateArcName.c)
 *     HalpQueryPccInterface @ 0x140866A7C (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x14090F8D8 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x1402E7890 (IopBuildAsynchronousFsdRequest.c)
 *     IopQueueThreadIrp @ 0x14034B290 (IopQueueThreadIrp.c)
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
