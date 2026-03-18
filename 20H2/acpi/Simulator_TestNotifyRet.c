/*
 * XREFs of Simulator_TestNotifyRet @ 0x1C0064168
 * Callers:
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     AMLIRegEventHandler @ 0x1C002BF3C (AMLIRegEventHandler.c)
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C00636E0 (Simulator_AsyncEvalObjectCallBack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_TestNotifyRet(_DWORD *Argument1, int a2)
{
  if ( g_SimulatorCallbackObject )
  {
    Argument1[18] = a2;
    Argument1[2] = 2;
    ExNotifyCallback(g_SimulatorCallbackObject, Argument1, 0LL);
    return (unsigned int)Argument1[18];
  }
  else
  {
    __debugbreak();
    return 3221225473LL;
  }
}
