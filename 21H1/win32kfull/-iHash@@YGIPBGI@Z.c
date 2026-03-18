/*
 * XREFs of ?iHash@@YGIPBGI@Z @ 0x89CAC
 * Callers:
 *     ?pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z @ 0x89BDC (-pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QAEXXZ @ 0xDE55E (-vSetUniqueness@PFFOBJ@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall iHash(_WORD *a1, unsigned int a2)
{
  unsigned int v3; // eax
  int v4; // ecx

  v3 = 0;
  while ( *a1 )
  {
    v4 = *(unsigned __int8 *)a1++;
    v3 = v4 + 257 * v3;
  }
  return v3 % a2;
}
