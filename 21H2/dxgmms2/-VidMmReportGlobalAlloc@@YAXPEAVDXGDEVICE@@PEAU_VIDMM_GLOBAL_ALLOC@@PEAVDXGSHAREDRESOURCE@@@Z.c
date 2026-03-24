/*
 * XREFs of ?VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C00BBF88
 * Callers:
 *     VidMmReportContextAllocList @ 0x1C00BC510 (VidMmReportContextAllocList.c)
 *     VidMmReportMultiGlobalAlloc @ 0x1C00BC750 (VidMmReportMultiGlobalAlloc.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C002415C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x1C0024D88 (McTemplateK0puu_EtwWriteTransfer.c)
 */

void __fastcall VidMmReportGlobalAlloc(
        struct DXGDEVICE *a1,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct DXGSHAREDRESOURCE *a3)
{
  __int64 v3; // r9
  int v4; // r13d
  struct DXGDEVICE *v6; // r11
  __int64 v7; // r10
  int *v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  int v11; // esi
  int v12; // ebp
  int v13; // r14d
  int v14; // r15d
  int v15; // r12d
  char v16; // al
  __int64 v17; // [rsp+20h] [rbp-158h]
  __int64 v18; // [rsp+28h] [rbp-150h]
  int v19; // [rsp+48h] [rbp-130h]
  int v20; // [rsp+60h] [rbp-118h]
  int v21; // [rsp+100h] [rbp-78h]
  int v22; // [rsp+104h] [rbp-74h]
  int v23; // [rsp+108h] [rbp-70h]
  char v24; // [rsp+190h] [rbp+18h]

  v24 = (char)a3;
  v3 = *((_QWORD *)a2 + 64);
  LOBYTE(v4) = 0;
  v6 = a1;
  if ( bTracingEnabled )
  {
    v7 = *((_QWORD *)a2 + 5);
    if ( v7 )
      v8 = *(int **)(v7 + 24);
    else
      v8 = 0LL;
    v9 = *((_QWORD *)a2 + 12);
    if ( v9 )
      a3 = *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)(v9 + 8) + 8LL);
    else
      a3 = 0LL;
    LOBYTE(v10) = 0;
    LOBYTE(v11) = 0;
    LOBYTE(v12) = 0;
    LOBYTE(v13) = 0;
    LOBYTE(v14) = 0;
    LOBYTE(v15) = 0;
    a1 = (struct DXGDEVICE *)*((unsigned int *)a2 + 18);
    LOBYTE(v23) = 0;
    LOBYTE(v22) = 0;
    LOBYTE(v21) = 0;
    v16 = *(_DWORD *)v3;
    if ( v8 )
    {
      v10 = *v8;
      v11 = v8[1];
      v12 = v8[2];
      v13 = v8[3];
      v14 = v8[4];
      v15 = v8[5];
      v4 = v8[6];
      v23 = v8[7];
      v22 = v8[8];
      v21 = v8[9];
      v16 = *(_DWORD *)v3;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
        *((_QWORD *)a2 + 2),
        &EventReportAdapterAllocation,
        (__int64)a3,
        (__int64)a3,
        (char)v6,
        *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL),
        v16,
        *((_QWORD *)a2 + 2),
        *((_DWORD *)a2 + 8),
        v19,
        *((_DWORD *)a2 + 17),
        (char)a1,
        v20,
        *((_DWORD *)a2 + 16),
        *((_DWORD *)a2 + 96),
        (char)a2,
        v7,
        v24,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v4,
        v23,
        v22,
        v21,
        (*((_DWORD *)a2 + 21) & 2) != 0,
        *((_QWORD *)a2 + 46),
        *((_BYTE *)a2 + 76) & 0x3F,
        BYTE1(*((_DWORD *)a2 + 19)) & 1);
      v3 = *((_QWORD *)a2 + 64);
    }
  }
  if ( *(_WORD *)(v3 + 4) && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LOBYTE(v18) = *((_BYTE *)a2 + 440);
    LOBYTE(v17) = *(_BYTE *)(v3 + 4);
    McTemplateK0puu_EtwWriteTransfer((__int64)a1, &EventReportOfferAllocation, (__int64)a3, a2, v17, v18);
  }
}
