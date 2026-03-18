/*
 * XREFs of GetCurrentKbdTables @ 0x1C01AB130
 * Callers:
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01AB094 (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1C01ABC08 (PtiKbdFromQ.c)
 */

__int64 GetCurrentKbdTables()
{
  __int64 v1; // rax

  if ( !gpqForeground )
    return 0LL;
  v1 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 440);
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL);
  else
    return gpKbdTbl;
}
