/*
 * XREFs of EvtResetActionWorkItem @ 0x1C0086BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EvtResetActionWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event_8; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00660F8);
  v2 = *(_DWORD *)(v1 + 8);
  v3 = *(_QWORD *)v1;
  if ( !v2 )
  {
    v9 = 0LL;
    v7[0] = 24LL;
    v7[1] = FunctionLevelResetCompletion;
    memset(&Event_8, 0, sizeof(Event_8));
    v7[2] = v7;
    KeInitializeEvent(&Event_8, SynchronizationEvent, 0);
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v3 + 32))(*(_QWORD *)(v3 + 8), v2, 0LL, 0LL);
  v5 = v4;
  if ( !v2 && v4 == 259 )
  {
    KeWaitForSingleObject(&Event_8, Executive, 0, 0, 0LL);
    v5 = (unsigned int)v9;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(v1 + 24))(*(_QWORD *)(v1 + 16), v5);
}
