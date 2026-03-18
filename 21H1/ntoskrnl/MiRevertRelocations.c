/*
 * XREFs of MiRevertRelocations @ 0x1406CA540
 * Callers:
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1402BCD40 (MiGetSubsectionDriverProtos.c)
 *     MiPerformFixups @ 0x140631234 (MiPerformFixups.c)
 */

__int64 __fastcall MiRevertRelocations(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v9; // r15
  __int64 v10; // rbp
  _QWORD *SubsectionDriverProtos; // rax
  unsigned int v12; // r8d
  unsigned int v13; // esi

  result = a2[12];
  v4 = a2 + 16;
  v5 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(result + 32) + 48LL) - *(_QWORD *)(*(_QWORD *)(result + 32) + 40LL);
  while ( v4 )
  {
    v10 = v9;
    SubsectionDriverProtos = (_QWORD *)MiGetSubsectionDriverProtos(v4);
    if ( SubsectionDriverProtos )
      v10 = v9 + *(_QWORD *)(*a2 + 32LL) - *SubsectionDriverProtos;
    v13 = a3 - v5;
    if ( v12 <= a3 - v5 )
      v13 = v12;
    if ( v13 )
    {
      do
      {
        result = MiPerformFixups(a1 + (v5 << 12), a2, v5, v10, 0LL, 3);
        if ( ++v5 >= a3 )
          return result;
      }
      while ( --v13 );
    }
    result = *((_DWORD *)v4 + 13) & 0x3FFFFFFF;
    v5 += result;
    if ( v5 >= a3 )
      return result;
    v4 = (_QWORD *)v4[2];
  }
  return result;
}
