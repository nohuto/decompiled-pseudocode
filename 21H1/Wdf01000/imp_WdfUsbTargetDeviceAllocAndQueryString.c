/*
 * XREFs of imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C006A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0004E44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0072E80 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceAllocAndQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *StringMemoryAttributes,
        WDFMEMORY__ **StringMemory,
        wchar_t *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  wchar_t *v10; // rbx
  __int64 result; // rax
  unsigned __int16 v12; // r12
  int String; // esi
  unsigned int Tag; // r9d
  FxMemoryObject *v15; // rdi
  wchar_t *v16; // rax
  FxMemoryObject *pBuffer; // [rsp+40h] [rbp-10h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int16 numChars; // [rsp+90h] [rbp+40h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+A8h] [rbp+58h] BYREF

  hMemory = 0LL;
  pUsbDevice = 0LL;
  numChars = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( !StringMemory )
    FxVerifierNullBugCheck(pUsbDevice->m_Globals, retaddr);
  v10 = NumCharacters;
  *StringMemory = 0LL;
  if ( v10 )
    *v10 = 0;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, StringMemoryAttributes, 0);
    if ( (int)result >= 0 )
    {
      v12 = LangID;
      String = FxUsbDevice::GetString(pUsbDevice, 0LL, &numChars, StringIndex, LangID, 0LL, 0LL);
      if ( String >= 0 && numChars )
      {
        Tag = m_Globals->Tag;
        pBuffer = 0LL;
        if ( FxMemoryObject::_Create(
               m_Globals,
               StringMemoryAttributes,
               ExDefaultNonPagedPoolType,
               Tag,
               2LL * numChars,
               &pBuffer) < 0 )
          return 3221225626LL;
        v15 = pBuffer;
        String = FxObject::Commit(pBuffer, (_FX_DRIVER_GLOBALS *)StringMemoryAttributes, (void **)&hMemory, 0LL, 1u);
        if ( String < 0
          || (v16 = (wchar_t *)v15->GetBuffer(&v15->IFxMemory),
              String = FxUsbDevice::GetString(pUsbDevice, v16, &numChars, StringIndex, v12, 0LL, 0LL),
              String < 0) )
        {
          FxObject::ClearEvtCallbacks(v15);
          ((void (*)(void))v15->DeleteObject)();
        }
        else
        {
          if ( v10 )
            *v10 = numChars;
          *StringMemory = hMemory;
        }
      }
      return (unsigned int)String;
    }
  }
  return result;
}
