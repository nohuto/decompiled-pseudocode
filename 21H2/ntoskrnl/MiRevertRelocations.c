/*
 * XREFs of MiRevertRelocations @ 0x1406C3F08
 * Callers:
 *     MiValidateSectionCreate @ 0x1406C32C0 (MiValidateSectionCreate.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140307B30 (MiGetSubsectionDriverProtos.c)
 *     MiPerformFixups @ 0x1406EBD18 (MiPerformFixups.c)
 */

__int64 __fastcall MiRevertRelocations(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rbx
  unsigned int v5; // edi
  unsigned int v9; // r8d
  unsigned int v10; // esi

  result = *(_QWORD *)(a2 + 96);
  v4 = a2 + 128;
  v5 = 0;
  while ( v4 )
  {
    MiGetSubsectionDriverProtos((_QWORD *)v4);
    v10 = a3 - v5;
    if ( v9 <= a3 - v5 )
      v10 = v9;
    if ( v10 )
    {
      do
      {
        result = MiPerformFixups(a1 + (v5++ << 12), a2, 0LL, 3);
        if ( v5 >= a3 )
          return result;
      }
      while ( --v10 );
    }
    result = *(_DWORD *)(v4 + 52) & 0x3FFFFFFF;
    v5 += result;
    if ( v5 >= a3 )
      return result;
    v4 = *(_QWORD *)(v4 + 16);
  }
  return result;
}
