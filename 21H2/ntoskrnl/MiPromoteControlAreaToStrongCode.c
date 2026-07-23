/*
 * XREFs of MiPromoteControlAreaToStrongCode @ 0x1408CDD50
 * Callers:
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
 * Callees:
 *     MiValidateSectionCreate @ 0x1406C32C0 (MiValidateSectionCreate.c)
 *     MiGetSectionStrongImageReference @ 0x1408D8030 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiPromoteControlAreaToStrongCode(ULONG_PTR a1, ULONG_PTR a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx

  result = MiValidateSectionCreate(a2, a1, 0xFFFFFFFF, 0LL, a3 | 0x40000000u, 12, 1);
  if ( (int)result >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 96);
    result = MiGetSectionStrongImageReference(v9, v7, v8);
    if ( (int)result >= 0 )
    {
      *a4 = *(_QWORD *)(v9 + 56);
      return 0LL;
    }
  }
  return result;
}
