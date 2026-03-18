/*
 * XREFs of ObCreateObject @ 0x140643F10
 * Callers:
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C8674 (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtCreateWorkerFactory @ 0x1406424A0 (NtCreateWorkerFactory.c)
 *     NtCreateJobObject @ 0x14065B8E0 (NtCreateJobObject.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140943138 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14095584C (ExpProfileCreate.c)
 *     MiSectionInitialization @ 0x140A4D6EC (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A532BC (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A576AC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(char a1, _DWORD *a2, __int64 a3, char a4, int a5, int a6, int a7, int a8, _QWORD *a9)
{
  __int64 v10; // [rsp+20h] [rbp-38h]

  return ObCreateObjectEx(a1, a2, a3, a4, v10, a6, a7, a8, a9, 0LL);
}
