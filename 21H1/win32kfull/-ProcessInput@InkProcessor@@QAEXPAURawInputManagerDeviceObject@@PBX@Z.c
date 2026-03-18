/*
 * XREFs of ?ProcessInput@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@PBX@Z @ 0x1AC3CE
 * Callers:
 *     ?InkProcessorOnInkDeviceInputReport@@YGXPAURawInputManagerDeviceObject@@PAX@Z @ 0x183811 (-InkProcessorOnInkDeviceInputReport@@YGXPAURawInputManagerDeviceObject@@PAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

void __thiscall InkProcessor::ProcessInput(InkProcessor *this, struct RawInputManagerDeviceObject *a2, const void *a3)
{
  int v4; // ecx
  int v5; // [esp+4h] [ebp-8h] BYREF
  const char *v6; // [esp+8h] [ebp-4h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0);
  if ( !*((_BYTE *)this + 4) && (unsigned int)CallbackContext > 2 )
  {
    v6 = "Ink processor not enabled";
    v5 = -1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v4,
      byte_25690B,
      v4,
      v4,
      (int)&v5,
      &v6);
  }
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
}
