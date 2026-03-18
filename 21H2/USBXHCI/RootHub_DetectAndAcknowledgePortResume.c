/*
 * XREFs of RootHub_DetectAndAcknowledgePortResume @ 0x1C0011EE8
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001171C (RootHub_HandlePortStatusChangeEvent.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00149A0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C003EB60 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011F9C (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013A48 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003DD2C (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x1C003F040 (WPP_RECORDER_SF_dDd.c)
 */

char __fastcall RootHub_DetectAndAcknowledgePortResume(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r12
  __int64 v6; // rbx
  __int64 v8; // rsi
  __int64 v10; // r12
  char v11; // r15
  int Ulong; // eax
  int v13; // edx
  int v14; // ebx
  char v16; // al
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  unsigned __int16 v20; // r14
  unsigned int v21; // ebx
  char v22; // al
  int v23; // edx
  __int64 v24; // [rsp+70h] [rbp+8h]

  v3 = a2 - 1;
  v4 = a2 - 1;
  v6 = *(_QWORD *)(a1[1] + 88LL);
  v8 = a1[6] + 112 * v4;
  v10 = a1[5] + 16 * v4;
  v11 = 0;
  v24 = v6;
  RootHub_AcquireReadModifyWriteLock(a1, a2 - 1);
  Ulong = XilRegister_ReadUlong(v6, v10);
  v14 = Ulong;
  if ( *(_BYTE *)(v8 + 13) == 3 && (Ulong & 0x400000) != 0 && (Ulong & 0x1E0) == 0 )
  {
    if ( (*(_QWORD *)(a1[1] + 336LL) & 0x80000LL) != 0 )
      RootHub_RestoreU1U2Timeouts(a1, a2);
LABEL_3:
    RootHub_ReleaseReadModifyWriteLock(a1, v3);
    return v11;
  }
  if ( (Ulong & 0x1E0) != 0x1E0 || !a3 && (Ulong & 0x400000) == 0 )
    goto LABEL_3;
  v11 = 1;
  if ( *(_BYTE *)(v8 + 18) == 1 )
    goto LABEL_3;
  v16 = *(_BYTE *)(v8 + 13);
  *(_BYTE *)(v8 + 18) = 1;
  if ( v16 != 2 )
  {
    if ( v16 == 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 3;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(a1[1] + 72LL),
          v13,
          11,
          205,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          a2,
          v14);
      }
      v21 = v14 & 0xE40C200 | 0x10000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          v13,
          11,
          206,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v21);
      }
      XilRegister_WriteUlong(v24, v10, v21);
      v22 = XilRegister_ReadUlong(v24, v10);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          v23,
          11,
          207,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v22);
      }
    }
    goto LABEL_3;
  }
  RootHub_ReleaseReadModifyWriteLock(a1, v3);
  if ( *(int *)(v8 + 48) <= 0 )
    v20 = 50;
  else
    v20 = *(_WORD *)(v8 + 52);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDd(*(_QWORD *)(a1[1] + 72LL), v17, v18, v19);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 40),
    -10000LL * v20);
  return v11;
}
