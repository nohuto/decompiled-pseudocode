/*
 * XREFs of ?Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B0877
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1ABE31 (-OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z @ 0x1A16B5 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z.c)
 *     ?GetDeviceCaps@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAUUsageValueInfo@@1PAVCapabilities@InkDevice@@@Z @ 0x1AC505 (-GetDeviceCaps@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAUUsageValueInfo@@1PAVCapabilities@.c)
 *     ?GetDeviceFeatures@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBXKPBUUsageValueInfo@@PAVFeatures@InkDevice@@@Z @ 0x1AC5CD (-GetDeviceFeatures@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBXKPBUUsageValueInfo@@PAVFeatur.c)
 *     ?IsInkDevice@InkDeviceParser@@SG_NGGPBG0@Z @ 0x1AC683 (-IsInkDevice@InkDeviceParser@@SG_NGGPBG0@Z.c)
 *     ?InkFeedbackCapabilitiesFromExtendedFeatures@SuperWetInk@Protocols@@YG?AW4InkFeedbackCapabilities@@W4ExtendedFeatures@12@@Z @ 0x1B0B0B (-InkFeedbackCapabilitiesFromExtendedFeatures@SuperWetInk@Protocols@@YG-AW4InkFeedbackCapabilitie.c)
 *     ?UnInitialize@InkDevice@@UAEXXZ @ 0x1B12FF (-UnInitialize@InkDevice@@UAEXXZ.c)
 *     ?ValidateDeviceFeatures@InkDevice@@ABEJXZ @ 0x1B1367 (-ValidateDeviceFeatures@InkDevice@@ABEJXZ.c)
 */

int __thiscall InkDevice::Initialize(InkDevice *this, struct RawInputManagerDeviceObject *a2)
{
  int v3; // ecx
  int DeviceCaps; // esi
  int v5; // ebx
  int v6; // esi
  __int16 v7; // dx
  __int16 v8; // cx
  int v9; // ecx
  struct _HIDP_PREPARSED_DATA *v10; // eax
  _BYTE *v11; // eax
  NTSTATUS v12; // eax
  int v13; // ecx
  _BYTE *DeviceFeatures; // eax
  int v15; // eax
  int v16; // eax
  const unsigned __int16 *v18; // [esp+0h] [ebp-23Ch]
  struct UsageValueInfo *v19; // [esp+0h] [ebp-23Ch]
  const struct UsageValueInfo *v20; // [esp+0h] [ebp-23Ch]
  const unsigned __int16 *v21; // [esp+4h] [ebp-238h]
  struct InkDevice::Capabilities *v22; // [esp+4h] [ebp-238h]
  struct InkDevice::Features *v23; // [esp+4h] [ebp-238h]
  unsigned int v24; // [esp+10h] [ebp-22Ch] BYREF
  int v25; // [esp+14h] [ebp-228h] BYREF
  unsigned __int16 v26[2]; // [esp+18h] [ebp-224h] BYREF
  enum _HIDP_REPORT_TYPE v27[135]; // [esp+1Ch] [ebp-220h] BYREF

  DeviceCaps = RawInputManagerDeviceObjectReference(a2);
  if ( DeviceCaps < 0 )
  {
    if ( (unsigned int)CallbackContext <= 2 )
      goto LABEL_34;
    goto LABEL_5;
  }
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    v5 = *((_DWORD *)a2 + 83);
  else
    v5 = 0;
  v6 = *(_DWORD *)(v5 + 8);
  v7 = *(_WORD *)(v5 + 20);
  v8 = *(_WORD *)(v5 + 22);
  *(_DWORD *)v26 = *(unsigned __int16 *)(v5 + 90);
  v25 = v6;
  if ( !InkDeviceParser::IsInkDevice(v7, v8, v26, 0, v18, v21) )
  {
    DeviceCaps = -1073741811;
    if ( (unsigned int)CallbackContext <= 2 )
    {
LABEL_35:
      InkDevice::UnInitialize(this);
      return DeviceCaps;
    }
    *(_DWORD *)v26 = -1073741811;
LABEL_10:
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      v9,
      v9,
      (int)v26);
    goto LABEL_35;
  }
  v10 = (struct _HIDP_PREPARSED_DATA *)Win32AllocPoolZInit(76, 1349217865);
  *((_DWORD *)this + 26) = v10;
  if ( !v10 )
  {
    DeviceCaps = -1073741801;
    if ( (unsigned int)CallbackContext <= 2 )
      goto LABEL_35;
    *(_DWORD *)v26 = -1073741801;
    goto LABEL_10;
  }
  DeviceCaps = InkDeviceParser::GetDeviceCaps((int)v27, v10, (InkDevice *)((char *)this + 56), v19, v22);
  if ( DeviceCaps >= 0 )
  {
    v11 = (_BYTE *)Win32AllocPoolZInit(*(unsigned __int16 *)(v5 + 28), 1349217865);
    v9 = (int)v11;
    *(_DWORD *)v26 = v11;
    if ( !v11 )
    {
      DeviceCaps = -1073741801;
      if ( (unsigned int)CallbackContext <= 2 )
        goto LABEL_35;
      *(_DWORD *)v26 = -1073741801;
      goto LABEL_10;
    }
    *v11 = *((_BYTE *)this + 56);
    v12 = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
            this,
            0xB0192u,
            0,
            0,
            v11,
            *(unsigned __int16 *)(v5 + 28),
            &v24);
    DeviceCaps = v12;
    if ( v12 >= 0 )
    {
      DeviceFeatures = InkDeviceParser::GetDeviceFeatures(
                         *(CHAR **)v26,
                         (struct _HIDP_PREPARSED_DATA *)v25,
                         (struct _HIDP_PREPARSED_DATA *)*(unsigned __int16 *)(v5 + 28),
                         (enum _HIDP_REPORT_TYPE)v27,
                         (_DWORD *)this + 17,
                         v20,
                         v23);
      DeviceCaps = (int)DeviceFeatures;
      if ( (int)DeviceFeatures >= 0 )
      {
        v15 = InkDevice::ValidateDeviceFeatures(this);
        DeviceCaps = v15;
        if ( v15 >= 0 )
        {
          *((_DWORD *)this + 25) = Protocols::SuperWetInk::InkFeedbackCapabilitiesFromExtendedFeatures(*((_DWORD *)this + 24));
          v16 = Win32AllocPoolZInit(*(unsigned __int16 *)(v5 + 26), 1349217865);
          *((_DWORD *)this + 27) = v16;
          if ( v16 )
            goto LABEL_33;
          DeviceCaps = -1073741801;
          if ( (unsigned int)CallbackContext <= 2 )
            goto LABEL_33;
          v25 = -1073741801;
          goto LABEL_32;
        }
        if ( (unsigned int)CallbackContext > 2 )
        {
          v25 = v15;
          goto LABEL_32;
        }
      }
      else if ( (unsigned int)CallbackContext > 2 )
      {
        v25 = (int)DeviceFeatures;
        goto LABEL_32;
      }
    }
    else if ( (unsigned int)CallbackContext > 2 )
    {
      v25 = v12;
LABEL_32:
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&CallbackContext,
        byte_2558E4,
        v13,
        v13,
        (int)&v25);
    }
LABEL_33:
    Win32FreePool(*(_DWORD *)v26);
    goto LABEL_34;
  }
  if ( (unsigned int)CallbackContext > 2 )
  {
LABEL_5:
    *(_DWORD *)v26 = DeviceCaps;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      v3,
      v3,
      (int)v26);
  }
LABEL_34:
  if ( DeviceCaps < 0 )
    goto LABEL_35;
  return DeviceCaps;
}
