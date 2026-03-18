/*
 * XREFs of ?DpiMiracastCbReportChunkInfo@@YAJPEAXPEAUDXGK_MIRACAST_CHUNK_INFO@@0I@Z @ 0x1C0052170
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xqqqqqq_EtwWriteTransfer @ 0x1C0055DC0 (McTemplateK0xqqqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastCbReportChunkInfo(_DWORD *a1, struct DXGK_MIRACAST_CHUNK_INFO *a2, void *a3, int a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v5 + 24) = a1;
    v6 = -1073741584LL;
LABEL_15:
    *(_QWORD *)(v5 + 32) = v6;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v6;
  }
  if ( a3 )
  {
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = a1;
    v6 = -1073741583LL;
    goto LABEL_15;
  }
  if ( a4 )
  {
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = a1;
    v6 = -1073741582LL;
    goto LABEL_15;
  }
  if ( !a1 || a1[4] != 1953656900 || a1[5] != 14 || !*((_QWORD *)a1 + 54) )
  {
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = a1;
    v6 = -1073741585LL;
    goto LABEL_15;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    McTemplateK0xqqqqqq_EtwWriteTransfer(
      a2->ChunkId.Value >> 40,
      (_DWORD)a2,
      0,
      *((_QWORD *)a1 + 12),
      a2->ChunkType,
      *(_DWORD *)&a2->ChunkId.0,
      (unsigned __int16)WORD2(a2->ChunkId.Value) >> 8,
      a2->ProcessingTime,
      a2->EncodeRate,
      0);
  return 0LL;
}
