/*
 * XREFs of RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00AB898
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C00563B0 (RIMRemoveInputOfType.c)
 *     RIMUnregisterForInput @ 0x1C00AB430 (RIMUnregisterForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C00AF0F0 (RIMDirectStopDeviceClassNotifications.c)
 *     _lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_ @ 0x1C00AF210 (_lambda_472f4db53ddf5878963a84144a71a26c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C00AB980 (DeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMUnRegisterForInputDeviceTypeClassNotifications(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  char v7; // [rsp+30h] [rbp-18h]

  v4 = (unsigned int)a2;
  if ( ((unsigned int)DeviceTypeToRimInputType((unsigned int)a2, a2, a3) & *(_DWORD *)(a1 + 84)) != 0
    && *(_QWORD *)(a1 + 8 * v4 + 224)
    && !*(_DWORD *)(a1 + 4 * v4 + 296) )
  {
    v6 = *(_QWORD *)(a1 + 8 * v4 + 312);
    *(_QWORD *)(v6 + 88) = a1;
    v7 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * v4 + 312) + 96LL) = v4;
    KeInitializeApc(
      v6,
      KeGetCurrentThread(),
      0LL,
      CIgnoreInputQueue::MarkInvalid,
      rimRundownApcIoUnregisterPlugPlayNotificationEx,
      rimNormalApcIoUnregisterPlugPlayNotificationEx,
      v7,
      v6 + 88);
    KeInsertQueueApc(v6, v6, 0LL, 0LL);
    *(_DWORD *)(a1 + 4 * v4 + 296) = 1;
  }
  return 0LL;
}
