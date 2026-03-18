/*
 * XREFs of IoRegisterBootDriverCallback @ 0x1407C0CC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14037CC30 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x14070B0F0 (ExCreateCallback.c)
 */

PVOID __fastcall IoRegisterBootDriverCallback(PCALLBACK_FUNCTION CallbackFunction, PVOID CallbackContext)
{
  UNICODE_STRING v5; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v5 = 0LL;
  if ( PnpBootDriverCallbackRegistrationClosed )
    return 0LL;
  if ( !PnpBootDriverCallbackObject
    && (RtlInitUnicodeString(&v5, L"\\Callback\\BootDriver"),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = &v5,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ExCreateCallback(&PnpBootDriverCallbackObject, &ObjectAttributes, 1u, 1u) < 0) )
  {
    return 0LL;
  }
  else
  {
    return ExRegisterCallback(PnpBootDriverCallbackObject, CallbackFunction, CallbackContext);
  }
}
