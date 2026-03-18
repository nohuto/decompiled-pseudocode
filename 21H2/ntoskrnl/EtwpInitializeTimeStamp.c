/*
 * XREFs of EtwpInitializeTimeStamp @ 0x1406EFBC8
 * Callers:
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 * Callees:
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402E1D0C (EtwpGetLoggerTimeStamp.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  __int64 v2; // rax
  char v3; // si
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 result; // rax
  _OWORD *v7; // rdx
  int v8; // r8d
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF

  switch ( *(_DWORD *)(a1 + 200) )
  {
    case 2:
      v2 = 0LL;
      break;
    case 3:
      v2 = 3LL;
      break;
    case 4:
      v12 = 0LL;
      if ( ((int (__fastcall *)(__int64 *))off_140C02030[0])(&v12) < 0 )
      {
        *(_DWORD *)(a1 + 200) = 1;
        goto LABEL_5;
      }
      v2 = 2LL;
      break;
    default:
      *(_DWORD *)(a1 + 200) = 1;
LABEL_5:
      v2 = 1LL;
      break;
  }
  *(_QWORD *)(a1 + 24) = v2;
  if ( (*(_DWORD *)(a1 + 816) & 2) == 0 )
  {
    if ( *(_DWORD *)(a1 + 200) == 3 )
    {
      *(LARGE_INTEGER *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
      result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
    }
    else
    {
      LODWORD(v12) = 0;
      v11 = 0LL;
      v10 = 0LL;
      RtlGetMultiTimePrecise((LARGE_INTEGER *)&v10, 7, (int *)&v12);
      v3 = v12;
      v4 = v10;
      if ( (v12 & 5) != 5 )
      {
        *(LARGE_INTEGER *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
        KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
        *(_DWORD *)(a1 + 816) &= ~0x8000000u;
        result = *(unsigned int *)(a1 + 200);
        goto LABEL_31;
      }
      v5 = v11;
      result = *(unsigned int *)(a1 + 200);
      *(_QWORD *)(a1 + 304) = v11;
      if ( (_DWORD)result == 2 )
      {
        *(_QWORD *)(a1 + 312) = v5;
LABEL_12:
        v7 = (_OWORD *)(a1 + 304);
        if ( (v3 & 3) == 3 )
        {
          result = *((_QWORD *)&v10 + 1) - v4;
          *(_QWORD *)(a1 + 1280) = *((_QWORD *)&v10 + 1) - v4;
        }
        goto LABEL_14;
      }
      if ( (_DWORD)result == 1 )
      {
        *(_QWORD *)(a1 + 312) = v4;
        goto LABEL_12;
      }
      if ( (_DWORD)result != 4 )
      {
LABEL_31:
        v7 = (_OWORD *)(a1 + 304);
        if ( (_DWORD)result == 4 )
          goto LABEL_14;
        goto LABEL_12;
      }
      result = *((_QWORD *)&v10 + 1);
      *(_QWORD *)(a1 + 312) = *((_QWORD *)&v10 + 1);
    }
    v7 = (_OWORD *)(a1 + 304);
    goto LABEL_14;
  }
  v7 = (_OWORD *)(a1 + 304);
  v8 = *(_DWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 304) = EtwpRefTimeSystem;
  result = EtwpRefQpcDelta;
  *(_QWORD *)(a1 + 1280) = EtwpRefQpcDelta;
  if ( v8 == 3 )
  {
    result = EtwpRefTimeCycle;
    *(_QWORD *)(a1 + 312) = EtwpRefTimeCycle;
  }
  else
  {
    v9 = EtwpRefTimePerfCounter;
    if ( v8 == 2 )
      v9 = EtwpRefTimeSystem;
    *(_QWORD *)(a1 + 312) = v9;
  }
LABEL_14:
  *(_OWORD *)(a1 + 432) = *v7;
  return result;
}
