/*
 * XREFs of ?GetHDRData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x1C006078C
 * Callers:
 *     ?GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x1C0021FB0 (-GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C00605E8 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetHDRData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_HDR_DESC *a2)
{
  unsigned int v2; // esi
  int v3; // edi
  struct _EDID_V1_CEA_861_DATA_HEADER *v6; // rdx
  char v8; // r8
  unsigned __int8 v9; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v10 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, v3, &v10) )
    {
      v6 = v10;
      if ( (*(_BYTE *)v10 & 0xE0) == 0xE0 && *((_BYTE *)v10 + 1) == 6 && (*(_BYTE *)v10 & 0x1Fu) >= 3 )
        break;
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  v8 = *(_BYTE *)v10;
  *(_BYTE *)a2 = *((_BYTE *)v10 + 2);
  v9 = v8 & 0x1F;
  *((_BYTE *)a2 + 1) = *((_BYTE *)v6 + 3);
  if ( v9 >= 4u )
    *((_BYTE *)a2 + 2) = *((_BYTE *)v6 + 4);
  if ( v9 >= 5u )
    *((_BYTE *)a2 + 3) = *((_BYTE *)v6 + 5);
  if ( v9 >= 6u )
    *((_BYTE *)a2 + 4) = *((_BYTE *)v6 + 6);
  return 1;
}
