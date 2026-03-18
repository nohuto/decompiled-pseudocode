/*
 * XREFs of ?SetGenerateShortestAngleBetweenDirections@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@QEAAJ_N@Z @ 0x180170B40
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetGenerateShortestAngleBetweenDirections(
        __int64 *a1,
        char a2)
{
  __int64 v2; // rax

  if ( a2 != *((_BYTE *)a1 + 96) )
  {
    v2 = *a1;
    *((_BYTE *)a1 + 96) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
