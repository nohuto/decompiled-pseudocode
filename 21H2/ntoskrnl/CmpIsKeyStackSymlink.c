/*
 * XREFs of CmpIsKeyStackSymlink @ 0x140720DD4
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 */

bool __fastcall CmpIsKeyStackSymlink(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 KcbAtLayerHeight; // rax

  v1 = *(unsigned __int16 *)(a1 + 2);
  v2 = a1;
  if ( (v1 & 0x8000u) != 0LL )
    return 0;
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v2, v1);
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      break;
    LOWORD(v1) = v1 - 1;
    if ( (v1 & 0x8000u) != 0LL )
      return 0;
  }
  return (*(_DWORD *)(KcbAtLayerHeight + 184) & 0x100000) != 0;
}
