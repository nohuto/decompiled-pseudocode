/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x1C0167FE0
 * Callers:
 *     RIMFreePointerDevice @ 0x1C01662FC (RIMFreePointerDevice.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0168794 (RIMUpdatePrimaryDevice.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C01D25F4 (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // r12d
  _QWORD *v5; // r15
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // [rsp+70h] [rbp+18h]

  v18 = a3;
  v4 = 0;
  v5 = (_QWORD *)(a1 + 448);
  v7 = *(_QWORD **)(a1 + 448);
  v8 = a2;
  if ( *(_QWORD *)(a1 + 480) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL);
  while ( v7 != v5 )
  {
    v10 = (__int64)(v7 - 1);
    v11 = v7;
    v7 = (_QWORD *)*v7;
    if ( *(_QWORD *)v10 == v8 )
    {
      v13 = *(_QWORD *)(v8 + 16);
      *(_DWORD *)(v13 + 188) &= ~2u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, 37, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, v13);
      }
      if ( (*(_DWORD *)(v10 + 24) & 1) == 0 )
        ApiSetPostPointerDeviceOutOfRangeMessage(v8);
      if ( (*(_DWORD *)(a1 + 476) & 1) != 0 )
      {
        *(_DWORD *)(v10 + 24) |= 1u;
        *(_DWORD *)(a1 + 476) |= 2u;
        if ( v18 )
        {
          *(_DWORD *)(v10 + 24) |= 2u;
          *(_DWORD *)(a1 + 476) |= 4u;
        }
        v4 = 1;
      }
      else
      {
        v14 = *v11;
        if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v15 = (_QWORD *)v11[1], (_QWORD *)*v15 != v11) )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        Win32FreePool(v10, a2, a3);
        v17 = *(_DWORD *)(a1 + 464);
        if ( !v17 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
          v17 = *(_DWORD *)(a1 + 464);
        }
        *(_DWORD *)(a1 + 464) = v17 - 1;
      }
      break;
    }
  }
  if ( a4 )
    *a4 = v4;
  return 1LL;
}
