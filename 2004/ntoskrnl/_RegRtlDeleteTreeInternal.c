/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x140754744
 * Callers:
 *     _CmRemoveDeviceFromContainerWorker @ 0x14071A340 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14071A9B0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14071AED4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14071B76C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x14071BE68 (PiDqDeleteUserObject.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071E318 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071E56C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgConfigureDevice @ 0x1407232F0 (PiDevCfgConfigureDevice.c)
 *     _PnpSetPropertyWorker @ 0x140726CB0 (_PnpSetPropertyWorker.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14072E988 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgCopyDeviceKey @ 0x14074A84C (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140754744 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgFreeResolveContext @ 0x14075554C (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1407556C8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgInitResolveContext @ 0x140755ADC (PiDevCfgInitResolveContext.c)
 *     PipHardwareConfigActivateService @ 0x140769500 (PipHardwareConfigActivateService.c)
 *     _PnpCtxRegDeleteTree @ 0x14078BDA8 (_PnpCtxRegDeleteTree.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140971960 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1409749CC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1409756EC (_CmRemovePanelDeviceWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1409794AC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1409798BC (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     IoGetStackLimits @ 0x14029ADF0 (IoGetStackLimits.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1405E1D30 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlQueryInfoKey @ 0x140704ABC (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140754744 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKey @ 0x14075494C (_RegRtlEnumKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140754B28 (_RegRtlDeleteKeyTransacted.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(char *a1, const WCHAR *a2, __int64 a3, char a4)
{
  int v4; // r14d
  PVOID PoolWithTag; // rsi
  unsigned int v8; // r15d
  int v10; // ebx
  unsigned int v11; // eax
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // r9
  int v15; // eax
  unsigned int v17; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 HighLimit; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 LowLimit; // [rsp+48h] [rbp-8h] BYREF

  v4 = 0;
  Handle = 0LL;
  v17 = 0;
  HighLimit = 0LL;
  PoolWithTag = 0LL;
  LowLimit = 0LL;
  v8 = 0;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v10 = -1073741670;
    goto LABEL_12;
  }
  v10 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x3001Fu, &Handle, a3);
  if ( v10 < 0 )
    goto LABEL_12;
  if ( (unsigned int)RegRtlQueryInfoKey(Handle, 0LL, &v17, 0LL, 0LL, 0LL) )
  {
    LODWORD(v12) = 0;
  }
  else
  {
    v11 = v17;
    if ( v17 )
    {
      if ( v17 + 1 < v17 )
      {
        v10 = -1073741675;
        v11 = -1;
      }
      else
      {
        v10 = 0;
        v11 = v17 + 1;
      }
      if ( v10 < 0 )
        goto LABEL_12;
    }
    v12 = 2LL * v11;
    if ( v12 > 0xFFFFFFFF )
    {
      v10 = -1073741675;
      goto LABEL_12;
    }
    v10 = 0;
  }
  if ( (_DWORD)v12 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v12, 0x4C474552u);
    if ( !PoolWithTag )
    {
      v10 = -1073741801;
      goto LABEL_12;
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v17 = (unsigned int)v12 >> 1;
      v13 = RegRtlEnumKey(Handle);
      if ( v13 == -2147483622 || v13 == -1073741444 )
        break;
      if ( v13 == -1073741789 )
      {
        v12 = 2LL * v17;
        if ( v12 > 0xFFFFFFFF )
        {
          v10 = -1073741675;
          goto LABEL_12;
        }
        v10 = 0;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v12, 0x4C474552u);
        if ( !PoolWithTag )
        {
          v10 = -1073741801;
          break;
        }
      }
      else
      {
        if ( v13 )
          break;
        LOBYTE(v14) = a4;
        *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v12 >> 1) - 1) = 0;
        if ( (unsigned int)RegRtlDeleteTreeInternal(Handle, PoolWithTag, a3, v14) )
          ++v4;
        else
          v4 = 0;
      }
    }
    if ( v10 < 0 )
      goto LABEL_12;
    v15 = RegRtlDeleteKeyTransacted(a1, a2, a3);
    if ( v15 != -1073741535 )
      break;
    if ( v4 || v8 >= 0xA )
      goto LABEL_42;
    ++v8;
    v4 = 0;
  }
  if ( v15 >= 0 )
    goto LABEL_12;
LABEL_42:
  v10 = v15;
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v10;
}
