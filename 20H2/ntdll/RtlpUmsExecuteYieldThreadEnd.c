/*
 * XREFs of RtlpUmsExecuteYieldThreadEnd @ 0x1800A2116
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlpUmsExecuteYieldThreadEnd(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  char result; // al

  v4 = *(_QWORD *)(v2 + 168);
  v5 = *(_QWORD *)(v2 + 1248);
  if ( LdrSystemDllInitBlock.CfgBitMap && ((v4 & 7) != 0 || v4 < *(_QWORD *)(v5 + 16) || v4 >= *(_QWORD *)(v5 + 8)) )
    __fastfail(0xDu);
  *(_QWORD *)(*(_QWORD *)(v2 + 168) - 8LL) = *(_QWORD *)(v2 + 264);
  result = (*(_BYTE *)(v2 + 1264) | *(_BYTE *)(a2 + 1264)) & 0x10;
  if ( result )
    return RtlpLoadPrimaryDbgRegWrap(v4, v5);
  return result;
}
