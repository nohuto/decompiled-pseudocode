/*
 * XREFs of HalpWdatInitialize @ 0x1404CFE30
 * Callers:
 *     <none>
 * Callees:
 *     HalSocGetAcpiTable @ 0x1403AFBA4 (HalSocGetAcpiTable.c)
 *     HalpWdatInitializeWdat @ 0x1404CFEA8 (HalpWdatInitializeWdat.c)
 *     HalpWdatInitializeWdrt @ 0x1404CFF40 (HalpWdatInitializeWdrt.c)
 */

__int64 __fastcall HalpWdatInitialize(__int64 a1)
{
  bool v1; // zf
  __int64 AcpiTable; // rdi
  __int64 v5; // rax

  v1 = *(_DWORD *)(a1 + 44) == 0;
  *(_BYTE *)(a1 + 40) = 0;
  if ( !v1 )
    return 0LL;
  AcpiTable = HalSocGetAcpiTable(1413563479);
  v5 = HalSocGetAcpiTable(1414677591);
  if ( AcpiTable )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = AcpiTable;
    return HalpWdatInitializeWdat(a1);
  }
  else if ( v5 )
  {
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = v5;
    return HalpWdatInitializeWdrt(a1);
  }
  else
  {
    return 3221225473LL;
  }
}
