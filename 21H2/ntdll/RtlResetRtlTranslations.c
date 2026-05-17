/*
 * XREFs of RtlResetRtlTranslations @ 0x1800E5560
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800D1E80 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     memset @ 0x1800A4780 (memset.c)
 */

__int64 __fastcall RtlResetRtlTranslations(__int64 a1)
{
  __int64 v2; // rsi
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int16 *v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  bool v15; // di
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 64) == 0xFDE9 || *(_WORD *)a1 == 0xFDE9 )
  {
    v15 = 0;
    NlsAnsiCodePage = -535;
    NlsMbCodePageTag = 0;
    v12 = 0LL;
    NlsMbAnsiCodePageTables = 0LL;
    v13 = 0LL;
    NlsAnsiToUnicodeData = 0LL;
    v14 = 0LL;
    NlsUnicodeToAnsiData = 0LL;
    NlsUnicodeToMbAnsiData = 0LL;
    NlsActiveCodePageIsUTF8 = 1;
    NlsOemCodePageIsUTF8 = 1;
  }
  else
  {
    v2 = 4LL;
    NlsAnsiCodePage = *(_WORD *)(a1 + 64);
    v3 = NlsLeadByteInfoTable;
    if ( *(_WORD *)(a1 + 76) )
    {
      v4 = *(_OWORD **)(a1 + 120);
      v5 = 4LL;
      do
      {
        *v3 = *v4;
        v3[1] = v4[1];
        v3[2] = v4[2];
        v3[3] = v4[3];
        v3[4] = v4[4];
        v3[5] = v4[5];
        v3[6] = v4[6];
        v3 += 8;
        v6 = v4[7];
        v4 += 8;
        *(v3 - 1) = v6;
        --v5;
      }
      while ( v5 );
    }
    else
    {
      memset(NlsLeadByteInfoTable, 0, sizeof(NlsLeadByteInfoTable));
    }
    v7 = NlsOemLeadByteInfoTable;
    v8 = *(_WORD *)(a1 + 76) == 0;
    NlsMbAnsiCodePageTables = *(_QWORD *)(a1 + 120);
    NlsAnsiToUnicodeData = *(_QWORD *)(a1 + 96);
    v9 = *(_QWORD *)(a1 + 104);
    NlsMbCodePageTag = !v8;
    NlsUnicodeToAnsiData = v9;
    NlsUnicodeToMbAnsiData = v9;
    NlsActiveCodePageIsUTF8 = 0;
    if ( *(_WORD *)(a1 + 12) )
    {
      v10 = *(_OWORD **)(a1 + 56);
      do
      {
        *(_OWORD *)v7 = *v10;
        *((_OWORD *)v7 + 1) = v10[1];
        *((_OWORD *)v7 + 2) = v10[2];
        *((_OWORD *)v7 + 3) = v10[3];
        *((_OWORD *)v7 + 4) = v10[4];
        *((_OWORD *)v7 + 5) = v10[5];
        *((_OWORD *)v7 + 6) = v10[6];
        v7 += 64;
        v11 = v10[7];
        v10 += 8;
        *((_OWORD *)v7 - 1) = v11;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      memset(NlsOemLeadByteInfoTable, 0, sizeof(NlsOemLeadByteInfoTable));
    }
    v8 = *(_WORD *)(a1 + 12) == 0;
    v12 = *(_QWORD *)(a1 + 40);
    v13 = *(_QWORD *)(a1 + 32);
    v14 = *(_QWORD *)(a1 + 56);
    NlsOemCodePageIsUTF8 = 0;
    v15 = !v8;
  }
  NlsMbOemCodePageTag = v15;
  NlsUnicodeToOemData = v12;
  NlsUnicodeToMbOemData = v12;
  OemDefaultChar = *(_WORD *)(a1 + 4);
  OemTransUniDefaultChar = *(_WORD *)(a1 + 8);
  Nls844UnicodeUpcaseTable = *(_QWORD *)(a1 + 128);
  result = *(_QWORD *)(a1 + 136);
  Nls844UnicodeLowercaseTable = result;
  NlsMbOemCodePageTables = v14;
  NlsOemToUnicodeData = v13;
  return result;
}
