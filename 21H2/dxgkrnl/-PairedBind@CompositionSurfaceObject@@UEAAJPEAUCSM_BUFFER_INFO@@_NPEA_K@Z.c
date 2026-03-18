/*
 * XREFs of ?PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C0077D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z @ 0x1C0004950 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::PairedBind(
        CompositionSurfaceObject *this,
        struct CSM_BUFFER_INFO *a2,
        char a3,
        unsigned __int64 *a4)
{
  int v8; // ebx
  __int64 v9; // r9

  v8 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 16));
  if ( v8 >= 0 )
  {
    v8 = CCompositionSurface::Bind((CompositionSurfaceObject *)((char *)this + 8), a2, a3, v9, 1, a4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
  }
  return (unsigned int)v8;
}
