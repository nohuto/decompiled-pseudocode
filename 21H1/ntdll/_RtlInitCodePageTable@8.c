/*
 * XREFs of _RtlInitCodePageTable@8 @ 0x4B344010
 * Callers:
 *     _RtlInitNlsTables@16 @ 0x4B344110 (_RtlInitNlsTables@16.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlInitCodePageTable(PUSHORT TableBase, PCPTABLEINFO CodePageTable)
{
  USHORT v2; // di
  PCPTABLEINFO v3; // ebx
  int v4; // edx
  unsigned __int16 v5; // ax
  USHORT *v6; // ecx
  USHORT v7; // dx
  USHORT *v8; // eax
  USHORT *v9; // eax
  USHORT *v10; // edx
  unsigned __int16 v11; // [esp+Ch] [ebp-4h]

  if ( !TableBase || (v2 = TableBase[1], v2 == 0xFDE9) )
  {
    v3 = CodePageTable;
    CodePageTable->CodePage = -535;
    CodePageTable->MaximumCharacterSize = 4;
    CodePageTable->UniDefaultChar = -3;
    v10 = 0;
    CodePageTable->DefaultChar = 63;
    CodePageTable->TransDefaultChar = 63;
    CodePageTable->TransUniDefaultChar = 63;
    CodePageTable->DBCSCodePage = 0;
    CodePageTable->MultiByteTable = 0;
    CodePageTable->DBCSRanges = 0;
    CodePageTable->DBCSOffsets = 0;
  }
  else
  {
    v3 = CodePageTable;
    v4 = *TableBase;
    v5 = *TableBase + TableBase[v4];
    CodePageTable->CodePage = v2;
    v11 = v5;
    CodePageTable->MaximumCharacterSize = TableBase[2];
    CodePageTable->DefaultChar = TableBase[3];
    CodePageTable->UniDefaultChar = TableBase[4];
    CodePageTable->TransDefaultChar = TableBase[5];
    CodePageTable->TransUniDefaultChar = TableBase[6];
    *(_DWORD *)CodePageTable->LeadByte = *(_DWORD *)(TableBase + 7);
    *(_DWORD *)&CodePageTable->LeadByte[4] = *(_DWORD *)(TableBase + 9);
    *(_DWORD *)&CodePageTable->LeadByte[8] = *(_DWORD *)(TableBase + 11);
    v6 = &TableBase[v4 + 1];
    v7 = 0;
    CodePageTable->MultiByteTable = v6;
    v8 = (USHORT *)((char *)v6 + (v6[256] != 0 ? 1026 : 514));
    CodePageTable->DBCSRanges = v8;
    if ( *v8 )
    {
      v7 = 1;
      v9 = v8 + 1;
    }
    else
    {
      v9 = 0;
    }
    CodePageTable->DBCSOffsets = v9;
    CodePageTable->DBCSCodePage = v7;
    v10 = &TableBase[v11 + 1];
  }
  v3->WideCharTable = v10;
}
