/*
 * XREFs of SeSetTokenTrustLink @ 0x14030F6C8
 * Callers:
 *     PsImpersonateClient @ 0x140609080 (PsImpersonateClient.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall SeSetTokenTrustLink(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *(_QWORD *)(a1 + 1112) = a2;
  return result;
}
