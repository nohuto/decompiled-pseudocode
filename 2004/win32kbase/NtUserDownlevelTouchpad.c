/*
 * XREFs of NtUserDownlevelTouchpad @ 0x1C0132910
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A53C0 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 */

__int64 __fastcall NtUserDownlevelTouchpad(int a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v14, "DownlevelTouchpad", 0LL);
  EnterCrit(0LL, 1);
  v5 = 0;
  v13 = 0LL;
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_11;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v13 = *a2;
  if ( (unsigned int)v13 > 2 )
  {
LABEL_11:
    v11 = 87LL;
    goto LABEL_12;
  }
  v6 = CPTPProcessor::xxxDownlevelInput(a1, (const struct tagPTP_DOWNLEVELED_INPUT *)&v13);
  if ( v6 < 0 )
  {
    v11 = RtlNtStatusToDosError(v6);
LABEL_12:
    UserSetLastError(v11, v4);
    goto LABEL_13;
  }
  v5 = 1;
LABEL_13:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v14);
  return v5;
}
