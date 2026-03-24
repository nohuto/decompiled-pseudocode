/*
 * XREFs of ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0247F54
 * Callers:
 *     DxgkEscape @ 0x1C00F9100 (DxgkEscape.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025F474 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F574 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C0266C44 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C0267748 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024CF2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        __int64 a2,
        UINT a3,
        UINT a4,
        UINT a5,
        enum _D3DKMT_ESCAPETYPE a6,
        struct _D3DDDI_ESCAPEFLAGS a7,
        size_t Size,
        unsigned __int8 *Src)
{
  size_t v9; // rsi
  UINT v12; // r12d
  __int64 v14; // rax
  unsigned int v16; // edi
  struct _D3DDDI_ESCAPEFLAGS *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _D3DDDI_ESCAPEFLAGS *v22; // rbx
  __int64 v23; // rax
  unsigned __int8 *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // r8
  __int64 v29; // rax
  struct _MDL *v30; // [rsp+28h] [rbp-20h]

  v9 = (unsigned int)Size;
  v12 = a2;
  if ( (unsigned int)Size > 0x20000 )
  {
    v14 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v14 + 24) = 10156LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v16 = 56;
  LODWORD(Size) = (Size + 7) & 0xFFFFFFF8;
  if ( (_DWORD)Size )
    v16 = ((v9 + 7) & 0xFFFFFFF8) + 55;
  v17 = (struct _D3DDDI_ESCAPEFLAGS *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
  v22 = v17;
  if ( !v17 )
  {
    v23 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    *(_QWORD *)(v23 + 24) = 10164LL;
    WdLogEvent5_WdLowResource(v23);
    return 3221225495LL;
  }
  *(_QWORD *)&v17->0 = 0LL;
  v17[3].Value = 0;
  v24 = Src;
  v17[4].Value = 13;
  v17[2].Value = v12;
  v17[6].Value = a3;
  v17[9].0 = a7.0;
  v17[7].Value = a4;
  v17[11].Value = a5;
  v17[8].Value = a6;
  v17[10].Value = v9;
  memmove(&v17[12], v24, v9);
  if ( (_DWORD)v9 )
  {
    v27 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
            this,
            (struct DXGKVMB_COMMAND_BASE *)v22,
            v16,
            &v22[12],
            (unsigned int *)&Size,
            v30);
    if ( v27 < 0 )
    {
LABEL_14:
      v29 = WdLogNewEntry5_WdWarning(v26, v25, v28);
      *(_QWORD *)(v29 + 24) = v27;
      WdLogEvent5_WdWarning(v29);
      goto LABEL_15;
    }
    if ( (unsigned int)Size < (unsigned int)v9 )
      v27 = -1073741823;
    else
      memmove(Src, &v22[12], v9);
  }
  else
  {
    v27 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)v22, v16, 0LL, 0LL, v30);
  }
  if ( v27 < 0 )
    goto LABEL_14;
LABEL_15:
  operator delete[](v22);
  return (unsigned int)v27;
}
