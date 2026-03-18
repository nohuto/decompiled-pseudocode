/*
 * XREFs of DxgkpAcquireKeyedMutexFromHandle @ 0x1C0238BE4
 * Callers:
 *     ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BAC0 (-VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243F90 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0245DD0 (-VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003FDA4 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkpAcquireKeyedMutexFromHandle(struct _KTHREAD **a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _KTHREAD *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  int *v12; // rbx
  __int64 v13; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v14, a1);
  v6 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)a1 + 64) )
  {
    v7 = a1[30];
    v5 = ((unsigned int)v2 >> 25) & 0x60;
    v4 = *((unsigned int *)v7 + 4 * v6 + 2);
    if ( (((unsigned int)v2 >> 25) & 0x60) == (*((_BYTE *)v7 + 16 * v6 + 8) & 0x60)
      && (v4 & 0x2000) == 0
      && (v4 & 0x1F) != 0 )
    {
      v4 &= 0x1Fu;
      if ( (_BYTE)v4 == 13 )
      {
        v12 = (int *)*((_QWORD *)v7 + 2 * (unsigned int)v6);
        if ( v12 )
        {
          if ( *v12 != 4 )
          {
            v9 = WdLogNewEntry5_WdError(v5, v4);
            *(_QWORD *)(v9 + 24) = *v12;
            goto LABEL_8;
          }
          v13 = *((_QWORD *)v12 + 1);
          v10 = *(_QWORD *)(v13 + 24);
          if ( v10 )
          {
            DXGKEYEDMUTEX::AcquireReference(*(DXGKEYEDMUTEX **)(v13 + 24), v4);
            goto LABEL_9;
          }
        }
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(v5, v4);
        *(_QWORD *)(v8 + 24) = 267LL;
        WdLogEvent5_WdError(v8);
      }
    }
  }
  v9 = WdLogNewEntry5_WdError(v5, v4);
  *(_QWORD *)(v9 + 24) = v2;
LABEL_8:
  WdLogEvent5_WdError(v9);
  v10 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v10;
}
