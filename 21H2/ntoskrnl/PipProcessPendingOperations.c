/*
 * XREFs of PipProcessPendingOperations @ 0x140A54368
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipProcessPendingOsExtensionResources @ 0x140A54388 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A54414 (PipProcessPendingServices.c)
 */

__int64 PipProcessPendingOperations()
{
  __int64 result; // rax

  result = PipProcessPendingServices();
  if ( (int)result >= 0 )
    return PipProcessPendingOsExtensionResources();
  return result;
}
