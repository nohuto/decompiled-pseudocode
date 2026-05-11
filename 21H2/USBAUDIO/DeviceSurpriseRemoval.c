/*
 * XREFs of DeviceSurpriseRemoval @ 0x1C0023180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001258 (WPP_RECORDER_SF_q.c)
 *     ExitIrpThreadAndQueue @ 0x1C00038A4 (ExitIrpThreadAndQueue.c)
 *     DeInitSideband @ 0x1C0008EB8 (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DeviceSurpriseRemoval(_QWORD *Object, __int64 a2))(_QWORD *)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  void *v5; // rcx
  PVOID i; // rax
  struct _KSFILTER *j; // rax
  ULONG k; // r15d
  PKSPIN m; // rax
  _QWORD *Context; // r13
  void (__fastcall *v11)(struct _KSPIN *); // rax
  struct _KSPIN *v12; // r14
  struct _KSFILTER *v13; // rbx
  void *v14; // rbp
  struct _KSFILTERFACTORY *v15; // rcx
  __int64 (__fastcall *result)(_QWORD *); // rax

  v2 = Object[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0x21u,
      (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
      Object);
  KeWaitForSingleObject((PVOID)(v2 + 744), Executive, 0, 0, 0LL);
  DeInitSideband((__int64)Object, v4);
  KeReleaseMutex((PRKMUTEX)(v2 + 744), 0);
  v5 = *(void **)(v2 + 984);
  if ( v5 )
  {
    KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(*(PVOID *)(v2 + 984), 0x65627845u);
    *(_QWORD *)(v2 + 984) = 0LL;
  }
  ExitIrpThreadAndQueue(v2);
  for ( i = KsGetFirstChild(Object); ; i = KsGetNextSibling(v14) )
  {
    v14 = i;
    if ( !i )
      break;
    for ( j = (struct _KSFILTER *)KsGetFirstChild(i); ; j = (struct _KSFILTER *)KsGetNextSibling(v13) )
    {
      v13 = j;
      if ( !j )
        break;
      KsAcquireControl(j);
      for ( k = 0; k < v13->Descriptor->PinDescriptorsCount; ++k )
      {
        for ( m = KsFilterGetFirstChildPin(v13, k); ; m = KsPinGetNextSiblingPin(v12) )
        {
          v12 = m;
          if ( !m )
            break;
          Context = m->Context;
          v11 = *(void (__fastcall **)(struct _KSPIN *))(*(_QWORD *)(Context[18] + 128LL) + 32LL);
          if ( v11 )
            v11(v12);
          *((_BYTE *)Context + 46) = 1;
        }
      }
      KsReleaseControl(v13);
    }
  }
  v15 = *(struct _KSFILTERFACTORY **)(v2 + 120);
  if ( v15 )
  {
    KsFilterFactorySetDeviceClassesState(v15, 0);
    *(_QWORD *)(v2 + 120) = 0LL;
  }
  *(_BYTE *)(Object[2] + 67LL) = 1;
  result = *(__int64 (__fastcall **)(_QWORD *))(pExtBusDeviceDispatchTable + 32);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD *))result(Object);
  return result;
}
