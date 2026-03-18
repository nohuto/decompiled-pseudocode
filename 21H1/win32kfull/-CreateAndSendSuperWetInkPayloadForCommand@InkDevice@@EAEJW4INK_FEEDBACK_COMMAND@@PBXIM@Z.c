/*
 * XREFs of ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z @ 0x1B034C
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1B04AA (-DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AAEJPBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1B0675 (-DoSuperWetInkStop@InkDevice@@AAEJPBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z @ 0x1A16B5 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z.c)
 *     ?PopulatePayloadReport@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBUUsageValueInfo@@PBXKPAXK@Z @ 0x1AC6C4 (-PopulatePayloadReport@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBUUsageValueInfo@@PBXKPAXK@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U?$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@43ABU?$_tlgWrapperByVal@$00@@ABU_tlgWrapperBinary@@@Z @ 0x1B01CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@U-$_tlgWrapperByVal@$00@@U_tlgWrapperBi.c)
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_COMMAND@@PBXIMPAUPayloadV1@12@@Z @ 0x1B0B80 (-PopulatePayloadV1@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_COMMAND@@PBXIMPAUPayloadV1@12@@Z.c)
 */

CHAR *__thiscall InkDevice::CreateAndSendSuperWetInkPayloadForCommand(int this, int a2, int a3, int a4, int a5)
{
  int v6; // ebx
  int v7; // ebx
  const struct UsageValueInfo *v8; // ecx
  CHAR *v9; // esi
  void *v11; // [esp+8h] [ebp-78h]
  unsigned int v12; // [esp+Ch] [ebp-74h]
  CHAR *v13; // [esp+14h] [ebp-6Ch] BYREF
  __int16 v14; // [esp+18h] [ebp-68h]
  int v15; // [esp+1Ch] [ebp-64h] BYREF
  const char *v16; // [esp+20h] [ebp-60h] BYREF
  const char *v17; // [esp+24h] [ebp-5Ch] BYREF
  char v18; // [esp+2Bh] [ebp-55h] BYREF
  int v19; // [esp+2Ch] [ebp-54h] BYREF
  CHAR UsageValue[76]; // [esp+30h] [ebp-50h] BYREF

  v6 = *(_DWORD *)(this + 12);
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 332);
  else
    v7 = 0;
  v19 = *(_DWORD *)(v7 + 8);
  memset(UsageValue, 0, 0x48u);
  v9 = (CHAR *)Protocols::SuperWetInk::PopulatePayloadV1(a2, a3, a4, a5, UsageValue);
  if ( (int)v9 >= 0 )
  {
    v9 = InkDeviceParser::PopulatePayloadReport(
           *(_DWORD *)(this + 104),
           (struct _HIDP_PREPARSED_DATA *)v19,
           UsageValue,
           v8,
           *(PCHAR *)(this + 108),
           *(unsigned __int16 *)(v7 + 26),
           v11,
           v12);
    if ( (int)v9 < 0 )
    {
      if ( (unsigned int)CallbackContext <= 2 )
        return v9;
      goto LABEL_6;
    }
    v9 = (CHAR *)Rim::RimBackedDeviceBase::SendSynchronousIoControl(
                   (Rim::RimBackedDeviceBase *)this,
                   0xB0195u,
                   *(PVOID *)(this + 108),
                   *(unsigned __int16 *)(v7 + 26),
                   0,
                   0,
                   0);
    if ( (int)v9 < 0 )
    {
      if ( (unsigned int)CallbackContext <= 2 )
        return v9;
      goto LABEL_6;
    }
    if ( (unsigned int)CallbackContext > 4 )
    {
      v16 = "Sent super-wet ink payload";
      v13 = UsageValue;
      v14 = 72;
      v18 = a2;
      v15 = 0;
      v17 = *(const char **)(this + 44);
      v19 = this != 0 ? this + 20 : 0;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperBinary>(
        v19,
        byte_2572E0,
        v19,
        v19,
        (int)&v15,
        &v16,
        &v17,
        (int)&v19,
        (int)&v18,
        (int *)&v13);
    }
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
LABEL_6:
    v19 = (int)v9;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      (int)v8,
      (int)v8,
      (int)&v19);
  }
  return v9;
}
