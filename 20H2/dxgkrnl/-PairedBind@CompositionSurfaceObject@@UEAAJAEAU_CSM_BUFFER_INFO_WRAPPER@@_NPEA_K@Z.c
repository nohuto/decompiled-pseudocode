/*
 * XREFs of ?PairedBind@CompositionSurfaceObject@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C00650E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010C34 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C00110FC (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::PairedBind(
        CompositionSurfaceObject *this,
        struct _CSM_BUFFER_INFO_WRAPPER *a2,
        char a3,
        unsigned __int64 *a4)
{
  int v8; // ebx

  v8 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 16));
  if ( v8 >= 0 )
  {
    v8 = CCompositionSurface::Bind((CompositionSurfaceObject *)((char *)this + 8), a2, a3, 0LL, a4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
  }
  return (unsigned int)v8;
}
