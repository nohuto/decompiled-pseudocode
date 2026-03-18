/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeCompleteDpc @ 0x1C0016640
 * Callers:
 *     <none>
 * Callees:
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00160C4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RootHub_WdfEvtTimer20PortResumeCompleteDpc(__int64 a1)
{
  _QWORD ***v1; // rax
  int v2; // r8d
  int v3; // r9d

  v1 = (_QWORD ***)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0060400);
  return RootHub_WdfEvtTimer20PortResumeComplete(**v1, *((_DWORD *)*v1 + 2), v2, v3);
}
