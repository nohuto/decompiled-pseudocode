/*
 * XREFs of PopPublishAndPurgePowerRequestStats @ 0x1408F8C3C
 * Callers:
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F8EB0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14023D318 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlRandomEx @ 0x140336C50 (RtlRandomEx.c)
 *     PoQueryStopWatch @ 0x140361540 (PoQueryStopWatch.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140571664 (PopDiagTraceSleepStudyBlocker.c)
 *     PoResetStopWatch @ 0x14057E134 (PoResetStopWatch.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14071CB48 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopGetStopWatchByRequestType @ 0x14071CE98 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopPublishAndPurgePowerRequestStats(char *Buffer, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // edi
  _QWORD *StopWatchByRequestType; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  const size_t *v10; // rdx
  bool v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v15; // [rsp+44h] [rbp-BCh] BYREF
  ULONG Seed; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  int v28; // [rsp+C8h] [rbp-38h]
  int v29; // [rsp+CCh] [rbp-34h]
  __int128 *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+100h] [rbp+0h] BYREF
  const char *v37; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  int v39; // [rsp+12Ch] [rbp+2Ch]
  _BYTE v40[16]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  BOOL *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  __int64 *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h] BYREF

  v47 = a2;
  v13 = 0LL;
  v3 = *((_QWORD *)Buffer + 2);
  v4 = -1LL;
  v20 = 0LL;
  do
    ++v4;
  while ( *(_WORD *)(v3 + 2 * v4) );
  v12 = a2;
  v22.Ptr = (ULONGLONG)&v12;
  v14 = v4;
  v27 = v3;
  v25 = &v14;
  *(_QWORD *)&v22.Size = 1LL;
  v26 = 4LL;
  v28 = 2 * v4;
  v29 = 0;
  *((_QWORD *)&v19 + 1) = 0LL;
  v5 = 0;
  *(_QWORD *)&v19 = RtlRandomEx(&Seed);
  v21 = v19;
  v30 = &v21;
  v31 = 16LL;
  do
  {
    StopWatchByRequestType = (_QWORD *)PopGetStopWatchByRequestType((__int64)Buffer, v5);
    v7 = (__int64)StopWatchByRequestType;
    if ( StopWatchByRequestType )
    {
      v11 = 0;
      v13 = 0LL;
      PoQueryStopWatch(StopWatchByRequestType, (__int64 *)&v13, &v11);
      PoResetStopWatch(v7);
      if ( (unsigned int)dword_140C021E8 > 5 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( aSleepstudyBloc[v9] );
        v10 = (const size_t *)*((_QWORD *)Buffer + 2);
        v37 = "SleepStudy Blocker Event";
        v38 = v9 + 1;
        v39 = 0;
        tlgCreate1Sz_wchar_t((__int64)v40, v10);
        v42 = 8LL;
        v44 = 4LL;
        v46 = 8LL;
        v41 = &v17;
        v15 = v11;
        v43 = &v15;
        v18 = v47;
        v45 = &v18;
        v17 = v13 / 0xA / 0xF4240;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C021E8,
          (unsigned __int8 *)byte_140028DB8,
          0LL,
          0LL,
          7u,
          &v36);
      }
      if ( v13 )
      {
        v24 = 16LL;
        v23 = &v20;
        v33 = 8LL;
        v32 = &v13;
        v20 = 0LL;
        LODWORD(v20) = -1428313379;
        v34 = &v47;
        BYTE4(v20) = 6;
        v35 = 8LL;
        PopDiagTraceSleepStudyBlocker(v8, &v22);
      }
    }
    ++v5;
  }
  while ( v5 < 4 );
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Buffer, 0) <= 0 )
    PopAvlDeleteStatsForPowerRequest(Buffer);
}
