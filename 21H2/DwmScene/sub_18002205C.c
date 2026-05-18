/*
 * XREFs of sub_18002205C @ 0x18002205C
 * Callers:
 *     sub_180020010 @ 0x180020010 (sub_180020010.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002205C(__int64 a1)
{
  FARPROC RtlUnsubscribeWnfNotificationWaitForCompletion; // rax
  HMODULE ModuleHandleW; // rax

  RtlUnsubscribeWnfNotificationWaitForCompletion = (FARPROC)qword_18021F868;
  if ( qword_18021F868 )
    return ((__int64 (__fastcall *)(__int64))RtlUnsubscribeWnfNotificationWaitForCompletion)(a1);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlUnsubscribeWnfNotificationWaitForCompletion = GetProcAddress(
                                                     ModuleHandleW,
                                                     "RtlUnsubscribeWnfNotificationWaitForCompletion");
  qword_18021F868 = (__int64)RtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( RtlUnsubscribeWnfNotificationWaitForCompletion )
    return ((__int64 (__fastcall *)(__int64))RtlUnsubscribeWnfNotificationWaitForCompletion)(a1);
  else
    return 3221225785LL;
}
