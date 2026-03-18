/*
 * XREFs of imp_WdfSpinLockCreate @ 0x1C00194F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000CFA4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00195E8 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        WDFSPINLOCK__ **SpinLock)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  __int64 result; // rax
  _POOL_TYPE v7; // edx
  bool v8; // cf
  unsigned __int16 ExtraSize; // bp
  FxSpinLock *v10; // rax
  FxObject *v11; // rax
  FxObject *v12; // rbx
  int v13; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxObject *pParent; // [rsp+60h] [rbp+8h] BYREF
  WDFSPINLOCK__ *lock; // [rsp+70h] [rbp+18h] BYREF

  lock = 0LL;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( (int)FxValidateObjectAttributesForParentHandle(
              (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
              SpinLockAttributes,
              0) >= 0 )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)SpinLockAttributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(DriverName, retaddr);
  result = FxValidateObjectAttributes(DriverName, SpinLockAttributes, 0);
  if ( (int)result >= 0 )
  {
    v7 = ExDefaultNonPagedPoolType;
    v8 = DriverName->FxVerifierLock != 0;
    *SpinLock = 0LL;
    ExtraSize = v8 ? 0x100 : 0;
    v10 = (FxSpinLock *)FxObjectHandleAlloc(
                          DriverName,
                          v7,
                          0x80uLL,
                          0,
                          SpinLockAttributes,
                          ExtraSize,
                          FxObjectTypeExternal);
    if ( v10 )
    {
      FxSpinLock::FxSpinLock(v10, DriverName, ExtraSize);
      v12 = v11;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      v13 = FxObject::Commit(v12, (_FX_DRIVER_GLOBALS *)SpinLockAttributes, (void **)&lock, 0LL, 1u);
      if ( v13 < 0 )
      {
        FxObject::ClearEvtCallbacks(v12);
        v12->DeleteObject(v12);
      }
      else
      {
        *SpinLock = lock;
      }
      return (unsigned int)v13;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
