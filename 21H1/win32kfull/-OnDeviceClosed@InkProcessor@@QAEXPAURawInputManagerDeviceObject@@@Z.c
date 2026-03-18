/*
 * XREFs of ?OnDeviceClosed@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1ABFB7
 * Callers:
 *     ?InkProcessorOnInkDeviceClosed@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x1837CF (-InkProcessorOnInkDeviceClosed@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@33@Z @ 0x148E33 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@ABEPAVInkDevice@@PBURawInputManagerDeviceObject@@@Z @ 0x1ABDDC (-FindInkDeviceByRimDeviceObject@InkProcessor@@ABEPAVInkDevice@@PBURawInputManagerDeviceObject@@@.c)
 */

void __thiscall InkProcessor::OnDeviceClosed(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  int v3; // ecx
  struct RawInputManagerDeviceObject *v4; // ebx
  struct InkDevice *InkDeviceByRimDeviceObject; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 4) )
  {
    v4 = a2;
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v7 = (int)InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      if ( *((_BYTE *)InkDeviceByRimDeviceObject + 8) )
      {
        ObfDereferenceObject(*((PVOID *)InkDeviceByRimDeviceObject + 4));
        *(_DWORD *)(v7 + 16) = 0;
        *(_BYTE *)(v7 + 8) = 0;
      }
      if ( (unsigned int)CallbackContext > 4 )
      {
        v8 = 0;
        a2 = v4;
        v10 = v7;
        v9 = (int)"Ink device closed";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&CallbackContext,
          byte_2569AC,
          v6,
          v6,
          (int)&v8,
          (const char **)&v9,
          (int)&v10,
          (int)&a2);
      }
    }
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a2 = (struct RawInputManagerDeviceObject *)"Ink processor not enabled";
    v10 = -1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v3,
      byte_25690B,
      v3,
      v3,
      (int)&v10,
      (const char **)&a2);
  }
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
}
