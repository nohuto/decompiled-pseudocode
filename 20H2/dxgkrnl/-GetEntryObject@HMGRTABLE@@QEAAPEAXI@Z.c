/*
 * XREFs of ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C01610CC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113134 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall HMGRTABLE::GetEntryObject(HMGRTABLE *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 4) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 233LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v4 = *(_QWORD *)this;
  v5 = 2 * v3;
  v6 = *(unsigned int *)(*(_QWORD *)this + 8 * v5 + 8);
  if ( (v6 & 0x1F) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, a2);
    *(_QWORD *)(v9 + 24) = 234LL;
    WdLogEvent5_WdAssertion(v9);
    v4 = *(_QWORD *)this;
  }
  return *(void **)(v4 + 8 * v5);
}
