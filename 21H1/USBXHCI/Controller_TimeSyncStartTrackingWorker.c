/*
 * XREFs of Controller_TimeSyncStartTrackingWorker @ 0x1C0032FE0
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Release @ 0x1C0006998 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0006DD0 (DynamicLock_Acquire.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0030A9C (Controller_DetectFrameMicroframeBoundary.c)
 */

__int64 __fastcall Controller_TimeSyncStartTrackingWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // r14d
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbp
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0060428);
  v3 = Controller_DetectFrameMicroframeBoundary(v2);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 600), v4, v5, v6);
  v10 = (_QWORD *)(v2 + 624);
  while ( 1 )
  {
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
      break;
    if ( (_QWORD *)v11[1] != v10 || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11) )
      __fastfail(3u);
    *v10 = v12;
    *(_QWORD *)(v12 + 8) = v10;
    if ( v3 < 0 )
      goto LABEL_9;
    v13 = v11[2];
    *((_BYTE *)v11 + 40) = 1;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 120))(
           WdfDriverGlobals,
           *(_QWORD *)(v2 + 616),
           v13);
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          v7,
          4,
          278,
          (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
          v3);
      }
LABEL_9:
      v14 = 0LL;
      goto LABEL_10;
    }
    v14 = 9LL;
LABEL_10:
    DynamicLock_Release(*(_QWORD *)(v2 + 600), v7, v8, v9);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01023 + 2120))(
      WdfDriverGlobals,
      v11[3],
      (unsigned int)v3,
      v14);
    DynamicLock_Acquire(*(_QWORD *)(v2 + 600), v15, v16, v17);
  }
  v18 = *(_QWORD *)(v2 + 600);
  *(_BYTE *)(v2 + 648) = 0;
  return DynamicLock_Release(v18, v7, v8, v9);
}
