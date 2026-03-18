/*
 * XREFs of _GreChangeGhostFont@8 @ 0x1D89B9
 * Callers:
 *     _NtGdiChangeGhostFont@8 @ 0x2121F6 (_NtGdiChangeGhostFont@8.c)
 * Callees:
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QAEHPAXH@Z @ 0x1D02C3 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QAEHPAXH@Z.c)
 */

int __usercall GreChangeGhostFont@<eax>(void *a1@<ecx>, int a2@<edx>, unsigned int a3@<edi>)
{
  int v3; // esi
  struct PFT *v5; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  v5 = gpPFTPrivate;
  if ( gpPFTPrivate && *((_DWORD *)gpPFTPrivate + 4) )
    return PUBLIC_PFTOBJ::ChangeGhostFont(&v5, a3, a1, a2);
  return v3;
}
