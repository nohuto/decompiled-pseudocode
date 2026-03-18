/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C028F3B0
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0117DC0 (DxgkOpenResourceFromNtHandle.c)
 *     ?VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023F0D0 (-VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyKeyedMutex @ 0x1C0292000 (DxgkDestroyKeyedMutex.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C029798C (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C028F1BC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0290CA4 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  struct _KTHREAD *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  DXGKEYEDMUTEX *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _BYTE v21[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v6 = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v21, Current);
  v11 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *((_DWORD *)v6 + 64)
    || (v12 = v6[30],
        v10 = (unsigned int)v11,
        v9 = ((unsigned int)v2 >> 25) & 0x60,
        v8 = *((unsigned int *)v12 + 4 * v11 + 2),
        (((unsigned int)v2 >> 25) & 0x60) != (*((_BYTE *)v12 + 16 * v11 + 8) & 0x60))
    || (v9 = 0x2000LL, (v8 & 0x2000) != 0)
    || (v8 & 0x1F) == 0 )
  {
LABEL_9:
    v14 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v14 + 24) = v2;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    return 3221225485LL;
  }
  v10 = 2LL * (unsigned int)v11;
  v8 &= 0x1Fu;
  if ( (_BYTE)v8 != 9 )
  {
    v13 = WdLogNewEntry5_WdError(0x2000LL, v8);
    *(_QWORD *)(v13 + 24) = 267LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_9;
  }
  v16 = (DXGKEYEDMUTEX *)*((_QWORD *)v12 + 2 * (unsigned int)v11);
  if ( !v16 )
    goto LABEL_9;
  *((_DWORD *)v12 + 4 * (((unsigned __int64)(unsigned int)v2 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v16, v2, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle((unsigned int)v2, v17) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v20 + 24) = 3732LL;
    WdLogEvent5_WdAssertion(v20);
  }
  return 0LL;
}
