/*
 * XREFs of CmRmIsKcbStackVisible @ 0x140657A44
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     CmRmIsKCBVisible @ 0x1406A7690 (CmRmIsKCBVisible.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 */

char __fastcall CmRmIsKcbStackVisible(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 KcbAtLayerHeight; // rax
  __int64 v4; // r9

  v1 = a1;
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( (v2 & 0x8000u) != 0LL )
    return 1;
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v1, v2);
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      break;
    LOWORD(v2) = v2 - 1;
    if ( (v2 & 0x8000u) != 0LL )
      return 1;
  }
  return CmRmIsKCBVisible(KcbAtLayerHeight, v4);
}
