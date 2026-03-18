/*
 * XREFs of ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C0068868
 * Callers:
 *     NtFlipObjectOpen @ 0x1C0067800 (NtFlipObjectOpen.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C005CA00 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x1C00698F8 (-OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::OpenEndpoint(FlipManagerObject *this, __int64 a2, void **a3, void **a4)
{
  int v4; // ebp
  struct DXGGLOBAL *Global; // rax
  NTSTATUS Handle; // ebx
  __int64 v10; // r8

  v4 = (unsigned __int8)a2;
  if ( !(_BYTE)a2
    || (Global = DXGGLOBAL::GetGlobal((__int64)this, a2),
        (*(unsigned int (**)(void))(*((_QWORD *)Global + 38033) + 296LL))()) )
  {
    Handle = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
    if ( Handle >= 0 )
    {
      Handle = DxgkCompositionObject::CreateHandle(this, v4 + 1, v10, 0, a3);
      if ( Handle >= 0 )
        Handle = CFlipManager::OpenEndpoint((FlipManagerObject *)((char *)this + 32), v4, a4);
      CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)Handle;
}
