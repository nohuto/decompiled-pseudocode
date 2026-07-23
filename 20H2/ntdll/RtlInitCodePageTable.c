/*
 * XREFs of RtlInitCodePageTable @ 0x1800E5550
 * Callers:
 *     RtlInitNlsTables @ 0x1800E5650 (RtlInitNlsTables.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlInitCodePageTable(PUSHORT TableBase, PCPTABLEINFO CodePageTable)
{
  USHORT *v2; // r9
  USHORT v3; // ax
  __int64 v4; // r8
  unsigned __int16 v5; // r11
  USHORT *v6; // rax
  USHORT *v7; // r8
  USHORT v8; // ax

  v2 = 0LL;
  if ( !TableBase || (v3 = TableBase[1], v3 == 0xFDE9) )
  {
    *(_DWORD *)&CodePageTable->CodePage = 327145;
    *(_DWORD *)&CodePageTable->DefaultChar = -196545;
    *(_DWORD *)&CodePageTable->TransDefaultChar = 4128831;
    CodePageTable->DBCSCodePage = 0;
    CodePageTable->MultiByteTable = 0LL;
    CodePageTable->DBCSRanges = 0LL;
    CodePageTable->DBCSOffsets = 0LL;
  }
  else
  {
    v4 = *TableBase;
    v5 = *TableBase + TableBase[v4];
    CodePageTable->CodePage = v3;
    CodePageTable->MaximumCharacterSize = TableBase[2];
    CodePageTable->DefaultChar = TableBase[3];
    CodePageTable->UniDefaultChar = TableBase[4];
    CodePageTable->TransDefaultChar = TableBase[5];
    CodePageTable->TransUniDefaultChar = TableBase[6];
    *(_QWORD *)CodePageTable->LeadByte = *(_QWORD *)(TableBase + 7);
    *(_DWORD *)&CodePageTable->LeadByte[8] = *(_DWORD *)(TableBase + 11);
    v6 = &TableBase[v4 + 1];
    CodePageTable->MultiByteTable = v6;
    v7 = (USHORT *)((char *)v6 + (v6[256] != 0 ? 514LL : 2LL) + 512);
    CodePageTable->DBCSRanges = v7;
    if ( *v7 )
    {
      v8 = 1;
      v2 = v7 + 1;
    }
    else
    {
      v8 = 0;
    }
    CodePageTable->DBCSOffsets = v2;
    CodePageTable->DBCSCodePage = v8;
    v2 = &TableBase[v5 + 1];
  }
  CodePageTable->WideCharTable = v2;
}
