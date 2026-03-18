/*
 * XREFs of _lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator() @ 0x18015158C
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CProcessAttributionManager::Record_________lambda_73f2a4da0cca98f221385d01cc2cbc64___ @ 0x18015134C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_CProcessAttributionMana.c)
 * Callees:
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800D5DB8 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 */

char __fastcall lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator()(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 160) && !*(_QWORD *)(a2 + 112) )
  {
    v2 = 1;
    CProcessAttributionManager::Record::`scalar deleting destructor'((CProcessAttributionManager::Record *)a2);
  }
  return v2;
}
