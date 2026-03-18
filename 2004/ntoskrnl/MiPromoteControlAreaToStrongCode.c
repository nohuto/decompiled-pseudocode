/*
 * XREFs of MiPromoteControlAreaToStrongCode @ 0x1408CA5F0
 * Callers:
 *     MiLoadHotPatch @ 0x1408C75D0 (MiLoadHotPatch.c)
 * Callees:
 *     MiValidateSectionCreate @ 0x1406EAE30 (MiValidateSectionCreate.c)
 *     MiGetSectionStrongImageReference @ 0x1408D48D0 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiPromoteControlAreaToStrongCode(ULONG_PTR a1, ULONG_PTR a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx

  result = MiValidateSectionCreate(a2, a1, 0xFFFFFFFF, 0LL, a3 | 0x40000000u, 12, 1);
  if ( (int)result >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 96);
    result = MiGetSectionStrongImageReference(v10, v7, v8, v9);
    if ( (int)result >= 0 )
    {
      *a4 = *(_QWORD *)(v10 + 56);
      return 0LL;
    }
  }
  return result;
}
