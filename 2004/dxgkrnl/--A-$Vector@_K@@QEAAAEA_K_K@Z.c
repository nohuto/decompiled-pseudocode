/*
 * XREFs of ??A?$Vector@_K@@QEAAAEA_K_K@Z @ 0x1C005C438
 * Callers:
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C02E8734 (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Vector<unsigned __int64>::operator[](__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax

  if ( a2 >= *(_QWORD *)(a1 + 16) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  return *(_QWORD *)(a1 + 24) + 8 * a2;
}
