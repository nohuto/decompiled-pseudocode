/*
 * XREFs of ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009EE1C
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C009E268 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitUpdateInputTypeCoverage(struct _CIT_IMPACT_CONTEXT *a1)
{
  int v2; // eax
  __int64 v3; // xmm1_8

  if ( *((_WORD *)a1 + 148) != *((_WORD *)a1 + 133) && (unsigned int)dword_1C0244BFC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244BF0);
  if ( *((_WORD *)a1 + 149) != *((_WORD *)a1 + 134) && (unsigned int)dword_1C0244C2C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244C20);
  if ( *((_WORD *)a1 + 151) != *((_WORD *)a1 + 136) && (unsigned int)dword_1C0244C14 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244C08);
  if ( *((_WORD *)a1 + 153) != *((_WORD *)a1 + 138) && (unsigned int)dword_1C0244BB4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244BA8);
  if ( *((_WORD *)a1 + 154) != *((_WORD *)a1 + 139) && (unsigned int)dword_1C0244B9C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244B90);
  if ( *((_WORD *)a1 + 156) != *((_WORD *)a1 + 141) && (unsigned int)dword_1C0244BE4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244BD8);
  if ( *((_WORD *)a1 + 158) != *((_WORD *)a1 + 143) && (unsigned int)dword_1C0244BCC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244BC0);
  if ( *((_WORD *)a1 + 159) != *((_WORD *)a1 + 144) && (unsigned int)dword_1C0244B6C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244B60);
  if ( *((_WORD *)a1 + 150) != *((_WORD *)a1 + 135) && (unsigned int)dword_1C024337C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0243370);
  if ( *((_WORD *)a1 + 152) != *((_WORD *)a1 + 137) && (unsigned int)dword_1C0243394 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0243388);
  if ( *((_WORD *)a1 + 155) != *((_WORD *)a1 + 140) && (unsigned int)dword_1C0244B84 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244B78);
  if ( *((_WORD *)a1 + 157) != *((_WORD *)a1 + 142) && (unsigned int)dword_1C0244B54 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244B48);
  if ( *((_WORD *)a1 + 160) != *((_WORD *)a1 + 145) && (unsigned int)dword_1C0244B3C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0244B30);
  v2 = *((_DWORD *)a1 + 72);
  v3 = *((_QWORD *)a1 + 35);
  *(_OWORD *)((char *)a1 + 294) = *(_OWORD *)((char *)a1 + 264);
  *(_QWORD *)((char *)a1 + 310) = v3;
  *(_DWORD *)((char *)a1 + 318) = v2;
  *((_WORD *)a1 + 161) = *((_WORD *)a1 + 146);
}
