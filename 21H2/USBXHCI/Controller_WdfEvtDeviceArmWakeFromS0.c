/*
 * XREFs of Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034A20
 * Callers:
 *     <none>
 * Callees:
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceArmWakeFromS0(__int64 a1)
{
  char v1; // bl
  unsigned int v2; // edi
  int v3; // edx
  __int64 v4; // rsi
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rbp
  unsigned int *v8; // rbx
  __int16 Ulong; // ax
  int v10; // r8d
  int v11; // r9d

  v1 = a1;
  v2 = 0;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00603D8)
                 + 8);
  if ( *(_BYTE *)(v4 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v5, v6);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v7 = *(_QWORD *)(v4 + 152);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_i(*(_QWORD *)(v4 + 72), v3, 4, 88, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids, v1);
  }
  *(_BYTE *)(v4 + 468) = 1;
  if ( *(_DWORD *)(v7 + 16) )
  {
    do
    {
      RootHub_AcquireReadModifyWriteLock(v7, v2, v5, v6);
      v8 = (unsigned int *)(*(_QWORD *)(v7 + 40) + 16LL * v2);
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v4 + 88), v8);
      XilRegister_WriteUlong(*(_QWORD *)(v4 + 88), v8, Ulong & 0xC200 | 0xE000000);
      RootHub_ReleaseReadModifyWriteLock(v7, v2++, v10, v11);
    }
    while ( v2 < *(_DWORD *)(v7 + 16) );
  }
  return 0LL;
}
