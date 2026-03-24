/*
 * XREFs of VidSchReportContext @ 0x1C00D23E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0024A48 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r9
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+28h] [rbp-10h]

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( !v5 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      v5 = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 404);
      v6 = *(_DWORD *)(a1 + 400);
      McTemplateK0pqq_EtwWriteTransfer(a1, &EventChangePriority, a3, v5, v6, v7);
    }
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v3);
    return 3221225485LL;
  }
}
