/*
 * XREFs of MmQueryMemoryListInformation @ 0x140360AC0
 * Callers:
 *     PfpMemoryListQuery @ 0x1403884CC (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x14062EED8 (EtwpLogMemInfo.c)
 *     PfpVolumePrefetchMetadata @ 0x1406AE644 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406AEA14 (PfpPrefetchDirectoryStream.c)
 *     PfpPfnPrioRequest @ 0x140739F40 (PfpPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     PfSnCheckActionsNeeded @ 0x1407DD3D0 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchFilesTrickle @ 0x1407E0408 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1407E0768 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPrefetchPrivatePages @ 0x140987430 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     MiQueryMemoryListInformation @ 0x140360C70 (MiQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(
        ULONG_PTR **BugCheckParameter2,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  int v8; // edx
  char v9; // r14
  ULONG_PTR *v10; // rdi
  _OWORD v12[11]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v12, 0, sizeof(v12));
  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  v8 = 0;
  v9 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      v10 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
    }
    else
    {
      if ( BugCheckParameter2 == (ULONG_PTR **)-2LL )
      {
        v10 = 0LL;
        goto LABEL_15;
      }
      v10 = *BugCheckParameter2;
      v8 = 1;
    }
  }
  else
  {
    v10 = &MiSystemPartition;
  }
  if ( !v10 || *((_DWORD *)v10 + 2) != 305535296 )
    goto LABEL_15;
  if ( !v8 )
    goto LABEL_8;
  if ( (ULONG_PTR **)v10[22] != BugCheckParameter2 )
LABEL_15:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v10, 0LL);
  if ( !PsReferencePartitionSafe((__int64)BugCheckParameter2) )
    return 3221226656LL;
  v9 = 1;
LABEL_8:
  MiQueryMemoryListInformation(v10, v12);
  *a2 = v12[0];
  a2[1] = v12[1];
  a2[2] = v12[2];
  a2[3] = v12[3];
  a2[4] = v12[4];
  a2[5] = v12[5];
  a2[6] = v12[6];
  a2[7] = v12[7];
  a2[8] = v12[8];
  a2[9] = v12[9];
  a2[10] = v12[10];
  *a5 = 176;
  if ( v9 )
    PsDereferencePartition(v10[22]);
  return 0LL;
}
