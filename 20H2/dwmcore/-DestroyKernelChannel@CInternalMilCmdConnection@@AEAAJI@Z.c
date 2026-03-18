/*
 * XREFs of ?DestroyKernelChannel@CInternalMilCmdConnection@@AEAAJI@Z @ 0x18014EA90
 * Callers:
 *     ?CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800343B0 (-CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18014E9AC (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::DestroyKernelChannel(CInternalMilCmdConnection *this, unsigned int a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v2 = 0;
  v3 = NtDCompositionDestroyChannel(a2);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3 | 0x10000000, 0xBFu, 0LL);
  }
  return v2;
}
