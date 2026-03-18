/*
 * XREFs of EtwpInitializeTimeStamp @ 0x1406794A0
 * Callers:
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140240C58 (EtwpGetLoggerTimeStamp.c)
 *     RtlGetMultiTimePrecise @ 0x1402DE9B0 (RtlGetMultiTimePrecise.c)
 *     KeQuerySystemTimePrecise @ 0x140355550 (KeQuerySystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bp
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 result; // rax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+30h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  switch ( *(_DWORD *)(a1 + 216) )
  {
    case 2:
      v5 = 0LL;
      break;
    case 3:
      v5 = 3LL;
      break;
    case 4:
      v25 = 0LL;
      if ( ((int (__fastcall *)(__int64 *))off_140C009E0[0])(&v25) < 0 )
      {
        *(_DWORD *)(a1 + 216) = 1;
        goto LABEL_5;
      }
      v5 = 2LL;
      break;
    default:
      *(_DWORD *)(a1 + 216) = 1;
LABEL_5:
      v5 = 1LL;
      break;
  }
  *(_QWORD *)(a1 + 40) = v5;
  v6 = (_QWORD *)(a1 + 320);
  if ( (*(_DWORD *)(a1 + 832) & 2) == 0 )
  {
    if ( *(_DWORD *)(a1 + 216) == 3 )
    {
      *(LARGE_INTEGER *)(a1 + 328) = EtwpGetLoggerTimeStamp(a1, a2, a3, a4);
      result = KeQuerySystemTimePrecise((__int64 *)(a1 + 320), v17, v18, v19);
      goto LABEL_14;
    }
    LODWORD(v25) = 0;
    v24 = 0LL;
    v23 = 0LL;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&v23, 7, (int *)&v25);
    v10 = v25;
    v11 = *((_QWORD *)&v23 + 1);
    v12 = v23;
    if ( (v25 & 5) == 5 )
    {
      v13 = v24;
      result = *(unsigned int *)(a1 + 216);
      *v6 = v24;
      switch ( (_DWORD)result )
      {
        case 2:
          *(_QWORD *)(a1 + 328) = v13;
          break;
        case 1:
          *(_QWORD *)(a1 + 328) = v12;
          break;
        case 4:
          *(_QWORD *)(a1 + 328) = v11;
LABEL_30:
          if ( (_DWORD)result == 4 )
            goto LABEL_14;
          break;
      }
      if ( (v10 & 3) == 3 )
        *(_QWORD *)(a1 + 1296) = v11 - v12;
      goto LABEL_14;
    }
    *(LARGE_INTEGER *)(a1 + 328) = EtwpGetLoggerTimeStamp(a1, v7, v8, v9);
    KeQuerySystemTimePrecise((__int64 *)(a1 + 320), v20, v21, v22);
    *(_DWORD *)(a1 + 832) &= ~0x8000000u;
    result = *(unsigned int *)(a1 + 216);
    goto LABEL_30;
  }
  v15 = *(_DWORD *)(a1 + 216);
  *v6 = EtwpRefTimeSystem;
  result = EtwpRefQpcDelta;
  *(_QWORD *)(a1 + 1296) = EtwpRefQpcDelta;
  if ( v15 == 3 )
  {
    result = EtwpRefTimeCycle;
    *(_QWORD *)(a1 + 328) = EtwpRefTimeCycle;
  }
  else
  {
    v16 = EtwpRefTimePerfCounter;
    if ( v15 == 2 )
      v16 = EtwpRefTimeSystem;
    *(_QWORD *)(a1 + 328) = v16;
  }
LABEL_14:
  *(_OWORD *)(a1 + 448) = *(_OWORD *)v6;
  return result;
}
