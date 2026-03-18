/*
 * XREFs of ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C003750C
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0036958 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitUpdateInputTypeCoverage(struct _CIT_IMPACT_CONTEXT *a1)
{
  int v2; // eax
  __int64 v3; // xmm1_8

  if ( *((_WORD *)a1 + 148) != *((_WORD *)a1 + 133) && (unsigned int)dword_1C0246BFC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246BF0);
  if ( *((_WORD *)a1 + 149) != *((_WORD *)a1 + 134) && (unsigned int)dword_1C0246C2C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246C20);
  if ( *((_WORD *)a1 + 151) != *((_WORD *)a1 + 136) && (unsigned int)dword_1C0246C14 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246C08);
  if ( *((_WORD *)a1 + 153) != *((_WORD *)a1 + 138) && (unsigned int)dword_1C0246BB4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246BA8);
  if ( *((_WORD *)a1 + 154) != *((_WORD *)a1 + 139) && (unsigned int)dword_1C0246B9C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246B90);
  if ( *((_WORD *)a1 + 156) != *((_WORD *)a1 + 141) && (unsigned int)dword_1C0246BE4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246BD8);
  if ( *((_WORD *)a1 + 158) != *((_WORD *)a1 + 143) && (unsigned int)dword_1C0246BCC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246BC0);
  if ( *((_WORD *)a1 + 159) != *((_WORD *)a1 + 144) && (unsigned int)dword_1C0246B6C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246B60);
  if ( *((_WORD *)a1 + 150) != *((_WORD *)a1 + 135) && (unsigned int)dword_1C024537C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0245370);
  if ( *((_WORD *)a1 + 152) != *((_WORD *)a1 + 137) && (unsigned int)dword_1C0245394 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0245388);
  if ( *((_WORD *)a1 + 155) != *((_WORD *)a1 + 140) && (unsigned int)dword_1C0246B84 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246B78);
  if ( *((_WORD *)a1 + 157) != *((_WORD *)a1 + 142) && (unsigned int)dword_1C0246B54 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246B48);
  if ( *((_WORD *)a1 + 160) != *((_WORD *)a1 + 145) && (unsigned int)dword_1C0246B3C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0246B30);
  v2 = *((_DWORD *)a1 + 72);
  v3 = *((_QWORD *)a1 + 35);
  *(_OWORD *)((char *)a1 + 294) = *(_OWORD *)((char *)a1 + 264);
  *(_QWORD *)((char *)a1 + 310) = v3;
  *(_DWORD *)((char *)a1 + 318) = v2;
  *((_WORD *)a1 + 161) = *((_WORD *)a1 + 146);
}
