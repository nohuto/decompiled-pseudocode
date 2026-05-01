/*
 * XREFs of ?HasLowerPrecedenceThan@BaseResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x180034910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan(
        ExecutionModel::BaseResourceSet *this,
        struct ExecutionModel::_ResourceInfo *a2)
{
  return *((_DWORD *)a2 + 4) < *((_DWORD *)this + 6 * *(int *)a2 + 22);
}
