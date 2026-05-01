/*
 * XREFs of ?SetViewId@CImmersiveWindowFactoryBase@@UEAAJK@Z @ 0x18008C400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactoryBase::SetViewId(CImmersiveWindowFactoryBase *this, int a2)
{
  *((_DWORD *)this + 10) = a2;
  return 0LL;
}
