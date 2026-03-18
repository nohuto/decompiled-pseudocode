/*
 * XREFs of MiGetSectionStrongImageReference @ 0x1408D48D0
 * Callers:
 *     MiValidateInPage @ 0x1402297C0 (MiValidateInPage.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiValidateImagePfn @ 0x1406EBA64 (MiValidateImagePfn.c)
 *     MiApplyDriverHotPatch @ 0x1408C57B4 (MiApplyDriverHotPatch.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408CA5F0 (MiPromoteControlAreaToStrongCode.c)
 *     MmGetSectionStrongImageReference @ 0x1408D4928 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = 0LL;
  if ( qword_140C1D918 )
  {
    result = qword_140C1D918(v3, &v5);
    if ( (int)result < 0 )
      return result;
    v2 = v5;
  }
  else
  {
    result = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v2;
  return result;
}
