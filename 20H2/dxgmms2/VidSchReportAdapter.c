/*
 * XREFs of VidSchReportAdapter @ 0x1C00D2C20
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012118 (VidSchiSchedulerNodeToDriverEngine.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C00247EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0024D6C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0ppqpttq_EtwWriteTransfer @ 0x1C002D104 (McTemplateK0ppqpttq_EtwWriteTransfer.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C00315C4 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x1C00333A8 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C0033448 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int i; // esi
  __int64 v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // r9d
  char v17; // r11
  __int64 v18; // r9
  unsigned int j; // esi
  __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned int v22; // edx
  char v23; // al
  char v24; // r9
  __int64 v25; // r9
  unsigned int v26; // esi
  __int64 v27; // rcx
  _QWORD *v28; // rdi
  unsigned int v29; // edx
  char v30; // al
  char v31; // r9
  __int64 v32; // rcx
  unsigned int k; // edi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // [rsp+28h] [rbp-49h]
  __int64 v38; // [rsp+30h] [rbp-41h]
  __int64 v39; // [rsp+40h] [rbp-31h]
  __int64 v40; // [rsp+48h] [rbp-29h]

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(a1 + 232);
  if ( v6 )
  {
    if ( bTracingEnabled )
    {
      a3 = *(_QWORD *)(a1 + 16);
      a2 = *(_DWORD *)(v6 + 48) >> 2;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppqpttq_EtwWriteTransfer(
          (*(_DWORD *)(v6 + 48) >> 1) & 1,
          &EventReportDevice,
          a3,
          0LL,
          a3,
          -1,
          v6,
          (*(_DWORD *)(v6 + 48) >> 1) & 1,
          (*(_DWORD *)(v6 + 48) & 4) != 0);
    }
  }
  v7 = *(_QWORD *)(a1 + 248);
  if ( v7 )
  {
    if ( bTracingEnabled )
    {
      a3 = *(_DWORD *)(v7 + 48) >> 2;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v40) = (*(_DWORD *)(v7 + 48) & 4) != 0;
        LODWORD(v39) = (*(_DWORD *)(v7 + 48) >> 1) & 1;
        LODWORD(v38) = -1;
        McTemplateK0ppqpttq_EtwWriteTransfer(
          (unsigned int)v39,
          &EventReportDevice,
          (*(_DWORD *)(v7 + 48) & 4) != 0,
          0LL,
          *(_QWORD *)(a1 + 16),
          v38,
          v7,
          v39,
          v40);
      }
    }
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
  {
    v9 = *(_QWORD *)(a1 + 624);
    v10 = *(_DWORD *)(a1 + 696);
    v11 = 8LL * i;
    a3 = i;
    a2 = v9 + v11;
    if ( i >= v10 )
      a2 = *(_QWORD *)(a1 + 624);
    if ( *(_QWORD *)a2 )
    {
      v12 = v9 + v11;
      if ( i >= v10 )
        v12 = *(_QWORD *)(a1 + 624);
      v13 = *(_QWORD *)(*(_QWORD *)v12 + 32LL);
      if ( v13 )
      {
        if ( bTracingEnabled )
        {
          VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v13 + 88));
          v15 = VidSchiSchedulerNodeToDriverNode(a1, v14);
          v9 = *(_QWORD *)(v13 + 104);
          a3 = v15;
          a2 = (2 * (((v16 >> 1) & 0x20 | *(_DWORD *)(v9 + 48) & 0x10) >> 4)) | 1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              v9,
              &EventReportContext,
              v15,
              v6,
              v15,
              v17,
              0,
              0,
              0,
              0,
              0,
              (2 * (((v16 >> 1) & 0x20 | *(_DWORD *)(v9 + 48) & 0x10) >> 4)) | 1,
              v13);
        }
        v18 = *(_QWORD *)(v13 + 56);
        if ( !v18 || (*(_DWORD *)(v13 + 112) & 0x40) != 0 )
          v18 = v13;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v38) = *(_DWORD *)(v13 + 404);
          LODWORD(v37) = *(_DWORD *)(v13 + 400);
          McTemplateK0pqq_EtwWriteTransfer(v9, &EventChangePriority, a3, v18, v37, v38);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 68); ++j )
    {
      v20 = j;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * j);
      if ( v21 )
      {
        if ( bTracingEnabled )
        {
          VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v21 + 88));
          v23 = VidSchiSchedulerNodeToDriverNode(a1, v22);
          v20 = *(_QWORD *)(v21 + 104);
          a2 = (2 * ((*(_DWORD *)(v20 + 48) >> 4) & 1)) | 1u;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              v20,
              &EventReportContext,
              a3,
              v7,
              v23,
              v24,
              0,
              0,
              0,
              0,
              0,
              (2 * ((*(_DWORD *)(v20 + 48) & 0x10) != 0)) | 1,
              v21);
        }
        v25 = *(_QWORD *)(v21 + 56);
        if ( !v25 || (*(_DWORD *)(v21 + 112) & 0x40) != 0 )
          v25 = v21;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v38) = *(_DWORD *)(v21 + 404);
          LODWORD(v37) = *(_DWORD *)(v21 + 400);
          McTemplateK0pqq_EtwWriteTransfer(v20, &EventChangePriority, a3, v25, v37, v38);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 264) )
  {
    v26 = 0;
    if ( *(_DWORD *)(a1 + 68) )
    {
      while ( 1 )
      {
        v27 = v26;
        v28 = *(_QWORD **)(*(_QWORD *)(a1 + 264) + 8LL * v26);
        if ( v28 )
        {
          if ( !bTracingEnabled )
            goto LABEL_45;
          VidSchiSchedulerNodeToDriverEngine(a1, *(unsigned __int16 *)(v28[2] + 4LL));
          v30 = VidSchiSchedulerNodeToDriverNode(a1, v29);
          v32 = v28[1];
          a2 = (2 * ((*(_DWORD *)(v32 + 48) >> 4) & 1)) | 1u;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            break;
        }
LABEL_47:
        if ( ++v26 >= *(_DWORD *)(a1 + 68) )
          goto LABEL_48;
      }
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        v32,
        &EventReportContext,
        a3,
        v7,
        v30,
        v31,
        0,
        0,
        0,
        0,
        0,
        (2 * ((*(_DWORD *)(v32 + 48) & 0x10) != 0)) | 1,
        v28);
LABEL_45:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pppp_EtwWriteTransfer(v27, a2, a3, v28, v28, v28[6], v28[4]);
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( *(_QWORD *)(a1 + 272) )
  {
    for ( k = 0; k < *(_DWORD *)(a1 + 68); ++k )
    {
      v34 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + 8LL * k);
      if ( v34 && bTracingEnabled )
      {
        v35 = *(_QWORD *)(v34 + 40);
        v36 = *(_QWORD *)(v35 + 24);
        if ( !v36 || (*(_DWORD *)(v35 + 56) & 0x40) != 0 )
          v36 = *(_QWORD *)(v34 + 40);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(v35, &EventReportHwQueue, a3, v36, 0LL, v34);
      }
    }
  }
  return 0LL;
}
