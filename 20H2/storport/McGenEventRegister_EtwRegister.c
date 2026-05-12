/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1C0033EE8
 * Callers:
 *     RaInitializeDriver @ 0x1C007A29C (RaInitializeDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventRegister_EtwRegister()
{
  NTSTATUS result; // eax

  result = 0;
  if ( !StorPortEventProvider_Context )
    return EtwRegister(
             &StorPortEventProvider,
             McGenControlCallbackV2,
             &StorPortEventProvider_Context,
             &StorPortEventProvider_Context);
  return result;
}
