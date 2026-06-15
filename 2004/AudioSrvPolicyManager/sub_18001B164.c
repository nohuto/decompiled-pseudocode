/*
 * XREFs of sub_18001B164 @ 0x18001B164
 * Callers:
 *     sub_18003C165 @ 0x18003C165 (sub_18003C165.c)
 *     unknown_libname_44 @ 0x18003C177 (unknown_libname_44.c)
 *     sub_18003C1D1 @ 0x18003C1D1 (sub_18003C1D1.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall sub_18001B164(void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
