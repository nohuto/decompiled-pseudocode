/*
 * XREFs of ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180052180
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18004EDC4 (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(void **a1)
{
  void *v2; // rcx
  HLOCAL result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = LocalFree(v2);
    *a1 = 0LL;
  }
  return result;
}
