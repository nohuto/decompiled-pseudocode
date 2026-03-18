/*
 * XREFs of AlpcpDispatchCloseMessage @ 0x140629F14
 * Callers:
 *     AlpcpSendCloseMessage @ 0x140629DF4 (AlpcpSendCloseMessage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14062A0C4 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpSetOwnerPortMessage @ 0x14062D914 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140685F60 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x140703B60 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpLogClosePort @ 0x1408C05E0 (AlpcpLogClosePort.c)
 */

__int64 __fastcall AlpcpDispatchCloseMessage(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  _QWORD *v4; // r12
  __int64 result; // rax
  __int64 v6; // r8
  char v7; // r15
  PADAPTER_OBJECT v8; // rcx
  signed __int32 v9; // eax
  PADAPTER_OBJECT v10; // rbx
  struct _DMA_ADAPTER *v11; // rsi
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp+40h] BYREF
  __int64 v13; // [rsp+68h] [rbp+48h] BYREF

  v1 = *a1;
  v2 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v4 = *(_QWORD **)(v1 + 16);
  v13 = 0LL;
  DmaAdapter = 0LL;
  result = AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(v1, &v13, &DmaAdapter);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(v13 + 256) & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 40) |= 0x200u;
      v7 = 1;
      v8 = DmaAdapter;
      *(_WORD *)(v2 + 244) &= ~0x2000u;
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)&v8[25], 1u);
      v10 = DmaAdapter;
      *(_DWORD *)(v2 + 44) = v9 + 1;
      LOBYTE(v6) = 1;
      *(_QWORD *)(v2 + 120) = v10[3].DmaOperations;
      *(_QWORD *)(v2 + 184) = v4;
      *(_QWORD *)(v2 + 192) = *v4;
      if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
      {
        AlpcpSetOwnerPortMessage(v2, v10, v6);
        v11 = (struct _DMA_ADAPTER *)v13;
      }
      else
      {
        AlpcpSetOwnerPortMessage(v2, v1, v6);
        v11 = (struct _DMA_ADAPTER *)v13;
        if ( v10 != (PADAPTER_OBJECT)v13 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v10[22], 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&v10[22]);
          KeAbPostRelease((ULONG_PTR)&v10[22]);
          v11 = (struct _DMA_ADAPTER *)v13;
          v10 = DmaAdapter;
        }
        v7 = 0;
      }
      if ( AlpcpLogEnabled )
        AlpcpLogClosePort(v2);
      a1[4] = (__int64)v11;
      a1[2] = (__int64)v4;
      AlpcpCompleteDispatchMessage(a1);
      if ( v7 && v10 != v11 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v10[22], 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v10[22]);
        KeAbPostRelease((ULONG_PTR)&v10[22]);
        v10 = DmaAdapter;
      }
      HalPutDmaAdapter(v10);
      return 0LL;
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v13, DmaAdapter);
      return 3221227271LL;
    }
  }
  return result;
}
