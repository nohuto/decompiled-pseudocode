/*
 * XREFs of RootHub_DetectAndAcknowledgePortResume @ 0x1C0011E24
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0011BE0 (RootHub_HandlePortStatusChangeEvent.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00147B0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C003E2C0 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003D7BC (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x1C003E7A0 (WPP_RECORDER_SF_dDd.c)
 */

char __fastcall RootHub_DetectAndAcknowledgePortResume(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r12
  __int64 v6; // rbx
  __int64 v8; // rsi
  __int64 v10; // r12
  char v11; // r15
  int v12; // edx
  int Ulong; // ebx
  char v15; // al
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  unsigned __int16 v19; // r14
  unsigned int v20; // ebx
  char v21; // al
  int v22; // edx
  __int64 v23; // [rsp+70h] [rbp+8h]

  v3 = a2 - 1;
  v4 = a2 - 1;
  v6 = *(_QWORD *)(a1[1] + 88LL);
  v8 = a1[6] + 112 * v4;
  v10 = a1[5] + 16 * v4;
  v11 = 0;
  v23 = v6;
  RootHub_AcquireReadModifyWriteLock(a1, a2 - 1);
  Ulong = XilRegister_ReadUlong(v6, v10);
  if ( *(_BYTE *)(v8 + 13) == 3
    && (Ulong & 0x400000) != 0
    && (Ulong & 0x1E0) == 0
    && (*(_QWORD *)(a1[1] + 336LL) & 0x80000LL) != 0 )
  {
    RootHub_RestoreU1U2Timeouts(a1, a2);
  }
  if ( (Ulong & 0x1E0) != 0x1E0 || !a3 && (Ulong & 0x400000) == 0 )
    goto LABEL_3;
  v11 = 1;
  if ( *(_BYTE *)(v8 + 18) == 1 )
    goto LABEL_3;
  v15 = *(_BYTE *)(v8 + 13);
  *(_BYTE *)(v8 + 18) = 1;
  if ( v15 != 2 )
  {
    if ( v15 == 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(a1[1] + 72LL),
          v12,
          11,
          204,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          a2,
          Ulong);
      }
      v20 = Ulong & 0xE40C200 | 0x10000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          v12,
          11,
          205,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v20);
      }
      XilRegister_WriteUlong(v23, v10, v20);
      v21 = XilRegister_ReadUlong(v23, v10);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          v22,
          11,
          206,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v21);
      }
    }
LABEL_3:
    RootHub_ReleaseReadModifyWriteLock(a1, v3);
    return v11;
  }
  RootHub_ReleaseReadModifyWriteLock(a1, v3);
  if ( *(int *)(v8 + 48) <= 0 )
    v19 = 50;
  else
    v19 = *(_WORD *)(v8 + 52);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDd(*(_QWORD *)(a1[1] + 72LL), v16, v17, v18);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 40),
    -10000LL * v19);
  return v11;
}
