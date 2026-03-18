/*
 * XREFs of XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0030B88
 * Callers:
 *     XilCommand_AddCommandCRBToRing @ 0x1C000714C (XilCommand_AddCommandCRBToRing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C001BD00 (memmove.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C00502E8 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_SendAddCommandCRBToRingRequest(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // r10d
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r15
  size_t v9; // rdi
  char *PoolWithTag; // rax
  int v11; // edx
  char *v12; // rsi
  unsigned int v13; // edi
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // edx
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // edx
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  int v27; // [rsp+60h] [rbp+8h] BYREF

  v27 = 0;
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
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink),
                          v7,
                          0x49434858u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v9);
    *((_QWORD *)v12 + 3) = *(_QWORD *)(a1 + 32);
    *((_DWORD *)v12 + 8) = 19;
    *(_OWORD *)(v12 + 40) = *(_OWORD *)(a2 + 24);
    v18 = *(_DWORD *)(a2 + 80);
    if ( v18 )
    {
      memmove(v12 + 72, *(const void **)(a2 + 72), v18);
      *((_DWORD *)v12 + 17) = *(_DWORD *)(a2 + 80);
    }
    *((_DWORD *)v12 + 16) = *(_DWORD *)(a2 + 84);
    v19 = *(_DWORD *)(a2 + 84);
    if ( v19 == 1 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 608LL);
    }
    else if ( v19 == 2 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 1312LL);
    }
    else
    {
      if ( v19 )
      {
        v13 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v17, 7, 20, (__int64)&WPP_4b601d8e2e913b6c42a65f3f32a61124_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
LABEL_28:
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v23, v24, v25);
        }
LABEL_29:
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
        goto LABEL_31;
      }
      v20 = 0LL;
    }
    *((_QWORD *)v12 + 7) = v20;
    v21 = SecureChannel_SendRequestSynchronously(v8, v12, (unsigned int)v9, &v27, 4);
    v13 = v21;
    if ( v21 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v22,
          7,
          21,
          (__int64)&WPP_4b601d8e2e913b6c42a65f3f32a61124_Traceguids,
          v21);
      }
      goto LABEL_31;
    }
    v13 = v27;
    if ( v27 >= 0 )
    {
LABEL_31:
      ExFreePoolWithTag(v12, 0x49434858u);
      return v13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 72),
        v22,
        7,
        22,
        (__int64)&WPP_4b601d8e2e913b6c42a65f3f32a61124_Traceguids,
        v27);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
    }
    goto LABEL_29;
  }
  v13 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v11, 7, 19, (__int64)&WPP_4b601d8e2e913b6c42a65f3f32a61124_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16);
  }
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return v13;
}
