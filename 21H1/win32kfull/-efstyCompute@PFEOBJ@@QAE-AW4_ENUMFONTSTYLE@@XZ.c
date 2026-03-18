/*
 * XREFs of ?efstyCompute@PFEOBJ@@QAE?AW4_ENUMFONTSTYLE@@XZ @ 0x8AC7C
 * Callers:
 *     ?efstyCompute@@YG?AW4_ENUMFONTSTYLE@@PAHAAVPFEOBJ@@@Z @ 0x8AC5C (-efstyCompute@@YG-AW4_ENUMFONTSTYLE@@PAHAAVPFEOBJ@@@Z.c)
 *     ?bAddPFELink@FHOBJ@@QAEHPAU_HASHBUCKET@@IPBGAAVPFEOBJ@@H@Z @ 0xDE7EC (-bAddPFELink@FHOBJ@@QAEHPAU_HASHBUCKET@@IPBGAAVPFEOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall PFEOBJ::efstyCompute(void *this)
{
  switch ( *(_WORD *)(*(_DWORD *)(*(_DWORD *)this + 20) + 52) & 0x21 )
  {
    case 1:
      return 2;
    case 32:
      return 1;
    case 33:
      return 3;
  }
  return 0;
}
