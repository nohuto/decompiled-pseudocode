/*
 * XREFs of PipProcessPendingOperations @ 0x140A51D60
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipProcessPendingOsExtensionResources @ 0x140A51D80 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A51E0C (PipProcessPendingServices.c)
 */

__int64 PipProcessPendingOperations()
{
  __int64 result; // rax

  result = PipProcessPendingServices();
  if ( (int)result >= 0 )
    return PipProcessPendingOsExtensionResources();
  return result;
}
