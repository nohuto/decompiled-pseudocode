/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034EA0
 * Callers:
 *     <none>
 * Callees:
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011F9C (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013A48 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

char __fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax
  int v3; // edx
  unsigned int v4; // edi
  __int64 v5; // rsi
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbp
  bool v9; // zf
  unsigned int *v10; // rbx
  __int16 Ulong; // ax

  v1 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00613D8);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)(v5 + 553) )
  {
    LOBYTE(v2) = KeGetCurrentIrql();
    if ( (_BYTE)v2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v6, v7);
      LOBYTE(v2) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v2 )
        __debugbreak();
    }
  }
  v8 = *(_QWORD *)(v5 + 152);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    LOBYTE(v2) = WPP_RECORDER_SF_i(
                   *(_QWORD *)(v5 + 72),
                   v3,
                   4,
                   89,
                   (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
                   v1);
  }
  v9 = (*(_QWORD *)(v5 + 336) & 0x20000000LL) == 0;
  *(_BYTE *)(v5 + 468) = 0;
  if ( v9 && *(_DWORD *)(v8 + 16) )
  {
    do
    {
      RootHub_AcquireReadModifyWriteLock(v8, v4);
      v10 = (unsigned int *)(*(_QWORD *)(v8 + 40) + 16LL * v4);
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v5 + 88), v10);
      XilRegister_WriteUlong(*(_QWORD *)(v5 + 88), v10, Ulong & 0xC200);
      LOBYTE(v2) = RootHub_ReleaseReadModifyWriteLock(v8, v4++);
    }
    while ( v4 < *(_DWORD *)(v8 + 16) );
  }
  return v2;
}
