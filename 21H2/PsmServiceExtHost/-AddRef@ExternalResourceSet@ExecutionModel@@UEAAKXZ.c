/*
 * XREFs of ?AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ExecutionModel::ExternalResourceSet::AddRef(ExecutionModel::ExternalResourceSet *this)
{
  return ExecutionModel::BaseResourceSet::AddRef(this);
}
