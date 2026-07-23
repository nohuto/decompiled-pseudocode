/*
 * XREFs of CmpIsKeyStackSymlink @ 0x140712F60
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKeyStackSymlink(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx

  v1 = *(_WORD *)(a1 + 2);
  if ( v1 < 0 )
    return 0;
  while ( 1 )
  {
    v2 = v1 >= 2 ? *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v1 - 16) : *(_QWORD *)(a1 + 8LL * v1 + 8);
    if ( *(_DWORD *)(v2 + 40) != -1 )
      break;
    if ( --v1 < 0 )
      return 0;
  }
  return (*(_DWORD *)(v2 + 184) & 0x100000) != 0;
}
