/*
 * XREFs of PipProcessPendingOperations @ 0x140A516E0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipProcessPendingOsExtensionResources @ 0x140A51700 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A5178C (PipProcessPendingServices.c)
 */

__int64 PipProcessPendingOperations()
{
  __int64 result; // rax

  result = PipProcessPendingServices();
  if ( (int)result >= 0 )
    return PipProcessPendingOsExtensionResources();
  return result;
}
