/*
 * XREFs of ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000DD14
 * Callers:
 *     ?staticIoQueueThread@CSidebandDevice@@SAXPEAX@Z @ 0x1C000E0F0 (-staticIoQueueThread@CSidebandDevice@@SAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     ?Feature_Servicing_2101c_29879707__private_IsEnabled@@YAHXZ @ 0x1C00099D0 (-Feature_Servicing_2101c_29879707__private_IsEnabled@@YAHXZ.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D59C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C000E01C (-EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall CSidebandDevice::IoQueueThread(struct _LIST_ENTRY *this, __int64 a2)
{
  struct _IRP *v3; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  Object[0] = &this[12].Blink;
  Object[1] = &this[11];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0xA5u,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
  while ( 1 )
  {
    v4 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( v4 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        9u,
        0xA6u,
        (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
    v3 = IoCsqRemoveNextIrp((PIO_CSQ)&this[2].Blink[10], &this[4]);
    if ( v3 )
    {
      if ( (unsigned int)Feature_Servicing_2101c_29879707__private_IsEnabled() )
      {
        CSidebandDevice::SidebandApi((CSidebandDevice *)this, v3);
      }
      else
      {
        KeWaitForSingleObject(&this[2].Blink[2].Blink, Executive, 0, 0, 0LL);
        CSidebandDevice::SidebandApi((CSidebandDevice *)this, v3);
        KeReleaseMutex((PRKMUTEX)&this[2].Blink[2].Blink, 0);
      }
    }
  }
  if ( v4 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        9u,
        0xA7u,
        (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6,
        9u,
        0xA8u,
        (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v7,
        9u,
        0xA9u,
        (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v8,
        9u,
        0xAAu,
        (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        9u,
        0xABu,
        (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        9u,
        0xACu,
        (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 9);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      9u,
      0xADu,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
  PsTerminateSystemThread(0);
}
