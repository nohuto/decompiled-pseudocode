/*
 * XREFs of imp_WdfRegistryQueryMultiString @ 0x1C005E480
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0018B7C (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C004DBC0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qZd @ 0x1C005D538 (WPP_IFR_SF_qZd.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C005F744 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C0060F4C (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0061914 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0061994 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C0061A4C (-Assign@FxString@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        _WDF_OBJECT_ATTRIBUTES *StringsAttributes,
        WDFCOLLECTION__ *Collection)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFCOLLECTION__ *v9; // r14
  __int64 result; // rax
  unsigned __int8 v11; // dl
  signed int v12; // edi
  unsigned int v13; // r8d
  unsigned int v14; // edi
  FX_POOL_TRACKER *v15; // r12
  unsigned int m_Count; // esi
  FxString *v17; // rax
  FxString *v18; // rax
  FxString *v19; // rsi
  __int64 v20; // rax
  const _GUID *Value; // [rsp+20h] [rbp-40h]
  FxCollection *pCollection; // [rsp+40h] [rbp-20h] BYREF
  FxRegKey *pKey; // [rsp+48h] [rbp-18h] BYREF
  FxDeviceBase *v24; // [rsp+50h] [rbp-10h]
  void *dummy; // [rsp+58h] [rbp-8h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int dataLength; // [rsp+A0h] [rbp+40h] BYREF
  FX_POOL_TRACKER *type; // [rsp+B0h] [rbp+50h] BYREF
  _WDF_OBJECT_ATTRIBUTES *Attributes; // [rsp+B8h] [rbp+58h]

  Attributes = StringsAttributes;
  pCollection = 0LL;
  pKey = 0LL;
  dataLength = 0;
  LODWORD(type) = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  v9 = Collection;
  if ( !Collection )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  result = FxValidateObjectAttributes(m_Globals, StringsAttributes, 0);
  if ( (int)result >= 0 )
  {
    result = FxVerifierCheckIrqlLevel(m_Globals, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(m_Globals, ValueName);
      if ( (int)result >= 0 )
      {
        FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v9, 0x100Eu, (void **)&pCollection);
        v24 = FxDeviceBase::_SearchForDevice(m_Globals, StringsAttributes);
        v12 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, &dataLength, (unsigned int *)&type);
        if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
        {
          if ( (_DWORD)type != 7 )
            return 3221225508LL;
          v14 = dataLength;
          if ( !dataLength )
          {
            WPP_IFR_SF_qZd(m_Globals, v11, v13, 0x14u, Value, Key, ValueName);
            return 3221225609LL;
          }
          v15 = (FX_POOL_TRACKER *)FxPoolAllocator(
                                     m_Globals,
                                     &m_Globals->FxPoolFrameworks,
                                     1u,
                                     dataLength,
                                     m_Globals->Tag,
                                     retaddr);
          if ( !v15 )
          {
            WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x15u, WPP_FxRegistryAPI_cpp_Traceguids, Key, 0xC000009A);
            return 3221225626LL;
          }
          v12 = FxRegKey::_QueryValue(
                  pKey->m_Globals,
                  pKey->m_Key,
                  ValueName,
                  v14,
                  v15,
                  &dataLength,
                  (unsigned int *)&type);
          if ( v12 >= 0 )
          {
            v12 = FxRegKey::_VerifyMultiSzString(m_Globals, ValueName, (wchar_t *)v15, dataLength);
            if ( v12 >= 0 )
            {
              type = v15;
              m_Count = pCollection->m_Count;
              dataLength = m_Count;
              if ( LOWORD(v15->Link.Flink) )
              {
                while ( 1 )
                {
                  v17 = (FxString *)FxObjectHandleAlloc(
                                      m_Globals,
                                      ExDefaultNonPagedPoolType,
                                      0x78uLL,
                                      0,
                                      Attributes,
                                      0,
                                      FxObjectTypeExternal);
                  if ( v17 )
                  {
                    FxString::FxString(v17, m_Globals);
                    v19 = v18;
                  }
                  else
                  {
                    v19 = 0LL;
                  }
                  if ( !v19 )
                    break;
                  if ( v24 )
                    v19->m_DeviceBase = v24;
                  v12 = FxString::Assign(v19, (const wchar_t *)type);
                  if ( v12 < 0 )
                    goto LABEL_29;
                  v12 = FxObject::Commit(v19, (_FX_DRIVER_GLOBALS *)Attributes, &dummy, 0LL, 1u);
                  if ( v12 < 0 )
                    goto LABEL_29;
                  if ( !(unsigned __int8)FxCollectionInternal::Add(
                                           &pCollection->FxCollectionInternal,
                                           pCollection->m_Globals,
                                           v19) )
                  {
                    v12 = -1073741670;
                    WPP_IFR_SF_qid(
                      m_Globals,
                      2u,
                      2u,
                      0x16u,
                      WPP_FxRegistryAPI_cpp_Traceguids,
                      Key,
                      (__int64)Collection,
                      -1073741670);
                  }
                  if ( v12 < 0 )
                  {
LABEL_29:
                    FxObject::ClearEvtCallbacks(v19);
                    v19->DeleteObject(v19);
                    goto LABEL_36;
                  }
                  v20 = -1LL;
                  do
                    ++v20;
                  while ( *((_WORD *)&type->Link.Flink + v20) );
                  type = (FX_POOL_TRACKER *)((char *)type + 2 * v20 + 2);
                  if ( !LOWORD(type->Link.Flink) )
                    goto LABEL_37;
                }
                v12 = -1073741670;
LABEL_36:
                WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x17u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v12);
LABEL_37:
                m_Count = dataLength;
              }
              if ( v12 < 0 )
              {
                while ( pCollection->m_Count > m_Count )
                  FxCollectionInternal::Remove(&pCollection->FxCollectionInternal, m_Count);
              }
            }
          }
          FxPoolFree(v15);
        }
        else
        {
          WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x13u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v12);
        }
        return (unsigned int)v12;
      }
    }
  }
  return result;
}
