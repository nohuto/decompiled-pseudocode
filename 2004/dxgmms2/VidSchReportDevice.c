/*
 * XREFs of VidSchReportDevice @ 0x1C00D37C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0001614 (VidSchiSchedulerNodeToDriverEngine.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0024A38 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0031874 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C00336F8 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r11
  __int64 v6; // rbx
  int v7; // edi
  unsigned int v8; // edx
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // r10
  char v12; // r11
  __int64 v13; // r9
  __int64 v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+28h] [rbp-80h]

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( a1 == *(_QWORD *)(v5 + 232) )
      v6 = *(_QWORD *)(v5 + 240);
    else
      v6 = 0LL;
    if ( v6 )
    {
      if ( bTracingEnabled )
      {
        v7 = 1 << VidSchiSchedulerNodeToDriverEngine(v5, *(_DWORD *)(v6 + 88));
        v12 = VidSchiSchedulerNodeToDriverNode(v9, v8);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            a1,
            &EventReportContext,
            a3,
            v10,
            v12,
            v7,
            0,
            0,
            0,
            0,
            0,
            (2 * ((*(_DWORD *)(v11 + 48) & 0x10) != 0)) | 1,
            v6);
      }
      v13 = *(_QWORD *)(v6 + 56);
      if ( !v13 || (*(_DWORD *)(v6 + 112) & 0x40) != 0 )
        v13 = v6;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v15) = *(_DWORD *)(v6 + 404);
        LODWORD(v14) = *(_DWORD *)(v6 + 400);
        McTemplateK0pqq_EtwWriteTransfer(a1, &EventChangePriority, a3, v13, v14, v15);
      }
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
