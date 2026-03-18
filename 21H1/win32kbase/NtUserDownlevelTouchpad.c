/*
 * XREFs of NtUserDownlevelTouchpad @ 0x1C0138900
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01AB120 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 */

__int64 __fastcall NtUserDownlevelTouchpad(int a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v13, "DownlevelTouchpad", 0LL, a4);
  EnterCrit(0LL, 1);
  v7 = 0;
  v12 = 0LL;
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_11;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v12 = *a2;
  if ( (unsigned int)v12 > 2 )
  {
LABEL_11:
    v10 = 87LL;
    goto LABEL_12;
  }
  v8 = CPTPProcessor::xxxDownlevelInput(a1, (const struct tagPTP_DOWNLEVELED_INPUT *)&v12);
  if ( v8 < 0 )
  {
    v10 = RtlNtStatusToDosError(v8);
LABEL_12:
    UserSetLastError(v10, v6);
    goto LABEL_13;
  }
  v7 = 1;
LABEL_13:
  UserSessionSwitchLeaveCrit(v9);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v13);
  return v7;
}
