/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x1407044D0
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x140704490 (IoBuildSynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x14074F850 (PnpQueryInterface.c)
 *     IopCreateArcName @ 0x14076B368 (IopCreateArcName.c)
 *     HalpQueryPccInterface @ 0x14086212C (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x14090B248 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403401B0 (IopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7);
  v10 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = a6;
    IopQueueThreadIrp(result, v8, v9);
    return v10;
  }
  return result;
}
