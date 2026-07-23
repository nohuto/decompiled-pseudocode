/*
 * XREFs of MiGetSectionStrongImageReference @ 0x1408D8030
 * Callers:
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1402DFDC0 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1405FAEC4 (MiValidateImagePfn.c)
 *     MiApplyDriverHotPatch @ 0x1408C8F14 (MiApplyDriverHotPatch.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408CDD50 (MiPromoteControlAreaToStrongCode.c)
 *     MmGetSectionStrongImageReference @ 0x1408D8088 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
  if ( qword_140C1DB58 )
  {
    result = qword_140C1DB58(v3, &v5);
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
