/*
 * XREFs of PinSetDeviceState @ 0x1C0024CD0
 * Callers:
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F7C0 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FAB4 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qddd @ 0x1C000211C (WPP_RECORDER_SF_qddd.c)
 *     WmiLogStreamStateChange @ 0x1C0003738 (WmiLogStreamStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 *     IncrementActivePinCount @ 0x1C0024B50 (IncrementActivePinCount.c)
 *     DecrementActivePinCount @ 0x1C0024C48 (DecrementActivePinCount.c)
 */

__int64 __fastcall PinSetDeviceState(struct _KSPIN *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *Context; // r14
  unsigned int v5; // edi
  unsigned int v6; // esi
  int active; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+20h] [rbp-38h]

  Context = a1->Context;
  v5 = a3;
  v6 = a2;
  if ( (_DWORD)a2 != 3 || (_DWORD)a3 == 3 || (active = IncrementActivePinCount(a1, a2, a3, a4), active >= 0) )
  {
    active = (*(__int64 (__fastcall **)(struct _KSPIN *, _QWORD, _QWORD))(*(_QWORD *)(Context[18] + 128LL) + 48LL))(
               a1,
               v5,
               v6);
    if ( active < 0 )
    {
      if ( v6 == 3 && v5 != 3 )
        goto LABEL_10;
    }
    else if ( v6 != 3 && v5 == 3 )
    {
LABEL_10:
      active = DecrementActivePinCount((__int64)a1);
    }
  }
  WmiLogStreamStateChange(v5, v6, active);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, v13);
  return (unsigned int)active;
}
