/*
 * XREFs of NtUserDownlevelTouchpad @ 0x1C01305C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A3040 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 */

__int64 __fastcall NtUserDownlevelTouchpad(int a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v16; // [rsp+68h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v16, "DownlevelTouchpad", 0LL, a4);
  EnterCrit(0, 1);
  v7 = 0;
  v15 = 0LL;
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_11;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v15 = *a2;
  if ( (unsigned int)v15 > 2 )
  {
LABEL_11:
    v13 = 87LL;
    goto LABEL_12;
  }
  v8 = CPTPProcessor::xxxDownlevelInput(a1, (const struct tagPTP_DOWNLEVELED_INPUT *)&v15);
  if ( v8 < 0 )
  {
    v13 = RtlNtStatusToDosError(v8);
LABEL_12:
    UserSetLastError(v13, v6);
    goto LABEL_13;
  }
  v7 = 1;
LABEL_13:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v16);
  return v7;
}
