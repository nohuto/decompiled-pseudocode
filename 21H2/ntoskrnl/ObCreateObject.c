/*
 * XREFs of ObCreateObject @ 0x1406ABDC0
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtCreateWorkerFactory @ 0x1406AB120 (NtCreateWorkerFactory.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     NtCreateJobObject @ 0x1406F7090 (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140947B0C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14095A72C (ExpProfileCreate.c)
 *     MiSectionInitialization @ 0x140A56074 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A5BED4 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, char a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
