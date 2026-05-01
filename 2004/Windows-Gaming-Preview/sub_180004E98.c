/*
 * XREFs of sub_180004E98 @ 0x180004E98
 * Callers:
 *     sub_180007110 @ 0x180007110 (sub_180007110.c)
 *     sub_180008CD4 @ 0x180008CD4 (sub_180008CD4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

FARPROC __fastcall sub_180004E98(__int64 a1)
{
  FARPROC result; // rax
  HMODULE ModuleHandleW; // rax

  result = (FARPROC)qword_18005AD20;
  if ( qword_18005AD20 )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  result = GetProcAddress(ModuleHandleW, "RtlUnsubscribeWnfNotificationWaitForCompletion");
  qword_18005AD20 = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}
