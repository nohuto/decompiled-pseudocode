/*
 * XREFs of AlpcpDispatchCloseMessage @ 0x1406CEA30
 * Callers:
 *     AlpcpSendCloseMessage @ 0x1406D1728 (AlpcpSendCloseMessage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x14061461C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1406CEBDC (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406D4D10 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406D57A0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpLogClosePort @ 0x1408C3D40 (AlpcpLogClosePort.c)
 */

__int64 __fastcall AlpcpDispatchCloseMessage(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  _QWORD *v4; // r15
  __int64 result; // rax
  char v6; // r12
  PADAPTER_OBJECT v7; // rcx
  signed __int32 v8; // eax
  PADAPTER_OBJECT v9; // rbx
  __int64 v10; // rsi
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp+40h] BYREF
  __int64 v12; // [rsp+68h] [rbp+48h] BYREF

  v1 = *a1;
  v2 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v4 = *(_QWORD **)(v1 + 16);
  v12 = 0LL;
  DmaAdapter = 0LL;
  result = AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(v1, &v12, &DmaAdapter);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(v12 + 256) & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 40) |= 0x200u;
      v6 = 1;
      v7 = DmaAdapter;
      *(_WORD *)(v2 + 244) &= ~0x2000u;
      v8 = _InterlockedExchangeAdd((volatile signed __int32 *)&v7[25], 1u);
      v9 = DmaAdapter;
      *(_DWORD *)(v2 + 44) = v8 + 1;
      *(_QWORD *)(v2 + 120) = v9[3].DmaOperations;
      *(_QWORD *)(v2 + 184) = v4;
      *(_QWORD *)(v2 + 192) = *v4;
      if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
      {
        AlpcpSetOwnerPortMessage(v2, v9);
        v10 = v12;
      }
      else
      {
        AlpcpSetOwnerPortMessage(v2, v1);
        v10 = v12;
        if ( v9 != (PADAPTER_OBJECT)v12 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v9[22], 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&v9[22]);
          KeAbPostRelease((ULONG_PTR)&v9[22]);
          v10 = v12;
          v9 = DmaAdapter;
        }
        v6 = 0;
      }
      if ( AlpcpLogEnabled )
        AlpcpLogClosePort(v2);
      a1[4] = v10;
      a1[2] = (__int64)v4;
      AlpcpCompleteDispatchMessage(a1);
      if ( v6 && v9 != (PADAPTER_OBJECT)v10 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v9[22], 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v9[22]);
        KeAbPostRelease((ULONG_PTR)&v9[22]);
        v9 = DmaAdapter;
      }
      HalPutDmaAdapter(v9);
      return 0LL;
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v4, v12, (__int64)DmaAdapter);
      return 3221227271LL;
    }
  }
  return result;
}
