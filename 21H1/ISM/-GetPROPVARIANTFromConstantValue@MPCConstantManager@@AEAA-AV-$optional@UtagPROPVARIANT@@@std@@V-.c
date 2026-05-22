/*
 * XREFs of ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x18006F7F8
 * Callers:
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x18006E714 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?GetPROPVARIANT@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@W4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x18006F6AC (-GetPROPVARIANT@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@W4InputType@@V-$bas.c)
 *     ?OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x18006F8C0 (-OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z.c)
 * Callees:
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180070ED8 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

__int64 __fastcall MPCConstantManager::GetPROPVARIANTFromConstantValue(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-10h]

  if ( !BYTE4(a3) )
  {
    LOWORD(v4) = 21;
    *((_QWORD *)&v4 + 1) = (unsigned int)a3;
    goto LABEL_13;
  }
  if ( SBYTE4(a3) == 1LL )
  {
    if ( BYTE4(a3) == 1 )
    {
      LOWORD(v4) = 11;
      if ( (_BYTE)a3 )
        WORD4(v4) = -1;
      else
        WORD4(v4) = 0;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  if ( SBYTE4(a3) == 2LL )
  {
    if ( BYTE4(a3) == 2 )
    {
      LOWORD(v4) = 5;
      *((double *)&v4 + 1) = *(float *)&a3;
LABEL_13:
      *(_BYTE *)(a2 + 24) = 1;
      *(_OWORD *)a2 = v4;
      *(_QWORD *)(a2 + 16) = v5;
      return a2;
    }
LABEL_12:
    std::_Throw_bad_variant_access();
  }
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  return a2;
}
