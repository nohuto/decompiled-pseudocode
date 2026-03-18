/*
 * XREFs of ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1800E16C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180269F68 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 */

void __fastcall CGlobalComposition::BeginUpdateCursors(CGlobalComposition *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx

  v1 = *((_QWORD *)this + 169);
  for ( i = *((_QWORD *)this + 168); i != v1; i += 8LL )
    CCursorState::ProcessStateChanges(*(CCursorState **)(*(_QWORD *)i + 744LL), *((_QWORD *)this + 76), 0);
}
