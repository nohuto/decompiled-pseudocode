/*
 * XREFs of PccInitiateExecuteCallback @ 0x1C0010F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000846C (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0011204 (WPP_RECORDER_SF_dD.c)
 */

void __fastcall PccInitiateExecuteCallback(int a1, void (*a2)(void))
{
  __int64 v3; // rbx
  char i; // bp
  unsigned __int8 *v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // r14
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  char v11; // bl
  int v12; // [rsp+20h] [rbp-48h]
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF

  if ( a1 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C001C978);
    v3 = qword_1C001C470;
    for ( i = 0; (__int64 *)v3 != &qword_1C001C470; v3 = *(_QWORD *)v3 )
    {
      v5 = *(unsigned __int8 **)(v3 + 32);
      *(_DWORD *)(v3 + 20) = *v5;
      v6 = v5[1];
      if ( v6 > 0x64 )
        v6 = 100;
      if ( !v6 )
        v6 = 1;
      if ( v6 != *(_DWORD *)(v3 + 40) )
      {
        v7 = *(_QWORD *)(v3 - 8);
        *(_DWORD *)(v3 + 40) = v6;
        v13 = v6;
        i = 1;
        ProcLibTraceProcessorSpecificEvent(
          v7,
          (__int64)&PPM_ETW_PCC_CAP_CHANGE,
          (__int64)&PPM_ETW_PCC_CAP_CHANGE_HV,
          4,
          (__int64)&v13);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, v12, v6, *(_DWORD *)(v7 + 56));
      }
    }
    v11 = 0;
    if ( i )
    {
      LOBYTE(word_1C001C98C) = 1;
      if ( !HIBYTE(word_1C001C98C) )
      {
        HIBYTE(word_1C001C98C) = 1;
        v11 = 1;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C001C978);
    if ( v11 )
      IoQueueWorkItem(qword_1C001C980, (PIO_WORKITEM_ROUTINE)PccCapWorker, CriticalWorkQueue, 0LL);
  }
  if ( a2 )
    a2();
}
