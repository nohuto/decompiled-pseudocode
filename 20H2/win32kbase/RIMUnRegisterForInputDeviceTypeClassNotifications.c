/*
 * XREFs of RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C002776C
 * Callers:
 *     _lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_ @ 0x1C0025EB0 (_lambda_472f4db53ddf5878963a84144a71a26c_--_lambda_invoker_cdecl_.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0025F40 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMUnregisterForInput @ 0x1C0026970 (RIMUnregisterForInput.c)
 *     RIMRemoveInputOfType @ 0x1C0075600 (RIMRemoveInputOfType.c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C0027850 (DeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMUnRegisterForInputDeviceTypeClassNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v5; // rbx
  char v6; // [rsp+30h] [rbp-18h]

  v3 = a2;
  if ( ((unsigned int)DeviceTypeToRimInputType(a2) & *(_DWORD *)(a1 + 84)) != 0
    && *(_QWORD *)(a1 + 8 * v3 + 224)
    && !*(_DWORD *)(a1 + 4 * v3 + 296) )
  {
    v5 = *(_QWORD *)(a1 + 8 * v3 + 312);
    *(_QWORD *)(v5 + 88) = a1;
    v6 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 312) + 96LL) = v3;
    KeInitializeApc(
      v5,
      KeGetCurrentThread(),
      0LL,
      CIgnoreInputQueue::MarkInvalid,
      rimRundownApcIoUnregisterPlugPlayNotificationEx,
      rimNormalApcIoUnregisterPlugPlayNotificationEx,
      v6,
      v5 + 88);
    KeInsertQueueApc(v5, v5, 0LL, 0LL);
    *(_DWORD *)(a1 + 4 * v3 + 296) = 1;
  }
  return 0LL;
}
