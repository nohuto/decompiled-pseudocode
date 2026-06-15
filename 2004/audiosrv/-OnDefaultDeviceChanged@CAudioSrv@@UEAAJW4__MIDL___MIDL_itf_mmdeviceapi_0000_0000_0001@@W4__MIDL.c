/*
 * XREFs of ?OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800B9D40
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800BAAF4 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 */

__int64 __fastcall CAudioSrv::OnDefaultDeviceChanged(
        CAudioSrv *this,
        unsigned int a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  return CAudioSrv::QueueOnDeviceWorkItem((char *)this - 72, a4, a3, a2, a3);
}
