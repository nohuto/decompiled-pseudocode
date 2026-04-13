/*
 * XREFs of ??_EUtcWrapperBase@Diagnostics@Microsoft@@UEAAPEAXI@Z @ 0x18000DB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

Microsoft::Diagnostics::UtcWrapperBase *__fastcall Microsoft::Diagnostics::UtcWrapperBase::`vector deleting destructor'(
        Microsoft::Diagnostics::UtcWrapperBase *this,
        char a2)
{
  RPC_BINDING_HANDLE *v4; // rcx

  *(_QWORD *)this = &Microsoft::Diagnostics::UtcWrapperBase::`vftable';
  v4 = (RPC_BINDING_HANDLE *)((char *)this + 8);
  if ( *v4 )
    RpcBindingFree(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
