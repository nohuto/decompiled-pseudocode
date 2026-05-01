/*
 * XREFs of _lambda_e6dbb4c1b06bb51faf8482f5ad286731_::operator() @ 0x180230558
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180234ADC (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartClipboardSignalListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180236358 (-StartClipboardSignalListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 */

__int64 __fastcall lambda_e6dbb4c1b06bb51faf8482f5ad286731_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v6; // [rsp+58h] [rbp+10h] BYREF

  if ( !byte_1805CEF70 )
  {
    v6 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Clipboard",
      L"IsClipboardSignalProducingFeatureAvailable",
      0x10u,
      0LL,
      &dword_1805CEF6C,
      &v6);
    byte_1805CEF70 = 1;
  }
  if ( dword_1805CEF6C )
  {
    if ( (v2 = *a1, !*(_QWORD *)(*a1 + 256)) && *(_DWORD *)(v2 + 200) != 2 || *(_BYTE *)(v2 + 320) )
    {
      started = TaskFlowImmersiveShellBroker::StartClipboardSignalListener((TaskFlowImmersiveShellBroker *)v2);
      if ( started < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9F,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)started);
    }
  }
  return 0LL;
}
