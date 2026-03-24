/*
 * XREFs of Simulator_InitializeInterface @ 0x1C00BB6C8
 * Callers:
 *     DriverEntry @ 0x1C00BB98C (DriverEntry.c)
 * Callees:
 *     Simulator_UnInitializeInterface @ 0x1C00C08A4 (Simulator_UnInitializeInterface.c)
 */

__int64 Simulator_InitializeInterface()
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct _UNICODE_STRING v3; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0LL;
  if ( !g_SimulatorCallbackObject )
  {
    RtlInitUnicodeString(&v3, L"\\Callback\\AcpiSimulator");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &v3;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 16;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback((PCALLBACK_OBJECT *)&g_SimulatorCallbackObject, &ObjectAttributes, 0, 1u) >= 0
      && g_SimulatorCallbackObject )
    {
      g_SimulatorCallbackFuncHandle = ExRegisterCallback(
                                        (PCALLBACK_OBJECT)g_SimulatorCallbackObject,
                                        (PCALLBACK_FUNCTION)Simulator_CallbackWorker,
                                        0LL);
      if ( !g_SimulatorCallbackFuncHandle )
        Simulator_UnInitializeInterface(v2, v1);
    }
    else
    {
      g_SimulatorCallbackObject = 0LL;
    }
  }
  return 0LL;
}
