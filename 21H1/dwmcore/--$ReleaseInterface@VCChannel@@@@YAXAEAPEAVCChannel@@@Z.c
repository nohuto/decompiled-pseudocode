/*
 * XREFs of ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800D8C10
 * Callers:
 *     ?CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800D8AA0 (-CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z @ 0x1800D8B68 (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18015242C (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?Release@CChannel@@UEAAKXZ @ 0x1800D8C40 (-Release@CChannel@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CChannel>(CChannel **a1)
{
  CChannel *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CChannel::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
