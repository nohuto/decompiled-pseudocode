/*
 * XREFs of ??1?$MakeAllocator@VAtmosCheck@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180038C74
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$0 @ 0x1800758AE (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor$1 @ 0x18007B74C (_Microsoft--WRL--Details--Make_AtmosCheck__--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<AtmosCheck>::~MakeAllocator<AtmosCheck>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
