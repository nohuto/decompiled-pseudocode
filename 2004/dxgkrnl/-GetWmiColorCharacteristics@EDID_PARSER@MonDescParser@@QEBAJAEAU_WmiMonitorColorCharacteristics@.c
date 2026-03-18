/*
 * XREFs of ?GetWmiColorCharacteristics@EDID_PARSER@MonDescParser@@QEBAJAEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C0060B28
 * Callers:
 *     ?EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C005EBB4 (-EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_PARSER::GetWmiColorCharacteristics(
        MonDescParser::EDID_PARSER *this,
        struct _WmiMonitorColorCharacteristics *a2)
{
  _BYTE *v2; // r9
  __int64 result; // rax

  v2 = *(_BYTE **)this;
  a2->Red.X = (*(_BYTE *)(*(_QWORD *)this + 25LL) >> 6) | (4 * *(unsigned __int8 *)(*(_QWORD *)this + 27LL));
  a2->Red.Y = (4 * (unsigned __int8)v2[28]) | (v2[25] >> 4) & 3;
  a2->Green.X = (4 * (unsigned __int8)v2[29]) | (v2[25] >> 2) & 3;
  a2->Green.Y = v2[25] & 3 | (4 * (unsigned __int8)v2[30]);
  a2->Blue.X = (v2[26] >> 6) | (4 * (unsigned __int8)v2[31]);
  a2->Blue.Y = (4 * (unsigned __int8)v2[32]) | (v2[26] >> 4) & 3;
  a2->DefaultWhite.X = (4 * (unsigned __int8)v2[33]) | (v2[26] >> 2) & 3;
  result = 0LL;
  a2->DefaultWhite.Y = v2[26] & 3 | (4 * (unsigned __int8)v2[34]);
  return result;
}
