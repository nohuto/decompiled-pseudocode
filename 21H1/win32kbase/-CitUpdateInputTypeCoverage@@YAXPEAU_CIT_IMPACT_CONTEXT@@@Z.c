/*
 * XREFs of ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0026114
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0025560 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitUpdateInputTypeCoverage(struct _CIT_IMPACT_CONTEXT *a1)
{
  int v2; // eax
  __int64 v3; // xmm1_8

  if ( *((_WORD *)a1 + 148) != *((_WORD *)a1 + 133) && (unsigned int)dword_1C024CC24 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CC18);
  if ( *((_WORD *)a1 + 149) != *((_WORD *)a1 + 134) && (unsigned int)dword_1C024CBF4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CBE8);
  if ( *((_WORD *)a1 + 151) != *((_WORD *)a1 + 136) && (unsigned int)dword_1C024CC0C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CC00);
  if ( *((_WORD *)a1 + 153) != *((_WORD *)a1 + 138) && (unsigned int)dword_1C024CBC4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CBB8);
  if ( *((_WORD *)a1 + 154) != *((_WORD *)a1 + 139) && (unsigned int)dword_1C024CBDC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CBD0);
  if ( *((_WORD *)a1 + 156) != *((_WORD *)a1 + 141) && (unsigned int)dword_1C024CB94 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CB88);
  if ( *((_WORD *)a1 + 158) != *((_WORD *)a1 + 143) && (unsigned int)dword_1C024CBAC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CBA0);
  if ( *((_WORD *)a1 + 159) != *((_WORD *)a1 + 144) && (unsigned int)dword_1C024CB7C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CB70);
  if ( *((_WORD *)a1 + 150) != *((_WORD *)a1 + 135) && (unsigned int)dword_1C024B394 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024B388);
  if ( *((_WORD *)a1 + 152) != *((_WORD *)a1 + 137) && (unsigned int)dword_1C024B37C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024B370);
  if ( *((_WORD *)a1 + 155) != *((_WORD *)a1 + 140) && (unsigned int)dword_1C024CB64 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CB58);
  if ( *((_WORD *)a1 + 157) != *((_WORD *)a1 + 142) && (unsigned int)dword_1C024CB34 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CB28);
  if ( *((_WORD *)a1 + 160) != *((_WORD *)a1 + 145) && (unsigned int)dword_1C024CB4C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024CB40);
  v2 = *((_DWORD *)a1 + 72);
  v3 = *((_QWORD *)a1 + 35);
  *(_OWORD *)((char *)a1 + 294) = *(_OWORD *)((char *)a1 + 264);
  *(_QWORD *)((char *)a1 + 310) = v3;
  *(_DWORD *)((char *)a1 + 318) = v2;
  *((_WORD *)a1 + 161) = *((_WORD *)a1 + 146);
}
