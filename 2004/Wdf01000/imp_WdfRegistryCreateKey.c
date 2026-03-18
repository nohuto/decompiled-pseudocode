/*
 * XREFs of imp_WdfRegistryCreateKey @ 0x1C005DF50
 * Callers:
 *     <none>
 * Callees:
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0004440 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000CFA4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001733C (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfRegistryCreateKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        ULONG CreateOptions,
        unsigned int *CreateDisposition,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v8; // rsi
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  __int64 v10; // rdi
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *v14; // rax
  void *m_Key; // r12
  unsigned __int64 ParentObject; // rdx
  WDFKEY__ **v17; // r14
  __int64 result; // rax
  FxRegKey *v19; // rax
  __int64 v20; // rax
  int v21; // esi
  NTSTATUS v22; // eax
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  ULONG_PTR retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int localDisposition; // [rsp+C0h] [rbp+40h] BYREF
  FxRegKey *pParent; // [rsp+C8h] [rbp+48h] BYREF
  void *PPObject; // [rsp+D0h] [rbp+50h] BYREF

  v8 = KeyAttributes;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  v10 = 0LL;
  localDisposition = 0;
  v13 = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( ParentKey )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(v13, (unsigned __int64)ParentKey, 0x1006u, (void **)&pParent);
    v14 = pParent;
    m_Key = pParent->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( (int)FxValidateObjectAttributesForParentHandle(v13, KeyAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = (unsigned __int64)v8->ParentObject;
    PPObject = 0LL;
    FxObjectHandleGetPtr(DriverName, ParentObject, 0x1000u, &PPObject);
    v14 = PPObject;
  }
  DriverName = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v14 + 2);
LABEL_6:
  if ( !KeyName )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v17 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *Key = 0LL;
  keyHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(DriverName, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(DriverName, v8, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(DriverName, KeyName);
      if ( (int)result >= 0 )
      {
        v19 = (FxRegKey *)FxObjectHandleAlloc(
                            DriverName,
                            ExDefaultNonPagedPoolType,
                            0x78uLL,
                            0,
                            v8,
                            0,
                            FxObjectTypeExternal);
        if ( v19 )
        {
          FxRegKey::FxRegKey(v19, DriverName);
          v10 = v20;
        }
        if ( v10 )
        {
          v21 = FxObject::Commit((FxObject *)v10, (_FX_DRIVER_GLOBALS *)v8, (void **)&keyHandle, 0LL, 1u);
          if ( v21 < 0 )
            goto LABEL_22;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          ObjectAttributes.RootDirectory = m_Key;
          ObjectAttributes.ObjectName = KeyName;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v22 = ZwCreateKey(
                  (PHANDLE)(v10 + 112),
                  DesiredAccess,
                  &ObjectAttributes,
                  0,
                  0LL,
                  CreateOptions,
                  &localDisposition);
          v21 = v22;
          if ( v22 < 0 )
          {
            WPP_IFR_SF_d(DriverName, 2u, 2u, 0xDu, WPP_FxRegistryAPI_cpp_Traceguids, v22);
          }
          else
          {
            FxRegKey::_VerifyStateSeparationRegistryPolicy(*(_FX_DRIVER_GLOBALS **)(v10 + 16), *(void **)(v10 + 112));
            if ( CreateDisposition )
              *CreateDisposition = localDisposition;
            *v17 = keyHandle;
          }
          if ( v21 < 0 )
          {
LABEL_22:
            FxObject::ClearEvtCallbacks((FxObject *)v10);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
          }
          return (unsigned int)v21;
        }
        else
        {
          WPP_IFR_SF_d(DriverName, 2u, 2u, 0xCu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
          return 3221225626LL;
        }
      }
    }
  }
  return result;
}
