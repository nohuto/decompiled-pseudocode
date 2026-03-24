/*
 * XREFs of PfSnEndTrace @ 0x1406CF788
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x1406CF770 (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     PfFbBufferListFlushStandby @ 0x1402D4738 (PfFbBufferListFlushStandby.c)
 *     PfSnDeactivateTrace @ 0x1402DF7CC (PfSnDeactivateTrace.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PfSnCleanupTrace @ 0x1406CF9CC (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x1406CFB44 (PfSnBuildDumpFromTrace.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  if ( (int)Count_low >= dword_140C502B4 )
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
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140C4FCA0);
    ExAcquireFastMutex(&FastMutex);
    if ( dword_140C504A4 == 1 )
    {
      KeReleaseGuardedMutex(&FastMutex);
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      v9 = qword_140C50460;
      if ( *(PVOID **)qword_140C50460 != &qword_140C50458 )
LABEL_29:
        __fastfail(3u);
      v8[1] = qword_140C50460;
      *v8 = &qword_140C50458;
      *v9 = v8;
      v10 = dword_140C504A0 + 1;
      qword_140C50460 = v8;
      while ( 1 )
      {
        dword_140C504A0 = v10;
        if ( v10 <= dword_140C5014C )
          break;
        v12 = qword_140C50458;
        if ( qword_140C50458 == &qword_140C50458 )
          break;
        if ( *((PVOID **)qword_140C50458 + 1) != &qword_140C50458 )
          goto LABEL_29;
        v13 = *(_QWORD *)qword_140C50458;
        if ( *(PVOID *)(*(_QWORD *)qword_140C50458 + 8LL) != qword_140C50458 )
          goto LABEL_29;
        qword_140C50458 = *(PVOID *)qword_140C50458;
        *(_QWORD *)(v13 + 8) = &qword_140C50458;
        ExFreePoolWithTag(v12, 0);
        v10 = dword_140C504A0 - 1;
      }
      KeReleaseGuardedMutex(&FastMutex);
      if ( qword_140C504A8 )
        KeSetEvent(qword_140C504A8, 0, 0);
      v7 = 0;
    }
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v7;
}
