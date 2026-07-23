/*
 * XREFs of ZwCreatePort @ 0x1403F9870
 * Callers:
 *     SeRmInitPhase1 @ 0x140A6B14C (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
