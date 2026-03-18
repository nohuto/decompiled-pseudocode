/*
 * XREFs of EtwpOpenConsumer @ 0x140677874
 * Callers:
 *     EtwpRealtimeConnect @ 0x140677318 (EtwpRealtimeConnect.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 */

NTSTATUS __fastcall EtwpOpenConsumer(PHANDLE Handle)
{
  return ObOpenObjectByPointer(
           KeGetCurrentThread()->ApcState.Process,
           0x200u,
           0LL,
           0x28u,
           (POBJECT_TYPE)PsProcessType,
           0,
           Handle);
}
