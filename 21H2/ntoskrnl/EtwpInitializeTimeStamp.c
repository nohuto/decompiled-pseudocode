/*
 * XREFs of EtwpInitializeTimeStamp @ 0x1406DDD64
 * Callers:
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x14022CAD8 (EtwpGetLoggerTimeStamp.c)
 *     KeQuerySystemTimePrecise @ 0x140278F00 (KeQuerySystemTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x1402ECFA0 (RtlGetMultiTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  char v4; // bp
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  switch ( *(_DWORD *)(a1 + 216) )
  {
    case 2:
      v2 = 0LL;
      break;
    case 3:
      v2 = 3LL;
      break;
    case 4:
      v19 = 0LL;
      if ( ((int (__fastcall *)(__int64 *))off_140C009E0[0])(&v19) < 0 )
      {
        *(_DWORD *)(a1 + 216) = 1;
        goto LABEL_5;
      }
      v2 = 2LL;
      break;
    default:
      *(_DWORD *)(a1 + 216) = 1;
LABEL_5:
      v2 = 1LL;
      break;
  }
  *(_QWORD *)(a1 + 40) = v2;
  v3 = (_QWORD *)(a1 + 320);
  if ( (*(_DWORD *)(a1 + 832) & 2) == 0 )
  {
    if ( *(_DWORD *)(a1 + 216) == 3 )
    {
      *(LARGE_INTEGER *)(a1 + 328) = EtwpGetLoggerTimeStamp(a1);
      result = KeQuerySystemTimePrecise((__int64 *)(a1 + 320), v11, v12, v13);
      goto LABEL_14;
    }
    LODWORD(v19) = 0;
    v18 = 0LL;
    v17 = 0LL;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&v17, 7, (int *)&v19);
    v4 = v19;
    v5 = *((_QWORD *)&v17 + 1);
    v6 = v17;
    if ( (v19 & 5) == 5 )
    {
      v7 = v18;
      result = *(unsigned int *)(a1 + 216);
      *v3 = v18;
      switch ( (_DWORD)result )
      {
        case 2:
          *(_QWORD *)(a1 + 328) = v7;
          break;
        case 1:
          *(_QWORD *)(a1 + 328) = v6;
          break;
        case 4:
          *(_QWORD *)(a1 + 328) = v5;
LABEL_30:
          if ( (_DWORD)result == 4 )
            goto LABEL_14;
          break;
      }
      if ( (v4 & 3) == 3 )
        *(_QWORD *)(a1 + 1264) = v5 - v6;
      goto LABEL_14;
    }
    *(LARGE_INTEGER *)(a1 + 328) = EtwpGetLoggerTimeStamp(a1);
    KeQuerySystemTimePrecise((__int64 *)(a1 + 320), v14, v15, v16);
    *(_DWORD *)(a1 + 832) &= ~0x8000000u;
    result = *(unsigned int *)(a1 + 216);
    goto LABEL_30;
  }
  v9 = *(_DWORD *)(a1 + 216);
  *v3 = EtwpRefTimeSystem;
  result = EtwpRefQpcDelta;
  *(_QWORD *)(a1 + 1264) = EtwpRefQpcDelta;
  if ( v9 == 3 )
  {
    result = EtwpRefTimeCycle;
    *(_QWORD *)(a1 + 328) = EtwpRefTimeCycle;
  }
  else
  {
    v10 = EtwpRefTimePerfCounter;
    if ( v9 == 2 )
      v10 = EtwpRefTimeSystem;
    *(_QWORD *)(a1 + 328) = v10;
  }
LABEL_14:
  *(_OWORD *)(a1 + 448) = *(_OWORD *)v3;
  return result;
}
