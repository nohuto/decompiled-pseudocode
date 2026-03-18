/*
 * XREFs of ObCreateObject @ 0x14070ACF0
 * Callers:
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC (VrpHandleIoctlInitializeJobForVreg.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     NtCreateWorkerFactory @ 0x140709330 (NtCreateWorkerFactory.c)
 *     NtCreateJobObject @ 0x140710B60 (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094A16C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14095CCDC (ExpProfileCreate.c)
 *     MiSectionInitialization @ 0x140A53A6C (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A598A8 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A5DAAC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  __int64 v10; // [rsp+20h] [rbp-38h]

  return ObCreateObjectEx(a1, a2, a3, a4, v10, a6, a7, a8, a9, 0LL);
}
