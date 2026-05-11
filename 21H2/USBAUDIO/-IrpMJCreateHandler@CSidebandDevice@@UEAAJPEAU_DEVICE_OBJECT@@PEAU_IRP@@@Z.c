/*
 * XREFs of ?IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000CCC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::IrpMJCreateHandler(
        CSidebandDevice *this,
        struct _DEVICE_OBJECT *a2,
        struct _IRP *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v6; // ebx
  PFILE_OBJECT FileObject; // rsi
  char *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v13; // [rsp+28h] [rbp-20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x81u,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = 0;
  FileObject = CurrentStackLocation->FileObject;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x33627845u);
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 8;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 8;
    *(_QWORD *)PoolWithTag = FileObject;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(*((_QWORD *)this + 5) + 224LL),
      (PLIST_ENTRY)(PoolWithTag + 8),
      (PKSPIN_LOCK)(*((_QWORD *)this + 5) + 240LL));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        9u,
        0x1Au,
        (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
    ++**((_DWORD **)this + 5);
    (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    v6 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      9u,
      0x19u,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
      -1073741670);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v13) = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      9u,
      0x82u,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
      v13);
  }
  return v6;
}
