/*
 * XREFs of Simulator_UnInitializeInterface @ 0x1C00C0744
 * Callers:
 *     Simulator_InitializeInterface @ 0x1C00BB558 (Simulator_InitializeInterface.c)
 * Callees:
 *     <none>
 */

void Simulator_UnInitializeInterface()
{
  if ( g_SimulatorCallbackObject )
  {
    ObfDereferenceObject(g_SimulatorCallbackObject);
    g_SimulatorCallbackObject = 0LL;
  }
  if ( g_SimulatorCallbackFuncHandle )
  {
    ExUnregisterCallback(g_SimulatorCallbackFuncHandle);
    g_SimulatorCallbackFuncHandle = 0LL;
  }
}
