/*
 * XREFs of ?IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000D130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::IrpMJCloseHandler(
        CSidebandDevice *this,
        struct _DEVICE_OBJECT *a2,
        struct _IRP *a3)
{
  PFILE_OBJECT FileObject; // rdi
  KIRQL v6; // si
  _QWORD **v7; // r9
  _QWORD *v8; // rcx
  _QWORD **v9; // rdx
  __int64 v10; // rdx
  _QWORD *v12; // rax
  int v13; // [rsp+28h] [rbp-20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x83u,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
  FileObject = a3->Tail.Overlay.CurrentStackLocation->FileObject;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)this + 5) + 240LL));
  v7 = (_QWORD **)(*((_QWORD *)this + 5) + 224LL);
  v8 = *v7;
  if ( *v7 != v7 )
  {
    while ( 1 )
    {
      v9 = (_QWORD **)*v8;
      if ( (PFILE_OBJECT)*(v8 - 1) == FileObject )
        break;
      v8 = (_QWORD *)*v8;
      if ( v9 == v7 )
        goto LABEL_7;
    }
    if ( v9[1] != v8 || (v12 = (_QWORD *)v8[1], (_QWORD *)*v12 != v8) )
      __fastfail(3u);
    *v12 = v9;
    v9[1] = v12;
    ExFreePool(v8 - 1);
  }
LABEL_7:
  KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 5) + 240LL), v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      9u,
      0x1Bu,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
  if ( !--**((_DWORD **)this + 5) )
    (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)this + 16LL))(this);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = 0;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      9u,
      0x84u,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids,
      v13);
  }
  return 0LL;
}
