/*
 * XREFs of MiUpdateRetpolineImportFixups @ 0x140397BA0
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x1403979C4 (MiUpdateImagePfnImportRelocations.c)
 * Callees:
 *     RtlApplyImportRelocationToPage @ 0x14021476C (RtlApplyImportRelocationToPage.c)
 */

__int64 __fastcall MiUpdateRetpolineImportFixups(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r14d
  BOOL v5; // ebp
  unsigned __int16 *v6; // rsi
  int v7; // ebx
  _DWORD *v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 result; // rax

  v3 = a2;
  v5 = (KiSpeculationFeatures & 0x20000000000LL) == 0;
  v6 = *(unsigned __int16 **)(a2 + 8LL * a3 + 56);
  if ( v6 )
  {
    v7 = a3 << 12;
    if ( v6[3] == 3 )
      result = RtlApplyImportRelocationToPage(
                 a1,
                 v7,
                 a2,
                 (int)Base,
                 (_DWORD *)v6 + 2,
                 1,
                 1,
                 (KiSpeculationFeatures & 0x20000000000LL) == 0);
    v8 = v6 + 6;
    v9 = (unsigned __int64)v6 + *v6 + 12;
    while ( (unsigned __int64)v8 < v9 )
      result = RtlApplyImportRelocationToPage(a1, v7, v3, (int)Base, v8++, 1, 0, v5);
  }
  return result;
}
