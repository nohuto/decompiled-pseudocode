/*
 * XREFs of PfFbLogEntryReserve @ 0x140273BCC
 * Callers:
 *     PfLogDeleteHelper @ 0x140273960 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x140273ADC (PfLogEvent.c)
 *     PfFileInfoNotify @ 0x140328350 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PfFbLogEntryReserve(PEX_RUNDOWN_REF RunRef, PSLIST_ENTRY *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // rsi
  PEX_RUNDOWN_REF v7; // rbx
  PSLIST_ENTRY v8; // rdx
  __int64 v9; // r8
  int v10; // edi

  v4 = a4;
  v7 = RunRef;
  while ( ExAcquireRundownProtection(RunRef) )
  {
    while ( 1 )
    {
      v8 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v7[4]);
      if ( v8 )
        break;
      v8 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v7[2]);
      if ( v8 )
        break;
      v10 = ((__int64 (__fastcall *)(PEX_RUNDOWN_REF))v7[11].Count)(v7);
      if ( v10 < 0 )
        goto LABEL_9;
    }
    v9 = *((_QWORD *)&v8[1].Next + 1);
    if ( v4 <= (__int64)v8[2].Next - v9 )
    {
      *a3 = v9;
      v10 = 0;
      *a2 = v8;
      return (unsigned int)v10;
    }
    if ( !*((_DWORD *)&v8[2].Next + 2) )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)&v7[2], v8);
      v10 = -1073741789;
LABEL_9:
      ++HIDWORD(v7[13].Ptr);
      LODWORD(v7[14].Count) += v4;
      ExReleaseRundownProtection(v7);
      return (unsigned int)v10;
    }
    ((void (__fastcall *)(PSLIST_ENTRY))v7[12].Count)(v8);
    RunRef = v7;
  }
  return 3221225865LL;
}
