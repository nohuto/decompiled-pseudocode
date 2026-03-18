/*
 * XREFs of ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0254E90
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024ED1C (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02433E0 (-Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C02434B0 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C024F7A8 (-GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabiliti.c)
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1C024FA04 (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C0255E20 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 *     ?ValidateDeviceFeatures@InkDevice@@AEBAJXZ @ 0x1C0255EAC (-ValidateDeviceFeatures@InkDevice@@AEBAJXZ.c)
 */

__int64 __fastcall InkDevice::Initialize(InkDevice *this, struct RawInputManagerDeviceObject *a2)
{
  signed int DeviceCaps; // eax
  int v4; // ebx
  __int64 v5; // rdi
  struct _HIDP_PREPARSED_DATA *v6; // r15
  struct UsageValueInfo *v7; // rax
  _BYTE *v8; // r14
  signed int DeviceFeatures; // eax
  int v10; // r9d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rax
  unsigned int v17; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+74h] [rbp-8Ch]
  _BYTE v22[544]; // [rsp+80h] [rbp-80h] BYREF

  DeviceCaps = Rim::RimBackedDeviceBase::Initialize(this, a2);
  v4 = DeviceCaps;
  if ( DeviceCaps < 0 )
  {
    if ( (unsigned int)dword_1C032A288 <= 2 )
      goto LABEL_39;
    goto LABEL_3;
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 552);
  v6 = *(struct _HIDP_PREPARSED_DATA **)(v5 + 16);
  if ( *(_WORD *)(v5 + 42) != 0xFF0F || *(_WORD *)(v5 + 40) != 256 || *(_WORD *)(v5 + 110) != 1118 )
  {
    v4 = -1073741811;
    if ( (unsigned int)dword_1C032A288 > 2 )
    {
      v17 = -1073741811;
      goto LABEL_43;
    }
    goto LABEL_44;
  }
  v7 = (struct UsageValueInfo *)Win32AllocPoolZInit(76LL, 1349217865LL);
  *((_QWORD *)this + 19) = v7;
  if ( !v7 )
  {
    v4 = -1073741801;
    if ( (unsigned int)dword_1C032A288 > 2 )
    {
      v17 = -1073741801;
LABEL_43:
      v21 = 0;
      v19 = &v17;
      v20 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C032A288,
        (unsigned __int8 *)dword_1C02F0A0C,
        0LL,
        0LL,
        3u,
        &v18);
      goto LABEL_44;
    }
    goto LABEL_44;
  }
  DeviceCaps = InkDeviceParser::GetDeviceCaps(v6, (struct UsageValueInfo *)v22, v7, (InkDevice *)((char *)this + 104));
  v4 = DeviceCaps;
  if ( DeviceCaps >= 0 )
  {
    v8 = (_BYTE *)Win32AllocPoolZInit(*(unsigned __int16 *)(v5 + 48), 1349217865LL);
    if ( !v8 )
    {
      v4 = -1073741801;
      if ( (unsigned int)dword_1C032A288 > 2 )
      {
        v17 = -1073741801;
        goto LABEL_43;
      }
LABEL_44:
      InkDevice::UnInitialize(this);
      return (unsigned int)v4;
    }
    *v8 = *((_BYTE *)this + 104);
    DeviceFeatures = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
                       this,
                       0xB0192u,
                       0LL,
                       0,
                       v8,
                       *(unsigned __int16 *)(v5 + 48),
                       &v17);
    v4 = DeviceFeatures;
    if ( DeviceFeatures >= 0 )
    {
      DeviceFeatures = InkDeviceParser::GetDeviceFeatures(
                         v6,
                         v8,
                         *(unsigned __int16 *)(v5 + 48),
                         (const struct UsageValueInfo *)v22,
                         (InkDevice *)((char *)this + 116));
      v4 = DeviceFeatures;
      if ( DeviceFeatures >= 0 )
      {
        DeviceFeatures = InkDevice::ValidateDeviceFeatures(this);
        v4 = DeviceFeatures;
        if ( DeviceFeatures >= 0 )
        {
          v10 = *((_DWORD *)this + 36);
          v11 = (4 * (v10 & 0x10)) | 0xB;
          if ( (v10 & 4) == 0 )
            v11 = (4 * (*((_DWORD *)this + 36) & 0x10)) | 9;
          v12 = v11 | 4;
          if ( (v10 & 8) == 0 )
            v12 = v11;
          v13 = v12 | 0x10;
          if ( (v10 & 1) == 0 )
            v13 = v12;
          v14 = v13 | 0x20;
          if ( (v10 & 2) == 0 )
            v14 = v13;
          *((_DWORD *)this + 37) = v14;
          v15 = Win32AllocPoolZInit(*(unsigned __int16 *)(v5 + 46), 1349217865LL);
          *((_QWORD *)this + 20) = v15;
          if ( v15 )
            goto LABEL_38;
          DeviceFeatures = -1073741801;
          v4 = -1073741801;
          if ( (unsigned int)dword_1C032A288 <= 2 )
            goto LABEL_38;
          goto LABEL_37;
        }
        if ( (unsigned int)dword_1C032A288 > 2 )
        {
LABEL_37:
          v21 = 0;
          v17 = DeviceFeatures;
          v20 = 4;
          v19 = &v17;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C032A288,
            (unsigned __int8 *)dword_1C02F0A0C,
            0LL,
            0LL,
            3u,
            &v18);
        }
      }
      else if ( (unsigned int)dword_1C032A288 > 2 )
      {
        goto LABEL_37;
      }
    }
    else if ( (unsigned int)dword_1C032A288 > 2 )
    {
      goto LABEL_37;
    }
LABEL_38:
    Win32FreePool(v8);
    goto LABEL_39;
  }
  if ( (unsigned int)dword_1C032A288 > 2 )
  {
LABEL_3:
    v21 = 0;
    v17 = DeviceCaps;
    v20 = 4;
    v19 = &v17;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032A288, (unsigned __int8 *)dword_1C02F0A0C, 0LL, 0LL, 3u, &v18);
  }
LABEL_39:
  if ( v4 < 0 )
    goto LABEL_44;
  return (unsigned int)v4;
}
