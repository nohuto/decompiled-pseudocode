/*
 * XREFs of PfSnEndTrace @ 0x1406536D8
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x1406536C0 (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     PfSnDeactivateTrace @ 0x1402C2BC8 (PfSnDeactivateTrace.c)
 *     PfFbBufferListFlushStandby @ 0x1402C2F04 (PfFbBufferListFlushStandby.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PfSnCleanupTrace @ 0x14065391C (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x140653A94 (PfSnBuildDumpFromTrace.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnEndTrace(struct _EX_RUNDOWN_REF *P)
{
  char PreviousMode; // r14
  int Ptr_high; // edx
  int v4; // ecx
  __int64 Count_low; // rax
  int v6; // eax
  int v7; // edi
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  unsigned int v10; // eax
  PVOID v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int16 v15; // [rsp+38h] [rbp-29h] BYREF
  PVOID Pa; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  struct _EX_RUNDOWN_REF *v18; // [rsp+58h] [rbp-9h]
  int v19; // [rsp+60h] [rbp-1h]
  int v20; // [rsp+64h] [rbp+3h]
  char *v21; // [rsp+68h] [rbp+7h]
  __int64 v22; // [rsp+70h] [rbp+Fh]
  struct _EX_RUNDOWN_REF *v23; // [rsp+78h] [rbp+17h]
  __int64 v24; // [rsp+80h] [rbp+1Fh]
  struct _EX_RUNDOWN_REF *v25; // [rsp+88h] [rbp+27h]
  __int64 v26; // [rsp+90h] [rbp+2Fh]

  Pa = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PfSnDeactivateTrace(P);
  if ( P && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_EndTrace_Info) )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)&P[3].Count + v14) );
    v15 = v14;
    UserData.Ptr = (ULONGLONG)&v15;
    v19 = 2 * (unsigned __int16)v14;
    v18 = P + 3;
    v21 = (char *)&P[10].Ptr + 4;
    v23 = P + 11;
    v25 = P + 50;
    *(_QWORD *)&UserData.Size = 2LL;
    v20 = 0;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    EtwWrite(RegHandle, &PfSnEvt_EndTrace_Info, 0LL, 5u, &UserData);
  }
  Ptr_high = HIDWORD(P[40].Ptr);
  v4 = HIDWORD(P[41].Ptr);
  if ( Ptr_high > v4 )
  {
    HIDWORD(P[40].Ptr) = v4;
    Ptr_high = v4;
  }
  Count_low = SLODWORD(P[41].Count);
  if ( (int)Count_low >= dword_140C501F4 )
  {
    if ( (int)Count_low > 10 )
    {
      LODWORD(P[41].Count) = 10;
      LODWORD(Count_low) = 10;
    }
    if ( Ptr_high != v4 )
      *((_DWORD *)&P[35].Count + (int)Count_low) += v4 - Ptr_high;
  }
  else
  {
    *((_DWORD *)&P[35].Ptr + Count_low + 1) = v4 - Ptr_high;
    v6 = HIDWORD(P[41].Ptr);
    ++LODWORD(P[41].Count);
    HIDWORD(P[40].Ptr) = v6;
  }
  if ( LODWORD(P[11].Count) != 1 || LODWORD(P[50].Count) == 8 )
    v7 = PfSnBuildDumpFromTrace(&Pa, P);
  else
    v7 = -2147483614;
  v8 = Pa;
  P[56].Count = (unsigned __int64)Pa;
  LODWORD(P[57].Count) = v7;
  PfSnCleanupTrace(P);
  ExFreePoolWithTag(P, 0);
  if ( v7 >= 0 )
  {
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140C4FBE0);
    ExAcquireFastMutex(&FastMutex);
    if ( dword_140C503E4 == 1 )
    {
      KeReleaseGuardedMutex(&FastMutex);
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      v9 = qword_140C503A0;
      if ( *(PVOID **)qword_140C503A0 != &qword_140C50398 )
LABEL_29:
        __fastfail(3u);
      v8[1] = qword_140C503A0;
      *v8 = &qword_140C50398;
      *v9 = v8;
      v10 = dword_140C503E0 + 1;
      qword_140C503A0 = v8;
      while ( 1 )
      {
        dword_140C503E0 = v10;
        if ( v10 <= dword_140C5008C )
          break;
        v12 = qword_140C50398;
        if ( qword_140C50398 == &qword_140C50398 )
          break;
        if ( *((PVOID **)qword_140C50398 + 1) != &qword_140C50398 )
          goto LABEL_29;
        v13 = *(_QWORD *)qword_140C50398;
        if ( *(PVOID *)(*(_QWORD *)qword_140C50398 + 8LL) != qword_140C50398 )
          goto LABEL_29;
        qword_140C50398 = *(PVOID *)qword_140C50398;
        *(_QWORD *)(v13 + 8) = &qword_140C50398;
        ExFreePoolWithTag(v12, 0);
        v10 = dword_140C503E0 - 1;
      }
      KeReleaseGuardedMutex(&FastMutex);
      if ( qword_140C503E8 )
        KeSetEvent(qword_140C503E8, 0, 0);
      v7 = 0;
    }
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v7;
}
