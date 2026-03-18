/*
 * XREFs of ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18008C488
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800471B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180048940 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::UpdateContentFlags(CVisual *this)
{
  char v2; // al
  char v3; // al
  __int64 v4; // rcx

  v2 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 352LL))(this);
  *((_BYTE *)this + 100) &= ~1u;
  *((_BYTE *)this + 100) |= v2 & 1;
  v3 = 0;
  v4 = *((_QWORD *)this + 32);
  if ( v4 )
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 240LL))(v4);
  *((_BYTE *)this + 102) &= ~0x40u;
  *((_BYTE *)this + 102) |= (v3 & 1) << 6;
  CVisual::UpdateBackdropBlurFlag(this);
}
