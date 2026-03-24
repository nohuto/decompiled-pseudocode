/*
 * XREFs of ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0245FD4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FDFA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C027E754 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE454 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024D240 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned int a5,
        struct tagRECT *a6,
        struct tagRECT *a7,
        unsigned int a8,
        const struct tagRECT *Src,
        size_t Size,
        unsigned __int8 *a11)
{
  unsigned int v13; // esi
  __int64 v14; // rax
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _MDL *v20; // r9
  struct DXGKVMB_COMMAND_BASE *v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax

  v13 = 16 * a8;
  if ( a8 > 0x2000 )
  {
    v14 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v14 + 24) = 9465LL;
LABEL_3:
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( (unsigned int)Size > 0x20000 )
  {
    v14 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v14 + 24) = 9470LL;
    goto LABEL_3;
  }
  v16 = (char *)operator new(v13 + (_DWORD)Size + 80, 0x4B677844u, 1, (POOL_TYPE)512);
  v21 = (struct DXGKVMB_COMMAND_BASE *)v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = 0LL;
    *((_DWORD *)v16 + 2) = 0;
    *((_DWORD *)v16 + 3) = 0;
    *((_DWORD *)v16 + 4) = 38;
    *((_DWORD *)v16 + 2) = *((_DWORD *)a2 + 106);
    *((_DWORD *)v16 + 6) = *(_DWORD *)(*((_QWORD *)a3 + 2) + 440LL);
    *((_DWORD *)v16 + 7) = *((_DWORD *)a3 + 7);
    *((_DWORD *)v16 + 8) = a4;
    *((_DWORD *)v16 + 9) = a5;
    *(struct tagRECT *)(v16 + 40) = *a6;
    *(struct tagRECT *)(v16 + 56) = *a7;
    *((_DWORD *)v16 + 18) = a8;
    *((_DWORD *)v16 + 19) = Size;
    if ( a8 )
      memmove(v16 + 80, Src, v13);
    if ( (_DWORD)Size )
    {
      if ( &a11[(unsigned int)Size] < a11 || (unsigned __int64)&a11[(unsigned int)Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove((char *)v21 + v13 + 80, a11, (unsigned int)Size);
    }
    v23 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, v21, v13 + Size + 80, v20);
    v26 = v23;
    if ( v23 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v27 + 24) = v26;
      WdLogEvent5_WdError(v27);
    }
    operator delete[](v21);
    return (unsigned int)v26;
  }
  else
  {
    v22 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
    *(_QWORD *)(v22 + 24) = 9477LL;
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
}
