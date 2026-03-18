/*
 * XREFs of ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C024910C
 * Callers:
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C028FD28 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z @ 0x1C0290990 (-SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGKEYEDMUTEX *a3,
        unsigned int a4)
{
  unsigned int v4; // eax
  __int64 v9; // rax
  unsigned int v11; // ebp
  SIZE_T v12; // r14
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  int v15; // edx
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rax
  struct _MDL *v22; // [rsp+28h] [rbp-50h]
  unsigned int v23; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v24[2]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *((_DWORD *)a3 + 40);
  if ( v4 <= 0x1FFE0 )
  {
    v11 = v4 + 32;
    v12 = v4 + 32;
    v13 = operator new[](v12, 0x4B677844u, (POOL_TYPE)512);
    v14 = v13;
    if ( v13 )
    {
      memset(v13, 0, v12);
      v15 = *((_DWORD *)a3 + 40);
      v16 = *((_DWORD *)a3 + 8);
      v17 = *((_DWORD *)a2 + 106);
      *(_QWORD *)v14 = 0LL;
      v14[2] = v17;
      v14[3] = 1;
      v14[4] = 1012;
      v14[6] = v16;
      v14[7] = v15;
      memmove(v14 + 8, *((const void **)a3 + 19), *((unsigned int *)a3 + 40));
      v23 = 8;
      v20 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)v14, v11, v24, &v23, v22);
      if ( v20 < 0 )
        goto LABEL_10;
      v20 = -1073741823;
      if ( v23 >= 8 )
        v20 = v24[1];
      if ( v20 < 0 )
      {
LABEL_10:
        v21 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v21 + 24) = v20;
        WdLogEvent5_WdError(v21);
      }
      else
      {
        DXGKEYEDMUTEX::SetHostHandle(a3, a4, v24[0]);
      }
      return (unsigned int)v20;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v9 + 24) = *((unsigned int *)a3 + 40) + 32LL;
    WdLogEvent5_WdError(v9);
    return 2147483653LL;
  }
}
