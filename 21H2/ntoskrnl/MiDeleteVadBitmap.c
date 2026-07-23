/*
 * XREFs of MiDeleteVadBitmap @ 0x14067C9A4
 * Callers:
 *     MiDeleteFinalPageTables @ 0x14027404C (MiDeleteFinalPageTables.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiHyperSpaceSize @ 0x14031CC88 (MiHyperSpaceSize.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1403230C0 (MiReturnFullProcessCharges.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiUpdateChargedWsles @ 0x14055C69C (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
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
  _QWORD v17[6]; // [rsp+40h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = BugCheckParameter2[158];
  memset(v17, 0, sizeof(v17));
  if ( v2 )
    KeBugCheckEx(0x1Au, 0x3455uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  v4 = (_QWORD *)BugCheckParameter2[210];
  if ( v4 )
  {
    v5 = v4[34];
    v6 = MiHyperSpaceSize();
    MiDeletePagablePteRange((__int64)(BugCheckParameter2 + 208), 0x11u, v7, v6 + v7 - 1, 0, 0, v17);
    v8 = v17[1];
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
      return (_UNKNOWN **)MiReturnFullProcessCommitment(BugCheckParameter2);
    }
  }
  return result;
}
