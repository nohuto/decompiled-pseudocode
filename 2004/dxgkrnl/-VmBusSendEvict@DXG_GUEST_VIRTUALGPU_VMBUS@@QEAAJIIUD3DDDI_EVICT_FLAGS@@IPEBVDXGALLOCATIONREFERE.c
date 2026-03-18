/*
 * XREFs of ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C02482A8
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C014F6EC (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        __int64 a2,
        int a3,
        struct D3DDDI_EVICT_FLAGS a4,
        unsigned int a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int64 *a7)
{
  int v9; // r14d
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGKVMB_COMMAND_BASE *v16; // rdi
  __int64 v17; // rax
  _DWORD *v20; // r10
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  struct _MDL *v28; // [rsp+28h] [rbp-60h]
  unsigned int v29; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-50h] BYREF

  v9 = a2;
  if ( a5 - 1 > 0x7FFF )
  {
    v27 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v27 + 24) = 9889LL;
    WdLogEvent5_WdError(v27);
    return 0LL;
  }
  else
  {
    v11 = (char *)operator new(4 * a5 + 36, 0x4B677844u, 1, (POOL_TYPE)512);
    v16 = (struct DXGKVMB_COMMAND_BASE *)v11;
    if ( v11 )
    {
      *(_QWORD *)v11 = 0LL;
      *((_DWORD *)v11 + 3) = 0;
      *((_DWORD *)v11 + 4) = 12;
      *((_DWORD *)v11 + 2) = v9;
      *((struct D3DDDI_EVICT_FLAGS *)v11 + 7) = a4;
      *((_DWORD *)v11 + 6) = a3;
      *((_DWORD *)v11 + 8) = a5;
      if ( a5 )
      {
        v20 = v11 + 36;
        v21 = a5;
        do
        {
          v22 = *(_QWORD *)a6;
          a6 = (const struct DXGALLOCATIONREFERENCE *)((char *)a6 + 8);
          *v20++ = *(_DWORD *)(v22 + 96);
          --v21;
        }
        while ( v21 );
      }
      v29 = 8;
      v25 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, v16, 4 * a5 + 36, &v30, &v29, v28);
      if ( v25 < 0 || (v25 = -1073741823, v29 < 8) )
      {
        v26 = WdLogNewEntry5_WdError(v24, v23);
        *(_QWORD *)(v26 + 24) = v25;
        WdLogEvent5_WdError(v26);
      }
      else
      {
        v25 = 0;
        *a7 = v30;
      }
      operator delete[](v16);
      return (unsigned int)v25;
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = 9896LL;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
  }
}
