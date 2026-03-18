/*
 * XREFs of Register_ReadSecureMmio @ 0x1C003D040
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C000A120 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     XilRegister_ReadUchar @ 0x1C0014060 (XilRegister_ReadUchar.c)
 *     XilRegister_ReadBufferUlong @ 0x1C00181E8 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUlong64 @ 0x1C003D554 (XilRegister_ReadUlong64.c)
 *     XilRegister_ReadUshort @ 0x1C003D5BC (XilRegister_ReadUshort.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall Register_ReadSecureMmio(__int64 a1, __int64 a2, int a3, unsigned int a4, void *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // esi
  int v13; // edx
  int *Pool2; // rbx
  __int64 v15; // rax
  int v16; // edx
  __int64 v18; // [rsp+38h] [rbp-49h]
  __int64 v19; // [rsp+40h] [rbp-41h] BYREF
  __int128 v20; // [rsp+48h] [rbp-39h]
  __int64 v21; // [rsp+58h] [rbp-29h]
  int v22; // [rsp+60h] [rbp-21h]
  int v23; // [rsp+64h] [rbp-1Dh]
  __int64 v24; // [rsp+68h] [rbp-19h]
  int v25; // [rsp+70h] [rbp-11h]
  unsigned int v26; // [rsp+74h] [rbp-Dh]
  __int64 v27; // [rsp+78h] [rbp-9h] BYREF
  int v28; // [rsp+80h] [rbp-1h]

  v27 = 0LL;
  v28 = 0;
  v8 = 8LL;
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v9 = 2LL;
        break;
      case 2:
        v9 = 4LL;
        break;
      case 3:
        v9 = 8LL;
        break;
      default:
LABEL_15:
        v11 = 0;
        goto LABEL_16;
    }
  }
  else
  {
    v9 = 1LL;
  }
  v10 = v9 * a4;
  if ( v9 * (unsigned __int64)a4 > 0xFFFFFFFF )
    goto LABEL_15;
  if ( !v10 )
    goto LABEL_15;
  v11 = v10 + 8;
  if ( v10 + 8 < v10 )
    goto LABEL_15;
  if ( v11 < 0x10 )
    v11 = 16;
LABEL_16:
  switch ( a3 )
  {
    case 0:
      v8 = 1LL;
LABEL_24:
      v12 = v8 * a4;
      if ( v8 * (unsigned __int64)a4 <= 0xFFFFFFFF )
        goto LABEL_26;
      break;
    case 1:
      v8 = 2LL;
      goto LABEL_24;
    case 2:
      v8 = 4LL;
      goto LABEL_24;
    case 3:
      goto LABEL_24;
  }
  v12 = 0;
LABEL_26:
  if ( v11 <= 0x10 )
  {
    Pool2 = (int *)&v27;
    v11 = 16;
  }
  else
  {
    Pool2 = (int *)ExAllocatePool2(64LL, v11, 1229146200LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v13,
          6,
          74,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
          v11);
      }
      return;
    }
  }
  v15 = *(_QWORD *)(a1 + 120);
  v19 = 0LL;
  v23 = 0;
  v21 = v15;
  v24 = a2;
  v20 = 0LL;
  v22 = 10;
  v25 = a3;
  v26 = a4;
  if ( (int)SecureChannel_SendRequestSynchronously(v18, &v19, 56LL, Pool2, v11) >= 0 )
  {
    v16 = *Pool2;
    if ( *Pool2 >= 0 )
    {
      memmove(a5, Pool2 + 2, v12);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v16,
        6,
        75,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
        *Pool2);
    }
  }
  if ( Pool2 && Pool2 != (int *)&v27 )
    ExFreePoolWithTag(Pool2, 0x49434858u);
}
