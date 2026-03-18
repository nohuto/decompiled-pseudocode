/*
 * XREFs of imp_WdfRegistryQueryMultiString @ 0x1C002D190
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0014A1C (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0021C84 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027568 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z @ 0x1C002D4C4 (-QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C002D504 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C002D548 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C002D58C (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qZd @ 0x1C006FE14 (WPP_IFR_SF_qZd.c)
 */

__int64 __fastcall imp_WdfRegistryQueryMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        _WDF_OBJECT_ATTRIBUTES *StringsAttributes,
        WDFCOLLECTION__ *Collection)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFCOLLECTION__ *v9; // rdi
  __int64 result; // rax
  unsigned __int8 v11; // dl
  signed int _a2; // edi
  unsigned int v13; // r8d
  unsigned int v14; // edi
  ULONG Tag; // ecx
  void *v16; // rax
  FX_POOL **v17; // rax
  wchar_t *v18; // r12
  FxString *v19; // rax
  FxString *v20; // rax
  FxObject *v21; // rsi
  FxObject *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int i; // ebx
  const _GUID *ValueLengthQueried; // [rsp+20h] [rbp-50h]
  int _a3; // [rsp+38h] [rbp-38h]
  FxCollection *pCollection; // [rsp+40h] [rbp-30h] BYREF
  FxRegKey *pKey; // [rsp+48h] [rbp-28h] BYREF
  FxDeviceBase *v30; // [rsp+50h] [rbp-20h]
  FxPoolTypeOrPoolFlags dummy; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int dataLength; // [rsp+B0h] [rbp+40h] BYREF
  wchar_t *type; // [rsp+C0h] [rbp+50h] BYREF
  _WDF_OBJECT_ATTRIBUTES *Attributes; // [rsp+C8h] [rbp+58h]

  Attributes = StringsAttributes;
  pCollection = 0LL;
  pKey = 0LL;
  dataLength = 0;
  LODWORD(type) = 0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v9 = Collection;
  if ( !Collection )
    FxVerifierNullBugCheck(m_Globals, retaddr);
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
        v30 = FxDeviceBase::_SearchForDevice(m_Globals, StringsAttributes);
        _a2 = FxRegKey::QueryValue(pKey, ValueName, 0, 0LL, &dataLength, (unsigned int *)&type);
        if ( (int)(_a2 + 0x80000000) < 0 || _a2 == -2147483643 )
        {
          if ( (_DWORD)type != 7 )
            return 3221225508LL;
          v14 = dataLength;
          if ( !dataLength )
          {
            WPP_IFR_SF_qZd(m_Globals, v11, v13, 0x14u, ValueLengthQueried, Key, ValueName, _a3);
            return 3221225609LL;
          }
          Tag = m_Globals->Tag;
          v16 = retaddr;
          *(_QWORD *)&dummy.UsePoolType = 0LL;
          dummy.u.PoolFlags = 256LL;
          if ( !m_Globals->FxPoolTrackingOn )
            v16 = 0LL;
          v17 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&dummy, dataLength, Tag, v16);
          v18 = (wchar_t *)v17;
          if ( !v17 )
          {
            WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x15u, WPP_FxRegistryAPI_cpp_Traceguids, Key, 0xC000009A);
            return 3221225626LL;
          }
          _a2 = FxRegKey::QueryValue(pKey, ValueName, v14, v17, &dataLength, (unsigned int *)&type);
          if ( _a2 >= 0 )
          {
            _a2 = FxRegKey::_VerifyMultiSzString(m_Globals, ValueName, v18, dataLength);
            if ( _a2 >= 0 )
            {
              type = v18;
              dataLength = pCollection->m_Count;
              if ( *v18 )
              {
                while ( 1 )
                {
                  *(_QWORD *)&dummy.UsePoolType = 0LL;
                  dummy.u.PoolFlags = 64LL;
                  v19 = (FxString *)FxObjectHandleAllocCommon(
                                      m_Globals,
                                      &dummy,
                                      0x78uLL,
                                      0,
                                      Attributes,
                                      0,
                                      FxObjectTypeExternal);
                  if ( !v19 )
                    break;
                  FxString::FxString(v19, m_Globals);
                  v21 = v20;
                  if ( !v20 )
                    break;
                  if ( v30 )
                    v20->m_DeviceBase = v30;
                  _a2 = FxString::Assign(v20, type);
                  v22 = v21;
                  if ( _a2 < 0 )
                    goto LABEL_36;
                  _a2 = FxObject::Commit(v21, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&dummy, 0LL, 1u);
                  v22 = v21;
                  if ( _a2 < 0 )
                    goto LABEL_36;
                  if ( !FxCollectionInternal::Add(
                          &pCollection->FxCollectionInternal,
                          pCollection->m_Globals,
                          (FX_POOL *)v21) )
                  {
                    _a2 = -1073741670;
                    WPP_IFR_SF_qqd(
                      m_Globals,
                      2u,
                      2u,
                      0x16u,
                      WPP_FxRegistryAPI_cpp_Traceguids,
                      Key,
                      Collection,
                      -1073741670);
                    v22 = v21;
LABEL_36:
                    FxObject::ClearEvtCallbacks(v22);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24);
                    goto LABEL_38;
                  }
                  v23 = -1LL;
                  do
                    ++v23;
                  while ( type[v23] );
                  type += v23 + 1;
                  if ( !*type )
                    goto LABEL_25;
                }
                _a2 = -1073741670;
LABEL_38:
                WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x17u, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
                for ( i = dataLength;
                      pCollection->m_Count > i;
                      FxCollectionInternal::Remove(&pCollection->FxCollectionInternal, i) )
                {
                  ;
                }
              }
            }
          }
LABEL_25:
          FxPoolFree((FX_POOL_TRACKER *)v18);
        }
        else
        {
          WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x13u, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
        }
        return (unsigned int)_a2;
      }
    }
  }
  return result;
}
