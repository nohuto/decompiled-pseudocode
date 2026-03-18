/*
 * XREFs of XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0037250
 * Callers:
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0036A24 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016684 (WPP_RECORDER_SF_ddL.c)
 *     memmove @ 0x1C0019200 (memmove.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToSetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src)
{
  __int64 v6; // rdi
  size_t v7; // rsi
  __int64 v9; // r13
  unsigned int v10; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rbp
  int v13; // edx
  int v14; // ebx
  const void *v15; // rdx
  int v16; // edx
  int v17; // r9d
  char v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+80h] [rbp+18h] BYREF

  v21 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 16LL * a4;
  v9 = *(_QWORD *)(*(_QWORD *)v6 + 112LL);
  if ( v7 > 0xFFFFFFFF || (v10 = v7 + 48, (int)v7 + 48 < (unsigned int)v7) )
    v10 = 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState, v10, 0x49434858u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    v15 = Src;
    v12[10] = 0;
    v12[8] = 37;
    *((_QWORD *)v12 + 3) = a2;
    v12[11] = a4;
    memmove(v12 + 12, v15, v7);
    v14 = SecureChannel_SendRequestSynchronously(v9, v12, v10, &v21, 4);
    if ( v14 >= 0 )
    {
      v14 = v21;
      if ( v21 >= 0 )
      {
        v14 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 20;
        v20 = *(_DWORD *)(v6 + 144);
        v19 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL);
        goto LABEL_11;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 19;
      v16 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
      v20 = *(_DWORD *)(v6 + 144);
      v19 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL);
LABEL_11:
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v6 + 80),
        v16,
        13,
        v17,
        (__int64)&WPP_ef657641772f3c5a4b119de1b27b7cfa_Traceguids,
        v19,
        v20);
    }
LABEL_16:
    ExFreePoolWithTag(v12, 0x49434858u);
    return (unsigned int)v14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      v13,
      13,
      18,
      (__int64)&WPP_ef657641772f3c5a4b119de1b27b7cfa_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      v10);
  }
  return (unsigned int)-1073741670;
}
