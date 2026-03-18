/*
 * XREFs of PiCslInitialize @ 0x140A5159C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14037CC30 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x14070B0F0 (ExCreateCallback.c)
 */

__int64 PiCslInitialize()
{
  NTSTATUS v0; // ebx
  UNICODE_STRING v2; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  PipCslConsoleLockState = 0;
  v2 = 0LL;
  RtlInitUnicodeString(&v2, L"\\Callback\\IoExternalDmaUnblock");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.ObjectName = &v2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ExCreateCallback((PCALLBACK_OBJECT *)&PipCslCallbackObject, &ObjectAttributes, 1u, 1u);
  if ( v0 >= 0 )
  {
    ExRegisterCallback((PCALLBACK_OBJECT)PipCslCallbackObject, (PCALLBACK_FUNCTION)PipCslStateChangeCallback, 0LL);
    PipCslInitialized = 1;
  }
  return (unsigned int)v0;
}
