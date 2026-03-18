/*
 * XREFs of ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C007ED3C
 * Callers:
 *     ?AllocateEnumInfo@FxDevice@@UEAAJXZ @ 0x1C0050E40 (-AllocateEnumInfo@FxDevice@@UEAAJXZ.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008B560 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C0061954 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

__int64 __fastcall FxPkgPnp::AllocateEnumInfo(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  unsigned __int8 v6; // r8
  FX_POOL **v7; // rax
  FX_POOL **v8; // rbx
  const void *ObjectHandleUnchecked; // rax
  unsigned int _a2; // edx
  void *Caller; // [rsp+48h] [rbp+0h]
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  irql = 0;
  if ( this->m_EnumInfo )
    return 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !this->m_EnumInfo )
  {
    v7 = FxPoolAllocator(
           this->m_Globals,
           &this->m_Globals->FxPoolFrameworks,
           ExDefaultNonPagedPoolType,
           0x88uLL,
           this->m_Globals->Tag,
           Caller);
    v8 = v7;
    if ( v7 )
    {
      FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)v7);
      *((_DWORD *)v8 + 22) = 0;
      v8[7] = (FX_POOL *)(v8 + 6);
      v8[6] = (FX_POOL *)(v8 + 6);
      v8[9] = (FX_POOL *)(v8 + 8);
      v8[8] = (FX_POOL *)(v8 + 8);
      v8[5] = (FX_POOL *)FxWaitLockTransactionedList::`vftable';
      *((_WORD *)v8 + 46) = 0;
      *((_BYTE *)v8 + 94) = 0;
      v8[10] = 0LL;
      FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)(v8 + 12));
    }
    else
    {
      v8 = 0LL;
    }
    this->m_EnumInfo = (FxEnumerationInfo *)v8;
    if ( v8 )
    {
      KeInitializeEvent((PRKEVENT)v8, SynchronizationEvent, 1u);
      *((_BYTE *)v8 + 24) = 1;
      KeInitializeEvent((PRKEVENT)v8 + 4, SynchronizationEvent, 1u);
      *((_BYTE *)v8 + 120) = 1;
    }
    else
    {
      v3 = -1073741670;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qL(
        this->m_Globals,
        2u,
        0xCu,
        0x4Cu,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        ObjectHandleUnchecked,
        _a2);
    }
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  return v3;
}
