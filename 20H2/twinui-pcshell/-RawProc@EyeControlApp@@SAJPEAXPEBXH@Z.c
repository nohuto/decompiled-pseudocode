/*
 * XREFs of ?RawProc@EyeControlApp@@SAJPEAXPEBXH@Z @ 0x180479950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EyeControlApp::RawProc(_QWORD *a1, const void *a2, int a3)
{
  return CoreUICallReceive(
           a1[3],
           &IEyeControlApp_Receive<EyeControlApp>::Type,
           &Microsoft::CoreUI::MessageCall::ECCallbacks_g_parameters_dlShF08DRQv6gwc32CE595KWE1o,
           16LL,
           a1,
           a2,
           a3);
}
