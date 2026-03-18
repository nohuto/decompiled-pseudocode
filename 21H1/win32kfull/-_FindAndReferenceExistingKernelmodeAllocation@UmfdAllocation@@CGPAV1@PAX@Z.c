/*
 * XREFs of ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CGPAV1@PAX@Z @ 0x8CF36
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z @ 0x8CDC4 (-ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z.c)
 * Callees:
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0x8CF60 (-Lookup@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z.c)
 */

struct UmfdAllocation *__thiscall UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(
        NSInstrumentation::CPointerHashTable *this)
{
  char *v1; // esi
  void *v3; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  v3 = 0;
  if ( NSInstrumentation::CPointerHashTable::Lookup(this, this, &v3) )
  {
    v1 = (char *)v3 - 20;
    ++*((_DWORD *)v3 - 5);
  }
  return (struct UmfdAllocation *)v1;
}
