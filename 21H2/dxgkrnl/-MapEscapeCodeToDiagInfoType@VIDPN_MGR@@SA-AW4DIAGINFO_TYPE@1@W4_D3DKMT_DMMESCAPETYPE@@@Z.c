/*
 * XREFs of ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C02DF4A8
 * Callers:
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02DC620 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::MapEscapeCodeToDiagInfoType(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rax

  v2 = (int)a1;
  result = 8LL;
  if ( (int)a1 <= 8 )
  {
    switch ( (_DWORD)a1 )
    {
      case 8:
        return result;
      case 1:
        return 1LL;
      case 2:
        return 2LL;
      case 3:
        return 3LL;
      case 4:
        return 4LL;
      case 5:
        return 5LL;
    }
    a2 = (unsigned int)(a1 - 6);
    if ( (_DWORD)a1 == 6 )
      return 6LL;
    if ( (_DWORD)a1 == 7 )
      return 7LL;
    goto LABEL_23;
  }
  result = 9LL;
  switch ( (_DWORD)a1 )
  {
    case 9:
      return result;
    case 0xA:
      return 10LL;
    case 0xB:
      return 11LL;
    case 0xC:
      return 12LL;
  }
  a1 = (unsigned int)(a1 - 13);
  if ( (_DWORD)v2 == 13 )
    return 13LL;
  if ( (_DWORD)v2 != 14 )
  {
LABEL_23:
    v4 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v4 + 24) = v2;
    WdLogEvent5_WdError(v4);
    return 0LL;
  }
  return 14LL;
}
