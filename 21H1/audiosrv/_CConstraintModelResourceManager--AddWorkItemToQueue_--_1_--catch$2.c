/*
 * XREFs of _CConstraintModelResourceManager::AddWorkItemToQueue_::_1_::catch$2 @ 0x1800F355F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConstraintModelResourceManager::AddWorkItemToQueue_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 32);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 104) = *v3;
  return 0LL;
}
