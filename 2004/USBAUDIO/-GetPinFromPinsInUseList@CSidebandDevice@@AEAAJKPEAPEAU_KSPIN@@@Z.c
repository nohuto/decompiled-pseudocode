/*
 * XREFs of ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000BD20
 * Callers:
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FBB0 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FEA4 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00101AC (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0010570 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001088C (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::GetPinFromPinsInUseList(CSidebandDevice *this, __int64 a2, struct _KSPIN **a3)
{
  int v4; // r14d
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  KSPIN_LOCK *v9; // rbp
  KIRQL v10; // al
  _QWORD *v11; // rbx
  KIRQL v12; // dl
  _QWORD *i; // rax
  struct _KSPIN *v14; // rcx
  __int64 v15; // rdx
  unsigned int v17; // [rsp+28h] [rbp-20h]

  v4 = a2;
  v6 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x51u,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids);
  v7 = *((_QWORD *)this + 4);
  *a3 = 0LL;
  v8 = *(_QWORD *)(v7 + 16);
  v9 = (KSPIN_LOCK *)(v8 + 96);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 96));
  v11 = (_QWORD *)(v8 + 104);
  v12 = v10;
  for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
  {
    v14 = (struct _KSPIN *)i[3];
    if ( v14->Id == v4 )
    {
      *a3 = v14;
      v6 = 0;
      break;
    }
  }
  KeReleaseSpinLock(v9, v12);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v17 = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      9u,
      0x52u,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
      v17);
  }
  return v6;
}
