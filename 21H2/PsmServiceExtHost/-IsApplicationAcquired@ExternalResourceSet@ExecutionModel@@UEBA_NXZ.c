/*
 * XREFs of ?IsApplicationAcquired@ExternalResourceSet@ExecutionModel@@UEBA_NXZ @ 0x1800741B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ExternalResourceSet::IsApplicationAcquired(ExecutionModel::ExternalResourceSet *this)
{
  return *((_BYTE *)this + 1352) & 1;
}
