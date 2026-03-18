/*
 * XREFs of MiGetSectionStrongImageReference @ 0x14097F0F0
 * Callers:
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x140338080 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1406F3408 (MiValidateImagePfn.c)
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 *     MiPromoteControlAreaToStrongCode @ 0x140976F28 (MiPromoteControlAreaToStrongCode.c)
 *     MmGetSectionStrongImageReference @ 0x14097F148 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
  if ( qword_140C1B918 )
  {
    result = qword_140C1B918(v3, &v5);
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
