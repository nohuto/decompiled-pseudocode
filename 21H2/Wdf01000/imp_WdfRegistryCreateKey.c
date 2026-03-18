/*
 * XREFs of imp_WdfRegistryCreateKey @ 0x1C0030EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0005890 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00152DC (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0015BCC (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
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
  _FX_DRIVER_GLOBALS *v9; // rbx
  _FX_DRIVER_GLOBALS *v12; // rcx
  void *v13; // rax
  void *m_Key; // r12
  WDFKEY__ **v15; // r14
  __int64 result; // rax
  FxRegKey *v17; // rax
  FxObject *v18; // rax
  FxObject *v19; // rdi
  int v20; // esi
  NTSTATUS v21; // eax
  unsigned __int64 ParentObject; // rdx
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-49h] BYREF
  FxPoolTypeOrPoolFlags v24; // [rsp+50h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+3Fh]
  unsigned int localDisposition; // [rsp+D0h] [rbp+47h] BYREF
  FxRegKey *pParent; // [rsp+D8h] [rbp+4Fh] BYREF
  void *PPObject; // [rsp+E0h] [rbp+57h] BYREF

  v8 = KeyAttributes;
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  localDisposition = 0;
  v12 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( ParentKey )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(v12, (unsigned __int64)ParentKey, 0x1006u, (void **)&pParent);
    v13 = pParent;
    m_Key = pParent->m_Key;
LABEL_3:
    v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v13 + 2);
    goto LABEL_4;
  }
  m_Key = 0LL;
  if ( (int)FxValidateObjectAttributesForParentHandle(v12, KeyAttributes, 0) >= 0 )
  {
    ParentObject = (unsigned __int64)v8->ParentObject;
    PPObject = 0LL;
    FxObjectHandleGetPtr(v9, ParentObject, 0x1000u, &PPObject);
    v13 = PPObject;
    goto LABEL_3;
  }
LABEL_4:
  if ( !KeyName )
    FxVerifierNullBugCheck(v9, retaddr);
  v15 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  keyHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v9, v8, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v9, KeyName);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)&v24.UsePoolType = 0LL;
        v24.u.PoolFlags = 64LL;
        v17 = (FxRegKey *)FxObjectHandleAllocCommon(v9, &v24, 0x78uLL, 0, v8, 0, FxObjectTypeExternal);
        if ( !v17 || (FxRegKey::FxRegKey(v17, v9), (v19 = v18) == 0LL) )
        {
          WPP_IFR_SF_d(v9, 2u, 2u, 0xCu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
          return 3221225626LL;
        }
        v20 = FxObject::Commit(v18, (_FX_DRIVER_GLOBALS *)v8, (void **)&keyHandle, 0LL, 1u);
        if ( v20 >= 0 )
        {
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          ObjectAttributes.RootDirectory = m_Key;
          ObjectAttributes.ObjectName = KeyName;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v21 = ZwCreateKey(
                  (PHANDLE)&v19[1].m_Type,
                  DesiredAccess,
                  &ObjectAttributes,
                  0,
                  0LL,
                  CreateOptions,
                  &localDisposition);
          v20 = v21;
          if ( v21 >= 0 )
          {
            FxRegKey::_VerifyStateSeparationRegistryPolicy(v19->m_Globals, *(void **)&v19[1].m_Type);
            if ( CreateDisposition )
              *CreateDisposition = localDisposition;
            *v15 = keyHandle;
            return (unsigned int)v20;
          }
          WPP_IFR_SF_d(v9, 2u, 2u, 0xDu, WPP_FxRegistryAPI_cpp_Traceguids, v21);
        }
        FxObject::ClearEvtCallbacks(v19);
        ((void (*)(void))v19->DeleteObject)();
        return (unsigned int)v20;
      }
    }
  }
  return result;
}
