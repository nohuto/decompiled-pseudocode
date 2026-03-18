/*
 * XREFs of ?IsValidBlock@DisplayID_DisplayParameters_Parser@@QEBA_NXZ @ 0x1C00600E8
 * Callers:
 *     ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C00603CC (-DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayID_DisplayParameters_Parser::IsValidBlock(DisplayID_DisplayParameters_Parser *this)
{
  return **(_BYTE **)this == 33 && *(_BYTE *)(*(_QWORD *)this + 2LL) == 29;
}
