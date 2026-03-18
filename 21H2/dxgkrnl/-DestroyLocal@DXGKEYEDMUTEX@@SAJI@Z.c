/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C033F7C8
 * Callers:
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C01EA090 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C031FC2C (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     DxgkDestroyKeyedMutex @ 0x1C0342B50 (DxgkDestroyKeyedMutex.c)
 *     ?VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036BFE0 (-VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C033F5C8 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0341458 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // edx
  DXGKEYEDMUTEX *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v15[32]; // [rsp+50h] [rbp-28h] BYREF

  v4 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v6 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v15, Current);
  v7 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 >= *((_DWORD *)v6 + 74)
    || (v8 = *((_QWORD *)v6 + 35),
        v9 = *(_DWORD *)(v8 + 16 * v7 + 8),
        (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60))
    || (v9 & 0x2000) != 0
    || (v9 & 0x1F) == 0 )
  {
LABEL_9:
    WdLogSingleEntry2(3LL, v4, -1073741811LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
    return 3221225485LL;
  }
  if ( (v9 & 0x1F) != 9 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_9;
  }
  v11 = *(DXGKEYEDMUTEX **)(v8 + 16LL * (unsigned int)v7);
  if ( !v11 )
    goto LABEL_9;
  *(_DWORD *)(v8 + 16 * (((unsigned __int64)(unsigned int)v4 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v11, v4, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle((unsigned int)v4, v12, v13, v14) )
  {
    WdLogSingleEntry1(1LL, 3755LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bStatus", 3755LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
