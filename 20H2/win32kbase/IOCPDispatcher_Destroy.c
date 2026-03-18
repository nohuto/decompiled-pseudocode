/*
 * XREFs of IOCPDispatcher_Destroy @ 0x1C00BB030
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0005888 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01AC8E0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00BB124 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

void *__fastcall IOCPDispatcher_Destroy(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( gpIOCPDispatcher )
  {
    result = IOCPDispatcher::`scalar deleting destructor'(gpIOCPDispatcher, a2);
    gpIOCPDispatcher = 0LL;
  }
  return result;
}
