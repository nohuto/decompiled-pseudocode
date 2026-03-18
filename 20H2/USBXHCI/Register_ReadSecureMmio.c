/*
 * XREFs of Register_ReadSecureMmio @ 0x1C003D720
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009E10 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0011710 (RootHub_UcxEvtInterruptTransfer.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     XilRegister_ReadUchar @ 0x1C00140B8 (XilRegister_ReadUchar.c)
 *     XilRegister_ReadBufferUlong @ 0x1C00190E8 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUlong64 @ 0x1C003DC3C (XilRegister_ReadUlong64.c)
 *     XilRegister_ReadUshort @ 0x1C003DCAC (XilRegister_ReadUshort.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     memmove @ 0x1C001BD00 (memmove.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C00502E8 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall Register_ReadSecureMmio(__int64 a1, __int64 a2, int a3, unsigned int a4, void *a5)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // esi
  int v14; // edx
  int *PoolWithTag; // rbx
  __int64 v16; // rax
  int v17; // edx
  __int64 v19; // [rsp+38h] [rbp-49h]
  __int64 v20; // [rsp+40h] [rbp-41h] BYREF
  __int128 v21; // [rsp+48h] [rbp-39h]
  __int64 v22; // [rsp+58h] [rbp-29h]
  int v23; // [rsp+60h] [rbp-21h]
  int v24; // [rsp+64h] [rbp-1Dh]
  __int64 v25; // [rsp+68h] [rbp-19h]
  int v26; // [rsp+70h] [rbp-11h]
  unsigned int v27; // [rsp+74h] [rbp-Dh]
  __int128 v28; // [rsp+78h] [rbp-9h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v24 = 0;
  v7 = 8LL;
  v21 = 0LL;
  v28 = 0LL;
  v19 = *(_QWORD *)(v5 + 112);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v10 = 2LL;
        break;
      case 2:
        v10 = 4LL;
        break;
      case 3:
        v10 = 8LL;
        break;
      default:
LABEL_15:
        v12 = 0;
        goto LABEL_16;
    }
  }
  else
  {
    v10 = 1LL;
  }
  v11 = v10 * a4;
  if ( v10 * (unsigned __int64)a4 > 0xFFFFFFFF )
    goto LABEL_15;
  if ( !v11 )
    goto LABEL_15;
  v12 = v11 + 8;
  if ( v11 + 8 < v11 )
    goto LABEL_15;
  if ( v12 < 0x10 )
    v12 = 16;
LABEL_16:
  switch ( a3 )
  {
    case 0:
      v7 = 1LL;
LABEL_24:
      v13 = v7 * a4;
      if ( v7 * (unsigned __int64)a4 <= 0xFFFFFFFF )
        goto LABEL_26;
      break;
    case 1:
      v7 = 2LL;
      goto LABEL_24;
    case 2:
      v7 = 4LL;
      goto LABEL_24;
    case 3:
      goto LABEL_24;
  }
  v13 = 0;
LABEL_26:
  if ( v12 <= 0x10 )
  {
    PoolWithTag = (int *)&v28;
    v12 = 16;
  }
  else
  {
    PoolWithTag = (int *)ExAllocatePoolWithTag(
                           SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink),
                           v12,
                           0x49434858u);
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v14,
          6,
          74,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
          v12);
      }
      return;
    }
  }
  v16 = *(_QWORD *)(a1 + 120);
  v20 = 0LL;
  v24 = 0;
  v22 = v16;
  v25 = a2;
  v21 = 0LL;
  v23 = 10;
  v26 = a3;
  v27 = a4;
  if ( (int)SecureChannel_SendRequestSynchronously(v19, &v20, 56LL, PoolWithTag, v12) >= 0 )
  {
    v17 = *PoolWithTag;
    if ( *PoolWithTag >= 0 )
    {
      memmove(a5, PoolWithTag + 2, v13);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v17,
        6,
        75,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
        *PoolWithTag);
    }
  }
  if ( PoolWithTag && PoolWithTag != (int *)&v28 )
    ExFreePoolWithTag(PoolWithTag, 0x49434858u);
}
