/*
 * XREFs of sub_4B2B4F68 @ 0x4B2B4F68
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 * Callees:
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 */

int __usercall sub_4B2B4F68@<eax>(int a1@<ebp>)
{
  void *v1; // ecx
  int result; // eax

  v1 = *(void **)(a1 - 40);
  if ( v1 )
    return LdrpDereferenceModule(v1);
  return result;
}
