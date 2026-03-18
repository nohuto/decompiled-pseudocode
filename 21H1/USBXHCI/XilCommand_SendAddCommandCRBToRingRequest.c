/*
 * XREFs of XilCommand_SendAddCommandCRBToRingRequest @ 0x1C002F6A8
 * Callers:
 *     Command_InternalSendCommand @ 0x1C00069D8 (Command_InternalSendCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C0019200 (memmove.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilCommand_SendAddCommandCRBToRingRequest(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // r10d
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r15
  size_t v9; // rbp
  char *PoolWithTag; // rax
  int v11; // edx
  char *v12; // rdi
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  int v25; // [rsp+60h] [rbp+8h] BYREF

  v25 = 0;
  v2 = -1;
  v3 = *(_DWORD *)(a2 + 80);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( v3 + 72 >= v3 )
    v2 = v3 + 72;
  v7 = 0;
  v8 = *(_QWORD *)(v6 + 112);
  if ( v3 + 72 >= v3 )
    v7 = v2;
  v9 = v7;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState, v7, 0x49434858u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v9);
    *((_QWORD *)v12 + 3) = *(_QWORD *)(a1 + 32);
    *((_DWORD *)v12 + 8) = 19;
    *(_OWORD *)(v12 + 40) = *(_OWORD *)(a2 + 24);
    v17 = *(_DWORD *)(a2 + 80);
    if ( v17 )
    {
      memmove(v12 + 72, *(const void **)(a2 + 72), v17);
      *((_DWORD *)v12 + 17) = *(_DWORD *)(a2 + 80);
    }
    *((_DWORD *)v12 + 16) = *(_DWORD *)(a2 + 84);
    v18 = *(_DWORD *)(a2 + 84);
    if ( v18 == 1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 608LL);
    }
    else if ( v18 == 2 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 1312LL);
    }
    else
    {
      if ( v18 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v16, 7, 20, (__int64)&WPP_dfb0f4f8d4b33cee16bee8f838de99a5_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
LABEL_28:
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v22, v23, v24);
        }
LABEL_29:
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
        goto LABEL_31;
      }
      v19 = 0LL;
    }
    *((_QWORD *)v12 + 7) = v19;
    v20 = SecureChannel_SendRequestSynchronously(v8, v12, (unsigned int)v9, &v25, 4);
    if ( v20 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v21,
          7,
          21,
          (__int64)&WPP_dfb0f4f8d4b33cee16bee8f838de99a5_Traceguids,
          v20);
      }
      goto LABEL_31;
    }
    if ( v25 >= 0 )
    {
LABEL_31:
      ExFreePoolWithTag(v12, 0x49434858u);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 72),
        v21,
        7,
        22,
        (__int64)&WPP_dfb0f4f8d4b33cee16bee8f838de99a5_Traceguids,
        v25);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
    }
    goto LABEL_29;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v11, 7, 19, (__int64)&WPP_dfb0f4f8d4b33cee16bee8f838de99a5_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v13, v14, v15);
  }
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
}
