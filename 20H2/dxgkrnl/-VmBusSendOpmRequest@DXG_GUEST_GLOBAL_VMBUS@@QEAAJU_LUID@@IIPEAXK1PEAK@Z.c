/*
 * XREFs of ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1C0249578
 * Callers:
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C016E2A0 (DxgkAttemptOpmVmBusRedirect.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _LUID a2,
        int a3,
        int a4,
        void *Src,
        size_t Size,
        void *a7,
        unsigned int *a8)
{
  unsigned int *v8; // r15
  size_t v9; // rsi
  unsigned int v13; // ebp
  unsigned int v14; // edi
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGKVMB_COMMAND_BASE *v20; // r14
  __int64 v21; // rax
  int v22; // ebx
  int *v23; // rsi
  unsigned int v24; // eax
  __int64 v26; // rax
  struct _MDL *v27; // [rsp+28h] [rbp-30h]

  v8 = a8;
  v9 = (unsigned int)Size;
  v13 = Size + 56;
  v14 = (*a8 + 19) & 0xFFFFFFF8;
  if ( (unsigned int)(Size + 56) > 0x20000 || v14 > 0x20000 )
  {
    v26 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(this, a2);
    *(_QWORD *)(v26 + 24) = v13;
    *(_QWORD *)(v26 + 32) = v14;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  else
  {
    v15 = (char *)operator new(v14 + v13, 0x4B677844u, 1, (POOL_TYPE)512);
    v20 = (struct DXGKVMB_COMMAND_BASE *)v15;
    if ( v15 )
    {
      *(_QWORD *)v15 = 0LL;
      *((_DWORD *)v15 + 2) = 0;
      *((_DWORD *)v15 + 3) = 1;
      *((_DWORD *)v15 + 4) = 1017;
      *((struct _LUID *)v15 + 3) = a2;
      *((_DWORD *)v15 + 8) = a3;
      *((_DWORD *)v15 + 9) = a4;
      *((_DWORD *)v15 + 10) = v9;
      *((_DWORD *)v15 + 11) = *v8;
      memmove(v15 + 48, Src, v9);
      v23 = (int *)((char *)v20 + v13);
      LODWORD(Size) = v14;
      v22 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, v20, v13, v23, (unsigned int *)&Size, v27);
      if ( v22 >= 0 )
      {
        v22 = -1073741823;
        if ( (unsigned int)Size >= 8 )
        {
          v22 = *v23;
          if ( *v23 >= 0 )
          {
            v24 = v23[1];
            if ( v24 <= *v8 )
            {
              memmove(a7, v23 + 2, v24);
              *v8 = v23[1];
            }
          }
        }
      }
      operator delete[](v20);
    }
    else
    {
      v21 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = 12000LL;
      WdLogEvent5_WdLowResource(v21);
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v22;
  }
}
