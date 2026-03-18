/*
 * XREFs of ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00231F8
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0022B80 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateEnumInfo@FxDevice@@UEAAJXZ @ 0x1C00694E0 (-AllocateEnumInfo@FxDevice@@UEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C00239E0 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

__int64 __fastcall FxPkgPnp::AllocateEnumInfo(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v7; // rax
  FX_POOL **v8; // rax
  FX_POOL **v9; // rbx
  const void *_a1; // rax
  unsigned int _a2; // edx
  __m128i v13; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  irql = 0;
  if ( this->m_EnumInfo )
    return 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !this->m_EnumInfo )
  {
    m_Globals = this->m_Globals;
    v7 = retaddr;
    v13.m128i_i64[0] = 0LL;
    v13.m128i_i64[1] = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v7 = 0LL;
    v8 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v13, 0x88uLL, m_Globals->Tag, v7);
    v9 = v8;
    if ( v8 )
    {
      FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)v8);
      *((_DWORD *)v9 + 22) = 0;
      v9[7] = (FX_POOL *)(v9 + 6);
      v9[6] = (FX_POOL *)(v9 + 6);
      v9[9] = (FX_POOL *)(v9 + 8);
      v9[8] = (FX_POOL *)(v9 + 8);
      v9[5] = (FX_POOL *)FxWaitLockTransactionedList::`vftable';
      *((_WORD *)v9 + 46) = 0;
      *((_BYTE *)v9 + 94) = 0;
      v9[10] = 0LL;
      FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)(v9 + 12));
      this->m_EnumInfo = (FxEnumerationInfo *)v9;
      KeInitializeEvent((PRKEVENT)v9, SynchronizationEvent, 1u);
      *((_BYTE *)v9 + 24) = 1;
      KeInitializeEvent((PRKEVENT)v9 + 4, SynchronizationEvent, 1u);
      *((_BYTE *)v9 + 120) = 1;
    }
    else
    {
      this->m_EnumInfo = 0LL;
      v3 = -1073741670;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x4Cu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
    }
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  return v3;
}
