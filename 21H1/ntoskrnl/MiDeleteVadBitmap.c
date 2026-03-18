/*
 * XREFs of MiDeleteVadBitmap @ 0x140662AF8
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402D4FCC (MiDeleteFinalPageTables.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     MiHyperSpaceSize @ 0x14022B348 (MiHyperSpaceSize.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x14027D4B0 (MiReturnFullProcessCharges.c)
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiUpdateChargedWsles @ 0x14055696C (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 */

_UNKNOWN **__fastcall MiDeleteVadBitmap(_QWORD *BugCheckParameter2)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v2; // r9
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // r10
  __int64 v8; // rbp
  __int64 ProcessPartition; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r8
  _QWORD v18[6]; // [rsp+40h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = BugCheckParameter2[158];
  memset(v18, 0, sizeof(v18));
  if ( v2 )
    KeBugCheckEx(0x1Au, 0x3455uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  v4 = (_QWORD *)BugCheckParameter2[210];
  if ( v4 )
  {
    v5 = v4[34];
    v6 = MiHyperSpaceSize();
    MiDeletePagablePteRange((__int64)(BugCheckParameter2 + 208), 0x11u, v7, v6 + v7 - 1, 0, 0, v18);
    v8 = v18[1];
    ProcessPartition = MiGetProcessPartition((__int64)BugCheckParameter2);
    v10 = v4[36] + v5;
    v11 = v4 + 74;
    v12 = 0LL;
    v13 = ProcessPartition;
    v14 = 2LL;
    do
    {
      v12 += *v11++;
      --v14;
    }
    while ( v14 );
    v15 = v12 + v10;
    if ( v15 )
      MiReturnFullProcessCharges((__int64)BugCheckParameter2, v15);
    v16 = v15 - v8;
    if ( v16 )
      MiReturnCommit(v13, v16);
    result = (_UNKNOWN **)HalSystemVectorDispatchEntry();
    if ( BugCheckParameter2[238] )
    {
      MiUpdateChargedWsles((__int64)(BugCheckParameter2 + 208));
      return (_UNKNOWN **)MiReturnFullProcessCommitment((__int64)BugCheckParameter2, v17);
    }
  }
  return result;
}
